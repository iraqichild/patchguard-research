void __fastcall IopTimerDispatch(
    struct _KDPC *Dpc,
    PVOID DeferredContext,
    PVOID SystemArgument1,
    PVOID SystemArgument2)
{
int v8; // r14d
unsigned __int64 v9; // rsi
int v10; // r15d
struct _LIST_ENTRY *i; // rbx
struct _LIST_ENTRY *v12; // r12
unsigned __int8 CurrentIrql; // al
struct _KPRCB *CurrentPrcb; // r10
_DWORD *SchedulerAssist; // r9
int v16; // eax
bool v17; // zf
_DWORD v18[76]; // [rsp+0h] [rbp-1F8h] BYREF
PVOID v19; // [rsp+130h] [rbp-C8h]
_WORD v20[45]; // [rsp+140h] [rbp-B8h] BYREF
_DWORD *v21; // [rsp+1A0h] [rbp-58h]
_OWORD v22[2]; // [rsp+1A8h] [rbp-50h] BYREF

v21 = v18;
v19 = DeferredContext;
v8 = DWORD2(PerfGlobalGroupMask) & 0x800000;
v18[39] = DWORD2(PerfGlobalGroupMask) & 0x800000;
memset(v20, 0, sizeof(v20));
if ( (unsigned __int64)(((__int64)DeferredContext >> 47) + 1) > 1 )
{
v18[16] = 0;
Dpc->Type = 0;
Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
*(_QWORD *)&v20[41] = SystemArgument1;
*(_QWORD *)&v20[5] = __ROL8__(DeferredContext, (char)SystemArgument1);
*(_QWORD *)&v20[33] = __ROR8__(Dpc, (char)SystemArgument1);
Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
KiCustomAccessRoutine1(DeferredContext);
}
if ( *(_DWORD *)DeferredContext )
{
v9 = KeAcquireSpinLockRaiseToDpc(&IopTimerLock);
v10 = *(_DWORD *)DeferredContext;
for ( i = IopTimerQueueHead.Flink; i != &IopTimerQueueHead && v10; i = i->Flink )
{
  if ( WORD1(i[-1].Blink) )
  {
    v12 = i + 1;
    if ( v8 )
    {
      memset(v22, 0, sizeof(v22));
      EtwGetKernelTraceTimestamp(v22, 1082130432LL);
      ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v12->Flink)(i[2].Flink, i[1].Blink);
      EtwTraceTimedEvent(3910, 1082130432, (_DWORD)i + 16, 8, 4196866, (__int64)v22);
    }
    else
    {
      ((void (__fastcall *)(struct _LIST_ENTRY *, struct _LIST_ENTRY *))v12->Flink)(i[2].Flink, i[1].Blink);
    }
    --v10;
  }
}
KxReleaseSpinLock(&IopTimerLock);
if ( KiIrqlFlags )
{
  if ( (KiIrqlFlags & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v17 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
}
__writecr8(v9);
}
}