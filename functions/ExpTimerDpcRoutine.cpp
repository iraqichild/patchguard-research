void __fastcall ExpTimerDpcRoutine(
    struct _KDPC *Dpc,
    PVOID DeferredContext,
    PVOID SystemArgument1,
    PVOID SystemArgument2)
{
int v8; // esi
__int64 v9; // [rsp+0h] [rbp-1B8h] BYREF
int v10; // [rsp+34h] [rbp-184h]
_BYTE v11[89]; // [rsp+120h] [rbp-98h] BYREF
__int64 *v12; // [rsp+190h] [rbp-28h]

v12 = &v9;
memset(v11, 0, sizeof(v11));
if ( (unsigned __int64)(((__int64)DeferredContext >> 47) + 1) > 1 )
{
v10 = 0;
Dpc->Type = 0;
Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
*(_QWORD *)&v11[81] = SystemArgument1;
*(_QWORD *)&v11[1] = __ROL8__(DeferredContext, (char)SystemArgument1);
*(_QWORD *)&v11[73] = __ROR8__(Dpc, (char)SystemArgument1);
Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
KiCustomAccessRoutine0(DeferredContext);
}
v8 = 0;
KxAcquireSpinLock((PKSPIN_LOCK)DeferredContext + 8);
if ( (*((_BYTE *)DeferredContext + 304) & 1) != 0 )
{
v8 = (unsigned __int8)KeInsertQueueApc(
                        (char *)DeferredContext + 72,
                        MEMORY[0xFFFFF78000000014],
                        HIDWORD(MEMORY[0xFFFFF78000000014]),
                        0LL) == 0;
if ( *((_DWORD *)DeferredContext + 60) )
{
  if ( --v8 < 0 )
  {
    ObfReferenceObjectWithTag(DeferredContext, 0x746C6644u);
    v8 = 0;
  }
  if ( (*((_BYTE *)DeferredContext + 304) & 2) == 0
    && KeSetCoalescableTimer(
         (PKTIMER)DeferredContext,
         (LARGE_INTEGER)(-10000LL * *((int *)DeferredContext + 60)),
         0,
         *((_DWORD *)DeferredContext + 80),
         Dpc) )
  {
    ++v8;
  }
}
}
KxReleaseSpinLock((PKSPIN_LOCK)DeferredContext + 8);
if ( v8 )
ObfDereferenceObjectWithTag(DeferredContext, 0x746C6644u);
}