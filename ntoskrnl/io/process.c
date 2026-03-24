/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            kernel/iomgr/process.c
 * PURPOSE:         Process functions that, bizarrely, are in the iomgr
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

PEPROCESS IoGetCurrentProcess()
{
   return(PsGetCurrentProcess());
}

PVOID IoGetInitialStack()
{
   UNIMPLEMENTED;
}
