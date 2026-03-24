/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            ntoskrnl/io/errlog.c
 * PURPOSE:         Error logging
 * PROGRAMMER:      Noah Juopperi (welch@mcmail.com)
 * UPDATE HISTORY:
 *                  Created 22/05/98
 */

/* INCLUDES *****************************************************************/

#include <ddk/ntddk.h>

#include <internal/debug.h>

/* FUNCTIONS *****************************************************************/

PVOID IoAllocateErrorLogEntry(PVOID IoObject, UCHAR EntrySize)
{
   UNIMPLEMENTED;
}

VOID IoWriteErrorLogEntry(PVOID ElEntry)
{
   UNIMPLEMENTED;
} 

