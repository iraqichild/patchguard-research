/* XREFS
Down	o	pg_main+B52	lea     rax, pg_unknown19
*/

__int64 __fastcall pg_unknown19(__int64 a1)
{
  _DWORD *v2; // rcx
  _BYTE *v3; // rdx
  __int64 v4; // rsi
  int v5; // r8d
  __int64 v6; // r15
  __int64 v7; // r9
  _KIDTENTRY64 *IdtBase; // r10
  _WORD *v9; // r13
  char *v10; // rcx
  char v11; // al
  _WORD *v12; // r12
  int v13; // r8d
  _BYTE *v14; // rdx
  char *v15; // rcx
  __int64 v16; // r9
  char v17; // al
  unsigned __int64 v18; // rax
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rax
  char *v24; // rcx
  char v25; // al
  unsigned __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r9
  unsigned __int64 v30; // rax
  _QWORD *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  volatile signed __int32 *v34; // r15
  char *v35; // r13
  _QWORD *v36; // rdx
  _QWORD *v37; // r9
  unsigned int v38; // r12d
  _QWORD *v39; // r11
  struct _KPRCB *CurrentPrcb; // rdx
  char v41; // al
  int v42; // edx
  _QWORD *v43; // rcx
  __int64 v44; // r8
  char v45; // al
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  int v48; // r15d
  int v49; // eax
  __int64 v50; // rcx
  _QWORD *v51; // rsi
  char *v52; // rcx
  int v53; // edx
  __int64 v54; // r8
  char v55; // al
  int v56; // edx
  char *v57; // rcx
  __int64 v58; // r8
  char v59; // al
  __int64 *v61; // [rsp+20h] [rbp-88h]
  __int64 v62; // [rsp+28h] [rbp-80h]
  _BYTE v63[16]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v64[16]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v65[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned __int64 v66; // [rsp+B0h] [rbp+8h]
  _QWORD *v67; // [rsp+B8h] [rbp+10h]

  v2 = *(_DWORD **)(a1 + 2656);
  if ( *v2 == 44 )
  {
    _disable();
    RtlMinimalBarrier(a1 + 2624, 0LL);
    v66 = *(_QWORD *)(a1 + 2664);
    do
    {
      v3 = v63;
      v4 = *(_QWORD *)(a1 + 2240);
      v5 = 16;
      v6 = *(unsigned int *)(a1 + 2292);
      v7 = 2LL;
      IdtBase = KeGetPcr()->IdtBase;
      v9 = (_WORD *)(v4 + 32);
      v10 = (char *)(v4 + 32);
      do
      {
        v5 -= 8;
        *(_QWORD *)v3 = *(_QWORD *)v10;
        v10 += 8;
        v3 += 8;
        --v7;
      }
      while ( v7 );
      for ( ; v5; --v5 )
      {
        v11 = *v10++;
        *v3++ = v11;
      }
      v12 = (_WORD *)(v4 + 288);
      v13 = 16;
      v14 = v64;
      v15 = (char *)(v4 + 288);
      v16 = 2LL;
      do
      {
        v13 -= 8;
        *(_QWORD *)v14 = *(_QWORD *)v15;
        v15 += 8;
        v14 += 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *v15++;
        *v14++ = v17;
      }
      v61 = (__int64 *)(*(_QWORD *)(a1 + 1504) + (((unsigned __int64)IdtBase >> 9) & 0x7FFFFFFFF8LL));
      v62 = *v61;
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
      {
        v18 = v6 + a1 + 16;
        v19 = (_QWORD *)(v4 + 1024);
        *v9 = v18;
        v20 = v18 >> 16;
        v21 = 4096;
        v22 = 512LL;
        *(_DWORD *)(v4 + 40) = HIDWORD(v18);
        v23 = v6 + a1 + 144;
        *(_WORD *)(v4 + 38) = v20;
        *v12 = v23;
        *(_WORD *)(v4 + 294) = WORD1(v23);
        v24 = (char *)v66;
        *(_DWORD *)(v4 + 296) = HIDWORD(v23);
        do
        {
          v21 -= 8;
          *v19 = *(_QWORD *)v24;
          v24 += 8;
          ++v19;
          --v22;
        }
        while ( v22 );
        for ( ; v21; --v21 )
        {
          v25 = *v24++;
          *(_BYTE *)v19 = v25;
          v19 = (_QWORD *)((char *)v19 + 1);
        }
        *(_DWORD *)(a1 + 2206) = -255817396;
        v26 = v65;
        *(_DWORD *)(a1 + 2210) = 296816456;
        *(_DWORD *)(a1 + 2214) = -1010789361;
        LODWORD(v27) = 4;
        *(_QWORD *)(v4 + 5128) = v66;
        v28 = 4LL;
        *(_QWORD *)(v4 + 5136) = v66;
        *(_QWORD *)(v4 + 5120) = a1;
        *(_DWORD *)(v4 + 5172) = -1;
        *(_DWORD *)(v4 + 5168) = 4;
        v29 = *(_QWORD *)(a1 + 1504);
        v30 = v29 + ((v66 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v26++ = v30;
          v30 = v29 + ((v30 >> 9) & 0x7FFFFFFFF8LL);
          --v28;
        }
        while ( v28 );
        do
          v27 = (unsigned int)(v27 - 1);
        while ( (_DWORD)v27 && (*(_DWORD *)v65[v27] & 0x80) == 0 );
        v31 = (_QWORD *)v65[v27];
        *(_QWORD *)(v4 + 5160) = v31;
        *(_QWORD *)(v4 + 5152) = *v31;
      }
      RtlMinimalBarrier(a1 + 2624, 0LL);
      *v61 = v62 ^ (v62 ^ (*(_QWORD *)(v4 + 5144) << 12)) & 0xFFFFFFFFF000LL;
      **(_QWORD **)(v4 + 5160) = *(_QWORD *)(v4 + 5152) | 0x42LL;
      v32 = __readcr4();
      if ( (v32 & 0x20080) != 0 )
      {
        __writecr4(v32 ^ 0x80);
        __writecr4(v32);
      }
      else
      {
        v33 = __readcr3();
        __writecr3(v33);
      }
      v34 = (volatile signed __int32 *)(v4 + 5168);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
        _InterlockedAnd(v34, 0xFFFFFFFB);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
      {
        v35 = (char *)(v4 + 1024);
        v36 = (_QWORD *)(v4 + 1024);
        *(_DWORD *)(v4 + 5172) = KeGetPcr()->Prcb.Number;
        v67 = (_QWORD *)(v4 + 1024);
        v37 = (_QWORD *)(v4 + 5136);
        v38 = 0;
        while ( 1 )
        {
          v39 = (_QWORD *)v66;
          if ( (*(_DWORD *)(a1 + 2452) & 0x20000) == 0 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            **(_QWORD **)(a1 + 1216) = a1 - 0x5C5FC0A76E374B18LL;
            **(_QWORD **)(a1 + 1224) = CurrentPrcb;
            v36 = v67;
            **(_QWORD **)(a1 + 1232) = v38 + v66;
            **(_QWORD **)(a1 + 1240) = 276LL;
          }
          *v37 = v38 + v66;
          if ( _InterlockedCompareExchange(v34, 2, 0) )
            break;
          if ( (v38 & 7) == 0 )
          {
            v41 = ((__int64 (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD))(a1 + 2206))(
                    v38 + v66,
                    0xC3C3C3C3C3C3C3C3uLL,
                    *v36);
            v37 = (_QWORD *)(v4 + 5136);
            if ( !v41 )
            {
              _InterlockedAnd(v34, 0xFFFFFFFD);
LABEL_38:
              v39 = (_QWORD *)v66;
              break;
            }
          }
          ((void (__fastcall *)(_QWORD *))(a1 + 2195))(v37);
          _InterlockedAnd(v34, 0xFFFFFFFD);
          v37 = (_QWORD *)(v4 + 5136);
          v36 = (_QWORD *)((char *)v67 + 1);
          ++v38;
          v67 = (_QWORD *)((char *)v67 + 1);
          if ( v38 >= 0x1000 )
            goto LABEL_38;
        }
        v42 = 4096;
        if ( v38 != 4096 )
        {
          _InterlockedOr(v34, 8u);
          *v37 = (char *)v39 + 4095;
        }
        v43 = v39;
        v44 = 512LL;
        do
        {
          v42 -= 8;
          *v43 = *(_QWORD *)v35;
          v35 += 8;
          ++v43;
          --v44;
        }
        while ( v44 );
        for ( ; v42; --v42 )
        {
          v45 = *v35++;
          *(_BYTE *)v43 = v45;
          v43 = (_QWORD *)((char *)v43 + 1);
        }
        _InterlockedOr(v34, 4u);
        v12 = (_WORD *)(v4 + 288);
        v9 = (_WORD *)(v4 + 32);
        if ( (*(_DWORD *)(a1 + 2452) & 0x20000) == 0 )
        {
          **(_QWORD **)(a1 + 1216) = 0xA3A03F5891C8B4E8uLL;
          **(_QWORD **)(a1 + 1224) = 0LL;
          **(_QWORD **)(a1 + 1232) = 0LL;
          **(_QWORD **)(a1 + 1240) = 0LL;
        }
      }
      RtlMinimalBarrier(a1 + 2624, 0LL);
      **(_QWORD **)(v4 + 5160) = *(_QWORD *)(v4 + 5152);
      *v61 = v62;
      v46 = __readcr4();
      if ( (v46 & 0x20080) != 0 )
      {
        __writecr4(v46 ^ 0x80);
        __writecr4(v46);
      }
      else
      {
        v47 = __readcr3();
        __writecr3(v47);
      }
      v48 = *(_DWORD *)(v4 + 5168);
      if ( (unsigned __int8)RtlMinimalBarrier(a1 + 2624, 0LL) )
      {
        *(_QWORD *)(v4 + 5120) = 0LL;
        v49 = 4096;
        *(_QWORD *)(v4 + 5128) = 0LL;
        v50 = 512LL;
        *(_QWORD *)(v4 + 5136) = 0LL;
        *(_QWORD *)(v4 + 5152) = 0LL;
        *(_QWORD *)(v4 + 5160) = 0LL;
        *(_QWORD *)(v4 + 5168) = 0LL;
        v51 = (_QWORD *)(v4 + 1024);
        do
        {
          *v51 = 0LL;
          v49 -= 8;
          ++v51;
          --v50;
        }
        while ( v50 );
        for ( ; v49; --v49 )
        {
          *(_BYTE *)v51 = 0;
          v51 = (_QWORD *)((char *)v51 + 1);
        }
        v52 = v63;
        v53 = 16;
        v54 = 2LL;
        do
        {
          v53 -= 8;
          *(_QWORD *)v9 = *(_QWORD *)v52;
          v52 += 8;
          v9 += 4;
          --v54;
        }
        while ( v54 );
        for ( ; v53; --v53 )
        {
          v55 = *v52++;
          *(_BYTE *)v9 = v55;
          v9 = (_WORD *)((char *)v9 + 1);
        }
        v56 = 16;
        v57 = v64;
        v58 = 2LL;
        do
        {
          v56 -= 8;
          *(_QWORD *)v12 = *(_QWORD *)v57;
          v57 += 8;
          v12 += 4;
          --v58;
        }
        while ( v58 );
        for ( ; v56; --v56 )
        {
          v59 = *v57++;
          *(_BYTE *)v12 = v59;
          v12 = (_WORD *)((char *)v12 + 1);
        }
      }
      RtlMinimalBarrier(a1 + 2624, 0LL);
    }
    while ( (v48 & 8) != 0 );
    _enable();
  }
  else if ( !*(_DWORD *)(a1 + 2296) )
  {
    *(_QWORD *)(a1 + 2320) = 257LL;
    *(_QWORD *)(a1 + 2328) = 0LL;
    *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
    *(_DWORD *)(a1 + 2296) = 1;
    *(_QWORD *)(a1 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    __b8(a1, 0LL);
  }
  return a1;
}