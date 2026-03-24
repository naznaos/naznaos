/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            ntoskrnl/nt/misc.c
 * PURPOSE:         Misc undocumented system calls
 * PROGRAMMER:      Noah Juopperi (welch@mcmail.com)
 * UPDATE HISTORY:
 *                  Created 22/05/98
 */

/* INCLUDES *****************************************************************/

#include <ddk/ntddk.h>

#include <internal/debug.h>

/* FUNCTIONS *****************************************************************/

NTSTATUS STDCALL NtWriteRequestData(VOID)
{
   UNIMPLEMENTED;
}

NTSTATUS STDCALL NtVdmControl(VOID)
{
   UNIMPLEMENTED;
}

NTSTATUS STDCALL NtReadRequestData(VOID)
{
   UNIMPLEMENTED;
}
