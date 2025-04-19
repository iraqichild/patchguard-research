/* XREFS
Up	p	pg_unknown6+3686	call    pg_unknown9
Up	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+3DEF	call    pg_unknown9
Up	p	pg_unknown8+535	call    pg_unknown9
Up	p	pg_unknown8+975	call    pg_unknown9
Down	p	pg_main+81D2	call    pg_unknown9
Down	p	pg_main+86B7	call    pg_unknown9
Down	p	pg_main+9FE2	call    pg_unknown9
Down	p	pg_main+A4B7	call    pg_unknown9
Down	p	pg_main+C227	call    pg_unknown9
*/

__int64 __fastcall pg_unknown9(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  unsigned __int64 *v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // r10
  __int64 v7; // rax
  BOOL v8; // r10d
  int v9; // r9d
  int v10; // r11d
  _QWORD v12[5]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  if ( a1 )
    v3 = *(_QWORD *)(a1 + 1504);
  else
    v3 = MmPteBase;
  v4 = v12;
  v5 = v3 + ((a2 >> 9) & 0x7FFFFFFFF8LL);
  v6 = 4LL;
  do
  {
    *v4 = v5;
    if ( a1 )
      v7 = *(_QWORD *)(a1 + 1504);
    else
      v7 = MmPteBase;
    ++v4;
    v5 = v7 + ((v5 >> 9) & 0x7FFFFFFFF8LL);
    --v6;
  }
  while ( v6 );
  v8 = 0;
  v9 = 3;
  do
  {
    v10 = v9;
    if ( v8 )
    {
      v12[v9] = 0LL;
    }
    else
    {
      if ( !v9 )
        break;
      v8 = *(char *)v12[v9] < 0;
    }
    --v9;
  }
  while ( v10 );
  LOBYTE(v2) = v12[0] == 0LL;
  return v2;
}