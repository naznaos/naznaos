/*
 * COPYRIGHT:            See COPYING in the top level directory
 * PROJECT:              NaznaOS kernel
 * FILE:                 mkernel/kernel/catch.c
 * PURPOSE:              Exception handling
 * PROGRAMMER:           Noah Juopperi (welch@mcmail.com)
 */

/* INCLUDES *****************************************************************/

#include <windows.h>
#include <ddk/ntddk.h>
#include <internal/kernel.h>

/* FUNCTIONS ****************************************************************/

VOID ExRaiseStatus(NTSTATUS Status)
{
   printk("ExRaiseStatus(%d)\n",Status);
   for(;;);
}
