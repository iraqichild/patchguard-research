REBASE/ntoskrnl base 1400000000000

REBASE + 0xCFCA08 = KiWaitAlways (__int64)
REBASE + 0xCFC808 = KiWaitNever (__int64)

KTIMER* EncryptedTimer;

_KDPC* DecryptedDpc = (_KDPC *)(KiWaitNever ^ __ROR8__(
    (unsigned __int64)EncryptedTimer ^ _byteswap_uint64((unsigned __int64)EncryptedTimer->Dpc ^ KiWaitAlways),
    KiWaitNever));