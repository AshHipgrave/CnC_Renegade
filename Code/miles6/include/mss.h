#pragma once

// Based on the re3mss project: https://github.com/withmorten/re3mss

#include <stdint.h>
#include <windows.h>
#include <mmsystem.h>

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

#define NO                      0
#define DIG_USE_WAVEOUT         15
#define AIL_NO_ERROR            0
#define AIL_LOCK_PROTECTION     18
#define WAVE_FORMAT_PCM         1
#define WAVE_FORMAT_IMA_ADPCM   0x0011

#define AILEXPORT WINAPI
#define AILCALLBACK AILEXPORT

typedef S32 HTIMER;
typedef U32 HATTRIB;
typedef S32 HASISTREAM;
typedef S32 ASIRESULT;

typedef struct _DIG_DRIVER
{
    char pad[168];
    int emulated_ds;
} DIG_DRIVER;

typedef struct _DIG_DRIVER* HDIGDRIVER;

typedef enum
{
    DP_ASI_DECODER = 0,
    DP_FILTER,
    DP_MERGE,
    N_SAMPLE_STAGES,
    SAMPLE_ALL_STAGES
} SAMPLESTAGE;

typedef U32 HPROENUM;
#define HPROENUM_FIRST 0

typedef S32 M3DRESULT;

#define M3D_NOERR 0

enum 
{
	ENVIRONMENT_GENERIC = 0,
	ENVIRONMENT_CAVE = 8 
};

#define AIL_3D_2_SPEAKER 0
#define AIL_3D_HEADPHONE 1
#define AIL_3D_SURROUND  2
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
typedef void (WINAPI* AIL_file_close_callback)(U32 FileHandle);

typedef S32(WINAPI* AIL_file_seek_callback)(U32 FileHandle, S32 Offset, U32 Type);
typedef U32(WINAPI* AIL_file_read_callback)(U32 FileHandle, void* Buffer, U32 Bytes);

#define AIL_FILE_SEEK_BEGIN 0
#define AIL_FILE_SEEK_CURRENT 1
#define AIL_FILE_SEEK_END 2

#ifdef MSS_STUB_LIB
    #define MSS_EXPORT __declspec(dllexport)
#else
    #define MSS_EXPORT __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

MSS_EXPORT S32 WINAPI AIL_enumerate_3D_providers(HPROENUM *next, HPROVIDER *dest, C8 **name);
MSS_EXPORT void WINAPI AIL_release_3D_sample_handle(H3DSAMPLE S);
MSS_EXPORT void WINAPI AIL_close_3D_provider(HPROVIDER lib);
MSS_EXPORT void WINAPI AIL_set_3D_provider_preference(HPROVIDER lib, C8 const *name, void const *val);
MSS_EXPORT M3DRESULT WINAPI AIL_open_3D_provider(HPROVIDER lib);
MSS_EXPORT C8 *WINAPI AIL_last_error(void);
MSS_EXPORT S32 WINAPI AIL_3D_room_type(HPROVIDER lib);
MSS_EXPORT void WINAPI AIL_set_3D_room_type(HPROVIDER lib, S32 room_type);
MSS_EXPORT void WINAPI AIL_3D_provider_attribute(HPROVIDER lib, C8 const *name, void *val);
MSS_EXPORT H3DSAMPLE WINAPI AIL_allocate_3D_sample_handle(HPROVIDER lib);
MSS_EXPORT void WINAPI AIL_set_3D_sample_effects_level(H3DSAMPLE S, F32 effects_level);
MSS_EXPORT void WINAPI AIL_set_3D_speaker_type(HPROVIDER lib, S32 speaker_type);
MSS_EXPORT HSTREAM WINAPI AIL_open_stream(HDIGDRIVER dig, C8 const *filename, S32 stream_mem);
MSS_EXPORT void WINAPI AIL_stream_ms_position(HSTREAM S, S32 *total_milliseconds, S32 *current_milliseconds);
MSS_EXPORT void WINAPI AIL_close_stream(HSTREAM stream);
MSS_EXPORT S32 WINAPI AIL_digital_handle_release(HDIGDRIVER drvr);
MSS_EXPORT S32 WINAPI AIL_digital_handle_reacquire(HDIGDRIVER drvr);
MSS_EXPORT C8 *WINAPI AIL_set_redist_directory(C8 const *dir);
MSS_EXPORT S32 WINAPI AIL_startup(void);
MSS_EXPORT S32 WINAPI AIL_set_preference(U32 number, S32 value);
MSS_EXPORT HDIGDRIVER WINAPI AIL_open_digital_driver(U32 frequency, S32 bits, S32 channel, U32 flags);
MSS_EXPORT void *WINAPI AIL_mem_alloc_lock(U32 size);
MSS_EXPORT HSAMPLE WINAPI AIL_allocate_sample_handle(HDIGDRIVER dig);
MSS_EXPORT void WINAPI AIL_init_sample(HSAMPLE S);
MSS_EXPORT void WINAPI AIL_set_sample_type(HSAMPLE S, S32 format, U32 flags);
MSS_EXPORT void WINAPI AIL_pause_stream(HSTREAM stream, S32 onoff);
MSS_EXPORT void WINAPI AIL_release_sample_handle(HSAMPLE S);
MSS_EXPORT void WINAPI AIL_mem_free_lock(void *ptr);
MSS_EXPORT void WINAPI AIL_close_digital_driver(HDIGDRIVER dig);
MSS_EXPORT void WINAPI AIL_shutdown(void);
MSS_EXPORT void WINAPI AIL_set_3D_sample_volume(H3DSAMPLE S, S32 volume);
MSS_EXPORT void WINAPI AIL_set_sample_volume(HSAMPLE S, S32 volume);
MSS_EXPORT void WINAPI AIL_set_sample_address(HSAMPLE S, void const *start, U32 len);
MSS_EXPORT S32 WINAPI AIL_set_3D_sample_info(H3DSAMPLE S, AILSOUNDINFO const *info);
MSS_EXPORT void WINAPI AIL_set_3D_position(H3DPOBJECT obj, F32 X, F32 Y, F32 Z);
MSS_EXPORT void WINAPI AIL_set_3D_sample_distances(H3DSAMPLE S, F32 max_dist, F32 min_dist);
MSS_EXPORT void WINAPI AIL_set_sample_pan(HSAMPLE S, S32 pan);
MSS_EXPORT void WINAPI AIL_set_sample_playback_rate(HSAMPLE S, S32 playback_rate);
MSS_EXPORT void WINAPI AIL_set_3D_sample_playback_rate(H3DSAMPLE S, S32 playback_rate);
MSS_EXPORT void WINAPI AIL_set_sample_loop_block(HSAMPLE S, S32 loop_start_offset, S32 loop_end_offset);
MSS_EXPORT void WINAPI AIL_set_3D_sample_loop_block(H3DSAMPLE S, S32 loop_start_offset, S32 loop_end_offset);
MSS_EXPORT void WINAPI AIL_set_sample_loop_count(HSAMPLE S, S32 loop_count);
MSS_EXPORT void WINAPI AIL_set_3D_sample_loop_count(H3DSAMPLE S, S32 loops);
MSS_EXPORT U32 WINAPI AIL_sample_status(HSAMPLE S);
MSS_EXPORT U32 WINAPI AIL_3D_sample_status(H3DSAMPLE S);
MSS_EXPORT void WINAPI AIL_start_sample(HSAMPLE S);
MSS_EXPORT void WINAPI AIL_start_3D_sample(H3DSAMPLE S);
MSS_EXPORT void WINAPI AIL_end_sample(HSAMPLE S);
MSS_EXPORT void WINAPI AIL_end_3D_sample(H3DSAMPLE S);
MSS_EXPORT void WINAPI AIL_set_stream_loop_count(HSTREAM stream, S32 count);
MSS_EXPORT S32 WINAPI AIL_service_stream(HSTREAM stream, S32 fillup);
MSS_EXPORT void WINAPI AIL_start_stream(HSTREAM stream);
MSS_EXPORT void WINAPI AIL_set_stream_ms_position(HSTREAM S, S32 milliseconds);
MSS_EXPORT void WINAPI AIL_set_stream_volume(HSTREAM stream, S32 volume);
MSS_EXPORT void WINAPI AIL_set_stream_pan(HSTREAM stream, S32 pan);
MSS_EXPORT S32 WINAPI AIL_stream_status(HSTREAM stream);
MSS_EXPORT void WINAPI AIL_set_file_callbacks(AIL_file_open_callback opencb, AIL_file_close_callback closecb, AIL_file_seek_callback seekcb, AIL_file_read_callback readcb);
MSS_EXPORT void WINAPI AIL_lock(void);
MSS_EXPORT void WINAPI AIL_unlock(void);
MSS_EXPORT S32 WINAPI AIL_sample_user_data(HSAMPLE S, U32 index);
MSS_EXPORT S32 WINAPI AIL_sample_playback_rate(HSAMPLE S);
MSS_EXPORT S32 WINAPI AIL_stream_loop_count(HSTREAM stream);
MSS_EXPORT S32 WINAPI AIL_stream_volume(HSTREAM stream);
MSS_EXPORT S32 WINAPI AIL_stream_pan(HSTREAM stream);
MSS_EXPORT void WINAPI AIL_sample_ms_position(HSAMPLE S, S32 * total_milliseconds, S32 * current_milliseconds);
MSS_EXPORT void WINAPI AIL_set_sample_user_data(HSAMPLE S, U32 index, S32 value);
MSS_EXPORT void WINAPI AIL_set_stream_loop_block(HSTREAM S, S32 loop_start_offset, S32 loop_end_offset);
MSS_EXPORT S32  WINAPI AIL_sample_loop_count(HSAMPLE S);
MSS_EXPORT S32 WINAPI AIL_sample_volume(HSAMPLE S);
MSS_EXPORT S32  WINAPI AIL_sample_pan(HSAMPLE S);
MSS_EXPORT void WINAPI AIL_stop_sample(HSAMPLE S);
MSS_EXPORT void WINAPI AIL_resume_sample(HSAMPLE S);
MSS_EXPORT void WINAPI AIL_set_sample_ms_position(HSAMPLE S, S32 milliseconds);
MSS_EXPORT S32 WINAPI AIL_3D_sample_playback_rate(H3DSAMPLE S);
MSS_EXPORT S32  WINAPI AIL_3D_user_data(H3DPOBJECT obj, U32 index);
MSS_EXPORT void WINAPI AIL_set_3D_user_data(H3DPOBJECT obj, U32 index, S32 value);
MSS_EXPORT void WINAPI AIL_set_3D_sample_offset(H3DSAMPLE S, U32 offset);
MSS_EXPORT S32 WINAPI AIL_3D_sample_volume(H3DSAMPLE S);
MSS_EXPORT U32 WINAPI AIL_3D_sample_length(H3DSAMPLE S);
MSS_EXPORT U32  WINAPI AIL_3D_sample_offset(H3DSAMPLE S);
MSS_EXPORT U32  WINAPI AIL_3D_sample_loop_count(H3DSAMPLE S);
MSS_EXPORT void WINAPI AIL_set_3D_sample_volume(H3DSAMPLE S, S32 volume);
MSS_EXPORT VOID WINAPI AIL_resume_3D_sample(H3DSAMPLE S);
MSS_EXPORT void WINAPI AIL_stop_3D_sample(H3DSAMPLE S);
MSS_EXPORT S32 WINAPI AIL_set_3D_sample_file(H3DSAMPLE S, void const * file_image);
MSS_EXPORT void WINAPI AIL_set_3D_velocity_vector(H3DPOBJECT obj, F32 dX_per_ms, F32 dY_per_ms, F32 dZ_per_ms);
MSS_EXPORT void WINAPI AIL_set_3D_orientation(H3DPOBJECT obj, F32 X_face, F32 Y_face, F32 Z_face, F32 X_up, F32 Y_up, F32 Z_up);
MSS_EXPORT S32 WINAPI AIL_WAV_info(void const * data, AILSOUNDINFO * info);
MSS_EXPORT HPROVIDER WINAPI AIL_set_sample_processor(HSAMPLE S, SAMPLESTAGE pipeline_stage, HPROVIDER provider);
MSS_EXPORT void WINAPI AIL_set_filter_sample_preference(HSAMPLE S, C8 const * name, void const * val);
MSS_EXPORT S32 WINAPI AIL_set_named_sample_file(HSAMPLE S, C8 const * file_type_suffix, void const * file_image, S32 file_size, S32 block);
MSS_EXPORT S32 WINAPI AIL_waveOutOpen(HDIGDRIVER * drvr, LPHWAVEOUT * lphWaveOut, S32 wDeviceID, LPWAVEFORMAT lpFormat);
MSS_EXPORT void WINAPI AIL_waveOutClose(HDIGDRIVER drvr);
MSS_EXPORT H3DPOBJECT WINAPI AIL_open_3D_listener(HPROVIDER lib);
MSS_EXPORT S32 WINAPI AIL_enumerate_filters(HPROENUM  * next, HPROVIDER * dest, C8  * * name);
MSS_EXPORT void WINAPI AIL_stop_timer(HTIMER timer);
MSS_EXPORT void WINAPI AIL_release_timer_handle(HTIMER timer);
MSS_EXPORT S32 WINAPI AIL_stream_playback_rate(HSTREAM stream);
MSS_EXPORT void WINAPI AIL_set_stream_playback_rate(HSTREAM stream, S32 rate);
MSS_EXPORT HSTREAM WINAPI AIL_open_stream_by_sample(HDIGDRIVER driver, HSAMPLE sample, const char* filename, S32 stream_mem);

#define AIL_set_3D_object_user_data AIL_set_3D_user_data
#define AIL_3D_object_user_data AIL_3D_user_data
#define AIL_3D_open_listener AIL_open_3D_listener

#ifdef __cplusplus
}
#endif
