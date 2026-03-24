/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            kernel/mm/cont.c
 * PURPOSE:         Manages non-cached memory
 * PROGRAMMER:      Noah Juopperi (welch@mcmail.com)
 * UPDATE HISTORY:
 *                  Created 22/05/98
 */

/* INCLUDES *****************************************************************/

#include <internal/kernel.h>
#include <internal/linkage.h>
#include <ddk/ntddk.h>

#include <internal/debug.h>

/* FUNCTIONS *****************************************************************/

PVOID MmAllocateNonCachedMemory(ULONG NumberOfBytes)
{
   UNIMPLEMENTED;
}

VOID MmFreeNonCachedMemory(PVOID BaseAddress, ULONG NumberOfBytes)
{
   UNIMPLEMENTED;
}
