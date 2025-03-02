

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 03:14:07 2038
 */
/* Compiler settings for VSS.IDL:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __vss_h__
#define __vss_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IVSSItemOld_FWD_DEFINED__
#define __IVSSItemOld_FWD_DEFINED__
typedef interface IVSSItemOld IVSSItemOld;

#endif 	/* __IVSSItemOld_FWD_DEFINED__ */


#ifndef __IVSSItem_FWD_DEFINED__
#define __IVSSItem_FWD_DEFINED__
typedef interface IVSSItem IVSSItem;

#endif 	/* __IVSSItem_FWD_DEFINED__ */


#ifndef __IVSSVersions_FWD_DEFINED__
#define __IVSSVersions_FWD_DEFINED__
typedef interface IVSSVersions IVSSVersions;

#endif 	/* __IVSSVersions_FWD_DEFINED__ */


#ifndef __IVSSVersionOld_FWD_DEFINED__
#define __IVSSVersionOld_FWD_DEFINED__
typedef interface IVSSVersionOld IVSSVersionOld;

#endif 	/* __IVSSVersionOld_FWD_DEFINED__ */


#ifndef __IVSSVersion_FWD_DEFINED__
#define __IVSSVersion_FWD_DEFINED__
typedef interface IVSSVersion IVSSVersion;

#endif 	/* __IVSSVersion_FWD_DEFINED__ */


#ifndef __IVSSItems_FWD_DEFINED__
#define __IVSSItems_FWD_DEFINED__
typedef interface IVSSItems IVSSItems;

#endif 	/* __IVSSItems_FWD_DEFINED__ */


#ifndef __IVSSCheckouts_FWD_DEFINED__
#define __IVSSCheckouts_FWD_DEFINED__
typedef interface IVSSCheckouts IVSSCheckouts;

#endif 	/* __IVSSCheckouts_FWD_DEFINED__ */


#ifndef __IVSSCheckout_FWD_DEFINED__
#define __IVSSCheckout_FWD_DEFINED__
typedef interface IVSSCheckout IVSSCheckout;

#endif 	/* __IVSSCheckout_FWD_DEFINED__ */


#ifndef __IVSSDatabaseOld_FWD_DEFINED__
#define __IVSSDatabaseOld_FWD_DEFINED__
typedef interface IVSSDatabaseOld IVSSDatabaseOld;

#endif 	/* __IVSSDatabaseOld_FWD_DEFINED__ */


#ifndef __IVSSDatabase_FWD_DEFINED__
#define __IVSSDatabase_FWD_DEFINED__
typedef interface IVSSDatabase IVSSDatabase;

#endif 	/* __IVSSDatabase_FWD_DEFINED__ */


#ifndef __IVSSUser_FWD_DEFINED__
#define __IVSSUser_FWD_DEFINED__
typedef interface IVSSUser IVSSUser;

#endif 	/* __IVSSUser_FWD_DEFINED__ */


#ifndef __IVSSUsers_FWD_DEFINED__
#define __IVSSUsers_FWD_DEFINED__
typedef interface IVSSUsers IVSSUsers;

#endif 	/* __IVSSUsers_FWD_DEFINED__ */


#ifndef __VSSItem_FWD_DEFINED__
#define __VSSItem_FWD_DEFINED__

#ifdef __cplusplus
typedef class VSSItem VSSItem;
#else
typedef struct VSSItem VSSItem;
#endif /* __cplusplus */

#endif 	/* __VSSItem_FWD_DEFINED__ */


#ifndef __VSSVersion_FWD_DEFINED__
#define __VSSVersion_FWD_DEFINED__

#ifdef __cplusplus
typedef class VSSVersion VSSVersion;
#else
typedef struct VSSVersion VSSVersion;
#endif /* __cplusplus */

#endif 	/* __VSSVersion_FWD_DEFINED__ */


#ifndef __VSSCheckout_FWD_DEFINED__
#define __VSSCheckout_FWD_DEFINED__

#ifdef __cplusplus
typedef class VSSCheckout VSSCheckout;
#else
typedef struct VSSCheckout VSSCheckout;
#endif /* __cplusplus */

#endif 	/* __VSSCheckout_FWD_DEFINED__ */


#ifndef __VSSDatabase_FWD_DEFINED__
#define __VSSDatabase_FWD_DEFINED__

#ifdef __cplusplus
typedef class VSSDatabase VSSDatabase;
#else
typedef struct VSSDatabase VSSDatabase;
#endif /* __cplusplus */

#endif 	/* __VSSDatabase_FWD_DEFINED__ */


#ifndef __VSSUser_FWD_DEFINED__
#define __VSSUser_FWD_DEFINED__

#ifdef __cplusplus
typedef class VSSUser VSSUser;
#else
typedef struct VSSUser VSSUser;
#endif /* __cplusplus */

#endif 	/* __VSSUser_FWD_DEFINED__ */


#ifndef __IVSSEventsOld_FWD_DEFINED__
#define __IVSSEventsOld_FWD_DEFINED__
typedef interface IVSSEventsOld IVSSEventsOld;

#endif 	/* __IVSSEventsOld_FWD_DEFINED__ */


#ifndef __IVSSEvents_FWD_DEFINED__
#define __IVSSEvents_FWD_DEFINED__
typedef interface IVSSEvents IVSSEvents;

#endif 	/* __IVSSEvents_FWD_DEFINED__ */


#ifndef __IVSS_FWD_DEFINED__
#define __IVSS_FWD_DEFINED__
typedef interface IVSS IVSS;

#endif 	/* __IVSS_FWD_DEFINED__ */


#ifndef __IVSSEventHandler_FWD_DEFINED__
#define __IVSSEventHandler_FWD_DEFINED__
typedef interface IVSSEventHandler IVSSEventHandler;

#endif 	/* __IVSSEventHandler_FWD_DEFINED__ */


#ifndef __VSSApp_FWD_DEFINED__
#define __VSSApp_FWD_DEFINED__

#ifdef __cplusplus
typedef class VSSApp VSSApp;
#else
typedef struct VSSApp VSSApp;
#endif /* __cplusplus */

#endif 	/* __VSSApp_FWD_DEFINED__ */


/* header files for imported files */
#include "wtypes.h"
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_VSS_0000_0000 */
/* [local] */ 



















extern RPC_IF_HANDLE __MIDL_itf_VSS_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_VSS_0000_0000_v0_0_s_ifspec;


#ifndef __SourceSafeTypeLib_LIBRARY_DEFINED__
#define __SourceSafeTypeLib_LIBRARY_DEFINED__

/* library SourceSafeTypeLib */
/* [helpcontext][helpfile][helpstring][version][uuid] */ 

typedef /* [public][helpstring][uuid] */  DECLSPEC_UUID("783CD4EF-9D54-11CF-B8EE-00608CC9A71F") 
enum __MIDL___MIDL_itf_VSS_0000_0000_0001
    {
        VSSFLAG_USERRONO	= 1,
        VSSFLAG_USERROYES	= 2,
        VSSFLAG_TIMENOW	= 4,
        VSSFLAG_TIMEMOD	= 8,
        VSSFLAG_TIMEUPD	= 12,
        VSSFLAG_EOLCR	= 16,
        VSSFLAG_EOLLF	= 32,
        VSSFLAG_EOLCRLF	= 48,
        VSSFLAG_REPASK	= 64,
        VSSFLAG_REPREPLACE	= 128,
        VSSFLAG_REPSKIP	= 192,
        VSSFLAG_REPMERGE	= 256,
        VSSFLAG_CMPFULL	= 512,
        VSSFLAG_CMPTIME	= 1024,
        VSSFLAG_CMPCHKSUM	= 1536,
        VSSFLAG_CMPFAIL	= 2048,
        VSSFLAG_RECURSNO	= 4096,
        VSSFLAG_RECURSYES	= 8192,
        VSSFLAG_FORCEDIRNO	= 16384,
        VSSFLAG_FORCEDIRYES	= 32768,
        VSSFLAG_KEEPNO	= 65536,
        VSSFLAG_KEEPYES	= 131072,
        VSSFLAG_DELNO	= 262144,
        VSSFLAG_DELYES	= 524288,
        VSSFLAG_DELNOREPLACE	= 786432,
        VSSFLAG_BINTEST	= 1048576,
        VSSFLAG_BINBINARY	= 2097152,
        VSSFLAG_BINTEXT	= 3145728,
        VSSFLAG_DELTAYES	= 4194304,
        VSSFLAG_DELTANO	= 8388608,
        VSSFLAG_UPDASK	= 16777216,
        VSSFLAG_UPDUPDATE	= 33554432,
        VSSFLAG_UPDUNCH	= 50331648,
        VSSFLAG_GETYES	= 67108864,
        VSSFLAG_GETNO	= 134217728,
        VSSFLAG_CHKEXCLUSIVEYES	= 268435456,
        VSSFLAG_CHKEXCLUSIVENO	= 536870912,
        VSSFLAG_HISTIGNOREFILES	= 1073741824
    } 	VSSFlags;

typedef /* [public][helpstring][uuid] */  DECLSPEC_UUID("783CD4ED-9D54-11CF-B8EE-00608CC9A71F") 
enum __MIDL___MIDL_itf_VSS_0000_0000_0002
    {
        VSSFILE_NOTCHECKEDOUT	= 0,
        VSSFILE_CHECKEDOUT	= 1,
        VSSFILE_CHECKEDOUT_ME	= 2
    } 	VSSFileStatus;

typedef /* [public][helpstring][uuid] */  DECLSPEC_UUID("783CD4EE-9D54-11CF-B8EE-00608CC9A71F") 
enum __MIDL___MIDL_itf_VSS_0000_0000_0003
    {
        VSSITEM_PROJECT	= 0,
        VSSITEM_FILE	= 1
    } 	VSSItemType;

typedef /* [public][helpstring][uuid] */  DECLSPEC_UUID("2A0DE0E6-2E9F-11D0-9236-00AA00A1EB95") 
enum __MIDL___MIDL_itf_VSS_0000_0000_0004
    {
        VSSRIGHTS_READ	= 1,
        VSSRIGHTS_CHKUPD	= 2,
        VSSRIGHTS_ADDRENREM	= 4,
        VSSRIGHTS_DESTROY	= 8,
        VSSRIGHTS_ALL	= 15,
        VSSRIGHTS_INHERITED	= 16
    } 	VSSRights;


EXTERN_C const IID LIBID_SourceSafeTypeLib;

#ifndef __IVSSItemOld_INTERFACE_DEFINED__
#define __IVSSItemOld_INTERFACE_DEFINED__

/* interface IVSSItemOld */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSItemOld;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4E1-9D54-11CF-B8EE-00608CC9A71F")
    IVSSItemOld : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall Spec( 
            /* [retval][out] */ BSTR *pSpec) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Binary( 
            /* [retval][out] */ VARIANT_BOOL *pbBinary) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_Binary( 
            /* [in] */ VARIANT_BOOL pbBinary) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Deleted( 
            /* [retval][out] */ VARIANT_BOOL *pbDeleted) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_Deleted( 
            /* [in] */ VARIANT_BOOL pbDeleted) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Type( 
            /* [retval][out] */ int *piType) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_LocalSpec( 
            /* [retval][out] */ BSTR *pLocal) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_LocalSpec( 
            /* [in] */ BSTR pLocal) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_Name( 
            /* [in] */ BSTR pName) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Parent( 
            /* [retval][out] */ IVSSItem **ppIParent) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_VersionNumber( 
            /* [retval][out] */ long *piVersion) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Items( 
            /* [defaultvalue][optional][in] */ VARIANT_BOOL IncludeDeleted,
            /* [retval][out] */ IVSSItems **ppIItems) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Get( 
            /* [defaultvalue][optional][out][in] */ BSTR *Local = 0,
            /* [defaultvalue][optional][in] */ long iFlags = 0) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Checkout( 
            /* [defaultvalue][optional][in] */ BSTR Comment = (BSTR)L"",
            /* [defaultvalue][optional][in] */ BSTR Local = (BSTR)L"",
            /* [defaultvalue][optional][in] */ long iFlags = 0) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Checkin( 
            /* [defaultvalue][optional][in] */ BSTR Comment = (BSTR)L"",
            /* [defaultvalue][optional][in] */ BSTR Local = (BSTR)L"",
            /* [defaultvalue][optional][in] */ long iFlags = 0) = 0;
        
        virtual /* [id] */ HRESULT __stdcall UndoCheckout( 
            /* [defaultvalue][optional][in] */ BSTR Local = (BSTR)L"",
            /* [defaultvalue][optional][in] */ long iFlags = 0) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_IsCheckedOut( 
            /* [retval][out] */ long *piStatus) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Checkouts( 
            /* [retval][out] */ IVSSCheckouts **ppICheckouts) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_IsDifferent( 
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbDifferent) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Add( 
            /* [in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSItem **ppIItem) = 0;
        
        virtual /* [id] */ HRESULT __stdcall NewSubproject( 
            /* [in] */ BSTR Name,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [retval][out] */ IVSSItem **ppIItem) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Share( 
            /* [in] */ IVSSItem *pIItem,
            /* [defaultvalue][optional][in] */ BSTR Comment = (BSTR)L"",
            /* [defaultvalue][optional][in] */ long iFlags = 0) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Destroy( void) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Move( 
            /* [in] */ IVSSItem *pINewParent) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Label( 
            /* [in] */ BSTR Label,
            /* [defaultvalue][optional][in] */ BSTR Comment = (BSTR)L"") = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Versions( 
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSVersions **pIVersions) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Version( 
            /* [optional][in] */ VARIANT Version,
            /* [retval][out] */ IVSSItem **ppIItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSItemOldVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSItemOld * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSItemOld * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSItemOld * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSItemOld * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSItemOld * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSItemOld * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSItemOld * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Spec)
        /* [id] */ HRESULT ( __stdcall *Spec )( 
            IVSSItemOld * This,
            /* [retval][out] */ BSTR *pSpec);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Binary)
        /* [propget][id] */ HRESULT ( __stdcall *get_Binary )( 
            IVSSItemOld * This,
            /* [retval][out] */ VARIANT_BOOL *pbBinary);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_Binary)
        /* [propput][id] */ HRESULT ( __stdcall *put_Binary )( 
            IVSSItemOld * This,
            /* [in] */ VARIANT_BOOL pbBinary);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Deleted)
        /* [propget][id] */ HRESULT ( __stdcall *get_Deleted )( 
            IVSSItemOld * This,
            /* [retval][out] */ VARIANT_BOOL *pbDeleted);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_Deleted)
        /* [propput][id] */ HRESULT ( __stdcall *put_Deleted )( 
            IVSSItemOld * This,
            /* [in] */ VARIANT_BOOL pbDeleted);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Type)
        /* [propget][id] */ HRESULT ( __stdcall *get_Type )( 
            IVSSItemOld * This,
            /* [retval][out] */ int *piType);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_LocalSpec)
        /* [propget][id] */ HRESULT ( __stdcall *get_LocalSpec )( 
            IVSSItemOld * This,
            /* [retval][out] */ BSTR *pLocal);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_LocalSpec)
        /* [propput][id] */ HRESULT ( __stdcall *put_LocalSpec )( 
            IVSSItemOld * This,
            /* [in] */ BSTR pLocal);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Name)
        /* [propget][id] */ HRESULT ( __stdcall *get_Name )( 
            IVSSItemOld * This,
            /* [retval][out] */ BSTR *pName);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_Name)
        /* [propput][id] */ HRESULT ( __stdcall *put_Name )( 
            IVSSItemOld * This,
            /* [in] */ BSTR pName);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Parent)
        /* [propget][id] */ HRESULT ( __stdcall *get_Parent )( 
            IVSSItemOld * This,
            /* [retval][out] */ IVSSItem **ppIParent);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_VersionNumber)
        /* [propget][id] */ HRESULT ( __stdcall *get_VersionNumber )( 
            IVSSItemOld * This,
            /* [retval][out] */ long *piVersion);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Items)
        /* [propget][id] */ HRESULT ( __stdcall *get_Items )( 
            IVSSItemOld * This,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL IncludeDeleted,
            /* [retval][out] */ IVSSItems **ppIItems);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Get)
        /* [id] */ HRESULT ( __stdcall *Get )( 
            IVSSItemOld * This,
            /* [defaultvalue][optional][out][in] */ BSTR *Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Checkout)
        /* [id] */ HRESULT ( __stdcall *Checkout )( 
            IVSSItemOld * This,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Checkin)
        /* [id] */ HRESULT ( __stdcall *Checkin )( 
            IVSSItemOld * This,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, UndoCheckout)
        /* [id] */ HRESULT ( __stdcall *UndoCheckout )( 
            IVSSItemOld * This,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_IsCheckedOut)
        /* [propget][id] */ HRESULT ( __stdcall *get_IsCheckedOut )( 
            IVSSItemOld * This,
            /* [retval][out] */ long *piStatus);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Checkouts)
        /* [propget][id] */ HRESULT ( __stdcall *get_Checkouts )( 
            IVSSItemOld * This,
            /* [retval][out] */ IVSSCheckouts **ppICheckouts);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_IsDifferent)
        /* [propget][id] */ HRESULT ( __stdcall *get_IsDifferent )( 
            IVSSItemOld * This,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbDifferent);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Add)
        /* [id] */ HRESULT ( __stdcall *Add )( 
            IVSSItemOld * This,
            /* [in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, NewSubproject)
        /* [id] */ HRESULT ( __stdcall *NewSubproject )( 
            IVSSItemOld * This,
            /* [in] */ BSTR Name,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Share)
        /* [id] */ HRESULT ( __stdcall *Share )( 
            IVSSItemOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Destroy)
        /* [id] */ HRESULT ( __stdcall *Destroy )( 
            IVSSItemOld * This);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Move)
        /* [id] */ HRESULT ( __stdcall *Move )( 
            IVSSItemOld * This,
            /* [in] */ IVSSItem *pINewParent);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Label)
        /* [id] */ HRESULT ( __stdcall *Label )( 
            IVSSItemOld * This,
            /* [in] */ BSTR Label,
            /* [defaultvalue][optional][in] */ BSTR Comment);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Versions)
        /* [propget][id] */ HRESULT ( __stdcall *get_Versions )( 
            IVSSItemOld * This,
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSVersions **pIVersions);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Version)
        /* [propget][id] */ HRESULT ( __stdcall *get_Version )( 
            IVSSItemOld * This,
            /* [optional][in] */ VARIANT Version,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        END_INTERFACE
    } IVSSItemOldVtbl;

    interface IVSSItemOld
    {
        CONST_VTBL struct IVSSItemOldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSItemOld_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSItemOld_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSItemOld_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSItemOld_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSItemOld_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSItemOld_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSItemOld_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSItemOld_Spec(This,pSpec)	\
    ( (This)->lpVtbl -> Spec(This,pSpec) ) 

#define IVSSItemOld_get_Binary(This,pbBinary)	\
    ( (This)->lpVtbl -> get_Binary(This,pbBinary) ) 

#define IVSSItemOld_put_Binary(This,pbBinary)	\
    ( (This)->lpVtbl -> put_Binary(This,pbBinary) ) 

#define IVSSItemOld_get_Deleted(This,pbDeleted)	\
    ( (This)->lpVtbl -> get_Deleted(This,pbDeleted) ) 

#define IVSSItemOld_put_Deleted(This,pbDeleted)	\
    ( (This)->lpVtbl -> put_Deleted(This,pbDeleted) ) 

#define IVSSItemOld_get_Type(This,piType)	\
    ( (This)->lpVtbl -> get_Type(This,piType) ) 

#define IVSSItemOld_get_LocalSpec(This,pLocal)	\
    ( (This)->lpVtbl -> get_LocalSpec(This,pLocal) ) 

#define IVSSItemOld_put_LocalSpec(This,pLocal)	\
    ( (This)->lpVtbl -> put_LocalSpec(This,pLocal) ) 

#define IVSSItemOld_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IVSSItemOld_put_Name(This,pName)	\
    ( (This)->lpVtbl -> put_Name(This,pName) ) 

#define IVSSItemOld_get_Parent(This,ppIParent)	\
    ( (This)->lpVtbl -> get_Parent(This,ppIParent) ) 

#define IVSSItemOld_get_VersionNumber(This,piVersion)	\
    ( (This)->lpVtbl -> get_VersionNumber(This,piVersion) ) 

#define IVSSItemOld_get_Items(This,IncludeDeleted,ppIItems)	\
    ( (This)->lpVtbl -> get_Items(This,IncludeDeleted,ppIItems) ) 

#define IVSSItemOld_Get(This,Local,iFlags)	\
    ( (This)->lpVtbl -> Get(This,Local,iFlags) ) 

#define IVSSItemOld_Checkout(This,Comment,Local,iFlags)	\
    ( (This)->lpVtbl -> Checkout(This,Comment,Local,iFlags) ) 

#define IVSSItemOld_Checkin(This,Comment,Local,iFlags)	\
    ( (This)->lpVtbl -> Checkin(This,Comment,Local,iFlags) ) 

#define IVSSItemOld_UndoCheckout(This,Local,iFlags)	\
    ( (This)->lpVtbl -> UndoCheckout(This,Local,iFlags) ) 

#define IVSSItemOld_get_IsCheckedOut(This,piStatus)	\
    ( (This)->lpVtbl -> get_IsCheckedOut(This,piStatus) ) 

#define IVSSItemOld_get_Checkouts(This,ppICheckouts)	\
    ( (This)->lpVtbl -> get_Checkouts(This,ppICheckouts) ) 

#define IVSSItemOld_get_IsDifferent(This,Local,pbDifferent)	\
    ( (This)->lpVtbl -> get_IsDifferent(This,Local,pbDifferent) ) 

#define IVSSItemOld_Add(This,Local,Comment,iFlags,ppIItem)	\
    ( (This)->lpVtbl -> Add(This,Local,Comment,iFlags,ppIItem) ) 

#define IVSSItemOld_NewSubproject(This,Name,Comment,ppIItem)	\
    ( (This)->lpVtbl -> NewSubproject(This,Name,Comment,ppIItem) ) 

#define IVSSItemOld_Share(This,pIItem,Comment,iFlags)	\
    ( (This)->lpVtbl -> Share(This,pIItem,Comment,iFlags) ) 

#define IVSSItemOld_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IVSSItemOld_Move(This,pINewParent)	\
    ( (This)->lpVtbl -> Move(This,pINewParent) ) 

#define IVSSItemOld_Label(This,Label,Comment)	\
    ( (This)->lpVtbl -> Label(This,Label,Comment) ) 

#define IVSSItemOld_get_Versions(This,iFlags,pIVersions)	\
    ( (This)->lpVtbl -> get_Versions(This,iFlags,pIVersions) ) 

#define IVSSItemOld_get_Version(This,Version,ppIItem)	\
    ( (This)->lpVtbl -> get_Version(This,Version,ppIItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSItemOld_INTERFACE_DEFINED__ */


#ifndef __IVSSItem_INTERFACE_DEFINED__
#define __IVSSItem_INTERFACE_DEFINED__

/* interface IVSSItem */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A0DE0E7-2E9F-11D0-9236-00AA00A1EB95")
    IVSSItem : public IVSSItemOld
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_Links( 
            /* [retval][out] */ IVSSItems **ppIItems) = 0;
        
        virtual /* [id] */ HRESULT __stdcall Branch( 
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSItem **ppIItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSItemVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSItem * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSItem * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSItem * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSItem * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSItem * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSItem * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Spec)
        /* [id] */ HRESULT ( __stdcall *Spec )( 
            IVSSItem * This,
            /* [retval][out] */ BSTR *pSpec);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Binary)
        /* [propget][id] */ HRESULT ( __stdcall *get_Binary )( 
            IVSSItem * This,
            /* [retval][out] */ VARIANT_BOOL *pbBinary);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_Binary)
        /* [propput][id] */ HRESULT ( __stdcall *put_Binary )( 
            IVSSItem * This,
            /* [in] */ VARIANT_BOOL pbBinary);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Deleted)
        /* [propget][id] */ HRESULT ( __stdcall *get_Deleted )( 
            IVSSItem * This,
            /* [retval][out] */ VARIANT_BOOL *pbDeleted);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_Deleted)
        /* [propput][id] */ HRESULT ( __stdcall *put_Deleted )( 
            IVSSItem * This,
            /* [in] */ VARIANT_BOOL pbDeleted);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Type)
        /* [propget][id] */ HRESULT ( __stdcall *get_Type )( 
            IVSSItem * This,
            /* [retval][out] */ int *piType);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_LocalSpec)
        /* [propget][id] */ HRESULT ( __stdcall *get_LocalSpec )( 
            IVSSItem * This,
            /* [retval][out] */ BSTR *pLocal);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_LocalSpec)
        /* [propput][id] */ HRESULT ( __stdcall *put_LocalSpec )( 
            IVSSItem * This,
            /* [in] */ BSTR pLocal);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Name)
        /* [propget][id] */ HRESULT ( __stdcall *get_Name )( 
            IVSSItem * This,
            /* [retval][out] */ BSTR *pName);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, put_Name)
        /* [propput][id] */ HRESULT ( __stdcall *put_Name )( 
            IVSSItem * This,
            /* [in] */ BSTR pName);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Parent)
        /* [propget][id] */ HRESULT ( __stdcall *get_Parent )( 
            IVSSItem * This,
            /* [retval][out] */ IVSSItem **ppIParent);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_VersionNumber)
        /* [propget][id] */ HRESULT ( __stdcall *get_VersionNumber )( 
            IVSSItem * This,
            /* [retval][out] */ long *piVersion);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Items)
        /* [propget][id] */ HRESULT ( __stdcall *get_Items )( 
            IVSSItem * This,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL IncludeDeleted,
            /* [retval][out] */ IVSSItems **ppIItems);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Get)
        /* [id] */ HRESULT ( __stdcall *Get )( 
            IVSSItem * This,
            /* [defaultvalue][optional][out][in] */ BSTR *Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Checkout)
        /* [id] */ HRESULT ( __stdcall *Checkout )( 
            IVSSItem * This,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Checkin)
        /* [id] */ HRESULT ( __stdcall *Checkin )( 
            IVSSItem * This,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, UndoCheckout)
        /* [id] */ HRESULT ( __stdcall *UndoCheckout )( 
            IVSSItem * This,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_IsCheckedOut)
        /* [propget][id] */ HRESULT ( __stdcall *get_IsCheckedOut )( 
            IVSSItem * This,
            /* [retval][out] */ long *piStatus);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Checkouts)
        /* [propget][id] */ HRESULT ( __stdcall *get_Checkouts )( 
            IVSSItem * This,
            /* [retval][out] */ IVSSCheckouts **ppICheckouts);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_IsDifferent)
        /* [propget][id] */ HRESULT ( __stdcall *get_IsDifferent )( 
            IVSSItem * This,
            /* [defaultvalue][optional][in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbDifferent);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Add)
        /* [id] */ HRESULT ( __stdcall *Add )( 
            IVSSItem * This,
            /* [in] */ BSTR Local,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, NewSubproject)
        /* [id] */ HRESULT ( __stdcall *NewSubproject )( 
            IVSSItem * This,
            /* [in] */ BSTR Name,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Share)
        /* [id] */ HRESULT ( __stdcall *Share )( 
            IVSSItem * This,
            /* [in] */ IVSSItem *pIItem,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ long iFlags);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Destroy)
        /* [id] */ HRESULT ( __stdcall *Destroy )( 
            IVSSItem * This);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Move)
        /* [id] */ HRESULT ( __stdcall *Move )( 
            IVSSItem * This,
            /* [in] */ IVSSItem *pINewParent);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, Label)
        /* [id] */ HRESULT ( __stdcall *Label )( 
            IVSSItem * This,
            /* [in] */ BSTR Label,
            /* [defaultvalue][optional][in] */ BSTR Comment);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Versions)
        /* [propget][id] */ HRESULT ( __stdcall *get_Versions )( 
            IVSSItem * This,
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSVersions **pIVersions);
        
        DECLSPEC_XFGVIRT(IVSSItemOld, get_Version)
        /* [propget][id] */ HRESULT ( __stdcall *get_Version )( 
            IVSSItem * This,
            /* [optional][in] */ VARIANT Version,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        DECLSPEC_XFGVIRT(IVSSItem, get_Links)
        /* [propget][id] */ HRESULT ( __stdcall *get_Links )( 
            IVSSItem * This,
            /* [retval][out] */ IVSSItems **ppIItems);
        
        DECLSPEC_XFGVIRT(IVSSItem, Branch)
        /* [id] */ HRESULT ( __stdcall *Branch )( 
            IVSSItem * This,
            /* [defaultvalue][optional][in] */ BSTR Comment,
            /* [defaultvalue][optional][in] */ long iFlags,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        END_INTERFACE
    } IVSSItemVtbl;

    interface IVSSItem
    {
        CONST_VTBL struct IVSSItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSItem_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSItem_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSItem_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSItem_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSItem_Spec(This,pSpec)	\
    ( (This)->lpVtbl -> Spec(This,pSpec) ) 

#define IVSSItem_get_Binary(This,pbBinary)	\
    ( (This)->lpVtbl -> get_Binary(This,pbBinary) ) 

#define IVSSItem_put_Binary(This,pbBinary)	\
    ( (This)->lpVtbl -> put_Binary(This,pbBinary) ) 

#define IVSSItem_get_Deleted(This,pbDeleted)	\
    ( (This)->lpVtbl -> get_Deleted(This,pbDeleted) ) 

#define IVSSItem_put_Deleted(This,pbDeleted)	\
    ( (This)->lpVtbl -> put_Deleted(This,pbDeleted) ) 

#define IVSSItem_get_Type(This,piType)	\
    ( (This)->lpVtbl -> get_Type(This,piType) ) 

#define IVSSItem_get_LocalSpec(This,pLocal)	\
    ( (This)->lpVtbl -> get_LocalSpec(This,pLocal) ) 

#define IVSSItem_put_LocalSpec(This,pLocal)	\
    ( (This)->lpVtbl -> put_LocalSpec(This,pLocal) ) 

#define IVSSItem_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IVSSItem_put_Name(This,pName)	\
    ( (This)->lpVtbl -> put_Name(This,pName) ) 

#define IVSSItem_get_Parent(This,ppIParent)	\
    ( (This)->lpVtbl -> get_Parent(This,ppIParent) ) 

#define IVSSItem_get_VersionNumber(This,piVersion)	\
    ( (This)->lpVtbl -> get_VersionNumber(This,piVersion) ) 

#define IVSSItem_get_Items(This,IncludeDeleted,ppIItems)	\
    ( (This)->lpVtbl -> get_Items(This,IncludeDeleted,ppIItems) ) 

#define IVSSItem_Get(This,Local,iFlags)	\
    ( (This)->lpVtbl -> Get(This,Local,iFlags) ) 

#define IVSSItem_Checkout(This,Comment,Local,iFlags)	\
    ( (This)->lpVtbl -> Checkout(This,Comment,Local,iFlags) ) 

#define IVSSItem_Checkin(This,Comment,Local,iFlags)	\
    ( (This)->lpVtbl -> Checkin(This,Comment,Local,iFlags) ) 

#define IVSSItem_UndoCheckout(This,Local,iFlags)	\
    ( (This)->lpVtbl -> UndoCheckout(This,Local,iFlags) ) 

#define IVSSItem_get_IsCheckedOut(This,piStatus)	\
    ( (This)->lpVtbl -> get_IsCheckedOut(This,piStatus) ) 

#define IVSSItem_get_Checkouts(This,ppICheckouts)	\
    ( (This)->lpVtbl -> get_Checkouts(This,ppICheckouts) ) 

#define IVSSItem_get_IsDifferent(This,Local,pbDifferent)	\
    ( (This)->lpVtbl -> get_IsDifferent(This,Local,pbDifferent) ) 

#define IVSSItem_Add(This,Local,Comment,iFlags,ppIItem)	\
    ( (This)->lpVtbl -> Add(This,Local,Comment,iFlags,ppIItem) ) 

#define IVSSItem_NewSubproject(This,Name,Comment,ppIItem)	\
    ( (This)->lpVtbl -> NewSubproject(This,Name,Comment,ppIItem) ) 

#define IVSSItem_Share(This,pIItem,Comment,iFlags)	\
    ( (This)->lpVtbl -> Share(This,pIItem,Comment,iFlags) ) 

#define IVSSItem_Destroy(This)	\
    ( (This)->lpVtbl -> Destroy(This) ) 

#define IVSSItem_Move(This,pINewParent)	\
    ( (This)->lpVtbl -> Move(This,pINewParent) ) 

#define IVSSItem_Label(This,Label,Comment)	\
    ( (This)->lpVtbl -> Label(This,Label,Comment) ) 

#define IVSSItem_get_Versions(This,iFlags,pIVersions)	\
    ( (This)->lpVtbl -> get_Versions(This,iFlags,pIVersions) ) 

#define IVSSItem_get_Version(This,Version,ppIItem)	\
    ( (This)->lpVtbl -> get_Version(This,Version,ppIItem) ) 


#define IVSSItem_get_Links(This,ppIItems)	\
    ( (This)->lpVtbl -> get_Links(This,ppIItems) ) 

#define IVSSItem_Branch(This,Comment,iFlags,ppIItem)	\
    ( (This)->lpVtbl -> Branch(This,Comment,iFlags,ppIItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSItem_INTERFACE_DEFINED__ */


#ifndef __IVSSVersions_INTERFACE_DEFINED__
#define __IVSSVersions_INTERFACE_DEFINED__

/* interface IVSSVersions */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSVersions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4E7-9D54-11CF-B8EE-00608CC9A71F")
    IVSSVersions : public IDispatch
    {
    public:
        virtual /* [hidden][restricted][id] */ HRESULT __stdcall _NewEnum( 
            /* [retval][out] */ IUnknown **ppIEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSVersionsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSVersions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSVersions * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSVersions * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSVersions * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSVersions * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSVersions * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSVersions * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSVersions, _NewEnum)
        /* [hidden][restricted][id] */ HRESULT ( __stdcall *_NewEnum )( 
            IVSSVersions * This,
            /* [retval][out] */ IUnknown **ppIEnum);
        
        END_INTERFACE
    } IVSSVersionsVtbl;

    interface IVSSVersions
    {
        CONST_VTBL struct IVSSVersionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSVersions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSVersions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSVersions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSVersions_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSVersions_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSVersions_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSVersions_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSVersions__NewEnum(This,ppIEnum)	\
    ( (This)->lpVtbl -> _NewEnum(This,ppIEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSVersions_INTERFACE_DEFINED__ */


#ifndef __IVSSVersionOld_INTERFACE_DEFINED__
#define __IVSSVersionOld_INTERFACE_DEFINED__

/* interface IVSSVersionOld */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSVersionOld;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4E8-9D54-11CF-B8EE-00608CC9A71F")
    IVSSVersionOld : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_Username( 
            /* [retval][out] */ BSTR *pUsername) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_VersionNumber( 
            /* [retval][out] */ long *piVersion) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Action( 
            /* [retval][out] */ BSTR *pAction) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Date( 
            /* [retval][out] */ DATE *pDate) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Comment( 
            /* [retval][out] */ BSTR *pComment) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Label( 
            /* [retval][out] */ BSTR *pLabel) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_VSSItem( 
            /* [retval][out] */ IVSSItem **ppIItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSVersionOldVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSVersionOld * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSVersionOld * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSVersionOld * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSVersionOld * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSVersionOld * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSVersionOld * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSVersionOld * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Username)
        /* [propget][id] */ HRESULT ( __stdcall *get_Username )( 
            IVSSVersionOld * This,
            /* [retval][out] */ BSTR *pUsername);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_VersionNumber)
        /* [propget][id] */ HRESULT ( __stdcall *get_VersionNumber )( 
            IVSSVersionOld * This,
            /* [retval][out] */ long *piVersion);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Action)
        /* [propget][id] */ HRESULT ( __stdcall *get_Action )( 
            IVSSVersionOld * This,
            /* [retval][out] */ BSTR *pAction);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Date)
        /* [propget][id] */ HRESULT ( __stdcall *get_Date )( 
            IVSSVersionOld * This,
            /* [retval][out] */ DATE *pDate);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Comment)
        /* [propget][id] */ HRESULT ( __stdcall *get_Comment )( 
            IVSSVersionOld * This,
            /* [retval][out] */ BSTR *pComment);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Label)
        /* [propget][id] */ HRESULT ( __stdcall *get_Label )( 
            IVSSVersionOld * This,
            /* [retval][out] */ BSTR *pLabel);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_VSSItem)
        /* [propget][id] */ HRESULT ( __stdcall *get_VSSItem )( 
            IVSSVersionOld * This,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        END_INTERFACE
    } IVSSVersionOldVtbl;

    interface IVSSVersionOld
    {
        CONST_VTBL struct IVSSVersionOldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSVersionOld_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSVersionOld_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSVersionOld_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSVersionOld_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSVersionOld_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSVersionOld_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSVersionOld_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSVersionOld_get_Username(This,pUsername)	\
    ( (This)->lpVtbl -> get_Username(This,pUsername) ) 

#define IVSSVersionOld_get_VersionNumber(This,piVersion)	\
    ( (This)->lpVtbl -> get_VersionNumber(This,piVersion) ) 

#define IVSSVersionOld_get_Action(This,pAction)	\
    ( (This)->lpVtbl -> get_Action(This,pAction) ) 

#define IVSSVersionOld_get_Date(This,pDate)	\
    ( (This)->lpVtbl -> get_Date(This,pDate) ) 

#define IVSSVersionOld_get_Comment(This,pComment)	\
    ( (This)->lpVtbl -> get_Comment(This,pComment) ) 

#define IVSSVersionOld_get_Label(This,pLabel)	\
    ( (This)->lpVtbl -> get_Label(This,pLabel) ) 

#define IVSSVersionOld_get_VSSItem(This,ppIItem)	\
    ( (This)->lpVtbl -> get_VSSItem(This,ppIItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSVersionOld_INTERFACE_DEFINED__ */


#ifndef __IVSSVersion_INTERFACE_DEFINED__
#define __IVSSVersion_INTERFACE_DEFINED__

/* interface IVSSVersion */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSVersion;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A0DE0E9-2E9F-11D0-9236-00AA00A1EB95")
    IVSSVersion : public IVSSVersionOld
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_LabelComment( 
            /* [retval][out] */ BSTR *pComment) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSVersionVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSVersion * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSVersion * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSVersion * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSVersion * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSVersion * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSVersion * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSVersion * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Username)
        /* [propget][id] */ HRESULT ( __stdcall *get_Username )( 
            IVSSVersion * This,
            /* [retval][out] */ BSTR *pUsername);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_VersionNumber)
        /* [propget][id] */ HRESULT ( __stdcall *get_VersionNumber )( 
            IVSSVersion * This,
            /* [retval][out] */ long *piVersion);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Action)
        /* [propget][id] */ HRESULT ( __stdcall *get_Action )( 
            IVSSVersion * This,
            /* [retval][out] */ BSTR *pAction);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Date)
        /* [propget][id] */ HRESULT ( __stdcall *get_Date )( 
            IVSSVersion * This,
            /* [retval][out] */ DATE *pDate);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Comment)
        /* [propget][id] */ HRESULT ( __stdcall *get_Comment )( 
            IVSSVersion * This,
            /* [retval][out] */ BSTR *pComment);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_Label)
        /* [propget][id] */ HRESULT ( __stdcall *get_Label )( 
            IVSSVersion * This,
            /* [retval][out] */ BSTR *pLabel);
        
        DECLSPEC_XFGVIRT(IVSSVersionOld, get_VSSItem)
        /* [propget][id] */ HRESULT ( __stdcall *get_VSSItem )( 
            IVSSVersion * This,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        DECLSPEC_XFGVIRT(IVSSVersion, get_LabelComment)
        /* [propget][id] */ HRESULT ( __stdcall *get_LabelComment )( 
            IVSSVersion * This,
            /* [retval][out] */ BSTR *pComment);
        
        END_INTERFACE
    } IVSSVersionVtbl;

    interface IVSSVersion
    {
        CONST_VTBL struct IVSSVersionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSVersion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSVersion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSVersion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSVersion_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSVersion_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSVersion_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSVersion_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSVersion_get_Username(This,pUsername)	\
    ( (This)->lpVtbl -> get_Username(This,pUsername) ) 

#define IVSSVersion_get_VersionNumber(This,piVersion)	\
    ( (This)->lpVtbl -> get_VersionNumber(This,piVersion) ) 

#define IVSSVersion_get_Action(This,pAction)	\
    ( (This)->lpVtbl -> get_Action(This,pAction) ) 

#define IVSSVersion_get_Date(This,pDate)	\
    ( (This)->lpVtbl -> get_Date(This,pDate) ) 

#define IVSSVersion_get_Comment(This,pComment)	\
    ( (This)->lpVtbl -> get_Comment(This,pComment) ) 

#define IVSSVersion_get_Label(This,pLabel)	\
    ( (This)->lpVtbl -> get_Label(This,pLabel) ) 

#define IVSSVersion_get_VSSItem(This,ppIItem)	\
    ( (This)->lpVtbl -> get_VSSItem(This,ppIItem) ) 


#define IVSSVersion_get_LabelComment(This,pComment)	\
    ( (This)->lpVtbl -> get_LabelComment(This,pComment) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSVersion_INTERFACE_DEFINED__ */


#ifndef __IVSSItems_INTERFACE_DEFINED__
#define __IVSSItems_INTERFACE_DEFINED__

/* interface IVSSItems */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4E5-9D54-11CF-B8EE-00608CC9A71F")
    IVSSItems : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *piCount) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Item( 
            /* [in] */ VARIANT sItem,
            /* [retval][out] */ IVSSItem **ppIItem) = 0;
        
        virtual /* [hidden][restricted][id] */ HRESULT __stdcall _NewEnum( 
            /* [retval][out] */ IUnknown **ppIEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSItemsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSItems * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSItems * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSItems * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSItems * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSItems * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSItems * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSItems * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSItems, get_Count)
        /* [propget][id] */ HRESULT ( __stdcall *get_Count )( 
            IVSSItems * This,
            /* [retval][out] */ long *piCount);
        
        DECLSPEC_XFGVIRT(IVSSItems, get_Item)
        /* [propget][id] */ HRESULT ( __stdcall *get_Item )( 
            IVSSItems * This,
            /* [in] */ VARIANT sItem,
            /* [retval][out] */ IVSSItem **ppIItem);
        
        DECLSPEC_XFGVIRT(IVSSItems, _NewEnum)
        /* [hidden][restricted][id] */ HRESULT ( __stdcall *_NewEnum )( 
            IVSSItems * This,
            /* [retval][out] */ IUnknown **ppIEnum);
        
        END_INTERFACE
    } IVSSItemsVtbl;

    interface IVSSItems
    {
        CONST_VTBL struct IVSSItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSItems_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSItems_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSItems_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSItems_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSItems_get_Count(This,piCount)	\
    ( (This)->lpVtbl -> get_Count(This,piCount) ) 

#define IVSSItems_get_Item(This,sItem,ppIItem)	\
    ( (This)->lpVtbl -> get_Item(This,sItem,ppIItem) ) 

#define IVSSItems__NewEnum(This,ppIEnum)	\
    ( (This)->lpVtbl -> _NewEnum(This,ppIEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSItems_INTERFACE_DEFINED__ */


#ifndef __IVSSCheckouts_INTERFACE_DEFINED__
#define __IVSSCheckouts_INTERFACE_DEFINED__

/* interface IVSSCheckouts */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSCheckouts;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8903A770-F55F-11CF-9227-00AA00A1EB95")
    IVSSCheckouts : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *piCount) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Item( 
            /* [in] */ VARIANT sItem,
            /* [retval][out] */ IVSSCheckout **ppICheckout) = 0;
        
        virtual /* [hidden][restricted][id] */ HRESULT __stdcall _NewEnum( 
            /* [retval][out] */ IUnknown **ppIEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSCheckoutsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSCheckouts * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSCheckouts * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSCheckouts * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSCheckouts * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSCheckouts * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSCheckouts * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSCheckouts * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSCheckouts, get_Count)
        /* [propget][id] */ HRESULT ( __stdcall *get_Count )( 
            IVSSCheckouts * This,
            /* [retval][out] */ long *piCount);
        
        DECLSPEC_XFGVIRT(IVSSCheckouts, get_Item)
        /* [propget][id] */ HRESULT ( __stdcall *get_Item )( 
            IVSSCheckouts * This,
            /* [in] */ VARIANT sItem,
            /* [retval][out] */ IVSSCheckout **ppICheckout);
        
        DECLSPEC_XFGVIRT(IVSSCheckouts, _NewEnum)
        /* [hidden][restricted][id] */ HRESULT ( __stdcall *_NewEnum )( 
            IVSSCheckouts * This,
            /* [retval][out] */ IUnknown **ppIEnum);
        
        END_INTERFACE
    } IVSSCheckoutsVtbl;

    interface IVSSCheckouts
    {
        CONST_VTBL struct IVSSCheckoutsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSCheckouts_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSCheckouts_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSCheckouts_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSCheckouts_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSCheckouts_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSCheckouts_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSCheckouts_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSCheckouts_get_Count(This,piCount)	\
    ( (This)->lpVtbl -> get_Count(This,piCount) ) 

#define IVSSCheckouts_get_Item(This,sItem,ppICheckout)	\
    ( (This)->lpVtbl -> get_Item(This,sItem,ppICheckout) ) 

#define IVSSCheckouts__NewEnum(This,ppIEnum)	\
    ( (This)->lpVtbl -> _NewEnum(This,ppIEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSCheckouts_INTERFACE_DEFINED__ */


#ifndef __IVSSCheckout_INTERFACE_DEFINED__
#define __IVSSCheckout_INTERFACE_DEFINED__

/* interface IVSSCheckout */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSCheckout;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4E6-9D54-11CF-B8EE-00608CC9A71F")
    IVSSCheckout : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_Username( 
            /* [retval][out] */ BSTR *pUsername) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Date( 
            /* [retval][out] */ DATE *pDate) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_LocalSpec( 
            /* [retval][out] */ BSTR *pLocal) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Machine( 
            /* [retval][out] */ BSTR *pMachine) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Project( 
            /* [retval][out] */ BSTR *pProject) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Comment( 
            /* [retval][out] */ BSTR *pComment) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_VersionNumber( 
            /* [retval][out] */ long *piVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSCheckoutVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSCheckout * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSCheckout * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSCheckout * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSCheckout * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSCheckout * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSCheckout * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSCheckout * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSCheckout, get_Username)
        /* [propget][id] */ HRESULT ( __stdcall *get_Username )( 
            IVSSCheckout * This,
            /* [retval][out] */ BSTR *pUsername);
        
        DECLSPEC_XFGVIRT(IVSSCheckout, get_Date)
        /* [propget][id] */ HRESULT ( __stdcall *get_Date )( 
            IVSSCheckout * This,
            /* [retval][out] */ DATE *pDate);
        
        DECLSPEC_XFGVIRT(IVSSCheckout, get_LocalSpec)
        /* [propget][id] */ HRESULT ( __stdcall *get_LocalSpec )( 
            IVSSCheckout * This,
            /* [retval][out] */ BSTR *pLocal);
        
        DECLSPEC_XFGVIRT(IVSSCheckout, get_Machine)
        /* [propget][id] */ HRESULT ( __stdcall *get_Machine )( 
            IVSSCheckout * This,
            /* [retval][out] */ BSTR *pMachine);
        
        DECLSPEC_XFGVIRT(IVSSCheckout, get_Project)
        /* [propget][id] */ HRESULT ( __stdcall *get_Project )( 
            IVSSCheckout * This,
            /* [retval][out] */ BSTR *pProject);
        
        DECLSPEC_XFGVIRT(IVSSCheckout, get_Comment)
        /* [propget][id] */ HRESULT ( __stdcall *get_Comment )( 
            IVSSCheckout * This,
            /* [retval][out] */ BSTR *pComment);
        
        DECLSPEC_XFGVIRT(IVSSCheckout, get_VersionNumber)
        /* [propget][id] */ HRESULT ( __stdcall *get_VersionNumber )( 
            IVSSCheckout * This,
            /* [retval][out] */ long *piVersion);
        
        END_INTERFACE
    } IVSSCheckoutVtbl;

    interface IVSSCheckout
    {
        CONST_VTBL struct IVSSCheckoutVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSCheckout_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSCheckout_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSCheckout_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSCheckout_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSCheckout_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSCheckout_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSCheckout_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSCheckout_get_Username(This,pUsername)	\
    ( (This)->lpVtbl -> get_Username(This,pUsername) ) 

#define IVSSCheckout_get_Date(This,pDate)	\
    ( (This)->lpVtbl -> get_Date(This,pDate) ) 

#define IVSSCheckout_get_LocalSpec(This,pLocal)	\
    ( (This)->lpVtbl -> get_LocalSpec(This,pLocal) ) 

#define IVSSCheckout_get_Machine(This,pMachine)	\
    ( (This)->lpVtbl -> get_Machine(This,pMachine) ) 

#define IVSSCheckout_get_Project(This,pProject)	\
    ( (This)->lpVtbl -> get_Project(This,pProject) ) 

#define IVSSCheckout_get_Comment(This,pComment)	\
    ( (This)->lpVtbl -> get_Comment(This,pComment) ) 

#define IVSSCheckout_get_VersionNumber(This,piVersion)	\
    ( (This)->lpVtbl -> get_VersionNumber(This,piVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSCheckout_INTERFACE_DEFINED__ */


#ifndef __IVSSDatabaseOld_INTERFACE_DEFINED__
#define __IVSSDatabaseOld_INTERFACE_DEFINED__

/* interface IVSSDatabaseOld */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSDatabaseOld;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4E2-9D54-11CF-B8EE-00608CC9A71F")
    IVSSDatabaseOld : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall Open( 
            /* [defaultvalue][optional][in] */ BSTR SrcSafeIni = (BSTR)L"",
            /* [defaultvalue][optional][in] */ BSTR Username = (BSTR)L"",
            /* [defaultvalue][optional][in] */ BSTR Password = (BSTR)L"") = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_SrcSafeIni( 
            /* [retval][out] */ BSTR *pSrcSafeIni) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_DatabaseName( 
            /* [retval][out] */ BSTR *pDatabaseName) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Username( 
            /* [retval][out] */ BSTR *pUsername) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_CurrentProject( 
            /* [retval][out] */ BSTR *pPrj) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_CurrentProject( 
            /* [in] */ BSTR pPrj) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_VSSItem( 
            /* [in] */ BSTR Spec,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL Deleted,
            /* [retval][out] */ IVSSItem **ppIVSSItem) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSDatabaseOldVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSDatabaseOld * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSDatabaseOld * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSDatabaseOld * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSDatabaseOld * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSDatabaseOld * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSDatabaseOld * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSDatabaseOld * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, Open)
        /* [id] */ HRESULT ( __stdcall *Open )( 
            IVSSDatabaseOld * This,
            /* [defaultvalue][optional][in] */ BSTR SrcSafeIni,
            /* [defaultvalue][optional][in] */ BSTR Username,
            /* [defaultvalue][optional][in] */ BSTR Password);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_SrcSafeIni)
        /* [propget][id] */ HRESULT ( __stdcall *get_SrcSafeIni )( 
            IVSSDatabaseOld * This,
            /* [retval][out] */ BSTR *pSrcSafeIni);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_DatabaseName)
        /* [propget][id] */ HRESULT ( __stdcall *get_DatabaseName )( 
            IVSSDatabaseOld * This,
            /* [retval][out] */ BSTR *pDatabaseName);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_Username)
        /* [propget][id] */ HRESULT ( __stdcall *get_Username )( 
            IVSSDatabaseOld * This,
            /* [retval][out] */ BSTR *pUsername);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_CurrentProject)
        /* [propget][id] */ HRESULT ( __stdcall *get_CurrentProject )( 
            IVSSDatabaseOld * This,
            /* [retval][out] */ BSTR *pPrj);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, put_CurrentProject)
        /* [propput][id] */ HRESULT ( __stdcall *put_CurrentProject )( 
            IVSSDatabaseOld * This,
            /* [in] */ BSTR pPrj);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_VSSItem)
        /* [propget][id] */ HRESULT ( __stdcall *get_VSSItem )( 
            IVSSDatabaseOld * This,
            /* [in] */ BSTR Spec,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL Deleted,
            /* [retval][out] */ IVSSItem **ppIVSSItem);
        
        END_INTERFACE
    } IVSSDatabaseOldVtbl;

    interface IVSSDatabaseOld
    {
        CONST_VTBL struct IVSSDatabaseOldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSDatabaseOld_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSDatabaseOld_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSDatabaseOld_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSDatabaseOld_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSDatabaseOld_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSDatabaseOld_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSDatabaseOld_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSDatabaseOld_Open(This,SrcSafeIni,Username,Password)	\
    ( (This)->lpVtbl -> Open(This,SrcSafeIni,Username,Password) ) 

#define IVSSDatabaseOld_get_SrcSafeIni(This,pSrcSafeIni)	\
    ( (This)->lpVtbl -> get_SrcSafeIni(This,pSrcSafeIni) ) 

#define IVSSDatabaseOld_get_DatabaseName(This,pDatabaseName)	\
    ( (This)->lpVtbl -> get_DatabaseName(This,pDatabaseName) ) 

#define IVSSDatabaseOld_get_Username(This,pUsername)	\
    ( (This)->lpVtbl -> get_Username(This,pUsername) ) 

#define IVSSDatabaseOld_get_CurrentProject(This,pPrj)	\
    ( (This)->lpVtbl -> get_CurrentProject(This,pPrj) ) 

#define IVSSDatabaseOld_put_CurrentProject(This,pPrj)	\
    ( (This)->lpVtbl -> put_CurrentProject(This,pPrj) ) 

#define IVSSDatabaseOld_get_VSSItem(This,Spec,Deleted,ppIVSSItem)	\
    ( (This)->lpVtbl -> get_VSSItem(This,Spec,Deleted,ppIVSSItem) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSDatabaseOld_INTERFACE_DEFINED__ */


#ifndef __IVSSDatabase_INTERFACE_DEFINED__
#define __IVSSDatabase_INTERFACE_DEFINED__

/* interface IVSSDatabase */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSDatabase;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A0DE0E2-2E9F-11D0-9236-00AA00A1EB95")
    IVSSDatabase : public IVSSDatabaseOld
    {
    public:
        virtual /* [id] */ HRESULT __stdcall AddUser( 
            /* [in] */ BSTR User,
            /* [in] */ BSTR Password,
            /* [in] */ VARIANT_BOOL ReadOnly,
            /* [retval][out] */ IVSSUser **ppIUser) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_User( 
            /* [in] */ BSTR Name,
            /* [retval][out] */ IVSSUser **ppIUser) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Users( 
            /* [retval][out] */ IVSSUsers **ppIUsers) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_ProjectRightsEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pEnabled) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_ProjectRightsEnabled( 
            /* [in] */ VARIANT_BOOL pEnabled) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_DefaultProjectRights( 
            /* [retval][out] */ long *pRights) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_DefaultProjectRights( 
            /* [in] */ long pRights) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSDatabaseVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSDatabase * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSDatabase * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSDatabase * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSDatabase * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSDatabase * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSDatabase * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSDatabase * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, Open)
        /* [id] */ HRESULT ( __stdcall *Open )( 
            IVSSDatabase * This,
            /* [defaultvalue][optional][in] */ BSTR SrcSafeIni,
            /* [defaultvalue][optional][in] */ BSTR Username,
            /* [defaultvalue][optional][in] */ BSTR Password);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_SrcSafeIni)
        /* [propget][id] */ HRESULT ( __stdcall *get_SrcSafeIni )( 
            IVSSDatabase * This,
            /* [retval][out] */ BSTR *pSrcSafeIni);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_DatabaseName)
        /* [propget][id] */ HRESULT ( __stdcall *get_DatabaseName )( 
            IVSSDatabase * This,
            /* [retval][out] */ BSTR *pDatabaseName);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_Username)
        /* [propget][id] */ HRESULT ( __stdcall *get_Username )( 
            IVSSDatabase * This,
            /* [retval][out] */ BSTR *pUsername);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_CurrentProject)
        /* [propget][id] */ HRESULT ( __stdcall *get_CurrentProject )( 
            IVSSDatabase * This,
            /* [retval][out] */ BSTR *pPrj);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, put_CurrentProject)
        /* [propput][id] */ HRESULT ( __stdcall *put_CurrentProject )( 
            IVSSDatabase * This,
            /* [in] */ BSTR pPrj);
        
        DECLSPEC_XFGVIRT(IVSSDatabaseOld, get_VSSItem)
        /* [propget][id] */ HRESULT ( __stdcall *get_VSSItem )( 
            IVSSDatabase * This,
            /* [in] */ BSTR Spec,
            /* [defaultvalue][optional][in] */ VARIANT_BOOL Deleted,
            /* [retval][out] */ IVSSItem **ppIVSSItem);
        
        DECLSPEC_XFGVIRT(IVSSDatabase, AddUser)
        /* [id] */ HRESULT ( __stdcall *AddUser )( 
            IVSSDatabase * This,
            /* [in] */ BSTR User,
            /* [in] */ BSTR Password,
            /* [in] */ VARIANT_BOOL ReadOnly,
            /* [retval][out] */ IVSSUser **ppIUser);
        
        DECLSPEC_XFGVIRT(IVSSDatabase, get_User)
        /* [propget][id] */ HRESULT ( __stdcall *get_User )( 
            IVSSDatabase * This,
            /* [in] */ BSTR Name,
            /* [retval][out] */ IVSSUser **ppIUser);
        
        DECLSPEC_XFGVIRT(IVSSDatabase, get_Users)
        /* [propget][id] */ HRESULT ( __stdcall *get_Users )( 
            IVSSDatabase * This,
            /* [retval][out] */ IVSSUsers **ppIUsers);
        
        DECLSPEC_XFGVIRT(IVSSDatabase, get_ProjectRightsEnabled)
        /* [propget][id] */ HRESULT ( __stdcall *get_ProjectRightsEnabled )( 
            IVSSDatabase * This,
            /* [retval][out] */ VARIANT_BOOL *pEnabled);
        
        DECLSPEC_XFGVIRT(IVSSDatabase, put_ProjectRightsEnabled)
        /* [propput][id] */ HRESULT ( __stdcall *put_ProjectRightsEnabled )( 
            IVSSDatabase * This,
            /* [in] */ VARIANT_BOOL pEnabled);
        
        DECLSPEC_XFGVIRT(IVSSDatabase, get_DefaultProjectRights)
        /* [propget][id] */ HRESULT ( __stdcall *get_DefaultProjectRights )( 
            IVSSDatabase * This,
            /* [retval][out] */ long *pRights);
        
        DECLSPEC_XFGVIRT(IVSSDatabase, put_DefaultProjectRights)
        /* [propput][id] */ HRESULT ( __stdcall *put_DefaultProjectRights )( 
            IVSSDatabase * This,
            /* [in] */ long pRights);
        
        END_INTERFACE
    } IVSSDatabaseVtbl;

    interface IVSSDatabase
    {
        CONST_VTBL struct IVSSDatabaseVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSDatabase_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSDatabase_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSDatabase_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSDatabase_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSDatabase_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSDatabase_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSDatabase_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSDatabase_Open(This,SrcSafeIni,Username,Password)	\
    ( (This)->lpVtbl -> Open(This,SrcSafeIni,Username,Password) ) 

#define IVSSDatabase_get_SrcSafeIni(This,pSrcSafeIni)	\
    ( (This)->lpVtbl -> get_SrcSafeIni(This,pSrcSafeIni) ) 

#define IVSSDatabase_get_DatabaseName(This,pDatabaseName)	\
    ( (This)->lpVtbl -> get_DatabaseName(This,pDatabaseName) ) 

#define IVSSDatabase_get_Username(This,pUsername)	\
    ( (This)->lpVtbl -> get_Username(This,pUsername) ) 

#define IVSSDatabase_get_CurrentProject(This,pPrj)	\
    ( (This)->lpVtbl -> get_CurrentProject(This,pPrj) ) 

#define IVSSDatabase_put_CurrentProject(This,pPrj)	\
    ( (This)->lpVtbl -> put_CurrentProject(This,pPrj) ) 

#define IVSSDatabase_get_VSSItem(This,Spec,Deleted,ppIVSSItem)	\
    ( (This)->lpVtbl -> get_VSSItem(This,Spec,Deleted,ppIVSSItem) ) 


#define IVSSDatabase_AddUser(This,User,Password,ReadOnly,ppIUser)	\
    ( (This)->lpVtbl -> AddUser(This,User,Password,ReadOnly,ppIUser) ) 

#define IVSSDatabase_get_User(This,Name,ppIUser)	\
    ( (This)->lpVtbl -> get_User(This,Name,ppIUser) ) 

#define IVSSDatabase_get_Users(This,ppIUsers)	\
    ( (This)->lpVtbl -> get_Users(This,ppIUsers) ) 

#define IVSSDatabase_get_ProjectRightsEnabled(This,pEnabled)	\
    ( (This)->lpVtbl -> get_ProjectRightsEnabled(This,pEnabled) ) 

#define IVSSDatabase_put_ProjectRightsEnabled(This,pEnabled)	\
    ( (This)->lpVtbl -> put_ProjectRightsEnabled(This,pEnabled) ) 

#define IVSSDatabase_get_DefaultProjectRights(This,pRights)	\
    ( (This)->lpVtbl -> get_DefaultProjectRights(This,pRights) ) 

#define IVSSDatabase_put_DefaultProjectRights(This,pRights)	\
    ( (This)->lpVtbl -> put_DefaultProjectRights(This,pRights) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSDatabase_INTERFACE_DEFINED__ */


#ifndef __IVSSUser_INTERFACE_DEFINED__
#define __IVSSUser_INTERFACE_DEFINED__

/* interface IVSSUser */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSUser;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A0DE0E3-2E9F-11D0-9236-00AA00A1EB95")
    IVSSUser : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT __stdcall Delete( void) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *pName) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_Name( 
            /* [in] */ BSTR pName) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_Password( 
            /* [in] */ BSTR rhs) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_ReadOnly( 
            /* [retval][out] */ VARIANT_BOOL *pReadOnly) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_ReadOnly( 
            /* [in] */ VARIANT_BOOL pReadOnly) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_ProjectRights( 
            /* [defaultvalue][optional][in] */ BSTR Project,
            /* [retval][out] */ long *piRightsOut) = 0;
        
        virtual /* [propput][id] */ HRESULT __stdcall put_ProjectRights( 
            /* [defaultvalue][optional][in] */ BSTR Project,
            /* [in] */ long piRightsOut) = 0;
        
        virtual /* [id] */ HRESULT __stdcall RemoveProjectRights( 
            /* [in] */ BSTR Project) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSUserVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSUser * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSUser * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSUser * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSUser * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSUser * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSUser * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSUser * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSUser, Delete)
        /* [id] */ HRESULT ( __stdcall *Delete )( 
            IVSSUser * This);
        
        DECLSPEC_XFGVIRT(IVSSUser, get_Name)
        /* [propget][id] */ HRESULT ( __stdcall *get_Name )( 
            IVSSUser * This,
            /* [retval][out] */ BSTR *pName);
        
        DECLSPEC_XFGVIRT(IVSSUser, put_Name)
        /* [propput][id] */ HRESULT ( __stdcall *put_Name )( 
            IVSSUser * This,
            /* [in] */ BSTR pName);
        
        DECLSPEC_XFGVIRT(IVSSUser, put_Password)
        /* [propput][id] */ HRESULT ( __stdcall *put_Password )( 
            IVSSUser * This,
            /* [in] */ BSTR rhs);
        
        DECLSPEC_XFGVIRT(IVSSUser, get_ReadOnly)
        /* [propget][id] */ HRESULT ( __stdcall *get_ReadOnly )( 
            IVSSUser * This,
            /* [retval][out] */ VARIANT_BOOL *pReadOnly);
        
        DECLSPEC_XFGVIRT(IVSSUser, put_ReadOnly)
        /* [propput][id] */ HRESULT ( __stdcall *put_ReadOnly )( 
            IVSSUser * This,
            /* [in] */ VARIANT_BOOL pReadOnly);
        
        DECLSPEC_XFGVIRT(IVSSUser, get_ProjectRights)
        /* [propget][id] */ HRESULT ( __stdcall *get_ProjectRights )( 
            IVSSUser * This,
            /* [defaultvalue][optional][in] */ BSTR Project,
            /* [retval][out] */ long *piRightsOut);
        
        DECLSPEC_XFGVIRT(IVSSUser, put_ProjectRights)
        /* [propput][id] */ HRESULT ( __stdcall *put_ProjectRights )( 
            IVSSUser * This,
            /* [defaultvalue][optional][in] */ BSTR Project,
            /* [in] */ long piRightsOut);
        
        DECLSPEC_XFGVIRT(IVSSUser, RemoveProjectRights)
        /* [id] */ HRESULT ( __stdcall *RemoveProjectRights )( 
            IVSSUser * This,
            /* [in] */ BSTR Project);
        
        END_INTERFACE
    } IVSSUserVtbl;

    interface IVSSUser
    {
        CONST_VTBL struct IVSSUserVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSUser_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSUser_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSUser_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSUser_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSUser_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSUser_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSUser_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSUser_Delete(This)	\
    ( (This)->lpVtbl -> Delete(This) ) 

#define IVSSUser_get_Name(This,pName)	\
    ( (This)->lpVtbl -> get_Name(This,pName) ) 

#define IVSSUser_put_Name(This,pName)	\
    ( (This)->lpVtbl -> put_Name(This,pName) ) 

#define IVSSUser_put_Password(This,rhs)	\
    ( (This)->lpVtbl -> put_Password(This,rhs) ) 

#define IVSSUser_get_ReadOnly(This,pReadOnly)	\
    ( (This)->lpVtbl -> get_ReadOnly(This,pReadOnly) ) 

#define IVSSUser_put_ReadOnly(This,pReadOnly)	\
    ( (This)->lpVtbl -> put_ReadOnly(This,pReadOnly) ) 

#define IVSSUser_get_ProjectRights(This,Project,piRightsOut)	\
    ( (This)->lpVtbl -> get_ProjectRights(This,Project,piRightsOut) ) 

#define IVSSUser_put_ProjectRights(This,Project,piRightsOut)	\
    ( (This)->lpVtbl -> put_ProjectRights(This,Project,piRightsOut) ) 

#define IVSSUser_RemoveProjectRights(This,Project)	\
    ( (This)->lpVtbl -> RemoveProjectRights(This,Project) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSUser_INTERFACE_DEFINED__ */


#ifndef __IVSSUsers_INTERFACE_DEFINED__
#define __IVSSUsers_INTERFACE_DEFINED__

/* interface IVSSUsers */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSUsers;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A0DE0E4-2E9F-11D0-9236-00AA00A1EB95")
    IVSSUsers : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *piCount) = 0;
        
        virtual /* [propget][id] */ HRESULT __stdcall get_Item( 
            /* [in] */ VARIANT sItem,
            /* [retval][out] */ IVSSUser **ppIUser) = 0;
        
        virtual /* [hidden][restricted][id] */ HRESULT __stdcall _NewEnum( 
            /* [retval][out] */ IUnknown **ppIEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSUsersVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSUsers * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSUsers * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSUsers * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSSUsers * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSSUsers * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSSUsers * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSSUsers * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSSUsers, get_Count)
        /* [propget][id] */ HRESULT ( __stdcall *get_Count )( 
            IVSSUsers * This,
            /* [retval][out] */ long *piCount);
        
        DECLSPEC_XFGVIRT(IVSSUsers, get_Item)
        /* [propget][id] */ HRESULT ( __stdcall *get_Item )( 
            IVSSUsers * This,
            /* [in] */ VARIANT sItem,
            /* [retval][out] */ IVSSUser **ppIUser);
        
        DECLSPEC_XFGVIRT(IVSSUsers, _NewEnum)
        /* [hidden][restricted][id] */ HRESULT ( __stdcall *_NewEnum )( 
            IVSSUsers * This,
            /* [retval][out] */ IUnknown **ppIEnum);
        
        END_INTERFACE
    } IVSSUsersVtbl;

    interface IVSSUsers
    {
        CONST_VTBL struct IVSSUsersVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSUsers_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSUsers_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSUsers_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSUsers_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSSUsers_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSSUsers_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSSUsers_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSSUsers_get_Count(This,piCount)	\
    ( (This)->lpVtbl -> get_Count(This,piCount) ) 

#define IVSSUsers_get_Item(This,sItem,ppIUser)	\
    ( (This)->lpVtbl -> get_Item(This,sItem,ppIUser) ) 

#define IVSSUsers__NewEnum(This,ppIEnum)	\
    ( (This)->lpVtbl -> _NewEnum(This,ppIEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSUsers_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VSSItem;

#ifdef __cplusplus

class DECLSPEC_UUID("783CD4E3-9D54-11CF-B8EE-00608CC9A71F")
VSSItem;
#endif

EXTERN_C const CLSID CLSID_VSSVersion;

#ifdef __cplusplus

class DECLSPEC_UUID("783CD4EC-9D54-11CF-B8EE-00608CC9A71F")
VSSVersion;
#endif

EXTERN_C const CLSID CLSID_VSSCheckout;

#ifdef __cplusplus

class DECLSPEC_UUID("2A0DE0E0-2E9F-11D0-9236-00AA00A1EB95")
VSSCheckout;
#endif

EXTERN_C const CLSID CLSID_VSSDatabase;

#ifdef __cplusplus

class DECLSPEC_UUID("783CD4E4-9D54-11CF-B8EE-00608CC9A71F")
VSSDatabase;
#endif

EXTERN_C const CLSID CLSID_VSSUser;

#ifdef __cplusplus

class DECLSPEC_UUID("2A0DE0E5-2E9F-11D0-9236-00AA00A1EB95")
VSSUser;
#endif

#ifndef __IVSSEventsOld_INTERFACE_DEFINED__
#define __IVSSEventsOld_INTERFACE_DEFINED__

/* interface IVSSEventsOld */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSEventsOld;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4E9-9D54-11CF-B8EE-00608CC9A71F")
    IVSSEventsOld : public IUnknown
    {
    public:
        virtual HRESULT __stdcall BeforeAdd( 
            /* [in] */ IVSSItem *pIPrj,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterAdd( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local) = 0;
        
        virtual HRESULT __stdcall BeforeCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local) = 0;
        
        virtual HRESULT __stdcall BeforeCheckin( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterCheckin( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local) = 0;
        
        virtual HRESULT __stdcall BeforeUndoCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterUndoCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local) = 0;
        
        virtual HRESULT __stdcall BeforeRename( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR NewName,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterRename( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR OldName) = 0;
        
        virtual HRESULT __stdcall BeforeBranch( 
            /* [in] */ IVSSItem *pIItem,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterBranch( 
            /* [in] */ IVSSItem *pIItem) = 0;
        
        virtual HRESULT __stdcall BeforeEvent( 
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterEvent( 
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSEventsOldVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSEventsOld * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSEventsOld * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSEventsOld * This);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, BeforeAdd)
        HRESULT ( __stdcall *BeforeAdd )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIPrj,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, AfterAdd)
        HRESULT ( __stdcall *AfterAdd )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, BeforeCheckout)
        HRESULT ( __stdcall *BeforeCheckout )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, AfterCheckout)
        HRESULT ( __stdcall *AfterCheckout )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, BeforeCheckin)
        HRESULT ( __stdcall *BeforeCheckin )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, AfterCheckin)
        HRESULT ( __stdcall *AfterCheckin )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, BeforeUndoCheckout)
        HRESULT ( __stdcall *BeforeUndoCheckout )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, AfterUndoCheckout)
        HRESULT ( __stdcall *AfterUndoCheckout )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, BeforeRename)
        HRESULT ( __stdcall *BeforeRename )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR NewName,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, AfterRename)
        HRESULT ( __stdcall *AfterRename )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR OldName);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, BeforeBranch)
        HRESULT ( __stdcall *BeforeBranch )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, AfterBranch)
        HRESULT ( __stdcall *AfterBranch )( 
            IVSSEventsOld * This,
            /* [in] */ IVSSItem *pIItem);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, BeforeEvent)
        HRESULT ( __stdcall *BeforeEvent )( 
            IVSSEventsOld * This,
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEventsOld, AfterEvent)
        HRESULT ( __stdcall *AfterEvent )( 
            IVSSEventsOld * This,
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var);
        
        END_INTERFACE
    } IVSSEventsOldVtbl;

    interface IVSSEventsOld
    {
        CONST_VTBL struct IVSSEventsOldVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSEventsOld_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSEventsOld_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSEventsOld_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSEventsOld_BeforeAdd(This,pIPrj,Local,pbContinue)	\
    ( (This)->lpVtbl -> BeforeAdd(This,pIPrj,Local,pbContinue) ) 

#define IVSSEventsOld_AfterAdd(This,pIItem,Local)	\
    ( (This)->lpVtbl -> AfterAdd(This,pIItem,Local) ) 

#define IVSSEventsOld_BeforeCheckout(This,pIItem,Local,pbContinue)	\
    ( (This)->lpVtbl -> BeforeCheckout(This,pIItem,Local,pbContinue) ) 

#define IVSSEventsOld_AfterCheckout(This,pIItem,Local)	\
    ( (This)->lpVtbl -> AfterCheckout(This,pIItem,Local) ) 

#define IVSSEventsOld_BeforeCheckin(This,pIItem,Local,pbContinue)	\
    ( (This)->lpVtbl -> BeforeCheckin(This,pIItem,Local,pbContinue) ) 

#define IVSSEventsOld_AfterCheckin(This,pIItem,Local)	\
    ( (This)->lpVtbl -> AfterCheckin(This,pIItem,Local) ) 

#define IVSSEventsOld_BeforeUndoCheckout(This,pIItem,Local,pbContinue)	\
    ( (This)->lpVtbl -> BeforeUndoCheckout(This,pIItem,Local,pbContinue) ) 

#define IVSSEventsOld_AfterUndoCheckout(This,pIItem,Local)	\
    ( (This)->lpVtbl -> AfterUndoCheckout(This,pIItem,Local) ) 

#define IVSSEventsOld_BeforeRename(This,pIItem,NewName,pbContinue)	\
    ( (This)->lpVtbl -> BeforeRename(This,pIItem,NewName,pbContinue) ) 

#define IVSSEventsOld_AfterRename(This,pIItem,OldName)	\
    ( (This)->lpVtbl -> AfterRename(This,pIItem,OldName) ) 

#define IVSSEventsOld_BeforeBranch(This,pIItem,pbContinue)	\
    ( (This)->lpVtbl -> BeforeBranch(This,pIItem,pbContinue) ) 

#define IVSSEventsOld_AfterBranch(This,pIItem)	\
    ( (This)->lpVtbl -> AfterBranch(This,pIItem) ) 

#define IVSSEventsOld_BeforeEvent(This,iEvent,pIItem,Str,var,pbContinue)	\
    ( (This)->lpVtbl -> BeforeEvent(This,iEvent,pIItem,Str,var,pbContinue) ) 

#define IVSSEventsOld_AfterEvent(This,iEvent,pIItem,Str,var)	\
    ( (This)->lpVtbl -> AfterEvent(This,iEvent,pIItem,Str,var) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSEventsOld_INTERFACE_DEFINED__ */


#ifndef __IVSSEvents_INTERFACE_DEFINED__
#define __IVSSEvents_INTERFACE_DEFINED__

/* interface IVSSEvents */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A0DE0E8-2E9F-11D0-9236-00AA00A1EB95")
    IVSSEvents : public IUnknown
    {
    public:
        virtual HRESULT __stdcall BeforeAdd( 
            /* [in] */ IVSSItem *pIPrj,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterAdd( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment) = 0;
        
        virtual HRESULT __stdcall BeforeCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment) = 0;
        
        virtual HRESULT __stdcall BeforeCheckin( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterCheckin( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment) = 0;
        
        virtual HRESULT __stdcall BeforeUndoCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterUndoCheckout( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local) = 0;
        
        virtual HRESULT __stdcall BeforeRename( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR NewName,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterRename( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR OldName) = 0;
        
        virtual HRESULT __stdcall BeforeBranch( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterBranch( 
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Comment) = 0;
        
        virtual HRESULT __stdcall BeginCommand( 
            /* [in] */ long unused,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall EndCommand( 
            /* [in] */ long unused) = 0;
        
        virtual HRESULT __stdcall BeforeEvent( 
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var,
            /* [retval][out] */ VARIANT_BOOL *pbContinue) = 0;
        
        virtual HRESULT __stdcall AfterEvent( 
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSEventsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSEvents * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSEvents * This);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeforeAdd)
        HRESULT ( __stdcall *BeforeAdd )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIPrj,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, AfterAdd)
        HRESULT ( __stdcall *AfterAdd )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeforeCheckout)
        HRESULT ( __stdcall *BeforeCheckout )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, AfterCheckout)
        HRESULT ( __stdcall *AfterCheckout )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeforeCheckin)
        HRESULT ( __stdcall *BeforeCheckin )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, AfterCheckin)
        HRESULT ( __stdcall *AfterCheckin )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [in] */ BSTR Comment);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeforeUndoCheckout)
        HRESULT ( __stdcall *BeforeUndoCheckout )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, AfterUndoCheckout)
        HRESULT ( __stdcall *AfterUndoCheckout )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Local);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeforeRename)
        HRESULT ( __stdcall *BeforeRename )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR NewName,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, AfterRename)
        HRESULT ( __stdcall *AfterRename )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR OldName);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeforeBranch)
        HRESULT ( __stdcall *BeforeBranch )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Comment,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, AfterBranch)
        HRESULT ( __stdcall *AfterBranch )( 
            IVSSEvents * This,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Comment);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeginCommand)
        HRESULT ( __stdcall *BeginCommand )( 
            IVSSEvents * This,
            /* [in] */ long unused,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, EndCommand)
        HRESULT ( __stdcall *EndCommand )( 
            IVSSEvents * This,
            /* [in] */ long unused);
        
        DECLSPEC_XFGVIRT(IVSSEvents, BeforeEvent)
        HRESULT ( __stdcall *BeforeEvent )( 
            IVSSEvents * This,
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var,
            /* [retval][out] */ VARIANT_BOOL *pbContinue);
        
        DECLSPEC_XFGVIRT(IVSSEvents, AfterEvent)
        HRESULT ( __stdcall *AfterEvent )( 
            IVSSEvents * This,
            /* [in] */ long iEvent,
            /* [in] */ IVSSItem *pIItem,
            /* [in] */ BSTR Str,
            /* [in] */ VARIANT var);
        
        END_INTERFACE
    } IVSSEventsVtbl;

    interface IVSSEvents
    {
        CONST_VTBL struct IVSSEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSEvents_BeforeAdd(This,pIPrj,Local,Comment,pbContinue)	\
    ( (This)->lpVtbl -> BeforeAdd(This,pIPrj,Local,Comment,pbContinue) ) 

#define IVSSEvents_AfterAdd(This,pIItem,Local,Comment)	\
    ( (This)->lpVtbl -> AfterAdd(This,pIItem,Local,Comment) ) 

#define IVSSEvents_BeforeCheckout(This,pIItem,Local,Comment,pbContinue)	\
    ( (This)->lpVtbl -> BeforeCheckout(This,pIItem,Local,Comment,pbContinue) ) 

#define IVSSEvents_AfterCheckout(This,pIItem,Local,Comment)	\
    ( (This)->lpVtbl -> AfterCheckout(This,pIItem,Local,Comment) ) 

#define IVSSEvents_BeforeCheckin(This,pIItem,Local,Comment,pbContinue)	\
    ( (This)->lpVtbl -> BeforeCheckin(This,pIItem,Local,Comment,pbContinue) ) 

#define IVSSEvents_AfterCheckin(This,pIItem,Local,Comment)	\
    ( (This)->lpVtbl -> AfterCheckin(This,pIItem,Local,Comment) ) 

#define IVSSEvents_BeforeUndoCheckout(This,pIItem,Local,pbContinue)	\
    ( (This)->lpVtbl -> BeforeUndoCheckout(This,pIItem,Local,pbContinue) ) 

#define IVSSEvents_AfterUndoCheckout(This,pIItem,Local)	\
    ( (This)->lpVtbl -> AfterUndoCheckout(This,pIItem,Local) ) 

#define IVSSEvents_BeforeRename(This,pIItem,NewName,pbContinue)	\
    ( (This)->lpVtbl -> BeforeRename(This,pIItem,NewName,pbContinue) ) 

#define IVSSEvents_AfterRename(This,pIItem,OldName)	\
    ( (This)->lpVtbl -> AfterRename(This,pIItem,OldName) ) 

#define IVSSEvents_BeforeBranch(This,pIItem,Comment,pbContinue)	\
    ( (This)->lpVtbl -> BeforeBranch(This,pIItem,Comment,pbContinue) ) 

#define IVSSEvents_AfterBranch(This,pIItem,Comment)	\
    ( (This)->lpVtbl -> AfterBranch(This,pIItem,Comment) ) 

#define IVSSEvents_BeginCommand(This,unused,pbContinue)	\
    ( (This)->lpVtbl -> BeginCommand(This,unused,pbContinue) ) 

#define IVSSEvents_EndCommand(This,unused)	\
    ( (This)->lpVtbl -> EndCommand(This,unused) ) 

#define IVSSEvents_BeforeEvent(This,iEvent,pIItem,Str,var,pbContinue)	\
    ( (This)->lpVtbl -> BeforeEvent(This,iEvent,pIItem,Str,var,pbContinue) ) 

#define IVSSEvents_AfterEvent(This,iEvent,pIItem,Str,var)	\
    ( (This)->lpVtbl -> AfterEvent(This,iEvent,pIItem,Str,var) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSEvents_INTERFACE_DEFINED__ */


#ifndef __IVSS_INTERFACE_DEFINED__
#define __IVSS_INTERFACE_DEFINED__

/* interface IVSS */
/* [object][oleautomation][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSS;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4EB-9D54-11CF-B8EE-00608CC9A71F")
    IVSS : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT __stdcall get_VSSDatabase( 
            /* [retval][out] */ IVSSDatabase **ppIVSSDatabase) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSS * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSS * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSS * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IVSS * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IVSS * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IVSS * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IVSS * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IVSS, get_VSSDatabase)
        /* [propget][id] */ HRESULT ( __stdcall *get_VSSDatabase )( 
            IVSS * This,
            /* [retval][out] */ IVSSDatabase **ppIVSSDatabase);
        
        END_INTERFACE
    } IVSSVtbl;

    interface IVSS
    {
        CONST_VTBL struct IVSSVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSS_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSS_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSS_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSS_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IVSS_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IVSS_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IVSS_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IVSS_get_VSSDatabase(This,ppIVSSDatabase)	\
    ( (This)->lpVtbl -> get_VSSDatabase(This,ppIVSSDatabase) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSS_INTERFACE_DEFINED__ */


#ifndef __IVSSEventHandler_INTERFACE_DEFINED__
#define __IVSSEventHandler_INTERFACE_DEFINED__

/* interface IVSSEventHandler */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IVSSEventHandler;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("783CD4EA-9D54-11CF-B8EE-00608CC9A71F")
    IVSSEventHandler : public IUnknown
    {
    public:
        virtual HRESULT __stdcall Init( 
            /* [in] */ IVSS *pIVSS) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IVSSEventHandlerVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IVSSEventHandler * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IVSSEventHandler * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IVSSEventHandler * This);
        
        DECLSPEC_XFGVIRT(IVSSEventHandler, Init)
        HRESULT ( __stdcall *Init )( 
            IVSSEventHandler * This,
            /* [in] */ IVSS *pIVSS);
        
        END_INTERFACE
    } IVSSEventHandlerVtbl;

    interface IVSSEventHandler
    {
        CONST_VTBL struct IVSSEventHandlerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IVSSEventHandler_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IVSSEventHandler_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IVSSEventHandler_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IVSSEventHandler_Init(This,pIVSS)	\
    ( (This)->lpVtbl -> Init(This,pIVSS) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IVSSEventHandler_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_VSSApp;

#ifdef __cplusplus

class DECLSPEC_UUID("2A0DE0E1-2E9F-11D0-9236-00AA00A1EB95")
VSSApp;
#endif
#endif /* __SourceSafeTypeLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


