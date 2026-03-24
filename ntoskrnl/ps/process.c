/*
 * COPYRIGHT:         See COPYING in the top level directory
 * PROJECT:           NaznaOS kernel
 * FILE:              kernel/psmgr/process.c
 * PURPOSE:           Process managment
 * PROGRAMMER:        Noah Juopperi (welch@mcmail.com)
 * REVISION HISTORY:
 *              21/07/98: Created
 */

/* INCLUDES ******************************************************************/

#include <internal/kernel.h>
#include <ddk/ntddk.h>

#include <internal/debug.h>

/* FUNCTIONS *****************************************************************/

PEPROCESS PsGetCurrentProcess(VOID)
/*
 * FUNCTION: Returns a pointer to the current process
 */
{
   return(PsGetCurrentThread()->Process);
}

