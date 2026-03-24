/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            ntoskrnl/dbg/brkpoints.c
 * PURPOSE:         Handles breakpoints
 * PROGRAMMER:      Noah Juopperi (welch@mcmail.com)
 * UPDATE HISTORY:
 *                  Created 22/05/98
 */

/* INCLUDES *****************************************************************/

#include <ddk/ntddk.h>

#include <internal/debug.h>

/* FUNCTIONS *****************************************************************/

VOID DbgBreakPoint(VOID)
{
   __asm__("int $3\n\t");
}

