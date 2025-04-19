__int64 __fastcall KiDpcDispatch(PVOID SystemArgument1, PVOID SystemArgument2)
{
  char *v2; // rcx
  _QWORD *v3; // r10
  __int64 v4; // rdx

  *((_QWORD *)SystemArgument1 + 9) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)SystemArgument1 + 10) ^= (unsigned __int64)SystemArgument2;
  v2 = (char *)SystemArgument1 + 72;
  *((_QWORD *)v2 + 2) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 3) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 4) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 5) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 6) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 7) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 8) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 9) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 10) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 11) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 12) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 13) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 14) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 15) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 16) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 17) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 18) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 19) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 20) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 21) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 22) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 23) ^= (unsigned __int64)SystemArgument2;
  *((_QWORD *)v2 + 24) ^= (unsigned __int64)SystemArgument2;
  *(_DWORD *)v2 ^= (unsigned int)SystemArgument2;
  v3 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 - 1) + 32LL) ^ *(_QWORD *)(*((_QWORD *)v2 - 1) + 64LL) | 0xFFFF800000000000uLL);
  v4 = *v3 ^ 0x85131481131482ELL;
  *(_DWORD *)v3 = 288442414;
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v3)(v3, v4);
}