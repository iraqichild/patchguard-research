NTSTATUS KeDecryptTimer(PKTIMER pKtimer, PKTIMER pKDecryptedTimer) {
    if (!pKtimer || !pKDecryptedTimer) {
        return STATUS_INVALID_PARAMETER;
    }

    PUCHAR kernelBase = (PUCHAR)KeGetKernelBase();
    if (!kernelBase) {
        return STATUS_UNSUCCESSFUL;
    }

    PVOID KiWaitNeverAddr = kernelBase + 0xCFC808;
    PVOID KiWaitAlwaysAddr = kernelBase + 0xCFCA08;

    __int64 KiWaitNever = 0;
    __int64 KiWaitAlways = 0;

    __try {
        KiWaitNever = *(PINT64)KiWaitNeverAddr;
        KiWaitAlways = *(PINT64)KiWaitAlwaysAddr;
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return STATUS_ACCESS_VIOLATION;
    }

    _KDPC* DecryptedDpc = (_KDPC*)(KiWaitAlways ^
        _byteswap_uint64(
            (unsigned __int64)pKtimer ^
            __ROL8__((__int64)pKtimer->Dpc ^ KiWaitNever, KiWaitNever)));

    __try {
        if (DecryptedDpc) {
            KTIMER DecryptedTimer = { 0 };
            DecryptedTimer.Dpc = DecryptedDpc;
            *pKDecryptedTimer = DecryptedTimer;
            return STATUS_SUCCESS;
        }
    }
    __except (EXCEPTION_EXECUTE_HANDLER) {
        return STATUS_ACCESS_VIOLATION;
    }

    return STATUS_UNSUCCESSFUL;
}