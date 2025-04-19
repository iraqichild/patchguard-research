/* XREFS
Up	p	pg_unknown5_FsRtlMdlReadCompleteDevEx+10C98	call    pg_unknown8
Down	p	pg_unknown8+1E34	call    pg_unknown8
Down	p	pg_main+9CC8	call    pg_unknown8
*/
__int64 __fastcall pg_unknown8(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r15
  int *v5; // r8
  __int64 result; // rax
  int v7; // ecx
  int *v8; // rax
  unsigned __int64 v9; // r9
  _BYTE *v10; // rbx
  unsigned int v11; // r10d
  unsigned int v12; // esi
  _BYTE *v13; // r14
  int v14; // r12d
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  unsigned int v18; // r9d
  _BYTE *v19; // r11
  __int64 v20; // rdi
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r11
  unsigned int v28; // eax
  unsigned int v29; // r12d
  __int64 (__fastcall *v30)(__int64, char *, _QWORD, unsigned __int64); // rax
  __int64 v31; // rax
  unsigned int v32; // r15d
  int v33; // ecx
  int v34; // ecx
  int *v35; // rax
  unsigned int v36; // esi
  unsigned int v37; // edi
  _BYTE *v38; // r14
  int v39; // ecx
  unsigned int v40; // edx
  int v41; // r11d
  _BYTE *v42; // r10
  unsigned int v43; // r9d
  unsigned int **v44; // r8
  __int64 v45; // r11
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rax
  int v51; // eax
  unsigned __int64 v52; // r9
  __int64 v53; // r10
  unsigned int v54; // r15d
  __int64 v55; // rdx
  int v56; // esi
  ULONG_PTR v57; // r14
  __int64 (__fastcall *v58)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v59; // rdx
  __int64 (__fastcall *v60)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 (__fastcall *v63)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v64)(ULONG_PTR); // rax
  __int64 v65; // rdi
  __int64 v66; // rax
  int v67; // r8d
  __int64 v68; // rsi
  int v69; // r9d
  unsigned int v70; // eax
  _BYTE *v71; // rdi
  int v72; // ecx
  unsigned int v73; // eax
  __int64 v74; // r8
  int v75; // edx
  unsigned __int64 v76; // rcx
  int v77; // ebx
  int v78; // ecx
  ULONG_PTR *v79; // r13
  int *v80; // rsi
  int *v81; // rax
  unsigned int *v82; // r14
  __int64 v83; // r12
  __int64 v84; // rdx
  _QWORD *v85; // r11
  int v86; // ecx
  _QWORD *v87; // r9
  const char *v88; // rax
  int v89; // ebx
  __int64 v90; // r15
  unsigned __int64 v91; // r8
  unsigned int v92; // r10d
  __int64 v93; // rax
  __int64 v94; // r8
  unsigned __int128 v95; // rax
  unsigned int v96; // edx
  unsigned __int64 v97; // rax
  __int64 v98; // rax
  unsigned __int64 i; // rax
  bool v100; // zf
  _DWORD *v101; // r14
  ULONG_PTR v102; // rsi
  int v103; // ebx
  char v104; // r13
  __int64 v105; // rdx
  _BYTE *v106; // rdi
  _DWORD *v107; // r14
  unsigned int v108; // r9d
  int v109; // ecx
  _QWORD *v110; // r11
  _DWORD *v111; // r12
  _QWORD *v112; // rax
  _QWORD *v113; // r10
  const char *v114; // rax
  int v115; // esi
  __int64 v116; // r15
  unsigned __int64 v117; // rcx
  ULONG_PTR v118; // r8
  unsigned int v119; // ebx
  __int64 v120; // rdx
  ULONG_PTR v121; // rax
  __int64 v122; // r8
  unsigned __int64 v123; // rcx
  unsigned int v124; // r9d
  unsigned __int64 v125; // rdx
  __int64 v126; // rax
  ULONG_PTR j; // rax
  __int64 v128; // rdx
  _BYTE *v129; // rsi
  int v130; // r13d
  int v131; // r15d
  __int64 v132; // rsi
  unsigned int v133; // eax
  _BYTE *v134; // rbx
  int v135; // ecx
  unsigned int v136; // eax
  __int64 v137; // r8
  int v138; // edx
  unsigned __int64 v139; // rcx
  int v140; // edi
  int v141; // ecx
  int v142; // ecx
  __int64 v143; // rdx
  _QWORD *v144; // rax
  unsigned __int64 v145; // r12
  _QWORD *v146; // r9
  unsigned int v147; // r15d
  int v148; // r11d
  __int64 v149; // rdi
  const char *v150; // rax
  unsigned int v151; // r10d
  __int64 v152; // rax
  __int64 v153; // r8
  unsigned __int128 v154; // rax
  unsigned __int64 v155; // rax
  __int64 v156; // rax
  ULONG_PTR k; // rax
  _BYTE *v158; // r9
  ULONG_PTR v159; // rsi
  BOOL v160; // ecx
  unsigned int v161; // eax
  bool v162; // cf
  __int64 v163; // rdi
  __int64 v164; // rax
  int v165; // ecx
  _QWORD *v166; // rax
  _QWORD *v167; // rax
  __int64 v168; // rax
  unsigned __int16 v169; // r15
  unsigned int v170; // ecx
  unsigned int v171; // r10d
  unsigned int *v172; // rdi
  char *v173; // r13
  unsigned int *v174; // r12
  __int64 v175; // r8
  unsigned int v176; // r15d
  unsigned int v177; // edx
  unsigned int v178; // r15d
  unsigned int v179; // eax
  __int64 v180; // rax
  unsigned int v181; // esi
  unsigned int v182; // r13d
  unsigned int v183; // esi
  unsigned int *v184; // rax
  unsigned int *v185; // r14
  ULONG_PTR v186; // r8
  unsigned int *v187; // rax
  unsigned int v188; // eax
  int v189; // r9d
  _DWORD *v190; // r14
  __int64 v191; // r12
  _BYTE *v192; // rax
  int v193; // ecx
  __int64 v194; // rdi
  unsigned int v195; // eax
  _BYTE *v196; // rsi
  int v197; // edx
  unsigned int v198; // ecx
  __int64 v199; // r9
  int v200; // r8d
  unsigned __int64 v201; // rax
  int v202; // ebx
  int v203; // ecx
  unsigned __int64 v204; // rdx
  _QWORD *v205; // rax
  __int64 v206; // rcx
  int v207; // r8d
  unsigned __int64 v208; // rcx
  unsigned __int64 m; // rax
  ULONG_PTR v210; // rax
  _DWORD *v211; // rdi
  __int64 v212; // rax
  unsigned int *v213; // r9
  __int64 v214; // r11
  unsigned int *v215; // r11
  _DWORD *v216; // r8
  _DWORD *v217; // rax
  __int64 v218; // rcx
  int v219; // r10d
  int v220; // ecx
  __int16 v221; // ax
  char *v222; // rdx
  int v223; // r9d
  __int64 v224; // r8
  char v225; // cl
  char v226; // al
  char *v227; // r8
  unsigned int v228; // edx
  char *v229; // r9
  __int64 v230; // rcx
  __int64 v231; // rax
  char v232; // cl
  char v233; // al
  char *v234; // rdx
  int v235; // r9d
  char v236; // cl
  char v237; // al
  char *v238; // rdx
  int v239; // r9d
  char v240; // cl
  char v241; // al
  int v242; // ecx
  unsigned int v243; // ecx
  __int64 v244; // r14
  unsigned int *v245; // r8
  unsigned int v246; // ecx
  unsigned int v247; // r15d
  unsigned int v248; // r12d
  unsigned int v249; // r13d
  unsigned int *v250; // rcx
  ULONG_PTR v251; // rdi
  unsigned int v252; // r9d
  unsigned int v253; // r8d
  ULONG_PTR *v254; // rdx
  unsigned __int64 v255; // r11
  ULONG_PTR v256; // rbx
  _QWORD *v257; // r10
  int v258; // edi
  const char *v259; // rax
  __int64 v260; // r14
  unsigned int v261; // ebx
  unsigned __int64 v262; // r8
  __int64 v263; // rax
  __int64 v264; // r8
  unsigned __int64 v265; // rcx
  unsigned int v266; // r9d
  unsigned __int64 v267; // rax
  __int64 v268; // rax
  unsigned __int64 n; // rax
  bool v270; // cc
  int v271; // r12d
  unsigned int v272; // r15d
  char *v273; // rax
  char v274; // r8
  __int64 v275; // rbx
  unsigned __int64 v276; // r11
  unsigned int v277; // r9d
  unsigned int *v278; // rcx
  unsigned int v279; // r10d
  unsigned __int64 v280; // rbx
  unsigned __int64 *v281; // rdx
  _QWORD *v282; // r10
  int v283; // edi
  const char *v284; // rax
  __int64 v285; // r14
  unsigned int v286; // ebx
  unsigned __int64 v287; // r8
  __int64 v288; // rax
  __int64 v289; // r8
  unsigned __int64 v290; // rcx
  unsigned int v291; // r9d
  unsigned __int64 v292; // rax
  __int64 v293; // rax
  unsigned __int64 ii; // rax
  unsigned __int64 v295; // rdi
  unsigned __int64 v296; // r11
  unsigned int v297; // r9d
  __int64 v298; // rbx
  unsigned int *v299; // rcx
  unsigned int v300; // r8d
  unsigned __int64 v301; // rbx
  unsigned __int64 *v302; // rdx
  _QWORD *v303; // r10
  int v304; // edi
  const char *v305; // rax
  __int64 v306; // r14
  unsigned int v307; // ebx
  unsigned __int64 v308; // r8
  __int64 v309; // rax
  __int64 v310; // r8
  _QWORD *v311; // r10
  __int64 v312; // r8
  unsigned __int64 v313; // rcx
  unsigned int v314; // r9d
  unsigned __int64 v315; // rax
  __int64 v316; // rax
  unsigned __int64 jj; // rax
  char *v318; // rax
  unsigned int v319; // r15d
  unsigned int v320; // r15d
  __int64 v321; // rsi
  __int64 v322; // rax
  __int64 v323; // rcx
  __int64 v324; // rax
  __int64 v325; // rdi
  __int64 kk; // rbx
  __int64 v327; // rax
  __int64 v328; // rdx
  unsigned int v329; // [rsp+48h] [rbp-C0h]
  unsigned int v330; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B8h]
  unsigned int *v332; // [rsp+58h] [rbp-B0h]
  unsigned int *v333; // [rsp+60h] [rbp-A8h]
  char *v334; // [rsp+68h] [rbp-A0h]
  unsigned int v335; // [rsp+70h] [rbp-98h]
  unsigned int v336; // [rsp+74h] [rbp-94h]
  unsigned __int64 v337; // [rsp+78h] [rbp-90h]
  _BYTE *v338; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v339; // [rsp+88h] [rbp-80h]
  _DWORD *v340; // [rsp+90h] [rbp-78h]
  __int64 v341; // [rsp+98h] [rbp-70h]
  _BYTE *v342; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v343; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v344; // [rsp+B0h] [rbp-58h]
  int v345; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v346; // [rsp+C0h] [rbp-48h]
  int v347; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v348[8]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v349; // [rsp+F0h] [rbp-18h]
  _DWORD v350[6]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int **v351; // [rsp+110h] [rbp+8h]
  __int64 v352; // [rsp+118h] [rbp+10h]
  int v353; // [rsp+120h] [rbp+18h] BYREF
  _DWORD *v354; // [rsp+128h] [rbp+20h]
  int *v355; // [rsp+130h] [rbp+28h]
  char *v356; // [rsp+138h] [rbp+30h]
  char *v357; // [rsp+140h] [rbp+38h]
  char *v358; // [rsp+148h] [rbp+40h]
  char *v359; // [rsp+150h] [rbp+48h]
  ULONG_PTR v360; // [rsp+158h] [rbp+50h] BYREF
  __int64 v361; // [rsp+160h] [rbp+58h]
  __int64 v362; // [rsp+168h] [rbp+60h]
  __int64 v363; // [rsp+170h] [rbp+68h]
  __int64 v364; // [rsp+178h] [rbp+70h]
  __int64 v365; // [rsp+180h] [rbp+78h]
  char v366[8]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v367; // [rsp+190h] [rbp+88h]
  int v368; // [rsp+19Ch] [rbp+94h]
  __int64 v369; // [rsp+1A0h] [rbp+98h]
  __int64 v370; // [rsp+1A8h] [rbp+A0h]
  _BYTE *v371; // [rsp+1B0h] [rbp+A8h]
  __int64 v372; // [rsp+1B8h] [rbp+B0h]
  _BYTE *v373; // [rsp+1C0h] [rbp+B8h]
  __int64 v374; // [rsp+1C8h] [rbp+C0h]
  __int64 v375; // [rsp+1D0h] [rbp+C8h]
  __int64 v376; // [rsp+1D8h] [rbp+D0h]
  char v377[8]; // [rsp+1E0h] [rbp+D8h] BYREF
  ULONG_PTR v378; // [rsp+1E8h] [rbp+E0h]
  unsigned int v379; // [rsp+1F4h] [rbp+ECh]
  _BYTE *v380; // [rsp+1F8h] [rbp+F0h]
  unsigned int v384; // [rsp+270h] [rbp+168h]
  unsigned __int16 v385; // [rsp+270h] [rbp+168h]
  int v386; // [rsp+270h] [rbp+168h]

  v3 = a2;
  v338 = (_BYTE *)*a1;
  v4 = (*((__int64 (__fastcall **)(__int64, char *))v338 + 64))(a2, v366);
  v5 = 0LL;
  v352 = v367;
  if ( !v367 )
    return 3221225595LL;
  v7 = 4;
  v346 = 0LL;
  v8 = &v347;
  v9 = 1LL;
  do
  {
    *(_BYTE *)v8 = 0;
    v8 = (int *)((char *)v8 + 1);
    --v7;
  }
  while ( v7 );
  v10 = v338;
  v11 = 0;
  v12 = *((_DWORD *)v338 + 515);
  if ( v12 )
  {
    v13 = (_BYTE *)*((_QWORD *)v338 + 335);
    v14 = v368;
    v15 = v347;
    v16 = HIDWORD(v346);
    v17 = v346;
    while ( 1 )
    {
      v18 = 0;
      v19 = v13;
      if ( !v13 )
        v19 = v338;
      v5 = (int *)&v19[*((unsigned int *)v19 + 514)];
      if ( v17 && v16 <= v11 )
      {
        v18 = v16;
        v5 = (int *)&v19[v15];
      }
      if ( v18 != v11 )
        break;
LABEL_36:
      v16 = v18;
      LODWORD(v346) = 1;
      v9 = *v5;
      v15 = (_DWORD)v5 - (_DWORD)v19;
      HIDWORD(v346) = v16;
      v347 = (_DWORD)v5 - (_DWORD)v19;
      v17 = 1;
      if ( (unsigned int)v9 > 0x2B
        || (v27 = 0x80000001002LL, !_bittest64(&v27, v9))
        || *((_QWORD *)v5 + 1) != v4
        || v5[4] != v14 )
      {
        v28 = v9 - 33;
        v9 = 1LL;
        if ( v28 > 1 || *((_QWORD *)v5 + 4) != v352 )
        {
          ++v11;
          v5 = 0LL;
          if ( v11 < v12 )
            continue;
        }
      }
      goto LABEL_43;
    }
    v20 = v11 - v18;
    v18 = v11;
    while ( 1 )
    {
      v21 = *v5;
      if ( *v5 > 12 )
        break;
      if ( v21 == 12 )
        goto LABEL_28;
      v22 = v21 - 1;
      if ( !v22 )
        goto LABEL_28;
      v23 = v22 - 6;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( !v24 )
        {
          v26 = *((unsigned __int16 *)v5 + 16);
LABEL_33:
          v25 = (v26 + 55) & 0xFFFFFFF8;
          goto LABEL_34;
        }
        if ( v24 != 2 )
          goto LABEL_30;
        v25 = (unsigned int)(16 * (v5[7] + 3));
      }
      else
      {
        v25 = (unsigned int)(24 * (v5[6] + 2));
      }
LABEL_34:
      v5 = (int *)((char *)v5 + v25);
      if ( !--v20 )
      {
        v14 = v368;
        v3 = a2;
        goto LABEL_36;
      }
    }
    if ( v21 == 28 )
    {
      v26 = *((unsigned __int16 *)v5 + 20);
      goto LABEL_33;
    }
    if ( v21 == 30 )
    {
      v25 = (((v5[9] != 0 ? v5[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v5 + 20) + 2);
      goto LABEL_34;
    }
    if ( v21 <= 32 )
    {
LABEL_30:
      v25 = 48LL;
      goto LABEL_34;
    }
    if ( v21 <= 34 )
    {
      v25 = 20 * (unsigned int)(((v5[8] & 0xFFF) + (unsigned __int64)(unsigned int)v5[10] + 4095) >> 12) + 48;
      goto LABEL_34;
    }
    if ( v21 != 43 )
      goto LABEL_30;
LABEL_28:
    v25 = 4 * (v5[4] / 0xCu) + 48;
    goto LABEL_34;
  }
LABEL_43:
  if ( v5 )
    return 3221225742LL;
  v29 = a3;
  v30 = (__int64 (__fastcall *)(__int64, char *, _QWORD, unsigned __int64))*((_QWORD *)v338 + 64);
  v384 = a3;
  v342 = v338;
  v31 = v30(v3, v377, 0LL, v9);
  v32 = v379;
  v333 = (unsigned int *)v31;
  v330 = v379;
  BugCheckParameter2 = v378;
  if ( !v378 )
    goto LABEL_46;
  v34 = 4;
  v344 = 0LL;
  v35 = &v345;
  do
  {
    *(_BYTE *)v35 = 0;
    v35 = (int *)((char *)v35 + 1);
    --v34;
  }
  while ( v34 );
  v36 = *((_DWORD *)v10 + 515);
  v37 = 0;
  if ( v36 )
  {
    v38 = (_BYTE *)*((_QWORD *)v10 + 335);
    v39 = v345;
    v40 = HIDWORD(v344);
    v41 = v344;
    while ( 1 )
    {
      v42 = v38;
      v43 = 0;
      if ( !v38 )
        v42 = v10;
      v44 = (unsigned int **)&v42[*((unsigned int *)v42 + 514)];
      if ( v41 && v40 <= v37 )
      {
        v43 = v40;
        v44 = (unsigned int **)&v42[v39];
      }
      if ( v43 != v37 )
        break;
LABEL_80:
      v40 = v43;
      LODWORD(v344) = 1;
      v52 = *(int *)v44;
      v39 = (_DWORD)v44 - (_DWORD)v42;
      HIDWORD(v344) = v40;
      v345 = (_DWORD)v44 - (_DWORD)v42;
      v41 = 1;
      if ( (unsigned int)v52 <= 0x2B )
      {
        v53 = 0x80000001002LL;
        if ( _bittest64(&v53, v52) )
        {
          if ( v44[1] == v333 && *((_DWORD *)v44 + 4) == v32 )
            goto LABEL_88;
        }
      }
      if ( (unsigned int)(v52 - 33) <= 1 && v44[4] == (unsigned int *)BugCheckParameter2 )
        goto LABEL_88;
      if ( ++v37 >= v36 )
        goto LABEL_87;
    }
    v45 = v37 - v43;
    v43 = v37;
    while ( 1 )
    {
      v46 = *(_DWORD *)v44;
      if ( *(int *)v44 > 12 )
        break;
      if ( v46 == 12 )
        goto LABEL_72;
      v47 = v46 - 1;
      if ( !v47 )
        goto LABEL_72;
      v48 = v47 - 6;
      if ( v48 )
      {
        v49 = v48 - 1;
        if ( !v49 )
        {
          v51 = *((unsigned __int16 *)v44 + 16);
LABEL_77:
          v50 = (v51 + 55) & 0xFFFFFFF8;
          goto LABEL_78;
        }
        if ( v49 != 2 )
          goto LABEL_74;
        v50 = (unsigned int)(16 * (*((_DWORD *)v44 + 7) + 3));
      }
      else
      {
        v50 = (unsigned int)(24 * (*((_DWORD *)v44 + 6) + 2));
      }
LABEL_78:
      v44 = (unsigned int **)((char *)v44 + v50);
      if ( !--v45 )
      {
        v3 = a2;
        v29 = a3;
        goto LABEL_80;
      }
    }
    if ( v46 == 28 )
    {
      v51 = *((unsigned __int16 *)v44 + 20);
      goto LABEL_77;
    }
    if ( v46 == 30 )
    {
      v50 = (((*((_DWORD *)v44 + 9) != 0 ? *((_DWORD *)v44 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
          + 24 * (*((unsigned __int16 *)v44 + 20) + 2);
      goto LABEL_78;
    }
    if ( v46 <= 32 )
    {
LABEL_74:
      v50 = 48LL;
      goto LABEL_78;
    }
    if ( v46 <= 34 )
    {
      v50 = 20 * (unsigned int)((((_DWORD)v44[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v44 + 10) + 4095) >> 12)
          + 48;
      goto LABEL_78;
    }
    if ( v46 != 43 )
      goto LABEL_74;
LABEL_72:
    v50 = 4 * (*((_DWORD *)v44 + 4) / 0xCu) + 48;
    goto LABEL_78;
  }
LABEL_87:
  v44 = 0LL;
LABEL_88:
  v351 = v44;
  if ( v44 )
  {
    v33 = -1073741554;
    goto LABEL_476;
  }
  v54 = a3;
  v56 = (*((__int64 (__fastcall **)(__int64))v10 + 85))(v3);
  LODWORD(v334) = v56;
  v336 = v330;
  if ( (a3 & 0x10) != 0 && (*((_DWORD *)v10 + 613) & 0x400) == 0 )
  {
    v29 = a3 & 0xFFFFFFEF;
    v384 = a3 & 0xFFFFFFEF;
  }
  v57 = BugCheckParameter2;
  if ( (v29 & 0x10) != 0 && !(unsigned int)pg_unknown9(v10, BugCheckParameter2) )
  {
    v29 &= ~0x10u;
    v384 = v29;
  }
  if ( (v29 & 2) == 0 || v56 )
  {
    if ( (*((_DWORD *)v10 + 612) & 0x40000000) != 0 )
    {
      v33 = pg_unknown13(&v338, BugCheckParameter2, v29);
      goto LABEL_477;
    }
    v58 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))*((_QWORD *)v10 + 62);
    v364 = 0LL;
    v350[4] = 0;
    LOBYTE(v55) = 1;
    v361 = v58(BugCheckParameter2, v55, 0LL, &v330);
    v59 = v361 != 0 ? v330 : 0;
    v330 = v59;
    v60 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 62);
    v350[1] = v59;
    LOBYTE(v59) = 1;
    v61 = v60(v57, v59, 12LL, &v330);
    v62 = v61;
    v339 = (unsigned int *)v61;
    v362 = v61;
    LOBYTE(v62) = 1;
    v330 &= -(v61 != 0);
    v63 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v10 + 62);
    v329 = v330;
    v350[2] = v330;
    v363 = v63(v57, v62, 10LL, &v330);
    v330 &= -(v363 != 0);
    v64 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v10 + 63);
    v350[3] = v330;
    v65 = v64(v57);
    if ( !v65 )
    {
      v33 = -1073741701;
      goto LABEL_477;
    }
    v66 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v10 + 147))(v57, &v353);
    v67 = *((_DWORD *)v10 + 585);
    v365 = v66;
    v350[5] = v353;
    v350[0] = *(_DWORD *)(v65 + 84);
    LODWORD(v66) = v56;
    v68 = *((unsigned int *)v10 + 505);
    v360 = v57;
    v69 = (_DWORD)v66 != 0 ? 0xB : 0;
    v70 = v68 + 288;
    LODWORD(v332) = v69;
    if ( (unsigned int)(v68 + 288) <= *((_DWORD *)v10 + 647) )
    {
      v71 = v10;
      v341 = (__int64)v10;
      *((_DWORD *)v10 + 505) = v70;
    }
    else
    {
      v341 = pg_unknown7(v10, v70, v67);
      v71 = (_BYTE *)v341;
      if ( !v341 )
      {
        v33 = -1073741670;
        goto LABEL_477;
      }
      v72 = *((_DWORD *)v10 + 612);
      if ( (v72 & 4) == 0 )
      {
        v73 = *((_DWORD *)v10 + 505);
        v74 = *((_QWORD *)v10 + 249);
        v75 = (v72 & 0x20000000) != 0 ? *((_DWORD *)v10 + 585) : 0;
        if ( v73 >= 8 )
        {
          v76 = (unsigned __int64)v73 >> 3;
          do
          {
            *(_QWORD *)v10 = 0LL;
            v73 -= 8;
            v10 += 8;
            --v76;
          }
          while ( v76 );
        }
        for ( ; v73; --v73 )
          *v10++ = 0;
        v77 = *((_DWORD *)v71 + 585);
        *((_DWORD *)v71 + 585) = v75;
        if ( v75 == 3 )
        {
          (*((void (__fastcall **)(__int64))v71 + 109))(v74);
        }
        else
        {
          v78 = 0;
          if ( (*((_DWORD *)v71 + 612) & 0x10000000) == 0 )
            v78 = v75;
          if ( v78 )
            (*((void (__fastcall **)(__int64, _QWORD))v71 + 69))(v74 - 8, *(_QWORD *)(v74 - 8));
          else
            (*((void (__fastcall **)(__int64))v71 + 32))(v74);
        }
        *((_DWORD *)v71 + 585) = v77;
      }
      *((_DWORD *)v71 + 612) &= ~4u;
      v69 = (int)v332;
    }
    *((_DWORD *)v71 + 515) += 6;
    v79 = &v360;
    v80 = (int *)&v71[v68];
    v340 = v80;
    v355 = v80;
    v351 = (unsigned int **)v80;
    v81 = v80;
    v82 = v350;
    v337 = 6LL;
    do
    {
      v83 = *v82;
      v84 = 6LL;
      v85 = (_QWORD *)*v79;
      v86 = 48;
      do
      {
        *(_QWORD *)v81 = 0LL;
        v86 -= 8;
        v81 += 2;
        --v84;
      }
      while ( v84 );
      for ( ; v86; --v86 )
      {
        *(_BYTE *)v81 = 0;
        v81 = (int *)((char *)v81 + 1);
      }
      *v80 = v69;
      *((_QWORD *)v80 + 1) = v85;
      v87 = v85;
      v80[4] = v83;
      v88 = (const char *)v85;
      *((_DWORD *)v71 + 522) += v83;
      v89 = *((_DWORD *)v71 + 517);
      v90 = *((_QWORD *)v71 + 259);
      if ( v85 < (_QWORD *)((char *)v85 + v83) )
      {
        do
        {
          _mm_prefetch(v88, 0);
          v88 += 64;
        }
        while ( v88 < (const char *)v85 + v83 );
      }
      v91 = *((_QWORD *)v71 + 259);
      v92 = (unsigned int)v83 >> 7;
      if ( (unsigned int)v83 >> 7 )
      {
        do
        {
          v93 = 8LL;
          do
          {
            v94 = v87[1] ^ __ROL8__(*v87 ^ v91, v89);
            v87 += 2;
            v91 = __ROL8__(v94, v89);
            --v93;
          }
          while ( v93 );
          v95 = (__ROL8__(v90 ^ ((char *)v87 - (char *)v85), 17) ^ v90 ^ (unsigned __int64)((char *)v87 - (char *)v85))
              * (unsigned __int128)0x7010008004002001uLL;
          v369 = *((_QWORD *)&v95 + 1);
          v89 = (BYTE8(v95) ^ (unsigned __int8)(v95 ^ v89)) & 0x3F;
          if ( !v89 )
            LOBYTE(v89) = 1;
          --v92;
        }
        while ( v92 );
        v71 = (_BYTE *)v341;
      }
      v96 = v83 & 0x7F;
      if ( v96 >= 8 )
      {
        v97 = (unsigned __int64)(v83 & 0x7F) >> 3;
        do
        {
          v91 = __ROL8__(*v87++ ^ v91, v89);
          v96 -= 8;
          --v97;
        }
        while ( v97 );
      }
      for ( ; v96; --v96 )
      {
        v98 = *(unsigned __int8 *)v87;
        v87 = (_QWORD *)((char *)v87 + 1);
        v91 = __ROL8__(v98 ^ v91, v89);
      }
      for ( i = v91; ; LODWORD(v91) = i ^ v91 )
      {
        i >>= 31;
        if ( !i )
          break;
      }
      v69 = (int)v332;
      ++v82;
      v80[5] = v91 & 0x7FFFFFFF;
      ++v79;
      *((_DWORD *)v71 + 522) += v83;
      v80 += 12;
      v100 = v337-- == 1;
      v81 = v80;
      v355 = v80;
    }
    while ( !v100 );
    v101 = v340;
    v102 = BugCheckParameter2;
    v103 = (int)v334;
    *v340 = 44;
    *((_QWORD *)v101 + 3) = v102;
    if ( (*((_DWORD *)v71 + 612) & 0x10200000) == 0 )
    {
      if ( v103 )
      {
LABEL_151:
        v101[8] |= 2u;
        goto LABEL_152;
      }
      if ( (*((_DWORD *)v71 + 613) & 0x8000) == 0 || (v101[8] |= 1u, !(unsigned int)pg_unknown9(v71, v102)) )
      {
LABEL_152:
        v104 = v384;
        v342 = v71;
        v338 = v71;
        v33 = pg_unknown10((unsigned int)&v342, (_DWORD)v333, v336, v102, v103, v384, (__int64)&v343, (__int64)v348);
        if ( v33 < 0 )
          goto LABEL_476;
        v105 = 6LL;
        v106 = v342;
        v107 = &v342[(char *)v101 - v338];
        v108 = v348[0] - v343;
        v109 = 48;
        v340 = v107;
        v110 = (_QWORD *)(v102 + v343);
        v111 = v107 + 48;
        v351 = (unsigned int **)v107;
        v112 = v107 + 48;
        v338 = v342;
        do
        {
          *v112 = 0LL;
          v109 -= 8;
          ++v112;
          --v105;
        }
        while ( v105 );
        for ( ; v109; --v109 )
        {
          *(_BYTE *)v112 = 0;
          v112 = (_QWORD *)((char *)v112 + 1);
        }
        v113 = v110;
        *v111 = (_DWORD)v332;
        v114 = (const char *)v110;
        *((_QWORD *)v107 + 25) = v110;
        v107[52] = v108;
        *((_DWORD *)v106 + 522) += v108;
        v115 = *((_DWORD *)v106 + 517);
        v116 = *((_QWORD *)v106 + 259);
        v117 = (unsigned __int64)v110 + v108;
        if ( (unsigned __int64)v110 < v117 )
        {
          do
          {
            _mm_prefetch(v114, 0);
            v114 += 64;
          }
          while ( (unsigned __int64)v114 < v117 );
        }
        v118 = *((_QWORD *)v106 + 259);
        v119 = v108 >> 7;
        if ( v108 >> 7 )
        {
          do
          {
            v120 = 8LL;
            do
            {
              v121 = v118 ^ *v113;
              v122 = v113[1];
              v113 += 2;
              v118 = __ROL8__(__ROL8__(v121, v115) ^ v122, v115);
              --v120;
            }
            while ( v120 );
            v123 = __ROL8__(v116 ^ ((char *)v113 - (char *)v110), 17) ^ v116 ^ ((char *)v113 - (char *)v110);
            v370 = (v123 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v115 = ((unsigned __int8)(v370 ^ v123) ^ (unsigned __int8)v115) & 0x3F;
            if ( !v115 )
              LOBYTE(v115) = 1;
            --v119;
          }
          while ( v119 );
          v104 = v384;
          v111 = v107 + 48;
        }
        v124 = v108 & 0x7F;
        if ( v124 >= 8 )
        {
          v125 = (unsigned __int64)v124 >> 3;
          do
          {
            v118 = __ROL8__(*v113++ ^ v118, v115);
            v124 -= 8;
            --v125;
          }
          while ( v125 );
          v104 = v384;
        }
        for ( ; v124; --v124 )
        {
          v126 = *(unsigned __int8 *)v113;
          v113 = (_QWORD *)((char *)v113 + 1);
          v118 = __ROL8__(v126 ^ v118, v115);
        }
        for ( j = v118; ; v118 = (unsigned int)j ^ (unsigned int)v118 )
        {
          j >>= 31;
          if ( !j )
            break;
        }
        v128 = (unsigned int)v334;
        LODWORD(v118) = v118 & 0x7FFFFFFF;
        v111[5] = v118;
        v107[60] = 48;
        if ( v107[64] )
          v107[66] = v107[66] & 0xFFFFFFFE | ((_DWORD)v128 != 0);
        v129 = v107 + 24;
        v338 = v106;
        v354 = v107 + 24;
        v130 = v104 & 1;
        v131 = ((_DWORD)v128 != 0) + 13;
        if ( v107 == (_DWORD *)-96LL )
        {
          v132 = *((unsigned int *)v106 + 505);
          v133 = v132 + 48;
          if ( (unsigned int)(v132 + 48) <= *((_DWORD *)v106 + 647) )
          {
            v134 = v106;
            *((_DWORD *)v106 + 505) = v133;
          }
          else
          {
            v134 = (_BYTE *)pg_unknown7(v106, v133, *((_DWORD *)v106 + 585));
            if ( !v134 )
              goto LABEL_195;
            v135 = *((_DWORD *)v106 + 612);
            if ( (v135 & 4) == 0 )
            {
              v136 = *((_DWORD *)v106 + 505);
              v137 = *((_QWORD *)v106 + 249);
              v138 = (v135 & 0x20000000) != 0 ? *((_DWORD *)v106 + 585) : 0;
              if ( v136 >= 8 )
              {
                v139 = (unsigned __int64)v136 >> 3;
                do
                {
                  *(_QWORD *)v106 = 0LL;
                  v136 -= 8;
                  v106 += 8;
                  --v139;
                }
                while ( v139 );
              }
              for ( ; v136; --v136 )
                *v106++ = 0;
              v140 = *((_DWORD *)v134 + 585);
              *((_DWORD *)v134 + 585) = v138;
              if ( v138 == 3 )
              {
                (*((void (__fastcall **)(__int64))v134 + 109))(v137);
              }
              else
              {
                v141 = 0;
                if ( (*((_DWORD *)v134 + 612) & 0x10000000) == 0 )
                  v141 = v138;
                if ( v141 )
                  (*((void (__fastcall **)(__int64, _QWORD))v134 + 69))(v137 - 8, *(_QWORD *)(v137 - 8));
                else
                  (*((void (__fastcall **)(__int64))v134 + 32))(v137);
              }
              *((_DWORD *)v134 + 585) = v140;
            }
            *((_DWORD *)v134 + 612) &= ~4u;
          }
          ++*((_DWORD *)v134 + 515);
          v142 = 48;
          v129 = &v134[v132];
          v143 = 6LL;
          v371 = v129;
          v144 = v129;
          do
          {
            *v144 = 0LL;
            v142 -= 8;
            ++v144;
            --v143;
          }
          while ( v143 );
          for ( ; v142; --v142 )
          {
            *(_BYTE *)v144 = 0;
            v144 = (_QWORD *)((char *)v144 + 1);
          }
          v145 = (unsigned __int64)v339;
          *(_DWORD *)v129 = v131;
          v146 = (_QWORD *)v145;
          v147 = v329;
          *((_QWORD *)v129 + 1) = v145;
          *((_DWORD *)v129 + 4) = v329;
          *((_DWORD *)v134 + 522) += v329;
          v148 = *((_DWORD *)v134 + 517);
          v149 = *((_QWORD *)v134 + 259);
          if ( v145 < v145 + v329 )
          {
            v150 = (const char *)v145;
            do
            {
              _mm_prefetch(v150, 0);
              v150 += 64;
            }
            while ( (unsigned __int64)v150 < v145 + v329 );
          }
          v118 = *((_QWORD *)v134 + 259);
          v151 = v329 >> 7;
          if ( v329 >> 7 )
          {
            do
            {
              v152 = 8LL;
              do
              {
                v153 = v146[1] ^ __ROL8__(*v146 ^ v118, v148);
                v146 += 2;
                v118 = __ROL8__(v153, v148);
                --v152;
              }
              while ( v152 );
              v154 = (__ROL8__(v149 ^ ((unsigned __int64)v146 - v145), 17) ^ v149 ^ ((unsigned __int64)v146 - v145))
                   * (unsigned __int128)0x7010008004002001uLL;
              v372 = *((_QWORD *)&v154 + 1);
              v148 = (BYTE8(v154) ^ (unsigned __int8)(v154 ^ v148)) & 0x3F;
              if ( !v148 )
                LOBYTE(v148) = 1;
              --v151;
            }
            while ( v151 );
            v107 = v340;
            v147 = v329;
          }
          v128 = v147 & 0x7F;
          if ( (unsigned int)v128 >= 8 )
          {
            v155 = (unsigned __int64)(v147 & 0x7F) >> 3;
            do
            {
              v118 = __ROL8__(*v146++ ^ v118, v148);
              v128 = (unsigned int)(v128 - 8);
              --v155;
            }
            while ( v155 );
          }
          if ( (_DWORD)v128 )
          {
            do
            {
              v156 = *(unsigned __int8 *)v146;
              v146 = (_QWORD *)((char *)v146 + 1);
              v118 = __ROL8__(v156 ^ v118, v148);
              v100 = (_DWORD)v128 == 1;
              v128 = (unsigned int)(v128 - 1);
            }
            while ( !v100 );
          }
          for ( k = v118 >> 31; k; k >>= 31 )
            v118 = (unsigned int)k ^ (unsigned int)v118;
          LODWORD(v118) = v118 & 0x7FFFFFFF;
          v354 = v129;
          *((_DWORD *)v129 + 5) = v118;
          *((_DWORD *)v134 + 522) += v147;
        }
        else
        {
          v145 = (unsigned __int64)v339;
          v134 = v106;
          *(_DWORD *)v129 = v131;
          v147 = v329;
        }
        v158 = v129;
        if ( (*((_DWORD *)v134 + 612) & 0x40000000) != 0 && v147 )
          pg_unknown12((__int64)v134, v145, v147, (__int64)(v129 + 28));
        *((_DWORD *)v129 + 6) = 0;
        if ( v130 )
          *((_DWORD *)v129 + 6) = 1;
        v159 = BugCheckParameter2;
        v338 = v134;
        v160 = (_DWORD)v334 != 0;
        v161 = v107[46] & 0xFFFFFFFE;
        v107[36] = 35;
        v162 = v107[40] < 0x94u;
        v107[46] = v161 | v160;
        if ( v162 )
        {
LABEL_234:
          v100 = (*((_DWORD *)v134 + 612) & 0x400000) == 0;
          v342 = v134;
          if ( !v100 )
          {
            v168 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v134 + 63))(
                     v159,
                     v128,
                     v118,
                     v158);
            v340 = (_DWORD *)v168;
            if ( !v168 )
            {
LABEL_46:
              v33 = -1073741701;
LABEL_476:
              v54 = a3;
              goto LABEL_477;
            }
            v169 = *(_WORD *)(v168 + 6);
            v385 = v169;
            v337 = v336 / 0xCuLL;
            if ( !v169 )
            {
              if ( (*((_DWORD *)v134 + 612) & 0x200000) == 0 )
              {
                v348[1] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v159, 0LL, 0LL);
              }
              if ( !*((_DWORD *)v134 + 574) )
              {
                *((_DWORD *)v134 + 574) = 1;
LABEL_240:
                *((_QWORD *)v134 + 288) = v134 - 0x5C5FC0A76E374B18LL;
LABEL_241:
                *((_QWORD *)v134 + 289) = 0LL;
                *((_QWORD *)v134 + 290) = 271LL;
                *((_QWORD *)v134 + 291) = v159;
                __b8(v134, 0LL);
              }
              goto LABEL_46;
            }
            v170 = 0;
            v171 = v169;
            v172 = v333;
            v329 = 0;
            LODWORD(v332) = v169;
            v349 = 12LL * (v336 / 0xC);
            v339 = (unsigned int *)((char *)v333 + v349);
            v341 = *(unsigned __int16 *)(v168 + 20) + v168 + 24;
            v173 = (char *)v341;
            v174 = (unsigned int *)(v341 + 8);
            v175 = 1LL;
            do
            {
              v176 = v174[2];
              v177 = v174[1];
              if ( v176 <= *v174 )
                v176 = *v174;
              v335 = v174[1];
              v178 = v177 + v176;
              if ( v170 )
              {
                if ( v178 < *(_DWORD *)&v173[40 * v170 - 28] )
                {
                  if ( (*((_DWORD *)v134 + 612) & 0x200000) == 0 )
                  {
                    v348[2] = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v159, 1uLL, 0LL);
                  }
                  if ( !*((_DWORD *)v134 + 574) )
                  {
                    *((_DWORD *)v134 + 574) = 1;
                    goto LABEL_240;
                  }
                  goto LABEL_46;
                }
                v170 = v329;
              }
              if ( v172 != v339 )
              {
                while ( 1 )
                {
                  v179 = v172[1];
                  if ( *v172 >= v178 || v179 <= v177 )
                  {
LABEL_270:
                    v170 = v329;
                    v175 = 1LL;
                    v171 = (unsigned int)v332;
                    v173 = (char *)v341;
                    goto LABEL_271;
                  }
                  if ( *v172 < v177 || v179 > v178 )
                    break;
                  v180 = v172[2];
                  if ( (v180 & 1) != 0 || (*(_BYTE *)(v180 + v159) & 0x20) != 0 )
                  {
                    v181 = v174[2];
                    v182 = v174[1];
                    if ( v181 <= *v174 )
                      v181 = *v174;
                    v183 = v182 + v181;
                    v184 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, __int64))v134 + 131))(
                                             v172,
                                             BugCheckParameter2,
                                             v175);
                    v185 = v184;
                    if ( *v184 < v182 || v184[1] > v183 )
                    {
                      v186 = BugCheckParameter2;
                      if ( (*((_DWORD *)v134 + 612) & 0x200000) == 0 )
                      {
                        v348[4] = -805294751;
                        KeBugCheckEx(
                          __ROR4__(-805306349, 92),
                          0xAuLL,
                          BugCheckParameter2,
                          ((_DWORD)v184 - (_DWORD)BugCheckParameter2) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v134 + 574) )
                      {
                        *((_QWORD *)v134 + 289) = 0LL;
                        *((_QWORD *)v134 + 290) = 271LL;
                        *((_QWORD *)v134 + 288) = v134 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v134 + 291) = v186;
                        *((_DWORD *)v134 + 574) = 1;
                        __b8(v134, 0LL);
                      }
                    }
                    v187 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v134 + 132))(
                                             v185,
                                             BugCheckParameter2,
                                             BugCheckParameter2 + *v185);
                    if ( *v187 >= v182 && v187[1] <= v183 )
                    {
                      v159 = BugCheckParameter2;
                    }
                    else
                    {
                      v159 = BugCheckParameter2;
                      v188 = ((_DWORD)v187 - BugCheckParameter2) | 0x80000000;
                      if ( (*((_DWORD *)v134 + 612) & 0x200000) == 0 )
                      {
                        v348[3] = -805294751;
                        KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, v188, 0LL);
                      }
                      if ( !*((_DWORD *)v134 + 574) )
                      {
                        *((_QWORD *)v134 + 289) = 0LL;
                        *((_QWORD *)v134 + 290) = 271LL;
                        *((_QWORD *)v134 + 288) = v134 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v134 + 291) = v159;
                        *((_DWORD *)v134 + 574) = 1;
                        __b8(v134, 0LL);
                      }
                    }
                    v177 = v335;
                  }
                  v172 += 3;
                  if ( v172 == v339 )
                    goto LABEL_270;
                }
                if ( (*((_DWORD *)v134 + 612) & 0x200000) == 0 )
                {
                  v348[5] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v159, 2uLL, 0LL);
                }
                if ( !*((_DWORD *)v134 + 574) )
                {
                  v192 = v134 - 0x5C5FC0A76E374B18LL;
LABEL_281:
                  *((_QWORD *)v134 + 288) = v192;
                  *((_DWORD *)v134 + 574) = 1;
                  goto LABEL_241;
                }
                goto LABEL_46;
              }
LABEL_271:
              ++v170;
              v174 += 10;
              v329 = v170;
            }
            while ( v170 < v171 );
            v189 = v337;
            v190 = v340;
            v191 = v349;
            if ( v172 != v339 )
            {
              if ( (*((_DWORD *)v134 + 612) & 0x200000) == 0 )
              {
                v348[6] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v159, 3uLL, 0LL);
              }
              if ( !*((_DWORD *)v134 + 574) )
              {
                v192 = v134 - 0x5C5FC0A76E374B18LL;
                goto LABEL_281;
              }
              goto LABEL_46;
            }
            if ( (_DWORD)v337 )
              v193 = (v337 + 6) & 0xFFFFFFF8;
            else
              v193 = 0;
            v194 = *((unsigned int *)v134 + 505);
            v195 = v193 + 24 * v171 + v194 + 48;
            if ( v195 <= *((_DWORD *)v134 + 647) )
            {
              v196 = v134;
              v340 = v134;
              *((_DWORD *)v134 + 505) = v195;
            }
            else
            {
              v340 = (_DWORD *)pg_unknown7(v134, v195, *((_DWORD *)v134 + 585));
              v196 = v340;
              if ( !v340 )
                goto LABEL_195;
              v197 = *((_DWORD *)v134 + 612);
              if ( (v197 & 4) == 0 )
              {
                v198 = *((_DWORD *)v134 + 505);
                v199 = *((_QWORD *)v134 + 249);
                v200 = (v197 & 0x20000000) != 0 ? *((_DWORD *)v134 + 585) : 0;
                if ( v198 >= 8 )
                {
                  v201 = (unsigned __int64)v198 >> 3;
                  do
                  {
                    *(_QWORD *)v134 = 0LL;
                    v198 -= 8;
                    v134 += 8;
                    --v201;
                  }
                  while ( v201 );
                }
                for ( ; v198; --v198 )
                  *v134++ = 0;
                v202 = *((_DWORD *)v196 + 585);
                *((_DWORD *)v196 + 585) = v200;
                if ( v200 == 3 )
                {
                  (*((void (__fastcall **)(__int64, __int64))v196 + 109))(v199, 1LL);
                }
                else
                {
                  v203 = 0;
                  if ( (*((_DWORD *)v196 + 612) & 0x10000000) == 0 )
                    v203 = v200;
                  if ( v203 )
                    (*((void (__fastcall **)(__int64, _QWORD))v196 + 69))(v199 - 8, *(_QWORD *)(v199 - 8));
                  else
                    (*((void (__fastcall **)(__int64, __int64))v196 + 32))(v199, 1LL);
                }
                *((_DWORD *)v196 + 585) = v202;
              }
              *((_DWORD *)v196 + 612) &= ~4u;
              v189 = v337;
              v171 = (unsigned int)v332;
            }
            v204 = (unsigned __int64)&v196[v194];
            ++*((_DWORD *)v196 + 515);
            v205 = &v196[v194];
            v373 = &v196[v194];
            v206 = 6LL;
            v207 = 48;
            do
            {
              *v205 = 0LL;
              v207 -= 8;
              ++v205;
              --v206;
            }
            while ( v206 );
            for ( ; v207; --v207 )
            {
              *(_BYTE *)v205 = 0;
              v205 = (_QWORD *)((char *)v205 + 1);
            }
            *(_QWORD *)(v204 + 8) = v333;
            *(_DWORD *)v204 = 30;
            *(_DWORD *)(v204 + 16) = 0;
            v208 = *((_QWORD *)v196 + 259);
            for ( m = v208; ; LODWORD(v208) = m ^ v208 )
            {
              m >>= 31;
              if ( !m )
                break;
            }
            v210 = BugCheckParameter2;
            v100 = (_DWORD)v334 == 0;
            *(_DWORD *)(v204 + 20) = v208 & 0x7FFFFFFF;
            v134 = v196;
            *(_QWORD *)(v204 + 24) = v210;
            *(_DWORD *)(v204 + 32) = v190[20];
            *(_DWORD *)(v204 + 36) = v336;
            *(_WORD *)(v204 + 40) = v385;
            LOWORD(v210) = *(_WORD *)(v204 + 42) & 0xFFFE;
            v380 = &v196[v194];
            v342 = v196;
            *(_WORD *)(v204 + 42) = v210 | !v100;
            v334 = (char *)(v204 + 48);
            if ( v189 )
              v211 = (_DWORD *)(v204 + 48 + (((unsigned int)(v189 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            else
              v211 = (_DWORD *)(v204 + 48);
            v212 = *(unsigned __int16 *)(v204 + 40);
            LODWORD(v204) = 0;
            v100 = v189 == 0;
            v337 = (unsigned __int64)v211;
            v213 = v333;
            v214 = 12LL;
            if ( v100 )
              v214 = v191;
            v215 = (unsigned int *)((char *)v333 + v214);
            v216 = &v211[6 * v212];
            v349 = (__int64)v216;
            v332 = v215;
            if ( v171 )
            {
              v204 = v171;
              v217 = v211 + 2;
              do
              {
                v218 = 2LL;
                do
                {
                  *((_QWORD *)v217 - 1) = 0LL;
                  *v217 = 0x80000000;
                  v217 += 3;
                  --v218;
                }
                while ( v218 );
                --v204;
              }
              while ( v204 );
            }
            if ( v211 != v216 )
            {
              do
              {
                v219 = v204;
                if ( (*((_DWORD *)v173 + 9) & 0x2000000) != 0
                  || (v220 = *(_DWORD *)v173, *(_DWORD *)v173 == 1414090313) && *((_DWORD *)v173 + 1) == 1195525195
                  || v220 == 1162297680
                  && ((v221 = *((_WORD *)v173 + 2), v221 == 30839) || v221 == 29303 || v221 == 30583)
                  || v220 == 1095914053 && *((_WORD *)v173 + 2) == 16724 )
                {
                  v219 = 1;
                }
                else
                {
                  v222 = (char *)*((_QWORD *)v196 + 294);
                  v223 = 7;
                  v357 = (char *)*((_QWORD *)v196 + 295);
                  v224 = v173 - v222;
                  v358 = (char *)*((_QWORD *)v196 + 296);
                  v359 = (char *)*((_QWORD *)v196 + 297);
                  v356 = v222;
                  while ( 1 )
                  {
                    v225 = v222[v224];
                    v226 = *v222++;
                    if ( v225 != v226 )
                      break;
                    if ( !--v223 )
                    {
LABEL_350:
                      v219 = 1;
                      goto LABEL_351;
                    }
                  }
                  v227 = v357;
                  v228 = 8;
                  v229 = v173;
                  while ( 1 )
                  {
                    v230 = *(_QWORD *)v229;
                    v229 += 8;
                    v231 = *(_QWORD *)v227;
                    v227 += 8;
                    if ( v230 != v231 )
                      break;
                    v228 -= 8;
                    if ( v228 < 8 )
                    {
                      if ( !v228 )
                        goto LABEL_350;
                      while ( 1 )
                      {
                        v232 = *v229++;
                        v233 = *v227++;
                        if ( v232 != v233 )
                          goto LABEL_343;
                        if ( !--v228 )
                          goto LABEL_350;
                      }
                    }
                  }
LABEL_343:
                  v234 = v358;
                  v235 = 4;
                  while ( 1 )
                  {
                    v236 = v234[v173 - v358];
                    v237 = *v234++;
                    if ( v236 != v237 )
                      break;
                    if ( !--v235 )
                      goto LABEL_350;
                  }
                  v238 = v359;
                  v239 = 6;
                  while ( 1 )
                  {
                    v240 = v238[v173 - v359];
                    v241 = *v238++;
                    if ( v240 != v241 )
                      break;
                    if ( !--v239 )
                      goto LABEL_350;
                  }
LABEL_351:
                  v213 = v333;
                }
                v242 = *((_DWORD *)v173 + 9);
                LODWORD(v204) = 0;
                if ( v242 < 0 )
                  v219 = 1;
                v386 = v219;
                if ( v219 && *(_DWORD *)v173 == 1414090313 && *((_DWORD *)v173 + 1) == 1195525195 )
                {
                  if ( (*((_DWORD *)v196 + 613) & 0x2000) != 0 )
                    v219 = 0;
                  v386 = v219;
                }
                if ( (*((_DWORD *)v196 + 613) & 0x4000) != 0
                  && (v242 & 0x20000000) != 0
                  && (BugCheckParameter2 == *((_QWORD *)v196 + 189) || BugCheckParameter2 == *((_QWORD *)v196 + 190)) )
                {
                  v219 = 1;
                  v386 = 1;
                }
                v243 = *((_DWORD *)v173 + 4);
                v244 = *((unsigned int *)v173 + 3);
                v245 = v339;
                if ( v243 <= *((_DWORD *)v173 + 2) )
                  v243 = *((_DWORD *)v173 + 2);
                v246 = v244 + v243;
                v335 = *((_DWORD *)v173 + 3);
                v329 = v246;
                if ( v213 == v339 )
                {
                  v247 = 0;
                  v248 = 0;
                }
                else
                {
                  v247 = *v213;
                  v248 = v213[1];
                }
                v336 = v248;
                v249 = v244;
                if ( v213 != v339 && v247 > (unsigned int)v244 && v248 <= v246 && !v219 )
                {
                  *v211 = v244;
                  v250 = v350;
                  v211[1] = v247;
                  v251 = BugCheckParameter2;
                  v252 = v247 - v244;
                  v253 = 0;
                  v249 = v247;
                  v254 = &v360;
                  v255 = BugCheckParameter2 + v244;
                  v256 = BugCheckParameter2 + v244 + v247 - (unsigned int)v244;
                  do
                  {
                    if ( v255 < *v254 + *v250 && v256 > *v254 )
                    {
                      v246 = v329;
                      LODWORD(v204) = 0;
                      v215 = v332;
                      v245 = v339;
                      v213 = v333;
                      goto LABEL_398;
                    }
                    ++v253;
                    ++v254;
                    ++v250;
                  }
                  while ( v253 < 6 );
                  *((_DWORD *)v196 + 522) += v252;
                  v257 = (_QWORD *)v255;
                  v258 = *((_DWORD *)v196 + 517);
                  v259 = (const char *)v255;
                  v260 = *((_QWORD *)v196 + 259);
                  if ( v255 < v256 )
                  {
                    do
                    {
                      _mm_prefetch(v259, 0);
                      v259 += 64;
                    }
                    while ( (unsigned __int64)v259 < v256 );
                  }
                  LODWORD(v204) = 0;
                  v261 = v252 >> 7;
                  v262 = *((_QWORD *)v196 + 259);
                  if ( v252 >> 7 )
                  {
                    do
                    {
                      v263 = 8LL;
                      do
                      {
                        v264 = v257[1] ^ __ROL8__(*v257 ^ v262, v258);
                        v257 += 2;
                        v262 = __ROL8__(v264, v258);
                        --v263;
                      }
                      while ( v263 );
                      v265 = __ROL8__(v260 ^ ((unsigned __int64)v257 - v255), 17) ^ v260 ^ ((unsigned __int64)v257 - v255);
                      v374 = (v265 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v258 = ((unsigned __int8)(v374 ^ v265) ^ (unsigned __int8)v258) & 0x3F;
                      if ( !v258 )
                        LOBYTE(v258) = 1;
                      --v261;
                    }
                    while ( v261 );
                    v196 = v340;
                    LODWORD(v204) = 0;
                    v248 = v336;
                  }
                  v266 = v252 & 0x7F;
                  if ( v266 >= 8 )
                  {
                    v267 = (unsigned __int64)v266 >> 3;
                    do
                    {
                      v262 = __ROL8__(*v257++ ^ v262, v258);
                      v266 -= 8;
                      --v267;
                    }
                    while ( v267 );
                  }
                  for ( ; v266; --v266 )
                  {
                    v268 = *(unsigned __int8 *)v257;
                    v257 = (_QWORD *)((char *)v257 + 1);
                    v262 = __ROL8__(v268 ^ v262, v258);
                  }
                  for ( n = v262; ; LODWORD(v262) = n ^ v262 )
                  {
                    n >>= 31;
                    if ( !n )
                      break;
                  }
                  v246 = v329;
                  LODWORD(v244) = v335;
                  v215 = v332;
                  v213 = v333;
                  *(_DWORD *)(v337 + 8) = v262 & 0x7FFFFFFF;
                  v245 = v339;
                }
                v251 = BugCheckParameter2;
LABEL_398:
                if ( v247 < (unsigned int)v244 )
                {
                  v271 = v386;
                }
                else
                {
                  v270 = v248 <= v246;
                  v271 = v386;
                  if ( v270 && v213 != v245 )
                  {
                    v272 = v215[1];
                    if ( v272 <= v246 )
                    {
                      v273 = v334;
                      do
                      {
                        if ( v215 == v245 )
                          break;
                        if ( v271 )
                        {
                          v274 = 0x80;
                        }
                        else
                        {
                          v275 = v213[1];
                          v249 = *v215;
                          if ( *v215 < (unsigned int)v275 )
                          {
                            if ( (*((_DWORD *)v196 + 612) & 0x200000) == 0 )
                            {
                              v348[7] = -805294751;
                              KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v251, 6uLL, 0LL);
                            }
                            if ( !*((_DWORD *)v196 + 574) )
                            {
                              *((_QWORD *)v196 + 289) = 0LL;
                              *((_QWORD *)v196 + 290) = 271LL;
                              *((_QWORD *)v196 + 288) = v196 - 0x5C5FC0A76E374B18LL;
                              *((_QWORD *)v196 + 291) = v251;
                              *((_DWORD *)v196 + 574) = 1;
                              __b8(v196, 0LL);
                            }
                          }
                          v276 = v251 + v275;
                          v277 = v249 - v275;
                          v278 = v350;
                          v279 = 0;
                          v280 = v251 + v275 + v249 - (unsigned int)v275;
                          v281 = &v360;
                          do
                          {
                            if ( v276 < *v281 + *v278 && v280 > *v281 )
                              goto LABEL_434;
                            ++v279;
                            ++v281;
                            ++v278;
                          }
                          while ( v279 < 6 );
                          if ( v277 < 4 )
                          {
LABEL_434:
                            LODWORD(v204) = 0;
                            v274 = 0x80;
                            goto LABEL_435;
                          }
                          *((_DWORD *)v196 + 522) += v277;
                          v282 = (_QWORD *)v276;
                          v283 = *((_DWORD *)v196 + 517);
                          v284 = (const char *)v276;
                          v285 = *((_QWORD *)v196 + 259);
                          if ( v276 < v280 )
                          {
                            do
                            {
                              _mm_prefetch(v284, 0);
                              v284 += 64;
                            }
                            while ( (unsigned __int64)v284 < v280 );
                          }
                          LODWORD(v204) = 0;
                          v286 = v277 >> 7;
                          v287 = *((_QWORD *)v196 + 259);
                          if ( v277 >> 7 )
                          {
                            do
                            {
                              v288 = 8LL;
                              do
                              {
                                v289 = v282[1] ^ __ROL8__(*v282 ^ v287, v283);
                                v282 += 2;
                                v287 = __ROL8__(v289, v283);
                                --v288;
                              }
                              while ( v288 );
                              v290 = __ROL8__(v285 ^ ((unsigned __int64)v282 - v276), 17) ^ v285 ^ ((unsigned __int64)v282
                                                                                                  - v276);
                              v375 = (v290 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              v283 = ((unsigned __int8)(v375 ^ v290) ^ (unsigned __int8)v283) & 0x3F;
                              if ( !v283 )
                                LOBYTE(v283) = 1;
                              --v286;
                            }
                            while ( v286 );
                            v196 = v340;
                            LODWORD(v204) = 0;
                            v271 = v386;
                          }
                          v291 = v277 & 0x7F;
                          if ( v291 >= 8 )
                          {
                            v292 = (unsigned __int64)v291 >> 3;
                            do
                            {
                              v287 = __ROL8__(*v282++ ^ v287, v283);
                              v291 -= 8;
                              --v292;
                            }
                            while ( v292 );
                          }
                          for ( ; v291; --v291 )
                          {
                            v293 = *(unsigned __int8 *)v282;
                            v282 = (_QWORD *)((char *)v282 + 1);
                            v287 = __ROL8__(v293 ^ v287, v283);
                          }
                          for ( ii = v287; ; LOBYTE(v287) = ii ^ v287 )
                          {
                            ii >>= 7;
                            if ( !ii )
                              break;
                          }
                          v251 = BugCheckParameter2;
                          v274 = v287 & 0x7F;
LABEL_435:
                          v213 = v333;
                          v215 = v332;
                          v246 = v329;
                          v273 = v334;
                        }
                        *v273 = v274;
                        v213 += 3;
                        v215 += 3;
                        v245 = v339;
                        v273 = v334 + 1;
                        v333 = v213;
                        ++v334;
                        v332 = v215;
                        if ( v215 != v339 )
                          v272 = v215[1];
                      }
                      while ( v272 <= v246 );
                    }
                  }
                }
                v295 = v337;
                if ( !v271 && v249 != v246 )
                {
                  v296 = BugCheckParameter2 + v249;
                  v297 = v246 - v249;
                  *(_DWORD *)(v337 + 16) = v246;
                  v298 = v246 - v249;
                  v299 = v350;
                  v300 = 0;
                  *(_DWORD *)(v295 + 12) = v249;
                  v301 = v296 + v298;
                  v302 = &v360;
                  do
                  {
                    if ( v296 < *v302 + *v299 && v301 > *v302 )
                    {
                      LODWORD(v204) = 0;
                      goto LABEL_466;
                    }
                    ++v300;
                    ++v302;
                    ++v299;
                  }
                  while ( v300 < 6 );
                  *((_DWORD *)v196 + 522) += v297;
                  v303 = (_QWORD *)v296;
                  v304 = *((_DWORD *)v196 + 517);
                  v305 = (const char *)v296;
                  v306 = *((_QWORD *)v196 + 259);
                  if ( v296 < v301 )
                  {
                    do
                    {
                      _mm_prefetch(v305, 0);
                      v305 += 64;
                    }
                    while ( (unsigned __int64)v305 < v301 );
                  }
                  LODWORD(v204) = 0;
                  v307 = v297 >> 7;
                  v308 = *((_QWORD *)v196 + 259);
                  if ( v297 >> 7 )
                  {
                    do
                    {
                      v309 = 8LL;
                      do
                      {
                        v310 = *v303 ^ v308;
                        v311 = v303 + 1;
                        v312 = *v311 ^ __ROL8__(v310, v304);
                        v303 = v311 + 1;
                        v308 = __ROL8__(v312, v304);
                        --v309;
                      }
                      while ( v309 );
                      v313 = __ROL8__(v306 ^ ((unsigned __int64)v303 - v296), 17) ^ v306 ^ ((unsigned __int64)v303 - v296);
                      v376 = (v313 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v304 = ((unsigned __int8)(v376 ^ v313) ^ (unsigned __int8)v304) & 0x3F;
                      if ( !v304 )
                        LOBYTE(v304) = 1;
                      --v307;
                    }
                    while ( v307 );
                    v196 = v340;
                    LODWORD(v204) = 0;
                  }
                  v314 = v297 & 0x7F;
                  if ( v314 >= 8 )
                  {
                    v315 = (unsigned __int64)v314 >> 3;
                    do
                    {
                      v308 = __ROL8__(*v303++ ^ v308, v304);
                      v314 -= 8;
                      --v315;
                    }
                    while ( v315 );
                  }
                  for ( ; v314; --v314 )
                  {
                    v316 = *(unsigned __int8 *)v303;
                    v303 = (_QWORD *)((char *)v303 + 1);
                    v308 = __ROL8__(v316 ^ v308, v304);
                  }
                  for ( jj = v308; ; LODWORD(v308) = jj ^ v308 )
                  {
                    jj >>= 31;
                    if ( !jj )
                      break;
                  }
                  v295 = v337;
                  *(_DWORD *)(v337 + 20) = v308 & 0x7FFFFFFF;
LABEL_466:
                  v213 = v333;
                }
                v215 = v332;
                if ( v213 != v339 && *v213 >= v335 && v213[1] <= v329 )
                {
                  if ( v332 != v339 )
                  {
                    v318 = v334;
                    *v334 = 0x80;
                    v215 += 3;
                    v334 = v318 + 1;
                    v332 = v215;
                  }
                  v213 += 3;
                  v333 = v213;
                }
                v211 = (_DWORD *)(v295 + 24);
                v173 = (char *)(v341 + 40);
                v337 = (unsigned __int64)v211;
                v341 += 40LL;
              }
              while ( v211 != (_DWORD *)v349 );
              v134 = v342;
            }
          }
          v338 = v134;
          v33 = 0;
          goto LABEL_476;
        }
        v163 = *((_QWORD *)v107 + 19);
        v164 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, _BYTE *))v134 + 63))(v159, v128, v118, v158);
        if ( v164 )
        {
          v118 = v159 + *(unsigned int *)(v164 + 80);
          v128 = v107[46] | 2u;
          v107[46] = v128;
          v165 = v128;
          v166 = *(_QWORD **)(v163 + 112);
          if ( (unsigned __int64)v166 >= v159 && (unsigned __int64)v166 < v118 )
          {
            v165 = v128 | 4;
            *((_QWORD *)v107 + 21) = *v166;
            v107[46] = v128 | 4;
          }
          v167 = *(_QWORD **)(v163 + 120);
          if ( (unsigned __int64)v167 >= v159 && (unsigned __int64)v167 < v118 )
          {
            *((_QWORD *)v107 + 22) = *v167;
            v107[46] = v165 | 8;
          }
          goto LABEL_234;
        }
LABEL_195:
        v33 = -1073741670;
        goto LABEL_476;
      }
      v101[8] |= 4u;
    }
    if ( !v103 )
      goto LABEL_152;
    goto LABEL_151;
  }
  v33 = 0;
LABEL_477:
  *a1 = v338;
  if ( (int)(v33 + 0x80000000) >= 0 && v33 != -1073741554 )
    return (unsigned int)v33;
  v319 = v54 & 0xFFFFFFEF;
  if ( (v319 & 0x80000004) != 0x80000004 )
  {
    v320 = v319 | 0x80000000;
    v321 = v352;
    v322 = (*((__int64 (__fastcall **)(__int64))v338 + 63))(v352);
    v323 = *(unsigned int *)(v322 + 148);
    if ( (unsigned int)v323 >= 0x14 )
    {
      v324 = *(unsigned int *)(v322 + 144);
      v325 = v321 + v324 + v323;
      for ( kk = v324 + v321; kk != v325; kk += 20LL )
      {
        if ( !*(_DWORD *)(kk + 12) )
          break;
        v327 = *(unsigned int *)(kk + 16);
        if ( !(_DWORD)v327 )
          break;
        v328 = *(_QWORD *)(v327 + v321);
        if ( v328 )
        {
          result = pg_unknown8(&v338, v328, v320);
          *a1 = v338;
          if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741554 )
            return result;
        }
      }
    }
  }
  return 0LL;
}