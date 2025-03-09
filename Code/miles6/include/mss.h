#pragma once

// fake mss.h header for use with re3, to make using mss32.dll possible
// gta3 uses miles 6.1a
// check https://github.com/withmorten/re3mss for more info
// TODO: AshHipgrave - If this works then fork the project on GitHub so these changes can be more easily integrated into the project

#include <stdint.h>

// @third party code - BEGIN C&C: Renegade
#include <windows.h>
#include <mmsystem.h>
// @third party code - END C&C: Renegade

typedef char C8;
typedef uint8_t U8;
typedef int8_t S8;
typedef int16_t S16;
typedef uint16_t U16;
typedef int32_t S32;
typedef uint32_t U32;
typedef float F32;
typedef double F64;

typedef void *HSTREAM;
typedef U32 HPROVIDER;
typedef void *H3DPOBJECT;
typedef H3DPOBJECT H3DSAMPLE;
typedef void *HSAMPLE;
typedef S32 HSAMPLESTATE;

// @third party code - BEGIN C&C: Renegade
#define AILCALL WINAPI
#define AILEXPORT WINAPI
#define AILCALLBACK AILEXPORT

typedef S32 HTIMER;
typedef U32 HATTRIB;
typedef S32 HASISTREAM;
typedef S32 ASIRESULT;

typedef LPVOID AILLPDIRECTSOUND;
typedef LPVOID AILLPDIRECTSOUNDBUFFER;

struct _DIG_DRIVER;
typedef struct _DIG_DRIVER * HDIGDRIVER;

typedef S32(AILCALLBACK* AILASIFETCHCB) (U32 user, void* dest, S32 bytes_requested, S32 offset);
typedef HASISTREAM(AILCALL* ASI_STREAM_OPEN) (U32 user, AILASIFETCHCB fetch_CB, U32 total_size);
typedef S32(AILCALL* ASI_STREAM_PROCESS) (HASISTREAM  stream, void* buffer, S32 buffer_size);
typedef ASIRESULT(AILCALL* ASI_STREAM_SEEK) (HASISTREAM stream, S32 stream_offset);
typedef S32(AILCALL* ASI_STREAM_ATTRIBUTE) (HASISTREAM stream, HATTRIB attrib);
typedef S32(AILCALL* ASI_STREAM_SET_PREFERENCE) (HASISTREAM stream, HATTRIB preference, void const* value);
typedef ASIRESULT(AILCALL* ASI_STREAM_CLOSE) (HASISTREAM stream);

typedef enum
{
    DP_FLUSH = 0,     // Must be "MSS mixer" provider
    DP_DEFAULT_FILTER, // Must be "MSS pipeline filter" provider (sets the default)
    DP_DEFAULT_MERGE,  // Must be "MSS mixer" provider (sets the default)
    DP_COPY,          // Must be "MSS mixer" provider
    N_DIGDRV_STAGES,  // Placeholder for end of list (= # of valid stages)
    DIGDRV_ALL_STAGES // Used to signify all pipeline stages, for shutdown
} DIGDRVSTAGE;

typedef struct
{
    ASI_STREAM_OPEN           ASI_stream_open;
    ASI_STREAM_PROCESS        ASI_stream_process;
    ASI_STREAM_SEEK           ASI_stream_seek;
    ASI_STREAM_CLOSE          ASI_stream_close;
    ASI_STREAM_ATTRIBUTE      ASI_stream_attribute;
    ASI_STREAM_SET_PREFERENCE ASI_stream_set_preference;

    HATTRIB INPUT_BIT_RATE;
    HATTRIB INPUT_SAMPLE_RATE;
    HATTRIB INPUT_BITS;
    HATTRIB INPUT_CHANNELS;
    HATTRIB OUTPUT_BIT_RATE;
    HATTRIB OUTPUT_SAMPLE_RATE;
    HATTRIB OUTPUT_BITS;
    HATTRIB OUTPUT_CHANNELS;
    HATTRIB POSITION;
    HATTRIB PERCENT_DONE;
    HATTRIB MIN_INPUT_BLOCK_SIZE;
    HATTRIB RAW_RATE;
    HATTRIB RAW_BITS;
    HATTRIB RAW_CHANNELS;
    HATTRIB REQUESTED_RATE;
    HATTRIB REQUESTED_BITS;
    HATTRIB REQUESTED_CHANS;

    HASISTREAM stream;
} ASISTAGE;

typedef void (AILCALL * MIXER_FLUSH) (S32 * dest, S32 len, S32 * reverb_buffer, S32 reverb_level, U32 MMX_available);
typedef void (AILCALL * MIXER_MERGE)  (void const * * src, U32 * src_fract, void const * src_end, S32 * * dest, void * dest_end, S32 * left_val, S32 * right_val, S32 playback_ratio, S32 scale_left, S32 scale_right, U32 operation, U32 MMX_available);
typedef void (AILCALL * MIXER_COPY) (void const * src, S32 src_len, void * dest, U32 operation, U32 MMX_available);

typedef struct
{
    MIXER_FLUSH MSS_mixer_flush;
    MIXER_MERGE MSS_mixer_merge;
    MIXER_COPY  MSS_mixer_copy;
} MIXSTAGE;

typedef struct
{
    struct _FLTPROVIDER * provider;
    HSAMPLESTATE             sample_state;
}
FLTSTAGE;

typedef struct
{
    S32       active;    // Pass-through if 0, active if 1
    HPROVIDER provider;

    union
    {
        ASISTAGE ASI;
        MIXSTAGE MIX;
        FLTSTAGE FLT;
    }
    TYPE;
} DPINFO;

typedef struct _DIG_DRIVER          // Handle to digital audio driver
{
    char     tag[4];                 // HDIG

    HTIMER      backgroundtimer;     // Background timer handle

    S32         quiet;               // # of consecutive quiet sample periods

    S32         n_active_samples;    // # of samples being processed

    S32         master_volume;       // Master sample volume 0-127

    S32         DMA_rate;            // Hardware sample rate
    S32         hw_format;           // DIG_F code in use
    U32         hw_mode_flags;       // DIG_PCM_ flags for mode in use

    S32         channels_per_sample; // # of channels per sample (1 or 2)
    S32         bytes_per_channel;   // # of bytes per channel (1 or 2)
    S32         channels_per_buffer; // # of channels per half-buffer
    S32         samples_per_buffer;  // # of samples per half-buffer

    S32         playing;             // Playback active if non-zero

    HSAMPLE     samples;             // Pointer to list of SAMPLEs

    S32         n_samples;           // # of SAMPLEs

    S32         build_size;          // # of bytes in build buffer
    S32    * build_buffer;        // Build buffer (4 * samples_per_buffer)

    S32         system_data[8];      // Miscellaneous system data

    S32         buffer_size;         // Size of each output buffer

    //
    // waveOut-specific interface data
    //

    HWAVEOUT    hWaveOut;            // Wave output driver

    U32         reset_works;         // TRUE if OK to do waveOutReset
    U32         request_reset;       // If nonzero, do waveOutReset ASAP

    LPWAVEHDR   first;               // Pointer to first WAVEHDR in chain
    S32         n_buffers;           // # of output WAVEHDRs in chain

    LPWAVEHDR volatile * return_list; // Circular list of returned WAVEHDRs
    S32       volatile      return_head; // Head of WAVEHDR list (insertion point)
    S32       volatile      return_tail; // Tail of WAVEHDR list (retrieval point)


    U32         deviceid;            // id from waveout open
    PCMWAVEFORMAT  wformat;          // format from waveout open

    //
    // DirectSound-specific interface data
    //

    U32                    guid;        // The guid id of the ds driver
    AILLPDIRECTSOUND       pDS;         // DirectSound output driver (don't
    // use with Smacker directly anymore!)

    U32                    ds_priority; // priority opened with

    S32                    emulated_ds; // is ds emulated or not?
    AILLPDIRECTSOUNDBUFFER lppdsb;      // primary buffer or null

    U32                    dsHwnd;      // HWND used with DirectSound

    AILLPDIRECTSOUNDBUFFER * lpbufflist;   // List of pointers to secondary buffers
    HSAMPLE         * samp_list;      // HSAMPLE associated with each buffer
    S32             * sec_format;     // DIG_F_ format for secondary buffer
    S32                  max_buffs;      // Max. allowable # of secondary buffers

    //
    // Misc. data
    //

    S32         released;            // has the sound manager been released?

    U32         foreground_timer;    // Foreground timer handle

    HDIGDRIVER  next;                // Pointer to next HDIGDRIVER in use
    S32      callingCT;              // Calling EXE's task number (16 bit only)
    S32      callingDS;              // Calling EXE's DS (used in 16 bit only)

    //
    // Vars for waveOut emulation
    //

    S32 DS_initialized;

    AILLPDIRECTSOUNDBUFFER DS_sec_buff;    // Secondary buffer (or NULL if none)
    AILLPDIRECTSOUNDBUFFER DS_out_buff;    // Output buffer (may be sec or prim)
    S32 DS_buffer_size;                    // Size of entire output buffer

    S32 DS_frag_cnt;                 // Total fragment count and size, and
    S32 DS_frag_size;                // last fragment occupied by play cursor
    S32 DS_last_frag;
    S32 DS_last_write;
    S32 DS_last_timer;
    S32 DS_skip_time;

    S32 DS_use_default_format;       // 1 to force use of default DS primary buffer format

    S32         use_MMX;             // Use MMX with this driver if TRUE

    void   * decode_buffer;       // Buffer used by optional ASI pipeline decoder
    S32         decode_buffer_size;  // # of bytes in decode buffer

    U32 us_count;
    U32 ms_count;
    U32 last_ms_polled;
    U32 last_percent;

    //
    // Digital driver pipeline stages
    //

    DPINFO   pipeline[N_DIGDRV_STAGES];

    //
    // Reverb buffer
    //

    S32 * reverb_buffer;
    S32      reverb_buffer_size;
    S32      reverb_buffer_position;
    S32      no_wom_done;
    U32      wom_done_buffers;
} DIG_DRIVER;

typedef struct _DIG_DRIVER * HDIGDRIVER;
// @third party code - END C&C: Renegade

typedef U32 HPROENUM;
#define HPROENUM_FIRST 0

typedef S32 M3DRESULT;

#define M3D_NOERR 0

// @third party code - BEGIN C&C: Renegade
#define AILEXPORT WINAPI
#define AILCALLBACK AILEXPORT

#define NO                      0
#define DIG_USE_WAVEOUT         15
#define AIL_NO_ERROR            0
#define AIL_LOCK_PROTECTION     18
#define WAVE_FORMAT_PCM         1
#define WAVE_FORMAT_IMA_ADPCM   0x0011
// @third party code - END C&C: Renegade

enum 
{ 
	// @third party code - BEGIN C&C: Renegade
	ENVIRONMENT_GENERIC = 0,
	// @third party code - END C&C: Renegade
	ENVIRONMENT_CAVE = 8 
};

// @third party code - BEGIN C&C: Renegade
typedef enum
{
	DP_ASI_DECODER = 0,
	DP_FILTER,
	DP_MERGE,
	N_SAMPLE_STAGES,
	SAMPLE_ALL_STAGES
} SAMPLESTAGE;
// @third party code - END C&C: Renegade

#define AIL_3D_2_SPEAKER 0
#define AIL_3D_HEADPHONE 1
// @third party code - BEGIN C&C: Renegade
#define AIL_3D_SURROUND  2
// @third party code - END C&C: Renegade
#define AIL_3D_4_SPEAKER 3

#define DIG_MIXER_CHANNELS 1

#define DIG_F_MONO_16 1
#define DIG_PCM_SIGN 1

#define SMP_PLAYING 4

typedef struct _AILSOUNDINFO
{
	S32 format;
	void const *data_ptr;
	U32 data_len;
	U32 rate;
	S32 bits;
	S32 channels;
	U32 samples;
	U32 block_size;
	void const *initial_ptr;
} AILSOUNDINFO;

typedef U32 (WINAPI *AIL_file_open_callback)(char const * Filename, U32 * FileHandle);

typedef void (WINAPI *AIL_file_close_callback)(U32 FileHandle);

#define AIL_FILE_SEEK_BEGIN 0
#define AIL_FILE_SEEK_CURRENT 1
#define AIL_FILE_SEEK_END 2

typedef S32(WINAPI *AIL_file_seek_callback)(U32 FileHandle, S32 Offset, U32 Type);

typedef U32(WINAPI *AIL_file_read_callback)(U32 FileHandle, void* Buffer, U32 Bytes);

#ifdef RE3MSS_EXPORTS
#define RE3MSS_EXPORT __declspec(dllexport)
#else
#define RE3MSS_EXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

RE3MSS_EXPORT S32 WINAPI AIL_enumerate_3D_providers(HPROENUM *next, HPROVIDER *dest, C8 **name);
RE3MSS_EXPORT void WINAPI AIL_release_3D_sample_handle(H3DSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_close_3D_provider(HPROVIDER lib);
RE3MSS_EXPORT void WINAPI AIL_set_3D_provider_preference(HPROVIDER lib, C8 const *name, void const *val);
RE3MSS_EXPORT M3DRESULT WINAPI AIL_open_3D_provider(HPROVIDER lib);
RE3MSS_EXPORT C8 *WINAPI AIL_last_error(void);
RE3MSS_EXPORT S32 WINAPI AIL_3D_room_type(HPROVIDER lib);
RE3MSS_EXPORT void WINAPI AIL_set_3D_room_type(HPROVIDER lib, S32 room_type);
RE3MSS_EXPORT void WINAPI AIL_3D_provider_attribute(HPROVIDER lib, C8 const *name, void *val);
RE3MSS_EXPORT H3DSAMPLE WINAPI AIL_allocate_3D_sample_handle(HPROVIDER lib);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_effects_level(H3DSAMPLE S, F32 effects_level);
RE3MSS_EXPORT void WINAPI AIL_set_3D_speaker_type(HPROVIDER lib, S32 speaker_type);
RE3MSS_EXPORT HSTREAM WINAPI AIL_open_stream(HDIGDRIVER dig, C8 const *filename, S32 stream_mem);
RE3MSS_EXPORT void WINAPI AIL_stream_ms_position(HSTREAM S, S32 *total_milliseconds, S32 *current_milliseconds);
RE3MSS_EXPORT void WINAPI AIL_close_stream(HSTREAM stream);
RE3MSS_EXPORT S32 WINAPI AIL_digital_handle_release(HDIGDRIVER drvr);
RE3MSS_EXPORT S32 WINAPI AIL_digital_handle_reacquire(HDIGDRIVER drvr);
RE3MSS_EXPORT C8 *WINAPI AIL_set_redist_directory(C8 const *dir);
RE3MSS_EXPORT S32 WINAPI AIL_startup(void);
RE3MSS_EXPORT S32 WINAPI AIL_set_preference(U32 number, S32 value);
RE3MSS_EXPORT HDIGDRIVER WINAPI AIL_open_digital_driver(U32 frequency, S32 bits, S32 channel, U32 flags);
RE3MSS_EXPORT void *WINAPI AIL_mem_alloc_lock(U32 size);
RE3MSS_EXPORT HSAMPLE WINAPI AIL_allocate_sample_handle(HDIGDRIVER dig);
RE3MSS_EXPORT void WINAPI AIL_init_sample(HSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_set_sample_type(HSAMPLE S, S32 format, U32 flags);
RE3MSS_EXPORT void WINAPI AIL_pause_stream(HSTREAM stream, S32 onoff);
RE3MSS_EXPORT void WINAPI AIL_release_sample_handle(HSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_mem_free_lock(void *ptr);
RE3MSS_EXPORT void WINAPI AIL_close_digital_driver(HDIGDRIVER dig);
RE3MSS_EXPORT void WINAPI AIL_shutdown(void);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_volume(H3DSAMPLE S, S32 volume);
RE3MSS_EXPORT void WINAPI AIL_set_sample_volume(HSAMPLE S, S32 volume);
RE3MSS_EXPORT void WINAPI AIL_set_sample_address(HSAMPLE S, void const *start, U32 len);
RE3MSS_EXPORT S32 WINAPI AIL_set_3D_sample_info(H3DSAMPLE S, AILSOUNDINFO const *info);
RE3MSS_EXPORT void WINAPI AIL_set_3D_position(H3DPOBJECT obj, F32 X, F32 Y, F32 Z);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_distances(H3DSAMPLE S, F32 max_dist, F32 min_dist);
RE3MSS_EXPORT void WINAPI AIL_set_sample_pan(HSAMPLE S, S32 pan);
RE3MSS_EXPORT void WINAPI AIL_set_sample_playback_rate(HSAMPLE S, S32 playback_rate);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_playback_rate(H3DSAMPLE S, S32 playback_rate);
RE3MSS_EXPORT void WINAPI AIL_set_sample_loop_block(HSAMPLE S, S32 loop_start_offset, S32 loop_end_offset);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_loop_block(H3DSAMPLE S, S32 loop_start_offset, S32 loop_end_offset);
RE3MSS_EXPORT void WINAPI AIL_set_sample_loop_count(HSAMPLE S, S32 loop_count);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_loop_count(H3DSAMPLE S, S32 loops);
RE3MSS_EXPORT U32 WINAPI AIL_sample_status(HSAMPLE S);
RE3MSS_EXPORT U32 WINAPI AIL_3D_sample_status(H3DSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_start_sample(HSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_start_3D_sample(H3DSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_end_sample(HSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_end_3D_sample(H3DSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_set_stream_loop_count(HSTREAM stream, S32 count);
RE3MSS_EXPORT S32 WINAPI AIL_service_stream(HSTREAM stream, S32 fillup);
RE3MSS_EXPORT void WINAPI AIL_start_stream(HSTREAM stream);
RE3MSS_EXPORT void WINAPI AIL_set_stream_ms_position(HSTREAM S, S32 milliseconds);
RE3MSS_EXPORT void WINAPI AIL_set_stream_volume(HSTREAM stream, S32 volume);
RE3MSS_EXPORT void WINAPI AIL_set_stream_pan(HSTREAM stream, S32 pan);
RE3MSS_EXPORT S32 WINAPI AIL_stream_status(HSTREAM stream);
RE3MSS_EXPORT void WINAPI AIL_set_file_callbacks(AIL_file_open_callback opencb, AIL_file_close_callback closecb, AIL_file_seek_callback seekcb, AIL_file_read_callback readcb);

// @third party code - BEGIN C&C: Renegade
RE3MSS_EXPORT void WINAPI AIL_lock(void);
RE3MSS_EXPORT void WINAPI AIL_unlock(void);
RE3MSS_EXPORT S32 WINAPI AIL_sample_user_data(HSAMPLE S, U32 index);
RE3MSS_EXPORT S32 WINAPI AIL_sample_playback_rate(HSAMPLE S);
RE3MSS_EXPORT S32 WINAPI AIL_stream_loop_count(HSTREAM stream);
RE3MSS_EXPORT S32 WINAPI AIL_stream_volume(HSTREAM stream);
RE3MSS_EXPORT S32 WINAPI AIL_stream_pan(HSTREAM stream);
RE3MSS_EXPORT void WINAPI AIL_sample_ms_position(HSAMPLE S, S32 * total_milliseconds, S32 * current_milliseconds);
RE3MSS_EXPORT void WINAPI AIL_set_sample_user_data(HSAMPLE S, U32 index, S32 value);
RE3MSS_EXPORT void WINAPI AIL_set_stream_loop_block(HSTREAM S, S32 loop_start_offset, S32 loop_end_offset);
RE3MSS_EXPORT S32  WINAPI AIL_sample_loop_count(HSAMPLE S);
RE3MSS_EXPORT S32 WINAPI AIL_sample_volume(HSAMPLE S);
RE3MSS_EXPORT S32  WINAPI AIL_sample_pan(HSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_stop_sample(HSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_resume_sample(HSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_set_sample_ms_position(HSAMPLE S, S32 milliseconds);
RE3MSS_EXPORT S32 WINAPI AIL_3D_sample_playback_rate(H3DSAMPLE S);
RE3MSS_EXPORT S32  WINAPI AIL_3D_object_user_data(H3DPOBJECT obj, U32 index);
RE3MSS_EXPORT void WINAPI AIL_set_3D_object_user_data(H3DPOBJECT obj, U32 index, S32 value);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_offset(H3DSAMPLE S, U32 offset);
RE3MSS_EXPORT S32 WINAPI AIL_3D_sample_volume(H3DSAMPLE S);
RE3MSS_EXPORT U32 WINAPI AIL_3D_sample_length(H3DSAMPLE S);
RE3MSS_EXPORT U32  WINAPI AIL_3D_sample_offset(H3DSAMPLE S);
RE3MSS_EXPORT U32  WINAPI AIL_3D_sample_loop_count(H3DSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_set_3D_sample_volume(H3DSAMPLE S, S32 volume);
RE3MSS_EXPORT VOID WINAPI AIL_resume_3D_sample(H3DSAMPLE S);
RE3MSS_EXPORT void WINAPI AIL_stop_3D_sample(H3DSAMPLE S);
RE3MSS_EXPORT S32 WINAPI AIL_set_3D_sample_file(H3DSAMPLE S, void const * file_image);
RE3MSS_EXPORT void WINAPI AIL_set_3D_velocity_vector(H3DPOBJECT obj, F32 dX_per_ms, F32 dY_per_ms, F32 dZ_per_ms);
RE3MSS_EXPORT void WINAPI AIL_set_3D_orientation(H3DPOBJECT obj, F32 X_face, F32 Y_face, F32 Z_face, F32 X_up, F32 Y_up, F32 Z_up);
RE3MSS_EXPORT S32 WINAPI AIL_WAV_info(void const * data, AILSOUNDINFO * info);
RE3MSS_EXPORT HPROVIDER WINAPI AIL_set_sample_processor(HSAMPLE S, SAMPLESTAGE pipeline_stage, HPROVIDER provider);
RE3MSS_EXPORT void WINAPI AIL_set_filter_sample_preference(HSAMPLE S, C8 const * name, void const * val);
RE3MSS_EXPORT S32 WINAPI AIL_set_named_sample_file(HSAMPLE S, C8 const * file_type_suffix, void const * file_image, S32 file_size, S32 block);
RE3MSS_EXPORT S32 WINAPI AIL_waveOutOpen(HDIGDRIVER * drvr, LPHWAVEOUT * lphWaveOut, S32 wDeviceID, LPWAVEFORMAT lpFormat);
RE3MSS_EXPORT void WINAPI AIL_waveOutClose(HDIGDRIVER drvr);
RE3MSS_EXPORT H3DPOBJECT WINAPI AIL_3D_open_listener(HPROVIDER lib);
RE3MSS_EXPORT S32 WINAPI AIL_enumerate_filters(HPROENUM  * next, HPROVIDER * dest, C8  * * name);
RE3MSS_EXPORT void WINAPI AIL_stop_timer(HTIMER timer);
RE3MSS_EXPORT void WINAPI AIL_release_timer_handle(HTIMER timer);
RE3MSS_EXPORT S32 WINAPI AIL_stream_playback_rate(HSTREAM stream);
RE3MSS_EXPORT void WINAPI AIL_set_stream_playback_rate(HSTREAM stream, S32 rate);
RE3MSS_EXPORT HSTREAM AIL_open_stream_by_sample(HDIGDRIVER driver, HSAMPLE sample, const char* filename, S32 mem); // This is a guess based on the function signature
// @third party code - END C&C: Renegade

#ifdef __cplusplus
}
#endif
