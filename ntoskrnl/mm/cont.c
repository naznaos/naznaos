/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            kernel/mm/cont.c
 * PURPOSE:         Manages continuous memory
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

PVOID MmAllocateContiguousMemory(ULONG NumberOfBytes,
				 PHYSICAL_ADDRESS HighestAcceptableAddress)
{
   UNIMPLEMENTED;
}

VOID MmFreeContiguousMemory(PVOID BaseAddress)
{
   UNIMPLEMENTED;
}
