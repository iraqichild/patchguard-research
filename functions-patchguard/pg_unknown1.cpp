/* XREFS
Up	o	ExIsSafeWorkItem+2	lea     rdx, pg_unknown1
Down	o	pg_main+2F71	lea     rax, pg_unknown1
Down	o	pg_main+6C3A	lea     rax, pg_unknown1
*/

__int64 __fastcall pg_unknown1(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64); // rbx

  v1 = a1[2];
  v2 = v1 ^ a1[1];
  v3 = (__int64 (__fastcall *)(__int64))(v1 ^ a1[3]);
  if ( (*(_DWORD *)(v2 + 0x994) & 0x100000) != 0 )
    KeExitRetpoline();
  else
    _mm_lfence();
  return v3(v2);
}