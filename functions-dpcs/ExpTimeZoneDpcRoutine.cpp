void __fastcall ExpTimeZoneDpcRoutine(KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v8; // rdi
  _DWORD v9[90]; // [rsp+0h] [rbp-178h] BYREF
  _DWORD *v10; // [rsp+168h] [rbp-10h]

  v10 = v9;
  memset(&v9[44], 0, 0x61uLL);
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v9[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
    *(_QWORD *)((char *)&v9[66] + 1) = SystemArgument1;
    *(_QWORD *)((char *)&v9[62] + 1) = __ROL8__(DeferredContext, (char)SystemArgument1);
    *(_QWORD *)((char *)&v9[48] + 1) = __ROR8__(Dpc, (char)SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
    KiCustomAccessRoutine8(DeferredContext);
  }
  v8 = *(_QWORD *)(PsGetServerSiloGlobals(DeferredContext) + 1064);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v8 + 928)) == 1 )
  {
    if ( !(unsigned __int8)PsIsHostSilo() )
      ObfReferenceObjectWithTag(DeferredContext, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v8 + 576), DelayedWorkQueue);
  }
}