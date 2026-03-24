/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            ntoskrnl/ke/bug.c
 * PURPOSE:         Graceful system shutdown if a bug is detected
 * PROGRAMMER:      Noah Juopperi (welch@mcmail.com)
 * UPDATE HISTORY:
 *                  Created 22/05/98
 */

/* INCLUDES *****************************************************************/

#include <ddk/ntddk.h>

#include <internal/debug.h>


/* FUNCTIONS *****************************************************************/

NTSTATUS STDCALL NtQueryDefaultLocale(VOID)
{
   UNIMPLEMENTED;
}

NTSTATUS STDCALL NtSetDefaultLocale(VOID)
{
   UNIMPLEMENTED;
}
