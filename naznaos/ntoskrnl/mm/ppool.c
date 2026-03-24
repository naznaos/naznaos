/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            ntoskrnl/mm/ppool.c
 * PURPOSE:         Implements the paged pool
 * PROGRAMMER:      Noah Juopperi (welch@mcmail.com)
 * UPDATE HISTORY:
 *                  Created 22/05/98
 */

/* INCLUDES *****************************************************************/

#include <ddk/ntddk.h>
#include <internal/pool.h>

#include <internal/debug.h>

/* FUNCTIONS *****************************************************************/

PVOID ExAllocatePagedPoolWithTag(ULONG type, ULONG size, ULONG Tag)
{
   UNIMPLEMENTED;
}
