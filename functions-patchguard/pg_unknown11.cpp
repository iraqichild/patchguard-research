/* XREFS
Up	p	pg_unknown6+6D79	call    pg_unknown11
Down	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+76AF	call    pg_unknown11
*/

void __fastcall pg_unknown11(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v3; // rbx
  __int64 v4; // r8
  unsigned int v5; // edx
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v15; // rcx
  unsigned int *v16; // rdi
  char v17; // r13
  unsigned __int64 v18; // rbp
  __int64 v19; // rdx
  char *v20; // r8
  unsigned int *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  char v25; // cl
  char v26; // al
  __int64 v27; // r9
  int *v28; // r15
  __int64 v29; // rcx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // r11
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbp
  int *v40; // r13
  __int64 v41; // r9
  _QWORD *v42; // r8
  const char *v43; // rax
  unsigned __int64 v44; // rdi
  int v45; // r11d
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdi
  unsigned __int64 v49; // rcx
  unsigned __int64 i; // rax
  _DWORD *v51; // r15
  unsigned int v52; // edi
  unsigned __int8 v53; // al
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // r12
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // r8
  unsigned __int8 *v59; // r9
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned __int8 v64; // r12
  unsigned int *v65; // rcx
  unsigned int *v66; // rdi
  char v67; // r13
  unsigned __int64 v68; // rbp
  __int64 v69; // rdx
  char *v70; // r8
  unsigned int *v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rax
  bool v74; // zf
  char v75; // cl
  char v76; // al
  int v77; // r12d
  unsigned __int8 v78; // r13
  unsigned __int64 v79; // rdi
  unsigned __int64 v80; // r15
  int v81; // eax
  __int64 v82; // rbp
  __int64 v83; // rax
  _QWORD *v84; // rax
  unsigned int v85; // ecx
  int v86; // r15d
  unsigned int v87; // r11d
  __int64 v88; // rdi
  _DWORD *v89; // r13
  char **v90; // r15
  char *v91; // r9
  char *v92; // r10
  unsigned __int64 v93; // rax
  int v94; // r12d
  const char *j; // rax
  unsigned __int64 v96; // r14
  unsigned __int64 v97; // r8
  __int64 v98; // rax
  __int64 v99; // r8
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rax
  __int64 v102; // r13
  unsigned int v103; // r15d
  unsigned int v104; // r12d
  unsigned int *v105; // rbp
  _DWORD *v106; // rdi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  unsigned __int8 v110; // r13
  unsigned __int64 v111; // r15
  unsigned __int64 v112; // r12
  int v113; // eax
  __int64 v114; // r8
  __int64 *v115; // r9
  __int64 *v116; // r10
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rcx
  unsigned __int8 v122; // r13
  unsigned __int64 v123; // r15
  int v124; // eax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // [rsp+20h] [rbp-C8h]
  __int64 v128; // [rsp+20h] [rbp-C8h]
  __int64 v129; // [rsp+28h] [rbp-C0h]
  int v130; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v131; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v132; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v133; // [rsp+38h] [rbp-B0h]
  _QWORD *v134; // [rsp+38h] [rbp-B0h]
  unsigned int v135; // [rsp+40h] [rbp-A8h]
  int v136; // [rsp+44h] [rbp-A4h]
  __int64 v137; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v138; // [rsp+50h] [rbp-98h]
  unsigned int v139; // [rsp+50h] [rbp-98h]
  __int64 v140; // [rsp+58h] [rbp-90h]
  __int64 v141; // [rsp+58h] [rbp-90h]
  __int64 v142; // [rsp+60h] [rbp-88h]
  __int64 v143; // [rsp+60h] [rbp-88h]
  __int64 v144; // [rsp+68h] [rbp-80h]
  __int64 v145; // [rsp+70h] [rbp-78h]
  int *v146; // [rsp+78h] [rbp-70h]
  _BYTE v147[16]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v148[88]; // [rsp+90h] [rbp-58h] BYREF
  unsigned int v150; // [rsp+F8h] [rbp+10h]
  unsigned int v151; // [rsp+100h] [rbp+18h]
  unsigned __int64 v152; // [rsp+100h] [rbp+18h]
  unsigned int v153; // [rsp+100h] [rbp+18h]
  unsigned __int8 v154; // [rsp+108h] [rbp+20h]
  unsigned __int64 v155; // [rsp+108h] [rbp+20h]
  int v156; // [rsp+108h] [rbp+20h]
  unsigned int v157; // [rsp+108h] [rbp+20h]

  v2 = a2;
  v3 = a1;
  if ( *a2 == 12 )
  {
    if ( *(_QWORD *)(a1 + 2432) )
    {
      v4 = *(unsigned int *)(a1 + 2084);
      v5 = *(_DWORD *)(a1 + 2452);
      LOBYTE(a1) = v5;
      if ( !(_DWORD)v4 )
      {
        LODWORD(a1) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * v5)) & 0x20;
        *(_DWORD *)(v3 + 2452) = a1;
        goto LABEL_6;
      }
      if ( (((unsigned __int8)v5 ^ (unsigned __int8)(v5 >> 3)) & 4) == 0 )
      {
LABEL_6:
        if ( (a1 & 4) != 0 )
        {
          v6 = *((_QWORD *)v2 + 4);
          if ( v6 )
          {
            v7 = v6 + v4;
            v8 = ((_WORD)v4 + (_WORD)v6) & 0xFFF;
            v9 = (unsigned int)(v2[10] - v4) + 4095LL;
          }
          else
          {
            v9 = v2[2] & 0xFFF;
            v7 = *((_QWORD *)v2 + 1);
            v8 = (unsigned int)v2[4] + 4095LL;
          }
          v10 = v7 & 0xFFFFFFFFFFFFF000uLL;
          v11 = (unsigned __int64)(v9 + v8) >> 12;
          while ( v11 )
          {
            --v11;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v3 + 688))(v10) && !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v3 + 2320) = *v2;
              *(_QWORD *)(v3 + 2328) = v10;
              *(_DWORD *)(v3 + 2296) = 1;
              __b8(v3, 0LL);
            }
            *(_DWORD *)(v3 + 2088) += 256;
            v10 += 4096LL;
            v12 = *(_DWORD *)(v3 + 2088);
            if ( v6 )
            {
              *(_DWORD *)(v3 + 2084) += 4096;
              if ( v12 >= *(_DWORD *)(v3 + 2092) )
                break;
            }
          }
          if ( v6 && !v11 )
            *(_DWORD *)(v3 + 2084) = 0;
          if ( !*(_DWORD *)(v3 + 2084) )
          {
            v13 = *(_QWORD *)(v3 + 1344);
            CurrentIrql = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            (*(void (__fastcall **)(__int64))(v3 + 336))(v13);
            v15 = **(unsigned int ***)(v3 + 1552);
            v16 = v15 + 4;
            v17 = *((_BYTE *)v15 + 12);
            v18 = (unsigned __int64)&v15[6 * *v15 + 4];
            while ( 2 )
            {
              v19 = 24LL;
              v20 = (char *)(v2 + 6);
              v21 = v16;
              while ( 1 )
              {
                v22 = *(_QWORD *)v21;
                v21 += 2;
                v23 = *(_QWORD *)v20;
                v20 += 8;
                if ( v22 != v23 )
                  break;
                v19 = (unsigned int)(v19 - 8);
                if ( (unsigned int)v19 < 8 )
                {
                  v24 = (_DWORD)v19 == 0;
                  while ( !v24 )
                  {
                    v25 = *(_BYTE *)v21;
                    v21 = (unsigned int *)((char *)v21 + 1);
                    v26 = *v20++;
                    if ( v25 != v26 )
                      goto LABEL_29;
                    v24 = (_DWORD)v19 == 1;
                    v19 = (unsigned int)(v19 - 1);
                  }
                  goto LABEL_30;
                }
              }
LABEL_29:
              v16 += 6;
              if ( (unsigned __int64)v16 < v18 )
                continue;
              break;
            }
LABEL_30:
            (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v3 + 400))(
              *(_QWORD *)(v3 + 1344),
              v19,
              v20,
              v21);
            __writecr8(CurrentIrql);
            if ( !v17 )
              goto LABEL_35;
            if ( (*(_DWORD *)(v3 + 2452) & 0x10) != 0 && !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v3 + 2320) = *v2;
              *(_QWORD *)(v3 + 2328) = 1LL;
              *(_DWORD *)(v3 + 2296) = 1;
              __b8(v3, 0LL);
            }
            if ( *((_QWORD *)v2 + 3) != 1LL )
            {
LABEL_35:
              if ( v16 == (unsigned int *)v18 && !*(_DWORD *)(v3 + 2296) )
              {
                *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v3 + 2320) = *v2;
                *(_QWORD *)(v3 + 2328) = v16;
                *(_DWORD *)(v3 + 2296) = 1;
                __b8(v3, 0LL);
              }
            }
          }
          return;
        }
        goto LABEL_39;
      }
    }
    *(_DWORD *)(v3 + 2084) = 0;
    return;
  }
LABEL_39:
  v27 = *((_QWORD *)v2 + 4);
  v28 = v2 + 12;
  v127 = v27;
  v146 = v2 + 12;
  v29 = *(unsigned int *)(v3 + 2084);
  v30 = ((v27 & 0xFFF) + (unsigned __int64)(unsigned int)v2[10] + 4095) >> 12;
  v31 = (unsigned int)v30;
  v130 = v30;
  v138 = (unsigned int)v30;
  v32 = (__int64)&v2[5 * (unsigned int)v30 + 12];
  v145 = v32;
  v33 = (__int64)&v2[5 * v29 + 12];
  v34 = v27 + (unsigned int)((_DWORD)v29 << 12);
  v144 = v33;
  v137 = v34;
  if ( (*(_DWORD *)(v3 + 2448) & 0x40000000) != 0 && (*(_DWORD *)(v3 + 2452) & 0x1000) == 0 || !*(_QWORD *)(v3 + 2696) )
  {
    v35 = 0;
    v150 = 0;
    do
    {
      if ( (unsigned int)v30 <= 0x10 )
      {
        v32 = v35;
        if ( v35 >= (unsigned int)v30 )
          goto LABEL_82;
      }
      else
      {
        v36 = __rdtsc();
        v37 = __ROR8__(v36, 3);
        v32 = ((((v37 ^ v36) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v37 ^ v36)))
            % v31;
      }
      v38 = (unsigned int)v32;
      v32 = (unsigned int)((_DWORD)v32 << 12);
      v39 = v27 + (unsigned int)v32;
      v40 = &v28[5 * v38];
      if ( *((char *)v40 + 15) >= 0 )
      {
        *(_DWORD *)(v3 + 2088) += 4096;
        LODWORD(v41) = *(_DWORD *)(v3 + 2068);
        v42 = (_QWORD *)v39;
        v43 = (const char *)v39;
        if ( v39 < (unsigned __int64)(v39 + 4096) )
        {
          do
          {
            _mm_prefetch(v43, 0);
            v43 += 64;
          }
          while ( (unsigned __int64)v43 < v39 + 4096 );
        }
        v44 = *(_QWORD *)(v3 + 2072);
        v45 = 32;
        do
        {
          v46 = 8LL;
          do
          {
            v47 = v44 ^ *v42;
            v48 = v42[1];
            v42 += 2;
            v44 = __ROL8__(__ROL8__(v47, v41) ^ v48, v41);
            --v46;
          }
          while ( v46 );
          v49 = __ROL8__(*(_QWORD *)(v3 + 2072) ^ ((unsigned __int64)v42 - v39), 17) ^ *(_QWORD *)(v3 + 2072) ^ ((unsigned __int64)v42 - v39);
          v41 = ((unsigned __int8)(((v49 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v49) ^ (unsigned __int8)v41) & 0x3F;
          if ( !(_DWORD)v41 )
            v41 = 1LL;
          --v45;
        }
        while ( v45 );
        for ( i = v44; ; LODWORD(v44) = i ^ v44 )
        {
          i >>= 31;
          if ( !i )
            break;
        }
        v51 = v40 + 4;
        v52 = v44 & 0x7FFFFFFF;
        if ( v52 != (v40[4] & 0x7FFFFFFF) )
        {
          v151 = (unsigned int)v40[4] >> 31;
          if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
          {
            v53 = KeGetCurrentIrql();
            v154 = v53;
            __writecr8(2uLL);
            v54 = v39 & 0xFFFFFFFFFFFFF000uLL;
            v133 = (v39 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v55 = v53;
              while ( 1 )
              {
                v56 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v3 + 1128))(
                        v54,
                        0LL,
                        v42,
                        v41);
                if ( v56 != -1073741267 )
                  break;
                if ( !v151 )
                  goto LABEL_70;
                v53 = v154;
                if ( v154 > 1u )
                  goto LABEL_68;
                v55 = v154;
                __writecr8(v154);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v56 < 0 )
              {
LABEL_70:
                __writecr8(v55);
                v51 = v40 + 4;
                goto LABEL_71;
              }
              v53 = v154;
LABEL_68:
              v54 += 4096LL;
              v133 += 4096LL;
              if ( v133 != ((v39 + 4095) | 0xFFF) )
                continue;
              break;
            }
            __writecr8(v55);
            v51 = v40 + 4;
          }
          else
          {
LABEL_71:
            v57 = (unsigned int)*v51;
            LODWORD(v57) = v57 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v3 + 1424) + 24LL) = v57 ^ v52;
              if ( !*(_DWORD *)(v3 + 2296) )
              {
                *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v3 + 2320) = *v2;
                *(_QWORD *)(v3 + 2328) = v39;
                *(_DWORD *)(v3 + 2296) = 1;
                __b8(v3, 0LL);
              }
            }
          }
        }
        pg_unknown12(v3, v39, 0x1000u, (__int64)v147);
        v58 = 16LL;
        v59 = v147;
        while ( 1 )
        {
          v60 = *(_QWORD *)v59;
          v59 += 8;
          v61 = *(_QWORD *)v40;
          v40 += 2;
          if ( v60 != v61 )
            break;
          v58 = (unsigned int)(v58 - 8);
          if ( (unsigned int)v58 < 8 )
          {
            if ( !(_DWORD)v58 )
              goto LABEL_80;
            while ( 1 )
            {
              v32 = *v59++;
              v62 = *(unsigned __int8 *)v40;
              v40 = (int *)((char *)v40 + 1);
              if ( v32 != v62 )
                goto LABEL_90;
              v24 = (_DWORD)v58 == 1;
              v58 = (unsigned int)(v58 - 1);
              if ( v24 )
                goto LABEL_80;
            }
          }
        }
LABEL_90:
        v77 = *v51 >> 31;
        if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
        {
          v78 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v79 = v39 & 0xFFFFFFFFFFFFF000uLL;
          v152 = (v39 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 2 )
          {
            v80 = v78;
            while ( 1 )
            {
              v81 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int8 *))(v3 + 1128))(
                      v79,
                      0LL,
                      v58,
                      v59);
              if ( v81 != -1073741267 )
                break;
              if ( !v77 )
                goto LABEL_100;
              if ( v78 > 1u )
                goto LABEL_98;
              v80 = v78;
              __writecr8(v78);
              KeGetCurrentIrql();
              __writecr8(2uLL);
            }
            if ( v81 < 0 )
            {
LABEL_100:
              __writecr8(v80);
              goto LABEL_101;
            }
LABEL_98:
            v79 += 4096LL;
            v152 += 4096LL;
            if ( v152 != ((v39 + 4095) | 0xFFF) )
              continue;
            break;
          }
          __writecr8(v80);
        }
        else
        {
LABEL_101:
          if ( !*(_DWORD *)(v3 + 2296) )
          {
            *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v3 + 2320) = *v2;
            *(_QWORD *)(v3 + 2328) = v39;
            *(_DWORD *)(v3 + 2296) = 1;
            __b8(v3, 0LL);
          }
        }
LABEL_80:
        *(_DWORD *)(v3 + 2088) += 0x10000;
        v28 = v2 + 12;
        LODWORD(v30) = v130;
        v27 = v127;
        v31 = v138;
      }
      v35 = v150 + 1;
      v150 = v35;
    }
    while ( v35 < 0x10 );
    goto LABEL_82;
  }
  if ( v33 == v32 )
    goto LABEL_82;
  do
  {
    if ( *(_DWORD *)(v3 + 2088) >= *(_DWORD *)(v3 + 2092) )
      break;
    v82 = 0LL;
    if ( v33 == v32 )
      goto LABEL_169;
    v83 = v33;
    do
    {
      if ( *(char *)(v83 + 15) < 0 )
        break;
      v82 = (unsigned int)(v82 + 1);
      v83 = v33 + 20 * v82;
    }
    while ( v83 != v32 );
    if ( !(_DWORD)v82 )
      goto LABEL_169;
    v84 = *(_QWORD **)(v3 + 2696);
    v85 = v82;
    LODWORD(v82) = 0;
    v135 = v85;
    v136 = 0;
    v129 = v33;
    v128 = v34;
    v134 = v84;
    do
    {
      v86 = 8;
      if ( v85 < 8 )
        v86 = v85;
      v87 = 0;
      v153 = v86;
      v88 = v128;
      v89 = v148;
      v90 = (char **)v84;
      do
      {
        v90[1] = (char *)4096;
        v91 = (char *)(v88 + (v87 << 12));
        *v90 = v91;
        v92 = v91;
        v93 = *(_QWORD *)(v3 + 2072);
        *(_DWORD *)(v3 + 2088) += 4096;
        v94 = *(_DWORD *)(v3 + 2068);
        v155 = v93;
        for ( j = v91; j < v91 + 4096; j += 64 )
          _mm_prefetch(j, 0);
        v96 = v155;
        v97 = v155;
        v156 = 32;
        do
        {
          v98 = 8LL;
          do
          {
            v99 = *((_QWORD *)v92 + 1) ^ __ROL8__(*(_QWORD *)v92 ^ v97, v94);
            v92 += 16;
            v97 = __ROL8__(v99, v94);
            --v98;
          }
          while ( v98 );
          v100 = __ROL8__(v96 ^ (v92 - v91), 17) ^ v96 ^ (v92 - v91);
          v94 = ((unsigned __int8)(((v100 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v100) ^ (unsigned __int8)v94) & 0x3F;
          if ( !v94 )
            LOBYTE(v94) = 1;
          --v156;
        }
        while ( v156 );
        v101 = v97;
        v88 = v128;
        while ( 1 )
        {
          v101 >>= 31;
          if ( !v101 )
            break;
          LODWORD(v97) = v101 ^ v97;
        }
        ++v87;
        *v89 = v97 & 0x7FFFFFFF;
        v90 += 6;
        ++v89;
      }
      while ( v87 < v153 );
      v2 = a2;
      v102 = v128;
      v103 = v153;
      pg_unknown14(v3, v134, v153);
      v104 = 0;
      v157 = 0;
      if ( v153 )
      {
        v105 = (unsigned int *)v148;
        v106 = (_DWORD *)(v129 + 16);
        while ( 1 )
        {
          v107 = *v105;
          v108 = (unsigned int)*v106;
          v139 = v107;
          if ( (_DWORD)v107 != (*v106 & 0x7FFFFFFF) )
          {
            v109 = v102 + (v104 << 12);
            v142 = v109;
            if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
            {
              v110 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v111 = v109 & 0xFFFFFFFFFFFFF000uLL;
              v140 = (v109 + 4095) | 0xFFF;
              v131 = (v109 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 2 )
              {
                v112 = v110;
                while ( 1 )
                {
                  v113 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v3 + 1128))(v111, 0LL);
                  if ( v113 != -1073741267 )
                    break;
                  if ( v110 > 1u )
                    goto LABEL_136;
                  v112 = v110;
                  __writecr8(v110);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v113 < 0 )
                {
                  __writecr8(v112);
                  v108 = (unsigned int)*v106;
                  v103 = v153;
                  v107 = v139;
                  v109 = v142;
                  v104 = v157;
                  v102 = v128;
                  break;
                }
LABEL_136:
                v111 += 4096LL;
                v131 += 4096LL;
                if ( v131 != v140 )
                  continue;
                goto LABEL_137;
              }
            }
            LODWORD(v108) = v108 & 0x7FFFFFFF;
            if ( !*(_DWORD *)(v3 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v3 + 1424) + 24LL) = v107 ^ v108;
              if ( !*(_DWORD *)(v3 + 2296) )
              {
                *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v3 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v3 + 2320) = *a2;
                *(_QWORD *)(v3 + 2328) = v109;
                *(_DWORD *)(v3 + 2296) = 1;
                __b8(v3, 0LL);
              }
            }
          }
          v114 = 16LL;
          v115 = (__int64 *)(v129 + 20LL * v104);
          v116 = &v134[6 * v104 + 2];
          while ( 1 )
          {
            v117 = *v116++;
            v118 = *v115++;
            if ( v117 != v118 )
              break;
            v114 = (unsigned int)(v114 - 8);
            if ( (unsigned int)v114 < 8 )
            {
              if ( !(_DWORD)v114 )
                goto LABEL_162;
              while ( 1 )
              {
                v119 = *(unsigned __int8 *)v116;
                v116 = (__int64 *)((char *)v116 + 1);
                v120 = *(unsigned __int8 *)v115;
                v115 = (__int64 *)((char *)v115 + 1);
                if ( v119 != v120 )
                  goto LABEL_149;
                v24 = (_DWORD)v114 == 1;
                v114 = (unsigned int)(v114 - 1);
                if ( v24 )
                  goto LABEL_162;
              }
            }
          }
LABEL_149:
          v121 = v102 + (v104 << 12);
          v141 = v121;
          if ( (*(_DWORD *)(v3 + 2452) & 0x40) != 0 )
          {
            v122 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v123 = v121 & 0xFFFFFFFFFFFFF000uLL;
            v143 = (v121 + 4095) | 0xFFF;
            v132 = (v121 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 2 )
            {
              v112 = v122;
              while ( 1 )
              {
                v124 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v3 + 1128))(
                         v123,
                         0LL,
                         v114,
                         v115);
                if ( v124 != -1073741267 )
                  break;
                if ( v122 > 1u )
                  goto LABEL_156;
                v112 = v122;
                __writecr8(v122);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v124 < 0 )
              {
                __writecr8(v112);
                v121 = v141;
                v104 = v157;
                goto LABEL_159;
              }
LABEL_156:
              v123 += 4096LL;
              v132 += 4096LL;
              if ( v132 != v143 )
                continue;
              break;
            }
LABEL_137:
            __writecr8(v112);
            v104 = v157;
            goto LABEL_161;
          }
LABEL_159:
          if ( !*(_DWORD *)(v3 + 2296) )
          {
            *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v3 + 2312) = (char *)a2 - 0x4C48B4211BBACBEBLL;
            v125 = *a2;
            *(_QWORD *)(v3 + 2328) = v121;
            *(_QWORD *)(v3 + 2320) = v125;
            *(_DWORD *)(v3 + 2296) = 1;
            __b8(v3, 0LL);
          }
LABEL_161:
          v103 = v153;
LABEL_162:
          v102 = v128;
          ++v104;
          ++v105;
          v157 = v104;
          v106 += 5;
          if ( v104 >= v103 )
          {
            LODWORD(v82) = v136;
            break;
          }
        }
      }
      v82 = v103 + (unsigned int)v82;
      v136 = v82;
      v128 = (v103 << 12) + v102;
      *(_DWORD *)(v3 + 2088) += v103 << 15;
      v85 = v135 - v103;
      v129 += 20LL * v103;
      v135 -= v103;
      if ( *(_DWORD *)(v3 + 2088) >= *(_DWORD *)(v3 + 2092) )
        break;
      v84 = v134;
    }
    while ( v85 );
    v33 = v144;
    v32 = v145;
    v34 = v137;
LABEL_169:
    while ( 1 )
    {
      v126 = v33 + 20 * v82;
      if ( v126 == v32 || *(char *)(v126 + 15) >= 0 )
        break;
      v82 = (unsigned int)(v82 + 1);
    }
    v34 += (unsigned int)((_DWORD)v82 << 12);
    v137 = v34;
    v33 += 20 * v82;
    v144 = v33;
  }
  while ( v33 != v32 );
  if ( v33 != v32 )
  {
    *(_DWORD *)(v3 + 2084) = (v33 - (__int64)v146) / 20;
    return;
  }
LABEL_82:
  v63 = *(_QWORD *)(v3 + 1344);
  v64 = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(v3 + 336))(v63, v32);
  v65 = **(unsigned int ***)(v3 + 1552);
  v66 = v65 + 4;
  v67 = *((_BYTE *)v65 + 12);
  v68 = (unsigned __int64)&v65[6 * *v65 + 4];
  while ( 2 )
  {
    v69 = 24LL;
    v70 = (char *)(v2 + 6);
    v71 = v66;
    while ( 1 )
    {
      v72 = *(_QWORD *)v71;
      v71 += 2;
      v73 = *(_QWORD *)v70;
      v70 += 8;
      if ( v72 != v73 )
        break;
      v69 = (unsigned int)(v69 - 8);
      if ( (unsigned int)v69 < 8 )
      {
        v74 = (_DWORD)v69 == 0;
        while ( !v74 )
        {
          v75 = *(_BYTE *)v71;
          v71 = (unsigned int *)((char *)v71 + 1);
          v76 = *v70++;
          if ( v75 != v76 )
            goto LABEL_173;
          v74 = (_DWORD)v69 == 1;
          v69 = (unsigned int)(v69 - 1);
        }
        goto LABEL_174;
      }
    }
LABEL_173:
    v66 += 6;
    if ( (unsigned __int64)v66 < v68 )
      continue;
    break;
  }
LABEL_174:
  (*(void (__fastcall **)(_QWORD, __int64, char *, unsigned int *))(v3 + 400))(*(_QWORD *)(v3 + 1344), v69, v70, v71);
  __writecr8(v64);
  if ( !v67 )
    goto LABEL_185;
  if ( (*(_DWORD *)(v3 + 2452) & 0x10) != 0 && !*(_DWORD *)(v3 + 2296) )
  {
    *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(v3 + 2320) = *v2;
    *(_QWORD *)(v3 + 2328) = 1LL;
    *(_DWORD *)(v3 + 2296) = 1;
    __b8(v3, 0LL);
  }
  if ( *((_QWORD *)v2 + 3) != 1LL )
  {
LABEL_185:
    if ( v66 == (unsigned int *)v68 && !*(_DWORD *)(v3 + 2296) )
    {
      *(_QWORD *)(v3 + 2304) = v3 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v3 + 2312) = (char *)v2 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v3 + 2320) = *v2;
      *(_QWORD *)(v3 + 2328) = v66;
      *(_DWORD *)(v3 + 2296) = 1;
      __b8(v3, 0LL);
    }
  }
  *(_DWORD *)(v3 + 2084) = 0;
}