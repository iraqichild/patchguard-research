BOOLEAN __fastcall PopThermalZoneDpc(KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  _DWORD v9[110]; // [rsp+0h] [rbp-1D8h] BYREF
  _DWORD *v10; // [rsp+1B8h] [rbp-20h]

  v10 = v9;
  memset(&v9[84], 0, 0x5CuLL);
  if ( (__int64)DeferredContext >> 47 != -1 && (__int64)DeferredContext >> 47 != 0 )
  {
    v9[16] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)((unsigned __int64)SystemArgument2 >> 8);
    *(_QWORD *)&v9[105] = SystemArgument1;
    *(_QWORD *)&v9[91] = __ROL8__(DeferredContext, (char)SystemArgument1);
    *(_QWORD *)&v9[97] = __ROR8__(Dpc, (char)SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ (unsigned __int64)SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ (unsigned __int64)SystemArgument1);
    KiCustomAccessRoutine3(DeferredContext);
  }
  return IoCancelIrp(*((PIRP *)DeferredContext + 7));
}