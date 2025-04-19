void __fastcall ExpTimeZoneDpcRoutine(KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
void __fastcall ExpTimeRefreshDpcRoutine(
        _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
       
void __fastcall ExpCenturyDpcRoutine(KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
void __fastcall CmpEnableLazyFlushDpcRoutine(
    struct _KDPC *Dpc,
    PVOID DeferredContext,
    PVOID SystemArgument1,
    PVOID SystemArgument2)

void __fastcall CmpLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)

void __fastcall ExpTimerDpcRoutine(
    struct _KDPC *Dpc,
    PVOID DeferredContext,
    PVOID SystemArgument1,
    PVOID SystemArgument2)

    void __fastcall IopIrpStackProfilerDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)

void __fastcall IopTimerDispatch(
            struct _KDPC *Dpc,
            PVOID DeferredContext,
            PVOID SystemArgument1,
            PVOID SystemArgument2)

LONG __fastcall KiBalanceSetManagerDeferredRoutine(
                KDPC *Dpc,
                PVOID DeferredContext,
                PVOID SystemArgument1,
                PVOID SystemArgument2)

__int64 __fastcall KiDpcDispatch(PVOID SystemArgument1, PVOID SystemArgument2)
BOOLEAN __fastcall PopThermalZoneDpc(KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)

