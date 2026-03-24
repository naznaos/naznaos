/*
 * COPYRIGHT:             See COPYING in the top level directory
 * PROJECT:               NaznaOS kernel
 * FILE:                  ntoskrnl/ke/dispatch.c
 * PURPOSE:               Handles a dispatch interrupt
 * PROGRAMMER:            Noah Juopperi (welch@mcmail.com)
 */

/* INCLUDES *****************************************************************/

#include <windows.h>
#include <ddk/ntddk.h>
#include <internal/ke.h>

/* FUNCTIONS ****************************************************************/

VOID KiDispatchInterrupt(ULONG irq)
/*
 * FUNCTION: Called after an irq when the interrupted processor was at a lower
 * level than DISPATCH_LEVEL
 */
{
   KeExpireTimers();
   KeDrainDpcQueue();
   PsDispatchThread();
}
