void __fastcall CmpLazyFlushDpcRoutine(
    struct _KDPC *Dpc,
    PVOID DeferredContext,
    PVOID SystemArgument1,
    PVOID SystemArgument2)
{
_WORD v8[47]; // [rsp+130h] [rbp-68h] BYREF

memset(v8, 0, sizeof(v8));
if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
{
Dpc->Type = 0;
Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
*(_QWORD *)&v8[43] = SystemArgument1;
*(_QWORD *)&v8[23] = __ROL8__(DeferredContext, (char)SystemArgument1);
*(_QWORD *)&v8[19] = __ROR8__(Dpc, (char)SystemArgument1);
Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
KiCustomAccessRoutine5(DeferredContext);
}
KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 19);
if ( CmpHoldLazyFlush )
*((_QWORD *)DeferredContext + 21) = 0LL;
else
KeSetEvent((PRKEVENT)((char *)DeferredContext + 128), 0, 0);
KxReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 19);
}