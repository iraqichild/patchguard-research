/* XREFS
Up	p	pg_unknown6+3214	call    pg_unknown13
Up	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+3952	call    pg_unknown13
Up	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+F2BA	call    pg_unknown13
Up	p	pg_unknown8+57A	call    pg_unknown13
Down	p	pg_main+8200	call    pg_unknown13
Down	p	pg_main+A010	call    pg_unknown13
Down	p	pg_main+BD8A	call    pg_unknown13
*/

__int64 __fastcall pg_unknown13(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // r13
  int v6; // edi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // si
  int v9; // r12d
  unsigned int *v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // xmm1_8
  int v13; // ecx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // ecx
  unsigned int v19; // r15d
  unsigned int v20; // eax
  int v21; // r8d
  _BYTE *v22; // r14
  int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // r8
  int v26; // edx
  unsigned __int64 v27; // rcx
  int v28; // ebx
  int v29; // ecx
  int v30; // ecx
  _BYTE *v31; // rdi
  _QWORD *v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 i; // rax
  _QWORD *v36; // rdx
  __int64 v37; // r8
  char *v38; // rcx
  char v39; // al
  unsigned __int64 v40; // rbx
  BOOL v41; // r12d
  _QWORD *v42; // rax
  unsigned __int64 v43; // rcx
  int v44; // r11d
  __int64 v45; // r8
  _DWORD *v46; // rdi
  __int64 v47; // r9
  int v48; // ecx
  __int16 v49; // ax
  int v50; // r10d
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 *v53; // r10
  __int64 v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  int v58; // r10d
  __int64 v59; // rdx
  __int64 v60; // rax
  int v61; // r10d
  __int64 v62; // rdx
  __int64 v63; // rax
  bool v64; // zf
  unsigned int v65; // ecx
  __int64 v66; // rdx
  unsigned int v67; // r15d
  int v68; // eax
  __int64 v69; // rdx
  unsigned __int64 v70; // r8
  _BYTE *v71; // rcx
  __int64 v72; // r9
  BOOL v73; // r11d
  unsigned __int64 v74; // rax
  unsigned int v75; // r13d
  _DWORD *v76; // rdi
  int v77; // eax
  int v78; // r11d
  char *v79; // rbx
  int v80; // ecx
  __int16 v81; // ax
  char *v82; // r10
  __int64 v83; // rax
  __int64 *v84; // r10
  __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  int v88; // r10d
  __int64 v89; // rax
  signed __int64 v90; // rbx
  __int64 v91; // rax
  unsigned int v92; // ecx
  int v93; // eax
  unsigned __int64 *v94; // rax
  int v95; // r9d
  unsigned int *v96; // rcx
  _BYTE *v97; // rax
  unsigned __int64 v98; // rdx
  __int64 v99; // rdi
  unsigned __int64 v100; // rax
  char **v101; // r15
  unsigned int v102; // eax
  __int64 v103; // rbx
  unsigned int v104; // r11d
  unsigned __int64 v105; // rdi
  _DWORD *v106; // r13
  char *v107; // r9
  char *v108; // r10
  int v109; // r12d
  const char *j; // rax
  __int64 v111; // r14
  unsigned __int64 v112; // r8
  __int64 v113; // rax
  __int64 v114; // r8
  unsigned __int64 v115; // rcx
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // rdi
  char **v118; // r15
  _DWORD *v119; // r12
  __int64 v120; // r13
  _DWORD *v121; // r9
  _QWORD *v122; // r11
  char *v123; // r15
  int v124; // r8d
  char *v125; // rcx
  _QWORD *v126; // rdx
  __int64 v127; // r10
  char v128; // al
  int v129; // ecx
  __int64 k; // rcx
  unsigned __int64 v131; // rax
  __int64 v132; // r15
  bool v133; // cf
  __int64 v134; // r13
  int v135; // r8d
  int v136; // r12d
  unsigned int v137; // eax
  __int64 v138; // rdi
  int v139; // ecx
  unsigned int v140; // eax
  __int64 v141; // r8
  int v142; // edx
  unsigned __int64 v143; // rcx
  int v144; // r14d
  int v145; // ecx
  __int64 v147; // r14
  int v148; // ecx
  _QWORD *v149; // rax
  __int64 v150; // rdx
  _QWORD *v151; // r9
  int v152; // r10d
  const char *v153; // rax
  unsigned __int64 v154; // r8
  unsigned int v155; // r11d
  __int64 v156; // rax
  __int64 v157; // r8
  unsigned __int128 v158; // rax
  unsigned int v159; // edx
  unsigned __int64 v160; // rax
  __int64 v161; // rax
  unsigned __int64 m; // rax
  int v163; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v164; // [rsp+38h] [rbp-D0h]
  int v165; // [rsp+38h] [rbp-D0h]
  _BYTE *v166; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v167; // [rsp+40h] [rbp-C8h]
  unsigned int v168; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v169; // [rsp+4Ch] [rbp-BCh]
  __int64 v170; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v171; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v172; // [rsp+60h] [rbp-A8h]
  __int64 v173; // [rsp+68h] [rbp-A0h]
  __int64 v174; // [rsp+70h] [rbp-98h]
  __int64 v175; // [rsp+78h] [rbp-90h]
  _BYTE *v176; // [rsp+80h] [rbp-88h]
  char **v177; // [rsp+88h] [rbp-80h]
  __int128 v178; // [rsp+90h] [rbp-78h] BYREF
  __int64 v179; // [rsp+A0h] [rbp-68h]
  __int64 v180; // [rsp+A8h] [rbp-60h]
  __int64 v181; // [rsp+B0h] [rbp-58h]
  __int64 v182; // [rsp+B8h] [rbp-50h]
  __int64 v183; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v184; // [rsp+C8h] [rbp-40h]
  __int64 v185; // [rsp+D0h] [rbp-38h]
  char *v186; // [rsp+D8h] [rbp-30h]
  char *v187; // [rsp+E0h] [rbp-28h]
  _BYTE *v188; // [rsp+E8h] [rbp-20h]
  _BYTE *v189; // [rsp+F0h] [rbp-18h]
  __int64 v190; // [rsp+F8h] [rbp-10h]
  __int64 v191; // [rsp+100h] [rbp-8h]
  __int64 v192; // [rsp+108h] [rbp+0h]
  _BYTE v193[104]; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int8 *v195; // [rsp+190h] [rbp+88h]
  int v197; // [rsp+198h] [rbp+90h]
  unsigned __int16 v198; // [rsp+1A0h] [rbp+98h]
  unsigned int v199; // [rsp+1A0h] [rbp+98h]
  unsigned __int64 v200; // [rsp+1A0h] [rbp+98h]
  int v201; // [rsp+1A0h] [rbp+98h]

  v195 = (unsigned __int8 *)a2;
  v3 = *(_BYTE **)a1;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 504LL))(a2);
  if ( v5 )
  {
    LODWORD(v170) = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 85))(a2);
    v198 = *(_WORD *)(v5 + 6);
    if ( v198 && *(_DWORD *)(v5 + 56) >= 0x1000u && (a2 & 0xFFF) == 0 )
    {
      v6 = -1073741275;
      v7 = *((_QWORD *)v3 + 168);
      v169 = *(_DWORD *)(v5 + 84);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*((void (__fastcall **)(__int64))v3 + 42))(v7);
      v9 = 24;
      v10 = (unsigned int *)**((_QWORD **)v3 + 194);
      v11 = (unsigned __int64)(v10 + 4);
      while ( *(_QWORD *)(v11 + 8) != a2 )
      {
        v11 += 24LL;
        if ( v11 >= (unsigned __int64)&v10[6 * *v10 + 4] )
          goto LABEL_10;
      }
      v6 = 0;
      v12 = *(_QWORD *)(v11 + 16);
      v178 = *(_OWORD *)v11;
      v179 = v12;
LABEL_10:
      (*((void (__fastcall **)(_QWORD))v3 + 50))(*((_QWORD *)v3 + 168));
      __writecr8(CurrentIrql);
      if ( v6 >= 0 )
      {
        v16 = (unsigned int)v179;
      }
      else
      {
        v13 = 24;
        v14 = &v178;
        v15 = 3LL;
        do
        {
          *(_QWORD *)v14 = 0LL;
          v13 -= 8;
          v14 = (__int128 *)((char *)v14 + 8);
          --v15;
        }
        while ( v15 );
        for ( ; v13; --v13 )
        {
          *(_BYTE *)v14 = 0;
          v14 = (__int128 *)((char *)v14 + 1);
        }
        v16 = *(unsigned int *)(v5 + 80);
        LODWORD(v179) = *(_DWORD *)(v5 + 80);
        *((_QWORD *)&v178 + 1) = a2;
        *(_QWORD *)&v178 = 1LL;
      }
      v17 = *((unsigned int *)v3 + 505);
      v18 = *((_DWORD *)v3 + 585);
      v172 = ((a2 & 0xFFF) + 4095 + v16) >> 12;
      v19 = 20 * v172;
      v20 = 20 * v172 + v17 + 48;
      v21 = ((_DWORD)v170 != 0) + 33;
      v163 = v21;
      if ( v20 <= *((_DWORD *)v3 + 647) )
      {
        v22 = v3;
        v175 = (__int64)v3;
        *((_DWORD *)v3 + 505) = v20;
      }
      else
      {
        v175 = pg_unknown7(v3, v20, v18);
        v22 = (_BYTE *)v175;
        if ( !v175 )
          return 3221225626LL;
        v23 = *((_DWORD *)v3 + 612);
        if ( (v23 & 4) == 0 )
        {
          v24 = *((_DWORD *)v3 + 505);
          v25 = *((_QWORD *)v3 + 249);
          v26 = (v23 & 0x20000000) != 0 ? *((_DWORD *)v3 + 585) : 0;
          if ( v24 >= 8 )
          {
            v27 = (unsigned __int64)v24 >> 3;
            do
            {
              *(_QWORD *)v3 = 0LL;
              v24 -= 8;
              v3 += 8;
              --v27;
            }
            while ( v27 );
          }
          for ( ; v24; --v24 )
            *v3++ = 0;
          v28 = *((_DWORD *)v22 + 585);
          *((_DWORD *)v22 + 585) = v26;
          if ( v26 == 3 )
          {
            (*((void (__fastcall **)(__int64))v22 + 109))(v25);
          }
          else
          {
            v29 = 0;
            if ( (*((_DWORD *)v22 + 612) & 0x10000000) == 0 )
              v29 = v26;
            if ( v29 )
              (*((void (__fastcall **)(__int64, _QWORD))v22 + 69))(v25 - 8, *(_QWORD *)(v25 - 8));
            else
              (*((void (__fastcall **)(__int64))v22 + 32))(v25);
          }
          *((_DWORD *)v22 + 585) = v28;
        }
        *((_DWORD *)v22 + 612) &= ~4u;
        v21 = v163;
      }
      ++*((_DWORD *)v22 + 515);
      v30 = 48;
      v31 = &v22[v17];
      v188 = v31;
      v32 = v31;
      v33 = 6LL;
      do
      {
        *v32 = 0LL;
        v30 -= 8;
        ++v32;
        --v33;
      }
      while ( v33 );
      for ( ; v30; --v30 )
      {
        *(_BYTE *)v32 = 0;
        v32 = (_QWORD *)((char *)v32 + 1);
      }
      *(_DWORD *)v31 = v21;
      *((_QWORD *)v31 + 1) = 0LL;
      *((_DWORD *)v31 + 4) = 0;
      v34 = *((_QWORD *)v22 + 259);
      for ( i = v34; ; LODWORD(v34) = i ^ v34 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v36 = v31 + 24;
      v189 = v31;
      *((_DWORD *)v31 + 5) = v34 & 0x7FFFFFFF;
      v37 = 3LL;
      v38 = (char *)&v178;
      *(_QWORD *)a1 = v22;
      do
      {
        v9 -= 8;
        *v36 = *(_QWORD *)v38;
        v38 += 8;
        ++v36;
        --v37;
      }
      while ( v37 );
      for ( ; v9; --v9 )
      {
        v39 = *v38++;
        *(_BYTE *)v36 = v39;
        v36 = (_QWORD *)((char *)v36 + 1);
      }
      LOBYTE(v36) = 1;
      v40 = (*((__int64 (__fastcall **)(unsigned __int8 *, _QWORD *, __int64, unsigned int *))v22 + 62))(
              v195,
              v36,
              12LL,
              &v168);
      v171 = v40;
      v168 &= -(v40 != 0);
      v197 = a3 & 1;
      v41 = 0;
      if ( !v197 )
      {
        v40 = 0LL;
        v168 = 0;
        v171 = 0LL;
      }
      v176 = v31 + 48;
      v166 = v31 + 48;
      v173 = (__int64)&v31[20 * (unsigned int)v172 + 48];
      v42 = v31 + 48;
      if ( v19 >= 8 )
      {
        v43 = (unsigned __int64)v19 >> 3;
        do
        {
          *v42 = -1LL;
          v19 -= 8;
          ++v42;
          --v43;
        }
        while ( v43 );
      }
      for ( ; v19; --v19 )
      {
        *(_BYTE *)v42 = -1;
        v42 = (_QWORD *)((char *)v42 + 1);
      }
      v44 = 0;
      v45 = 30839LL;
      v46 = (_DWORD *)(v5 + *(unsigned __int16 *)(v5 + 20) + 24LL);
      v47 = 29303LL;
      v172 = (unsigned __int64)&v46[10 * v198];
      if ( (v46[9] & 0x2000000) != 0
        || (v48 = *v46, *v46 == 1414090313) && v46[1] == 1195525195
        || v48 == 1162297680 && ((v49 = *((_WORD *)v46 + 2), v49 == 30839) || v49 == 29303 || v49 == 30583)
        || v48 == 1095914053 && *((_WORD *)v46 + 2) == 16724 )
      {
LABEL_81:
        v44 = 1;
      }
      else
      {
        v45 = *((_QWORD *)v22 + 294);
        v50 = 7;
        v181 = *((_QWORD *)v22 + 295);
        v47 = (__int64)v46 - v45;
        v182 = *((_QWORD *)v22 + 296);
        v183 = *((_QWORD *)v22 + 297);
        v180 = v45;
        while ( 1 )
        {
          v51 = *(unsigned __int8 *)(v45 + v47);
          v52 = *(unsigned __int8 *)v45++;
          if ( v51 != v52 )
            break;
          if ( !--v50 )
          {
LABEL_80:
            v40 = v171;
            goto LABEL_81;
          }
        }
        v47 = v181;
        LODWORD(v45) = 8;
        v53 = (__int64 *)v46;
        while ( 1 )
        {
          v54 = *v53++;
          v55 = *(_QWORD *)v47;
          v47 += 8LL;
          if ( v54 != v55 )
            break;
          v45 = (unsigned int)(v45 - 8);
          if ( (unsigned int)v45 < 8 )
          {
            if ( !(_DWORD)v45 )
              goto LABEL_80;
            while ( 1 )
            {
              v56 = *(unsigned __int8 *)v53;
              v53 = (__int64 *)((char *)v53 + 1);
              v57 = *(unsigned __int8 *)v47++;
              if ( v56 != v57 )
                goto LABEL_73;
              v45 = (unsigned int)(v45 - 1);
              if ( !(_DWORD)v45 )
                goto LABEL_80;
            }
          }
        }
LABEL_73:
        v45 = v182;
        v47 = (__int64)v46 - v182;
        v58 = 4;
        while ( 1 )
        {
          v59 = *(unsigned __int8 *)(v45 + v47);
          v60 = *(unsigned __int8 *)v45++;
          if ( v59 != v60 )
            break;
          if ( !--v58 )
            goto LABEL_80;
        }
        v45 = v183;
        v47 = (__int64)v46 - v183;
        v61 = 6;
        while ( 1 )
        {
          v62 = *(unsigned __int8 *)(v45 + v47);
          v63 = *(unsigned __int8 *)v45++;
          if ( v62 != v63 )
            break;
          if ( !--v61 )
            goto LABEL_80;
        }
        v40 = v171;
      }
      if ( (int)v46[9] < 0 )
        v44 = 1;
      v64 = v44 == 0;
      if ( v44 )
      {
        if ( *v46 == 1414090313 && v46[1] == 1195525195 && (*((_DWORD *)v22 + 613) & 0x2000) != 0 )
          v44 = 0;
        v64 = v44 == 0;
      }
      v65 = v46[4];
      LOBYTE(v41) = v64;
      v66 = (unsigned int)v46[3];
      v199 = v46[3];
      if ( v65 <= v46[2] )
        v65 = v46[2];
      v67 = (v65 + v66 + 4095) & 0xFFFFF000;
      v68 = MmImageSectionPagable(v46, v66, v45, v47);
      v70 = (unsigned __int64)v195;
      v71 = v166;
      v72 = v173;
      v73 = v68 != 0;
      v74 = (unsigned __int64)v195;
      v164 = (unsigned __int64)v195;
      v75 = 0;
      if ( v166 != (_BYTE *)v173 )
      {
        v76 = v46 + 1;
        while ( 1 )
        {
          if ( v75 < v199 )
          {
            if ( v75 < v169 )
            {
LABEL_141:
              v94 = &v171;
              v95 = 0;
              v96 = &v168;
              while ( 1 )
              {
                v69 = *v96;
                v70 = *v94;
                if ( *v96 )
                {
                  if ( v164 >= v70 && v164 <= v70 + v69 - 1 )
                    break;
                }
                ++v95;
                ++v96;
                ++v94;
                if ( v95 )
                {
                  if ( v75 >= v199 && v73 )
                  {
                    v97 = v166;
                  }
                  else
                  {
                    v97 = v166;
                    *((_DWORD *)v166 + 4) &= ~0x80000000;
                  }
                  v97[15] &= ~0x80u;
                  break;
                }
              }
              v71 = v166;
              v74 = v164;
              v72 = v173;
            }
          }
          else
          {
            if ( v75 >= v67 )
            {
              if ( v76 + 9 == (_DWORD *)v172 || v75 < v76[12] )
              {
                v74 = v164;
                goto LABEL_153;
              }
              v77 = v76[18];
              v76 += 10;
              v78 = 0;
              if ( (v77 & 0x2000000) != 0
                || (v79 = (char *)(v76 - 1), v80 = *(v76 - 1), v80 == 1414090313) && *v76 == 1195525195
                || v80 == 1162297680
                && ((v81 = *(_WORD *)v76, v69 = 30839LL, *(_WORD *)v76 == 30839)
                 || (v69 = 29303LL, v81 == 29303)
                 || (v69 = 30583LL, v81 == 30583))
                || v80 == 1095914053 && *(_WORD *)v76 == 16724 )
              {
                v78 = 1;
              }
              else
              {
                v70 = *((_QWORD *)v22 + 294);
                LODWORD(v72) = 7;
                v185 = *((_QWORD *)v22 + 295);
                v82 = &v79[-v70];
                v186 = (char *)*((_QWORD *)v22 + 296);
                v187 = (char *)*((_QWORD *)v22 + 297);
                v184 = v70;
                while ( 1 )
                {
                  v69 = (unsigned __int8)v82[v70];
                  v83 = *(unsigned __int8 *)v70++;
                  if ( v69 != v83 )
                    break;
                  v72 = (unsigned int)(v72 - 1);
                  if ( !(_DWORD)v72 )
                  {
LABEL_126:
                    v78 = 1;
                    goto LABEL_127;
                  }
                }
                v72 = v185;
                LODWORD(v70) = 8;
                v84 = (__int64 *)(v76 - 1);
                while ( 1 )
                {
                  v85 = *v84++;
                  v86 = *(_QWORD *)v72;
                  v72 += 8LL;
                  if ( v85 != v86 )
                    break;
                  v70 = (unsigned int)(v70 - 8);
                  if ( (unsigned int)v70 < 8 )
                  {
                    if ( !(_DWORD)v70 )
                      goto LABEL_126;
                    while ( 1 )
                    {
                      v69 = *(unsigned __int8 *)v84;
                      v84 = (__int64 *)((char *)v84 + 1);
                      v87 = *(unsigned __int8 *)v72++;
                      if ( v69 != v87 )
                        goto LABEL_119;
                      v70 = (unsigned int)(v70 - 1);
                      if ( !(_DWORD)v70 )
                        goto LABEL_126;
                    }
                  }
                }
LABEL_119:
                v70 = (unsigned __int64)v186;
                v72 = v79 - v186;
                v88 = 4;
                while ( 1 )
                {
                  v69 = *(unsigned __int8 *)(v70 + v72);
                  v89 = *(unsigned __int8 *)v70++;
                  if ( v69 != v89 )
                    break;
                  if ( !--v88 )
                    goto LABEL_126;
                }
                v70 = (unsigned __int64)v187;
                v72 = 6LL;
                v90 = v79 - v187;
                while ( 1 )
                {
                  v69 = *(unsigned __int8 *)(v70 + v90);
                  v91 = *(unsigned __int8 *)v70++;
                  if ( v69 != v91 )
                    break;
                  v72 = (unsigned int)(v72 - 1);
                  if ( !(_DWORD)v72 )
                    goto LABEL_126;
                }
              }
LABEL_127:
              if ( (int)v76[8] < 0 )
                v78 = 1;
              if ( v78 && *(v76 - 1) == 1414090313 && *v76 == 1195525195 && (*((_DWORD *)v22 + 613) & 0x2000) != 0 )
                v78 = 0;
              v92 = v76[3];
              v41 = v78 == 0;
              if ( v92 <= v76[1] )
                v92 = v76[1];
              v67 = (v92 + 4095 + v76[2]) & 0xFFFFF000;
              v93 = MmImageSectionPagable(v76 - 1, v69, v70, v72);
              v71 = v166;
              v72 = v173;
              v64 = v93 == 0;
              v74 = v164;
              v73 = !v64;
            }
            if ( v41 )
              goto LABEL_141;
          }
LABEL_153:
          v74 += 4096LL;
          v71 += 20;
          v75 += 4096;
          v164 = v74;
          v166 = v71;
          if ( v71 == (_BYTE *)v72 )
          {
            v40 = v171;
            v70 = (unsigned __int64)v195;
            break;
          }
        }
      }
      v98 = (unsigned __int64)v176;
      if ( v176 != (_BYTE *)v72 )
      {
        do
        {
          LODWORD(v99) = 0;
          if ( v98 != v72 )
          {
            v100 = v98;
            do
            {
              if ( *(char *)(v100 + 15) < 0 )
                break;
              v99 = (unsigned int)(v99 + 1);
              v100 = v98 + 20 * v99;
            }
            while ( v100 != v72 );
            v165 = v99;
            if ( (_DWORD)v99 )
            {
              v101 = (char **)*((_QWORD *)v22 + 337);
              v102 = v99;
              v169 = v99;
              v177 = v101;
              v172 = v98;
              v167 = v70;
              do
              {
                v103 = 8LL;
                v104 = 0;
                if ( v102 < 8 )
                  v103 = v102;
                v105 = v167;
                v106 = v193;
                do
                {
                  v101[1] = (char *)4096;
                  v107 = (char *)(v105 + (v104 << 12));
                  *v101 = v107;
                  v108 = v107;
                  *((_DWORD *)v22 + 522) += 4096;
                  v109 = *((_DWORD *)v22 + 517);
                  v200 = *((_QWORD *)v22 + 259);
                  for ( j = v107; j < v107 + 4096; j += 64 )
                    _mm_prefetch(j, 0);
                  v111 = *((_QWORD *)v22 + 259);
                  v112 = v200;
                  v201 = 32;
                  do
                  {
                    v113 = 8LL;
                    do
                    {
                      v114 = *((_QWORD *)v108 + 1) ^ __ROL8__(*(_QWORD *)v108 ^ v112, v109);
                      v108 += 16;
                      v112 = __ROL8__(v114, v109);
                      --v113;
                    }
                    while ( v113 );
                    v115 = __ROL8__(v111 ^ (v108 - v107), 17) ^ v111 ^ (v108 - v107);
                    v190 = (v115 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v109 = ((unsigned __int8)(v190 ^ v115) ^ (unsigned __int8)v109) & 0x3F;
                    if ( !v109 )
                      LOBYTE(v109) = 1;
                    --v201;
                  }
                  while ( v201 );
                  v22 = (_BYTE *)v175;
                  v116 = v112;
                  v105 = v167;
                  while ( 1 )
                  {
                    v116 >>= 31;
                    if ( !v116 )
                      break;
                    LODWORD(v112) = v116 ^ v112;
                  }
                  ++v104;
                  *v106 = v112 & 0x7FFFFFFF;
                  v101 += 6;
                  ++v106;
                }
                while ( v104 < (unsigned int)v103 );
                v117 = v172;
                v118 = v177;
                pg_unknown14(v22, v177, (unsigned int)v103);
                v119 = v193;
                v120 = (unsigned int)v103;
                v121 = (_DWORD *)(v117 + 16);
                v122 = (_QWORD *)v117;
                v123 = (char *)(v118 + 2);
                do
                {
                  v124 = 16;
                  v125 = v123;
                  v126 = v122;
                  v127 = 2LL;
                  do
                  {
                    v124 -= 8;
                    *v126 = *(_QWORD *)v125;
                    v125 += 8;
                    ++v126;
                    --v127;
                  }
                  while ( v127 );
                  for ( ; v124; --v124 )
                  {
                    v128 = *v125++;
                    *(_BYTE *)v126 = v128;
                    v126 = (_QWORD *)((char *)v126 + 1);
                  }
                  v123 += 48;
                  v122 = (_QWORD *)((char *)v122 + 20);
                  v129 = (*v119++ ^ *v121) & 0x7FFFFFFF;
                  *v121 ^= v129;
                  v121 += 5;
                  --v120;
                }
                while ( v120 );
                v22 = (_BYTE *)v175;
                v101 = v177;
                v167 += (unsigned int)((_DWORD)v103 << 12);
                v102 = v169 - v103;
                v172 = v117 + 20 * v103;
                *(_DWORD *)(v175 + 2088) += (_DWORD)v103 << 15;
                v169 = v102;
              }
              while ( v102 );
              LODWORD(v99) = v165;
              v98 = (unsigned __int64)v176;
              v72 = v173;
            }
          }
          for ( k = 5LL * (unsigned int)v99; ; k = 5 * v99 )
          {
            v131 = v98 + 4 * k;
            if ( v131 == v72 || *(char *)(v131 + 15) >= 0 )
              break;
            v99 = (unsigned int)(v99 + 1);
          }
          v70 = (unsigned __int64)&v195[(_DWORD)v99 << 12];
          v195 = (unsigned __int8 *)v70;
          v98 += 20LL * (unsigned int)v99;
          v176 = (_BYTE *)v98;
        }
        while ( v98 != v72 );
        v40 = v171;
      }
      if ( !v197 )
        return 0LL;
      v132 = v168;
      if ( !v168 )
        return 0LL;
      v133 = (_DWORD)v170 != 0;
      LODWORD(v170) = -(int)v170;
      v134 = *((unsigned int *)v22 + 505);
      v135 = *((_DWORD *)v22 + 585);
      v191 = 0LL;
      v136 = v133 + 13;
      v137 = v134 + 48;
      if ( (unsigned int)(v134 + 48) <= *((_DWORD *)v22 + 647) )
      {
        v138 = (__int64)v22;
        *((_DWORD *)v22 + 505) = v137;
LABEL_212:
        ++*(_DWORD *)(v138 + 2060);
        v147 = v138 + v134;
        v148 = 48;
        v192 = v138 + v134;
        v149 = (_QWORD *)(v138 + v134);
        v150 = 6LL;
        do
        {
          *v149 = 0LL;
          v148 -= 8;
          ++v149;
          --v150;
        }
        while ( v150 );
        for ( ; v148; --v148 )
        {
          *(_BYTE *)v149 = 0;
          v149 = (_QWORD *)((char *)v149 + 1);
        }
        *(_DWORD *)v147 = v136;
        *(_QWORD *)(v147 + 8) = v40;
        v151 = (_QWORD *)v40;
        *(_DWORD *)(v147 + 16) = v132;
        *(_DWORD *)(v138 + 2088) += v132;
        v152 = *(_DWORD *)(v138 + 2068);
        if ( v40 < v40 + v132 )
        {
          v153 = (const char *)v40;
          do
          {
            _mm_prefetch(v153, 0);
            v153 += 64;
          }
          while ( (unsigned __int64)v153 < v40 + v132 );
        }
        v154 = *(_QWORD *)(v138 + 2072);
        v155 = (unsigned int)v132 >> 7;
        if ( (unsigned int)v132 >> 7 )
        {
          do
          {
            v156 = 8LL;
            do
            {
              v157 = v151[1] ^ __ROL8__(*v151 ^ v154, v152);
              v151 += 2;
              v154 = __ROL8__(v157, v152);
              --v156;
            }
            while ( v156 );
            v158 = (__ROL8__(*(_QWORD *)(v138 + 2072) ^ ((unsigned __int64)v151 - v40), 17) ^ *(_QWORD *)(v138 + 2072) ^ ((unsigned __int64)v151 - v40))
                 * (unsigned __int128)0x7010008004002001uLL;
            v152 = ((unsigned __int8)v158 ^ (unsigned __int8)(BYTE8(v158) ^ v152)) & 0x3F;
            if ( !v152 )
              LOBYTE(v152) = 1;
            --v155;
          }
          while ( v155 );
          v147 = v138 + v134;
        }
        v159 = v132 & 0x7F;
        if ( v159 >= 8 )
        {
          v160 = (unsigned __int64)(v132 & 0x7F) >> 3;
          do
          {
            v154 = __ROL8__(*v151++ ^ v154, v152);
            v159 -= 8;
            --v160;
          }
          while ( v160 );
        }
        for ( ; v159; --v159 )
        {
          v161 = *(unsigned __int8 *)v151;
          v151 = (_QWORD *)((char *)v151 + 1);
          v154 = __ROL8__(v161 ^ v154, v152);
        }
        for ( m = v154; ; LODWORD(v154) = m ^ v154 )
        {
          m >>= 31;
          if ( !m )
            break;
        }
        *(_DWORD *)(v147 + 20) = v154 & 0x7FFFFFFF;
        *(_DWORD *)(v138 + 2088) += v132;
        if ( (*(_DWORD *)(v138 + 2448) & 0x40000000) != 0 )
        {
          if ( (_DWORD)v132 )
            pg_unknown12(v138, v40, v132, v147 + 28);
        }
        *(_DWORD *)(v147 + 24) = 1;
        *(_QWORD *)a1 = v138;
        return 0LL;
      }
      v138 = pg_unknown7(v22, v137, v135);
      if ( v138 )
      {
        v139 = *((_DWORD *)v22 + 612);
        if ( (v139 & 4) == 0 )
        {
          v140 = *((_DWORD *)v22 + 505);
          v141 = *((_QWORD *)v22 + 249);
          v142 = (v139 & 0x20000000) != 0 ? *((_DWORD *)v22 + 585) : 0;
          if ( v140 >= 8 )
          {
            v143 = (unsigned __int64)v140 >> 3;
            do
            {
              *(_QWORD *)v22 = 0LL;
              v140 -= 8;
              v22 += 8;
              --v143;
            }
            while ( v143 );
          }
          for ( ; v140; --v140 )
            *v22++ = 0;
          v144 = *(_DWORD *)(v138 + 2340);
          *(_DWORD *)(v138 + 2340) = v142;
          if ( v142 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v138 + 872))(v141);
          }
          else
          {
            v145 = 0;
            if ( (*(_DWORD *)(v138 + 2448) & 0x10000000) == 0 )
              v145 = v142;
            if ( v145 )
              (*(void (__fastcall **)(__int64, _QWORD))(v138 + 552))(v141 - 8, *(_QWORD *)(v141 - 8));
            else
              (*(void (__fastcall **)(__int64))(v138 + 256))(v141);
          }
          *(_DWORD *)(v138 + 2340) = v144;
        }
        *(_DWORD *)(v138 + 2448) &= ~4u;
        goto LABEL_212;
      }
      return 3221225626LL;
    }
    if ( (*((_DWORD *)v3 + 612) & 0x200000) == 0 )
    {
      LODWORD(v174) = -805294751;
      KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, a2, 4uLL, 0LL);
    }
    if ( !*((_DWORD *)v3 + 574) )
    {
      *((_QWORD *)v3 + 289) = 0LL;
      *((_QWORD *)v3 + 290) = 271LL;
      *((_QWORD *)v3 + 288) = v3 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v3 + 291) = a2;
      *((_DWORD *)v3 + 574) = 1;
      __b8(v3, 0LL);
    }
  }
  return 3221225595LL;
}