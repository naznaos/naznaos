/*
 * COPYRIGHT:               See COPYING in the top level directory
 * PROJECT:                 NaznaOS kernel
 * FILE:                    kernel/psmgr/psmgr.c
 * PURPOSE:                 Process managment
 * PROGRAMMER:              Noah Juopperi (welch@mcmail.com)
 */

/* INCLUDES **************************************************************/

#include <windows.h>
#include <ddk/ntddk.h>
#include <internal/psmgr.h>

/* FUNCTIONS ***************************************************************/

VOID PsInit(VOID)
{
   ObjInitializeHandleTable(NULL);
   PsInitThreadManagment();
   PsInitIdleThread();
}
