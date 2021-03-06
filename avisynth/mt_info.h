#pragma once

#include <Windows.h>

#include "avisynth.h"


typedef struct _mt_info
{
    int n;
	PVideoFrame src;
	PVideoFrame dst;
	unsigned char *dstp_u;
	unsigned char *dstp_v;
	IScriptEnvironment* env;

	bool exit;

	HANDLE thread_handle;
	HANDLE work_event;
	HANDLE work_complete_event;
} mt_info;

mt_info* mt_info_create(void);

void mt_info_reset_pointers(volatile mt_info* info);

void mt_info_destroy(volatile mt_info* info);