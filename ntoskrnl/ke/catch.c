/*
 * COPYRIGHT:            See COPYING in the top level directory
 * PROJECT:              NaznaOS kernel
 * FILE:                 ntoskrnl/ke/catch.c
 * PURPOSE:              Exception handling
 * PROGRAMMER:           Noah Juopperi (welch@mcmail.com)
 */

/* INCLUDES *****************************************************************/

#include <windows.h>
#include <ddk/ntddk.h>

/* FUNCTIONS ****************************************************************/

VOID ExRaiseStatus(NTSTATUS Status)
{
   DbgPrint("ExRaiseStatus(%d)\n",Status);
   for(;;);
}
