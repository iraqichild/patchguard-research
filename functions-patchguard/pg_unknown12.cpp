/* XREFS 
Up	p	pg_unknown6+3BB7	call    pg_unknown12
Up	p	pg_unknown6+5555	call    pg_unknown12
Down	p	pg_unknown11+632	call    pg_unknown12
Down	p	pg_unknown26+3C2	call    pg_unknown12
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+4349	call    pg_unknown12
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+5D8B	call    pg_unknown12
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+DF98	call    pg_unknown12
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+E48F	call    pg_unknown12
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+FC19	call    pg_unknown12
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+10EF4	call    pg_unknown12
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+11101	call    pg_unknown12
Down	p	pg_unknown8+E6F	call    pg_unknown12
Down	p	pg_unknown13+E45	call    pg_unknown12
Down	p	pg_main+8C12	call    pg_unknown12
Down	p	pg_main+A9F4	call    pg_unknown12
Down	p	pg_main+C739	call    pg_unknown12
Down	p	pg_main+D9DC	call    pg_unknown12
Down	p	pg_main+DD20	call    pg_unknown12
Down	p	pg_main+ED24	call    pg_unknown12
Down	p	pg_main+F012	call    pg_unknown12
Down	p	pg_main+F689	call    pg_unknown12
Down	p	pg_main+1099E	call    pg_unknown12
Down	p	pg_main+10D2B	call    pg_unknown12
Down	p	pg_main+1119B	call    pg_unknown12
Down	p	pg_main+11B10	call    pg_unknown12
Down	p	pg_main+121B9	call    pg_unknown12
Down	p	pg_main+13695	call    pg_unknown12
Down	p	pg_main+13866	call    pg_unknown12
Down	p	pg_main+13A34	call    pg_unknown12
Down	p	pg_main+13C05	call    pg_unknown12
Down	p	pg_main+13DF5	call    pg_unknown12
Down	p	pg_main+14005	call    pg_unknown12
Down	p	pg_main+14244	call    pg_unknown12
Down	p	pg_main+14450	call    pg_unknown12
Down	p	pg_main+1464D	call    pg_unknown12
Down	p	pg_main+148A2	call    pg_unknown12
Down	p	pg_main+14E12	call    pg_unknown12
Down	p	pg_main+152FE	call    pg_unknown12
Down	p	pg_main+154FD	call    pg_unknown12
Down	p	pg_main+156DA	call    pg_unknown12
Down	p	pg_main+18E87	call    pg_unknown12
Down	p	pg_main+194EE	call    pg_unknown12
Down	p	pg_main+195AC	call    pg_unknown12
Down	p	pg_main+195FF	call    pg_unknown12
Down	p	pg_main+19640	call    pg_unknown12
*/

unsigned __int8 __fastcall pg_unknown12(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 i; // rdx
  unsigned __int8 result; // al
  unsigned __int8 j; // cl
  _DWORD v8[10]; // [rsp+20h] [rbp-28h] BYREF

  (*(void (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 1024))(a2, a3, v8);
  for ( i = 0LL; i < 4; ++i )
    *(_DWORD *)(a4 + 4 * i) = v8[i] ^ v8[i + 4];
  result = *(_BYTE *)(a4 + 15);
  for ( j = result; ; j ^= result )
  {
    result >>= 7;
    if ( !result )
      break;
  }
  *(_BYTE *)(a4 + 15) = j & 0x7F;
  return result;
}