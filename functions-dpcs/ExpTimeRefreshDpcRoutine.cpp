void __fastcall ExpTimeRefreshDpcRoutine(
    _KDPC *Dpc,
    PVOID DeferredContext,
    PVOID SystemArgument1,
    PVOID SystemArgument2)
{
_QWORD v8[58]; // [rsp+0h] [rbp-1D8h] BYREF

v8[55] = v8;
memset(&v8[42], 0, 0x60uLL);
if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
{
LODWORD(v8[7]) = 0;
Dpc->Type = 0;
Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
v8[53] = SystemArgument1;
v8[50] = __ROL8__(DeferredContext, (char)SystemArgument1);
v8[45] = __ROR8__(Dpc, (char)SystemArgument1);
Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
KiCustomAccessRoutine7((unsigned int *)DeferredContext);
}
if ( _InterlockedIncrement((volatile signed __int32 *)DeferredContext) == 1 )
ExQueueWorkItem(&ExpTimeRefreshWorkItem, DelayedWorkQueue);
}