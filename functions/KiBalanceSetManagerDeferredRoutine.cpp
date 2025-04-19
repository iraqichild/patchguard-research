LONG __fastcall KiBalanceSetManagerDeferredRoutine(
    KDPC *Dpc,
    PVOID DeferredContext,
    PVOID SystemArgument1,
    PVOID SystemArgument2)
{
_DWORD v9[86]; // [rsp+0h] [rbp-168h] BYREF
_DWORD *v10; // [rsp+158h] [rbp-10h]

v10 = v9;
memset(&v9[44], 0, 0x5FuLL);
if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
{
v9[12] = 0;
Dpc->Type = 0;
Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
*(_QWORD *)((char *)&v9[65] + 3) = SystemArgument1;
*(_QWORD *)((char *)&v9[57] + 3) = __ROL8__(DeferredContext, (char)SystemArgument1);
*(_QWORD *)((char *)&v9[51] + 3) = __ROR8__(Dpc, (char)SystemArgument1);
Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
KiCustomAccessRoutine6(DeferredContext);
}
return KeSetEvent((PRKEVENT)DeferredContext, 10, 0);
}