/*
 * COPYRIGHT:       See COPYING in the top level directory
 * PROJECT:         NaznaOS kernel
 * FILE:            ntoskrnl/ex/callback.c
 * PURPOSE:         User callbacks
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

VOID ExCallUserCallBack(PVOID fn)
/*
 * FUNCTION: Transfer control to a user callback
 */
{
}

VOID NtReturnFromCallBack(VOID)
/*
 * FUNCTION: Returns from a user callback
 */
{
}