/*
**	Command & Conquer Renegade(tm)
**	Copyright 2025 Electronic Arts Inc.
**
**	This program is free software: you can redistribute it and/or modify
**	it under the terms of the GNU General Public License as published by
**	the Free Software Foundation, either version 3 of the License, or
**	(at your option) any later version.
**
**	This program is distributed in the hope that it will be useful,
**	but WITHOUT ANY WARRANTY; without even the implied warranty of
**	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**	GNU General Public License for more details.
**
**	You should have received a copy of the GNU General Public License
**	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// regexpr.cpp

#include "always.h"
#include "regexpr.h"
#include "wwstring.h"
#include <assert.h>
#include <regex>

/*
** Definition of private DataStruct for RegularExpressionClass
*/

struct RegularExpressionClass::DataStruct
{
	DataStruct (void)
	:	IsValid(false)
	{
		// Blank out the expression structure.
		memset(&CompiledExpr, 0, sizeof(CompiledExpr));
	}

	~DataStruct (void)
	{
		ClearExpression();
	}

	void ClearExpression (void)
	{
		// Erase the expression string.
		ExprString = "";

		// No longer a valid compiled expression.
		IsValid = false;
	}


	// The regular expression that has been compiled.
	StringClass	ExprString;

	// gnu_regex compiled version of the regular expression used
	// during matching or any form of evaluation
	std::regex  	CompiledExpr;

	// True if CompiledExpr is valid.
	bool			IsValid;
};



/*
** RegularExpressionClass Implementation
*/

RegularExpressionClass::RegularExpressionClass (const char *expression)
:	Data(0)
{
	// Allocate our private members.
	Data = new DataStruct;
	assert(Data);

	// Compile the expression if we were given one.
	if (expression)
		Compile(expression);
}


RegularExpressionClass::RegularExpressionClass (const RegularExpressionClass &copy)
:	Data(0)
{
	// Allocate our private members.
	Data = new DataStruct;
	assert(Data);

	// Compile the expression if the given object had one.
	if (copy.Is_Valid())
	{
		Compile(copy.Data->ExprString);
		assert(Is_Valid());
	}
}


RegularExpressionClass::~RegularExpressionClass (void)
{
	delete Data;
	Data = 0;
}


bool RegularExpressionClass::Compile (const char *expression)
{
	assert(Data);
	assert(expression);

	// Clear any existing expression data. This makes it safe to
	// call Compile() twice on one object.
	Data->ClearExpression();

	try
	{
		std::regex error_str = std::regex(expression);

		Data->IsValid = true;
		Data->ExprString = expression;

		return true;
	}
	catch (const std::regex_error* regex_error)
	{
		return false;
	}
}


bool RegularExpressionClass::Is_Valid (void) const
{
	assert(Data);
	return Data->IsValid;
}


bool RegularExpressionClass::Match (const char *string) const
{
	assert(Data);

	// If we have no valid compiled expression, we can't match Jack.
	if (!Data->IsValid)
		return false;

	bool bHasMatch = std::regex_search(string, Data->CompiledExpr);

	return bHasMatch;
}


/*
** Operators
*/

RegularExpressionClass & RegularExpressionClass::operator = (const RegularExpressionClass &rhs)
{
	// Check for assignment to self.
	if (*this == rhs)
		return *this;

	// Assign that object to this one.
	assert(rhs.Data);
	Compile(rhs.Data->ExprString);
	assert(Is_Valid());

	// Return this object.
	return *this;
}


bool RegularExpressionClass::operator == (const RegularExpressionClass &rhs) const
{
	// Two RegularExpressionClass objects are equivalent if they both
	// have the same validity state, and if that state is 'true' both
	// of their expressions are the same.

	// Check validity states for equality.
	if (Is_Valid() != rhs.Is_Valid())
		return false;

	// If they're valid, check their expressions.
	if (Is_Valid())
	{
		// The objects are not equivalent if their expression strings
		// don't match.
		if (Data->ExprString != rhs.Data->ExprString)
			return false;
	}
	return true;
}


inline bool RegularExpressionClass::operator != (const RegularExpressionClass &rhs) const
{
	return !(*this == rhs);
}


