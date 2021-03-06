/*
    SDL - Simple DirectMedia Layer
    Copyright (C) 1997-2006 Sam Lantinga

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

    Sam Lantinga
    slouken@libsdl.org
*/

#ifndef SDL_OS4TIMER_C_H
#define SDL_OS4TIMER_C_H

#include <exec/types.h>

struct MsgPort;
struct timerequest;

typedef struct
{
	struct MsgPort     *timerport;
	struct TimeRequest *timerrequest;
} os4timer_Instance;

BOOL os4timer_Init(os4timer_Instance *timer);
void os4timer_Destroy(os4timer_Instance *timer);
BOOL os4timer_SetAlarm(os4timer_Instance *timer, Uint32 alarmTicks, ULONG *alarmSignal);
VOID os4timer_ClearAlarm(os4timer_Instance *timer);

BOOL os4timer_WaitUntil(Uint32 ticks);
Uint32 os4timer_GetTicks(void);

#endif
