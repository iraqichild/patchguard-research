void __fastcall ExpCenturyDpcRoutine(KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _DWORD v12[86]; // [rsp+0h] [rbp-168h] BYREF
  _DWORD *v13; // [rsp+158h] [rbp-10h]

  v13 = v12;
  memset(&v12[40], 0, 0x62uLL);
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v12[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v12[62] + 2) = SystemArgument1;
    *(_QWORD *)((char *)&v12[60] + 2) = __ROL8__(DeferredContext, (char)SystemArgument1);
    *(_QWORD *)((char *)&v12[42] + 2) = __ROR8__(Dpc, (char)SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
    KiCustomAccessRoutine9((__int64)DeferredContext, v8, v9, v10);
  }
  v11 = *(_QWORD *)(PsGetServerSiloGlobals(DeferredContext) + 1064);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v11 + 928)) == 1 )
  {
    if ( !(unsigned __int8)PsIsHostSilo() )
      ObfReferenceObjectWithTag(DeferredContext, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v11 + 736), DelayedWorkQueue);
  }
}