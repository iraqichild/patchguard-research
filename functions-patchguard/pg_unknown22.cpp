/* XREFS
Down	o	pg_main+511C	lea     rcx, pg_unknown22
*/

__int64 __fastcall pg_unknown22(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r10
  char v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int16 v11; // ax
  unsigned __int64 v12; // rdi

  KeExitRetpoline();
  v7 = *(_QWORD *)(a1 + 32);
  v8 = 1;
  v9 = (unsigned __int64)&qword_140C12F48 ^ ((v7 ^ ((v7 ^ 0xE0E20100uLL) >> 4)) >> 4);
  v10 = v9;
  if ( (v9 & 0xF) != 0 )
    v8 = v9 & 0xF;
  for ( ; v8; --v8 )
  {
    v7 = *(_QWORD *)((v9 & 0xF) + v7);
    v9 ^= (v7 ^ ((v7 ^ 0x1DFE00uLL) >> 4)) >> 4;
  }
  v11 = v10;
  v12 = v7 ^ v10;
  if ( (v11 & 0x1000) == 0 )
    v12 = v7;
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v12 + 24))(
           v12,
           *(_QWORD *)(v12 + 32),
           a3,
           a4);
}