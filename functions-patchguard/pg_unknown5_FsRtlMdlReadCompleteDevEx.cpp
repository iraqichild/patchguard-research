/* XREFS
Up	p	KiDecodeMcaFault+F	call    pg_unknown5_FsRtlMdlReadCompleteDevEx
Up	p	sub_1403EA980+11	call    pg_unknown5_FsRtlMdlReadCompleteDevEx
Down	p	FsRtlUninitializeSmallMcb+4	call    pg_unknown5_FsRtlMdlReadCompleteDevEx
*/

unsigned __int64 __fastcall pg_unknown5_FsRtlMdlReadCompleteDevEx(unsigned __int64 a1)
{
  int v1; // eax
  unsigned __int64 v2; // r12
  __int64 v3; // rdx
  int v4; // ecx
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r14
  _QWORD *v8; // rbx
  _BYTE *v9; // rdx
  char *v10; // rcx
  int v11; // r8d
  __int64 v12; // r9
  char v13; // al
  int v14; // ecx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // r9
  const char *v18; // rax
  __int64 v19; // r10
  int v20; // r11d
  __int64 v21; // rsi
  __int64 v22; // r8
  unsigned int i; // edi
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r8
  unsigned __int64 v27; // rcx
  unsigned int v28; // r10d
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  char *v31; // rcx
  int v32; // edx
  __int64 v33; // r9
  char v34; // al
  __int64 v35; // rax
  int v36; // ecx
  int v37; // eax
  __int64 v38; // r10
  unsigned int v39; // r13d
  __int64 v40; // r11
  __int64 v41; // r15
  const char *v42; // r12
  unsigned __int64 v43; // rcx
  unsigned __int128 v44; // rax
  unsigned __int64 v45; // r9
  int v46; // r8d
  unsigned __int64 v47; // rcx
  unsigned __int128 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int128 v50; // rax
  unsigned int v51; // esi
  __int64 v52; // rbx
  __int64 v53; // r14
  int v54; // r13d
  unsigned __int64 v55; // rcx
  unsigned __int128 v56; // rax
  int v57; // ecx
  __int64 v58; // rbx
  unsigned __int64 v59; // rdx
  __int64 v60; // r8
  _QWORD *v61; // rax
  __int64 v62; // r12
  unsigned __int64 v63; // r9
  __int64 *v64; // r10
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rdx
  const char *v69; // r9
  _QWORD *v70; // rax
  __int64 v71; // r8
  int v72; // ecx
  __int64 v73; // r11
  unsigned __int64 v74; // r9
  __int64 *v75; // r10
  __int64 v76; // rdx
  unsigned int v77; // esi
  _QWORD *v78; // rdx
  __int64 v79; // rax
  int v80; // ecx
  int v81; // esi
  _QWORD *v82; // r9
  const char *v83; // rax
  int v84; // r10d
  __int64 v85; // r11
  __int64 v86; // r8
  int v87; // ebx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // r8
  unsigned __int64 v91; // rcx
  int v92; // edx
  __int64 v93; // r11
  __int64 v94; // rax
  __int64 v95; // rax
  int v96; // ecx
  __int64 v97; // rdx
  __int64 v98; // rcx
  unsigned __int64 v99; // rsi
  unsigned __int64 v100; // r8
  __int64 v101; // rbx
  int v102; // r14d
  __int64 v103; // rbx
  __int64 v104; // rdx
  int v105; // ecx
  int v106; // r13d
  int v107; // eax
  unsigned __int64 v108; // rcx
  unsigned __int64 v109; // rcx
  unsigned __int64 v110; // rcx
  unsigned __int128 v111; // rax
  unsigned __int64 v112; // rcx
  int v113; // ecx
  int v114; // ecx
  unsigned int v115; // r9d
  int v116; // ecx
  int v117; // ecx
  int v118; // ecx
  unsigned __int64 v119; // rcx
  __int64 v120; // rax
  unsigned int v121; // r9d
  __int64 v122; // r15
  unsigned __int64 v123; // r14
  unsigned __int64 v124; // rcx
  unsigned __int128 v125; // rax
  __int64 v126; // rbx
  int v127; // ecx
  unsigned int *v128; // rax
  __int64 j; // r15
  unsigned __int64 v130; // r9
  __int64 v131; // rcx
  unsigned __int128 v132; // rax
  _DWORD *v133; // r12
  unsigned __int64 v134; // rbx
  const char *v135; // r14
  unsigned int v136; // r15d
  unsigned __int64 v137; // rcx
  unsigned __int128 v138; // rax
  unsigned __int64 v139; // rbx
  __int64 v140; // rcx
  int v141; // eax
  unsigned __int64 v142; // rax
  __int64 v143; // r13
  unsigned __int64 v144; // rdx
  unsigned int v145; // ecx
  __int64 v146; // r10
  int v147; // ecx
  __int64 v148; // rax
  int v149; // eax
  int v150; // r10d
  int v151; // ecx
  int v152; // eax
  unsigned int v153; // ecx
  unsigned __int64 v154; // rbx
  unsigned __int64 i37; // r14
  const char *v156; // r14
  __int64 v157; // r8
  const char *v158; // rax
  int v159; // r10d
  __int64 i38; // r15
  unsigned __int64 v161; // rbx
  unsigned int v162; // r11d
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rbx
  unsigned __int64 v166; // rcx
  unsigned __int64 v167; // rdx
  __int64 v168; // rax
  unsigned __int64 v169; // rax
  unsigned int v170; // edx
  unsigned int v171; // ebx
  __int64 v172; // rcx
  unsigned __int8 v173; // r12
  unsigned __int64 v174; // r14
  unsigned __int64 v175; // r13
  unsigned __int64 v176; // r15
  int v177; // eax
  int v178; // eax
  __int64 v179; // rcx
  __int64 v180; // rax
  __int64 v181; // rcx
  int v182; // ecx
  _DWORD *v183; // rax
  unsigned __int64 v184; // r14
  unsigned __int64 v185; // rdx
  unsigned __int64 v186; // rdi
  __int64 v187; // r8
  const char *v188; // rax
  int v189; // r11d
  __int64 v190; // r12
  __int64 v191; // r15
  unsigned __int64 v192; // rbx
  unsigned int v193; // r10d
  __int64 v194; // rax
  __int64 v195; // rbx
  unsigned __int64 v196; // rcx
  unsigned __int64 v197; // rax
  __int64 v198; // rax
  unsigned __int64 v199; // rax
  __int64 v200; // r14
  unsigned int v201; // ecx
  unsigned int v202; // ebx
  unsigned __int8 v203; // r13
  unsigned __int64 v204; // r15
  unsigned __int64 v205; // r12
  int v206; // eax
  bool v207; // zf
  __int64 v208; // rax
  __int64 v209; // rbx
  unsigned __int16 v210; // dx
  _QWORD *v211; // r14
  __int64 v212; // r8
  _QWORD *v213; // r9
  const char *v214; // rax
  int v215; // r11d
  __int64 v216; // r15
  unsigned __int64 v217; // rbx
  unsigned int v218; // r10d
  __int64 v219; // rdx
  __int64 v220; // rax
  __int64 v221; // rbx
  unsigned __int128 v222; // rax
  unsigned int v223; // r8d
  unsigned __int64 v224; // rdx
  __int64 v225; // rax
  unsigned __int64 i36; // rax
  int *v227; // r14
  unsigned int v228; // ebx
  BOOL v229; // r13d
  __int64 v230; // rcx
  __int64 v231; // rdx
  __int64 v232; // r8
  unsigned __int8 v233; // r12
  unsigned __int64 v234; // r14
  unsigned __int64 v235; // r15
  int v236; // eax
  __int64 v237; // rcx
  int v238; // eax
  __int64 v239; // rcx
  unsigned int i35; // ebx
  __int64 v241; // r9
  unsigned __int64 v242; // rdx
  __int64 v243; // r8
  __int64 v244; // rcx
  unsigned __int64 v245; // rdx
  unsigned __int64 v246; // r8
  int v247; // eax
  int v248; // ecx
  __int64 v249; // rcx
  unsigned __int64 v250; // rcx
  unsigned __int128 v251; // rax
  __int64 v252; // rbx
  unsigned int v253; // r15d
  unsigned int v254; // ecx
  unsigned __int8 v255; // r14
  volatile signed __int8 **v256; // r8
  volatile signed __int8 *v257; // rdx
  unsigned __int64 v258; // r15
  __int64 v259; // r13
  unsigned __int64 v260; // rbx
  __int64 *v261; // r12
  _BYTE *v262; // rbx
  char v263; // al
  __int64 v264; // rdx
  int *v265; // rcx
  __int64 v266; // rcx
  __int64 v267; // rax
  bool v268; // zf
  int *v269; // rcx
  unsigned int v270; // eax
  __int64 v271; // rbx
  unsigned int v272; // r13d
  unsigned int v273; // ecx
  unsigned __int8 v274; // r14
  _QWORD **v275; // r12
  _QWORD *v276; // r15
  int *v277; // rdi
  unsigned __int64 v278; // rbx
  __int64 v279; // rcx
  _QWORD **v280; // r13
  _QWORD *v281; // r15
  int *v282; // rdi
  unsigned int v283; // edx
  __int64 v284; // rcx
  char *v285; // rbx
  const char *v286; // r14
  __int64 v287; // r8
  const char *v288; // rax
  int v289; // r11d
  __int64 i33; // r15
  unsigned __int64 v291; // rbx
  unsigned int v292; // r10d
  __int64 v293; // rdx
  __int64 v294; // rax
  __int64 v295; // rbx
  unsigned __int64 v296; // rcx
  unsigned __int64 v297; // rdx
  __int64 v298; // rax
  unsigned __int64 i34; // rax
  unsigned int v300; // ebx
  BOOL v301; // r12d
  __int64 v302; // rcx
  __int64 v303; // rdx
  unsigned __int8 v304; // r13
  unsigned __int64 v305; // r14
  int v306; // eax
  char *v307; // r14
  _QWORD *v308; // r15
  __int64 v309; // rbx
  void (__fastcall *v310)(__int64, __int64); // rax
  unsigned int v311; // ecx
  void (__fastcall *v312)(__int64, _QWORD); // rax
  unsigned __int64 *v313; // r9
  __int64 v314; // r10
  unsigned __int64 v315; // r8
  __int64 v316; // rdx
  __int64 v317; // rax
  _QWORD **v318; // r12
  _QWORD *v319; // r14
  __int64 v320; // rdi
  unsigned __int8 v321; // r15
  char *v322; // rbx
  __int64 v323; // rcx
  __int64 v324; // r8
  int *v325; // rcx
  _QWORD **v326; // r10
  _QWORD *i32; // r9
  __int64 v328; // r14
  __int64 v329; // rbx
  int v330; // r13d
  void (__fastcall *v331)(__int64, __int64); // rax
  unsigned int v332; // ecx
  unsigned __int8 v333; // r15
  volatile signed __int8 **v334; // r8
  volatile signed __int8 *v335; // rdx
  _QWORD **v336; // r12
  _QWORD *v337; // r14
  __int64 v338; // rax
  int *v339; // rdi
  char *v340; // rcx
  __int64 v341; // rdx
  __int64 v342; // rbx
  _QWORD **v343; // r12
  __int64 v344; // rcx
  __int64 v345; // rdx
  unsigned int *v346; // rcx
  __int64 v347; // r13
  _QWORD *v348; // rax
  __int64 v349; // r8
  unsigned __int64 v350; // rcx
  __int64 v351; // rax
  int v352; // ebx
  unsigned __int64 v353; // rcx
  unsigned __int128 v354; // rax
  unsigned __int64 v355; // r14
  unsigned __int64 v356; // rdx
  __int64 v357; // r11
  int v358; // r10d
  unsigned __int64 *v359; // r9
  unsigned __int64 v360; // r8
  unsigned __int64 v361; // rcx
  unsigned __int128 v362; // rax
  unsigned __int64 v363; // rcx
  unsigned __int128 v364; // rax
  unsigned int v365; // ebx
  unsigned __int64 *v366; // r8
  unsigned __int64 v367; // rcx
  unsigned __int128 v368; // rax
  unsigned __int64 v369; // rcx
  unsigned __int128 v370; // rax
  __int64 v371; // r15
  _QWORD *v372; // rbx
  unsigned int v373; // edi
  __int64 v374; // r14
  __int64 v375; // rax
  unsigned __int64 v376; // r12
  unsigned __int64 v377; // r13
  int *v378; // rdi
  unsigned __int64 v379; // rbx
  int v380; // edx
  int v381; // r8d
  int v382; // ecx
  unsigned __int64 v383; // rcx
  unsigned __int128 v384; // rax
  int v385; // ecx
  int v386; // ecx
  int v387; // ecx
  int v388; // ecx
  int v389; // ecx
  char *v390; // rbx
  unsigned int v391; // r14d
  __int64 v392; // r15
  _QWORD *v393; // rcx
  int v394; // edx
  __int64 v395; // r8
  char v396; // al
  __int64 v397; // rax
  __int64 v398; // rcx
  __int64 v399; // r15
  char *v400; // rdi
  char *v401; // rbx
  int v402; // r12d
  __int64 v403; // r14
  _QWORD *v404; // rcx
  int v405; // edx
  __int64 v406; // r8
  char v407; // al
  __int64 v408; // rax
  __int64 v409; // rax
  __int64 (__fastcall *v410)(__int64); // rax
  _QWORD *v411; // rax
  _BYTE *v412; // rbx
  _DWORD *v413; // r14
  int *v414; // rcx
  _DWORD *v415; // rax
  __int64 v416; // rax
  __int64 v417; // rax
  __int64 (__fastcall *v418)(_DWORD *, char *); // rax
  __int64 v419; // rax
  ULONG_PTR v420; // r13
  unsigned int v421; // r12d
  int v422; // ecx
  int v423; // ecx
  int *v424; // rax
  __int64 v425; // rdx
  unsigned int v426; // r15d
  int v427; // r10d
  __int64 v428; // r14
  unsigned int v429; // r11d
  char **v430; // r8
  __int64 v431; // r9
  int v432; // ecx
  int v433; // ecx
  int v434; // ecx
  int v435; // ecx
  __int64 v436; // rax
  int v437; // eax
  unsigned __int64 v438; // rcx
  __int64 v439; // r11
  int v440; // eax
  __int64 v441; // rdx
  int v442; // r15d
  int v443; // eax
  __int64 v444; // rax
  __int64 v445; // rdx
  __int64 (__fastcall *v446)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v447; // rax
  __int64 v448; // rdx
  __int64 (__fastcall *v449)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v450)(ULONG_PTR); // rax
  __int64 v451; // r14
  __int64 v452; // rax
  int v453; // r8d
  __int64 v454; // r15
  int v455; // r9d
  unsigned int v456; // eax
  __int64 v457; // r14
  __int64 v458; // rax
  int v459; // ecx
  unsigned int v460; // eax
  __int64 v461; // r9
  bool v462; // cf
  _QWORD *v463; // rcx
  int v464; // r8d
  unsigned __int64 v465; // rdx
  int v466; // ebx
  int v467; // ecx
  __int64 v468; // r12
  _QWORD *v469; // rdi
  unsigned int *v470; // rsi
  __int64 v471; // r13
  __int64 v472; // rdx
  _QWORD *v473; // r15
  int v474; // ecx
  _QWORD *v475; // rax
  _QWORD *v476; // r10
  const char *v477; // rax
  int v478; // ebx
  __int64 v479; // r11
  unsigned __int64 v480; // r8
  unsigned int v481; // r9d
  __int64 v482; // rdx
  __int64 v483; // rax
  __int64 v484; // r8
  unsigned __int64 v485; // rcx
  unsigned int v486; // edx
  unsigned __int64 v487; // r9
  __int64 v488; // rax
  unsigned __int64 i21; // rax
  _DWORD *v490; // rbx
  ULONG_PTR v491; // r12
  int v492; // r15d
  unsigned int v493; // r9d
  _QWORD *v494; // r15
  _DWORD *v495; // r13
  int v496; // ecx
  _QWORD *v497; // rax
  __int64 v498; // rdx
  _QWORD *v499; // r10
  const char *v500; // rax
  int v501; // r14d
  __int64 v502; // r12
  unsigned __int64 v503; // rcx
  unsigned __int64 v504; // r8
  unsigned int v505; // r11d
  __int64 v506; // rax
  __int64 v507; // r8
  unsigned __int128 v508; // rax
  unsigned __int64 v509; // rax
  __int64 v510; // rax
  unsigned __int64 v511; // rax
  int v512; // ecx
  int v513; // r15d
  unsigned __int64 v514; // rdx
  int v515; // r12d
  __int64 v516; // r15
  unsigned int v517; // eax
  __int64 v518; // r14
  int v519; // ecx
  unsigned int v520; // eax
  __int64 v521; // r8
  int v522; // edx
  unsigned __int64 v523; // rcx
  int i22; // ecx
  int v525; // ebx
  __int64 v526; // r15
  _QWORD *v527; // rax
  int v528; // ecx
  __int64 v529; // rdx
  const char *v530; // r13
  __int64 v531; // r12
  int v532; // r11d
  __int64 v533; // rbx
  const char *v534; // rax
  unsigned int v535; // r10d
  __int64 v536; // rax
  __int64 v537; // r8
  unsigned __int128 v538; // rax
  unsigned __int64 v539; // rax
  __int64 v540; // rax
  unsigned __int64 i23; // rax
  ULONG_PTR v542; // r12
  _DWORD *v543; // r14
  __int64 v544; // r15
  __int64 v545; // rcx
  unsigned __int64 v546; // rcx
  _QWORD *v547; // rax
  _QWORD *v548; // rax
  __int64 v549; // rax
  unsigned __int16 v550; // r10
  char *v551; // r13
  __int64 v552; // r11
  char *v553; // r14
  unsigned int v554; // ecx
  _DWORD *v555; // r8
  unsigned int v556; // edx
  unsigned int v557; // edx
  unsigned int v558; // eax
  __int64 v559; // rax
  unsigned int v560; // r15d
  unsigned int v561; // r12d
  unsigned int v562; // r15d
  unsigned int *v563; // rax
  unsigned int *v564; // r14
  ULONG_PTR v565; // r8
  unsigned int *v566; // rax
  ULONG_PTR v567; // r8
  unsigned __int64 v568; // r15
  __int64 v569; // r12
  ULONG_PTR v570; // rax
  unsigned int v571; // ecx
  __int64 v572; // r14
  unsigned int v573; // eax
  _BYTE *v574; // r13
  int v575; // ecx
  unsigned int v576; // eax
  __int64 v577; // r8
  int v578; // edx
  unsigned __int64 v579; // rcx
  int i24; // ecx
  int v581; // ebx
  _BYTE *v582; // r8
  _QWORD *v583; // rax
  int v584; // ecx
  __int64 v585; // rdx
  char *v586; // rax
  unsigned __int64 v587; // rcx
  unsigned __int64 i25; // rax
  unsigned int *v589; // r14
  __int64 v590; // rax
  unsigned int *v591; // r8
  __int64 v592; // r15
  unsigned int *v593; // r15
  __int64 v594; // rdx
  _DWORD *v595; // rax
  __int64 v596; // rcx
  unsigned __int8 *v597; // r12
  int v598; // r11d
  int v599; // ecx
  __int16 v600; // ax
  int v601; // r10d
  unsigned __int8 *v602; // r8
  unsigned __int8 *v603; // r9
  __int64 v604; // rdx
  __int64 v605; // rax
  __int64 *v606; // r9
  unsigned int v607; // r8d
  __int64 *v608; // r10
  __int64 v609; // rcx
  __int64 v610; // rax
  __int64 v611; // rdx
  __int64 v612; // rax
  unsigned __int8 *v613; // r8
  int v614; // r10d
  unsigned __int8 *v615; // r9
  __int64 v616; // rdx
  __int64 v617; // rax
  unsigned __int8 *v618; // r8
  int v619; // r10d
  unsigned __int8 *v620; // r9
  __int64 v621; // rdx
  __int64 v622; // rax
  int v623; // ecx
  ULONG_PTR v624; // rcx
  unsigned int v625; // ebx
  unsigned int v626; // r12d
  char *v627; // r8
  unsigned int v628; // r12d
  unsigned int v629; // r13d
  unsigned int v630; // eax
  unsigned int *v631; // rdx
  unsigned __int64 *v632; // r8
  __int64 v633; // rax
  unsigned int v634; // r10d
  unsigned __int64 v635; // r14
  unsigned __int64 v636; // r11
  unsigned int i26; // r9d
  unsigned __int64 v638; // r15
  _QWORD *v639; // rbx
  const char *v640; // rax
  int v641; // r12d
  unsigned __int64 v642; // r15
  unsigned __int64 v643; // r8
  unsigned int v644; // r9d
  __int64 v645; // rdx
  __int64 v646; // rax
  __int64 v647; // r8
  unsigned __int64 v648; // rcx
  unsigned int v649; // r10d
  unsigned __int64 v650; // rdx
  __int64 v651; // rax
  unsigned __int64 i27; // rax
  unsigned int v653; // r13d
  char *v654; // rax
  char v655; // r8
  unsigned int v656; // r15d
  __int64 v657; // rbx
  unsigned __int64 v658; // r11
  unsigned __int64 v659; // rcx
  ULONG_PTR v660; // rax
  unsigned int *v661; // rdx
  unsigned __int64 v662; // r14
  ULONG_PTR *v663; // r8
  unsigned int v664; // r9d
  ULONG_PTR v665; // rbx
  unsigned int i28; // r10d
  const char *v667; // rax
  int v668; // r12d
  unsigned __int64 v669; // r15
  _QWORD *v670; // r11
  unsigned __int64 v671; // r8
  unsigned int v672; // r10d
  __int64 v673; // rdx
  __int64 v674; // rax
  __int64 v675; // r8
  unsigned __int64 v676; // rcx
  unsigned int v677; // r9d
  unsigned __int64 v678; // rdx
  __int64 v679; // rax
  unsigned __int64 i29; // rax
  unsigned int *v681; // r14
  unsigned int *v682; // rdx
  unsigned __int64 *v683; // r8
  __int64 v684; // rbx
  unsigned int v685; // r9d
  unsigned __int64 v686; // rbx
  unsigned __int64 v687; // r11
  unsigned int i30; // r10d
  _QWORD *v689; // r10
  const char *v690; // rax
  int v691; // r14d
  __int64 v692; // r15
  unsigned __int64 v693; // r8
  unsigned int v694; // r11d
  __int64 v695; // rdx
  __int64 v696; // rax
  __int64 v697; // r8
  unsigned __int64 v698; // rcx
  unsigned int v699; // r9d
  unsigned __int64 v700; // rdx
  __int64 v701; // rax
  unsigned __int64 i31; // rax
  _DWORD *v703; // rax
  int *v704; // rdx
  char *v705; // rbx
  __int64 v706; // r13
  unsigned int v707; // r15d
  unsigned int v708; // r12d
  __int64 v709; // r14
  __int64 (__fastcall *v710)(__int64); // rax
  __int64 v711; // r15
  _QWORD *v712; // rcx
  int v713; // edx
  char v714; // al
  __int64 v715; // rax
  __int64 v716; // rax
  char *v717; // rbx
  unsigned __int8 v718; // r15
  __int64 i20; // r14
  _QWORD *v720; // rcx
  int v721; // edx
  __int64 v722; // r8
  char v723; // al
  __int64 v724; // rax
  __int64 v725; // rax
  char *v726; // rbx
  __int64 i19; // r14
  _QWORD *v728; // rcx
  int v729; // edx
  __int64 v730; // r8
  char v731; // al
  __int64 v732; // rax
  __int64 v733; // rax
  int v734; // ebx
  __int64 v735; // rax
  __int64 v736; // rdx
  unsigned __int64 v737; // rbx
  __int64 v738; // rcx
  __int64 v739; // rdx
  __int64 v740; // r15
  __int64 v741; // r14
  unsigned __int64 v742; // rbx
  __int64 v743; // rax
  unsigned __int64 v744; // rcx
  unsigned int v745; // ecx
  const char *v746; // r14
  __int64 v747; // r8
  const char *v748; // rax
  int v749; // r10d
  __int64 i18; // r15
  unsigned __int64 v751; // rbx
  unsigned int v752; // r11d
  __int64 v753; // rax
  __int64 v754; // rbx
  unsigned __int128 v755; // rax
  unsigned __int64 v756; // rax
  __int64 v757; // rax
  unsigned __int64 v758; // rax
  unsigned int v759; // ebx
  __int64 v760; // rcx
  __int64 v761; // rdx
  unsigned __int8 v762; // r12
  unsigned __int64 v763; // r14
  unsigned __int64 v764; // r13
  unsigned __int64 v765; // r15
  int v766; // eax
  unsigned __int8 *v767; // r10
  __int64 v768; // rcx
  __int64 v769; // rax
  __int64 v770; // rdx
  __int64 v771; // rax
  int v772; // eax
  __int64 v773; // rcx
  __int64 v774; // rdx
  __int64 v775; // rcx
  unsigned __int8 v776; // r15
  unsigned __int64 v777; // rbx
  __int64 v778; // r13
  unsigned __int64 v779; // r12
  unsigned __int64 v780; // r14
  int v781; // eax
  __int64 v782; // r8
  __int64 (*v783)(void); // rax
  __int64 v784; // rax
  __int64 (*v785)(void); // rax
  __int64 v786; // rax
  unsigned int v787; // r10d
  __int64 v788; // r12
  unsigned __int8 v789; // dl
  _QWORD *v790; // rcx
  int v791; // edx
  char v792; // al
  __int64 v793; // rax
  __int64 v794; // rcx
  _QWORD *v795; // r14
  __int64 v796; // r9
  _QWORD *v797; // r10
  const char *v798; // rax
  int v799; // ebx
  __int64 v800; // r15
  unsigned int v801; // r11d
  __int64 v802; // rax
  __int64 v803; // r8
  unsigned __int128 v804; // rax
  unsigned int v805; // r9d
  unsigned __int64 v806; // rax
  __int64 v807; // rax
  unsigned __int64 i17; // rax
  const char *v809; // r14
  unsigned int v810; // r10d
  unsigned __int64 v811; // rcx
  int v812; // r11d
  const char *v813; // rax
  __int64 v814; // r15
  const char *v815; // rcx
  unsigned int v816; // ebx
  __int64 v817; // rdx
  unsigned __int64 v818; // rax
  __int64 v819; // r8
  unsigned __int128 v820; // rax
  unsigned int v821; // r10d
  unsigned __int64 v822; // rdx
  __int64 v823; // rax
  unsigned __int64 v824; // rax
  __int64 v825; // rax
  _QWORD *v826; // r14
  _QWORD *v827; // r9
  int v828; // r11d
  const char *v829; // rax
  __int64 v830; // r15
  unsigned __int64 v831; // rbx
  unsigned int v832; // r10d
  __int64 v833; // rax
  __int64 v834; // rbx
  unsigned __int128 v835; // rax
  unsigned int v836; // r8d
  unsigned __int64 v837; // rax
  __int64 v838; // rax
  unsigned __int64 i15; // rax
  int *v840; // r12
  unsigned int v841; // ebx
  BOOL v842; // r13d
  __int64 v843; // rcx
  __int64 v844; // rdx
  __int64 v845; // r8
  unsigned __int8 v846; // r12
  unsigned __int64 v847; // r14
  unsigned __int64 v848; // r15
  int v849; // eax
  const char *v850; // r15
  unsigned int v851; // r9d
  const char *v852; // r10
  int v853; // r11d
  const char *v854; // rax
  __int64 v855; // r14
  const char *v856; // rcx
  unsigned int v857; // ebx
  __int64 v858; // rdx
  unsigned __int64 v859; // rax
  __int64 v860; // r8
  signed __int64 v861; // rcx
  unsigned __int64 v862; // rdx
  __int64 v863; // rax
  unsigned __int64 i16; // rax
  int v865; // eax
  __int64 v866; // rcx
  __int64 v867; // rdx
  _QWORD *v868; // r14
  __int64 v869; // r8
  _QWORD *v870; // r9
  const char *v871; // rax
  int v872; // r10d
  __int64 v873; // r15
  unsigned __int64 v874; // rbx
  unsigned int v875; // r11d
  __int64 v876; // rax
  __int64 v877; // rbx
  unsigned __int128 v878; // rax
  char v879; // r10
  __int64 v880; // r8
  unsigned __int64 v881; // rax
  __int64 v882; // rax
  unsigned __int64 i14; // rax
  unsigned int v884; // ebx
  BOOL v885; // r12d
  __int64 v886; // rcx
  __int64 v887; // rdx
  unsigned __int8 v888; // r13
  unsigned __int64 v889; // r14
  unsigned __int64 v890; // r15
  int v891; // eax
  int v892; // eax
  __int64 v893; // rcx
  __int64 v894; // rcx
  unsigned __int8 v895; // r14
  __int64 v896; // rdx
  int *v897; // r12
  unsigned int *v898; // rcx
  unsigned int *v899; // rbx
  char v900; // r15
  unsigned __int64 v901; // r13
  __int64 v902; // r8
  __int64 *v903; // r9
  unsigned int *v904; // r10
  __int64 v905; // rcx
  __int64 v906; // rax
  __int64 v907; // rax
  int *v908; // rcx
  int *v909; // r12
  __int64 v910; // rcx
  unsigned __int8 v911; // r15
  unsigned int *v912; // rcx
  unsigned int *v913; // rbx
  unsigned __int64 v914; // rax
  unsigned __int64 v915; // r14
  unsigned __int64 v916; // rcx
  unsigned __int64 v917; // rdx
  unsigned int v918; // edx
  unsigned int v919; // ecx
  int v920; // edx
  unsigned __int64 v921; // rbx
  unsigned __int64 i10; // r14
  int v923; // eax
  __int64 v924; // rbx
  __int64 v925; // rdx
  __int64 v926; // rcx
  __int64 v927; // rax
  int v928; // eax
  __int64 v929; // rcx
  __int64 v930; // rdx
  __int64 v931; // rcx
  __int64 v932; // rax
  int v933; // eax
  _BYTE *v934; // rcx
  __int64 v935; // rax
  const char *v936; // r14
  __int64 v937; // r8
  const char *v938; // rax
  int v939; // r11d
  __int64 i11; // r15
  unsigned __int64 v941; // rbx
  unsigned int v942; // r10d
  __int64 v943; // rdx
  __int64 v944; // rax
  __int64 v945; // rbx
  unsigned __int64 v946; // rcx
  unsigned int v947; // r8d
  unsigned __int64 v948; // rdx
  __int64 v949; // rax
  unsigned __int64 v950; // rax
  unsigned int v951; // ebx
  __int64 v952; // rcx
  __int64 v953; // rdx
  unsigned __int8 v954; // r12
  unsigned __int64 v955; // r14
  unsigned __int64 v956; // r13
  unsigned __int64 v957; // r15
  int v958; // eax
  int v959; // eax
  unsigned __int64 v960; // rcx
  __int64 v961; // rcx
  const char *v962; // r14
  __int64 v963; // r8
  const char *v964; // rax
  int v965; // r10d
  __int64 i12; // r15
  unsigned __int64 v967; // rbx
  unsigned int v968; // r11d
  __int64 v969; // rax
  __int64 v970; // rbx
  unsigned __int128 v971; // rax
  unsigned __int64 v972; // rax
  __int64 v973; // rax
  unsigned __int64 i13; // rax
  BOOL v975; // r13d
  __int64 v976; // rcx
  __int64 v977; // rdx
  unsigned __int8 v978; // r12
  unsigned __int64 v979; // r14
  int v980; // eax
  int v981; // eax
  __int64 v982; // rbx
  unsigned int v983; // r14d
  __int64 (__fastcall *v984)(_QWORD); // rax
  __int64 v985; // rax
  __int64 v986; // rdi
  char *v987; // r12
  unsigned __int8 v988; // bl
  char v989; // r14
  char v990; // r13
  __int64 v991; // r15
  unsigned __int64 v992; // rbx
  char v993; // al
  int *v994; // r14
  _QWORD *v995; // rax
  _QWORD *v996; // r14
  unsigned __int64 v997; // rcx
  unsigned __int64 *v998; // rbx
  unsigned __int8 v999; // r14
  __int64 v1000; // r13
  __int64 v1001; // rdx
  unsigned __int64 v1002; // r15
  unsigned __int64 v1003; // rcx
  _QWORD *v1004; // rcx
  int v1005; // edx
  __int64 v1006; // r8
  char v1007; // al
  char *v1008; // r12
  unsigned __int8 v1009; // bl
  char v1010; // r14
  char v1011; // r13
  __int64 v1012; // r15
  unsigned __int64 v1013; // rbx
  char v1014; // al
  int *v1015; // r14
  _QWORD *v1016; // rax
  unsigned __int64 v1017; // rcx
  unsigned __int64 *v1018; // rbx
  unsigned __int8 v1019; // r14
  __int64 v1020; // r13
  __int64 v1021; // rdx
  unsigned __int64 v1022; // r15
  unsigned __int64 v1023; // rcx
  _QWORD *v1024; // rcx
  int v1025; // edx
  __int64 v1026; // r8
  char v1027; // al
  __int64 (__fastcall *v1028)(__int64); // rax
  __int64 v1029; // r13
  unsigned __int8 v1030; // bl
  int *v1031; // r15
  char v1032; // r14
  char v1033; // r12
  __int64 v1034; // r15
  unsigned __int64 v1035; // rbx
  char v1036; // al
  int *v1037; // r14
  unsigned __int8 v1038; // al
  unsigned __int64 *v1039; // r14
  unsigned __int64 v1040; // rcx
  unsigned __int64 *v1041; // rbx
  unsigned __int8 v1042; // di
  __int64 v1043; // r12
  char *v1044; // r14
  __int64 v1045; // rdx
  unsigned __int64 v1046; // r15
  unsigned __int64 v1047; // rcx
  _QWORD *v1048; // rcx
  int v1049; // edx
  __int64 v1050; // r8
  char v1051; // al
  int v1052; // ecx
  char *v1053; // r11
  unsigned int v1054; // kr00_4
  char *v1055; // r15
  unsigned int v1056; // r10d
  unsigned __int64 v1057; // rdx
  __int64 v1058; // rdi
  __int64 v1059; // r13
  __int64 v1060; // r9
  __int64 v1061; // r12
  unsigned __int64 v1062; // r13
  _QWORD *v1063; // r10
  int v1064; // ebx
  const char *v1065; // rax
  unsigned __int64 v1066; // r14
  unsigned __int64 v1067; // r8
  unsigned int v1068; // r11d
  __int64 v1069; // rdx
  __int64 v1070; // rax
  __int64 v1071; // r8
  unsigned __int64 v1072; // rcx
  unsigned int v1073; // r9d
  unsigned __int64 v1074; // rdx
  __int64 v1075; // rax
  unsigned __int64 i8; // rax
  char v1077; // cl
  unsigned int v1078; // edx
  int v1079; // eax
  unsigned __int8 v1080; // r15
  unsigned __int64 v1081; // rbx
  __int64 v1082; // r13
  unsigned __int64 v1083; // r12
  unsigned __int64 v1084; // r14
  int v1085; // eax
  int *v1086; // rcx
  __int64 v1087; // rcx
  int *v1088; // rdi
  unsigned int *v1089; // rdx
  __int64 v1090; // r12
  unsigned __int64 v1091; // r13
  __int64 v1092; // r8
  int v1093; // r10d
  const char *v1094; // rax
  unsigned __int64 v1095; // r14
  __int64 v1096; // r15
  unsigned __int64 v1097; // rbx
  unsigned int v1098; // r11d
  __int64 v1099; // rax
  __int64 v1100; // rbx
  unsigned __int128 v1101; // rax
  unsigned __int64 v1102; // rax
  __int64 v1103; // rax
  unsigned __int64 i9; // rax
  unsigned int v1105; // ecx
  unsigned int v1106; // ebx
  unsigned __int8 v1107; // r12
  unsigned __int64 v1108; // r14
  unsigned __int64 v1109; // r13
  unsigned __int64 v1110; // r15
  int v1111; // eax
  __int64 v1112; // rcx
  __int64 v1113; // rax
  const char *v1114; // r14
  __int64 v1115; // r8
  const char *v1116; // rax
  int v1117; // r10d
  __int64 i6; // r15
  unsigned __int64 v1119; // rbx
  unsigned int v1120; // r11d
  __int64 v1121; // rax
  __int64 v1122; // rbx
  unsigned __int128 v1123; // rax
  unsigned __int64 v1124; // rax
  __int64 v1125; // rax
  unsigned __int64 i7; // rax
  unsigned int v1127; // ebx
  BOOL v1128; // r12d
  __int64 v1129; // rcx
  __int64 v1130; // rdx
  unsigned __int8 v1131; // r13
  unsigned __int64 v1132; // r14
  unsigned __int64 v1133; // r15
  int v1134; // eax
  __int64 **v1135; // r12
  unsigned int v1136; // eax
  __int64 v1137; // rdi
  char *v1138; // rbx
  int v1139; // r13d
  __int64 v1140; // r15
  __int64 v1141; // r14
  _QWORD *v1142; // rcx
  int v1143; // edx
  __int64 v1144; // r8
  char v1145; // al
  __int64 v1146; // rax
  __int64 v1147; // rax
  int v1148; // eax
  __int64 v1149; // rcx
  volatile signed __int32 *v1150; // rcx
  const char *v1151; // r14
  __int64 v1152; // r8
  const char *v1153; // rax
  int v1154; // r10d
  __int64 i1; // r15
  unsigned __int64 v1156; // rbx
  unsigned int v1157; // r11d
  __int64 v1158; // rax
  __int64 v1159; // rbx
  unsigned __int128 v1160; // rax
  unsigned int v1161; // r8d
  unsigned __int64 v1162; // rax
  __int64 v1163; // rax
  unsigned __int64 i2; // rax
  unsigned int v1165; // ebx
  BOOL v1166; // r13d
  __int64 v1167; // rcx
  __int64 v1168; // rdx
  unsigned __int8 v1169; // r12
  unsigned __int64 v1170; // r14
  unsigned __int64 v1171; // r15
  int v1172; // eax
  int v1173; // eax
  __int64 v1174; // rcx
  __int64 v1175; // rax
  unsigned int v1176; // edx
  int v1177; // ecx
  unsigned __int64 v1178; // rbx
  unsigned __int64 i3; // r14
  const char *v1180; // r14
  __int64 v1181; // r8
  const char *v1182; // rax
  int v1183; // r10d
  __int64 i4; // r15
  unsigned __int64 v1185; // rbx
  unsigned int v1186; // r11d
  __int64 v1187; // rax
  __int64 v1188; // rbx
  unsigned __int128 v1189; // rax
  unsigned int v1190; // r8d
  unsigned __int64 v1191; // rax
  __int64 v1192; // rax
  unsigned __int64 i5; // rax
  unsigned int v1194; // ebx
  __int64 v1195; // rcx
  __int64 v1196; // rdx
  unsigned __int8 v1197; // r12
  unsigned __int64 v1198; // r14
  unsigned __int64 v1199; // r13
  int v1200; // eax
  int v1201; // eax
  __int64 v1202; // rax
  __int64 v1203; // r14
  __int64 v1204; // rcx
  int v1205; // eax
  __int64 v1206; // rcx
  unsigned int v1207; // ebx
  _QWORD *v1208; // rcx
  int v1209; // edx
  char v1210; // al
  bool v1211; // zf
  __int64 v1212; // r15
  int v1213; // r14d
  unsigned int v1214; // ecx
  char v1215; // bl
  volatile signed __int8 **v1216; // r8
  volatile signed __int8 *v1217; // rdx
  unsigned __int8 v1218; // bl
  int v1219; // ecx
  unsigned int v1220; // eax
  unsigned int v1221; // ecx
  int v1222; // edx
  unsigned __int64 v1223; // rbx
  unsigned __int64 ii; // r14
  const char *v1225; // r14
  __int64 v1226; // r8
  const char *v1227; // rax
  int v1228; // r11d
  __int64 jj; // r15
  unsigned __int64 v1230; // rbx
  unsigned int v1231; // r10d
  __int64 v1232; // rdx
  __int64 v1233; // rax
  __int64 v1234; // rbx
  unsigned __int64 v1235; // rcx
  unsigned int v1236; // r8d
  unsigned __int64 v1237; // rdx
  __int64 v1238; // rax
  unsigned __int64 kk; // rax
  unsigned int v1240; // ebx
  __int64 v1241; // rcx
  __int64 v1242; // rdx
  unsigned __int8 v1243; // r12
  unsigned __int64 v1244; // r14
  unsigned __int64 v1245; // r13
  unsigned __int64 v1246; // r15
  int v1247; // eax
  __int64 v1248; // rbx
  __int64 (__fastcall *v1249)(__int64); // rax
  __int64 v1250; // rax
  _DWORD *v1251; // r15
  unsigned int v1252; // r12d
  int v1253; // eax
  unsigned __int64 v1254; // rcx
  __int64 v1255; // rcx
  const char *v1256; // r14
  __int64 v1257; // r8
  const char *v1258; // rax
  int v1259; // r10d
  __int64 mm; // r15
  unsigned __int64 v1261; // rbx
  unsigned int v1262; // r11d
  __int64 v1263; // rax
  __int64 v1264; // rbx
  unsigned __int128 v1265; // rax
  unsigned __int64 v1266; // rax
  __int64 v1267; // rax
  unsigned __int64 nn; // rax
  unsigned int v1269; // ebx
  BOOL v1270; // r13d
  __int64 v1271; // rcx
  __int64 v1272; // rdx
  unsigned __int8 v1273; // r12
  unsigned __int64 v1274; // r14
  int v1275; // eax
  _DWORD *v1276; // rdi
  unsigned int v1277; // ecx
  unsigned int v1278; // r11d
  unsigned int v1279; // r13d
  int v1280; // ecx
  __int16 v1281; // ax
  char *v1282; // r8
  int v1283; // r10d
  __int64 v1284; // rdx
  __int64 v1285; // rax
  unsigned int v1286; // r8d
  __int64 *v1287; // r10
  __int64 v1288; // rcx
  __int64 v1289; // rax
  __int64 v1290; // rdx
  __int64 v1291; // rax
  unsigned __int8 *v1292; // r8
  int v1293; // r10d
  __int64 v1294; // rdx
  __int64 v1295; // rax
  unsigned __int8 *v1296; // r8
  int v1297; // r10d
  __int64 v1298; // rdx
  __int64 v1299; // rax
  int v1300; // eax
  BOOL v1301; // r14d
  __int64 v1302; // rbx
  int v1303; // eax
  int *v1304; // rcx
  int v1305; // eax
  char *v1306; // rcx
  unsigned __int8 v1307; // bl
  unsigned int v1308; // edx
  int v1309; // ecx
  __int64 v1310; // rbx
  unsigned __int64 v1311; // r14
  __int64 v1312; // rbx
  unsigned __int64 v1313; // rbx
  __int64 v1314; // rcx
  unsigned __int8 CurrentIrql; // r15
  __int64 v1316; // rdx
  int *v1317; // r14
  unsigned int *v1318; // rcx
  unsigned int *v1319; // rbx
  char v1320; // r12
  unsigned __int64 v1321; // r13
  __int64 v1322; // r8
  __int64 *v1323; // r9
  unsigned int *v1324; // r10
  __int64 v1325; // rcx
  __int64 v1326; // rax
  __int64 v1327; // rax
  int *v1328; // rcx
  int *v1329; // rcx
  unsigned __int64 v1330; // rcx
  char *v1331; // r14
  char *v1332; // r12
  unsigned __int64 v1333; // rdi
  unsigned int v1334; // r15d
  unsigned __int64 v1335; // r13
  int v1336; // r10d
  const char *v1337; // rax
  __int64 v1338; // r11
  unsigned __int64 v1339; // rcx
  __int64 v1340; // rbx
  __int64 v1341; // rdx
  __int64 v1342; // rax
  __int64 v1343; // rbx
  unsigned __int64 v1344; // rcx
  unsigned int v1345; // edx
  __int64 v1346; // rax
  unsigned __int64 n; // rax
  int v1348; // ecx
  unsigned __int64 v1349; // rbx
  unsigned __int64 v1350; // r14
  _QWORD *v1351; // r14
  __int64 v1352; // r8
  _QWORD *v1353; // r9
  const char *v1354; // rax
  int v1355; // r11d
  __int64 v1356; // r15
  unsigned __int64 v1357; // rbx
  unsigned int v1358; // r10d
  __int64 v1359; // rdx
  __int64 v1360; // rax
  __int64 v1361; // rbx
  unsigned __int128 v1362; // rax
  unsigned int v1363; // r8d
  unsigned __int64 v1364; // rdx
  __int64 v1365; // rax
  unsigned __int64 k; // rax
  unsigned int v1367; // r8d
  unsigned int v1368; // ebx
  __int64 v1369; // rcx
  __int64 v1370; // rdx
  unsigned __int8 v1371; // r12
  unsigned __int64 v1372; // r14
  unsigned __int64 v1373; // r13
  unsigned __int64 v1374; // r15
  int v1375; // eax
  int v1376; // eax
  bool v1377; // zf
  __int64 v1378; // rcx
  __int64 v1379; // rax
  __int64 v1380; // rcx
  _QWORD *v1381; // r14
  __int64 v1382; // r8
  _QWORD *v1383; // r9
  const char *v1384; // rax
  int v1385; // r10d
  __int64 v1386; // r15
  unsigned __int64 v1387; // rbx
  unsigned int v1388; // r11d
  __int64 v1389; // rdx
  __int64 v1390; // rax
  __int64 v1391; // rbx
  unsigned __int128 v1392; // rax
  unsigned int v1393; // r8d
  unsigned __int64 v1394; // rdx
  __int64 v1395; // rax
  unsigned __int64 m; // rax
  unsigned int v1397; // ebx
  BOOL v1398; // r13d
  __int64 v1399; // rcx
  __int64 v1400; // rdx
  __int64 v1401; // r8
  unsigned __int8 v1402; // r12
  unsigned __int64 v1403; // r14
  int v1404; // eax
  int v1405; // eax
  int v1406; // eax
  _BYTE *v1407; // rbx
  char *v1408; // r14
  char v1409; // al
  volatile signed __int32 *v1410; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1412; // r8
  int v1413; // ecx
  struct _KPRCB *v1414; // rax
  unsigned __int64 v1415; // rcx
  int *v1416; // rcx
  unsigned int v1417; // ecx
  __int64 v1418; // rdx
  unsigned __int8 v1419; // r15
  unsigned __int64 v1420; // rbx
  __int64 v1421; // r13
  unsigned __int64 v1422; // r12
  unsigned __int64 v1423; // r14
  int v1424; // eax
  __int64 v1425; // rax
  int *v1426; // rcx
  __int64 v1427; // rcx
  unsigned __int8 v1428; // r15
  __int64 v1429; // rdx
  int *v1430; // r14
  unsigned int *v1431; // rcx
  unsigned int *v1432; // rbx
  char v1433; // r12
  unsigned __int64 v1434; // r13
  __int64 v1435; // r8
  __int64 *v1436; // r9
  unsigned int *v1437; // r10
  __int64 v1438; // rcx
  __int64 v1439; // rax
  __int64 v1440; // rax
  int *v1441; // rcx
  int *v1442; // rcx
  __int64 v1443; // r9
  _QWORD *v1444; // rbx
  int v1445; // r11d
  _QWORD *v1446; // r10
  __int64 v1447; // r15
  const char *v1448; // rax
  unsigned int v1449; // r14d
  __int64 v1450; // rdx
  unsigned __int64 v1451; // rax
  __int64 v1452; // r8
  unsigned __int64 v1453; // rcx
  unsigned __int64 v1454; // rdx
  __int64 v1455; // rax
  __int64 v1456; // rcx
  int v1457; // eax
  int v1458; // r10d
  int v1459; // r10d
  __int64 v1460; // r8
  unsigned int v1461; // ebx
  unsigned __int64 v1462; // rax
  unsigned int v1463; // r14d
  unsigned __int64 v1464; // rax
  __int64 v1465; // rdx
  __int64 v1466; // r8
  int v1467; // ecx
  _QWORD *v1468; // rax
  struct _KPRCB *v1469; // rdx
  __int64 v1470; // r8
  unsigned __int64 v1471; // rdx
  unsigned __int64 v1472; // rdx
  _QWORD *v1473; // r15
  __int64 v1474; // r14
  __int64 v1475; // rdx
  __int64 v1476; // r8
  int v1477; // ecx
  _QWORD *v1478; // rax
  unsigned __int64 v1479; // rcx
  unsigned __int16 Ldtr; // r12
  unsigned __int16 Tr; // ax
  __int64 v1482; // rdx
  __int64 v1483; // r9
  unsigned __int16 v1484; // r13
  __int64 v1485; // r11
  _QWORD *v1486; // r8
  const char *v1487; // rax
  unsigned __int64 v1488; // rbx
  unsigned int v1489; // r10d
  __int64 v1490; // rdx
  __int64 v1491; // rax
  __int64 v1492; // rbx
  unsigned __int64 v1493; // rcx
  unsigned int v1494; // r14d
  __int64 v1495; // rax
  unsigned __int64 i39; // rax
  unsigned int v1497; // ebx
  _QWORD *v1498; // rcx
  int v1499; // edx
  char v1500; // al
  __int64 v1501; // rax
  int v1502; // eax
  __int64 v1503; // rcx
  __int64 v1504; // rdx
  void (__fastcall *v1505)(_BYTE *, __int64); // rax
  unsigned int v1506; // edi
  __int64 v1507; // rcx
  ULONG_PTR v1508; // r10
  __int64 v1509; // r14
  unsigned __int64 v1510; // r8
  __int64 v1511; // r12
  __int64 v1512; // r13
  unsigned __int8 v1513; // r15
  __int16 v1514; // r9
  int v1515; // eax
  __int64 v1516; // rcx
  int *v1517; // rbx
  ULONG_PTR v1518; // r12
  char *v1519; // r13
  __int64 v1520; // rax
  unsigned int *v1521; // rax
  unsigned int *v1522; // rax
  __int64 v1523; // rax
  __int64 v1524; // rax
  __int64 v1525; // rax
  __int64 v1526; // rcx
  unsigned __int64 v1527; // rbx
  struct _KPRCB *v1528; // rdx
  _QWORD *v1529; // r15
  _QWORD *v1530; // r8
  int v1531; // ebx
  const char *v1532; // rax
  int v1533; // r9d
  __int64 v1534; // r11
  int v1535; // r10d
  unsigned __int64 v1536; // r14
  __int64 v1537; // rdx
  __int64 v1538; // rax
  __int64 *v1539; // r8
  __int64 v1540; // r14
  unsigned __int64 v1541; // rcx
  int v1542; // edx
  int v1543; // r12d
  __int64 v1544; // r10
  __int64 v1545; // rax
  unsigned __int64 i40; // rax
  unsigned int v1547; // r14d
  _QWORD *v1548; // rdx
  int v1549; // r9d
  unsigned __int64 v1550; // rbx
  const char *v1551; // rax
  __int64 v1552; // rax
  int v1553; // r8d
  __int64 v1554; // rax
  unsigned __int64 i41; // rax
  unsigned int v1556; // ebx
  __int64 v1557; // rdx
  unsigned __int64 v1558; // rcx
  __int64 v1559; // rcx
  __int64 v1560; // rax
  __int64 v1561; // rdx
  __int64 v1562; // rbx
  __int64 v1563; // rdx
  __int64 v1564; // rdx
  __int64 v1565; // rbx
  __int64 v1566; // rbx
  __int64 v1567; // r11
  unsigned int v1568; // r10d
  __int64 v1569; // r12
  unsigned __int64 v1570; // rcx
  unsigned __int128 v1571; // rax
  unsigned __int64 v1572; // r9
  int v1573; // r8d
  unsigned __int64 v1574; // rcx
  unsigned __int128 v1575; // rax
  unsigned __int64 v1576; // rcx
  unsigned __int128 v1577; // rax
  unsigned int v1578; // r14d
  __int64 v1579; // rbx
  unsigned __int64 v1580; // rcx
  unsigned __int128 v1581; // rax
  int v1582; // ecx
  _QWORD *v1583; // rax
  __int64 v1584; // r10
  unsigned __int64 v1585; // r8
  __int64 *v1586; // r9
  __int64 v1587; // rdx
  __int64 v1588; // rcx
  _QWORD *v1589; // rdx
  _QWORD *v1590; // rax
  int v1591; // ecx
  __int64 v1592; // r11
  __int64 *v1593; // r10
  __int64 v1594; // rdx
  unsigned int v1595; // r14d
  __int64 v1596; // rax
  int v1597; // ecx
  int v1598; // eax
  int v1599; // eax
  __int64 v1600; // rcx
  _BYTE *v1601; // rbx
  __int64 v1602; // r14
  int v1603; // r15d
  __int64 v1604; // r14
  int v1605; // ecx
  unsigned __int64 v1606; // rdx
  __int64 *v1607; // rbx
  __int64 v1608; // rax
  __int64 v1609; // rax
  unsigned __int64 v1610; // rax
  unsigned __int64 v1611; // rsi
  __int64 v1612; // r12
  unsigned __int64 v1613; // rsi
  int v1614; // r9d
  const char *v1615; // rdi
  unsigned int v1616; // r15d
  const char *v1617; // r10
  unsigned int v1618; // r11d
  const char *v1619; // rax
  unsigned __int64 v1620; // rcx
  unsigned __int64 v1621; // r8
  unsigned int v1622; // r14d
  __int64 v1623; // rax
  __int64 v1624; // r8
  unsigned __int128 v1625; // rax
  unsigned int v1626; // r11d
  unsigned __int64 v1627; // rax
  __int64 v1628; // rax
  _QWORD *v1629; // r12
  unsigned __int64 v1630; // r8
  _QWORD *v1631; // r10
  int v1632; // r11d
  const char *v1633; // rax
  __int64 v1634; // r13
  unsigned __int64 v1635; // rcx
  unsigned __int64 v1636; // r9
  unsigned int v1637; // r14d
  __int64 v1638; // rdx
  __int64 v1639; // rax
  __int64 v1640; // r9
  unsigned __int64 v1641; // rcx
  unsigned int v1642; // r15d
  unsigned __int64 v1643; // rdx
  __int64 v1644; // rax
  unsigned __int64 v1645; // rcx
  unsigned __int128 v1646; // rax
  unsigned __int64 v1647; // rcx
  int v1648; // ecx
  int v1649; // ecx
  unsigned int v1650; // r9d
  int v1651; // ecx
  int v1652; // ecx
  int v1653; // ecx
  unsigned __int64 v1654; // rcx
  __int64 v1655; // rax
  unsigned int v1656; // r9d
  int v1657; // ecx
  char *v1658; // rcx
  unsigned __int64 v1659; // rax
  char v1660; // r13
  __int64 v1661; // rax
  unsigned __int64 v1662; // rbx
  char *v1663; // r14
  char *v1664; // rdi
  int v1665; // r11d
  int v1666; // ecx
  __int16 v1667; // ax
  char *v1668; // r8
  int v1669; // r10d
  signed __int64 v1670; // r9
  __int64 v1671; // rdx
  __int64 v1672; // rax
  __int64 *v1673; // r9
  unsigned int v1674; // r8d
  __int64 *v1675; // r10
  __int64 v1676; // rcx
  __int64 v1677; // rax
  __int64 v1678; // rdx
  __int64 v1679; // rax
  char *v1680; // r8
  int v1681; // r10d
  __int64 v1682; // rdx
  __int64 v1683; // rax
  char *v1684; // r8
  int v1685; // r10d
  __int64 v1686; // rdx
  __int64 v1687; // rax
  unsigned int v1688; // r9d
  _QWORD *v1689; // r15
  int v1690; // r11d
  unsigned __int64 v1691; // rcx
  _QWORD *v1692; // r10
  const char *v1693; // rax
  unsigned __int64 v1694; // r8
  unsigned int v1695; // r12d
  __int64 v1696; // rax
  __int64 v1697; // r8
  unsigned __int128 v1698; // rax
  unsigned int v1699; // r9d
  unsigned __int64 v1700; // rax
  __int64 v1701; // rax
  int v1702; // r8d
  const char *v1703; // rdx
  unsigned __int64 v1704; // r13
  __int64 v1705; // rcx
  __int64 v1706; // rax
  unsigned __int64 v1707; // r12
  __int64 v1708; // r15
  __int64 v1709; // rax
  unsigned __int64 v1710; // r14
  unsigned int v1711; // ecx
  int *v1712; // rax
  __int64 v1713; // r14
  int v1714; // r10d
  int v1715; // r12d
  int ***v1716; // r15
  unsigned int v1717; // r9d
  __int64 v1718; // r11
  unsigned int v1719; // r13d
  int v1720; // r8d
  int *v1721; // r14
  int v1722; // eax
  unsigned __int64 *v1723; // r15
  unsigned __int64 v1724; // r15
  unsigned int v1725; // r12d
  int v1726; // r10d
  const char *v1727; // rax
  __int64 v1728; // r14
  unsigned int v1729; // r11d
  __int64 v1730; // rdx
  unsigned __int64 v1731; // rax
  __int64 v1732; // r8
  unsigned __int64 v1733; // rcx
  unsigned __int64 v1734; // r11
  __int64 v1735; // rax
  __int64 v1736; // r14
  __int64 v1737; // rcx
  const char **v1738; // r13
  const char *v1739; // r12
  __int64 v1740; // r13
  unsigned int v1741; // r15d
  unsigned int v1742; // eax
  unsigned __int64 v1743; // r14
  int v1744; // ecx
  unsigned int v1745; // eax
  __int64 v1746; // r8
  int v1747; // edx
  unsigned __int64 v1748; // rcx
  int v1749; // ebx
  int v1750; // ecx
  __int64 v1751; // rbx
  _QWORD *v1752; // rax
  int v1753; // ecx
  __int64 v1754; // rdx
  const char *v1755; // rax
  int v1756; // r10d
  __int64 v1757; // rsi
  unsigned __int64 v1758; // rcx
  unsigned int i53; // r11d
  __int64 v1760; // rdx
  unsigned __int64 v1761; // rax
  __int64 v1762; // r8
  unsigned __int64 v1763; // rcx
  unsigned __int64 v1764; // r11
  unsigned __int64 i54; // rax
  __int64 v1766; // r14
  int v1767; // r15d
  int v1768; // r12d
  unsigned int v1769; // eax
  __int64 v1770; // rsi
  int v1771; // ecx
  unsigned int v1772; // eax
  __int64 v1773; // r8
  int v1774; // edx
  unsigned __int64 v1775; // rcx
  int v1776; // ebx
  int v1777; // ecx
  __int64 v1778; // rbx
  _QWORD *v1779; // rax
  int v1780; // ecx
  __int64 v1781; // rdx
  const char *v1782; // rcx
  unsigned __int64 v1783; // rcx
  int v1784; // r11d
  __int64 v1785; // r10
  unsigned __int64 v1786; // r13
  __int64 v1787; // r14
  const char *v1788; // r12
  unsigned int v1789; // r15d
  unsigned int v1790; // eax
  __int64 v1791; // rsi
  int v1792; // ecx
  unsigned int v1793; // eax
  __int64 v1794; // r8
  int v1795; // edx
  unsigned __int64 v1796; // rcx
  int v1797; // ebx
  int v1798; // ecx
  __int64 v1799; // rbx
  _QWORD *v1800; // rax
  int v1801; // ecx
  __int64 v1802; // rdx
  const char *v1803; // rax
  int v1804; // r10d
  __int64 v1805; // r14
  unsigned __int64 v1806; // rcx
  unsigned int v1807; // r11d
  __int64 v1808; // rdx
  unsigned __int64 v1809; // rax
  __int64 v1810; // r8
  unsigned __int64 v1811; // rcx
  unsigned __int64 v1812; // r11
  unsigned __int64 i55; // rax
  __int64 v1814; // r14
  int v1815; // r15d
  int v1816; // r12d
  unsigned int v1817; // eax
  __int64 v1818; // rsi
  int v1819; // ecx
  unsigned int v1820; // eax
  __int64 v1821; // r8
  int v1822; // edx
  unsigned __int64 v1823; // rcx
  int v1824; // ebx
  int v1825; // ecx
  __int64 v1826; // rbx
  _QWORD *v1827; // rax
  int v1828; // ecx
  __int64 v1829; // rdx
  int v1830; // r11d
  __int64 v1831; // r10
  int v1832; // eax
  _BYTE *v1833; // rsi
  _BYTE *v1834; // r14
  int v1835; // r13d
  const char *v1836; // r15
  unsigned int v1837; // ebx
  int *v1838; // rdi
  __int64 v1839; // r14
  unsigned int v1840; // ecx
  int v1841; // ecx
  unsigned int v1842; // eax
  __int64 v1843; // r8
  int v1844; // edx
  unsigned __int64 v1845; // rcx
  int v1846; // esi
  int v1847; // ecx
  int v1848; // eax
  _BYTE *v1849; // rcx
  _QWORD *v1850; // rax
  int v1851; // edx
  const char *v1852; // r9
  int v1853; // r12d
  int *v1854; // rcx
  int *v1855; // r15
  __int64 (__fastcall *v1856)(__int64, _BYTE *, _QWORD); // rax
  const char *v1857; // rsi
  const char *v1858; // rax
  unsigned __int64 i58; // rdx
  __int64 v1860; // rax
  __int64 v1861; // rsi
  unsigned __int64 i59; // rax
  char *v1863; // rax
  __int64 v1864; // rax
  int v1865; // r13d
  const char *v1866; // rsi
  unsigned int v1867; // ebx
  __int64 v1868; // r15
  unsigned int v1869; // ecx
  int v1870; // ecx
  unsigned int v1871; // eax
  __int64 v1872; // r8
  int v1873; // edx
  unsigned __int64 v1874; // rcx
  int v1875; // esi
  int v1876; // ecx
  int v1877; // eax
  _BYTE *v1878; // rcx
  _QWORD *v1879; // rax
  int v1880; // edx
  int v1881; // r12d
  int *v1882; // rcx
  int *v1883; // r15
  __int64 (__fastcall *v1884)(const char *, char *, _QWORD, unsigned __int64); // rax
  const char *v1885; // rsi
  const char *v1886; // rax
  unsigned __int64 i56; // rdx
  __int64 v1888; // rax
  __int64 v1889; // rsi
  unsigned __int64 i57; // rax
  char *v1891; // rax
  __int64 v1892; // rax
  int v1893; // eax
  __int64 v1894; // rax
  const char *v1895; // rcx
  __int64 (__fastcall *v1896)(const char *, char *, unsigned __int64); // rax
  int v1897; // r13d
  __int64 v1898; // r12
  int v1899; // ecx
  int *v1900; // rax
  int v1901; // ecx
  int v1902; // r11d
  _BYTE *v1903; // r14
  unsigned int v1904; // r10d
  __int64 v1905; // r9
  int v1906; // ecx
  int v1907; // ecx
  int v1908; // ecx
  int v1909; // ecx
  __int64 v1910; // rax
  int v1911; // eax
  unsigned __int64 v1912; // rdx
  __int64 v1913; // r10
  char *v1914; // r13
  __int64 (__fastcall *v1915)(const char *, char *, _QWORD, unsigned __int64); // rax
  unsigned int v1916; // r12d
  int v1917; // ecx
  int *v1918; // rax
  unsigned __int64 v1919; // rdx
  int v1920; // ecx
  int v1921; // r11d
  _BYTE *v1922; // r14
  unsigned int v1923; // r10d
  char **v1924; // r8
  __int64 v1925; // r9
  int v1926; // ecx
  int v1927; // ecx
  int v1928; // ecx
  int v1929; // ecx
  __int64 v1930; // rax
  int v1931; // eax
  __int64 v1932; // r10
  unsigned int v1933; // eax
  ULONG_PTR v1934; // r14
  unsigned int v1935; // eax
  __int64 v1936; // rdx
  int v1937; // ecx
  __int64 (__fastcall *v1938)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  ULONG_PTR v1939; // r15
  __int64 v1940; // rax
  __int64 v1941; // rdx
  __int64 (__fastcall *v1942)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v1943; // rax
  __int64 v1944; // rdx
  __int64 (__fastcall *v1945)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v1946)(ULONG_PTR); // rax
  __int64 v1947; // r14
  __int64 v1948; // rax
  int v1949; // r8d
  __int64 v1950; // r15
  unsigned int v1951; // eax
  const char *v1952; // r14
  int v1953; // ecx
  unsigned int v1954; // eax
  __int64 v1955; // r8
  int v1956; // edx
  unsigned __int64 v1957; // rcx
  int v1958; // ebx
  int v1959; // ecx
  char *v1960; // r10
  _QWORD *v1961; // r13
  unsigned int *v1962; // rdi
  __int64 v1963; // r15
  __int64 v1964; // rdx
  _QWORD *v1965; // rsi
  int v1966; // ecx
  _QWORD *v1967; // rax
  _QWORD *v1968; // r9
  const char *v1969; // rax
  int v1970; // r11d
  __int64 v1971; // r12
  unsigned __int64 v1972; // r8
  unsigned int v1973; // ebx
  __int64 v1974; // rdx
  __int64 v1975; // rax
  __int64 v1976; // r8
  unsigned __int64 v1977; // rcx
  unsigned int v1978; // edx
  unsigned __int64 v1979; // rbx
  __int64 v1980; // rax
  unsigned __int64 i45; // rax
  char *v1982; // rax
  ULONG_PTR v1983; // r13
  unsigned int v1984; // r8d
  ULONG_PTR v1985; // r9
  int v1986; // edx
  unsigned int v1987; // r9d
  _QWORD *v1988; // rbx
  _DWORD *v1989; // r12
  int v1990; // ecx
  _QWORD *v1991; // rax
  __int64 v1992; // rdx
  _QWORD *v1993; // r10
  const char *v1994; // rax
  int v1995; // r11d
  __int64 v1996; // r15
  unsigned __int64 v1997; // rcx
  unsigned int v1998; // r14d
  __int64 v1999; // rdx
  unsigned __int64 v2000; // rax
  __int64 v2001; // r8
  unsigned __int64 v2002; // rcx
  unsigned __int64 v2003; // rdx
  __int64 v2004; // rax
  unsigned __int64 i46; // rax
  char *v2006; // rax
  __int64 v2007; // r14
  unsigned int v2008; // eax
  __int64 v2009; // rbx
  int v2010; // ecx
  unsigned int v2011; // eax
  __int64 v2012; // r8
  int v2013; // edx
  unsigned __int64 v2014; // rcx
  int v2015; // esi
  int v2016; // ecx
  __int64 v2017; // rsi
  int v2018; // ecx
  _QWORD *v2019; // rax
  __int64 v2020; // rdx
  const char *v2021; // r12
  unsigned int v2022; // r15d
  int v2023; // r10d
  __int64 v2024; // r14
  const char *v2025; // rax
  unsigned int v2026; // r11d
  __int64 v2027; // rax
  __int64 v2028; // r8
  unsigned __int128 v2029; // rax
  unsigned __int64 i47; // rax
  char *v2031; // rbx
  __int64 v2032; // r14
  __int64 v2033; // rcx
  unsigned __int64 v2034; // rcx
  _QWORD *v2035; // rax
  _QWORD *v2036; // rax
  ULONG_PTR v2037; // r14
  __int64 v2038; // r15
  unsigned __int16 v2039; // r10
  unsigned int v2040; // ecx
  unsigned int *v2041; // rbx
  unsigned int *v2042; // r11
  unsigned int *v2043; // r12
  unsigned int v2044; // r15d
  unsigned int v2045; // r15d
  __int64 v2046; // rax
  unsigned int v2047; // ecx
  unsigned int v2048; // r14d
  unsigned int v2049; // r14d
  unsigned int *v2050; // r13
  ULONG_PTR v2051; // r8
  unsigned int *v2052; // rdx
  unsigned int v2053; // edx
  __int64 v2054; // r15
  unsigned __int64 v2055; // r13
  unsigned int v2056; // r12d
  unsigned int v2057; // ecx
  __int64 v2058; // r14
  unsigned int v2059; // eax
  unsigned __int64 v2060; // rbx
  int v2061; // ecx
  unsigned int v2062; // eax
  __int64 v2063; // r8
  int v2064; // edx
  unsigned __int64 v2065; // rcx
  int v2066; // esi
  int v2067; // ecx
  __int64 v2068; // rcx
  _QWORD *v2069; // rax
  int v2070; // edx
  __int64 v2071; // r8
  char *v2072; // rax
  unsigned __int64 v2073; // rdx
  unsigned __int64 i48; // rax
  int v2075; // ecx
  unsigned int *v2076; // r12
  __int64 v2077; // rax
  __int64 v2078; // r14
  char *v2079; // r13
  char *v2080; // r14
  unsigned int *v2081; // r11
  __int64 v2082; // rcx
  char *v2083; // rsi
  int v2084; // r11d
  int v2085; // ecx
  __int16 v2086; // ax
  char *v2087; // r8
  int v2088; // r10d
  signed __int64 v2089; // r9
  __int64 v2090; // rdx
  __int64 v2091; // rax
  __int64 *v2092; // r9
  unsigned int v2093; // r8d
  __int64 *v2094; // r10
  __int64 v2095; // rcx
  __int64 v2096; // rax
  __int64 v2097; // rdx
  __int64 v2098; // rax
  char *v2099; // r8
  int v2100; // r10d
  __int64 v2101; // rdx
  __int64 v2102; // rax
  char *v2103; // r8
  int v2104; // r10d
  __int64 v2105; // rdx
  __int64 v2106; // rax
  int v2107; // ecx
  unsigned int v2108; // ecx
  unsigned int v2109; // edx
  unsigned int v2110; // ecx
  unsigned int v2111; // r13d
  unsigned int *v2112; // rcx
  unsigned __int64 *v2113; // rdx
  __int64 v2114; // rax
  unsigned int v2115; // r9d
  unsigned __int64 v2116; // rsi
  unsigned __int64 v2117; // r14
  _QWORD *v2118; // r10
  int v2119; // r11d
  const char *v2120; // rax
  __int64 v2121; // r12
  unsigned int v2122; // r14d
  __int64 v2123; // rdx
  unsigned __int64 v2124; // rax
  __int64 v2125; // r8
  unsigned __int64 v2126; // rcx
  unsigned int v2127; // r9d
  unsigned __int64 v2128; // rdx
  __int64 v2129; // rax
  unsigned __int64 i49; // rax
  bool v2131; // cc
  int v2132; // r13d
  unsigned int v2133; // r12d
  _BYTE *v2134; // rax
  char v2135; // r8
  __int64 v2136; // r14
  unsigned int v2137; // r15d
  ULONG_PTR v2138; // rdx
  unsigned int *v2139; // rcx
  unsigned __int64 v2140; // rsi
  ULONG_PTR *v2141; // rdx
  unsigned int v2142; // r9d
  ULONG_PTR v2143; // r14
  unsigned int i50; // r8d
  _QWORD *v2145; // r10
  int v2146; // r11d
  const char *v2147; // rax
  __int64 v2148; // r15
  unsigned __int64 v2149; // r8
  unsigned int v2150; // r14d
  __int64 v2151; // rdx
  __int64 v2152; // rax
  __int64 v2153; // r8
  unsigned __int64 v2154; // rcx
  unsigned int v2155; // r9d
  unsigned __int64 v2156; // rdx
  __int64 v2157; // rax
  unsigned __int64 i51; // rax
  unsigned int *v2159; // r12
  ULONG_PTR v2160; // rsi
  unsigned __int64 *v2161; // rdx
  unsigned int v2162; // r9d
  __int64 v2163; // rax
  unsigned int *v2164; // rcx
  unsigned __int64 v2165; // rsi
  unsigned __int64 v2166; // r14
  _QWORD *v2167; // r10
  int v2168; // r11d
  const char *v2169; // rax
  __int64 v2170; // r15
  unsigned int v2171; // r14d
  __int64 v2172; // rdx
  unsigned __int64 v2173; // rax
  __int64 v2174; // r8
  unsigned __int64 v2175; // rcx
  unsigned __int64 v2176; // rdx
  __int64 v2177; // rax
  unsigned __int64 i52; // rax
  __int64 v2179; // rax
  int v2180; // ecx
  _DWORD *v2181; // r12
  __int64 v2182; // rcx
  __int64 v2183; // rax
  char *v2184; // r15
  char *i44; // r14
  __int64 v2186; // rax
  _QWORD *v2187; // r15
  int v2188; // r12d
  __int64 v2189; // r13
  unsigned int v2190; // eax
  __int64 v2191; // r14
  int v2192; // ecx
  unsigned int v2193; // eax
  __int64 v2194; // r8
  int v2195; // edx
  unsigned __int64 v2196; // rcx
  int v2197; // ebx
  int v2198; // ecx
  __int64 v2199; // rbx
  _QWORD *v2200; // rax
  int v2201; // ecx
  __int64 v2202; // rdx
  unsigned __int64 v2203; // rax
  unsigned __int64 i42; // rcx
  int v2205; // r9d
  int v2206; // r13d
  int v2207; // eax
  int v2208; // r8d
  unsigned int v2209; // eax
  __int64 v2210; // r14
  int v2211; // ecx
  unsigned int v2212; // eax
  __int64 v2213; // r8
  int v2214; // edx
  unsigned __int64 v2215; // rcx
  int v2216; // ebx
  int v2217; // ecx
  __int64 v2218; // rbx
  __int64 v2219; // rbx
  _QWORD *v2220; // rax
  int v2221; // ecx
  __int64 v2222; // rdx
  const char *v2223; // rax
  int v2224; // r10d
  __int64 v2225; // rsi
  unsigned __int64 v2226; // rcx
  unsigned int v2227; // r11d
  __int64 v2228; // rax
  __int64 v2229; // r8
  unsigned __int128 v2230; // rax
  unsigned __int64 i43; // rax
  __int64 v2232; // rcx
  __int64 v2233; // rbx
  int v2234; // r14d
  __int64 v2235; // rbx
  int v2236; // ecx
  __int64 v2237; // rcx
  __int64 v2238; // rbx
  __int64 v2239; // rbx
  unsigned __int128 v2240; // rax
  unsigned __int64 v2241; // r8
  unsigned __int64 v2242; // rcx
  __int64 v2243; // rcx
  _QWORD *v2244; // rcx
  __int64 v2245; // r9
  __int64 v2246; // rax
  int *v2247; // r14
  const char *v2248; // r11
  __int64 v2249; // r9
  __int64 v2250; // r8
  const char *v2251; // rax
  int v2252; // r10d
  __int64 i60; // r12
  unsigned __int64 v2254; // rbx
  unsigned int v2255; // r15d
  __int64 v2256; // rax
  __int64 v2257; // rbx
  unsigned __int128 v2258; // rax
  char v2259; // r10
  __int64 v2260; // rdx
  unsigned int v2261; // r9d
  unsigned __int64 v2262; // rax
  __int64 v2263; // rax
  unsigned __int64 i61; // rax
  unsigned int v2265; // ebx
  BOOL v2266; // r12d
  __int64 v2267; // rcx
  __int64 v2268; // rdx
  unsigned __int8 v2269; // al
  unsigned __int64 v2270; // r15
  unsigned __int64 v2271; // r13
  int v2272; // eax
  int v2273; // eax
  __int64 v2274; // rcx
  unsigned __int64 v2275; // rcx
  unsigned __int64 i62; // rax
  __int64 v2277; // r9
  unsigned __int64 v2278; // rcx
  __int64 v2279; // rcx
  __int64 v2280; // r8
  _QWORD *v2281; // r12
  unsigned __int64 v2282; // rcx
  __int64 v2283; // rax
  int v2284; // ebx
  unsigned __int64 v2285; // rcx
  unsigned __int128 v2286; // rax
  unsigned __int64 v2287; // r15
  __int64 v2288; // r11
  int v2289; // r13d
  __int64 v2290; // rax
  const char *v2291; // rax
  unsigned int v2292; // r12d
  unsigned int v2293; // r12d
  unsigned __int64 v2294; // rcx
  unsigned __int128 v2295; // rax
  signed __int64 v2296; // rbx
  _QWORD *v2297; // r14
  _BYTE *v2298; // rdx
  int v2299; // r8d
  char *v2300; // rcx
  __int64 v2301; // r9
  char v2302; // al
  int v2303; // ecx
  _QWORD *v2304; // rax
  __int64 v2305; // rdx
  _QWORD *v2306; // r10
  const char *v2307; // rax
  __int64 v2308; // r11
  int v2309; // r9d
  __int64 v2310; // r13
  __int64 v2311; // r8
  unsigned int i64; // r15d
  __int64 v2313; // rdx
  __int64 v2314; // rax
  __int64 v2315; // r8
  signed __int64 v2316; // rcx
  unsigned int v2317; // r11d
  unsigned __int64 v2318; // rdx
  __int64 v2319; // rax
  char *v2320; // rcx
  __int64 v2321; // rdx
  int v2322; // r10d
  char v2323; // al
  unsigned int v2324; // eax
  _QWORD *v2325; // rcx
  unsigned int v2326; // r8d
  _QWORD *v2327; // rdx
  int v2328; // r9d
  _QWORD *v2329; // r8
  unsigned __int64 v2330; // r10
  unsigned __int64 v2331; // rcx
  unsigned __int64 v2332; // rcx
  unsigned int v2333; // ebx
  unsigned __int64 v2334; // r9
  unsigned __int64 v2335; // r10
  unsigned __int64 v2336; // rcx
  unsigned __int64 v2337; // rcx
  unsigned __int64 v2338; // rcx
  int v2339; // r8d
  __int64 v2340; // r14
  char *v2341; // rcx
  _QWORD *v2342; // rdx
  char v2343; // al
  int v2344; // eax
  unsigned __int64 v2345; // rcx
  unsigned __int128 v2346; // rax
  signed __int64 v2347; // rbx
  _QWORD *v2348; // r12
  unsigned __int64 v2349; // r14
  _BYTE *v2350; // rdx
  int v2351; // r8d
  char *v2352; // rcx
  __int64 v2353; // r10
  char v2354; // al
  int v2355; // ecx
  _QWORD *v2356; // rax
  __int64 v2357; // rdx
  _QWORD *v2358; // r10
  const char *v2359; // rax
  __int64 v2360; // r11
  int v2361; // r15d
  __int64 v2362; // r8
  unsigned int v2363; // r13d
  __int64 v2364; // rdi
  __int64 v2365; // rdx
  __int64 v2366; // rax
  __int64 v2367; // r8
  unsigned __int64 v2368; // rcx
  unsigned int v2369; // r11d
  unsigned __int64 v2370; // rdx
  __int64 v2371; // rax
  _BYTE *v2372; // rcx
  __int64 v2373; // r10
  _QWORD *v2374; // rcx
  unsigned int i63; // eax
  unsigned int v2376; // r8d
  unsigned __int64 v2377; // rcx
  __int64 v2378; // rcx
  unsigned __int64 v2379; // rsi
  unsigned int v2380; // r12d
  unsigned __int64 v2381; // r10
  unsigned __int64 *v2382; // r11
  unsigned int v2383; // ebx
  unsigned int v2384; // r15d
  unsigned __int64 v2385; // rdx
  __int64 v2386; // r8
  unsigned int v2387; // r13d
  unsigned __int64 v2388; // rdi
  unsigned __int64 v2389; // rdx
  unsigned __int64 v2390; // rdx
  char v2391; // r8
  unsigned int v2392; // eax
  _QWORD *v2393; // r15
  __int64 v2394; // r11
  _QWORD *v2395; // r10
  const char *v2396; // rax
  int v2397; // r9d
  __int64 v2398; // r12
  unsigned int v2399; // ebx
  __int64 v2400; // rax
  __int64 v2401; // r8
  unsigned int v2402; // r11d
  unsigned __int64 v2403; // rax
  __int64 v2404; // rax
  unsigned __int64 v2405; // rax
  unsigned __int64 v2406; // rcx
  unsigned __int128 v2407; // rax
  unsigned __int64 v2408; // rdi
  unsigned int v2409; // r14d
  unsigned int v2410; // r11d
  __int64 v2411; // r15
  unsigned __int64 *v2412; // r10
  unsigned int v2413; // ebx
  unsigned __int64 v2414; // r9
  unsigned __int64 v2415; // rdx
  __int64 v2416; // r8
  unsigned int v2417; // r13d
  unsigned __int64 v2418; // rdx
  unsigned __int64 v2419; // rdx
  unsigned int v2420; // eax
  _QWORD *v2421; // rbx
  _BYTE *v2422; // rdx
  unsigned __int64 v2423; // r12
  int v2424; // r13d
  char *v2425; // rcx
  int v2426; // r8d
  __int64 v2427; // r9
  char v2428; // al
  int v2429; // ecx
  _QWORD *v2430; // rax
  __int64 v2431; // rdx
  _QWORD *v2432; // r10
  const char *v2433; // rax
  __int64 v2434; // r11
  int v2435; // r9d
  __int64 v2436; // r15
  unsigned int v2437; // r14d
  __int64 v2438; // rax
  __int64 v2439; // r8
  unsigned __int128 v2440; // rax
  unsigned int v2441; // r11d
  unsigned __int64 v2442; // rax
  __int64 v2443; // rax
  char *v2444; // rcx
  int v2445; // r10d
  char v2446; // al
  int v2447; // r14d
  __int64 v2448; // r12
  __int64 v2449; // rax
  __int64 v2450; // r15
  __int64 v2451; // r13
  __int64 *v2452; // r10
  unsigned int v2453; // ebx
  __int64 v2454; // rdx
  __int64 v2455; // r8
  unsigned __int64 v2456; // rcx
  __int64 v2457; // rax
  const char *v2458; // rax
  unsigned int v2459; // r12d
  unsigned int v2460; // r12d
  unsigned __int64 v2461; // rcx
  unsigned __int128 v2462; // rax
  signed __int64 v2463; // rbx
  _QWORD *v2464; // r14
  _BYTE *v2465; // rdx
  int v2466; // r8d
  char *v2467; // rcx
  __int64 v2468; // r9
  char v2469; // al
  int v2470; // ecx
  _QWORD *v2471; // rax
  __int64 v2472; // rdx
  _QWORD *v2473; // r9
  __int64 v2474; // r11
  int v2475; // r10d
  __int64 v2476; // r8
  const char *v2477; // rax
  unsigned int v2478; // r15d
  __int64 v2479; // rdi
  __int64 v2480; // rax
  __int64 v2481; // r8
  unsigned __int128 v2482; // rax
  unsigned int v2483; // r11d
  unsigned __int64 v2484; // rax
  __int64 v2485; // rax
  char *v2486; // rcx
  __int64 v2487; // rdx
  int v2488; // r10d
  char v2489; // al
  unsigned int v2490; // eax
  _QWORD *v2491; // rcx
  unsigned int v2492; // r8d
  _QWORD *v2493; // rdx
  unsigned __int64 v2494; // rcx
  unsigned __int128 v2495; // rax
  unsigned __int64 v2496; // rdi
  unsigned int v2497; // r14d
  unsigned int v2498; // r11d
  __int64 v2499; // r15
  unsigned __int64 *v2500; // r10
  unsigned int v2501; // ebx
  unsigned __int64 v2502; // r9
  unsigned __int64 v2503; // rdx
  __int64 v2504; // r8
  unsigned int v2505; // r12d
  unsigned __int64 v2506; // rdx
  unsigned __int64 v2507; // rdx
  unsigned int v2508; // eax
  unsigned __int64 v2509; // rcx
  unsigned __int64 v2510; // rcx
  unsigned __int128 v2511; // kr10_16
  unsigned __int64 i65; // r13
  _DWORD *v2513; // r15
  unsigned __int64 v2514; // rcx
  unsigned __int128 v2515; // rax
  int v2516; // r8d
  char *v2517; // r14
  char *v2518; // rcx
  int *v2519; // rdx
  __int64 v2520; // r9
  char v2521; // al
  int v2522; // eax
  unsigned __int64 v2523; // r8
  int v2524; // r10d
  unsigned __int64 v2525; // rcx
  unsigned __int64 v2526; // rcx
  int v2527; // r9d
  unsigned __int64 v2528; // rcx
  unsigned __int64 v2529; // rcx
  int v2530; // edx
  unsigned __int64 v2531; // rbx
  __int64 v2532; // rsi
  __int64 v2533; // r8
  unsigned __int64 v2534; // r13
  __int64 v2535; // rax
  __int64 v2536; // r9
  unsigned __int64 v2537; // rcx
  int v2538; // r10d
  char v2539; // dl
  _QWORD *v2540; // rax
  __int64 v2541; // r8
  int v2542; // r10d
  __int64 v2543; // rcx
  __int64 v2544; // r8
  _QWORD *v2545; // rax
  __int64 v2546; // rdx
  unsigned __int64 v2547; // rdx
  _QWORD *v2548; // r10
  unsigned __int64 v2549; // r9
  __int64 v2550; // r8
  unsigned __int64 v2551; // rcx
  unsigned __int128 v2552; // rax
  __int64 v2553; // rdx
  _QWORD *v2554; // rax
  __int64 v2555; // r10
  __int64 v2556; // r10
  unsigned __int64 v2557; // rcx
  unsigned __int64 v2558; // r8
  char v2559; // r11
  unsigned __int64 *v2560; // rdx
  __int16 v2561; // ax
  unsigned __int64 v2562; // r8
  int v2563; // ecx
  int v2564; // ecx
  int v2565; // ecx
  int v2566; // ecx
  __int64 v2567; // r8
  unsigned __int64 v2568; // rax
  unsigned __int128 v2569; // rax
  __int64 v2570; // r8
  __int64 v2571; // rcx
  __int64 v2572; // rax
  __int64 v2573; // rdi
  int v2574; // edx
  int *v2575; // rcx
  __int64 v2576; // r13
  char v2577; // al
  __int64 v2578; // rdi
  __int64 v2579; // rcx
  int v2580; // edx
  int *v2581; // rcx
  __int64 v2582; // r13
  char v2583; // al
  unsigned __int64 v2584; // rax
  unsigned __int128 v2585; // rax
  unsigned __int64 v2586; // rdi
  unsigned __int128 v2587; // rax
  __int64 v2588; // r13
  int v2589; // ebx
  int v2590; // edi
  int v2591; // r14d
  struct _KPRCB *v2592; // rdx
  unsigned __int64 v2593; // rsi
  __int64 v2594; // r15
  unsigned __int64 v2595; // r9
  unsigned __int64 v2596; // r12
  unsigned __int64 v2597; // r10
  unsigned __int64 v2598; // r14
  unsigned int v2599; // r8d
  _QWORD *v2600; // rdx
  unsigned __int64 v2601; // rcx
  unsigned __int64 v2602; // rax
  __int64 v2603; // rdi
  _QWORD *v2604; // rcx
  char *v2605; // r8
  int v2606; // r11d
  unsigned __int64 v2607; // rbx
  signed __int64 v2608; // r8
  __int64 v2609; // rax
  int v2611; // ecx
  int v2612; // ecx
  int v2613; // ecx
  int v2614; // ecx
  int v2615; // ecx
  volatile signed __int32 *v2616; // rax
  signed __int32 v2617[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v2618; // [rsp+28h] [rbp-D8h]
  int *v2619; // [rsp+50h] [rbp-B0h]
  __int64 v2620; // [rsp+58h] [rbp-A8h]
  char *v2621; // [rsp+60h] [rbp-A0h]
  unsigned int v2622; // [rsp+68h] [rbp-98h]
  __int64 v2623; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  __int64 v2625; // [rsp+80h] [rbp-80h]
  unsigned int v2626; // [rsp+88h] [rbp-78h]
  char *v2627; // [rsp+90h] [rbp-70h]
  char *v2628; // [rsp+98h] [rbp-68h]
  const char *v2629; // [rsp+A0h] [rbp-60h]
  unsigned int v2630; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v2631; // [rsp+B0h] [rbp-50h]
  unsigned int v2632; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v2633; // [rsp+C0h] [rbp-40h]
  int v2634; // [rsp+C8h] [rbp-38h]
  char *v2635; // [rsp+D0h] [rbp-30h]
  _DWORD *v2636; // [rsp+D8h] [rbp-28h]
  char v2637[8]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v2638; // [rsp+E8h] [rbp-18h]
  unsigned int v2639; // [rsp+F0h] [rbp-10h]
  char v2640[4]; // [rsp+F4h] [rbp-Ch] BYREF
  int v2641; // [rsp+F8h] [rbp-8h]
  unsigned int v2642; // [rsp+FCh] [rbp-4h] BYREF
  unsigned int v2643; // [rsp+100h] [rbp+0h]
  unsigned int v2644; // [rsp+104h] [rbp+4h] BYREF
  int *v2645; // [rsp+108h] [rbp+8h]
  unsigned __int64 v2646; // [rsp+110h] [rbp+10h]
  int v2647; // [rsp+118h] [rbp+18h]
  unsigned int v2648; // [rsp+11Ch] [rbp+1Ch]
  __int64 v2649; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 v2650; // [rsp+128h] [rbp+28h] BYREF
  _BYTE *v2651; // [rsp+130h] [rbp+30h] BYREF
  _BYTE *v2652; // [rsp+138h] [rbp+38h] BYREF
  int v2653; // [rsp+140h] [rbp+40h]
  _BYTE *v2654; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v2655[16]; // [rsp+150h] [rbp+50h]
  _BYTE v2656[16]; // [rsp+160h] [rbp+60h]
  _BYTE v2657[16]; // [rsp+170h] [rbp+70h]
  _BYTE v2658[16]; // [rsp+180h] [rbp+80h]
  _BYTE *v2659; // [rsp+190h] [rbp+90h] BYREF
  char *v2660; // [rsp+198h] [rbp+98h]
  unsigned __int8 v2661; // [rsp+1A0h] [rbp+A0h]
  unsigned __int8 v2662; // [rsp+1A1h] [rbp+A1h]
  unsigned __int8 v2663; // [rsp+1A2h] [rbp+A2h]
  _DWORD *v2664; // [rsp+1A8h] [rbp+A8h]
  __int64 v2665; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v2666; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v2667; // [rsp+1BCh] [rbp+BCh] BYREF
  int v2668; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v2669; // [rsp+1C4h] [rbp+C4h] BYREF
  _BYTE *v2670; // [rsp+1C8h] [rbp+C8h]
  __int64 v2671; // [rsp+1D0h] [rbp+D0h]
  unsigned int v2672; // [rsp+1D8h] [rbp+D8h] BYREF
  unsigned __int64 v2673; // [rsp+1E0h] [rbp+E0h] BYREF
  unsigned __int64 v2674; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v2675; // [rsp+1F0h] [rbp+F0h]
  __int64 v2676; // [rsp+1F8h] [rbp+F8h]
  int v2677; // [rsp+200h] [rbp+100h] BYREF
  __int64 v2678; // [rsp+208h] [rbp+108h]
  int v2679; // [rsp+210h] [rbp+110h] BYREF
  __int64 v2680; // [rsp+218h] [rbp+118h]
  int v2681; // [rsp+220h] [rbp+120h] BYREF
  unsigned __int64 v2682; // [rsp+228h] [rbp+128h] BYREF
  _DWORD *v2683; // [rsp+230h] [rbp+130h]
  unsigned __int64 v2684; // [rsp+238h] [rbp+138h] BYREF
  _DWORD *v2685; // [rsp+240h] [rbp+140h]
  __int64 v2686; // [rsp+248h] [rbp+148h] BYREF
  int v2687; // [rsp+250h] [rbp+150h]
  int v2688; // [rsp+254h] [rbp+154h]
  int v2689; // [rsp+258h] [rbp+158h]
  int v2690; // [rsp+25Ch] [rbp+15Ch]
  int v2691; // [rsp+260h] [rbp+160h]
  _DWORD v2692[9]; // [rsp+264h] [rbp+164h] BYREF
  int *v2693; // [rsp+288h] [rbp+188h]
  int v2694; // [rsp+290h] [rbp+190h]
  int v2695; // [rsp+294h] [rbp+194h]
  int v2696; // [rsp+298h] [rbp+198h]
  int v2697; // [rsp+29Ch] [rbp+19Ch]
  int v2698; // [rsp+2A0h] [rbp+1A0h]
  int v2699; // [rsp+2A4h] [rbp+1A4h]
  int v2700; // [rsp+2A8h] [rbp+1A8h]
  int v2701; // [rsp+2ACh] [rbp+1ACh]
  int v2702; // [rsp+2B0h] [rbp+1B0h]
  int v2703; // [rsp+2B4h] [rbp+1B4h]
  _DWORD v2704[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v2705; // [rsp+2C0h] [rbp+1C0h]
  __int64 v2706; // [rsp+2C8h] [rbp+1C8h] BYREF
  int *v2707; // [rsp+2D0h] [rbp+1D0h]
  signed __int64 v2708; // [rsp+2D8h] [rbp+1D8h] BYREF
  signed __int64 v2709; // [rsp+2E0h] [rbp+1E0h] BYREF
  signed __int64 v2710; // [rsp+2E8h] [rbp+1E8h] BYREF
  int v2711; // [rsp+2F0h] [rbp+1F0h]
  int v2712; // [rsp+2F4h] [rbp+1F4h]
  int v2713; // [rsp+2F8h] [rbp+1F8h]
  int v2714; // [rsp+2FCh] [rbp+1FCh]
  int v2715; // [rsp+300h] [rbp+200h]
  int v2716; // [rsp+304h] [rbp+204h]
  int v2717; // [rsp+308h] [rbp+208h]
  int v2718; // [rsp+30Ch] [rbp+20Ch]
  int v2719; // [rsp+310h] [rbp+210h]
  int v2720; // [rsp+314h] [rbp+214h]
  _DWORD v2721[6]; // [rsp+318h] [rbp+218h] BYREF
  _DWORD v2722[6]; // [rsp+330h] [rbp+230h] BYREF
  __int16 v2723; // [rsp+348h] [rbp+248h] BYREF
  _QWORD *v2724; // [rsp+34Ah] [rbp+24Ah]
  __int64 v2725; // [rsp+358h] [rbp+258h] BYREF
  unsigned __int64 v2726; // [rsp+360h] [rbp+260h] BYREF
  const char *v2727; // [rsp+368h] [rbp+268h]
  __int64 v2728; // [rsp+370h] [rbp+270h] BYREF
  __int64 v2729; // [rsp+378h] [rbp+278h] BYREF
  __int64 v2730; // [rsp+380h] [rbp+280h] BYREF
  __int64 v2731; // [rsp+388h] [rbp+288h]
  __int64 v2732; // [rsp+390h] [rbp+290h] BYREF
  __int64 v2733; // [rsp+398h] [rbp+298h] BYREF
  __int128 v2734; // [rsp+3A0h] [rbp+2A0h]
  __int128 v2735; // [rsp+3B0h] [rbp+2B0h]
  __int16 v2736; // [rsp+3C0h] [rbp+2C0h] BYREF
  __int64 v2737; // [rsp+3C2h] [rbp+2C2h]
  __int16 v2738; // [rsp+3D0h] [rbp+2D0h] BYREF
  __int64 v2739; // [rsp+3D2h] [rbp+2D2h]
  __int16 v2740; // [rsp+3E0h] [rbp+2E0h] BYREF
  __int64 v2741; // [rsp+3E2h] [rbp+2E2h]
  __int16 v2742; // [rsp+3F0h] [rbp+2F0h] BYREF
  __int64 v2743; // [rsp+3F2h] [rbp+2F2h]
  __int16 v2744; // [rsp+400h] [rbp+300h] BYREF
  struct _KPRCB *v2745; // [rsp+402h] [rbp+302h]
  int v2746; // [rsp+410h] [rbp+310h]
  int *v2747; // [rsp+418h] [rbp+318h]
  char v2748[8]; // [rsp+420h] [rbp+320h] BYREF
  int v2749; // [rsp+428h] [rbp+328h] BYREF
  _DWORD *v2750; // [rsp+430h] [rbp+330h]
  __int64 v2751; // [rsp+438h] [rbp+338h]
  unsigned int v2752; // [rsp+444h] [rbp+344h]
  _BYTE v2753[16]; // [rsp+448h] [rbp+348h] BYREF
  int v2754; // [rsp+458h] [rbp+358h] BYREF
  _DWORD *v2755; // [rsp+460h] [rbp+360h]
  _WORD v2756[4]; // [rsp+468h] [rbp+368h] BYREF
  int *v2757; // [rsp+470h] [rbp+370h]
  _WORD v2758[4]; // [rsp+478h] [rbp+378h] BYREF
  __int64 v2759; // [rsp+480h] [rbp+380h]
  __int64 v2760; // [rsp+488h] [rbp+388h] BYREF
  __int64 v2761; // [rsp+490h] [rbp+390h] BYREF
  _BYTE *v2762; // [rsp+498h] [rbp+398h]
  __int64 v2763; // [rsp+4A0h] [rbp+3A0h] BYREF
  int *v2764; // [rsp+4A8h] [rbp+3A8h]
  unsigned __int8 *v2765; // [rsp+4B0h] [rbp+3B0h]
  __int64 *v2766; // [rsp+4B8h] [rbp+3B8h]
  unsigned __int8 *v2767; // [rsp+4C0h] [rbp+3C0h]
  unsigned __int8 *v2768; // [rsp+4C8h] [rbp+3C8h]
  char *v2769; // [rsp+4D0h] [rbp+3D0h]
  __int64 *v2770; // [rsp+4D8h] [rbp+3D8h]
  char *v2771; // [rsp+4E0h] [rbp+3E0h]
  char *v2772; // [rsp+4E8h] [rbp+3E8h]
  char *v2773; // [rsp+4F0h] [rbp+3F0h]
  __int64 *v2774; // [rsp+4F8h] [rbp+3F8h]
  char *v2775; // [rsp+500h] [rbp+400h]
  char *v2776; // [rsp+508h] [rbp+408h]
  _QWORD v2777[3]; // [rsp+510h] [rbp+410h] BYREF
  __int64 v2778; // [rsp+528h] [rbp+428h]
  __int64 v2779; // [rsp+530h] [rbp+430h]
  __int64 v2780; // [rsp+538h] [rbp+438h]
  _QWORD v2781[3]; // [rsp+540h] [rbp+440h] BYREF
  __int64 v2782; // [rsp+558h] [rbp+458h]
  __int64 v2783; // [rsp+560h] [rbp+460h]
  __int64 v2784; // [rsp+568h] [rbp+468h]
  _BYTE v2785[16]; // [rsp+570h] [rbp+470h] BYREF
  _BYTE v2786[16]; // [rsp+580h] [rbp+480h] BYREF
  _BYTE v2787[16]; // [rsp+590h] [rbp+490h] BYREF
  _BYTE v2788[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  int v2789; // [rsp+5B0h] [rbp+4B0h] BYREF
  const char *v2790; // [rsp+5B8h] [rbp+4B8h]
  unsigned __int64 v2791; // [rsp+5C0h] [rbp+4C0h]
  __int64 v2792; // [rsp+5C8h] [rbp+4C8h]
  __int64 v2793; // [rsp+5D0h] [rbp+4D0h]
  __int64 v2794; // [rsp+5D8h] [rbp+4D8h] BYREF
  __int16 v2795; // [rsp+5E0h] [rbp+4E0h]
  __int16 v2796; // [rsp+5E2h] [rbp+4E2h]
  unsigned __int64 v2797; // [rsp+5F8h] [rbp+4F8h]
  int v2798; // [rsp+600h] [rbp+500h]
  unsigned int v2799; // [rsp+604h] [rbp+504h]
  unsigned __int64 v2800; // [rsp+608h] [rbp+508h]
  _BYTE v2801[16]; // [rsp+610h] [rbp+510h] BYREF
  _BYTE v2802[48]; // [rsp+620h] [rbp+520h] BYREF
  __int64 v2803; // [rsp+650h] [rbp+550h]
  __int64 v2804; // [rsp+658h] [rbp+558h]
  char v2805[8]; // [rsp+660h] [rbp+560h] BYREF
  char v2806[8]; // [rsp+668h] [rbp+568h] BYREF
  char v2807[8]; // [rsp+670h] [rbp+570h] BYREF
  __int64 v2808; // [rsp+678h] [rbp+578h]
  __int64 v2809; // [rsp+680h] [rbp+580h]
  __int64 v2810; // [rsp+688h] [rbp+588h]
  __int64 v2811; // [rsp+690h] [rbp+590h]
  __int64 v2812; // [rsp+698h] [rbp+598h]
  __int64 v2813; // [rsp+6A0h] [rbp+5A0h]
  __int64 v2814; // [rsp+6A8h] [rbp+5A8h]
  __int64 v2815; // [rsp+6B0h] [rbp+5B0h]
  __int64 v2816; // [rsp+6B8h] [rbp+5B8h]
  __int64 v2817; // [rsp+6C0h] [rbp+5C0h]
  __int64 v2818; // [rsp+6C8h] [rbp+5C8h]
  char v2819[8]; // [rsp+6D0h] [rbp+5D0h] BYREF
  __int64 v2820; // [rsp+6D8h] [rbp+5D8h]
  __int64 v2821; // [rsp+6E0h] [rbp+5E0h]
  __int64 v2822; // [rsp+6E8h] [rbp+5E8h]
  __int64 v2823; // [rsp+6F0h] [rbp+5F0h]
  unsigned __int64 v2824; // [rsp+700h] [rbp+600h]
  __int64 v2825; // [rsp+708h] [rbp+608h]
  __int64 v2826; // [rsp+710h] [rbp+610h]
  __int64 v2827; // [rsp+718h] [rbp+618h]
  _BYTE *v2828; // [rsp+720h] [rbp+620h]
  __int64 v2829; // [rsp+728h] [rbp+628h]
  _BYTE *v2830; // [rsp+730h] [rbp+630h]
  _BYTE *v2831; // [rsp+738h] [rbp+638h]
  __int64 v2832; // [rsp+740h] [rbp+640h]
  __int64 v2833; // [rsp+748h] [rbp+648h]
  __int64 v2834; // [rsp+750h] [rbp+650h]
  __int64 v2835; // [rsp+758h] [rbp+658h]
  __int64 v2836; // [rsp+760h] [rbp+660h]
  __int64 v2837; // [rsp+768h] [rbp+668h]
  __int64 v2838; // [rsp+770h] [rbp+670h]
  __int64 v2839; // [rsp+778h] [rbp+678h]
  __int64 v2840; // [rsp+780h] [rbp+680h]
  __int64 v2841; // [rsp+788h] [rbp+688h]
  __int64 v2842; // [rsp+790h] [rbp+690h]
  __int64 v2843; // [rsp+798h] [rbp+698h]
  __int64 v2844; // [rsp+7A0h] [rbp+6A0h]
  __int64 v2845; // [rsp+7A8h] [rbp+6A8h]
  __int64 v2846; // [rsp+7B0h] [rbp+6B0h]
  __int64 v2847; // [rsp+7B8h] [rbp+6B8h]
  __int64 v2848; // [rsp+7C0h] [rbp+6C0h]
  __int64 v2849; // [rsp+7C8h] [rbp+6C8h]
  __int64 v2850; // [rsp+7D0h] [rbp+6D0h]
  __int64 v2851; // [rsp+7D8h] [rbp+6D8h]
  __int64 v2852; // [rsp+7E0h] [rbp+6E0h]
  __int64 v2853; // [rsp+7E8h] [rbp+6E8h]
  __int64 v2854; // [rsp+7F0h] [rbp+6F0h]
  __int64 v2855; // [rsp+7F8h] [rbp+6F8h]
  __int64 v2856; // [rsp+800h] [rbp+700h]
  __int64 v2857; // [rsp+808h] [rbp+708h]
  __int64 v2858; // [rsp+810h] [rbp+710h]
  __int64 v2859; // [rsp+818h] [rbp+718h]
  __int64 v2860; // [rsp+820h] [rbp+720h]
  __int64 v2861; // [rsp+828h] [rbp+728h]
  __int64 v2862; // [rsp+830h] [rbp+730h]
  __int64 v2863; // [rsp+838h] [rbp+738h]
  __int64 v2864; // [rsp+840h] [rbp+740h]
  __int64 v2865; // [rsp+848h] [rbp+748h]
  __int64 v2866; // [rsp+850h] [rbp+750h]
  __int64 v2867; // [rsp+858h] [rbp+758h]
  __int64 v2868; // [rsp+860h] [rbp+760h]
  __int64 v2869; // [rsp+868h] [rbp+768h]
  __int64 v2870; // [rsp+870h] [rbp+770h]
  __int64 v2871; // [rsp+878h] [rbp+778h]
  __int64 v2872; // [rsp+880h] [rbp+780h]
  __int64 v2873; // [rsp+888h] [rbp+788h]
  __int64 v2874; // [rsp+890h] [rbp+790h]
  unsigned __int64 v2875; // [rsp+898h] [rbp+798h]
  __int64 v2876; // [rsp+8A0h] [rbp+7A0h]
  __int64 v2877; // [rsp+8A8h] [rbp+7A8h]
  __int64 v2878; // [rsp+8B0h] [rbp+7B0h]
  __int64 v2879; // [rsp+8B8h] [rbp+7B8h]
  __int64 v2880; // [rsp+8C0h] [rbp+7C0h]
  __int64 v2881; // [rsp+8C8h] [rbp+7C8h]
  __int64 v2882; // [rsp+8D0h] [rbp+7D0h]
  __int64 v2883; // [rsp+8D8h] [rbp+7D8h]
  __int64 v2884; // [rsp+8E0h] [rbp+7E0h]
  __int64 v2885; // [rsp+8E8h] [rbp+7E8h]
  __int64 v2886; // [rsp+8F0h] [rbp+7F0h]
  __int64 v2887; // [rsp+8F8h] [rbp+7F8h]
  __int64 v2888; // [rsp+900h] [rbp+800h]
  __int64 v2889; // [rsp+908h] [rbp+808h]
  __int64 v2890; // [rsp+910h] [rbp+810h]
  __int64 v2891; // [rsp+918h] [rbp+818h]
  __int64 v2892; // [rsp+920h] [rbp+820h]
  __int64 v2893; // [rsp+928h] [rbp+828h]
  __int64 v2894; // [rsp+930h] [rbp+830h]
  __int64 v2895; // [rsp+938h] [rbp+838h]
  __int64 v2896; // [rsp+940h] [rbp+840h]
  __int64 v2897; // [rsp+948h] [rbp+848h]
  __int64 v2898; // [rsp+950h] [rbp+850h]
  __int64 v2899; // [rsp+958h] [rbp+858h]
  unsigned __int64 v2900; // [rsp+960h] [rbp+860h]
  const char *v2901; // [rsp+968h] [rbp+868h]
  __int64 v2902; // [rsp+970h] [rbp+870h]
  __int64 v2903; // [rsp+978h] [rbp+878h]
  __int64 v2904; // [rsp+980h] [rbp+880h]
  __int64 v2905; // [rsp+988h] [rbp+888h]
  __int64 v2906; // [rsp+990h] [rbp+890h]
  __int64 v2907; // [rsp+998h] [rbp+898h]
  __int64 v2908; // [rsp+9A0h] [rbp+8A0h]
  __int64 v2909; // [rsp+9A8h] [rbp+8A8h]
  __int64 v2910; // [rsp+9B0h] [rbp+8B0h]
  __int64 v2911; // [rsp+9B8h] [rbp+8B8h]
  _BYTE v2912[16]; // [rsp+9C0h] [rbp+8C0h] BYREF
  _BYTE v2913[16]; // [rsp+9D0h] [rbp+8D0h] BYREF
  _BYTE v2914[16]; // [rsp+9E0h] [rbp+8E0h] BYREF
  _BYTE v2915[16]; // [rsp+9F0h] [rbp+8F0h] BYREF
  _BYTE v2916[16]; // [rsp+A00h] [rbp+900h] BYREF
  _BYTE v2917[16]; // [rsp+A10h] [rbp+910h] BYREF
  _BYTE v2918[16]; // [rsp+A20h] [rbp+920h] BYREF
  _BYTE v2919[16]; // [rsp+A30h] [rbp+930h] BYREF
  _BYTE v2920[16]; // [rsp+A40h] [rbp+940h] BYREF
  _BYTE v2921[16]; // [rsp+A50h] [rbp+950h] BYREF
  _BYTE v2922[16]; // [rsp+A60h] [rbp+960h] BYREF
  _BYTE v2923[16]; // [rsp+A70h] [rbp+970h] BYREF
  _BYTE v2924[16]; // [rsp+A80h] [rbp+980h] BYREF
  __int64 v2925; // [rsp+A90h] [rbp+990h]
  __int64 v2926; // [rsp+A98h] [rbp+998h]
  _BYTE v2927[24]; // [rsp+AA0h] [rbp+9A0h] BYREF
  char v2928[8]; // [rsp+AB8h] [rbp+9B8h] BYREF
  ULONG_PTR v2929; // [rsp+AC0h] [rbp+9C0h]
  unsigned int v2930; // [rsp+ACCh] [rbp+9CCh]
  char v2931[8]; // [rsp+AD0h] [rbp+9D0h] BYREF
  _DWORD *v2932; // [rsp+AD8h] [rbp+9D8h]
  int v2933; // [rsp+AE4h] [rbp+9E4h]
  char v2934[8]; // [rsp+AE8h] [rbp+9E8h] BYREF
  ULONG_PTR v2935; // [rsp+AF0h] [rbp+9F0h]
  unsigned int v2936; // [rsp+AFCh] [rbp+9FCh]
  __int64 v2937; // [rsp+B00h] [rbp+A00h]
  char v2938[8]; // [rsp+B08h] [rbp+A08h] BYREF
  char v2939[8]; // [rsp+B10h] [rbp+A10h] BYREF
  __int64 v2940; // [rsp+B18h] [rbp+A18h]
  __int64 v2941; // [rsp+B20h] [rbp+A20h]
  __int64 v2942; // [rsp+B28h] [rbp+A28h]
  char *v2943; // [rsp+B30h] [rbp+A30h]
  __int64 v2944; // [rsp+B38h] [rbp+A38h]
  _BYTE v2945[16]; // [rsp+B40h] [rbp+A40h] BYREF
  char v2946[16]; // [rsp+B50h] [rbp+A50h] BYREF
  char v2947[16]; // [rsp+B60h] [rbp+A60h] BYREF
  char v2948[8]; // [rsp+B70h] [rbp+A70h] BYREF
  unsigned __int64 v2949; // [rsp+B78h] [rbp+A78h]
  char v2950[8]; // [rsp+B88h] [rbp+A88h] BYREF
  const char *v2951; // [rsp+B90h] [rbp+A90h]
  char v2952[8]; // [rsp+BA0h] [rbp+AA0h] BYREF
  __int64 v2953; // [rsp+BA8h] [rbp+AA8h]
  _BYTE v2954[24]; // [rsp+BB8h] [rbp+AB8h] BYREF
  _BYTE v2955[32]; // [rsp+BD0h] [rbp+AD0h] BYREF
  _BYTE v2956[32]; // [rsp+BF0h] [rbp+AF0h] BYREF
  _BYTE v2957[32]; // [rsp+C10h] [rbp+B10h] BYREF
  _BYTE v2958[32]; // [rsp+C30h] [rbp+B30h] BYREF
  _BYTE v2959[32]; // [rsp+C50h] [rbp+B50h] BYREF
  _BYTE v2960[112]; // [rsp+C70h] [rbp+B70h] BYREF
  unsigned __int64 retaddr; // [rsp+CE8h] [rbp+BE8h]
  __int64 v2963; // [rsp+CF8h] [rbp+BF8h]
  int v2964; // [rsp+CF8h] [rbp+BF8h]
  __int64 v2965; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2966; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2967; // [rsp+CF8h] [rbp+BF8h]
  BOOL v2968; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2969; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v2970; // [rsp+CF8h] [rbp+BF8h]
  int v2971; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v2972; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v2973; // [rsp+CF8h] [rbp+BF8h]
  int v2974; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int16 v2975; // [rsp+CF8h] [rbp+BF8h]
  int v2976; // [rsp+CF8h] [rbp+BF8h]
  __int64 v2977; // [rsp+CF8h] [rbp+BF8h]
  __int64 v2978; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2979; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2980; // [rsp+CF8h] [rbp+BF8h]
  __int64 v2981; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2982; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int8 v2983; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int8 v2984; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int8 v2985; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v2986; // [rsp+CF8h] [rbp+BF8h]
  unsigned int *v2987; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2988; // [rsp+CF8h] [rbp+BF8h]
  __int64 **v2989; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2990; // [rsp+CF8h] [rbp+BF8h]
  __int64 v2991; // [rsp+CF8h] [rbp+BF8h]
  __int64 v2992; // [rsp+CF8h] [rbp+BF8h]
  BOOL v2993; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int64 v2994; // [rsp+CF8h] [rbp+BF8h]
  __int16 v2995; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v2996; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v2997; // [rsp+CF8h] [rbp+BF8h]
  int v2998; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v2999; // [rsp+CF8h] [rbp+BF8h]
  __int64 v3000; // [rsp+CF8h] [rbp+BF8h]
  int v3001; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v3002; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v3003; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int16 v3004; // [rsp+CF8h] [rbp+BF8h]
  int v3005; // [rsp+CF8h] [rbp+BF8h]
  unsigned int v3006; // [rsp+CF8h] [rbp+BF8h]
  unsigned __int8 v3007; // [rsp+CF8h] [rbp+BF8h]
  int v3008; // [rsp+CF8h] [rbp+BF8h]
  __int64 v3009; // [rsp+CF8h] [rbp+BF8h]
  __int64 v3010; // [rsp+CF8h] [rbp+BF8h]
  char v3011; // [rsp+D00h] [rbp+C00h] BYREF
  unsigned __int8 v3012; // [rsp+D08h] [rbp+C08h] BYREF

  v1 = *(_DWORD *)(a1 + 2448);
  v2 = a1;
  v2875 = a1;
  if ( (v1 & 0x110000) != 0x110000 )
  {
    v3 = *(_QWORD *)(a1 + 2272);
    v4 = 304;
    v5 = *(_QWORD **)(v2 + 2272);
    v6 = 38LL;
    do
    {
      *v5 = 0LL;
      v4 -= 8;
      ++v5;
      --v6;
    }
    while ( v6 );
    for ( ; v4; --v4 )
    {
      *(_BYTE *)v5 = 0;
      v5 = (_QWORD *)((char *)v5 + 1);
    }
    *(_OWORD *)(v3 + 16) = *(_OWORD *)(v2 + 2120);
    *(_OWORD *)(v3 + 32) = *(_OWORD *)(v2 + 2136);
    *(_OWORD *)(v3 + 288) = *(_OWORD *)(v2 + 2152);
    v2743 = v3;
    v2742 = 303;
    *(_WORD *)(v3 + 16) = v2 + 2168;
    *(_WORD *)(v3 + 22) = (unsigned int)(v2 + 2168) >> 16;
    *(_DWORD *)(v3 + 24) = (v2 + 2168) >> 32;
    _disable();
    if ( *(int *)(v2 + 2448) >= 0 )
    {
      __sidt(v2786);
      __lidt(&v2742);
      __writedr(7u, 0LL);
      __lidt(v2786);
    }
    else
    {
      __writedr(7u, 0LL);
    }
    _enable();
  }
  v207 = (*(_DWORD *)(v2 + 2452) & 0x100) == 0;
  v2646 = 0LL;
  if ( !v207 )
  {
    v2646 = retaddr;
    retaddr = 0LL;
  }
  *(_DWORD *)(v2 + 2088) = 0;
  if ( (*(_DWORD *)(v2 + 2448) & 0x40000000) == 0 || !*(_QWORD *)(v2 + 2680) )
  {
    v7 = *(_QWORD *)(v2 + 1976);
    v8 = (_QWORD *)(v2 + 1944);
    v9 = v2955;
    v10 = (char *)(v2 + 1944);
    v11 = 32;
    v12 = 4LL;
    do
    {
      v11 -= 8;
      *(_QWORD *)v9 = *(_QWORD *)v10;
      v10 += 8;
      v9 += 8;
      --v12;
    }
    while ( v12 );
    for ( ; v11; --v11 )
    {
      v13 = *v10++;
      *v9++ = v13;
    }
    *(_QWORD *)(v2 + 1976) = 0LL;
    v14 = 32;
    *(_DWORD *)(v2 + 2088) = 0;
    v15 = 4LL;
    v16 = (_QWORD *)(v2 + 1944);
    do
    {
      *v16 = 0LL;
      v14 -= 8;
      ++v16;
      --v15;
    }
    while ( v15 );
    for ( ; v14; --v14 )
    {
      *(_BYTE *)v16 = 0;
      v16 = (_QWORD *)((char *)v16 + 1);
    }
    v17 = (_QWORD *)v2;
    *(_DWORD *)(v2 + 2088) += *(_DWORD *)(v2 + 2020);
    v18 = (const char *)v2;
    v19 = *(unsigned int *)(v2 + 2020);
    v20 = *(_DWORD *)(v2 + 2068);
    v21 = *(_QWORD *)(v2 + 2072);
    if ( v2 < v2 + v19 )
    {
      do
      {
        _mm_prefetch(v18, 0);
        v18 += 64;
      }
      while ( (unsigned __int64)v18 < v2 + v19 );
    }
    v22 = *(_QWORD *)(v2 + 2072);
    for ( i = (unsigned int)v19 >> 7; i; --i )
    {
      v24 = 8LL;
      do
      {
        v25 = v22 ^ *v17;
        v26 = v17[1];
        v17 += 2;
        v22 = __ROL8__(__ROL8__(v25, v20) ^ v26, v20);
        --v24;
      }
      while ( v24 );
      v2 = a1;
      v27 = __ROL8__(v21 ^ ((unsigned __int64)v17 - a1), 17) ^ v21 ^ ((unsigned __int64)v17 - a1);
      v2889 = (v27 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v20 = ((unsigned __int8)(v2889 ^ v27) ^ (unsigned __int8)v20) & 0x3F;
      if ( !v20 )
        LOBYTE(v20) = 1;
    }
    v28 = v19 & 0x7F;
    if ( v28 >= 8 )
    {
      v29 = (unsigned __int64)v28 >> 3;
      do
      {
        v22 = __ROL8__(*v17++ ^ v22, v20);
        v28 -= 8;
        --v29;
      }
      while ( v29 );
    }
    if ( v28 )
    {
      do
      {
        v30 = *(unsigned __int8 *)v17;
        v17 = (_QWORD *)((char *)v17 + 1);
        v22 = __ROL8__(v30 ^ v22, v20);
        --v28;
      }
      while ( v28 );
      v2 = a1;
    }
    *(_QWORD *)(v2 + 1976) = v7;
    v31 = v2955;
    v32 = 32;
    v33 = 4LL;
    do
    {
      v32 -= 8;
      *v8 = *(_QWORD *)v31;
      v31 += 8;
      ++v8;
      --v33;
    }
    while ( v33 );
    for ( ; v32; --v32 )
    {
      v34 = *v31++;
      *(_BYTE *)v8 = v34;
      v8 = (_QWORD *)((char *)v8 + 1);
    }
    if ( *(_QWORD *)(v2 + 1976) != v22 )
    {
      v35 = *(_QWORD *)(v2 + 1424);
      v36 = *(_DWORD *)(v2 + 2020);
      *(_QWORD *)v35 = v2;
      *(_DWORD *)(v35 + 16) = v36;
      if ( !*(_DWORD *)(v2 + 2296) )
      {
        *(_QWORD *)(*(_QWORD *)(v2 + 1424) + 24LL) = v22 ^ *(_QWORD *)(v2 + 1976);
        if ( !*(_DWORD *)(v2 + 2296) )
        {
          *(_QWORD *)(v2 + 2304) = v2 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v2 + 2312) = 0LL;
          *(_QWORD *)(v2 + 2320) = 257LL;
          *(_QWORD *)(v2 + 2328) = v22;
          *(_DWORD *)(v2 + 2296) = 1;
          __b8(v2, 0LL);
        }
      }
    }
  }
  *(_DWORD *)(v2 + 2448) |= 4u;
  ++*(_DWORD *)(v2 + 2100);
  v37 = *(_DWORD *)(v2 + 2448);
  if ( (v37 & 8) != 0 && (v37 & 0x800000) == 0 )
  {
    v38 = *(_QWORD *)(v2 + 2672);
    v39 = *(_DWORD *)(v2 + 2020);
    v40 = *(_QWORD *)(v2 + 2552);
    v41 = *(unsigned int *)(v2 + 2056);
    v2963 = v38;
    if ( (*(_DWORD *)(v2 + 2452) & 1) != 0 )
      v40 = *(_QWORD *)(v2 + 1496);
    v42 = *(const char **)(v2 + 352);
    v2629 = v42;
    v2620 = *(_QWORD *)(a1 + 712);
    v2631 = *(_QWORD *)(a1 + 832);
    v43 = __rdtsc();
    v44 = (__ROR8__(v43, 3) ^ v43) * (unsigned __int128)0x7010008004002001uLL;
    v2890 = *((_QWORD *)&v44 + 1);
    v45 = -1200000000LL - ((unsigned __int64)v44 ^ *((_QWORD *)&v44 + 1)) % 0x5F5E100;
    v2682 = v45;
    v46 = *(_DWORD *)(a1 + 2448);
    if ( (v46 & 0x4000000) != 0 )
    {
      v47 = __rdtsc();
      v48 = (__ROR8__(v47, 3) ^ v47) * (unsigned __int128)0x7010008004002001uLL;
      v2891 = *((_QWORD *)&v48 + 1);
      if ( ((unsigned __int64)v48 ^ *((_QWORD *)&v48 + 1)) % 0xA < 2 )
      {
        v49 = __rdtsc();
        v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
        v2892 = *((_QWORD *)&v50 + 1);
        v2682 = v45 * (((unsigned __int64)v50 ^ *((_QWORD *)&v50 + 1)) % 0xA + 1);
        v46 = *(_DWORD *)(a1 + 2448);
      }
    }
    v51 = v41;
    v52 = 0LL;
    v53 = 0LL;
    if ( (v46 & 2) != 0 )
      v51 = v39;
    if ( (v46 & 0x80u) != 0 )
    {
      v54 = 1;
      v55 = __rdtsc();
      v56 = (__ROR8__(v55, 3) ^ v55) * (unsigned __int128)0x7010008004002001uLL;
      v57 = 340;
      v58 = *((_QWORD *)&v56 + 1);
      v2893 = *((_QWORD *)&v56 + 1);
      v59 = a1;
      v52 = v56 ^ v58;
      v60 = v52;
      v53 = a1 ^ v52;
      v61 = (_QWORD *)(a1 + 2712);
      do
      {
        *v61-- ^= v60;
        v60 = __ROR8__(v60, v57--);
      }
      while ( v57 );
      v62 = v41;
      v63 = (unsigned __int64)(v41 - 2720) >> 3;
      if ( (_DWORD)v63 )
      {
        v64 = (__int64 *)(a1 + 8 * ((int)v63 + 339LL));
        do
        {
          v65 = *v64--;
          v53 = (2 * v53) ^ __ROR8__(v65, v63);
          LODWORD(v63) = v63 - 1;
        }
        while ( (_DWORD)v63 );
        v38 = v2963;
        v62 = v41;
        v59 = a1;
      }
      v66 = v62 + v59;
      v67 = (v51 - (unsigned int)v41) >> 3;
      if ( (_DWORD)v67 )
      {
        v68 = (_QWORD *)(v66 + 8 * v67 - 8);
        do
        {
          *v68-- ^= v60;
          v60 = __ROR8__(v60, v67);
          LODWORD(v67) = v67 - 1;
        }
        while ( (_DWORD)v67 );
      }
      v42 = v2629;
    }
    else
    {
      v54 = 0;
    }
    if ( v38 )
    {
      v69 = v42;
      v2 = a1;
      ((void (__fastcall *)(unsigned __int64, _QWORD, unsigned __int64 *, const char *, __int64))v2631)(
        a1,
        v51,
        &v2682,
        v69,
        v38);
    }
    else
    {
      if ( v40 )
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64 *))v2620)(v40, 0LL, 0LL, 0LL, &v2682);
      else
        ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))v42)(0LL, 0LL, &v2682);
      v2 = a1;
    }
    if ( v54 )
    {
      v70 = (_QWORD *)(v2 + 2712);
      v71 = v2 ^ v52;
      v72 = 340;
      do
      {
        *v70-- ^= v52;
        v52 = __ROR8__(v52, v72--);
      }
      while ( v72 );
      v73 = v41;
      v74 = (unsigned __int64)(v41 - 2720) >> 3;
      if ( (_DWORD)v74 )
      {
        v75 = (__int64 *)(v2 + 8 * ((int)v74 + 339LL));
        do
        {
          v76 = *v75--;
          v71 = (2 * v71) ^ __ROR8__(v76, v74);
          LODWORD(v74) = v74 - 1;
        }
        while ( (_DWORD)v74 );
        v73 = v41;
      }
      v77 = (v51 - (unsigned int)v41) >> 3;
      if ( v77 )
      {
        v78 = (_QWORD *)(v73 + v2 + 8 * (v77 - 1LL));
        do
        {
          *v78 ^= v52;
          v52 = __ROR8__(v52, v77);
          --v78;
          --v77;
        }
        while ( v77 );
      }
      if ( v71 != v53 )
      {
        v79 = *(_QWORD *)(v2 + 1424);
        v80 = *(_DWORD *)(v2 + 2020);
        *(_QWORD *)v79 = v2;
        *(_DWORD *)(v79 + 16) = v80;
        if ( !*(_DWORD *)(v2 + 2296) )
        {
          *(_QWORD *)(*(_QWORD *)(v2 + 1424) + 24LL) = v53 ^ v71;
          if ( !*(_DWORD *)(v2 + 2296) )
          {
            *(_QWORD *)(v2 + 2304) = v2 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v2 + 2312) = 0LL;
            *(_QWORD *)(v2 + 2320) = 270LL;
            *(_QWORD *)(v2 + 2328) = v71;
            *(_DWORD *)(v2 + 2296) = 1;
            __b8(v2, 0LL);
          }
        }
      }
    }
  }
  v81 = *(_DWORD *)(v2 + 196);
  *(_DWORD *)(v2 + 196) = 0;
  v82 = (_QWORD *)v2;
  *(_DWORD *)(v2 + 2088) += 1568;
  v83 = (const char *)v2;
  v84 = *(_DWORD *)(v2 + 2068);
  v85 = *(_QWORD *)(v2 + 2072);
  if ( v2 < v2 + 1568 )
  {
    do
    {
      _mm_prefetch(v83, 0);
      v83 += 64;
    }
    while ( (unsigned __int64)v83 < v2 + 1568 );
  }
  v86 = *(_QWORD *)(v2 + 2072);
  v87 = 12;
  do
  {
    v88 = 8LL;
    do
    {
      v89 = v86 ^ *v82;
      v90 = v82[1];
      v82 += 2;
      v86 = __ROL8__(__ROL8__(v89, v84) ^ v90, v84);
      --v88;
    }
    while ( v88 );
    v91 = __ROL8__(v85 ^ ((unsigned __int64)v82 - v2), 17) ^ v85 ^ ((unsigned __int64)v82 - v2);
    v2894 = (v91 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v84 = ((unsigned __int8)(v2894 ^ v91) ^ (unsigned __int8)v84) & 0x3F;
    if ( !v84 )
      LOBYTE(v84) = 1;
    --v87;
  }
  while ( v87 );
  v92 = 32;
  v93 = 4LL;
  do
  {
    v86 = __ROL8__(*v82++ ^ v86, v84);
    v92 -= 8;
    --v93;
  }
  while ( v93 );
  for ( ; v92; --v92 )
  {
    v94 = *(unsigned __int8 *)v82;
    v82 = (_QWORD *)((char *)v82 + 1);
    v86 = __ROL8__(v94 ^ v86, v84);
  }
  *(_DWORD *)(v2 + 196) = v81;
  if ( *(_QWORD *)(v2 + 2592) != v86 )
  {
    v95 = *(_QWORD *)(v2 + 1424);
    v96 = *(_DWORD *)(v2 + 2020);
    *(_QWORD *)v95 = v2;
    *(_DWORD *)(v95 + 16) = v96;
    if ( !*(_DWORD *)(v2 + 2296) )
    {
      *(_QWORD *)(*(_QWORD *)(v2 + 1424) + 24LL) = *(_QWORD *)(v2 + 2592) ^ v86;
      if ( !*(_DWORD *)(v2 + 2296) )
      {
        *(_QWORD *)(v2 + 2304) = v2 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v2 + 2312) = 0LL;
        *(_QWORD *)(v2 + 2320) = 265LL;
        *(_QWORD *)(v2 + 2328) = v86;
        *(_DWORD *)(v2 + 2296) = 1;
        __b8(v2, 0LL);
      }
    }
  }
  __b8(v2, 0LL);
  v98 = *(unsigned int *)(v2 + 2416);
  v2621 = (char *)v2;
  v99 = v2;
  v2647 = 0;
  v2630 = 0;
  v100 = 6LL;
  if ( (_DWORD)v98 != -1 )
  {
    v101 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(v2 + 632))(v98, v97, 6LL, 5LL);
    if ( v101 || (v101 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 640))(0LL)) != 0 )
    {
      v102 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v2 + 656))(v101, v2802);
      if ( v102 >= 0 )
      {
        *(_QWORD *)(v2 + 2432) = v101;
        v103 = (*(__int64 (**)(void))(v2 + 696))();
        v104 = (*(__int64 (__fastcall **)(__int64))(v2 + 728))(v103);
        if ( v104 )
        {
          (*(void (__fastcall **)(__int64, __int64))(v2 + 744))(v103, v104);
          v105 = 0;
        }
        else
        {
          v105 = 4;
        }
        *(_DWORD *)(v2 + 2452) = v105 | *(_DWORD *)(v2 + 2452) & 0xFFFFFFFB;
        *(_DWORD *)(v2 + 2088) += 0x10000;
        v102 = 0;
      }
      else
      {
        (*(void (__fastcall **)(__int64))(v2 + 648))(v101);
      }
      if ( v102 >= 0 )
      {
        v106 = 1;
        v2630 = 1;
        goto LABEL_149;
      }
    }
    v100 = 6LL;
  }
  v107 = *(_DWORD *)(v2 + 2452);
  if ( (v107 & 8) == 0 )
    goto LABEL_148;
  if ( (v107 & 0x1000) != 0 )
    goto LABEL_148;
  v108 = __rdtsc();
  v109 = __ROR8__(v108, 3) ^ v108;
  v2895 = (v109 * (unsigned __int128)0x7010008004002001uLL) >> 64;
  if ( (((unsigned __int8)v109 ^ (unsigned __int8)v2895) & 3) != 0 )
    goto LABEL_148;
  v110 = __rdtsc();
  v111 = (__ROR8__(v110, 3) ^ v110) * (unsigned __int128)0x7010008004002001uLL;
  v2896 = *((_QWORD *)&v111 + 1);
  v112 = ((unsigned __int64)v111 ^ *((_QWORD *)&v111 + 1)) % 0xB;
  if ( (unsigned int)v112 > 5 )
  {
    v116 = v112 - 6;
    if ( v116 )
    {
      v117 = v116 - 1;
      if ( v117 )
      {
        v118 = v117 - 1;
        if ( v118 )
        {
          if ( v118 == 1 )
          {
            v2700 = -1333354875;
            v115 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v119 = __rdtsc();
            v120 = __ROR8__(v119, 3);
            v2897 = ((v120 ^ v119) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v121 = v2897 ^ (67117057 * (v120 ^ v119));
            v115 = ((((((v121 % 0x1A + 97) << 8) | ((v121 >> 5)
                                                  - 26
                                                  * ((unsigned int)((1321528399 * (unsigned __int64)(v121 >> 5)) >> 32) >> 3)
                                                  + 65)) << 8) | ((v121 >> 10) % 0x1A + 97)) << 8) | ((v121 >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v2701 = 1684422978;
          v115 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v2702 = -2100910376;
        v115 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v2703 = 1314342514;
      v115 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v112 == 5 )
  {
    v2699 = 680282605;
    v115 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v112 )
  {
    v113 = v112 - 1;
    if ( v113 )
    {
      v114 = v113 - 1;
      if ( v114 )
      {
        if ( v114 == 1 )
        {
          v2695 = -1474152136;
          v115 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v2694 = 1728537748;
          v115 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v2696 = -2051698419;
        v115 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v2697 = -1297272415;
      v115 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v2698 = -795291432;
    v115 = __ROR4__(-795291432, 6);
  }
  v122 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v2 + 248))(512LL, *(_QWORD *)(v2 + 1896), v115);
  if ( !v122 )
  {
LABEL_148:
    v106 = 1;
    v2647 = 0;
    goto LABEL_149;
  }
  v123 = *(unsigned int *)(*(_QWORD *)(v2 + 1768) + *(_QWORD *)(v2 + 1304));
  if ( (_DWORD)v123 )
  {
    v124 = __rdtsc();
    v125 = (__ROR8__(v124, 3) ^ v124) * (unsigned __int128)0x7010008004002001uLL;
    v2898 = *((_QWORD *)&v125 + 1);
    v123 = (*((_QWORD *)&v125 + 1) ^ (unsigned __int64)v125) % v123;
  }
  v126 = (*(__int64 (__fastcall **)(_QWORD))(v2 + 944))(0LL);
  if ( !v126 )
    goto LABEL_147;
  do
  {
    if ( !(_DWORD)v123 )
      break;
    LODWORD(v123) = v123 - 1;
    v126 = (*(__int64 (__fastcall **)(__int64))(v2 + 944))(v126);
  }
  while ( v126 );
  v99 = v2;
  if ( !v126 )
    goto LABEL_147;
  if ( (*(int (__fastcall **)(__int64))(v2 + 928))(v126) < 0 )
  {
    (*(void (__fastcall **)(__int64))(v2 + 952))(v126);
    v126 = 0LL;
  }
  if ( !v126 )
  {
LABEL_147:
    (*(void (__fastcall **)(__int64))(v2 + 256))(v122);
    goto LABEL_148;
  }
  (*(void (__fastcall **)(__int64, _BYTE *))(v2 + 1080))(v126, v2802);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v2 + 448))(v126, v122, 0LL, 0LL);
  v137 = __rdtsc();
  v138 = (__ROR8__(v137, 3) ^ v137) * (unsigned __int128)0x7010008004002001uLL;
  v2899 = *((_QWORD *)&v138 + 1);
  v139 = ((unsigned __int64)v138 ^ *((_QWORD *)&v138 + 1)) % (*(unsigned int (__fastcall **)(__int64))(v2 + 440))(v122);
  _disable();
  v140 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2 + 1608));
  _enable();
  (*(void (__fastcall **)(__int64, _BYTE *))(v2 + 456))(v140, v2801);
  (*(void (__fastcall **)(_BYTE *, __int64))(v2 + 424))(v2927, v122);
  while ( (*(int (__fastcall **)(unsigned int *, _BYTE *))(v2 + 432))(&v2669, v2927) >= 0 )
  {
    if ( !(_DWORD)v139 )
    {
      (*(void (__fastcall **)(_BYTE *, _QWORD))(v2 + 416))(v2801, v2669);
      break;
    }
    LODWORD(v139) = v139 - 1;
  }
  (*(void (__fastcall **)(_BYTE *, _BYTE *))(v2 + 464))(v2801, v2924);
  (*(void (__fastcall **)(__int64))(v2 + 256))(v122);
  v106 = 1;
  v2647 = 1;
LABEL_149:
  v2671 = 0LL;
  v127 = 4;
  v128 = &v2672;
  j = 0LL;
  v130 = 0xFFFFFFFFLL;
  do
  {
    *(_BYTE *)v128 = 0;
    v128 = (unsigned int *)((char *)v128 + 1);
    --v127;
  }
  while ( v127 );
  v131 = *(unsigned int *)(v2 + 2080);
  *((_QWORD *)&v132 + 1) = a1;
  v133 = (_DWORD *)(v2 + 2092);
  v2636 = v133;
  v2634 = -1073741670;
  if ( *(_DWORD *)(a1 + 2088) < *v133 )
  {
    v134 = v2900;
    v135 = v2901;
    v136 = v2752;
    v2631 = v2900;
    v2629 = v2901;
    v2632 = v2752;
    v2653 = v2746;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v99 + 2448) & 0x110000) != 0x110000 )
        __writedr(7u, 0LL);
      if ( (_DWORD)v131 == *(_DWORD *)(v99 + 2060) )
      {
        ++*(_DWORD *)(v99 + 2096);
        v131 = 0LL;
        if ( *(_DWORD *)(v99 + 2392) == 11 )
        {
          v141 = *(_DWORD *)(v99 + 2448);
          if ( (v141 & 1) == 0 )
          {
            if ( *(_DWORD *)(v99 + 2416) == -1 )
              *(_DWORD *)(v99 + 2416) = 0;
            else
              *(_DWORD *)(v99 + 2448) = v141 | 1;
          }
        }
      }
      v142 = *(_QWORD *)(v99 + 2680);
      v130 = v99;
      v2641 = v131;
      if ( v142 )
        v130 = v142;
      v100 = 0LL;
      v143 = v130 + *(unsigned int *)(v130 + 2056);
      v2619 = (int *)v143;
      if ( (_DWORD)v2671 && HIDWORD(v2671) <= (unsigned int)v131 )
      {
        v100 = HIDWORD(v2671);
        v143 = v130 + v2672;
        v2619 = (int *)v143;
      }
      v144 = 1LL;
      if ( (_DWORD)v100 != (_DWORD)v131 )
      {
        v145 = v131 - v100;
        v146 = v145;
        v100 = v145 + (unsigned int)v100;
        while ( 1 )
        {
          v131 = *(unsigned int *)v143;
          if ( (int)v131 > 12 )
            break;
          if ( (_DWORD)v131 == 12 )
            goto LABEL_189;
          v147 = v131 - 1;
          if ( !v147 )
            goto LABEL_189;
          v131 = (unsigned int)(v147 - 6);
          if ( (_DWORD)v131 )
          {
            v131 = (unsigned int)(v131 - 1);
            if ( !(_DWORD)v131 )
            {
              v149 = *(unsigned __int16 *)(v143 + 32);
LABEL_195:
              v148 = (v149 + 55) & 0xFFFFFFF8;
              goto LABEL_196;
            }
            if ( (_DWORD)v131 != 2 )
            {
LABEL_192:
              v148 = 48LL;
              goto LABEL_196;
            }
            v148 = (unsigned int)(16 * (*(_DWORD *)(v143 + 28) + 3));
          }
          else
          {
            v148 = (unsigned int)(24 * (*(_DWORD *)(v143 + 24) + 2));
          }
LABEL_196:
          v143 += v148;
          if ( !--v146 )
          {
            v99 = (unsigned __int64)v2621;
            v133 = v2636;
            v134 = v2631;
            v135 = v2629;
            v136 = v2632;
            v2619 = (int *)v143;
            goto LABEL_198;
          }
        }
        if ( (_DWORD)v131 == 28 )
        {
          v149 = *(unsigned __int16 *)(v143 + 40);
          goto LABEL_195;
        }
        if ( (_DWORD)v131 == 30 )
        {
          v131 = *(_DWORD *)(v143 + 36) != 0 ? (unsigned int)(*(_DWORD *)(v143 + 36) - 1) : 0;
          v148 = (((*(_DWORD *)(v143 + 36) != 0 ? *(_DWORD *)(v143 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
               + 24 * (*(unsigned __int16 *)(v143 + 40) + 2);
        }
        else
        {
          if ( (int)v131 <= 32 )
            goto LABEL_192;
          if ( (int)v131 <= 34 )
          {
            v131 = *(_DWORD *)(v143 + 32) & 0xFFF;
            v148 = 20 * (unsigned int)((v131 + (unsigned __int64)*(unsigned int *)(v143 + 40) + 4095) >> 12) + 48;
          }
          else
          {
            if ( (_DWORD)v131 != 43 )
              goto LABEL_192;
LABEL_189:
            v131 = *(unsigned int *)(v143 + 16);
            v148 = 4 * (*(_DWORD *)(v143 + 16) / 0xCu) + 48;
          }
        }
        v144 = 1LL;
        goto LABEL_196;
      }
LABEL_198:
      LODWORD(v2671) = 1;
      HIDWORD(v2671) = v100;
      v2672 = v143 - v130;
      v150 = *(_DWORD *)v143;
      v2964 = *(_DWORD *)v143;
      if ( *(int *)v143 > 28 )
      {
        if ( v150 > 37 )
        {
          if ( v150 == 38 )
          {
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v99 + 416))(v2922, *(unsigned int *)(v143 + 44));
            v1560 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v99 + 464))(v2922, v2923);
            __asm { xgetbv }
            v1562 = v1560 | (v1561 << 32);
            (*(void (__fastcall **)(_BYTE *))(v99 + 408))(v2923);
            j = 0LL;
            v1563 = *(_QWORD *)(v143 + 32);
            v100 = v1562 & *(_QWORD *)(v143 + 24);
            if ( v100 == v1563 )
              goto LABEL_213;
            v181 = *(_QWORD *)(v143 + 40);
            if ( *(_DWORD *)(v99 + 2296) )
              goto LABEL_213;
            *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v100 ^ v1563;
            v178 = *(_DWORD *)(v99 + 2296);
            goto LABEL_264;
          }
          if ( v150 <= 42 )
          {
            *(_DWORD *)(v99 + 2088) += *(_DWORD *)(v143 + 36);
            v1443 = *(unsigned int *)(v143 + 36);
            v1444 = (_QWORD *)(v99 + *(unsigned int *)(v143 + 32));
            v1445 = *(_DWORD *)(v99 + 2068);
            v1446 = v1444;
            v1447 = *(_QWORD *)(v99 + 2072);
            v1448 = (const char *)v1444;
            if ( v1444 < (_QWORD *)((char *)v1444 + v1443) )
            {
              do
              {
                _mm_prefetch(v1448, 0);
                v1448 += 64;
              }
              while ( v1448 < (const char *)v1444 + v1443 );
            }
            v100 = *(_QWORD *)(v99 + 2072);
            v1449 = (unsigned int)v1443 >> 7;
            if ( (unsigned int)v1443 >> 7 )
            {
              do
              {
                v1450 = 8LL;
                do
                {
                  v1451 = v100 ^ *v1446;
                  v1452 = v1446[1];
                  v1446 += 2;
                  v100 = __ROL8__(__ROL8__(v1451, v1445) ^ v1452, v1445);
                  --v1450;
                }
                while ( v1450 );
                v1453 = __ROL8__(v1447 ^ ((char *)v1446 - (char *)v1444), 17) ^ v1447 ^ ((char *)v1446 - (char *)v1444);
                v2829 = (v1453 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1445 = ((unsigned __int8)v2829 ^ (unsigned __int8)(v1453 ^ v1445)) & 0x3F;
                if ( !v1445 )
                  LOBYTE(v1445) = 1;
                --v1449;
              }
              while ( v1449 );
              v99 = (unsigned __int64)v2621;
            }
            v130 = v1443 & 0x7F;
            if ( (unsigned int)v130 >= 8 )
            {
              v1454 = (unsigned __int64)(unsigned int)v130 >> 3;
              do
              {
                v100 = __ROL8__(*v1446++ ^ v100, v1445);
                v130 = (unsigned int)(v130 - 8);
                --v1454;
              }
              while ( v1454 );
            }
            j = 0LL;
            if ( (_DWORD)v130 )
            {
              do
              {
                v1455 = *(unsigned __int8 *)v1446;
                v1446 = (_QWORD *)((char *)v1446 + 1);
                v100 = __ROL8__(v1455 ^ v100, v1445);
                v130 = (unsigned int)(v130 - 1);
              }
              while ( (_DWORD)v130 );
              j = 0LL;
            }
            v1456 = *(_QWORD *)(v143 + 24);
            if ( v100 == v1456 )
              goto LABEL_213;
            v1457 = *(_DWORD *)(v99 + 2296);
            if ( !v1457 )
            {
              *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v100 ^ v1456;
              v1457 = *(_DWORD *)(v99 + 2296);
            }
            v934 = (_BYTE *)(v99 + *(unsigned int *)(v143 + 32));
            v1211 = v1457 == 0;
LABEL_1915:
            if ( !v1211 )
              goto LABEL_213;
            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
            v935 = v143 - 0x4C48B4211BBACBEBLL;
            goto LABEL_1439;
          }
          switch ( v150 )
          {
            case '+':
              v100 = 12LL;
LABEL_2095:
              if ( v150 == 12 )
              {
                if ( !*(_QWORD *)(v99 + 2432) )
                  goto LABEL_211;
                v1308 = *(_DWORD *)(v99 + 2452);
                LOBYTE(v1309) = v1308;
                if ( *(_DWORD *)(v99 + 2084) )
                {
                  if ( (((unsigned __int8)v1308 ^ (unsigned __int8)(v1308 >> 3)) & 4) != 0 )
                    goto LABEL_211;
                }
                else
                {
                  v1309 = v1308 ^ ((unsigned __int8)v1308 ^ (unsigned __int8)(8 * v1308)) & 0x20;
                  *(_DWORD *)(v99 + 2452) = v1309;
                }
                if ( (v1309 & 4) != 0 )
                {
                  j = *(_QWORD *)(v143 + 32);
                  if ( j )
                  {
                    v1310 = *(unsigned int *)(v99 + 2084);
                    v1311 = ((((_WORD)j + (_WORD)v1310) & 0xFFF)
                           + (unsigned __int64)(unsigned int)(*(_DWORD *)(v143 + 40) - v1310)
                           + 4095) >> 12;
                    v1312 = j + v1310;
                  }
                  else
                  {
                    v1312 = *(_QWORD *)(v143 + 8);
                    v1311 = (*(unsigned int *)(v143 + 16) + (unsigned __int64)(*(_DWORD *)(v143 + 8) & 0xFFF) + 4095) >> 12;
                  }
                  v1313 = v1312 & 0xFFFFFFFFFFFFF000uLL;
                  while ( v1311 )
                  {
                    --v1311;
                    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v99 + 688))(v1313)
                      && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v143;
                      *(_QWORD *)(v99 + 2328) = v1313;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    *(_DWORD *)(v99 + 2088) += 256;
                    v1313 += 4096LL;
                    if ( j )
                    {
                      *(_DWORD *)(v99 + 2084) += 4096;
                      if ( *(_DWORD *)(v99 + 2088) >= *v133 )
                        break;
                    }
                  }
                  if ( j )
                  {
                    j = 0LL;
                    if ( !v1311 )
                      *(_DWORD *)(v99 + 2084) = 0;
                  }
                  if ( *(_DWORD *)(v99 + 2084) != (_DWORD)j )
                    goto LABEL_213;
                  v1314 = *(_QWORD *)(v99 + 1344);
                  CurrentIrql = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64))(v99 + 336))(v1314);
                  v1317 = v2619;
                  v1318 = **(unsigned int ***)(v99 + 1552);
                  v1319 = v1318 + 4;
                  v1320 = *((_BYTE *)v1318 + 12);
                  v1321 = (unsigned __int64)&v1318[6 * *v1318 + 4];
                  do
                  {
                    v1322 = 24LL;
                    v1323 = (__int64 *)(v2619 + 6);
                    v1324 = v1319;
                    do
                    {
                      v1325 = *(_QWORD *)v1324;
                      v1324 += 2;
                      v1326 = *v1323++;
                      if ( v1325 != v1326 )
                        goto LABEL_2123;
                      v1322 = (unsigned int)(v1322 - 8);
                    }
                    while ( (unsigned int)v1322 >= 8 );
                    if ( !(_DWORD)v1322 )
                      break;
                    while ( 1 )
                    {
                      v1316 = *(unsigned __int8 *)v1324;
                      v1324 = (unsigned int *)((char *)v1324 + 1);
                      v1327 = *(unsigned __int8 *)v1323;
                      v1323 = (__int64 *)((char *)v1323 + 1);
                      if ( v1316 != v1327 )
                        break;
                      v207 = (_DWORD)v1322 == 1;
                      v1322 = (unsigned int)(v1322 - 1);
                      if ( v207 )
                        goto LABEL_2124;
                    }
LABEL_2123:
                    v1319 += 6;
                  }
                  while ( (unsigned __int64)v1319 < v1321 );
LABEL_2124:
                  v99 = (unsigned __int64)v2621;
                  (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))v2621 + 50))(
                    *((_QWORD *)v2621 + 168),
                    v1316,
                    v1322,
                    v1323);
                  __writecr8(CurrentIrql);
                  j = 0LL;
                  if ( v1320 )
                  {
                    if ( (*(_DWORD *)(v99 + 2452) & 0x10) != 0 && !*(_DWORD *)(v99 + 2296) )
                    {
                      v1328 = v2619;
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = (char *)v1328 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *v1328;
                      *(_QWORD *)(v99 + 2328) = 1LL;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    if ( *((_QWORD *)v1317 + 3) == 1LL )
                      goto LABEL_213;
                  }
                  if ( v1319 != (unsigned int *)v1321 || *(_DWORD *)(v99 + 2296) )
                    goto LABEL_213;
                  v1329 = v2619;
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = (char *)v1329 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v99 + 2320) = *v1329;
                  *(_QWORD *)(v99 + 2328) = v1319;
                  goto LABEL_2132;
                }
              }
              if ( *(_DWORD *)(v99 + 2084) )
                goto LABEL_2137;
              if ( v150 == 12 )
              {
                if ( !*(_QWORD *)(v99 + 2432) )
                {
                  *(_DWORD *)(v99 + 2084) = 0;
                  goto LABEL_2137;
                }
                v1348 = *(_DWORD *)(v99 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v99 + 2452) ^ (unsigned __int8)(8 * *(_DWORD *)(v99 + 2452))) & 0x20;
                *(_DWORD *)(v99 + 2452) = v1348;
                if ( (v1348 & 4) != 0 )
                {
                  j = 0LL;
                  v1349 = *(_QWORD *)(v143 + 8) & 0xFFFFFFFFFFFFF000uLL;
                  v1350 = (*(unsigned int *)(v143 + 16) + (unsigned __int64)(*(_DWORD *)(v143 + 8) & 0xFFF) + 4095) >> 12;
                  if ( !v1350 )
                    goto LABEL_2138;
                  do
                  {
                    --v1350;
                    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v99 + 688))(v1349)
                      && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v143;
                      *(_QWORD *)(v99 + 2328) = v1349;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    *(_DWORD *)(v99 + 2088) += 256;
                    v1349 += 4096LL;
                  }
                  while ( v1350 );
                  goto LABEL_2200;
                }
                v1351 = *(_QWORD **)(v143 + 8);
                v1352 = *(unsigned int *)(v143 + 16);
                v1353 = v1351;
                *(_DWORD *)(v99 + 2088) += v1352;
                v1354 = (const char *)v1351;
                v1355 = *(_DWORD *)(v99 + 2068);
                v1356 = *(_QWORD *)(v99 + 2072);
                if ( v1351 < (_QWORD *)((char *)v1351 + v1352) )
                {
                  do
                  {
                    _mm_prefetch(v1354, 0);
                    v1354 += 64;
                  }
                  while ( v1354 < (const char *)v1351 + v1352 );
                }
                v1357 = *(_QWORD *)(v99 + 2072);
                v1358 = (unsigned int)v1352 >> 7;
                if ( (unsigned int)v1352 >> 7 )
                {
                  do
                  {
                    v1359 = 8LL;
                    do
                    {
                      v1360 = v1357 ^ *v1353;
                      v1361 = v1353[1];
                      v1353 += 2;
                      v1357 = __ROL8__(__ROL8__(v1360, v1355) ^ v1361, v1355);
                      --v1359;
                    }
                    while ( v1359 );
                    v1362 = (__ROL8__(v1356 ^ ((char *)v1353 - (char *)v1351), 17) ^ v1356 ^ (unsigned __int64)((char *)v1353 - (char *)v1351))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2825 = *((_QWORD *)&v1362 + 1);
                    v1355 = (BYTE8(v1362) ^ (unsigned __int8)(v1362 ^ v1355)) & 0x3F;
                    if ( !v1355 )
                      LOBYTE(v1355) = 1;
                    --v1358;
                  }
                  while ( v1358 );
                  v99 = (unsigned __int64)v2621;
                }
                v1363 = v1352 & 0x7F;
                if ( v1363 >= 8 )
                {
                  v1364 = (unsigned __int64)v1363 >> 3;
                  do
                  {
                    v1357 = __ROL8__(*v1353++ ^ v1357, v1355);
                    v1363 -= 8;
                    --v1364;
                  }
                  while ( v1364 );
                  v99 = (unsigned __int64)v2621;
                }
                for ( j = 0LL; v1363; --v1363 )
                {
                  v1365 = *(unsigned __int8 *)v1353;
                  v1353 = (_QWORD *)((char *)v1353 + 1);
                  v1357 = __ROL8__(v1365 ^ v1357, v1355);
                }
                for ( k = v1357; ; LODWORD(v1357) = k ^ v1357 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                v1367 = *(_DWORD *)(v143 + 20);
                v1368 = v1357 & 0x7FFFFFFF;
                if ( v1368 != v1367 )
                {
                  v1369 = *(unsigned int *)(v143 + 16);
                  v1370 = *(_QWORD *)(v143 + 8);
                  if ( *(_DWORD *)(v143 + 16) && (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                  {
                    v1371 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1372 = v1370 & 0xFFFFFFFFFFFFF000uLL;
                    v2623 = (v1370 + v1369 - 1) | 0xFFF;
                    v1373 = (v1370 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v1374 = v1371;
                      while ( 1 )
                      {
                        v1375 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v1372, 0LL);
                        if ( v1375 != -1073741267 )
                          break;
                        if ( v1371 > 1u )
                          goto LABEL_2192;
                        v1374 = v1371;
                        __writecr8(v1371);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v1375 < 0 )
                        break;
LABEL_2192:
                      v1372 += 4096LL;
                      v1373 += 4096LL;
                      if ( v1373 == v2623 )
                        goto LABEL_2193;
                    }
                    __writecr8(v1374);
                    v143 = (__int64)v2619;
                    j = 0LL;
                    v1367 = v2619[5];
                  }
                  v1376 = *(_DWORD *)(v99 + 2296);
                  v1377 = v1376 == 0;
                  if ( !v1376 )
                  {
                    v1378 = v1368;
                    v1379 = v1367;
                    goto LABEL_2197;
                  }
                  goto LABEL_2198;
                }
              }
              else
              {
                v1381 = *(_QWORD **)(v143 + 8);
                v1382 = *(unsigned int *)(v143 + 16);
                v1383 = v1381;
                *(_DWORD *)(v99 + 2088) += v1382;
                v1384 = (const char *)v1381;
                v1385 = *(_DWORD *)(v99 + 2068);
                v1386 = *(_QWORD *)(v99 + 2072);
                if ( v1381 < (_QWORD *)((char *)v1381 + v1382) )
                {
                  do
                  {
                    _mm_prefetch(v1384, 0);
                    v1384 += 64;
                  }
                  while ( v1384 < (const char *)v1381 + v1382 );
                }
                v1387 = *(_QWORD *)(v99 + 2072);
                v1388 = (unsigned int)v1382 >> 7;
                if ( (unsigned int)v1382 >> 7 )
                {
                  do
                  {
                    v1389 = 8LL;
                    do
                    {
                      v1390 = v1387 ^ *v1383;
                      v1391 = v1383[1];
                      v1383 += 2;
                      v1387 = __ROL8__(__ROL8__(v1390, v1385) ^ v1391, v1385);
                      --v1389;
                    }
                    while ( v1389 );
                    v1392 = (__ROL8__(v1386 ^ ((char *)v1383 - (char *)v1381), 17) ^ v1386 ^ (unsigned __int64)((char *)v1383 - (char *)v1381))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2826 = *((_QWORD *)&v1392 + 1);
                    v1385 = (BYTE8(v1392) ^ (unsigned __int8)(v1392 ^ v1385)) & 0x3F;
                    if ( !v1385 )
                      LOBYTE(v1385) = 1;
                    --v1388;
                  }
                  while ( v1388 );
                  v99 = (unsigned __int64)v2621;
                }
                v1393 = v1382 & 0x7F;
                if ( v1393 >= 8 )
                {
                  v1394 = (unsigned __int64)v1393 >> 3;
                  do
                  {
                    v1387 = __ROL8__(*v1383++ ^ v1387, v1385);
                    v1393 -= 8;
                    --v1394;
                  }
                  while ( v1394 );
                  v99 = (unsigned __int64)v2621;
                }
                for ( j = 0LL; v1393; --v1393 )
                {
                  v1395 = *(unsigned __int8 *)v1383;
                  v1383 = (_QWORD *)((char *)v1383 + 1);
                  v1387 = __ROL8__(v1395 ^ v1387, v1385);
                }
                for ( m = v1387; ; LODWORD(v1387) = m ^ v1387 )
                {
                  m >>= 31;
                  if ( !m )
                    break;
                }
                v1397 = v1387 & 0x7FFFFFFF;
                v1398 = 0;
                if ( v1397 == v2619[5] )
                {
                  v150 = v2964;
                  v143 = (__int64)v2619;
                  goto LABEL_2138;
                }
                if ( !*v2619 )
                  v1398 = v2619[6] != 0;
                v1399 = (unsigned int)v2619[4];
                v1400 = *((_QWORD *)v2619 + 1);
                if ( v2619[4] )
                {
                  v1401 = 64LL;
                  if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                  {
                    v1402 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1403 = v1400 & 0xFFFFFFFFFFFFF000uLL;
                    v2623 = (v1400 + v1399 - 1) | 0xFFF;
                    v2620 = (v1400 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v1374 = v1402;
                      while ( 1 )
                      {
                        v1404 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v99 + 1128))(
                                  v1403,
                                  0LL,
                                  v1401,
                                  v1383);
                        if ( v1404 != -1073741267 )
                          break;
                        if ( v1398 )
                          goto LABEL_2233;
                        if ( v1402 > 1u )
                          goto LABEL_2231;
                        v1374 = v1402;
                        __writecr8(v1402);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v1404 < 0 )
                        break;
LABEL_2231:
                      v1403 += 4096LL;
                      v2620 += 4096LL;
                      if ( v2620 == v2623 )
                      {
LABEL_2193:
                        __writecr8(v1374);
                        v150 = v2964;
                        v143 = (__int64)v2619;
LABEL_2137:
                        j = 0LL;
LABEL_2138:
                        v130 = *(_QWORD *)(v143 + 8);
                        v100 = *(unsigned int *)(v99 + 2084);
                        v1330 = *(unsigned int *)(v143 + 16);
                        v2635 = (char *)v130;
                        v1331 = (char *)(v130 + 12 * v100);
                        v2620 = (__int64)v1331;
                        v2633 = v130 + 12 * (v1330 / 0xC);
                        v1332 = (char *)(v143 + 4 * v100 + 48);
                        v2627 = v1332;
                        if ( v1331 != (char *)v2633 )
                        {
                          v1333 = v2633;
                          do
                          {
                            if ( *(int *)v1332 >= 0 )
                            {
                              v1334 = *((_DWORD *)v1331 + 1) - *(_DWORD *)v1331;
                              v1335 = *((_QWORD *)v2619 + 4) + *(unsigned int *)v1331;
                              v2623 = v1335;
                              if ( v150 == 43 )
                              {
                                v1340 = (unsigned int)pg_unknown21(v99, v1335, v1334);
                                *(_DWORD *)(v99 + 2088) += 8 * v1334;
                                v1406 = *(_DWORD *)(v99 + 2452);
                                v2625 = v1340;
                                if ( (v1406 & 0x800) != 0 )
                                {
                                  v1407 = (_BYTE *)(v1335 - 6);
                                  v1408 = (char *)(v1335 - 6 + 5);
                                  v1409 = *v1408;
                                  if ( *(_BYTE *)(v1335 - 6) != 76
                                    || v1407[1] != 0x87
                                    || v1407[2]
                                    || v1407[3] != 0x98
                                    || v1407[4] != 0xC3
                                    || v1409 != -112 && v1409 != -15 )
                                  {
                                    goto LABEL_4092;
                                  }
                                  v1410 = *(volatile signed __int32 **)(v99 + 1248);
                                  while ( 1 )
                                  {
                                    _disable();
                                    if ( !_interlockedbittestandset(v1410, (*(_DWORD *)(v99 + 2448) >> 10) & 0x1F) )
                                      break;
                                    _enable();
                                    _mm_pause();
                                  }
                                  CurrentPrcb = *(struct _KPRCB **)(v99 + 2272);
                                  v1412 = 38LL;
                                  v1413 = 304;
                                  v1414 = CurrentPrcb;
                                  do
                                  {
                                    *(_QWORD *)&v1414->MxCsr = 0LL;
                                    v1413 -= 8;
                                    v1414 = (struct _KPRCB *)((char *)v1414 + 8);
                                    --v1412;
                                  }
                                  while ( v1412 );
                                  if ( v1413 )
                                  {
                                    v1412 = 0xFFFFFFFFLL;
                                    do
                                    {
                                      LOBYTE(v1414->MxCsr) = 0;
                                      v1414 = (struct _KPRCB *)((char *)v1414 + 1);
                                      --v1413;
                                    }
                                    while ( v1413 );
                                  }
                                  *(_OWORD *)&CurrentPrcb->NextThread = *(_OWORD *)(v99 + 2120);
                                  *(_OWORD *)&CurrentPrcb->NestingLevel = *(_OWORD *)(v99 + 2136);
                                  *(_OWORD *)&CurrentPrcb->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v99 + 2152);
                                  v2744 = 303;
                                  v2745 = CurrentPrcb;
                                  LOWORD(CurrentPrcb->NextThread) = v99 + 2188;
                                  v1415 = (v99 + 2188) >> 16;
                                  v2828 = (_BYTE *)(v99 + 2188);
                                  HIWORD(CurrentPrcb->NextThread) = v1415;
                                  LODWORD(CurrentPrcb->IdleThread) = (v99 + 2188) >> 32;
                                  __sidt(v2788);
                                  __lidt(&v2744);
                                  *v1408 = -15;
                                  if ( *v1408 != -15 )
                                    goto LABEL_2262;
                                  if ( (*(_DWORD *)(v99 + 2452) & 0x20000) == 0 )
                                  {
                                    CurrentPrcb = KeGetCurrentPrcb();
                                    **(_QWORD **)(v99 + 1216) = v99 - 0x5C5FC0A76E374B18LL;
                                    v1415 = v1335;
                                    **(_QWORD **)(v99 + 1224) = CurrentPrcb;
                                    **(_QWORD **)(v99 + 1232) = v1335;
                                    **(_QWORD **)(v99 + 1240) = 275LL;
                                  }
                                  ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1335 - 6 + 5))(
                                    v1415,
                                    CurrentPrcb,
                                    v1412,
                                    1LL);
                                  if ( (*(_DWORD *)(v99 + 2452) & 0x20000) == 0 )
                                  {
                                    **(_QWORD **)(v99 + 1216) = 0xA3A03F5891C8B4E8uLL;
                                    **(_QWORD **)(v99 + 1224) = 0LL;
                                    **(_QWORD **)(v99 + 1232) = 0LL;
                                    **(_QWORD **)(v99 + 1240) = 0LL;
                                  }
                                  if ( *v1408 == -15 )
                                  {
                                    *v1408 = -112;
                                    v130 = *v1408 == -112;
                                  }
                                  else
                                  {
LABEL_2262:
                                    v130 = 0LL;
                                  }
                                  __lidt(v2788);
                                  v100 = *(_QWORD *)(v99 + 1248);
                                  _InterlockedAnd(
                                    (volatile signed __int32 *)v100,
                                    ~(1 << ((*(_DWORD *)(v99 + 2448) >> 10) & 0x1F)));
                                  _enable();
                                  if ( !(_DWORD)v130 )
                                  {
LABEL_4092:
                                    if ( !*(_DWORD *)(v99 + 2296) )
                                    {
                                      v1416 = v2619;
                                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                                      *(_QWORD *)(v99 + 2312) = (char *)v1416 - 0x4C48B4211BBACBEBLL;
                                      *(_QWORD *)(v99 + 2320) = *v1416;
                                      *(_QWORD *)(v99 + 2328) = v1407;
                                      *(_DWORD *)(v99 + 2296) = 1;
                                      __b8(v99, 0LL);
                                    }
                                  }
                                  LODWORD(v1340) = v2625;
                                  v1331 = (char *)v2620;
                                }
                              }
                              else
                              {
                                *(_DWORD *)(v99 + 2088) += v1334;
                                v130 = v1335;
                                v1336 = *(_DWORD *)(v99 + 2068);
                                v1337 = (const char *)v1335;
                                v1338 = *(_QWORD *)(v99 + 2072);
                                v1339 = v1335 + v1334;
                                if ( v1335 < v1339 )
                                {
                                  do
                                  {
                                    _mm_prefetch(v1337, 0);
                                    v1337 += 64;
                                  }
                                  while ( (unsigned __int64)v1337 < v1339 );
                                }
                                v1340 = *(_QWORD *)(v99 + 2072);
                                v100 = v1334 >> 7;
                                if ( (_DWORD)v100 )
                                {
                                  do
                                  {
                                    v1341 = 8LL;
                                    do
                                    {
                                      v1342 = v1340 ^ *(_QWORD *)v130;
                                      v1343 = *(_QWORD *)(v130 + 8);
                                      v130 += 16LL;
                                      v1340 = __ROL8__(__ROL8__(v1342, v1336) ^ v1343, v1336);
                                      --v1341;
                                    }
                                    while ( v1341 );
                                    v1344 = __ROL8__(v1338 ^ (v130 - v1335), 17) ^ v1338 ^ (v130 - v1335);
                                    v2827 = (v1344 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                    v1336 = ((unsigned __int8)v2827 ^ (unsigned __int8)(v1344 ^ v1336)) & 0x3F;
                                    if ( !v1336 )
                                      LOBYTE(v1336) = 1;
                                    v207 = (_DWORD)v100 == 1;
                                    v100 = (unsigned int)(v100 - 1);
                                  }
                                  while ( !v207 );
                                  v1332 = v2627;
                                  v1333 = v2633;
                                }
                                v1345 = v1334 & 0x7F;
                                if ( v1345 >= 8 )
                                {
                                  v100 = (unsigned __int64)(v1334 & 0x7F) >> 3;
                                  do
                                  {
                                    v1340 = __ROL8__(*(_QWORD *)v130 ^ v1340, v1336);
                                    v130 += 8LL;
                                    v1345 -= 8;
                                    --v100;
                                  }
                                  while ( v100 );
                                }
                                if ( v1345 )
                                {
                                  v100 = 0xFFFFFFFFLL;
                                  do
                                  {
                                    v1346 = *(unsigned __int8 *)v130++;
                                    v1340 = __ROL8__(v1346 ^ v1340, v1336);
                                    --v1345;
                                  }
                                  while ( v1345 );
                                }
                                for ( n = v1340; ; v1340 = (unsigned int)n ^ (unsigned int)v1340 )
                                {
                                  n >>= 31;
                                  if ( !n )
                                    break;
                                }
                                LODWORD(v1340) = v1340 & 0x7FFFFFFF;
                                v2625 = v1340;
                              }
                              v1417 = *(_DWORD *)v1332;
                              if ( (_DWORD)v1340 == (*(_DWORD *)v1332 & 0x7FFFFFFF) )
                              {
LABEL_2279:
                                j = 0LL;
                              }
                              else
                              {
                                v1418 = v1334;
                                j = 0LL;
                                if ( v1418 )
                                {
                                  v100 = 64LL;
                                  if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                                  {
                                    v1419 = KeGetCurrentIrql();
                                    __writecr8(2uLL);
                                    v1420 = v1335 & 0xFFFFFFFFFFFFF000uLL;
                                    v1421 = (v1418 + v1335 - 1) | 0xFFF;
                                    v1422 = v1420 - 1;
                                    while ( 1 )
                                    {
                                      v1423 = v1419;
                                      while ( 1 )
                                      {
                                        v1424 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                                                  v1420,
                                                  0LL,
                                                  v100,
                                                  v130);
                                        if ( v1424 != -1073741267 )
                                          break;
                                        if ( v1419 > 1u )
                                          goto LABEL_2277;
                                        v1423 = v1419;
                                        __writecr8(v1419);
                                        KeGetCurrentIrql();
                                        __writecr8(2uLL);
                                      }
                                      if ( v1424 < 0 )
                                        break;
LABEL_2277:
                                      v1420 += 4096LL;
                                      v1422 += 4096LL;
                                      if ( v1422 == v1421 )
                                      {
                                        __writecr8(v1423);
                                        v1331 = (char *)v2620;
                                        v1332 = v2627;
                                        goto LABEL_2279;
                                      }
                                    }
                                    __writecr8(v1423);
                                    v1332 = v2627;
                                    j = 0LL;
                                    LODWORD(v1340) = v2625;
                                    v1335 = v2623;
                                    v1417 = *(_DWORD *)v2627;
                                  }
                                }
                                v1425 = v1417;
                                if ( !*(_DWORD *)(v99 + 2296) )
                                {
                                  LODWORD(v1425) = v1417 & 0x7FFFFFFF;
                                  *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1425 ^ (unsigned int)v1340;
                                  if ( !*(_DWORD *)(v99 + 2296) )
                                  {
                                    v1426 = v2619;
                                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                                    *(_QWORD *)(v99 + 2312) = (char *)v1426 - 0x4C48B4211BBACBEBLL;
                                    *(_QWORD *)(v99 + 2320) = *v1426;
                                    *(_QWORD *)(v99 + 2328) = v1335;
                                    *(_DWORD *)(v99 + 2296) = 1;
                                    __b8(v99, 0LL);
                                  }
                                }
                                v1331 = (char *)v2620;
                              }
                            }
                            v1332 += 4;
                            v1331 += 12;
                            v2627 = v1332;
                            v2620 = (__int64)v1331;
                            if ( (unsigned __int64)v1331 >= v1333 )
                              break;
                            v150 = v2964;
                          }
                          while ( *(_DWORD *)(v99 + 2088) < *v2636 );
                          if ( v1331 != (char *)v2633 )
                          {
                            *(_DWORD *)(v99 + 2084) = (v1331 - v2635) / 12;
                            goto LABEL_213;
                          }
                        }
                        v1427 = *(_QWORD *)(v99 + 1344);
                        v1428 = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64))(v99 + 336))(v1427);
                        v1430 = v2619;
                        v1431 = **(unsigned int ***)(v99 + 1552);
                        v1432 = v1431 + 4;
                        v1433 = *((_BYTE *)v1431 + 12);
                        v1434 = (unsigned __int64)&v1431[6 * *v1431 + 4];
                        do
                        {
                          v1435 = 24LL;
                          v1436 = (__int64 *)(v2619 + 6);
                          v1437 = v1432;
                          do
                          {
                            v1438 = *(_QWORD *)v1437;
                            v1437 += 2;
                            v1439 = *v1436++;
                            if ( v1438 != v1439 )
                              goto LABEL_2297;
                            v1435 = (unsigned int)(v1435 - 8);
                          }
                          while ( (unsigned int)v1435 >= 8 );
                          if ( !(_DWORD)v1435 )
                            break;
                          while ( 1 )
                          {
                            v1429 = *(unsigned __int8 *)v1437;
                            v1437 = (unsigned int *)((char *)v1437 + 1);
                            v1440 = *(unsigned __int8 *)v1436;
                            v1436 = (__int64 *)((char *)v1436 + 1);
                            if ( v1429 != v1440 )
                              break;
                            v207 = (_DWORD)v1435 == 1;
                            v1435 = (unsigned int)(v1435 - 1);
                            if ( v207 )
                              goto LABEL_2298;
                          }
LABEL_2297:
                          v1432 += 6;
                        }
                        while ( (unsigned __int64)v1432 < v1434 );
LABEL_2298:
                        v99 = (unsigned __int64)v2621;
                        (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))v2621 + 50))(
                          *((_QWORD *)v2621 + 168),
                          v1429,
                          v1435,
                          v1436);
                        __writecr8(v1428);
                        j = 0LL;
                        if ( !v1433 )
                          goto LABEL_4093;
                        if ( (*(_DWORD *)(v99 + 2452) & 0x10) != 0 && !*(_DWORD *)(v99 + 2296) )
                        {
                          v1441 = v2619;
                          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v99 + 2312) = (char *)v1441 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v99 + 2320) = *v1441;
                          *(_QWORD *)(v99 + 2328) = 1LL;
                          *(_DWORD *)(v99 + 2296) = 1;
                          __b8(v99, 0LL);
                        }
                        if ( *((_QWORD *)v1430 + 3) != 1LL )
                        {
LABEL_4093:
                          if ( v1432 == (unsigned int *)v1434 && !*(_DWORD *)(v99 + 2296) )
                          {
                            v1442 = v2619;
                            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v99 + 2312) = (char *)v1442 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v99 + 2320) = *v1442;
                            *(_QWORD *)(v99 + 2328) = v1432;
                            *(_DWORD *)(v99 + 2296) = 1;
                            __b8(v99, 0LL);
                          }
                        }
LABEL_1656:
                        *(_DWORD *)(v99 + 2084) = 0;
                        goto LABEL_213;
                      }
                    }
LABEL_2233:
                    __writecr8(v1374);
                    j = 0LL;
                  }
                }
                v143 = (__int64)v2619;
                v1405 = *(_DWORD *)(v99 + 2296);
                v1378 = (unsigned int)v2619[5];
                v1377 = v1405 == 0;
                if ( !v1405 )
                {
                  v1379 = v1397;
LABEL_2197:
                  *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1379 ^ v1378;
                  v1377 = *(_DWORD *)(v99 + 2296) == 0;
                }
LABEL_2198:
                v1380 = *(_QWORD *)(v143 + 8);
                if ( v1377 )
                {
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v99 + 2320) = *(int *)v143;
                  *(_QWORD *)(v99 + 2328) = v1380;
                  *(_DWORD *)(v99 + 2296) = 1;
                  __b8(v99, 0LL);
                }
              }
LABEL_2200:
              v150 = v2964;
              goto LABEL_2138;
            case ',':
              v1219 = *(_DWORD *)(v143 + 32);
              j = 0LL;
              v2628 = (char *)v99;
              if ( (v1219 & 2) == 0 )
                goto LABEL_1991;
              if ( !*(_QWORD *)(v99 + 2432) )
                goto LABEL_1656;
              v1220 = *(_DWORD *)(v99 + 2452);
              if ( (v1220 & 4) != 0 )
                goto LABEL_1656;
              if ( (v1219 & 2) != 0 )
              {
                v1221 = *(_DWORD *)(v99 + 2452);
                if ( *(_DWORD *)(v99 + 2084) )
                {
                  if ( (((unsigned __int8)v1220 ^ (unsigned __int8)(v1220 >> 3)) & 4) != 0 )
                    goto LABEL_1656;
                }
                else
                {
                  v1221 = v1220 ^ ((unsigned __int8)v1220 ^ (unsigned __int8)(8 * v1220)) & 0x20;
                  *(_DWORD *)(v99 + 2452) = v1221;
                }
                if ( !*(_QWORD *)(v99 + 2432) )
                  goto LABEL_1990;
                LOBYTE(v1222) = v1221;
                if ( !*(_DWORD *)(v99 + 2084) )
                {
                  v1222 = v1221 ^ ((unsigned __int8)v1221 ^ (unsigned __int8)(8 * v1221)) & 0x20;
                  *(_DWORD *)(v99 + 2452) = v1222;
                  goto LABEL_1940;
                }
                if ( (((unsigned __int8)v1221 ^ (unsigned __int8)(v1221 >> 3)) & 4) != 0 )
                {
LABEL_1990:
                  *(_DWORD *)(v99 + 2084) = 0;
                  goto LABEL_1977;
                }
LABEL_1940:
                if ( (v1222 & 4) != 0 )
                {
                  v1223 = *(_QWORD *)(v143 + 8) & 0xFFFFFFFFFFFFF000uLL;
                  for ( ii = (*(unsigned int *)(v143 + 16) + (unsigned __int64)(*(_DWORD *)(v143 + 8) & 0xFFF) + 4095) >> 12;
                        ii;
                        v1223 += 4096LL )
                  {
                    --ii;
                    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v99 + 688))(v1223)
                      && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v143;
                      *(_QWORD *)(v99 + 2328) = v1223;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    *(_DWORD *)(v99 + 2088) += 256;
                  }
                  goto LABEL_1977;
                }
                v1225 = *(const char **)(v143 + 8);
                v1226 = *(unsigned int *)(v143 + 16);
                v130 = (unsigned __int64)v1225;
                *(_DWORD *)(v99 + 2088) += v1226;
                v1227 = v1225;
                v1228 = *(_DWORD *)(v99 + 2068);
                for ( jj = *(_QWORD *)(v99 + 2072); v1227 < &v1225[v1226]; v1227 += 64 )
                  _mm_prefetch(v1227, 0);
                v1230 = *(_QWORD *)(v99 + 2072);
                v1231 = (unsigned int)v1226 >> 7;
                if ( (unsigned int)v1226 >> 7 )
                {
                  do
                  {
                    v1232 = 8LL;
                    do
                    {
                      v1233 = v1230 ^ *(_QWORD *)v130;
                      v1234 = *(_QWORD *)(v130 + 8);
                      v130 += 16LL;
                      v1230 = __ROL8__(__ROL8__(v1233, v1228) ^ v1234, v1228);
                      --v1232;
                    }
                    while ( v1232 );
                    v1235 = __ROL8__(jj ^ (v130 - (_QWORD)v1225), 17) ^ jj ^ (v130 - (_QWORD)v1225);
                    v2822 = (v1235 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v1228 = ((unsigned __int8)v2822 ^ (unsigned __int8)(v1235 ^ v1228)) & 0x3F;
                    if ( !v1228 )
                      LOBYTE(v1228) = 1;
                    --v1231;
                  }
                  while ( v1231 );
                  v99 = (unsigned __int64)v2621;
                }
                v1236 = v1226 & 0x7F;
                if ( v1236 >= 8 )
                {
                  v1237 = (unsigned __int64)v1236 >> 3;
                  do
                  {
                    v1230 = __ROL8__(*(_QWORD *)v130 ^ v1230, v1228);
                    v130 += 8LL;
                    v1236 -= 8;
                    --v1237;
                  }
                  while ( v1237 );
                }
                j = 0LL;
                if ( v1236 )
                {
                  do
                  {
                    v1238 = *(unsigned __int8 *)v130++;
                    v1230 = __ROL8__(v1238 ^ v1230, v1228);
                    --v1236;
                  }
                  while ( v1236 );
                  j = 0LL;
                }
                for ( kk = v1230; ; LODWORD(v1230) = kk ^ v1230 )
                {
                  kk >>= 31;
                  if ( !kk )
                    break;
                }
                v100 = *(unsigned int *)(v143 + 20);
                v1240 = v1230 & 0x7FFFFFFF;
                if ( v1240 != (_DWORD)v100 )
                {
                  v1241 = *(unsigned int *)(v143 + 16);
                  v1242 = *(_QWORD *)(v143 + 8);
                  if ( *(_DWORD *)(v143 + 16) )
                  {
                    v130 = 64LL;
                    if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                    {
                      v1243 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1244 = v1242 & 0xFFFFFFFFFFFFF000uLL;
                      v2992 = (v1242 + v1241 - 1) | 0xFFF;
                      v1245 = (v1242 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v1246 = v1243;
                        while ( 1 )
                        {
                          v1247 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v1244, 0LL);
                          if ( v1247 != -1073741267 )
                            break;
                          if ( v1243 > 1u )
                            goto LABEL_1974;
                          v1246 = v1243;
                          __writecr8(v1243);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1247 < 0 )
                          break;
LABEL_1974:
                        v1244 += 4096LL;
                        v1245 += 4096LL;
                        if ( v1245 == v2992 )
                          goto LABEL_1975;
                      }
                      __writecr8(v1246);
                      v143 = (__int64)v2619;
                      j = 0LL;
                      v100 = (unsigned int)v2619[5];
                    }
                  }
                  v1253 = *(_DWORD *)(v99 + 2296);
                  if ( !v1253 )
                  {
                    v1254 = v1240 ^ (unsigned __int64)(unsigned int)v100;
                    goto LABEL_1987;
                  }
                  goto LABEL_1988;
                }
              }
              else
              {
LABEL_1991:
                v1256 = *(const char **)(v143 + 8);
                v1257 = *(unsigned int *)(v143 + 16);
                v130 = (unsigned __int64)v1256;
                *(_DWORD *)(v99 + 2088) += v1257;
                v1258 = v1256;
                v1259 = *(_DWORD *)(v99 + 2068);
                for ( mm = *(_QWORD *)(v99 + 2072); v1258 < &v1256[v1257]; v1258 += 64 )
                  _mm_prefetch(v1258, 0);
                v1261 = *(_QWORD *)(v99 + 2072);
                v1262 = (unsigned int)v1257 >> 7;
                if ( (unsigned int)v1257 >> 7 )
                {
                  do
                  {
                    v1263 = 8LL;
                    do
                    {
                      v1264 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v1261, v1259);
                      v130 += 16LL;
                      v1261 = __ROL8__(v1264, v1259);
                      --v1263;
                    }
                    while ( v1263 );
                    v1265 = (__ROL8__(mm ^ (v130 - (_QWORD)v1256), 17) ^ mm ^ (v130 - (unsigned __int64)v1256))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2823 = *((_QWORD *)&v1265 + 1);
                    v1259 = (BYTE8(v1265) ^ (unsigned __int8)(v1265 ^ v1259)) & 0x3F;
                    if ( !v1259 )
                      LOBYTE(v1259) = 1;
                    --v1262;
                  }
                  while ( v1262 );
                  v99 = (unsigned __int64)v2621;
                }
                v100 = v1257 & 0x7F;
                if ( (unsigned int)v100 >= 8 )
                {
                  v1266 = (unsigned __int64)(unsigned int)v100 >> 3;
                  do
                  {
                    v1261 = __ROL8__(*(_QWORD *)v130 ^ v1261, v1259);
                    v130 += 8LL;
                    v100 = (unsigned int)(v100 - 8);
                    --v1266;
                  }
                  while ( v1266 );
                }
                for ( j = 0LL; (_DWORD)v100; v100 = (unsigned int)(v100 - 1) )
                {
                  v1267 = *(unsigned __int8 *)v130++;
                  v1261 = __ROL8__(v1267 ^ v1261, v1259);
                }
                for ( nn = v1261; ; LODWORD(v1261) = nn ^ v1261 )
                {
                  nn >>= 31;
                  if ( !nn )
                    break;
                }
                v1269 = v1261 & 0x7FFFFFFF;
                v1270 = 0;
                if ( v1269 == v2619[5] )
                {
LABEL_1976:
                  v143 = (__int64)v2619;
                  goto LABEL_1977;
                }
                if ( !*v2619 )
                  v1270 = v2619[6] != 0;
                v1271 = (unsigned int)v2619[4];
                v1272 = *((_QWORD *)v2619 + 1);
                if ( v2619[4] )
                {
                  v100 = 64LL;
                  if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                  {
                    v1273 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v1274 = v1272 & 0xFFFFFFFFFFFFF000uLL;
                    v2623 = (v1272 + v1271 - 1) | 0xFFF;
                    v2994 = (v1272 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v1246 = v1273;
                      while ( 1 )
                      {
                        v1275 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                                  v1274,
                                  0LL,
                                  v100,
                                  v130);
                        if ( v1275 != -1073741267 )
                          break;
                        if ( v1270 )
                          goto LABEL_2022;
                        if ( v1273 > 1u )
                          goto LABEL_2020;
                        v1246 = v1273;
                        __writecr8(v1273);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v1275 < 0 )
                        break;
LABEL_2020:
                      v1274 += 4096LL;
                      v2994 += 4096LL;
                      if ( v2994 == v2623 )
                      {
LABEL_1975:
                        __writecr8(v1246);
                        j = 0LL;
                        goto LABEL_1976;
                      }
                    }
LABEL_2022:
                    __writecr8(v1246);
                    j = 0LL;
                  }
                }
                v143 = (__int64)v2619;
                v1253 = *(_DWORD *)(v99 + 2296);
                if ( !v1253 )
                {
                  v1254 = (unsigned int)v2619[5] ^ (unsigned __int64)v1269;
LABEL_1987:
                  *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1254;
                  v1253 = *(_DWORD *)(v99 + 2296);
                }
LABEL_1988:
                v1255 = *(_QWORD *)(v143 + 8);
                if ( !v1253 )
                {
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v99 + 2320) = *(int *)v143;
                  *(_QWORD *)(v99 + 2328) = v1255;
                  *(_DWORD *)(v99 + 2296) = 1;
                  __b8(v99, 0LL);
                }
              }
LABEL_1977:
              if ( (*(_DWORD *)(v143 + 32) & 1) == 0 )
                goto LABEL_213;
              v1248 = *(_QWORD *)(v143 + 24);
              v1249 = *(__int64 (__fastcall **)(__int64))(v99 + 504);
              v2620 = v1248;
              v1250 = v1249(v1248);
              v1251 = (_DWORD *)(v1250 + *(unsigned __int16 *)(v1250 + 20) + 24LL);
              v2623 = (__int64)&v1251[10 * *(unsigned __int16 *)(v1250 + 6)];
              if ( v1251 == (_DWORD *)v2623 )
                goto LABEL_212;
              v1252 = *(_DWORD *)(v99 + 2084);
              if ( !v1252 )
              {
                *(_DWORD *)(v99 + 2084) = 4096;
                v1252 = 4096;
              }
              v2993 = v1248 == *(_QWORD *)(v99 + 1512) || v1248 == *(_QWORD *)(v99 + 1520);
              v1276 = (_DWORD *)v2623;
              while ( 2 )
              {
                v1277 = v1251[4];
                v1278 = v1251[3];
                if ( v1277 <= v1251[2] )
                  v1277 = v1251[2];
                v1279 = (v1277 + v1278 + 4095) & 0xFFFFF000;
                if ( v1252 >= v1279 )
                  goto LABEL_2046;
                if ( (v1251[9] & 0x2000000) != 0 )
                  goto LABEL_2045;
                v1280 = *v1251;
                if ( *v1251 == 1414090313 && v1251[1] == 1195525195 )
                  goto LABEL_2045;
                if ( v1280 == 1162297680 )
                {
                  v1281 = *((_WORD *)v1251 + 2);
                  if ( v1281 == 30839 || v1281 == 29303 || v1281 == 30583 )
                    goto LABEL_2045;
                }
                if ( v1280 == 1095914053 && *((_WORD *)v1251 + 2) == 16724 )
                  goto LABEL_2045;
                if ( v2628 )
                {
                  v1282 = (char *)*((_QWORD *)v2628 + 294);
                  *((_QWORD *)&v2734 + 1) = *((_QWORD *)v2628 + 295);
                  v2735 = *((_OWORD *)v2628 + 148);
                  *(_QWORD *)&v2734 = v1282;
                }
                else
                {
                  v2734 = *(_OWORD *)VfExcludeSections;
                  v1282 = VfExcludeSections[0];
                  v2735 = *(_OWORD *)off_140C0F050;
                }
                v1283 = 7;
                v130 = (unsigned __int64)v1251;
                while ( 1 )
                {
                  v1284 = *(unsigned __int8 *)v130++;
                  v1285 = (unsigned __int8)*v1282++;
                  if ( v1284 != v1285 )
                    break;
                  if ( !--v1283 )
                    goto LABEL_2045;
                }
                v130 = *((_QWORD *)&v2734 + 1);
                v1286 = 8;
                v1287 = (__int64 *)v1251;
                do
                {
                  v1288 = *v1287++;
                  v1289 = *(_QWORD *)v130;
                  v130 += 8LL;
                  if ( v1288 != v1289 )
                    goto LABEL_2058;
                  v1286 -= 8;
                }
                while ( v1286 >= 8 );
                if ( !v1286 )
                  goto LABEL_2045;
                while ( 1 )
                {
                  v1290 = *(unsigned __int8 *)v1287;
                  v1287 = (__int64 *)((char *)v1287 + 1);
                  v1291 = *(unsigned __int8 *)v130++;
                  if ( v1290 != v1291 )
                    break;
                  if ( !--v1286 )
                    goto LABEL_2045;
                }
LABEL_2058:
                v1292 = (unsigned __int8 *)v2735;
                v1293 = 4;
                v130 = (unsigned __int64)v1251;
                while ( 1 )
                {
                  v1294 = *(unsigned __int8 *)v130++;
                  v1295 = *v1292++;
                  if ( v1294 != v1295 )
                    break;
                  if ( !--v1293 )
                    goto LABEL_2045;
                }
                v1296 = (unsigned __int8 *)*((_QWORD *)&v2735 + 1);
                v1297 = 6;
                v130 = (unsigned __int64)v1251;
                while ( 1 )
                {
                  v1298 = *(unsigned __int8 *)v130++;
                  v1299 = *v1296++;
                  if ( v1298 != v1299 )
                    break;
                  if ( !--v1297 )
                    goto LABEL_2045;
                }
                v1300 = v1251[9];
                if ( v1300 < 0 || (v1300 & 0x20000000) == 0 )
                {
LABEL_2045:
                  v1252 = v1279;
LABEL_2046:
                  v100 = (unsigned __int64)v2628;
                  goto LABEL_2047;
                }
                v130 = 1LL;
                v1301 = 1;
                if ( v2993 && *v1251 != 778396769 )
                  v1301 = *v1251 == 1162297680;
                v100 = (unsigned __int64)v2628;
                if ( v1252 >= v1278 )
                  v1278 = v1252;
                v1252 = v1278;
LABEL_2074:
                v1302 = v1252 + v1248;
                if ( (*(_BYTE *)(v100 + 2171) & 4) != 0 )
                {
                  __asm { xbegin  $+6 }
                  __asm { xend }
                  ++*(_DWORD *)(v100 + 2108);
                  *(_DWORD *)(v100 + 2088) += 256;
LABEL_2085:
                  v1305 = *(_DWORD *)(v100 + 2088);
                  v1252 += 4096;
                  if ( v1252 >= v1279 || (v1248 = v2620, v1305 >= *(_DWORD *)(v100 + 2092)) )
                  {
                    if ( v1305 >= *(_DWORD *)(v100 + 2092) )
                      goto LABEL_2048;
                    v1248 = v2620;
LABEL_2047:
                    v1251 += 10;
                    if ( v1251 == v1276 )
                    {
LABEL_2048:
                      v99 = (unsigned __int64)v2621;
                      if ( v1251 == v1276 && v1252 >= v1279 )
                      {
                        j = 0LL;
                        *(_DWORD *)(v100 + 2084) = 0;
                        goto LABEL_213;
                      }
                      *(_DWORD *)(v100 + 2084) = v1252;
                      goto LABEL_212;
                    }
                    continue;
                  }
                  goto LABEL_2074;
                }
                break;
              }
              if ( v1301 )
              {
                v1303 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v100 + 1104))(&v2794, v1302);
                if ( v1303 < 0 )
                {
                  if ( v1303 != -1073741819 || (v1304 = v2619, (v2619[8] & 4) != 0) && (int)v1251[9] >= 0 )
                  {
LABEL_2083:
                    v100 = (unsigned __int64)v2628;
                  }
                  else
                  {
                    v100 = (unsigned __int64)v2628;
                    if ( !*((_DWORD *)v2628 + 574) )
                    {
                      *((_QWORD *)v2628 + 288) = v2628 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v100 + 2312) = (char *)v1304 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v100 + 2320) = *v1304;
                      *(_QWORD *)(v100 + 2328) = v1302;
                      *(_DWORD *)(v100 + 2296) = 1;
                      __b8(v100, 0LL);
                      goto LABEL_2083;
                    }
                  }
LABEL_2084:
                  v130 = 1LL;
                  goto LABEL_2085;
                }
              }
              else
              {
                v2794 = 0LL;
                v2796 = 0;
                v2798 = 4096;
                v2795 = 8 * ((((unsigned __int64)(v1302 & 0xFFF) + 0x1FFF) >> 12) + 6);
                v2797 = v1302 & 0xFFFFFFFFFFFFF000uLL;
                v2799 = v1302 & 0xFFF;
                v2824 = (*(__int64 (__fastcall **)(__int64))(v100 + 1112))(v1302);
                v2800 = v2824 >> 12;
              }
              v1306 = v2628;
              ++*((_DWORD *)v2628 + 528);
              *((_QWORD *)v1306 + 333) = v2797 + v2799;
              *((_QWORD *)v1306 + 332) = v2619;
              v1307 = KeGetCurrentIrql();
              __writecr8(2uLL);
              RtlInitMinimalBarrier(v1306 + 2624, **((unsigned int **)v1306 + 191), 0LL);
              v100 = (*((__int64 (__fastcall **)(char *))v2628 + 137))(&v2628[*((unsigned int *)v2628 + 509)]);
              v2628 = (char *)v100;
              __writecr8(v1307);
              if ( v1301 )
              {
                (*(void (__fastcall **)(__int64 *, _QWORD))(v100 + 1120))(&v2794, 0LL);
                v100 = (unsigned __int64)v2628;
              }
              *(_DWORD *)(v100 + 2088) += 81920;
              goto LABEL_2084;
            case '.':
              if ( (*(_DWORD *)(v99 + 2096) & 1) == 0 )
              {
                v1212 = *(_QWORD *)(v99 + 1352);
                v1213 = 0;
                (*(void (__fastcall **)(__int64, __int64))(v99 + 376))(v131, 1LL);
                if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 || (v1214 = *(_DWORD *)(v99 + 2384), v1214 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 296))(*(_QWORD *)(v99 + 2560), 0LL);
                  v1215 = 0x80;
                }
                else
                {
                  v1215 = 1 << v1214;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v99 + 312))(v1212, 0LL);
                if ( v1215 == (char)0x80 )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 304))(*(_QWORD *)(v99 + 2560), 0LL);
                }
                else
                {
                  v1216 = *(volatile signed __int8 ***)(v99 + 1312);
                  v1217 = *v1216;
                  if ( *v1216 != (volatile signed __int8 *)v1216 )
                  {
                    v1218 = ~v1215;
                    do
                    {
                      _InterlockedAnd8(&v1217[*(_QWORD *)(v99 + 1720) - *(_QWORD *)(v99 + 1744)], v1218);
                      v1217 = *(volatile signed __int8 **)v1217;
                      ++v1213;
                    }
                    while ( v1217 != (volatile signed __int8 *)v1216 );
                  }
                }
                (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 320))(*(_QWORD *)(v99 + 1352), 0LL);
                (*(void (**)(void))(v99 + 384))();
                *(_DWORD *)(v99 + 2088) += v1213 << 7;
              }
              goto LABEL_212;
            case '/':
              v2649 = *(_QWORD *)(*(_QWORD *)(v99 + 1704)
                                + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v99 + 1608))
                                + *(_QWORD *)(v99 + 1672));
              v1202 = (*(__int64 (__fastcall **)(__int64, __int64))(v99 + 1168))(v2649, 1LL);
              v130 = 0xFFFFFFFFLL;
              j = 0LL;
              v1203 = v1202;
              if ( v1202 == 0xFFFFFFFFLL )
              {
                v2649 = 0LL;
                v1204 = *(_QWORD *)(v99 + 2440);
                if ( !v1204 )
                  goto LABEL_1899;
                v1205 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v99 + 1152))(v1204, &v2649);
                v1206 = v2649;
                if ( v1205 < 0 )
                  v1206 = 0LL;
                v2649 = v1206;
                if ( !v1206 )
LABEL_1899:
                  v2649 = (*(__int64 (__fastcall **)(_QWORD))(v99 + 960))(0LL);
                *(_QWORD *)(v99 + 2440) = 0LL;
                v1207 = 0;
                if ( !v2649 )
                  goto LABEL_1907;
                while ( 1 )
                {
                  ++v1207;
                  if ( (*(int (**)(void))(v99 + 928))() >= 0 )
                  {
                    (*(void (__fastcall **)(__int64, _BYTE *))(v99 + 1080))(v2649, v2960);
                    v1203 = (*(__int64 (**)(void))(v99 + 1168))();
                    (*(void (__fastcall **)(_BYTE *))(v99 + 1088))(v2960);
                    (*(void (__fastcall **)(__int64))(v99 + 936))(v2649);
                    if ( v1203 != 0xFFFFFFFFLL || v1207 > 0x100 )
                      break;
                  }
                  v2649 = (*(__int64 (__fastcall **)(__int64))(v99 + 960))(v2649);
                  if ( !v2649 )
                    goto LABEL_1907;
                }
                *(_QWORD *)(v99 + 2440) = (*(__int64 (__fastcall **)(__int64))(v99 + 1160))(v2649);
                (*(void (__fastcall **)(__int64))(v99 + 480))(v2649);
                v130 = 0xFFFFFFFFLL;
                if ( v1203 == 0xFFFFFFFFLL )
                {
LABEL_1907:
                  *(_DWORD *)(v99 + 2088) += v1207 << 12;
                  goto LABEL_213;
                }
              }
              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
              {
                v1208 = *(_QWORD **)(v99 + 2688);
                v1209 = 48;
                v100 = 6LL;
                do
                {
                  v1209 -= 8;
                  *v1208 = *(_QWORD *)v143;
                  v143 += 8LL;
                  ++v1208;
                  --v100;
                }
                while ( v100 );
                for ( ; v1209; --v1209 )
                {
                  v1210 = *(_BYTE *)v143++;
                  *(_BYTE *)v1208 = v1210;
                  v1208 = (_QWORD *)((char *)v1208 + 1);
                }
                v143 = *(_QWORD *)(v99 + 2688);
              }
              *(_QWORD *)(v143 + 24) = v1203;
              v934 = (_BYTE *)v2649;
              v1211 = *(_DWORD *)(v99 + 2296) == 0;
              goto LABEL_1915;
            case '0':
              j = 0LL;
              if ( !*(_DWORD *)(v143 + 16) )
                goto LABEL_213;
              if ( (*(_DWORD *)(v99 + 2452) & 0x4000) != 0 )
              {
                v1150 = *(volatile signed __int32 **)(v99 + 1248);
                while ( 1 )
                {
                  _disable();
                  if ( !_interlockedbittestandset(v1150, (*(_DWORD *)(v99 + 2448) >> 10) & 0x1F) )
                    break;
                  _enable();
                  _mm_pause();
                }
              }
              if ( (*(_DWORD *)(v143 + 24) & 1) == 0 )
              {
                v1151 = *(const char **)(v143 + 8);
                v1152 = *(unsigned int *)(v143 + 16);
                v130 = (unsigned __int64)v1151;
                *(_DWORD *)(v99 + 2088) += v1152;
                v1153 = v1151;
                v1154 = *(_DWORD *)(v99 + 2068);
                for ( i1 = *(_QWORD *)(v99 + 2072); v1153 < &v1151[v1152]; v1153 += 64 )
                  _mm_prefetch(v1153, 0);
                v1156 = *(_QWORD *)(v99 + 2072);
                v1157 = (unsigned int)v1152 >> 7;
                if ( (unsigned int)v1152 >> 7 )
                {
                  do
                  {
                    v1158 = 8LL;
                    do
                    {
                      v1159 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v1156, v1154);
                      v130 += 16LL;
                      v1156 = __ROL8__(v1159, v1154);
                      --v1158;
                    }
                    while ( v1158 );
                    v1160 = (__ROL8__(i1 ^ (v130 - (_QWORD)v1151), 17) ^ i1 ^ (v130 - (unsigned __int64)v1151))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2820 = *((_QWORD *)&v1160 + 1);
                    v1154 = (BYTE8(v1160) ^ (unsigned __int8)(v1160 ^ v1154)) & 0x3F;
                    if ( !v1154 )
                      LOBYTE(v1154) = 1;
                    --v1157;
                  }
                  while ( v1157 );
                  v99 = (unsigned __int64)v2621;
                }
                v1161 = v1152 & 0x7F;
                if ( v1161 >= 8 )
                {
                  v1162 = (unsigned __int64)v1161 >> 3;
                  do
                  {
                    v1156 = __ROL8__(*(_QWORD *)v130 ^ v1156, v1154);
                    v130 += 8LL;
                    v1161 -= 8;
                    --v1162;
                  }
                  while ( v1162 );
                }
                for ( j = 0LL; v1161; --v1161 )
                {
                  v1163 = *(unsigned __int8 *)v130++;
                  v1156 = __ROL8__(v1163 ^ v1156, v1154);
                }
                for ( i2 = v1156; ; LODWORD(v1156) = i2 ^ v1156 )
                {
                  i2 >>= 31;
                  if ( !i2 )
                    break;
                }
                v100 = (unsigned __int64)v2619;
                v1165 = v1156 & 0x7FFFFFFF;
                v1166 = 0;
                if ( v1165 != v2619[5] )
                {
                  if ( !*v2619 )
                    v1166 = v2619[6] != 0;
                  v1167 = (unsigned int)v2619[4];
                  v1168 = *((_QWORD *)v2619 + 1);
                  if ( v2619[4] )
                  {
                    v130 = 64LL;
                    if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                    {
                      v1169 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1170 = v1168 & 0xFFFFFFFFFFFFF000uLL;
                      v2623 = (v1168 + v1167 - 1) | 0xFFF;
                      v2990 = (v1168 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v1171 = v1169;
                        while ( 1 )
                        {
                          v1172 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v1170, 0LL);
                          if ( v1172 != -1073741267 )
                            break;
                          if ( v1166 )
                            goto LABEL_1841;
                          if ( v1169 > 1u )
                            goto LABEL_1839;
                          v1171 = v1169;
                          __writecr8(v1169);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1172 < 0 )
                          break;
LABEL_1839:
                        v1170 += 4096LL;
                        v2990 += 4096LL;
                        if ( v2990 == v2623 )
                          goto LABEL_1840;
                      }
LABEL_1841:
                      __writecr8(v1171);
                      v100 = (unsigned __int64)v2619;
                      j = 0LL;
                    }
                  }
                  v1173 = *(_DWORD *)(v99 + 2296);
                  if ( !v1173 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = *(unsigned int *)(v100 + 20) ^ (unsigned __int64)v1165;
                    v1173 = *(_DWORD *)(v99 + 2296);
                  }
                  v1174 = *(_QWORD *)(v100 + 8);
                  if ( !v1173 )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = v100 - 0x4C48B4211BBACBEBLL;
                    v1175 = *(int *)v100;
                    goto LABEL_1846;
                  }
                }
                goto LABEL_1892;
              }
              if ( *(_QWORD *)(v99 + 2432) )
              {
                v1176 = *(_DWORD *)(v99 + 2452);
                LOBYTE(v1177) = v1176;
                if ( !*(_DWORD *)(v99 + 2084) )
                {
                  v1177 = v1176 ^ ((unsigned __int8)v1176 ^ (unsigned __int8)(8 * v1176)) & 0x20;
                  *(_DWORD *)(v99 + 2452) = v1177;
                  goto LABEL_1851;
                }
                if ( (((unsigned __int8)v1176 ^ (unsigned __int8)(v1176 >> 3)) & 4) == 0 )
                {
LABEL_1851:
                  if ( (v1177 & 4) != 0 )
                  {
                    v1178 = *(_QWORD *)(v143 + 8) & 0xFFFFFFFFFFFFF000uLL;
                    for ( i3 = ((*(_DWORD *)(v143 + 8) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v143 + 16) + 4095) >> 12;
                          i3;
                          v1178 += 4096LL )
                    {
                      --i3;
                      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v99 + 688))(v1178)
                        && !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *(int *)v143;
                        *(_QWORD *)(v99 + 2328) = v1178;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                      }
                      *(_DWORD *)(v99 + 2088) += 256;
                    }
                    goto LABEL_1892;
                  }
                  v1180 = *(const char **)(v143 + 8);
                  v1181 = *(unsigned int *)(v143 + 16);
                  v130 = (unsigned __int64)v1180;
                  *(_DWORD *)(v99 + 2088) += v1181;
                  v1182 = v1180;
                  v1183 = *(_DWORD *)(v99 + 2068);
                  for ( i4 = *(_QWORD *)(v99 + 2072); v1182 < &v1180[v1181]; v1182 += 64 )
                    _mm_prefetch(v1182, 0);
                  v1185 = *(_QWORD *)(v99 + 2072);
                  v1186 = (unsigned int)v1181 >> 7;
                  if ( (unsigned int)v1181 >> 7 )
                  {
                    do
                    {
                      v1187 = 8LL;
                      do
                      {
                        v1188 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v1185, v1183);
                        v130 += 16LL;
                        v1185 = __ROL8__(v1188, v1183);
                        --v1187;
                      }
                      while ( v1187 );
                      v1189 = (__ROL8__(i4 ^ (v130 - (_QWORD)v1180), 17) ^ i4 ^ (v130 - (unsigned __int64)v1180))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v2821 = *((_QWORD *)&v1189 + 1);
                      v1183 = (BYTE8(v1189) ^ (unsigned __int8)(v1189 ^ v1183)) & 0x3F;
                      if ( !v1183 )
                        LOBYTE(v1183) = 1;
                      --v1186;
                    }
                    while ( v1186 );
                    v99 = (unsigned __int64)v2621;
                  }
                  v1190 = v1181 & 0x7F;
                  if ( v1190 >= 8 )
                  {
                    v1191 = (unsigned __int64)v1190 >> 3;
                    do
                    {
                      v1185 = __ROL8__(*(_QWORD *)v130 ^ v1185, v1183);
                      v130 += 8LL;
                      v1190 -= 8;
                      --v1191;
                    }
                    while ( v1191 );
                  }
                  for ( j = 0LL; v1190; --v1190 )
                  {
                    v1192 = *(unsigned __int8 *)v130++;
                    v1185 = __ROL8__(v1192 ^ v1185, v1183);
                  }
                  for ( i5 = v1185; ; LODWORD(v1185) = i5 ^ v1185 )
                  {
                    i5 >>= 31;
                    if ( !i5 )
                      break;
                  }
                  v100 = *(unsigned int *)(v143 + 20);
                  v1194 = v1185 & 0x7FFFFFFF;
                  if ( v1194 == (_DWORD)v100 )
                    goto LABEL_1892;
                  v1195 = *(unsigned int *)(v143 + 16);
                  v1196 = *(_QWORD *)(v143 + 8);
                  if ( *(_DWORD *)(v143 + 16) )
                  {
                    v130 = 64LL;
                    if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                    {
                      v1197 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1198 = v1196 & 0xFFFFFFFFFFFFF000uLL;
                      v2991 = (v1196 + v1195 - 1) | 0xFFF;
                      v1199 = (v1196 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v1171 = v1197;
                        while ( 1 )
                        {
                          v1200 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v1198, 0LL);
                          if ( v1200 != -1073741267 )
                            break;
                          if ( v1197 > 1u )
                            goto LABEL_1884;
                          v1171 = v1197;
                          __writecr8(v1197);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1200 < 0 )
                          break;
LABEL_1884:
                        v1198 += 4096LL;
                        v1199 += 4096LL;
                        if ( v1199 == v2991 )
                        {
LABEL_1840:
                          __writecr8(v1171);
                          j = 0LL;
                          goto LABEL_1892;
                        }
                      }
                      __writecr8(v1171);
                      v143 = (__int64)v2619;
                      j = 0LL;
                      v100 = (unsigned int)v2619[5];
                    }
                  }
                  v1201 = *(_DWORD *)(v99 + 2296);
                  if ( !v1201 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = (unsigned int)v100 ^ (unsigned __int64)v1194;
                    v1201 = *(_DWORD *)(v99 + 2296);
                  }
                  v1174 = *(_QWORD *)(v143 + 8);
                  if ( v1201 )
                    goto LABEL_1892;
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                  v1175 = *(int *)v143;
LABEL_1846:
                  *(_QWORD *)(v99 + 2320) = v1175;
                  *(_QWORD *)(v99 + 2328) = v1174;
                  *(_DWORD *)(v99 + 2296) = 1;
                  __b8(v99, 0LL);
LABEL_1892:
                  if ( (*(_DWORD *)(v99 + 2452) & 0x4000) != 0 )
                  {
                    v100 = *(_QWORD *)(v99 + 1248);
                    _InterlockedAnd((volatile signed __int32 *)v100, ~(1 << ((*(_DWORD *)(v99 + 2448) >> 10) & 0x1F)));
                    _enable();
                  }
                  goto LABEL_213;
                }
              }
              *(_DWORD *)(v99 + 2084) = 0;
              goto LABEL_1892;
          }
        }
        else
        {
          switch ( v150 )
          {
            case 37:
              if ( (*(_DWORD *)(v99 + 2452) & 2) != 0 )
                goto LABEL_212;
              j = 0LL;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(v99 + 1064))(2LL, 1LL)
                || *(_DWORD *)(v99 + 2296) )
              {
                goto LABEL_213;
              }
              *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v99 + 2320) = *(int *)v143;
              *(_QWORD *)(v99 + 2328) = 0LL;
              goto LABEL_266;
            case 29:
              v1114 = *(const char **)(v143 + 8);
              v1115 = *(unsigned int *)(v143 + 16);
              v130 = (unsigned __int64)v1114;
              *(_DWORD *)(v99 + 2088) += v1115;
              v1116 = v1114;
              v1117 = *(_DWORD *)(v99 + 2068);
              for ( i6 = *(_QWORD *)(v99 + 2072); v1116 < &v1114[v1115]; v1116 += 64 )
                _mm_prefetch(v1116, 0);
              v1119 = *(_QWORD *)(v99 + 2072);
              v1120 = (unsigned int)v1115 >> 7;
              if ( (unsigned int)v1115 >> 7 )
              {
                do
                {
                  v1121 = 8LL;
                  do
                  {
                    v1122 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v1119, v1117);
                    v130 += 16LL;
                    v1119 = __ROL8__(v1122, v1117);
                    --v1121;
                  }
                  while ( v1121 );
                  v1123 = (__ROL8__(i6 ^ (v130 - (_QWORD)v1114), 17) ^ i6 ^ (v130 - (unsigned __int64)v1114))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v2818 = *((_QWORD *)&v1123 + 1);
                  v1117 = (BYTE8(v1123) ^ (unsigned __int8)(v1123 ^ v1117)) & 0x3F;
                  if ( !v1117 )
                    LOBYTE(v1117) = 1;
                  --v1120;
                }
                while ( v1120 );
                v99 = (unsigned __int64)v2621;
              }
              v100 = v1115 & 0x7F;
              if ( (unsigned int)v100 >= 8 )
              {
                v1124 = (unsigned __int64)(unsigned int)v100 >> 3;
                do
                {
                  v1119 = __ROL8__(*(_QWORD *)v130 ^ v1119, v1117);
                  v130 += 8LL;
                  v100 = (unsigned int)(v100 - 8);
                  --v1124;
                }
                while ( v1124 );
              }
              for ( j = 0LL; (_DWORD)v100; v100 = (unsigned int)(v100 - 1) )
              {
                v1125 = *(unsigned __int8 *)v130++;
                v1119 = __ROL8__(v1125 ^ v1119, v1117);
              }
              for ( i7 = v1119; ; LODWORD(v1119) = i7 ^ v1119 )
              {
                i7 >>= 31;
                if ( !i7 )
                  break;
              }
              v1127 = v1119 & 0x7FFFFFFF;
              v1128 = 0;
              if ( v1127 == *(_DWORD *)(v143 + 20) )
                goto LABEL_1772;
              if ( !*(_DWORD *)v143 )
                v1128 = *(_DWORD *)(v143 + 24) != 0;
              v1129 = *(unsigned int *)(v143 + 16);
              v1130 = *(_QWORD *)(v143 + 8);
              if ( *(_DWORD *)(v143 + 16) )
              {
                v100 = 64LL;
                if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                {
                  v1131 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v1132 = v1130 & 0xFFFFFFFFFFFFF000uLL;
                  v2623 = (v1130 + v1129 - 1) | 0xFFF;
                  v2988 = (v1130 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v1133 = v1131;
                    while ( 1 )
                    {
                      v1134 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                                v1132,
                                0LL,
                                v100,
                                v130);
                      if ( v1134 != -1073741267 )
                        break;
                      if ( v1128 )
                        goto LABEL_1788;
                      if ( v1131 > 1u )
                        goto LABEL_1770;
                      v1133 = v1131;
                      __writecr8(v1131);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v1134 < 0 )
                      break;
LABEL_1770:
                    v1132 += 4096LL;
                    v2988 += 4096LL;
                    if ( v2988 == v2623 )
                    {
                      __writecr8(v1133);
                      v143 = (__int64)v2619;
                      j = 0LL;
LABEL_1772:
                      v1135 = *(__int64 ***)(v143 + 8);
                      v1136 = *(_DWORD *)(v143 + 16) >> 4;
                      v2989 = v1135;
                      if ( !v1136 )
                        goto LABEL_213;
                      v1137 = v1136;
                      v2620 = v1136;
                      do
                      {
                        v1138 = (char *)v143;
                        v1139 = 1;
                        v1140 = **v1135;
                        v2725 = 0LL;
                        v1141 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned __int64, unsigned __int64))(v99 + 784))(
                                  v1140,
                                  &v2725,
                                  v100,
                                  v130);
                        if ( v1141 )
                        {
                          do
                          {
                            ++v1139;
                            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v99 + 520))(v1141, v2819) )
                            {
                              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                              {
                                v1142 = *(_QWORD **)(v99 + 2688);
                                v1143 = 48;
                                v1144 = 6LL;
                                do
                                {
                                  v1143 -= 8;
                                  *v1142 = *(_QWORD *)v1138;
                                  v1138 += 8;
                                  ++v1142;
                                  --v1144;
                                }
                                while ( v1144 );
                                for ( ; v1143; --v1143 )
                                {
                                  v1145 = *v1138++;
                                  *(_BYTE *)v1142 = v1145;
                                  v1142 = (_QWORD *)((char *)v1142 + 1);
                                }
                                v1138 = *(char **)(v99 + 2688);
                              }
                              *((_QWORD *)v1138 + 3) = v1141;
                              *((_QWORD *)v1138 + 4) = v1140;
                              v1146 = *(_QWORD *)(v99 + 1424);
                              *(_QWORD *)v1146 = v1138;
                              *(_DWORD *)(v1146 + 16) = 48;
                              v1147 = *(_QWORD *)(v99 + 1424);
                              *(_QWORD *)(v1147 + 8) = v1141;
                              *(_DWORD *)(v1147 + 20) = 4096;
                              if ( !*(_DWORD *)(v99 + 2296) )
                              {
                                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v99 + 2312) = v1138 - 0x4C48B4211BBACBEBLL;
                                *(_QWORD *)(v99 + 2320) = *(int *)v1138;
                                *(_QWORD *)(v99 + 2328) = 6LL;
                                *(_DWORD *)(v99 + 2296) = 1;
                                __b8(v99, 0LL);
                              }
                            }
                            v1141 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v99 + 784))(v1140, &v2725);
                          }
                          while ( v1141 );
                          v1135 = v2989;
                          v1137 = v2620;
                        }
                        v143 = (__int64)v2619;
                        v1135 += 2;
                        v2989 = v1135;
                        v2620 = --v1137;
                      }
                      while ( v1137 );
                      goto LABEL_212;
                    }
                  }
LABEL_1788:
                  __writecr8(v1133);
                  v143 = (__int64)v2619;
                  j = 0LL;
                }
              }
              v1148 = *(_DWORD *)(v99 + 2296);
              if ( !v1148 )
              {
                *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = *(unsigned int *)(v143 + 20) ^ (unsigned __int64)v1127;
                v1148 = *(_DWORD *)(v99 + 2296);
              }
              v1149 = *(_QWORD *)(v143 + 8);
              if ( !v1148 )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v1149;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
              }
              goto LABEL_1772;
            case 30:
              if ( (*(_BYTE *)(v143 + 42) & 1) != 0 )
              {
                j = 0LL;
                if ( !*(_QWORD *)(v99 + 2432) )
                  goto LABEL_1656;
                v1052 = *(_DWORD *)(v99 + 2452);
                if ( (v1052 & 4) != 0 )
                  goto LABEL_1656;
                if ( *(_DWORD *)(v99 + 2084) )
                {
                  if ( (v1052 & 0x20) != 0 )
                    goto LABEL_1656;
                }
                else
                {
                  *(_DWORD *)(v99 + 2452) = v1052 ^ ((unsigned __int8)v1052 ^ (unsigned __int8)(8 * v1052)) & 0x20;
                }
              }
              v100 = *(unsigned int *)(v99 + 2084);
              v2635 = *(char **)(v143 + 8);
              v1053 = &v2635[12 * v100 + 12];
              v2623 = (__int64)&v2635[12 * v100];
              v1054 = *(_DWORD *)(v143 + 36);
              v2625 = (__int64)v1053;
              v130 = v1054 / 0xCuLL;
              v2628 = (char *)v130;
              v2633 = (unsigned __int64)&v2635[12 * (v1054 / 0xC)];
              v1055 = (char *)(v143 + 48 + v100);
              v2620 = (__int64)v1055;
              v1056 = v130 - 1;
              v2986 = v130 - 1;
              if ( (_DWORD)v130 )
              {
                v1057 = v143 + 48 + ((v1056 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
                v2627 = (char *)v1057;
              }
              else
              {
                v1057 = v143 + 48;
                v2627 = (char *)(v143 + 48);
                v2986 = -1;
              }
              BugCheckParameter2 = v1057 + 24LL * *(unsigned __int16 *)(v143 + 40);
              if ( (_DWORD)v130 && (unsigned int)v100 < v1056 )
              {
                v1058 = v2623;
                do
                {
                  if ( *v1055 >= 0 )
                  {
                    v1059 = *(unsigned int *)(v1058 + 4);
                    v1060 = (unsigned int)(*(_DWORD *)v1053 - v1059);
                    v1061 = (unsigned int)v1060;
                    v1062 = *((_QWORD *)v2619 + 3) + v1059;
                    *(_DWORD *)(v99 + 2088) += v1060;
                    v1063 = (_QWORD *)v1062;
                    v1064 = *(_DWORD *)(v99 + 2068);
                    v1065 = (const char *)v1062;
                    v1066 = *(_QWORD *)(v99 + 2072);
                    v2623 = v1062;
                    if ( v1062 < v1060 + v1062 )
                    {
                      do
                      {
                        _mm_prefetch(v1065, 0);
                        v1065 += 64;
                      }
                      while ( (unsigned __int64)v1065 < v1060 + v1062 );
                    }
                    v1067 = v1066;
                    v1068 = (unsigned int)v1060 >> 7;
                    if ( (unsigned int)v1060 >> 7 )
                    {
                      do
                      {
                        v1069 = 8LL;
                        do
                        {
                          v1070 = v1067 ^ *v1063;
                          v1071 = v1063[1];
                          v1063 += 2;
                          v1067 = __ROL8__(__ROL8__(v1070, v1064) ^ v1071, v1064);
                          --v1069;
                        }
                        while ( v1069 );
                        v1072 = __ROL8__(v1066 ^ ((unsigned __int64)v1063 - v1062), 17) ^ v1066 ^ ((unsigned __int64)v1063
                                                                                                 - v1062);
                        v2816 = (v1072 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v1064 = ((unsigned __int8)v1072 ^ (unsigned __int8)(v2816 ^ v1064)) & 0x3F;
                        if ( !v1064 )
                          LOBYTE(v1064) = 1;
                        --v1068;
                      }
                      while ( v1068 );
                      v99 = (unsigned __int64)v2621;
                      v1055 = (char *)v2620;
                    }
                    v1073 = v1060 & 0x7F;
                    if ( v1073 >= 8 )
                    {
                      v1074 = (unsigned __int64)v1073 >> 3;
                      do
                      {
                        v1067 = __ROL8__(*v1063++ ^ v1067, v1064);
                        v1073 -= 8;
                        --v1074;
                      }
                      while ( v1074 );
                    }
                    for ( ; v1073; --v1073 )
                    {
                      v1075 = *(unsigned __int8 *)v1063;
                      v1063 = (_QWORD *)((char *)v1063 + 1);
                      v1067 = __ROL8__(v1075 ^ v1067, v1064);
                    }
                    for ( i8 = v1067; ; LOBYTE(v1067) = i8 ^ v1067 )
                    {
                      i8 >>= 7;
                      if ( !i8 )
                        break;
                    }
                    v1077 = *v1055;
                    v1078 = v1067 & 0x7F;
                    v1079 = *v1055 & 0x7F;
                    v2626 = v1078;
                    if ( v1078 != v1079 )
                    {
                      if ( v1061 && (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                      {
                        v1080 = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        v1081 = v1062 & 0xFFFFFFFFFFFFF000uLL;
                        v1082 = (v1061 - 1 + v1062) | 0xFFF;
                        v1083 = v1081 - 1;
                        while ( 1 )
                        {
                          v1084 = v1080;
                          while ( 1 )
                          {
                            v1085 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v1081, 0LL);
                            if ( v1085 != -1073741267 )
                              break;
                            if ( v1080 > 1u )
                              goto LABEL_1688;
                            v1084 = v1080;
                            __writecr8(v1080);
                            KeGetCurrentIrql();
                            __writecr8(2uLL);
                          }
                          if ( v1085 < 0 )
                            break;
LABEL_1688:
                          v1081 += 4096LL;
                          v1083 += 4096LL;
                          if ( v1083 == v1082 )
                          {
                            __writecr8(v1084);
                            goto LABEL_1694;
                          }
                        }
                        __writecr8(v1084);
                        v1078 = v2626;
                        v1062 = v2623;
                        v1077 = *(_BYTE *)v2620;
                      }
                      if ( !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1077 & 0x7F ^ (unsigned __int64)v1078;
                        if ( !*(_DWORD *)(v99 + 2296) )
                        {
                          v1086 = v2619;
                          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v99 + 2312) = (char *)v1086 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v99 + 2320) = *v1086;
                          *(_QWORD *)(v99 + 2328) = v1062;
                          *(_DWORD *)(v99 + 2296) = 1;
                          __b8(v99, 0LL);
                        }
                      }
                    }
LABEL_1694:
                    v1055 = (char *)v2620;
                    *(_DWORD *)(v99 + 2088) += 64;
                    v1053 = (char *)v2625;
                    v133 = v2636;
                  }
                  ++v1055;
                  v1053 += 12;
                  v2620 = (__int64)v1055;
                  v1058 += 12LL;
                  v2625 = (__int64)v1053;
                }
                while ( (unsigned __int64)v1053 < v2633 && *(_DWORD *)(v99 + 2088) < *v133 );
                v130 = (unsigned __int64)v2628;
                v100 = (unsigned int)(((int)v1058 - (int)v2635) / 12);
                *(_DWORD *)(v99 + 2084) = v100;
                v1057 = (unsigned __int64)v2627;
                if ( (unsigned int)v100 < v2986 )
                  goto LABEL_212;
              }
              j = 0LL;
              if ( *(_DWORD *)(v99 + 2088) >= *(_DWORD *)(v99 + 2092) )
                goto LABEL_213;
              if ( (_DWORD)v130 )
                v100 = (unsigned int)(v100 - v130 + 1);
              v1087 = v1057 + 24LL * (unsigned int)v100;
              v2625 = v1087;
              while ( 1 )
              {
                v1088 = v2619;
                v1089 = (unsigned int *)(v1087 + 8);
                v2987 = (unsigned int *)(v1087 + 8);
                v1090 = 2LL;
                v2620 = 2LL;
                do
                {
                  if ( (*v1089 & 0x80000000) == 0 )
                  {
                    v1091 = *((_QWORD *)v1088 + 3) + *(v1089 - 2);
                    v1092 = *(v1089 - 1) - *(v1089 - 2);
                    *(_DWORD *)(v99 + 2088) += v1092;
                    v130 = v1091;
                    v1093 = *(_DWORD *)(v99 + 2068);
                    v1094 = (const char *)v1091;
                    v1095 = *(_QWORD *)(v99 + 2072);
                    v1096 = (unsigned int)v1092;
                    v2627 = (char *)v1091;
                    v2623 = (unsigned int)v1092;
                    if ( v1091 < v1092 + v1091 )
                    {
                      do
                      {
                        _mm_prefetch(v1094, 0);
                        v1094 += 64;
                      }
                      while ( (unsigned __int64)v1094 < v1092 + v1091 );
                    }
                    v1097 = v1095;
                    v1098 = (unsigned int)v1092 >> 7;
                    if ( (unsigned int)v1092 >> 7 )
                    {
                      do
                      {
                        v1099 = 8LL;
                        do
                        {
                          v1100 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v1097, v1093);
                          v130 += 16LL;
                          v1097 = __ROL8__(v1100, v1093);
                          --v1099;
                        }
                        while ( v1099 );
                        v1101 = (__ROL8__(v1095 ^ (v130 - v1091), 17) ^ v1095 ^ (v130 - v1091))
                              * (unsigned __int128)0x7010008004002001uLL;
                        v2817 = *((_QWORD *)&v1101 + 1);
                        v1093 = ((unsigned __int8)v1101 ^ (unsigned __int8)(BYTE8(v1101) ^ v1093)) & 0x3F;
                        if ( !v1093 )
                          LOBYTE(v1093) = 1;
                        --v1098;
                      }
                      while ( v1098 );
                      v99 = (unsigned __int64)v2621;
                      v1096 = v2623;
                      v1089 = v2987;
                      v1090 = v2620;
                    }
                    v100 = v1092 & 0x7F;
                    if ( (unsigned int)v100 >= 8 )
                    {
                      v1102 = (unsigned __int64)(unsigned int)v100 >> 3;
                      do
                      {
                        v1097 = __ROL8__(*(_QWORD *)v130 ^ v1097, v1093);
                        v130 += 8LL;
                        v100 = (unsigned int)(v100 - 8);
                        --v1102;
                      }
                      while ( v1102 );
                    }
                    for ( ; (_DWORD)v100; v100 = (unsigned int)(v100 - 1) )
                    {
                      v1103 = *(unsigned __int8 *)v130++;
                      v1097 = __ROL8__(v1103 ^ v1097, v1093);
                    }
                    for ( i9 = v1097; ; LODWORD(v1097) = i9 ^ v1097 )
                    {
                      i9 >>= 31;
                      if ( !i9 )
                        break;
                    }
                    v1105 = *v1089;
                    v1106 = v1097 & 0x7FFFFFFF;
                    if ( v1106 == (*v1089 & 0x7FFFFFFF) )
                    {
LABEL_1732:
                      j = 0LL;
                    }
                    else
                    {
                      if ( v1096 )
                      {
                        v100 = 64LL;
                        if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                        {
                          v1107 = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          v1108 = v1091 & 0xFFFFFFFFFFFFF000uLL;
                          v2623 = (v1096 + v1091 - 1) | 0xFFF;
                          v1109 = (v1091 & 0xFFFFFFFFFFFFF000uLL) - 1;
                          while ( 1 )
                          {
                            v1110 = v1107;
                            while ( 1 )
                            {
                              v1111 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                                        v1108,
                                        0LL,
                                        v100,
                                        v130);
                              if ( v1111 != -1073741267 )
                                break;
                              if ( v1107 > 1u )
                                goto LABEL_1730;
                              v1110 = v1107;
                              __writecr8(v1107);
                              KeGetCurrentIrql();
                              __writecr8(2uLL);
                            }
                            if ( v1111 < 0 )
                              break;
LABEL_1730:
                            v1108 += 4096LL;
                            v1109 += 4096LL;
                            if ( v1109 == v2623 )
                            {
                              __writecr8(v1110);
                              v1089 = v2987;
                              v1090 = v2620;
                              goto LABEL_1732;
                            }
                          }
                          __writecr8(v1110);
                          v1089 = v2987;
                          v1091 = (unsigned __int64)v2627;
                          v1090 = v2620;
                          v1105 = *v2987;
                        }
                      }
                      v1113 = v1105;
                      j = 0LL;
                      if ( !*(_DWORD *)(v99 + 2296) )
                      {
                        LODWORD(v1113) = v1105 & 0x7FFFFFFF;
                        *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1113 ^ v1106;
                        if ( !*(_DWORD *)(v99 + 2296) )
                        {
                          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v99 + 2312) = (char *)v1088 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v99 + 2320) = *v1088;
                          *(_QWORD *)(v99 + 2328) = v1091;
                          *(_DWORD *)(v99 + 2296) = 1;
                          __b8(v99, 0LL);
                          v1089 = v2987;
                        }
                      }
                    }
                  }
                  v1089 += 3;
                  --v1090;
                  v2987 = v1089;
                  v2620 = v1090;
                }
                while ( v1090 );
                v1112 = v2625;
                ++*(_DWORD *)(v99 + 2084);
                v1087 = v1112 + 24;
                v2625 = v1087;
                if ( v1087 == BugCheckParameter2 )
                  goto LABEL_1656;
                if ( *(_DWORD *)(v99 + 2088) >= *(_DWORD *)(v99 + 2092) )
                  goto LABEL_213;
              }
            case 31:
              if ( (*(_DWORD *)(v99 + 2096) & 1) == 0 )
                goto LABEL_212;
              if ( !*(_QWORD *)(v99 + 2432) || (*(_DWORD *)(v99 + 2452) & 4) != 0 )
              {
                v982 = 0LL;
              }
              else
              {
                v981 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v99 + 976))(26LL, &v2763, 0LL);
                v982 = v2763;
                if ( v981 < 0 )
                  v982 = 0LL;
              }
              v983 = 0;
              v2622 = 0;
              v984 = *(__int64 (__fastcall **)(_QWORD))(v99 + 944);
              v2620 = v982;
              v985 = v984(0LL);
              j = 0LL;
              if ( !v985 )
              {
LABEL_1603:
                v1029 = *(_QWORD *)(v99 + 1248);
                if ( (*(int (__fastcall **)(__int64))(v99 + 928))(v1029) >= 0 )
                {
                  v1030 = (*(__int64 (__fastcall **)(__int64))(v99 + 992))(v1029);
                  v2663 = v1030;
                  v2985 = (*(__int64 (__fastcall **)(__int64, char *))(v99 + 1000))(v1029, v2637);
                  v2623 = (*(__int64 (__fastcall **)(__int64))(v99 + 1008))(v1029);
                  if ( v1030 == 114
                    || *(_DWORD *)(v99 + 2296)
                    || (*(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1030 ^ 0x72LL, *(_DWORD *)(v99 + 2296)) )
                  {
                    v1031 = v2619;
                  }
                  else
                  {
                    v1031 = v2619;
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v1031 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v1031;
                    *(_QWORD *)(v99 + 2328) = v1029;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
                  v1032 = 0;
                  v1033 = 0;
                  if ( (v1030 & 7) == 1 )
                  {
                    v1032 = 48;
                  }
                  else if ( (v1030 & 7) == 2 )
                  {
                    v1032 = 16;
                    v1033 = 16;
                  }
                  else if ( (v1030 & 7) != 0 && !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v1031 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v1031;
                    *(_QWORD *)(v99 + 2328) = v1029;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
                  v1034 = *(_QWORD *)(v99 + 1480);
                  v1035 = (unsigned __int64)v1030 >> 4;
                  v1036 = v1032 | *(_BYTE *)(v1034 + 2 * v1035);
                  v1037 = v2619;
                  if ( v1036 != v2985 && !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v1037 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v1037;
                    *(_QWORD *)(v99 + 2328) = v1029;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
                  v1038 = *(_BYTE *)(v1034 + 2 * v1035 + 1);
                  j = 0LL;
                  if ( ((unsigned __int8)v1033 | v1038) != v2637[0] && !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v1037 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v1037;
                    *(_QWORD *)(v99 + 2328) = v1029;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
                  if ( v1029 == *(_QWORD *)(v99 + 1248) )
                    v1039 = 0LL;
                  else
                    v1039 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v99 + 984))(v1029, 1LL);
                  v2625 = (__int64)v1039;
                  if ( v1039 )
                  {
                    v1040 = *v1039;
                    v1041 = v1039;
                    if ( *v1039 )
                    {
                      v1042 = v2985;
                      v1043 = v2623;
                      v1044 = (char *)v2619;
                      do
                      {
                        *v1041 = v1040 & 0xFFFFFFFFFFFFFFFCuLL;
                        (*(void (**)(void))(v99 + 480))();
                        v1045 = (unsigned __int8)v2637[0];
                        v1046 = v1041[1] & 0xFFFFFFFFFFFF0000uLL;
                        if ( v1046 == v1043 )
                          v1045 = v1042;
                        v1047 = v1041[1] >> 6;
                        LOBYTE(v1047) = v1047 & 0xF;
                        if ( (*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v99 + 1016))(v1047, v1045) )
                        {
                          j = 0LL;
                        }
                        else
                        {
                          if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                          {
                            v1048 = *(_QWORD **)(v99 + 2688);
                            v1049 = 48;
                            v1050 = 6LL;
                            do
                            {
                              v1049 -= 8;
                              *v1048 = *(_QWORD *)v1044;
                              v1044 += 8;
                              ++v1048;
                              --v1050;
                            }
                            while ( v1050 );
                            if ( v1049 )
                            {
                              do
                              {
                                v1051 = *v1044++;
                                *(_BYTE *)v1048 = v1051;
                                v1048 = (_QWORD *)((char *)v1048 + 1);
                                --v1049;
                              }
                              while ( v1049 );
                              v1042 = v2985;
                            }
                            v1044 = *(char **)(v99 + 2688);
                          }
                          *((_QWORD *)v1044 + 3) = v1046;
                          j = 0LL;
                          *((_QWORD *)v1044 + 4) = *v1041;
                          v1044[40] = ((unsigned __int64)*((unsigned int *)v1041 + 2) >> 6) & 0xF;
                          if ( !*(_DWORD *)(v99 + 2296) )
                          {
                            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v99 + 2312) = v1044 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v99 + 2320) = *(int *)v1044;
                            *(_QWORD *)(v99 + 2328) = v1029;
                            *(_DWORD *)(v99 + 2296) = 1;
                            __b8(v99, 0LL);
                          }
                        }
                        v1041 += 6;
                        v1040 = *v1041;
                      }
                      while ( *v1041 );
                      v1039 = (unsigned __int64 *)v2625;
                    }
                    (*(void (__fastcall **)(unsigned __int64 *))(v99 + 256))(v1039);
                  }
                  (*(void (__fastcall **)(__int64))(v99 + 936))(v1029);
                  v983 = v2622;
                  *(_DWORD *)(v99 + 2088) += 0x8000;
                }
                if ( v2620 )
                  (*(void (**)(void))(v99 + 480))();
                *(_DWORD *)(v99 + 2088) += v983 << 8;
                goto LABEL_213;
              }
              v986 = v985;
              while ( 2 )
              {
                if ( v982 == v986 )
                {
                  v987 = (char *)v143;
                  if ( (*(int (__fastcall **)(__int64))(v99 + 928))(v986) >= 0 )
                  {
                    v988 = (*(__int64 (__fastcall **)(__int64))(v99 + 992))(v986);
                    v2661 = v988;
                    v2983 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v99 + 1000))(v986, &v3012);
                    v2623 = (*(__int64 (__fastcall **)(__int64))(v99 + 1008))(v986);
                    if ( v988 != 97 && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v988 ^ 0x61LL;
                      if ( !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *(int *)v143;
                        *(_QWORD *)(v99 + 2328) = v986;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                      }
                    }
                    v989 = 0;
                    v990 = 0;
                    if ( (v988 & 7) == 1 )
                    {
                      v989 = 48;
                    }
                    else if ( (v988 & 7) == 2 )
                    {
                      v989 = 16;
                      v990 = 16;
                    }
                    else if ( (v988 & 7) != 0 && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v987 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *v2619;
                      *(_QWORD *)(v99 + 2328) = v986;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    v991 = *(_QWORD *)(v99 + 1480);
                    v992 = (unsigned __int64)v988 >> 4;
                    v993 = v989 | *(_BYTE *)(v991 + 2 * v992);
                    v994 = v2619;
                    if ( v993 != v2983 && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v987 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *v994;
                      *(_QWORD *)(v99 + 2328) = v986;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    if ( ((unsigned __int8)v990 | *(_BYTE *)(v991 + 2 * v992 + 1)) == v3012 )
                    {
LABEL_1541:
                      v995 = 0LL;
                    }
                    else
                    {
                      v995 = 0LL;
                      if ( !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = v987 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *v994;
                        *(_QWORD *)(v99 + 2328) = v986;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                        goto LABEL_1541;
                      }
                    }
                    if ( v986 != *(_QWORD *)(v99 + 1248) )
                      v995 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v99 + 984))(v986, 1LL);
                    v2625 = (__int64)v995;
                    v996 = v995;
                    if ( v995 )
                    {
                      v997 = *v995;
                      v998 = v995;
                      if ( *v995 )
                      {
                        v999 = v2983;
                        v1000 = v2623;
                        do
                        {
                          *v998 = v997 & 0xFFFFFFFFFFFFFFFCuLL;
                          (*(void (**)(void))(v99 + 480))();
                          v1001 = v3012;
                          v1002 = v998[1] & 0xFFFFFFFFFFFF0000uLL;
                          if ( v1002 == v1000 )
                            v1001 = v999;
                          v1003 = v998[1] >> 6;
                          LOBYTE(v1003) = v1003 & 0xF;
                          if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v99 + 1016))(v1003, v1001) )
                          {
                            if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                            {
                              v1004 = *(_QWORD **)(v99 + 2688);
                              v1005 = 48;
                              v1006 = 6LL;
                              do
                              {
                                v1005 -= 8;
                                *v1004 = *(_QWORD *)v987;
                                v987 += 8;
                                ++v1004;
                                --v1006;
                              }
                              while ( v1006 );
                              if ( v1005 )
                              {
                                do
                                {
                                  v1007 = *v987++;
                                  *(_BYTE *)v1004 = v1007;
                                  v1004 = (_QWORD *)((char *)v1004 + 1);
                                  --v1005;
                                }
                                while ( v1005 );
                                v999 = v2983;
                              }
                              v987 = *(char **)(v99 + 2688);
                            }
                            *((_QWORD *)v987 + 3) = v1002;
                            *((_QWORD *)v987 + 4) = *v998;
                            v987[40] = ((unsigned __int64)*((unsigned int *)v998 + 2) >> 6) & 0xF;
                            if ( !*(_DWORD *)(v99 + 2296) )
                            {
                              *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v99 + 2312) = v987 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v99 + 2320) = *(int *)v987;
                              *(_QWORD *)(v99 + 2328) = v986;
                              *(_DWORD *)(v99 + 2296) = 1;
                              __b8(v99, 0LL);
                            }
                          }
                          v998 += 6;
                          v997 = *v998;
                        }
                        while ( *v998 );
                        goto LABEL_1599;
                      }
                      goto LABEL_1600;
                    }
                    goto LABEL_1601;
                  }
                  goto LABEL_1602;
                }
                if ( !(*(unsigned int (__fastcall **)(__int64))(v99 + 968))(v986) )
                  goto LABEL_1602;
                v1008 = (char *)v143;
                if ( (*(int (__fastcall **)(__int64))(v99 + 928))(v986) < 0 )
                  goto LABEL_1602;
                v1009 = (*(__int64 (__fastcall **)(__int64))(v99 + 992))(v986);
                v2662 = v1009;
                v2984 = (*(__int64 (__fastcall **)(__int64, char *))(v99 + 1000))(v986, v2640);
                v2623 = (*(__int64 (__fastcall **)(__int64))(v99 + 1008))(v986);
                if ( v1009 != 97 && !*(_DWORD *)(v99 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1009 ^ 0x61LL;
                  if ( !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *(int *)v143;
                    *(_QWORD *)(v99 + 2328) = v986;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
                }
                v1010 = 0;
                v1011 = 0;
                if ( (v1009 & 7) == 1 )
                {
                  v1010 = 48;
                }
                else if ( (v1009 & 7) == 2 )
                {
                  v1010 = 16;
                  v1011 = 16;
                }
                else if ( (v1009 & 7) != 0 && !*(_DWORD *)(v99 + 2296) )
                {
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = v1008 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v99 + 2320) = *v2619;
                  *(_QWORD *)(v99 + 2328) = v986;
                  *(_DWORD *)(v99 + 2296) = 1;
                  __b8(v99, 0LL);
                }
                v1012 = *(_QWORD *)(v99 + 1480);
                v1013 = (unsigned __int64)v1009 >> 4;
                v1014 = v1010 | *(_BYTE *)(v1012 + 2 * v1013);
                v1015 = v2619;
                if ( v1014 != v2984 && !*(_DWORD *)(v99 + 2296) )
                {
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = v1008 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v99 + 2320) = *v1015;
                  *(_QWORD *)(v99 + 2328) = v986;
                  *(_DWORD *)(v99 + 2296) = 1;
                  __b8(v99, 0LL);
                }
                if ( ((unsigned __int8)v1011 | *(_BYTE *)(v1012 + 2 * v1013 + 1)) == v2640[0] )
                {
LABEL_1580:
                  v1016 = 0LL;
                }
                else
                {
                  v1016 = 0LL;
                  if ( !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = v1008 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v1015;
                    *(_QWORD *)(v99 + 2328) = v986;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                    goto LABEL_1580;
                  }
                }
                if ( v986 != *(_QWORD *)(v99 + 1248) )
                  v1016 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(v99 + 984))(v986, 1LL);
                v2625 = (__int64)v1016;
                v996 = v1016;
                if ( v1016 )
                {
                  v1017 = *v1016;
                  v1018 = v1016;
                  if ( *v1016 )
                  {
                    v1019 = v2984;
                    v1020 = v2623;
                    do
                    {
                      *v1018 = v1017 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v99 + 480))();
                      v1021 = (unsigned __int8)v2640[0];
                      v1022 = v1018[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v1022 == v1020 )
                        v1021 = v1019;
                      v1023 = v1018[1] >> 6;
                      LOBYTE(v1023) = v1023 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v99 + 1016))(v1023, v1021) )
                      {
                        if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                        {
                          v1024 = *(_QWORD **)(v99 + 2688);
                          v1025 = 48;
                          v1026 = 6LL;
                          do
                          {
                            v1025 -= 8;
                            *v1024 = *(_QWORD *)v1008;
                            v1008 += 8;
                            ++v1024;
                            --v1026;
                          }
                          while ( v1026 );
                          if ( v1025 )
                          {
                            do
                            {
                              v1027 = *v1008++;
                              *(_BYTE *)v1024 = v1027;
                              v1024 = (_QWORD *)((char *)v1024 + 1);
                              --v1025;
                            }
                            while ( v1025 );
                            v1019 = v2984;
                          }
                          v1008 = *(char **)(v99 + 2688);
                        }
                        *((_QWORD *)v1008 + 3) = v1022;
                        *((_QWORD *)v1008 + 4) = *v1018;
                        v1008[40] = ((unsigned __int64)*((unsigned int *)v1018 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v99 + 2296) )
                        {
                          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v99 + 2312) = v1008 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v99 + 2320) = *(int *)v1008;
                          *(_QWORD *)(v99 + 2328) = v986;
                          *(_DWORD *)(v99 + 2296) = 1;
                          __b8(v99, 0LL);
                        }
                      }
                      v1018 += 6;
                      v1017 = *v1018;
                    }
                    while ( *v1018 );
LABEL_1599:
                    v996 = (_QWORD *)v2625;
                  }
LABEL_1600:
                  (*(void (__fastcall **)(_QWORD *))(v99 + 256))(v996);
                }
LABEL_1601:
                (*(void (__fastcall **)(__int64))(v99 + 936))(v986);
                v143 = (__int64)v2619;
                *(_DWORD *)(v99 + 2088) += 0x8000;
                v983 = v2622;
                j = 0LL;
                v982 = v2620;
LABEL_1602:
                v1028 = *(__int64 (__fastcall **)(__int64))(v99 + 944);
                v2622 = ++v983;
                v986 = v1028(v986);
                if ( !v986 )
                  goto LABEL_1603;
                continue;
              }
            case 32:
              pg_unknown26(v99, v143);
              goto LABEL_212;
            case 33:
              pg_unknown11(v99, v143);
              goto LABEL_212;
            case 35:
              if ( (*(_DWORD *)(v143 + 40) & 1) != 0 && (!*(_QWORD *)(v99 + 2432) || (*(_DWORD *)(v99 + 2452) & 4) != 0) )
                goto LABEL_211;
              if ( (*(_DWORD *)(v143 + 40) & 1) != 0 )
              {
                v918 = *(_DWORD *)(v99 + 2452);
                v919 = v918;
                if ( *(_DWORD *)(v99 + 2084) )
                {
                  if ( (((unsigned __int8)v918 ^ (unsigned __int8)(v918 >> 3)) & 4) != 0 )
                    goto LABEL_211;
                }
                else
                {
                  v919 = v918 ^ ((unsigned __int8)v918 ^ (unsigned __int8)(8 * v918)) & 0x20;
                  *(_DWORD *)(v99 + 2452) = v919;
                }
                if ( !*(_QWORD *)(v99 + 2432) )
                  goto LABEL_1476;
                LOBYTE(v920) = v919;
                if ( !*(_DWORD *)(v99 + 2084) )
                {
                  v920 = v919 ^ ((unsigned __int8)v919 ^ (unsigned __int8)(8 * v919)) & 0x20;
                  *(_DWORD *)(v99 + 2452) = v920;
                  goto LABEL_1419;
                }
                if ( (((unsigned __int8)v919 ^ (unsigned __int8)(v919 >> 3)) & 4) != 0 )
                {
LABEL_1476:
                  *(_DWORD *)(v99 + 2084) = 0;
                  goto LABEL_1425;
                }
LABEL_1419:
                if ( (v920 & 4) != 0 )
                {
                  v921 = *(_QWORD *)(v143 + 8) & 0xFFFFFFFFFFFFF000uLL;
                  for ( i10 = (*(unsigned int *)(v143 + 16) + (unsigned __int64)(*(_DWORD *)(v143 + 8) & 0xFFF) + 4095) >> 12;
                        i10;
                        v921 += 4096LL )
                  {
                    --i10;
                    if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v99 + 688))(v921)
                      && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v143;
                      *(_QWORD *)(v99 + 2328) = v921;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    *(_DWORD *)(v99 + 2088) += 256;
                  }
LABEL_1425:
                  j = 0LL;
LABEL_1426:
                  v923 = *(_DWORD *)(v143 + 40);
                  if ( (v923 & 2) == 0 )
                    goto LABEL_213;
                  v924 = *(_QWORD *)(v143 + 8);
                  if ( (v923 & 4) != 0 )
                  {
                    v925 = *(_QWORD *)(v143 + 24);
                    v926 = **(_QWORD **)(v924 + 112);
                    if ( v926 != v925 )
                    {
                      v927 = *(_QWORD *)(v99 + 1424);
                      *(_QWORD *)v927 = v926;
                      *(_DWORD *)(v927 + 16) = 256;
                      v928 = *(_DWORD *)(v99 + 2296);
                      if ( !v928 )
                      {
                        *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v925 ^ v926;
                        v928 = *(_DWORD *)(v99 + 2296);
                      }
                      v929 = *(_QWORD *)(v924 + 112);
                      if ( !v928 )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *(int *)v143;
                        *(_QWORD *)(v99 + 2328) = v929;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                      }
                    }
                  }
                  if ( (*(_DWORD *)(v143 + 40) & 8) == 0 )
                    goto LABEL_213;
                  v930 = *(_QWORD *)(v143 + 32);
                  v931 = **(_QWORD **)(v924 + 120);
                  if ( v931 == v930 )
                    goto LABEL_213;
                  v932 = *(_QWORD *)(v99 + 1424);
                  *(_QWORD *)v932 = v931;
                  *(_DWORD *)(v932 + 16) = 256;
                  v933 = *(_DWORD *)(v99 + 2296);
                  if ( !v933 )
                  {
                    *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v930 ^ v931;
                    v933 = *(_DWORD *)(v99 + 2296);
                  }
                  v934 = *(_BYTE **)(v924 + 120);
                  if ( v933 )
                    goto LABEL_213;
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  v935 = v143 - 0x4C48B4211BBACBEBLL;
LABEL_1439:
                  *(_QWORD *)(v99 + 2312) = v935;
                  *(_QWORD *)(v99 + 2320) = *(int *)v143;
                  *(_QWORD *)(v99 + 2328) = v934;
                  *(_DWORD *)(v99 + 2296) = 1;
                  goto LABEL_267;
                }
                v936 = *(const char **)(v143 + 8);
                v937 = *(unsigned int *)(v143 + 16);
                v130 = (unsigned __int64)v936;
                *(_DWORD *)(v99 + 2088) += v937;
                v938 = v936;
                v939 = *(_DWORD *)(v99 + 2068);
                for ( i11 = *(_QWORD *)(v99 + 2072); v938 < &v936[v937]; v938 += 64 )
                  _mm_prefetch(v938, 0);
                v941 = *(_QWORD *)(v99 + 2072);
                v942 = (unsigned int)v937 >> 7;
                if ( (unsigned int)v937 >> 7 )
                {
                  do
                  {
                    v943 = 8LL;
                    do
                    {
                      v944 = v941 ^ *(_QWORD *)v130;
                      v945 = *(_QWORD *)(v130 + 8);
                      v130 += 16LL;
                      v941 = __ROL8__(__ROL8__(v944, v939) ^ v945, v939);
                      --v943;
                    }
                    while ( v943 );
                    v946 = __ROL8__(i11 ^ (v130 - (_QWORD)v936), 17) ^ i11 ^ (v130 - (_QWORD)v936);
                    v2814 = (v946 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v939 = ((unsigned __int8)v946 ^ (unsigned __int8)(v2814 ^ v939)) & 0x3F;
                    if ( !v939 )
                      LOBYTE(v939) = 1;
                    --v942;
                  }
                  while ( v942 );
                  v99 = (unsigned __int64)v2621;
                }
                v947 = v937 & 0x7F;
                if ( v947 >= 8 )
                {
                  v948 = (unsigned __int64)v947 >> 3;
                  do
                  {
                    v941 = __ROL8__(*(_QWORD *)v130 ^ v941, v939);
                    v130 += 8LL;
                    v947 -= 8;
                    --v948;
                  }
                  while ( v948 );
                }
                if ( v947 )
                {
                  do
                  {
                    v949 = *(unsigned __int8 *)v130++;
                    v941 = __ROL8__(v949 ^ v941, v939);
                    --v947;
                  }
                  while ( v947 );
                  v99 = (unsigned __int64)v2621;
                }
                v950 = v941 >> 31;
                j = 0LL;
                while ( v950 )
                {
                  LODWORD(v941) = v950 ^ v941;
                  v950 >>= 31;
                }
                v100 = *(unsigned int *)(v143 + 20);
                v951 = v941 & 0x7FFFFFFF;
                if ( v951 == (_DWORD)v100 )
                  goto LABEL_1426;
                v952 = *(unsigned int *)(v143 + 16);
                v953 = *(_QWORD *)(v143 + 8);
                if ( *(_DWORD *)(v143 + 16) )
                {
                  v130 = 64LL;
                  if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                  {
                    v954 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v955 = v953 & 0xFFFFFFFFFFFFF000uLL;
                    v2981 = (v953 + v952 - 1) | 0xFFF;
                    v956 = (v953 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v957 = v954;
                      while ( 1 )
                      {
                        v958 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v955, 0LL);
                        if ( v958 != -1073741267 )
                          break;
                        if ( v954 > 1u )
                          goto LABEL_1467;
                        v957 = v954;
                        __writecr8(v954);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v958 < 0 )
                        break;
LABEL_1467:
                      v955 += 4096LL;
                      v956 += 4096LL;
                      if ( v956 == v2981 )
                        goto LABEL_1468;
                    }
                    __writecr8(v957);
                    v143 = (__int64)v2619;
                    v100 = (unsigned int)v2619[5];
                  }
                }
                v959 = *(_DWORD *)(v99 + 2296);
                j = 0LL;
                if ( !v959 )
                {
                  v960 = (unsigned int)v100;
                  goto LABEL_1473;
                }
              }
              else
              {
                v962 = *(const char **)(v143 + 8);
                v963 = *(unsigned int *)(v143 + 16);
                v130 = (unsigned __int64)v962;
                *(_DWORD *)(v99 + 2088) += v963;
                v964 = v962;
                v965 = *(_DWORD *)(v99 + 2068);
                for ( i12 = *(_QWORD *)(v99 + 2072); v964 < &v962[v963]; v964 += 64 )
                  _mm_prefetch(v964, 0);
                v967 = *(_QWORD *)(v99 + 2072);
                v968 = (unsigned int)v963 >> 7;
                if ( (unsigned int)v963 >> 7 )
                {
                  do
                  {
                    v969 = 8LL;
                    do
                    {
                      v970 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v967, v965);
                      v130 += 16LL;
                      v967 = __ROL8__(v970, v965);
                      --v969;
                    }
                    while ( v969 );
                    v971 = (__ROL8__(i12 ^ (v130 - (_QWORD)v962), 17) ^ i12 ^ (v130 - (unsigned __int64)v962))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2815 = *((_QWORD *)&v971 + 1);
                    v965 = ((unsigned __int8)v971 ^ (unsigned __int8)(BYTE8(v971) ^ v965)) & 0x3F;
                    if ( !v965 )
                      LOBYTE(v965) = 1;
                    --v968;
                  }
                  while ( v968 );
                  v99 = (unsigned __int64)v2621;
                }
                v100 = v963 & 0x7F;
                if ( (unsigned int)v100 >= 8 )
                {
                  v972 = (unsigned __int64)(unsigned int)v100 >> 3;
                  do
                  {
                    v967 = __ROL8__(*(_QWORD *)v130 ^ v967, v965);
                    v130 += 8LL;
                    v100 = (unsigned int)(v100 - 8);
                    --v972;
                  }
                  while ( v972 );
                }
                for ( ; (_DWORD)v100; v100 = (unsigned int)(v100 - 1) )
                {
                  v973 = *(unsigned __int8 *)v130++;
                  v967 = __ROL8__(v973 ^ v967, v965);
                }
                for ( i13 = v967 >> 31; i13; i13 >>= 31 )
                  LODWORD(v967) = i13 ^ v967;
                v975 = 0;
                v951 = v967 & 0x7FFFFFFF;
                if ( v951 == v2619[5] )
                {
LABEL_1469:
                  v143 = (__int64)v2619;
                  goto LABEL_1425;
                }
                if ( !*v2619 )
                  v975 = v2619[6] != 0;
                v976 = (unsigned int)v2619[4];
                v977 = *((_QWORD *)v2619 + 1);
                if ( v2619[4] )
                {
                  v100 = 64LL;
                  if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                  {
                    v978 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v979 = v977 & 0xFFFFFFFFFFFFF000uLL;
                    v2623 = (v977 + v976 - 1) | 0xFFF;
                    v2982 = (v977 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v957 = v978;
                      while ( 1 )
                      {
                        v980 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                                 v979,
                                 0LL,
                                 v100,
                                 v130);
                        if ( v980 != -1073741267 )
                          break;
                        if ( v975 )
                          goto LABEL_1508;
                        if ( v978 > 1u )
                          goto LABEL_1506;
                        v957 = v978;
                        __writecr8(v978);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v980 < 0 )
                        break;
LABEL_1506:
                      v979 += 4096LL;
                      v2982 += 4096LL;
                      if ( v2982 == v2623 )
                      {
LABEL_1468:
                        __writecr8(v957);
                        goto LABEL_1469;
                      }
                    }
LABEL_1508:
                    __writecr8(v957);
                  }
                }
                v143 = (__int64)v2619;
                j = 0LL;
                v959 = *(_DWORD *)(v99 + 2296);
                v960 = (unsigned int)v2619[5];
                if ( !v959 )
                {
LABEL_1473:
                  *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v951 ^ v960;
                  v959 = *(_DWORD *)(v99 + 2296);
                }
              }
              v961 = *(_QWORD *)(v143 + 8);
              if ( !v959 )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v961;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
              }
              goto LABEL_1426;
            case 36:
              v868 = *(_QWORD **)(v143 + 8);
              v869 = *(unsigned int *)(v143 + 16);
              v870 = v868;
              *(_DWORD *)(v99 + 2088) += v869;
              v871 = (const char *)v868;
              v872 = *(_DWORD *)(v99 + 2068);
              v873 = *(_QWORD *)(v99 + 2072);
              if ( v868 < (_QWORD *)((char *)v868 + v869) )
              {
                do
                {
                  _mm_prefetch(v871, 0);
                  v871 += 64;
                }
                while ( v871 < (const char *)v868 + v869 );
              }
              v874 = *(_QWORD *)(v99 + 2072);
              v875 = (unsigned int)v869 >> 7;
              if ( (unsigned int)v869 >> 7 )
              {
                do
                {
                  v876 = 8LL;
                  do
                  {
                    v877 = v870[1] ^ __ROL8__(*v870 ^ v874, v872);
                    v870 += 2;
                    v874 = __ROL8__(v877, v872);
                    --v876;
                  }
                  while ( v876 );
                  v878 = (__ROL8__(v873 ^ ((char *)v870 - (char *)v868), 17) ^ v873 ^ (unsigned __int64)((char *)v870 - (char *)v868))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2813 = *((_QWORD *)&v878 + 1);
                  v879 = v878 ^ BYTE8(v878) ^ v872;
                  v144 = 1LL;
                  v872 = v879 & 0x3F;
                  if ( !v872 )
                    LOBYTE(v872) = 1;
                  --v875;
                }
                while ( v875 );
                v99 = (unsigned __int64)v2621;
              }
              v880 = v869 & 0x7F;
              if ( (unsigned int)v880 >= 8 )
              {
                v881 = (unsigned __int64)(unsigned int)v880 >> 3;
                do
                {
                  v874 = __ROL8__(*v870++ ^ v874, v872);
                  v880 = (unsigned int)(v880 - 8);
                  --v881;
                }
                while ( v881 );
              }
              for ( ; (_DWORD)v880; v880 = (unsigned int)(v880 - 1) )
              {
                v882 = *(unsigned __int8 *)v870;
                v870 = (_QWORD *)((char *)v870 + 1);
                v874 = __ROL8__(v882 ^ v874, v872);
              }
              for ( i14 = v874; ; LODWORD(v874) = i14 ^ v874 )
              {
                i14 >>= 31;
                if ( !i14 )
                  break;
              }
              v884 = v874 & 0x7FFFFFFF;
              v885 = 0;
              if ( v884 == *(_DWORD *)(v143 + 20) )
                goto LABEL_1381;
              if ( !*(_DWORD *)v143 )
                v885 = *(_DWORD *)(v143 + 24) != 0;
              v886 = *(unsigned int *)(v143 + 16);
              v887 = *(_QWORD *)(v143 + 8);
              if ( *(_DWORD *)(v143 + 16) )
              {
                v880 = 64LL;
                if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                {
                  v888 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v889 = v887 & 0xFFFFFFFFFFFFF000uLL;
                  v2623 = (v887 + v886 - 1) | 0xFFF;
                  v2980 = (v887 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v890 = v888;
                    while ( 1 )
                    {
                      v891 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v99 + 1128))(
                               v889,
                               0LL,
                               v880,
                               v870);
                      if ( v891 != -1073741267 )
                        break;
                      if ( v885 )
                        goto LABEL_1376;
                      if ( v888 > 1u )
                        goto LABEL_1374;
                      v890 = v888;
                      __writecr8(v888);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v891 < 0 )
                      break;
LABEL_1374:
                    v889 += 4096LL;
                    v2980 += 4096LL;
                    if ( v2980 == v2623 )
                    {
                      __writecr8(v890);
LABEL_1381:
                      v894 = *(_QWORD *)(v99 + 1344);
                      v895 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64, unsigned __int64, __int64, _QWORD *))(v99 + 336))(
                        v894,
                        v144,
                        v880,
                        v870);
                      v897 = v2619;
                      v898 = **(unsigned int ***)(v99 + 1552);
                      v899 = v898 + 4;
                      v900 = *((_BYTE *)v898 + 12);
                      v901 = (unsigned __int64)&v898[6 * *v898 + 4];
                      do
                      {
                        v902 = 24LL;
                        v903 = (__int64 *)(v2619 + 6);
                        v904 = v899;
                        do
                        {
                          v905 = *(_QWORD *)v904;
                          v904 += 2;
                          v906 = *v903++;
                          if ( v905 != v906 )
                            goto LABEL_1389;
                          v902 = (unsigned int)(v902 - 8);
                        }
                        while ( (unsigned int)v902 >= 8 );
                        if ( !(_DWORD)v902 )
                          break;
                        while ( 1 )
                        {
                          v896 = *(unsigned __int8 *)v904;
                          v904 = (unsigned int *)((char *)v904 + 1);
                          v907 = *(unsigned __int8 *)v903;
                          v903 = (__int64 *)((char *)v903 + 1);
                          if ( v896 != v907 )
                            break;
                          v207 = (_DWORD)v902 == 1;
                          v902 = (unsigned int)(v902 - 1);
                          if ( v207 )
                            goto LABEL_1390;
                        }
LABEL_1389:
                        v899 += 6;
                      }
                      while ( (unsigned __int64)v899 < v901 );
LABEL_1390:
                      v99 = (unsigned __int64)v2621;
                      (*((void (__fastcall **)(_QWORD, __int64, __int64, __int64 *))v2621 + 50))(
                        *((_QWORD *)v2621 + 168),
                        v896,
                        v902,
                        v903);
                      __writecr8(v895);
                      if ( v900 )
                      {
                        if ( (*(_DWORD *)(v99 + 2452) & 0x10) != 0 && !*(_DWORD *)(v99 + 2296) )
                        {
                          v908 = v2619;
                          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v99 + 2312) = (char *)v908 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v99 + 2320) = *v908;
                          *(_QWORD *)(v99 + 2328) = 1LL;
                          *(_DWORD *)(v99 + 2296) = 1;
                          __b8(v99, 0LL);
                        }
                        if ( *((_QWORD *)v897 + 3) == 1LL )
                          goto LABEL_1398;
                      }
                      if ( v899 != (unsigned int *)v901 )
                      {
LABEL_1398:
                        v909 = v2619;
                      }
                      else
                      {
                        v909 = v2619;
                        if ( !*(_DWORD *)(v99 + 2296) )
                        {
                          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v99 + 2312) = (char *)v909 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v99 + 2320) = *v909;
                          *(_QWORD *)(v99 + 2328) = v899;
                          *(_DWORD *)(v99 + 2296) = 1;
                          __b8(v99, 0LL);
                        }
                      }
                      v910 = *(_QWORD *)(v99 + 1344);
                      v911 = KeGetCurrentIrql();
                      __writecr8(0xFuLL);
                      (*(void (__fastcall **)(__int64))(v99 + 336))(v910);
                      v912 = **(unsigned int ***)(v99 + 1552);
                      v913 = v912 + 4;
                      v914 = 0LL;
                      v915 = (unsigned __int64)&v912[6 * *v912 + 4];
                      do
                      {
                        v913 += 6;
                        v917 = v914;
                        if ( (unsigned __int64)v913 >= v915 )
                          break;
                        v916 = *((_QWORD *)v913 + 1);
                        if ( v916 < v914 )
                          break;
                        if ( (v916 & 0xFFFFFFFFFFFFF000uLL) != v916 )
                          break;
                        v914 = v916 + v913[4];
                        if ( v914 <= v916 )
                          break;
                      }
                      while ( v914 != v917 );
                      (*(void (__fastcall **)(_QWORD, unsigned __int64))(v99 + 400))(*(_QWORD *)(v99 + 1344), v917);
                      __writecr8(v911);
                      if ( v913 == (unsigned int *)v915 || *(_DWORD *)(v99 + 2296) )
                        goto LABEL_212;
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = (char *)v909 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *v909;
                      *(_QWORD *)(v99 + 2328) = v913;
LABEL_1271:
                      *(_DWORD *)(v99 + 2296) = 1;
LABEL_1272:
                      __b8(v99, 0LL);
                      goto LABEL_212;
                    }
                  }
LABEL_1376:
                  __writecr8(v890);
                  v143 = (__int64)v2619;
                }
              }
              v892 = *(_DWORD *)(v99 + 2296);
              v144 = *(unsigned int *)(v143 + 20);
              if ( !v892 )
              {
                *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v144 ^ v884;
                v892 = *(_DWORD *)(v99 + 2296);
              }
              v893 = *(_QWORD *)(v143 + 8);
              if ( !v892 )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v893;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
              }
              goto LABEL_1381;
          }
        }
      }
      else
      {
        if ( v150 == 28 )
        {
          v782 = *(unsigned int *)(v143 + 16);
          if ( (_DWORD)v782 )
          {
            v826 = *(_QWORD **)(v143 + 8);
            *(_DWORD *)(v99 + 2088) += v782;
            v827 = v826;
            v828 = *(_DWORD *)(v99 + 2068);
            v829 = (const char *)v826;
            v830 = *(_QWORD *)(v99 + 2072);
            if ( v826 < (_QWORD *)((char *)v826 + v782) )
            {
              do
              {
                _mm_prefetch(v829, 0);
                v829 += 64;
              }
              while ( v829 < (const char *)v826 + v782 );
            }
            v831 = *(_QWORD *)(v99 + 2072);
            v832 = (unsigned int)v782 >> 7;
            if ( (unsigned int)v782 >> 7 )
            {
              do
              {
                v833 = 8LL;
                do
                {
                  v834 = v827[1] ^ __ROL8__(*v827 ^ v831, v828);
                  v827 += 2;
                  v831 = __ROL8__(v834, v828);
                  --v833;
                }
                while ( v833 );
                v835 = (__ROL8__(v830 ^ ((char *)v827 - (char *)v826), 17) ^ v830 ^ (unsigned __int64)((char *)v827 - (char *)v826))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2811 = *((_QWORD *)&v835 + 1);
                v828 = ((unsigned __int8)v835 ^ (unsigned __int8)(BYTE8(v835) ^ v828)) & 0x3F;
                if ( !v828 )
                  LOBYTE(v828) = 1;
                --v832;
              }
              while ( v832 );
              v99 = (unsigned __int64)v2621;
            }
            v836 = v782 & 0x7F;
            if ( v836 >= 8 )
            {
              v837 = (unsigned __int64)v836 >> 3;
              do
              {
                v831 = __ROL8__(*v827++ ^ v831, v828);
                v836 -= 8;
                --v837;
              }
              while ( v837 );
            }
            for ( ; v836; --v836 )
            {
              v838 = *(unsigned __int8 *)v827;
              v827 = (_QWORD *)((char *)v827 + 1);
              v831 = __ROL8__(v838 ^ v831, v828);
            }
            for ( i15 = v831; ; LODWORD(v831) = i15 ^ v831 )
            {
              i15 >>= 31;
              if ( !i15 )
                break;
            }
            v840 = v2619;
            v841 = v831 & 0x7FFFFFFF;
            v842 = 0;
            if ( v841 != v2619[5] )
            {
              if ( !*v2619 )
                v842 = v2619[6] != 0;
              v843 = (unsigned int)v2619[4];
              v844 = *((_QWORD *)v2619 + 1);
              if ( v2619[4] )
              {
                v845 = 64LL;
                if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                {
                  v846 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v847 = v844 & 0xFFFFFFFFFFFFF000uLL;
                  v2623 = (v844 + v843 - 1) | 0xFFF;
                  v2979 = (v844 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v848 = v846;
                    while ( 1 )
                    {
                      v849 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v99 + 1128))(
                               v847,
                               0LL,
                               v845,
                               v827);
                      if ( v849 != -1073741267 )
                        break;
                      if ( v842 )
                        goto LABEL_1325;
                      if ( v846 > 1u )
                        goto LABEL_1305;
                      v848 = v846;
                      __writecr8(v846);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v849 < 0 )
                      break;
LABEL_1305:
                    v847 += 4096LL;
                    v2979 += 4096LL;
                    if ( v2979 == v2623 )
                    {
                      __writecr8(v848);
                      v840 = v2619;
                      goto LABEL_1307;
                    }
                  }
LABEL_1325:
                  __writecr8(v848);
                  v840 = v2619;
                }
              }
              v865 = *(_DWORD *)(v99 + 2296);
              if ( !v865 )
              {
                *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = (unsigned int)v840[5] ^ (unsigned __int64)v841;
                v865 = *(_DWORD *)(v99 + 2296);
              }
              v866 = *((_QWORD *)v840 + 1);
              if ( !v865 )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = (char *)v840 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *v840;
                *(_QWORD *)(v99 + 2328) = v866;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
              }
            }
LABEL_1307:
            v2665 = *((_QWORD *)v840 + 1) - 112LL;
            v850 = *(const char **)(v2665 + 80);
            v851 = 0;
            if ( v850 )
              v851 = *(_DWORD *)v850;
            *(_DWORD *)(v99 + 2088) += v851;
            v852 = v850;
            v853 = *(_DWORD *)(v99 + 2068);
            v854 = v850;
            v855 = *(_QWORD *)(v99 + 2072);
            v856 = &v850[v851];
            if ( v850 < v856 )
            {
              do
              {
                _mm_prefetch(v854, 0);
                v854 += 64;
              }
              while ( v854 < v856 );
            }
            v100 = *(_QWORD *)(v99 + 2072);
            v857 = v851 >> 7;
            if ( v851 >> 7 )
            {
              do
              {
                v858 = 8LL;
                do
                {
                  v859 = v100 ^ *(_QWORD *)v852;
                  v860 = *((_QWORD *)v852 + 1);
                  v852 += 16;
                  v100 = __ROL8__(__ROL8__(v859, v853) ^ v860, v853);
                  --v858;
                }
                while ( v858 );
                v861 = __ROL8__(v855 ^ (v852 - v850), 17) ^ v855 ^ (v852 - v850);
                v2812 = ((unsigned __int64)v861 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v853 = ((unsigned __int8)v861 ^ (unsigned __int8)(v2812 ^ v853)) & 0x3F;
                if ( !v853 )
                  LOBYTE(v853) = 1;
                --v857;
              }
              while ( v857 );
              v99 = (unsigned __int64)v2621;
            }
            v130 = v851 & 0x7F;
            if ( (unsigned int)v130 >= 8 )
            {
              v862 = (unsigned __int64)(unsigned int)v130 >> 3;
              do
              {
                v100 = __ROL8__(*(_QWORD *)v852 ^ v100, v853);
                v852 += 8;
                v130 = (unsigned int)(v130 - 8);
                --v862;
              }
              while ( v862 );
            }
            if ( (_DWORD)v130 )
            {
              do
              {
                v863 = *(unsigned __int8 *)v852++;
                v100 = __ROL8__(v863 ^ v100, v853);
                v130 = (unsigned int)(v130 - 1);
              }
              while ( (_DWORD)v130 );
              v99 = (unsigned __int64)v2621;
            }
            for ( i16 = v100; ; v100 = (unsigned int)i16 ^ (unsigned int)v100 )
            {
              i16 >>= 31;
              if ( !i16 )
                break;
            }
            v867 = (unsigned int)v840[11];
            LODWORD(v100) = v100 & 0x7FFFFFFF;
            if ( (_DWORD)v100 == (_DWORD)v867 )
              goto LABEL_212;
            if ( *(_DWORD *)(v99 + 2296) )
              goto LABEL_212;
            *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v867 ^ (unsigned int)v100;
            if ( *(_DWORD *)(v99 + 2296) )
              goto LABEL_212;
            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v99 + 2312) = (char *)v840 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v99 + 2320) = *v840;
            *(_QWORD *)(v99 + 2328) = v850;
            *(_DWORD *)(v99 + 2296) = 1;
            goto LABEL_1272;
          }
          v2759 = v143 + 48;
          v2758[0] = *(_WORD *)(v143 + 40);
          v2758[1] = v2758[0];
          LOBYTE(v2618) = 0;
          if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64 *))(v99 + 488))(
                 v2758,
                 0LL,
                 0LL,
                 0LL,
                 *(_QWORD *)(v99 + 1296),
                 v2618,
                 0LL,
                 &v2665) < 0 )
            goto LABEL_212;
          if ( (*(_DWORD *)(v2665 + 16) & 0x10) == 0 )
          {
            (*(void (__fastcall **)(__int64))(v99 + 480))(v2665);
            goto LABEL_212;
          }
          (*(void (__fastcall **)(_QWORD, char *))(v99 + 512))(*(_QWORD *)(v99 + 488), v2948);
          if ( v2949 )
          {
            v783 = *(__int64 (**)(void))(v99 + 504);
            v134 = v2949;
            v2631 = v2949;
            v784 = v783();
            if ( v784 )
            {
              v136 = *(_DWORD *)(v784 + 80);
              v2632 = v136;
            }
          }
          (*(void (__fastcall **)(_QWORD, char *))(v99 + 512))(*(_QWORD *)(v143 + 24), v2950);
          if ( v2951 && (v785 = *(__int64 (**)(void))(v99 + 504), v135 = v2951, v2629 = v2951, (v786 = v785()) != 0) )
          {
            v787 = *(_DWORD *)(v786 + 80);
            v2653 = v787;
          }
          else
          {
            v787 = v2653;
          }
          if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) == 0 )
          {
            *(_QWORD *)(v143 + 8) = v2665 + 112;
            *(_DWORD *)(v143 + 16) = 224;
          }
          v788 = v136;
          v789 = 0;
          v2978 = v136;
          do
          {
            v130 = *(_QWORD *)(v2665 + 8LL * v789 + 112);
            if ( v788 && v130 >= v134 && v130 <= v788 + v134 - 1 )
            {
              j = 0LL;
            }
            else
            {
              j = 0LL;
              if ( !v787 || (v100 = (unsigned __int64)&v135[v787 - 1], v130 < (unsigned __int64)v135) || v130 > v100 )
              {
                if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                {
                  v790 = *(_QWORD **)(v99 + 2688);
                  v791 = 48;
                  v100 = 6LL;
                  do
                  {
                    v791 -= 8;
                    *v790 = *(_QWORD *)v143;
                    v143 += 8LL;
                    ++v790;
                    --v100;
                  }
                  while ( v100 );
                  if ( v791 )
                  {
                    do
                    {
                      v792 = *(_BYTE *)v143++;
                      *(_BYTE *)v790 = v792;
                      v790 = (_QWORD *)((char *)v790 + 1);
                      --v791;
                    }
                    while ( v791 );
                    v99 = (unsigned __int64)v2621;
                  }
                  v143 = *(_QWORD *)(v99 + 2688);
                }
                *(_QWORD *)(v143 + 32) = v130;
                v793 = *(_QWORD *)(v99 + 1424);
                *(_QWORD *)v793 = v143;
                *(_DWORD *)(v793 + 16) = 48;
                v794 = *(_QWORD *)(v143 + 8);
                if ( *(_DWORD *)(v99 + 2296) )
                  goto LABEL_213;
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v794;
                *(_DWORD *)(v99 + 2296) = 1;
LABEL_267:
                __b8(v99, 0LL);
                goto LABEL_213;
              }
            }
            ++v789;
          }
          while ( v789 < 0x1Cu );
          if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) == 0 )
          {
            v795 = *(_QWORD **)(v143 + 8);
            v796 = *(unsigned int *)(v143 + 16);
            v797 = v795;
            *(_DWORD *)(v99 + 2088) += v796;
            v798 = (const char *)v795;
            v799 = *(_DWORD *)(v99 + 2068);
            v800 = *(_QWORD *)(v99 + 2072);
            if ( v795 < (_QWORD *)((char *)v795 + v796) )
            {
              do
              {
                _mm_prefetch(v798, 0);
                v798 += 64;
              }
              while ( v798 < (const char *)v795 + v796 );
            }
            v100 = *(_QWORD *)(v99 + 2072);
            v801 = (unsigned int)v796 >> 7;
            if ( (unsigned int)v796 >> 7 )
            {
              do
              {
                v802 = 8LL;
                do
                {
                  v803 = v797[1] ^ __ROL8__(*v797 ^ v100, v799);
                  v797 += 2;
                  v100 = __ROL8__(v803, v799);
                  --v802;
                }
                while ( v802 );
                v804 = (__ROL8__(v800 ^ ((char *)v797 - (char *)v795), 17) ^ v800 ^ (unsigned __int64)((char *)v797 - (char *)v795))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2809 = *((_QWORD *)&v804 + 1);
                v799 = ((unsigned __int8)v804 ^ (unsigned __int8)(BYTE8(v804) ^ v799)) & 0x3F;
                if ( !v799 )
                  LOBYTE(v799) = 1;
                --v801;
              }
              while ( v801 );
              v99 = (unsigned __int64)v2621;
              v788 = v2978;
            }
            v805 = v796 & 0x7F;
            if ( v805 >= 8 )
            {
              v806 = (unsigned __int64)v805 >> 3;
              do
              {
                v100 = __ROL8__(*v797++ ^ v100, v799);
                v805 -= 8;
                --v806;
              }
              while ( v806 );
            }
            if ( v805 )
            {
              do
              {
                v807 = *(unsigned __int8 *)v797;
                v797 = (_QWORD *)((char *)v797 + 1);
                v100 = __ROL8__(v807 ^ v100, v799);
                --v805;
              }
              while ( v805 );
              v99 = (unsigned __int64)v2621;
            }
            for ( i17 = v100; ; v100 = (unsigned int)i17 ^ (unsigned int)v100 )
            {
              i17 >>= 31;
              if ( !i17 )
                break;
            }
            LODWORD(v100) = v100 & 0x7FFFFFFF;
            *(_DWORD *)(v143 + 20) = v100;
            v809 = *(const char **)(v2665 + 80);
            v810 = 0;
            if ( !v809
              || (v810 = *(_DWORD *)v809,
                  LOBYTE(v100) = 0,
                  v130 = (unsigned int)(*(_DWORD *)v809 - 8) >> 3,
                  !(_DWORD)v130) )
            {
LABEL_1253:
              *(_DWORD *)(v99 + 2088) += v810;
              v130 = (unsigned __int64)v809;
              v812 = *(_DWORD *)(v99 + 2068);
              v813 = v809;
              v814 = *(_QWORD *)(v99 + 2072);
              v815 = &v809[v810];
              if ( v809 < v815 )
              {
                do
                {
                  _mm_prefetch(v813, 0);
                  v813 += 64;
                }
                while ( v813 < v815 );
              }
              v100 = *(_QWORD *)(v99 + 2072);
              v816 = v810 >> 7;
              if ( v810 >> 7 )
              {
                do
                {
                  v817 = 8LL;
                  do
                  {
                    v818 = v100 ^ *(_QWORD *)v130;
                    v819 = *(_QWORD *)(v130 + 8);
                    v130 += 16LL;
                    v100 = __ROL8__(__ROL8__(v818, v812) ^ v819, v812);
                    --v817;
                  }
                  while ( v817 );
                  v820 = (__ROL8__(v814 ^ (v130 - (_QWORD)v809), 17) ^ v814 ^ (v130 - (unsigned __int64)v809))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2810 = *((_QWORD *)&v820 + 1);
                  v812 = ((unsigned __int8)v820 ^ (unsigned __int8)(BYTE8(v820) ^ v812)) & 0x3F;
                  if ( !v812 )
                    LOBYTE(v812) = 1;
                  --v816;
                }
                while ( v816 );
                v99 = (unsigned __int64)v2621;
              }
              v821 = v810 & 0x7F;
              if ( v821 >= 8 )
              {
                v822 = (unsigned __int64)v821 >> 3;
                do
                {
                  v100 = __ROL8__(*(_QWORD *)v130 ^ v100, v812);
                  v130 += 8LL;
                  v821 -= 8;
                  --v822;
                }
                while ( v822 );
                v99 = (unsigned __int64)v2621;
              }
              for ( ; v821; --v821 )
              {
                v823 = *(unsigned __int8 *)v130++;
                v100 = __ROL8__(v823 ^ v100, v812);
              }
              v824 = v100 >> 31;
              j = 0LL;
              while ( v824 )
              {
                v100 = (unsigned int)v824 ^ (unsigned int)v100;
                v824 >>= 31;
              }
              LODWORD(v100) = v100 & 0x7FFFFFFF;
              *(_DWORD *)(v143 + 44) = v100;
              goto LABEL_213;
            }
            while ( 1 )
            {
              v811 = *(_QWORD *)&v809[8 * (unsigned __int8)v100 + 8];
              if ( v811
                && (!v788 || v811 < v2631 || v811 > v788 + v2631 - 1)
                && (!v2653 || v811 < (unsigned __int64)v2629 || v811 > (unsigned __int64)&v2629[v2653 - 1]) )
              {
                break;
              }
              LOBYTE(v100) = v100 + 1;
              if ( (unsigned __int8)v100 >= (unsigned int)v130 )
                goto LABEL_1253;
            }
            *(_QWORD *)(v143 + 32) = v811;
            v825 = *(_QWORD *)(v99 + 1424);
            *(_QWORD *)v825 = v143;
            *(_DWORD *)(v825 + 16) = 48;
            if ( *(_DWORD *)(v99 + 2296) )
              goto LABEL_212;
            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v99 + 2320) = *(int *)v143;
            *(_QWORD *)(v99 + 2328) = v809;
            goto LABEL_1271;
          }
LABEL_364:
          (*(void (**)(void))(v99 + 480))();
          goto LABEL_213;
        }
        v100 = 12LL;
        if ( v150 > 12 )
        {
          if ( v150 <= 14 )
          {
            if ( v150 == 14 )
            {
              if ( !*(_QWORD *)(v99 + 2432) )
                goto LABEL_211;
              v745 = *(_DWORD *)(v99 + 2452);
              if ( ((v745 >> 2) & 1) != 0 )
                goto LABEL_211;
              if ( *(_DWORD *)(v99 + 2084) )
              {
                if ( ((v745 >> 5) & 1) != 0 )
                  goto LABEL_211;
              }
              else
              {
                *(_DWORD *)(v99 + 2452) = v745 ^ ((unsigned __int8)v745 ^ (unsigned __int8)(8 * v745)) & 0x20;
              }
            }
            v746 = *(const char **)(v143 + 8);
            v747 = *(unsigned int *)(v143 + 16);
            v130 = (unsigned __int64)v746;
            *(_DWORD *)(v99 + 2088) += v747;
            v748 = v746;
            v749 = *(_DWORD *)(v99 + 2068);
            for ( i18 = *(_QWORD *)(v99 + 2072); v748 < &v746[v747]; v748 += 64 )
              _mm_prefetch(v748, 0);
            v751 = *(_QWORD *)(v99 + 2072);
            v752 = (unsigned int)v747 >> 7;
            if ( (unsigned int)v747 >> 7 )
            {
              do
              {
                v753 = 8LL;
                do
                {
                  v754 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v751, v749);
                  v130 += 16LL;
                  v751 = __ROL8__(v754, v749);
                  --v753;
                }
                while ( v753 );
                v755 = (__ROL8__(i18 ^ (v130 - (_QWORD)v746), 17) ^ i18 ^ (v130 - (unsigned __int64)v746))
                     * (unsigned __int128)0x7010008004002001uLL;
                v2808 = *((_QWORD *)&v755 + 1);
                v749 = ((unsigned __int8)v755 ^ (unsigned __int8)(BYTE8(v755) ^ v749)) & 0x3F;
                if ( !v749 )
                  LOBYTE(v749) = 1;
                --v752;
              }
              while ( v752 );
              v99 = (unsigned __int64)v2621;
            }
            v100 = v747 & 0x7F;
            if ( (unsigned int)v100 >= 8 )
            {
              v756 = (unsigned __int64)(unsigned int)v100 >> 3;
              do
              {
                v751 = __ROL8__(*(_QWORD *)v130 ^ v751, v749);
                v130 += 8LL;
                v100 = (unsigned int)(v100 - 8);
                --v756;
              }
              while ( v756 );
            }
            for ( ; (_DWORD)v100; v100 = (unsigned int)(v100 - 1) )
            {
              v757 = *(unsigned __int8 *)v130++;
              v751 = __ROL8__(v757 ^ v751, v749);
            }
            v758 = v751 >> 31;
            j = 0LL;
            while ( v758 )
            {
              LODWORD(v751) = v758 ^ v751;
              v758 >>= 31;
            }
            v759 = v751 & 0x7FFFFFFF;
            if ( v759 == *(_DWORD *)(v143 + 20) )
              goto LABEL_1163;
            _InterlockedOr(v2617, 0);
            if ( (*(_DWORD *)(v143 + 24) & 1) != 0 )
            {
              if ( **(_BYTE **)(v99 + 1408) )
                goto LABEL_1163;
            }
            v760 = *(unsigned int *)(v143 + 16);
            v761 = *(_QWORD *)(v143 + 8);
            if ( *(_DWORD *)(v143 + 16) )
            {
              v100 = 64LL;
              if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
              {
                v762 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v763 = v761 & 0xFFFFFFFFFFFFF000uLL;
                v2977 = (v761 + v760 - 1) | 0xFFF;
                v764 = (v761 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v765 = v762;
                  while ( 1 )
                  {
                    v766 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                             v763,
                             0LL,
                             v100,
                             v130);
                    if ( v766 != -1073741267 )
                      break;
                    if ( v762 > 1u )
                      goto LABEL_1161;
                    v765 = v762;
                    __writecr8(v762);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v766 < 0 )
                    break;
LABEL_1161:
                  v763 += 4096LL;
                  v764 += 4096LL;
                  if ( v764 == v2977 )
                  {
                    __writecr8(v765);
                    v143 = (__int64)v2619;
                    j = 0LL;
LABEL_1163:
                    if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) == 0 )
                      goto LABEL_213;
                    v100 = *(unsigned int *)(v143 + 16);
                    if ( !(_DWORD)v100 )
                      goto LABEL_212;
                    pg_unknown12(v99, *(_QWORD *)(v143 + 8), v100, v2915);
                    v100 = 16LL;
                    v130 = v143 + 28;
                    v767 = v2915;
                    do
                    {
                      v768 = *(_QWORD *)v767;
                      v767 += 8;
                      v769 = *(_QWORD *)v130;
                      v130 += 8LL;
                      if ( v768 != v769 )
                        goto LABEL_1177;
                      v100 = (unsigned int)(v100 - 8);
                    }
                    while ( (unsigned int)v100 >= 8 );
                    if ( !(_DWORD)v100 )
                      goto LABEL_1192;
                    while ( 1 )
                    {
                      v770 = *v767++;
                      v771 = *(unsigned __int8 *)v130++;
                      if ( v770 != v771 )
                        break;
                      v207 = (_DWORD)v100 == 1;
                      v100 = (unsigned int)(v100 - 1);
                      if ( v207 )
                        goto LABEL_1192;
                    }
LABEL_1177:
                    _InterlockedOr(v2617, 0);
                    if ( (*(_DWORD *)(v143 + 24) & 1) == 0 || !**(_BYTE **)(v99 + 1408) )
                    {
                      v774 = *(unsigned int *)(v143 + 16);
                      v775 = *(_QWORD *)(v143 + 8);
                      if ( *(_DWORD *)(v143 + 16) )
                      {
                        v100 = 64LL;
                        if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                        {
                          v776 = KeGetCurrentIrql();
                          __writecr8(2uLL);
                          v777 = v775 & 0xFFFFFFFFFFFFF000uLL;
                          v778 = (v775 + v774 - 1) | 0xFFF;
                          v779 = (v775 & 0xFFFFFFFFFFFFF000uLL) - 1;
                          while ( 1 )
                          {
                            v780 = v776;
                            while ( 1 )
                            {
                              v781 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                                       v777,
                                       0LL,
                                       v100,
                                       v130);
                              if ( v781 != -1073741267 )
                                break;
                              if ( v776 > 1u )
                                goto LABEL_1187;
                              v780 = v776;
                              __writecr8(v776);
                              KeGetCurrentIrql();
                              __writecr8(2uLL);
                            }
                            if ( v781 < 0 )
                              break;
LABEL_1187:
                            v777 += 4096LL;
                            v779 += 4096LL;
                            if ( v779 == v778 )
                            {
                              __writecr8(v780);
                              goto LABEL_1192;
                            }
                          }
                          __writecr8(v780);
                          v143 = (__int64)v2619;
                          v775 = *((_QWORD *)v2619 + 1);
                        }
                      }
                      if ( !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *(int *)v143;
                        *(_QWORD *)(v99 + 2328) = v775;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                      }
                    }
LABEL_1192:
                    v247 = 16 * v2619[4];
LABEL_385:
                    *(_DWORD *)(v99 + 2088) += v247;
                    goto LABEL_212;
                  }
                }
                __writecr8(v765);
                v143 = (__int64)v2619;
              }
            }
            v772 = *(_DWORD *)(v99 + 2296);
            j = 0LL;
            if ( !v772 )
            {
              *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v759 ^ (unsigned __int64)*(unsigned int *)(v143 + 20);
              v772 = *(_DWORD *)(v99 + 2296);
            }
            v773 = *(_QWORD *)(v143 + 8);
            if ( !v772 )
            {
              *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v99 + 2320) = *(int *)v143;
              *(_QWORD *)(v99 + 2328) = v773;
              *(_DWORD *)(v99 + 2296) = 1;
              __b8(v99, 0LL);
            }
            goto LABEL_1163;
          }
          switch ( v150 )
          {
            case 15:
              if ( *(_DWORD *)(v99 + 2392) == 11 )
              {
                *(_DWORD *)(v99 + 2088) += 256;
                v740 = *(_QWORD *)(v99 + 1416);
                v741 = (*(__int64 (__fastcall **)(__int64, __int64))(v99 + 728))(v740, 1LL);
                if ( v741 )
                {
                  v742 = (*(__int64 (__fastcall **)(__int64))(v99 + 736))(v741);
                  v743 = *(_QWORD *)(v143 + 24);
                  if ( v743 )
                  {
                    if ( v743 != v742 && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v143;
                      *(_QWORD *)(v99 + 2328) = v742;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                  }
                  else
                  {
                    v744 = *(_QWORD *)(v99 + 2424);
                    if ( (!*(_DWORD *)(v99 + 2420) || v742 < v744 || v742 > v744 + *(unsigned int *)(v99 + 2420) - 1LL)
                      && !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v143;
                      *(_QWORD *)(v99 + 2328) = v742;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                    *(_QWORD *)(v143 + 24) = v742;
                  }
                  (*(void (__fastcall **)(__int64, __int64))(v99 + 744))(v740, v741);
                }
              }
              goto LABEL_212;
            case 21:
              v734 = *(_DWORD *)(v143 + 40);
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v99 + 416))(v2913, *(unsigned int *)(v143 + 44));
              v735 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v99 + 464))(v2913, v2914);
              if ( v2964 == 38 )
              {
                __asm { xgetbv }
                v737 = v735 | (v736 << 32);
              }
              else if ( v734 )
              {
                v737 = __readcr4();
              }
              else
              {
                v737 = __readcr0();
              }
              (*(void (__fastcall **)(_BYTE *))(v99 + 408))(v2914);
              j = 0LL;
              v738 = *(_QWORD *)(v143 + 32);
              v100 = v737 & *(_QWORD *)(v143 + 24);
              if ( v100 == v738 )
                goto LABEL_213;
              v739 = *(_QWORD *)(v143 + 40);
              if ( *(_DWORD *)(v99 + 2296) )
                goto LABEL_213;
              *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v100 ^ v738;
              if ( *(_DWORD *)(v99 + 2296) )
                goto LABEL_213;
              *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v99 + 2320) = *(int *)v143;
              *(_QWORD *)(v99 + 2328) = v739;
              goto LABEL_266;
            case 24:
              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 && (*(_DWORD *)(v99 + 2452) & 0x1000) == 0 )
              {
                v383 = __rdtsc();
                v384 = (__ROR8__(v383, 3) ^ v383) * (unsigned __int128)0x7010008004002001uLL;
                v2937 = *((_QWORD *)&v384 + 1);
                LODWORD(v383) = v384 ^ DWORD2(v384);
                *(_QWORD *)&v384 = 5 * (((unsigned __int64)v384 ^ *((_QWORD *)&v384 + 1)) / 5);
                v144 = 1LL;
                *(_DWORD *)(v99 + 2084) = v383 - v384;
              }
LABEL_588:
              v385 = *(_DWORD *)(v99 + 2084);
              if ( !v385 )
              {
                v2733 = 0LL;
                v726 = (char *)v143;
                LODWORD(v143) = 0;
                for ( i19 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v99 + 768))(&v2733, v144);
                      i19;
                      i19 = (*(__int64 (__fastcall **)(__int64 *))(v99 + 768))(&v2733) )
                {
                  LODWORD(v143) = v143 + 1;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v99 + 520))(i19, v2807) )
                  {
                    if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                    {
                      v728 = *(_QWORD **)(v99 + 2688);
                      v729 = 48;
                      v730 = 6LL;
                      do
                      {
                        v729 -= 8;
                        *v728 = *(_QWORD *)v726;
                        v726 += 8;
                        ++v728;
                        --v730;
                      }
                      while ( v730 );
                      if ( v729 )
                      {
                        do
                        {
                          v731 = *v726++;
                          *(_BYTE *)v728 = v731;
                          v728 = (_QWORD *)((char *)v728 + 1);
                          --v729;
                        }
                        while ( v729 );
                        v99 = (unsigned __int64)v2621;
                      }
                      v726 = *(char **)(v99 + 2688);
                    }
                    *((_QWORD *)v726 + 3) = i19;
                    v732 = *(_QWORD *)(v99 + 1424);
                    *(_QWORD *)v732 = v726;
                    *(_DWORD *)(v732 + 16) = 48;
                    v733 = *(_QWORD *)(v99 + 1424);
                    *(_QWORD *)(v733 + 8) = i19;
                    *(_DWORD *)(v733 + 20) = 4096;
                    if ( !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v726 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v726;
                      *(_QWORD *)(v99 + 2328) = 3LL;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                  }
                }
                goto LABEL_1100;
              }
              v386 = v385 - 1;
              if ( !v386 )
              {
                v717 = (char *)v143;
                v2732 = 0LL;
                LODWORD(v143) = 0;
                v718 = KeGetCurrentIrql();
                __writecr8(0xCuLL);
                for ( i20 = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64))(v99 + 776))(&v2732, v144);
                      i20;
                      i20 = (*(__int64 (__fastcall **)(__int64 *))(v99 + 776))(&v2732) )
                {
                  LODWORD(v143) = v143 + 1;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v99 + 520))(i20, v2806) )
                  {
                    if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                    {
                      v720 = *(_QWORD **)(v99 + 2688);
                      v721 = 48;
                      v722 = 6LL;
                      do
                      {
                        v721 -= 8;
                        *v720 = *(_QWORD *)v717;
                        v717 += 8;
                        ++v720;
                        --v722;
                      }
                      while ( v722 );
                      if ( v721 )
                      {
                        do
                        {
                          v723 = *v717++;
                          *(_BYTE *)v720 = v723;
                          v720 = (_QWORD *)((char *)v720 + 1);
                          --v721;
                        }
                        while ( v721 );
                        v99 = (unsigned __int64)v2621;
                      }
                      v717 = *(char **)(v99 + 2688);
                    }
                    *((_QWORD *)v717 + 3) = i20;
                    v724 = *(_QWORD *)(v99 + 1424);
                    *(_QWORD *)v724 = v717;
                    *(_DWORD *)(v724 + 16) = 48;
                    v725 = *(_QWORD *)(v99 + 1424);
                    *(_QWORD *)(v725 + 8) = i20;
                    *(_DWORD *)(v725 + 20) = 4096;
                    if ( !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v717 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v717;
                      *(_QWORD *)(v99 + 2328) = 4LL;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                  }
                }
                __writecr8(v718);
                goto LABEL_1100;
              }
              v387 = v386 - 1;
              if ( !v387 )
              {
                v705 = (char *)v143;
                v2643 = 0;
                v706 = 0LL;
                v707 = 0;
                v708 = 0;
                while ( 1 )
                {
                  v2668 = 0;
                  while ( 1 )
                  {
                    do
                    {
                      if ( !(*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(v99 + 760))(v708, &v2668, &v2706) )
                        goto LABEL_1073;
                      v709 = (*(__int64 (__fastcall **)(__int64))(v99 + 728))(v2706);
                    }
                    while ( !v709 );
                    v710 = *(__int64 (__fastcall **)(__int64))(v99 + 736);
                    v2643 = v707 + 1;
                    v711 = v710(v709);
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v99 + 520))(v711, v2805) )
                      break;
                    (*(void (__fastcall **)(__int64, __int64))(v99 + 744))(v2706, v709);
                    v707 = v2643;
                  }
                  if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                  {
                    v712 = *(_QWORD **)(v99 + 2688);
                    v713 = 48;
                    v100 = 6LL;
                    do
                    {
                      v713 -= 8;
                      *v712 = *(_QWORD *)v705;
                      v705 += 8;
                      ++v712;
                      --v100;
                    }
                    while ( v100 );
                    if ( v713 )
                    {
                      do
                      {
                        v714 = *v705++;
                        *(_BYTE *)v712 = v714;
                        v712 = (_QWORD *)((char *)v712 + 1);
                        --v713;
                      }
                      while ( v713 );
                      v99 = (unsigned __int64)v2621;
                    }
                    v705 = *(char **)(v99 + 2688);
                  }
                  *((_QWORD *)v705 + 3) = v711;
                  v715 = *(_QWORD *)(v99 + 1424);
                  *(_QWORD *)v715 = v705;
                  *(_DWORD *)(v715 + 16) = 48;
                  v716 = *(_QWORD *)(v99 + 1424);
                  *(_QWORD *)(v716 + 8) = v711;
                  *(_DWORD *)(v716 + 20) = 4096;
                  if ( !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = v705 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *(int *)v705;
                    *(_QWORD *)(v99 + 2328) = v706;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
LABEL_1073:
                  v707 = v2643;
                  v144 = 1LL;
                  ++v708;
                  ++v706;
                  if ( v708 >= 3 )
                  {
                    LODWORD(v143) = v2643;
                    goto LABEL_1101;
                  }
                }
              }
              v388 = v387 - 1;
              if ( v388 )
              {
                v389 = v388 - 1;
                if ( v389 )
                {
                  if ( v389 == 1 )
                  {
                    v390 = (char *)v143;
                    v3011 = -1;
                    LODWORD(v143) = 0;
                    v391 = 0;
                    v392 = 0LL;
                    do
                    {
                      v2730 = 0LL;
                      while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v99 + 1072))(
                                v391,
                                &v2730,
                                &v3011,
                                &v2686) )
                      {
                        LODWORD(v143) = v143 + 1;
                        if ( !(*(__int64 (__fastcall **)(__int64, char *))(v99 + 520))(v2686, v2938) )
                        {
                          if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                          {
                            v393 = *(_QWORD **)(v99 + 2688);
                            v394 = 48;
                            v395 = 6LL;
                            do
                            {
                              v394 -= 8;
                              *v393 = *(_QWORD *)v390;
                              v390 += 8;
                              ++v393;
                              --v395;
                            }
                            while ( v395 );
                            if ( v394 )
                            {
                              do
                              {
                                v396 = *v390++;
                                *(_BYTE *)v393 = v396;
                                v393 = (_QWORD *)((char *)v393 + 1);
                                --v394;
                              }
                              while ( v394 );
                              v99 = (unsigned __int64)v2621;
                            }
                            v390 = *(char **)(v99 + 2688);
                          }
                          *((_QWORD *)v390 + 3) = v2686;
                          v397 = *(_QWORD *)(v99 + 1424);
                          *(_QWORD *)v397 = v390;
                          *(_DWORD *)(v397 + 16) = 48;
                          v398 = *(_QWORD *)(v99 + 1424);
                          *(_QWORD *)(v398 + 8) = v2686;
                          *(_DWORD *)(v398 + 20) = 4096;
                          if ( !*(_DWORD *)(v99 + 2296) )
                          {
                            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v99 + 2312) = v390 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v99 + 2320) = *(int *)v390;
                            *(_QWORD *)(v99 + 2328) = v392;
                            *(_DWORD *)(v99 + 2296) = 1;
                            __b8(v99, 0LL);
                          }
                        }
                      }
                      v144 = 1LL;
                      ++v391;
                      ++v392;
                    }
                    while ( v391 < 3 );
                    goto LABEL_1101;
                  }
                  *(_DWORD *)(v99 + 2084) = 0;
                  goto LABEL_1104;
                }
                LODWORD(v143) = 0;
                v2643 = 0;
                v399 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(v99 + 792))(0LL, v144);
                if ( v399 )
                {
                  v400 = (char *)v2619;
                  do
                  {
                    v2729 = 0LL;
                    v401 = v400;
                    v402 = 1;
                    v403 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v99 + 784))(v399, &v2729);
                    if ( v403 )
                    {
                      do
                      {
                        ++v402;
                        if ( !(*(__int64 (__fastcall **)(__int64, char *))(v99 + 520))(v403, v2939) )
                        {
                          if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                          {
                            v404 = *(_QWORD **)(v99 + 2688);
                            v405 = 48;
                            v406 = 6LL;
                            do
                            {
                              v405 -= 8;
                              *v404 = *(_QWORD *)v401;
                              v401 += 8;
                              ++v404;
                              --v406;
                            }
                            while ( v406 );
                            for ( ; v405; --v405 )
                            {
                              v407 = *v401++;
                              *(_BYTE *)v404 = v407;
                              v404 = (_QWORD *)((char *)v404 + 1);
                            }
                            v401 = *(char **)(v99 + 2688);
                          }
                          *((_QWORD *)v401 + 3) = v403;
                          *((_QWORD *)v401 + 4) = v399;
                          v408 = *(_QWORD *)(v99 + 1424);
                          *(_QWORD *)v408 = v401;
                          *(_DWORD *)(v408 + 16) = 48;
                          v409 = *(_QWORD *)(v99 + 1424);
                          *(_QWORD *)(v409 + 8) = v403;
                          *(_DWORD *)(v409 + 20) = 4096;
                          if ( !*(_DWORD *)(v99 + 2296) )
                          {
                            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v99 + 2312) = v401 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v99 + 2320) = *(int *)v401;
                            *(_QWORD *)(v99 + 2328) = 6LL;
                            *(_DWORD *)(v99 + 2296) = 1;
                            __b8(v99, 0LL);
                          }
                        }
                        v403 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v99 + 784))(v399, &v2729);
                      }
                      while ( v403 );
                      LODWORD(v143) = v2643;
                      v400 = (char *)v2619;
                    }
                    v410 = *(__int64 (__fastcall **)(__int64))(v99 + 792);
                    LODWORD(v143) = v402 + v143;
                    v2643 = v143;
                    v399 = v410(v399);
                  }
                  while ( v399 );
                }
LABEL_1100:
                v144 = 1LL;
                goto LABEL_1101;
              }
              LODWORD(v143) = 0;
              v411 = *(_QWORD **)(v99 + 1264);
              v412 = (_BYTE *)v99;
              v2659 = (_BYTE *)v99;
              v413 = (_DWORD *)*v411;
              v2636 = (_DWORD *)*v411;
              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
                goto LABEL_1101;
              v414 = v2619;
              v415 = (_DWORD *)*((_QWORD *)v2619 + 5);
              if ( v415 )
              {
                v144 = 1LL;
                v143 = 1LL;
                if ( v413 != v415 )
                {
                  *((_QWORD *)v2619 + 3) = v413;
                  v416 = *(_QWORD *)(v99 + 1424);
                  *(_QWORD *)v416 = v414;
                  *(_DWORD *)(v416 + 16) = 48;
                  v417 = *(_QWORD *)(v99 + 1424);
                  *(_QWORD *)(v417 + 8) = v413;
                  *(_DWORD *)(v417 + 20) = 4096;
                  if ( !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v414 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v414;
                    *(_QWORD *)(v99 + 2328) = 5LL;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                    goto LABEL_630;
                  }
                }
                goto LABEL_1101;
              }
              if ( !v413 )
                goto LABEL_1100;
              v418 = *(__int64 (__fastcall **)(_DWORD *, char *))(v99 + 512);
              v2654 = (_BYTE *)v99;
              v2643 = 1;
              v419 = v418(v413, v2928);
              v420 = v2929;
              v421 = v2930;
              v2628 = (char *)v419;
              v2973 = v2930;
              v2642 = v2930;
              BugCheckParameter2 = v2929;
              if ( !v2929 )
              {
                v422 = -1073741701;
                goto LABEL_1054;
              }
              v2678 = 0LL;
              v423 = 4;
              v424 = &v2679;
              v425 = 0LL;
              do
              {
                *(_BYTE *)v424 = 0;
                v424 = (int *)((char *)v424 + 1);
                --v423;
              }
              while ( v423 );
              v426 = 0;
              if ( *(_DWORD *)(v99 + 2060) )
              {
                LODWORD(v425) = v2679;
                LODWORD(v130) = HIDWORD(v2678);
                v427 = v2678;
                while ( 1 )
                {
                  v428 = v99;
                  if ( *(_QWORD *)(v99 + 2680) )
                    v428 = *(_QWORD *)(v99 + 2680);
                  v2620 = v428;
                  v429 = 0;
                  v430 = (char **)(v428 + *(unsigned int *)(v428 + 2056));
                  if ( v427 && (unsigned int)v130 <= v426 )
                  {
                    v429 = v130;
                    v430 = (char **)(v428 + (unsigned int)v425);
                  }
                  if ( v429 != v426 )
                    break;
LABEL_667:
                  LODWORD(v2678) = 1;
                  v425 = (unsigned int)((_DWORD)v430 - v428);
                  HIDWORD(v2678) = v429;
                  v2679 = (_DWORD)v430 - v428;
                  v427 = 1;
                  v438 = *(int *)v430;
                  v130 = v429;
                  if ( (unsigned int)v438 <= 0x2B )
                  {
                    v439 = 0x80000001002LL;
                    if ( _bittest64(&v439, v438) )
                    {
                      if ( v430[1] == v2628 && *((_DWORD *)v430 + 4) == v421 )
                        goto LABEL_675;
                    }
                  }
                  if ( (unsigned int)(v438 - 33) <= 1 && v430[4] == (char *)v420 )
                    goto LABEL_675;
                  if ( ++v426 >= *(_DWORD *)(v99 + 2060) )
                    goto LABEL_674;
                }
                v431 = v426 - v429;
                v429 = v426;
                while ( 2 )
                {
                  v432 = *(_DWORD *)v430;
                  if ( *(int *)v430 > 12 )
                  {
                    if ( v432 == 28 )
                    {
                      v437 = *((unsigned __int16 *)v430 + 20);
                      goto LABEL_664;
                    }
                    if ( v432 == 30 )
                    {
                      v436 = (((*((_DWORD *)v430 + 9) != 0 ? *((_DWORD *)v430 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                           + 24 * (*((unsigned __int16 *)v430 + 20) + 2);
                      goto LABEL_665;
                    }
                    if ( v432 <= 32 )
                      goto LABEL_661;
                    if ( v432 <= 34 )
                    {
                      v436 = 20
                           * (unsigned int)((((_DWORD)v430[4] & 0xFFF)
                                           + (unsigned __int64)*((unsigned int *)v430 + 10)
                                           + 4095) >> 12)
                           + 48;
                      goto LABEL_665;
                    }
                    if ( v432 != 43 )
                      goto LABEL_661;
                  }
                  else if ( v432 != 12 )
                  {
                    v433 = v432 - 1;
                    if ( v433 )
                    {
                      v434 = v433 - 6;
                      if ( !v434 )
                      {
                        v436 = (unsigned int)(24 * (*((_DWORD *)v430 + 6) + 2));
                        goto LABEL_665;
                      }
                      v435 = v434 - 1;
                      if ( v435 )
                      {
                        if ( v435 == 2 )
                        {
                          v436 = (unsigned int)(16 * (*((_DWORD *)v430 + 7) + 3));
                          goto LABEL_665;
                        }
LABEL_661:
                        v436 = 48LL;
LABEL_665:
                        v430 = (char **)((char *)v430 + v436);
                        if ( !--v431 )
                        {
                          v99 = (unsigned __int64)v2621;
                          LODWORD(v428) = v2620;
                          v421 = v2973;
                          v420 = BugCheckParameter2;
                          goto LABEL_667;
                        }
                        continue;
                      }
                      v437 = *((unsigned __int16 *)v430 + 16);
LABEL_664:
                      v436 = (v437 + 55) & 0xFFFFFFF8;
                      goto LABEL_665;
                    }
                  }
                  break;
                }
                v436 = 4 * (*((_DWORD *)v430 + 4) / 0xCu) + 48;
                goto LABEL_665;
              }
LABEL_674:
              v430 = 0LL;
LABEL_675:
              v413 = v2636;
              v2664 = v430;
              if ( v430 )
              {
                v422 = -1073741554;
                goto LABEL_1054;
              }
              v440 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD, unsigned __int64))(v99 + 680))(
                       v2636,
                       v425,
                       0LL,
                       v130);
              v207 = (*(_DWORD *)(v99 + 2448) & 0x40000000) == 0;
              v442 = v440;
              LODWORD(v2638) = v440;
              v2626 = v2642;
              if ( !v207 )
              {
                v443 = pg_unknown13(&v2659, v420, 9LL);
                v412 = v2659;
LABEL_1053:
                v422 = v443;
                goto LABEL_1054;
              }
              v2779 = 0LL;
              v2721[4] = 0;
              LOBYTE(v441) = 1;
              v444 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, unsigned int *))(v99 + 496))(
                       v420,
                       v441,
                       0LL,
                       &v2642);
              v445 = v444;
              v2777[1] = v444;
              LOBYTE(v445) = 1;
              v2642 &= -(v444 != 0);
              v446 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v99 + 496);
              v2721[1] = v2642;
              v447 = v446(v420, v445, 12LL, &v2642);
              v448 = v447;
              v2627 = (char *)v447;
              v2777[2] = v447;
              LOBYTE(v448) = 1;
              v2642 &= -(v447 != 0);
              v449 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned int *))(v99 + 496);
              v2622 = v2642;
              v2721[2] = v2642;
              v2778 = v449(v420, v448, 10LL, &v2642);
              v2642 &= -(v2778 != 0);
              v450 = *(__int64 (__fastcall **)(ULONG_PTR))(v99 + 504);
              v2721[3] = v2642;
              v451 = v450(v420);
              if ( !v451 )
                goto LABEL_680;
              v452 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v99 + 1176))(v420, &v2754);
              v453 = *(_DWORD *)(v99 + 2340);
              v2780 = v452;
              v2721[5] = v2754;
              v2721[0] = *(_DWORD *)(v451 + 84);
              LODWORD(v452) = v442;
              v454 = *(unsigned int *)(v99 + 2020);
              v2777[0] = v420;
              v455 = (_DWORD)v452 != 0 ? 0xB : 0;
              v456 = v454 + 288;
              v2974 = v455;
              if ( (unsigned int)(v454 + 288) <= *(_DWORD *)(v99 + 2588) )
              {
                v457 = v99;
                v2620 = v99;
                *(_DWORD *)(v99 + 2020) = v456;
                goto LABEL_702;
              }
              v457 = pg_unknown7((_DWORD *)v99, v456, v453);
              v2620 = v457;
              v458 = 0LL;
              if ( !v457 )
                goto LABEL_699;
              v459 = *(_DWORD *)(v99 + 2448);
              if ( (v459 & 4) == 0 )
              {
                v460 = *(_DWORD *)(v99 + 2020);
                v461 = *(_QWORD *)(v99 + 1992);
                v462 = (v459 & 0x20000000) != 0;
                v463 = (_QWORD *)v99;
                v464 = v462 ? *(_DWORD *)(v99 + 2340) : 0;
                if ( v460 >= 8 )
                {
                  v465 = (unsigned __int64)v460 >> 3;
                  do
                  {
                    *v463 = 0LL;
                    v460 -= 8;
                    ++v463;
                    --v465;
                  }
                  while ( v465 );
                }
                for ( ; v460; --v460 )
                {
                  *(_BYTE *)v463 = 0;
                  v463 = (_QWORD *)((char *)v463 + 1);
                }
                v466 = *(_DWORD *)(v457 + 2340);
                *(_DWORD *)(v457 + 2340) = v464;
                if ( v464 == 3 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(v457 + 872))(v461, 0LL);
                }
                else
                {
                  v467 = 0;
                  if ( (*(_DWORD *)(v457 + 2448) & 0x10000000) == 0 )
                    v467 = v464;
                  if ( v467 )
                    (*(void (__fastcall **)(__int64, _QWORD))(v457 + 552))(v461 - 8, *(_QWORD *)(v461 - 8));
                  else
                    (*(void (__fastcall **)(__int64, _QWORD))(v457 + 256))(v461, 0LL);
                }
                *(_DWORD *)(v457 + 2340) = v466;
              }
              *(_DWORD *)(v457 + 2448) &= ~4u;
              v455 = v2974;
LABEL_702:
              v468 = v457 + v454;
              *(_DWORD *)(v457 + 2060) += 6;
              v469 = v2777;
              v2731 = v457 + v454;
              v470 = v2721;
              v2664 = (_DWORD *)(v457 + v454);
              v2625 = 6LL;
              do
              {
                v471 = *v470;
                v472 = 6LL;
                v473 = (_QWORD *)*v469;
                v474 = 48;
                v2639 = *v470;
                v475 = (_QWORD *)v468;
                do
                {
                  *v475 = 0LL;
                  v474 -= 8;
                  ++v475;
                  --v472;
                }
                while ( v472 );
                for ( ; v474; --v474 )
                {
                  *(_BYTE *)v475 = 0;
                  v475 = (_QWORD *)((char *)v475 + 1);
                }
                *(_DWORD *)v468 = v455;
                *(_QWORD *)(v468 + 8) = v473;
                v476 = v473;
                *(_DWORD *)(v468 + 16) = v471;
                v477 = (const char *)v473;
                *(_DWORD *)(v457 + 2088) += v471;
                v478 = *(_DWORD *)(v457 + 2068);
                v479 = *(_QWORD *)(v457 + 2072);
                if ( v473 < (_QWORD *)((char *)v473 + v471) )
                {
                  do
                  {
                    _mm_prefetch(v477, 0);
                    v477 += 64;
                  }
                  while ( v477 < (const char *)v473 + v471 );
                }
                v480 = *(_QWORD *)(v457 + 2072);
                v481 = (unsigned int)v471 >> 7;
                if ( (unsigned int)v471 >> 7 )
                {
                  do
                  {
                    v482 = 8LL;
                    do
                    {
                      v483 = v480 ^ *v476;
                      v484 = v476[1];
                      v476 += 2;
                      v480 = __ROL8__(__ROL8__(v483, v478) ^ v484, v478);
                      --v482;
                    }
                    while ( v482 );
                    v485 = __ROL8__(v479 ^ ((char *)v476 - (char *)v473), 17) ^ v479 ^ ((char *)v476 - (char *)v473);
                    v2940 = (v485 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v478 = ((unsigned __int8)v485 ^ (unsigned __int8)(v2940 ^ v478)) & 0x3F;
                    if ( !v478 )
                      LOBYTE(v478) = 1;
                    --v481;
                  }
                  while ( v481 );
                  v457 = v2620;
                  LODWORD(v471) = v2639;
                }
                v486 = v471 & 0x7F;
                if ( v486 >= 8 )
                {
                  v487 = (unsigned __int64)(v471 & 0x7F) >> 3;
                  do
                  {
                    v480 = __ROL8__(*v476++ ^ v480, v478);
                    v486 -= 8;
                    --v487;
                  }
                  while ( v487 );
                }
                if ( v486 )
                {
                  do
                  {
                    v488 = *(unsigned __int8 *)v476;
                    v476 = (_QWORD *)((char *)v476 + 1);
                    v480 = __ROL8__(v488 ^ v480, v478);
                    --v486;
                  }
                  while ( v486 );
                  v457 = v2620;
                }
                for ( i21 = v480 >> 31; i21; i21 >>= 31 )
                  LODWORD(v480) = i21 ^ v480;
                v455 = v2974;
                *(_DWORD *)(v468 + 20) = v480 & 0x7FFFFFFF;
                ++v469;
                *(_DWORD *)(v457 + 2088) += v471;
                v468 = v2731 + 48;
                ++v470;
                v207 = v2625-- == 1;
                v2731 += 48LL;
              }
              while ( !v207 );
              v490 = v2664;
              v491 = BugCheckParameter2;
              v99 = (unsigned __int64)v2621;
              v492 = (int)v2638;
              *v2664 = 44;
              *((_QWORD *)v490 + 3) = v491;
              if ( (*(_DWORD *)(v457 + 2448) & 0x10200000) != 0 )
              {
LABEL_731:
                if ( !v492 )
                  goto LABEL_733;
              }
              else if ( !v492 )
              {
                if ( (*(_DWORD *)(v457 + 2452) & 0x8000) != 0 )
                {
                  v490[8] |= 1u;
                  if ( (unsigned int)pg_unknown9(v457, v491) )
                  {
                    v490[8] |= 4u;
                    goto LABEL_731;
                  }
                }
LABEL_733:
                v412 = (_BYTE *)v457;
                v2654 = (_BYTE *)v457;
                v2659 = (_BYTE *)v457;
                v422 = pg_unknown10(
                         (unsigned int)&v2654,
                         (_DWORD)v2628,
                         v2626,
                         v491,
                         v492,
                         9,
                         (__int64)&v2667,
                         (__int64)v2704);
                if ( v422 < 0 )
                  goto LABEL_681;
                v412 = v2654;
                v493 = v2704[0] - v2667;
                v494 = (_QWORD *)(v491 + v2667);
                v2664 = &v2654[(_QWORD)v2664 - v457];
                v2659 = v2654;
                v495 = v2664 + 48;
                v496 = 48;
                v2620 = (__int64)(v2664 + 48);
                v497 = v2664 + 48;
                v498 = 6LL;
                do
                {
                  *v497 = 0LL;
                  v496 -= 8;
                  ++v497;
                  --v498;
                }
                while ( v498 );
                for ( ; v496; --v496 )
                {
                  *(_BYTE *)v497 = 0;
                  v497 = (_QWORD *)((char *)v497 + 1);
                }
                v499 = v494;
                *v495 = v2974;
                v500 = (const char *)v494;
                *((_QWORD *)v495 + 1) = v494;
                v495[4] = v493;
                *((_DWORD *)v412 + 522) += v493;
                v501 = *((_DWORD *)v412 + 517);
                v502 = *((_QWORD *)v412 + 259);
                v503 = (unsigned __int64)v494 + v493;
                if ( (unsigned __int64)v494 < v503 )
                {
                  do
                  {
                    _mm_prefetch(v500, 0);
                    v500 += 64;
                  }
                  while ( (unsigned __int64)v500 < v503 );
                }
                v504 = *((_QWORD *)v412 + 259);
                v505 = v493 >> 7;
                if ( v493 >> 7 )
                {
                  do
                  {
                    v506 = 8LL;
                    do
                    {
                      v507 = v499[1] ^ __ROL8__(*v499 ^ v504, v501);
                      v499 += 2;
                      v504 = __ROL8__(v507, v501);
                      --v506;
                    }
                    while ( v506 );
                    v508 = (__ROL8__(v502 ^ ((char *)v499 - (char *)v494), 17) ^ v502 ^ (unsigned __int64)((char *)v499 - (char *)v494))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2941 = *((_QWORD *)&v508 + 1);
                    v501 = ((unsigned __int8)v508 ^ (unsigned __int8)(BYTE8(v508) ^ v501)) & 0x3F;
                    if ( !v501 )
                      LOBYTE(v501) = 1;
                    --v505;
                  }
                  while ( v505 );
                  v99 = (unsigned __int64)v2621;
                  v495 = (_DWORD *)v2620;
                }
                v130 = v493 & 0x7F;
                if ( (unsigned int)v130 >= 8 )
                {
                  v509 = (unsigned __int64)(unsigned int)v130 >> 3;
                  do
                  {
                    v504 = __ROL8__(*v499++ ^ v504, v501);
                    v130 = (unsigned int)(v130 - 8);
                    --v509;
                  }
                  while ( v509 );
                }
                if ( (_DWORD)v130 )
                {
                  do
                  {
                    v510 = *(unsigned __int8 *)v499;
                    v499 = (_QWORD *)((char *)v499 + 1);
                    v504 = __ROL8__(v510 ^ v504, v501);
                    v130 = (unsigned int)(v130 - 1);
                  }
                  while ( (_DWORD)v130 );
                  v99 = (unsigned __int64)v2621;
                }
                v511 = v504 >> 31;
                v512 = 0;
                while ( v511 )
                {
                  v504 = (unsigned int)v511 ^ (unsigned int)v504;
                  v511 >>= 31;
                }
                v513 = (int)v2638;
                LODWORD(v504) = v504 & 0x7FFFFFFF;
                v495[5] = v504;
                v514 = (unsigned __int64)v2664;
                v2664[60] = 48;
                if ( *(_DWORD *)(v514 + 256) )
                {
                  LOBYTE(v512) = v513 != 0;
                  *(_DWORD *)(v514 + 264) = *(_DWORD *)(v514 + 264) & 0xFFFFFFFE | v512;
                }
                v2659 = v412;
                v2683 = v2664 + 24;
                v515 = (v513 != 0) + 13;
                if ( v2664 != (_DWORD *)-96LL )
                {
                  v530 = v2627;
                  v2664[24] = v515;
                  LODWORD(v531) = v2622;
                  goto LABEL_802;
                }
                v516 = *((unsigned int *)v412 + 505);
                v517 = v516 + 48;
                if ( (unsigned int)(v516 + 48) <= *((_DWORD *)v412 + 647) )
                {
                  v518 = (__int64)v412;
                  *((_DWORD *)v412 + 505) = v517;
                  goto LABEL_777;
                }
                v518 = pg_unknown7(v412, v517, *((_DWORD *)v412 + 585));
                v458 = 0LL;
                if ( !v518 )
                  goto LABEL_699;
                v519 = *((_DWORD *)v412 + 612);
                if ( (v519 & 4) == 0 )
                {
                  v520 = *((_DWORD *)v412 + 505);
                  v521 = *((_QWORD *)v412 + 249);
                  v522 = (v519 & 0x20000000) != 0 ? *((_DWORD *)v412 + 585) : 0;
                  if ( v520 >= 8 )
                  {
                    v523 = (unsigned __int64)v520 >> 3;
                    do
                    {
                      *(_QWORD *)v412 = 0LL;
                      v520 -= 8;
                      v412 += 8;
                      --v523;
                    }
                    while ( v523 );
                  }
                  for ( i22 = 0; v520; --v520 )
                    *v412++ = 0;
                  v525 = *(_DWORD *)(v518 + 2340);
                  *(_DWORD *)(v518 + 2340) = v522;
                  if ( v522 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v518 + 872))(v521);
                  }
                  else
                  {
                    if ( (*(_DWORD *)(v518 + 2448) & 0x10000000) == 0 )
                      i22 = v522;
                    if ( i22 )
                      (*(void (__fastcall **)(__int64, _QWORD))(v518 + 552))(v521 - 8, *(_QWORD *)(v521 - 8));
                    else
                      (*(void (__fastcall **)(__int64))(v518 + 256))(v521);
                  }
                  *(_DWORD *)(v518 + 2340) = v525;
                }
                *(_DWORD *)(v518 + 2448) &= ~4u;
LABEL_777:
                v526 = v518 + v516;
                ++*(_DWORD *)(v518 + 2060);
                v527 = (_QWORD *)v526;
                v2755 = (_DWORD *)v526;
                v528 = 48;
                v529 = 6LL;
                do
                {
                  *v527 = 0LL;
                  v528 -= 8;
                  ++v527;
                  --v529;
                }
                while ( v529 );
                for ( ; v528; --v528 )
                {
                  *(_BYTE *)v527 = 0;
                  v527 = (_QWORD *)((char *)v527 + 1);
                }
                v530 = v2627;
                *(_DWORD *)v526 = v515;
                v130 = (unsigned __int64)v530;
                v531 = v2622;
                *(_QWORD *)(v526 + 8) = v530;
                *(_DWORD *)(v526 + 16) = v531;
                *(_DWORD *)(v518 + 2088) += v531;
                v532 = *(_DWORD *)(v518 + 2068);
                v533 = *(_QWORD *)(v518 + 2072);
                if ( v530 < &v530[v531] )
                {
                  v534 = v530;
                  do
                  {
                    _mm_prefetch(v534, 0);
                    v534 += 64;
                  }
                  while ( v534 < &v530[v531] );
                }
                v504 = *(_QWORD *)(v518 + 2072);
                v535 = (unsigned int)v531 >> 7;
                if ( (unsigned int)v531 >> 7 )
                {
                  do
                  {
                    v536 = 8LL;
                    do
                    {
                      v537 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v504, v532);
                      v130 += 16LL;
                      v504 = __ROL8__(v537, v532);
                      --v536;
                    }
                    while ( v536 );
                    v538 = (__ROL8__(v533 ^ (v130 - (_QWORD)v530), 17) ^ v533 ^ (v130 - (unsigned __int64)v530))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v2942 = *((_QWORD *)&v538 + 1);
                    v532 = ((unsigned __int8)v538 ^ (unsigned __int8)(BYTE8(v538) ^ v532)) & 0x3F;
                    if ( !v532 )
                      LOBYTE(v532) = 1;
                    --v535;
                  }
                  while ( v535 );
                  v99 = (unsigned __int64)v2621;
                  LODWORD(v531) = v2622;
                }
                v514 = v531 & 0x7F;
                if ( (unsigned int)v514 >= 8 )
                {
                  v539 = (unsigned __int64)(v531 & 0x7F) >> 3;
                  do
                  {
                    v504 = __ROL8__(*(_QWORD *)v130 ^ v504, v532);
                    v130 += 8LL;
                    v514 = (unsigned int)(v514 - 8);
                    --v539;
                  }
                  while ( v539 );
                }
                if ( (_DWORD)v514 )
                {
                  do
                  {
                    v540 = *(unsigned __int8 *)v130++;
                    v504 = __ROL8__(v540 ^ v504, v532);
                    v514 = (unsigned int)(v514 - 1);
                  }
                  while ( (_DWORD)v514 );
                  v99 = (unsigned __int64)v2621;
                }
                for ( i23 = v504; ; v504 = (unsigned int)i23 ^ (unsigned int)v504 )
                {
                  i23 >>= 31;
                  if ( !i23 )
                    break;
                }
                LODWORD(v504) = v504 & 0x7FFFFFFF;
                v412 = (_BYTE *)v518;
                *(_DWORD *)(v526 + 20) = v504;
                v513 = (int)v2638;
                v2683 = v2755;
                *(_DWORD *)(v518 + 2088) += v531;
LABEL_802:
                if ( (*((_DWORD *)v412 + 612) & 0x40000000) != 0 && (_DWORD)v531 )
                  pg_unknown12(v412, v530, (unsigned int)v531, v2683 + 7);
                v542 = BugCheckParameter2;
                v2659 = v412;
                v2683[6] = 0;
                v2683[6] |= 1u;
                v543 = v2664;
                v2664[36] = 35;
                v543[46] = v543[46] & 0xFFFFFFFE | (v513 != 0);
                if ( v543[40] >= 0x94u )
                {
                  v544 = *((_QWORD *)v543 + 19);
                  v458 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, unsigned __int64, unsigned __int64))v412
                          + 63))(
                           v542,
                           v514,
                           v504,
                           v130);
                  if ( v458 )
                  {
                    v545 = *(unsigned int *)(v458 + 80);
                    v543[46] |= 2u;
                    v546 = v542 + v545;
                    v547 = *(_QWORD **)(v544 + 112);
                    if ( (unsigned __int64)v547 >= v542 && (unsigned __int64)v547 < v546 )
                    {
                      *((_QWORD *)v543 + 21) = *v547;
                      v543[46] |= 4u;
                    }
                    v548 = *(_QWORD **)(v544 + 120);
                    if ( (unsigned __int64)v548 >= v542 && (unsigned __int64)v548 < v546 )
                    {
                      *((_QWORD *)v543 + 22) = *v548;
                      v543[46] |= 8u;
                    }
                    goto LABEL_813;
                  }
LABEL_699:
                  v2654 = (_BYTE *)v458;
LABEL_700:
                  v422 = -1073741670;
                  goto LABEL_681;
                }
LABEL_813:
                v207 = (*((_DWORD *)v412 + 612) & 0x400000) == 0;
                v2654 = v412;
                if ( v207 )
                  goto LABEL_1052;
                v549 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, unsigned __int64, unsigned __int64))v412
                        + 63))(
                         v542,
                         v514,
                         v504,
                         v130);
                v2633 = v549;
                if ( !v549 )
                  goto LABEL_680;
                v550 = *(_WORD *)(v549 + 6);
                v2975 = v550;
                v130 = v2626 / 0xCuLL;
                v2627 = (char *)v130;
                if ( !v550 )
                {
                  if ( (*((_DWORD *)v412 + 612) & 0x200000) == 0 )
                  {
                    v2704[1] = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v542, 0LL, 0LL);
                  }
                  if ( !*((_DWORD *)v412 + 574) )
                  {
                    *((_QWORD *)v412 + 288) = v412 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v412 + 289) = 0LL;
                    *((_QWORD *)v412 + 290) = 271LL;
                    *((_QWORD *)v412 + 291) = v542;
                    *((_DWORD *)v412 + 574) = 1;
                    goto LABEL_819;
                  }
                  goto LABEL_680;
                }
                v551 = v2628;
                v2620 = v549 + *(unsigned __int16 *)(v549 + 20) + 24LL;
                v552 = v2620;
                v2623 = 12LL * (unsigned int)v130;
                v2635 = &v2628[v2623];
                v553 = &v2628[v2623];
                v554 = 0;
                v2622 = 0;
                v555 = (_DWORD *)v2620;
                v2625 = v2620;
                do
                {
                  v556 = v555[4];
                  v130 = (unsigned int)v555[3];
                  if ( v556 <= v555[2] )
                    v556 = v555[2];
                  v2639 = v555[3];
                  v557 = v130 + v556;
                  v2648 = v557;
                  if ( v554 )
                  {
                    if ( v557 < *(_DWORD *)(v552 + 40LL * (v554 - 1) + 12) )
                    {
                      if ( (*((_DWORD *)v412 + 612) & 0x200000) == 0 )
                      {
                        v2711 = -805294751;
                        KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, 1uLL, 0LL);
                      }
                      if ( !*((_DWORD *)v412 + 574) )
                        goto LABEL_854;
                      goto LABEL_680;
                    }
                    v554 = v2622;
                  }
                  if ( v551 != v553 )
                  {
                    do
                    {
                      v558 = *((_DWORD *)v551 + 1);
                      if ( *(_DWORD *)v551 >= v557 || v558 <= (unsigned int)v130 )
                        break;
                      if ( *(_DWORD *)v551 < (unsigned int)v130 || v558 > v557 )
                      {
                        if ( (*((_DWORD *)v412 + 612) & 0x200000) == 0 )
                        {
                          v2692[8] = -805294751;
                          KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, 2uLL, 0LL);
                        }
LABEL_856:
                        if ( !*((_DWORD *)v412 + 574) )
                        {
LABEL_854:
                          *((_QWORD *)v412 + 288) = v412 - 0x5C5FC0A76E374B18LL;
                          *((_QWORD *)v412 + 289) = 0LL;
                          v570 = BugCheckParameter2;
                          *((_QWORD *)v412 + 290) = 271LL;
                          *((_QWORD *)v412 + 291) = v570;
                          *((_DWORD *)v412 + 574) = 1;
LABEL_819:
                          __b8(v412, 0LL);
                        }
LABEL_680:
                        v422 = -1073741701;
LABEL_681:
                        v413 = v2636;
LABEL_1054:
                        v100 = 0x80000000LL;
                        v2621 = v412;
                        v704 = (int *)((char *)v2619 + (_QWORD)v412 - v99);
                        v99 = (unsigned __int64)v412;
                        v2619 = v704;
                        if ( (int)(v422 + 0x80000000) < 0 || v422 == -1073741554 )
                          *((_QWORD *)v704 + 5) = v413;
                        v143 = v2643;
LABEL_630:
                        v144 = v143;
LABEL_1101:
                        *(_DWORD *)(v99 + 2088) += (_DWORD)v143 << 12;
                        *(_DWORD *)(v99 + 2084) += v144;
                        if ( *(_DWORD *)(v99 + 2088) < *(_DWORD *)(v99 + 2092) )
                        {
                          v143 = (__int64)v2619;
                          v100 = 12LL;
                          goto LABEL_588;
                        }
LABEL_1104:
                        v2621 = (char *)v99;
LABEL_212:
                        j = 0LL;
                        goto LABEL_213;
                      }
                      v559 = *((unsigned int *)v551 + 2);
                      v2943 = v551;
                      if ( (v559 & 1) != 0 || (*(_BYTE *)(v559 + BugCheckParameter2) & 0x20) != 0 )
                      {
                        v560 = v555[4];
                        v561 = v555[3];
                        if ( v560 <= v555[2] )
                          v560 = v555[2];
                        v562 = v561 + v560;
                        v563 = (unsigned int *)(*((__int64 (__fastcall **)(char *, ULONG_PTR))v412 + 131))(
                                                 v551,
                                                 BugCheckParameter2);
                        v564 = v563;
                        if ( *v563 < v561 || v563[1] > v562 )
                        {
                          v565 = BugCheckParameter2;
                          if ( (*((_DWORD *)v412 + 612) & 0x200000) == 0 )
                          {
                            v2713 = -805294751;
                            KeBugCheckEx(
                              __ROR4__(-805306349, 92),
                              0xAuLL,
                              BugCheckParameter2,
                              ((_DWORD)v563 - (_DWORD)BugCheckParameter2) | 0x80000000,
                              0LL);
                          }
                          if ( !*((_DWORD *)v412 + 574) )
                          {
                            *((_QWORD *)v412 + 288) = v412 - 0x5C5FC0A76E374B18LL;
                            *((_QWORD *)v412 + 289) = 0LL;
                            *((_QWORD *)v412 + 290) = 271LL;
                            *((_QWORD *)v412 + 291) = v565;
                            *((_DWORD *)v412 + 574) = 1;
                            __b8(v412, 0LL);
                          }
                        }
                        v566 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v412
                                                + 132))(
                                                 v564,
                                                 BugCheckParameter2,
                                                 BugCheckParameter2 + *v564);
                        if ( *v566 < v561 || v566[1] > v562 )
                        {
                          v567 = BugCheckParameter2;
                          if ( (*((_DWORD *)v412 + 612) & 0x200000) == 0 )
                          {
                            v2712 = -805294751;
                            KeBugCheckEx(
                              __ROR4__(-805306349, 92),
                              0xAuLL,
                              BugCheckParameter2,
                              ((_DWORD)v566 - (_DWORD)BugCheckParameter2) | 0x80000000,
                              0LL);
                          }
                          if ( !*((_DWORD *)v412 + 574) )
                          {
                            *((_QWORD *)v412 + 288) = v412 - 0x5C5FC0A76E374B18LL;
                            *((_QWORD *)v412 + 289) = 0LL;
                            *((_QWORD *)v412 + 290) = 271LL;
                            *((_QWORD *)v412 + 291) = v567;
                            *((_DWORD *)v412 + 574) = 1;
                            __b8(v412, 0LL);
                          }
                        }
                        v557 = v2648;
                        v555 = (_DWORD *)v2625;
                        v130 = v2639;
                      }
                      v551 += 12;
                    }
                    while ( v551 != v2635 );
                    v554 = v2622;
                    v550 = v2975;
                    v552 = v2620;
                    v553 = v2635;
                  }
                  ++v554;
                  v555 += 10;
                  v2622 = v554;
                  v2625 = (__int64)v555;
                }
                while ( v554 < v550 );
                v130 = (unsigned __int64)v2627;
                v568 = v2633;
                v569 = v2623;
                if ( v551 != v553 )
                {
                  if ( (*((_DWORD *)v412 + 612) & 0x200000) == 0 )
                  {
                    v2714 = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, 3uLL, 0LL);
                  }
                  goto LABEL_856;
                }
                if ( (_DWORD)v2627 )
                  v571 = ((_DWORD)v2627 + 6) & 0xFFFFFFF8;
                else
                  v571 = 0;
                v572 = *((unsigned int *)v412 + 505);
                v573 = v571 + 24 * v550 + v572 + 48;
                if ( v573 <= *((_DWORD *)v412 + 647) )
                {
                  v574 = v412;
                  v2633 = (unsigned __int64)v412;
                  *((_DWORD *)v412 + 505) = v573;
                }
                else
                {
                  v2633 = pg_unknown7(v412, v573, *((_DWORD *)v412 + 585));
                  v574 = (_BYTE *)v2633;
                  if ( !v2633 )
                    goto LABEL_700;
                  v575 = *((_DWORD *)v412 + 612);
                  if ( (v575 & 4) == 0 )
                  {
                    v576 = *((_DWORD *)v412 + 505);
                    v577 = *((_QWORD *)v412 + 249);
                    v578 = (v575 & 0x20000000) != 0 ? *((_DWORD *)v412 + 585) : 0;
                    if ( v576 >= 8 )
                    {
                      v579 = (unsigned __int64)v576 >> 3;
                      do
                      {
                        *(_QWORD *)v412 = 0LL;
                        v576 -= 8;
                        v412 += 8;
                        --v579;
                      }
                      while ( v579 );
                    }
                    for ( i24 = 0; v576; --v576 )
                      *v412++ = 0;
                    v581 = *((_DWORD *)v574 + 585);
                    *((_DWORD *)v574 + 585) = v578;
                    if ( v578 == 3 )
                    {
                      (*((void (__fastcall **)(__int64))v574 + 109))(v577);
                    }
                    else
                    {
                      if ( (*((_DWORD *)v574 + 612) & 0x10000000) == 0 )
                        i24 = v578;
                      if ( i24 )
                        (*((void (__fastcall **)(__int64, _QWORD))v574 + 69))(v577 - 8, *(_QWORD *)(v577 - 8));
                      else
                        (*((void (__fastcall **)(__int64))v574 + 32))(v577);
                    }
                    *((_DWORD *)v574 + 585) = v581;
                  }
                  *((_DWORD *)v574 + 612) &= ~4u;
                  LODWORD(v130) = (_DWORD)v2627;
                  v550 = v2975;
                }
                v582 = &v574[v572];
                ++*((_DWORD *)v574 + 515);
                v583 = &v574[v572];
                v2762 = &v574[v572];
                v584 = 48;
                v585 = 6LL;
                do
                {
                  *v583 = 0LL;
                  v584 -= 8;
                  ++v583;
                  --v585;
                }
                while ( v585 );
                for ( ; v584; --v584 )
                {
                  *(_BYTE *)v583 = 0;
                  v583 = (_QWORD *)((char *)v583 + 1);
                }
                v586 = v2628;
                *(_DWORD *)v582 = 30;
                *((_QWORD *)v582 + 1) = v586;
                *((_DWORD *)v582 + 4) = 0;
                v587 = *((_QWORD *)v574 + 259);
                for ( i25 = v587; ; LODWORD(v587) = i25 ^ v587 )
                {
                  i25 >>= 31;
                  if ( !i25 )
                    break;
                }
                v412 = v574;
                *((_DWORD *)v582 + 5) = v587 & 0x7FFFFFFF;
                v2670 = v2762;
                v2654 = v574;
                *((_QWORD *)v2762 + 3) = BugCheckParameter2;
                *((_DWORD *)v2670 + 8) = *(_DWORD *)(v568 + 80);
                *((_DWORD *)v2670 + 9) = v2626;
                *((_WORD *)v2670 + 20) = v550;
                *((_WORD *)v2670 + 21) = *((_WORD *)v2670 + 21) & 0xFFFE | ((_DWORD)v2638 != 0);
                v2627 = v2670 + 48;
                if ( (_DWORD)v130 )
                  v589 = (unsigned int *)&v2670[(((unsigned int)(v130 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
                else
                  v589 = (unsigned int *)(v2670 + 48);
                v590 = *((unsigned __int16 *)v2670 + 20);
                v2625 = (__int64)v589;
                v207 = (_DWORD)v130 == 0;
                v591 = &v589[6 * v590];
                v130 = (unsigned __int64)v2628;
                v2623 = (__int64)v591;
                v592 = 12LL;
                if ( v207 )
                  v592 = v569;
                v593 = (unsigned int *)&v2628[v592];
                v2638 = v593;
                if ( v550 )
                {
                  v594 = v550;
                  v595 = v589 + 2;
                  do
                  {
                    v596 = 2LL;
                    do
                    {
                      *(v595 - 2) = 0;
                      *(v595 - 1) = 0;
                      *v595 = 0x80000000;
                      v595 += 3;
                      --v596;
                    }
                    while ( v596 );
                    --v594;
                  }
                  while ( v594 );
                  v99 = (unsigned __int64)v2621;
                }
                if ( v589 != v591 )
                {
                  v597 = (unsigned __int8 *)v2620;
                  while ( 1 )
                  {
                    v598 = 0;
                    if ( (*((_DWORD *)v597 + 9) & 0x2000000) != 0
                      || (v599 = *(_DWORD *)v597, *(_DWORD *)v597 == 1414090313) && *((_DWORD *)v597 + 1) == 1195525195
                      || v599 == 1162297680
                      && ((v600 = *((_WORD *)v597 + 2), v600 == 30839) || v600 == 29303 || v600 == 30583)
                      || v599 == 1095914053 && *((_WORD *)v597 + 2) == 16724 )
                    {
                      v598 = 1;
                    }
                    else
                    {
                      v601 = 7;
                      v602 = (unsigned __int8 *)*((_QWORD *)v574 + 294);
                      v603 = v597;
                      v2766 = (__int64 *)*((_QWORD *)v574 + 295);
                      v2767 = (unsigned __int8 *)*((_QWORD *)v574 + 296);
                      v2768 = (unsigned __int8 *)*((_QWORD *)v574 + 297);
                      v2765 = v602;
                      while ( 1 )
                      {
                        v604 = *v603++;
                        v605 = *v602++;
                        if ( v604 != v605 )
                          break;
                        if ( !--v601 )
                          goto LABEL_926;
                      }
                      v606 = v2766;
                      v607 = 8;
                      v608 = (__int64 *)v597;
                      do
                      {
                        v609 = *v608++;
                        v610 = *v606++;
                        if ( v609 != v610 )
                          goto LABEL_919;
                        v607 -= 8;
                      }
                      while ( v607 >= 8 );
                      if ( v607 )
                      {
                        while ( 1 )
                        {
                          v611 = *(unsigned __int8 *)v608;
                          v608 = (__int64 *)((char *)v608 + 1);
                          v612 = *(unsigned __int8 *)v606;
                          v606 = (__int64 *)((char *)v606 + 1);
                          if ( v611 != v612 )
                            break;
                          if ( !--v607 )
                            goto LABEL_926;
                        }
LABEL_919:
                        v613 = v2767;
                        v614 = 4;
                        v615 = v597;
                        while ( 1 )
                        {
                          v616 = *v615++;
                          v617 = *v613++;
                          if ( v616 != v617 )
                            break;
                          if ( !--v614 )
                            goto LABEL_926;
                        }
                        v618 = v2768;
                        v619 = 6;
                        v620 = v597;
                        while ( 1 )
                        {
                          v621 = *v620++;
                          v622 = *v618++;
                          if ( v621 != v622 )
                            break;
                          if ( !--v619 )
                            goto LABEL_926;
                        }
                      }
                      else
                      {
LABEL_926:
                        v598 = 1;
                      }
                      v130 = (unsigned __int64)v2628;
                    }
                    v623 = *((_DWORD *)v597 + 9);
                    if ( v623 < 0 )
                      v598 = 1;
                    v2976 = v598;
                    if ( v598 && *(_DWORD *)v597 == 1414090313 && *((_DWORD *)v597 + 1) == 1195525195 )
                    {
                      if ( (*((_DWORD *)v574 + 613) & 0x2000) != 0 )
                        v598 = 0;
                      v2976 = v598;
                    }
                    if ( (*((_DWORD *)v574 + 613) & 0x4000) != 0 )
                    {
                      v462 = (v623 & 0x20000000) != 0;
                      v624 = BugCheckParameter2;
                      if ( v462
                        && (BugCheckParameter2 == *((_QWORD *)v574 + 189)
                         || BugCheckParameter2 == *((_QWORD *)v574 + 190)) )
                      {
                        v598 = 1;
                        v2976 = 1;
                      }
                    }
                    else
                    {
                      v624 = BugCheckParameter2;
                    }
                    v625 = *((_DWORD *)v597 + 3);
                    v626 = *((_DWORD *)v597 + 4);
                    v627 = v2635;
                    v2622 = v625;
                    if ( v626 <= *(_DWORD *)(v2620 + 8) )
                      v626 = *(_DWORD *)(v2620 + 8);
                    v628 = v625 + v626;
                    v2639 = v628;
                    if ( (char *)v130 == v2635 )
                    {
                      v630 = 0;
                      v629 = 0;
                    }
                    else
                    {
                      v629 = *(_DWORD *)v130;
                      v630 = *(_DWORD *)(v130 + 4);
                    }
                    v2648 = v630;
                    v2626 = v625;
                    if ( (char *)v130 != v2635 && v629 > v625 && v630 <= v628 && !v598 )
                    {
                      *v589 = v625;
                      v631 = v2721;
                      v589[1] = v629;
                      v632 = v2777;
                      v633 = *v589;
                      v634 = v629 - v633;
                      v2626 = v629;
                      v635 = v624 + v633;
                      v636 = v624 + v633 + v629 - (unsigned int)v633;
                      for ( i26 = 0; i26 < 6; ++i26 )
                      {
                        if ( v635 < *v632 + *v631 && v636 > *v632 )
                        {
                          v627 = v2635;
                          v130 = (unsigned __int64)v2628;
                          goto LABEL_976;
                        }
                        ++v632;
                        ++v631;
                      }
                      v638 = v2633;
                      v639 = (_QWORD *)(v624 + v633);
                      v640 = (const char *)(v624 + v633);
                      *(_DWORD *)(v2633 + 2088) += v634;
                      v641 = *(_DWORD *)(v638 + 2068);
                      v642 = *(_QWORD *)(v638 + 2072);
                      if ( v635 < v636 )
                      {
                        do
                        {
                          _mm_prefetch(v640, 0);
                          v640 += 64;
                        }
                        while ( (unsigned __int64)v640 < v636 );
                      }
                      v643 = v642;
                      v644 = v634 >> 7;
                      if ( v634 >> 7 )
                      {
                        do
                        {
                          v645 = 8LL;
                          do
                          {
                            v646 = v643 ^ *v639;
                            v647 = v639[1];
                            v639 += 2;
                            v643 = __ROL8__(__ROL8__(v646, v641) ^ v647, v641);
                            --v645;
                          }
                          while ( v645 );
                          v648 = __ROL8__(v642 ^ ((unsigned __int64)v639 - v635), 17) ^ v642 ^ ((unsigned __int64)v639
                                                                                              - v635);
                          v2944 = (v648 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v641 = ((unsigned __int8)v648 ^ (unsigned __int8)(v2944 ^ v641)) & 0x3F;
                          if ( !v641 )
                            LOBYTE(v641) = 1;
                          --v644;
                        }
                        while ( v644 );
                        v99 = (unsigned __int64)v2621;
                      }
                      v649 = v634 & 0x7F;
                      if ( v649 >= 8 )
                      {
                        v650 = (unsigned __int64)v649 >> 3;
                        do
                        {
                          v643 = __ROL8__(*v639++ ^ v643, v641);
                          v649 -= 8;
                          --v650;
                        }
                        while ( v650 );
                      }
                      if ( v649 )
                      {
                        do
                        {
                          v651 = *(unsigned __int8 *)v639;
                          v639 = (_QWORD *)((char *)v639 + 1);
                          v643 = __ROL8__(v651 ^ v643, v641);
                          --v649;
                        }
                        while ( v649 );
                        v99 = (unsigned __int64)v2621;
                      }
                      for ( i27 = v643 >> 31; i27; i27 >>= 31 )
                        LODWORD(v643) = i27 ^ v643;
                      v628 = v2639;
                      v625 = v2622;
                      v593 = v2638;
                      v130 = (unsigned __int64)v2628;
                      *(_DWORD *)(v2625 + 8) = v643 & 0x7FFFFFFF;
                      v627 = v2635;
                    }
LABEL_976:
                    if ( v629 >= v625 && v2648 <= v628 && (char *)v130 != v627 )
                    {
                      v653 = v593[1];
                      if ( v653 <= v628 )
                      {
                        v654 = v2627;
                        do
                        {
                          if ( v593 == (unsigned int *)v627 )
                            break;
                          if ( v2976 )
                          {
                            v655 = 0x80;
                          }
                          else
                          {
                            v656 = *v593;
                            v657 = *(unsigned int *)(v130 + 4);
                            v658 = v2633;
                            v2626 = v656;
                            if ( v656 < (unsigned int)v657 )
                            {
                              if ( (*(_DWORD *)(v2633 + 2448) & 0x200000) == 0 )
                              {
                                v2715 = -805294751;
                                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, 6uLL, 0LL);
                              }
                              if ( !*(_DWORD *)(v2633 + 2296) )
                              {
                                v659 = v2633;
                                *(_QWORD *)(v2633 + 2304) = v2633 - 0x5C5FC0A76E374B18LL;
                                *(_QWORD *)(v658 + 2312) = 0LL;
                                v660 = BugCheckParameter2;
                                *(_QWORD *)(v658 + 2320) = 271LL;
                                *(_QWORD *)(v658 + 2328) = v660;
                                *(_DWORD *)(v658 + 2296) = 1;
                                __b8(v659, 0LL);
                                v658 = v2633;
                              }
                            }
                            v661 = v2721;
                            v662 = BugCheckParameter2 + v657;
                            v663 = v2777;
                            v664 = v656 - v657;
                            v665 = BugCheckParameter2 + v657 + v656 - (unsigned int)v657;
                            for ( i28 = 0; i28 < 6; ++i28 )
                            {
                              if ( v662 < *v663 + *v661 && v665 > *v663 )
                                goto LABEL_1012;
                              ++v661;
                              ++v663;
                            }
                            if ( v664 < 4 )
                            {
LABEL_1012:
                              v655 = 0x80;
                            }
                            else
                            {
                              *(_DWORD *)(v658 + 2088) += v664;
                              v667 = (const char *)v662;
                              v668 = *(_DWORD *)(v658 + 2068);
                              v669 = *(_QWORD *)(v658 + 2072);
                              v670 = (_QWORD *)v662;
                              if ( v662 < v665 )
                              {
                                do
                                {
                                  _mm_prefetch(v667, 0);
                                  v667 += 64;
                                }
                                while ( (unsigned __int64)v667 < v665 );
                              }
                              v671 = v669;
                              v672 = v664 >> 7;
                              if ( v664 >> 7 )
                              {
                                do
                                {
                                  v673 = 8LL;
                                  do
                                  {
                                    v674 = v671 ^ *v670;
                                    v675 = v670[1];
                                    v670 += 2;
                                    v671 = __ROL8__(__ROL8__(v674, v668) ^ v675, v668);
                                    --v673;
                                  }
                                  while ( v673 );
                                  v676 = __ROL8__(v669 ^ ((unsigned __int64)v670 - v662), 17) ^ v669 ^ ((unsigned __int64)v670 - v662);
                                  v2803 = (v676 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                  v668 = ((unsigned __int8)v676 ^ (unsigned __int8)(v2803 ^ v668)) & 0x3F;
                                  if ( !v668 )
                                    LOBYTE(v668) = 1;
                                  --v672;
                                }
                                while ( v672 );
                                v99 = (unsigned __int64)v2621;
                              }
                              v677 = v664 & 0x7F;
                              if ( v677 >= 8 )
                              {
                                v678 = (unsigned __int64)v677 >> 3;
                                do
                                {
                                  v671 = __ROL8__(*v670++ ^ v671, v668);
                                  v677 -= 8;
                                  --v678;
                                }
                                while ( v678 );
                              }
                              if ( v677 )
                              {
                                do
                                {
                                  v679 = *(unsigned __int8 *)v670;
                                  v670 = (_QWORD *)((char *)v670 + 1);
                                  v671 = __ROL8__(v679 ^ v671, v668);
                                  --v677;
                                }
                                while ( v677 );
                                v99 = (unsigned __int64)v2621;
                              }
                              for ( i29 = v671 >> 7; i29; i29 >>= 7 )
                                LOBYTE(v671) = i29 ^ v671;
                              v628 = v2639;
                              v655 = v671 & 0x7F;
                            }
                            v130 = (unsigned __int64)v2628;
                            v593 = v2638;
                            v654 = v2627;
                          }
                          *v654 = v655;
                          v130 += 12LL;
                          v593 += 3;
                          v2628 = (char *)v130;
                          v627 = v2635;
                          v654 = ++v2627;
                          v2638 = v593;
                          if ( v593 != (unsigned int *)v2635 )
                            v653 = v593[1];
                        }
                        while ( v653 <= v628 );
                      }
                    }
                    v681 = (unsigned int *)v2625;
                    if ( v2976 || v2626 == v628 )
                      goto LABEL_1043;
                    *(_DWORD *)(v2625 + 12) = v2626;
                    v682 = v2721;
                    v681[4] = v628;
                    v683 = v2777;
                    v684 = v681[3];
                    v685 = v628 - v684;
                    v686 = BugCheckParameter2 + v684;
                    v687 = v686 + v685;
                    for ( i30 = 0; i30 < 6; ++i30 )
                    {
                      if ( v686 < *v683 + *v682 && v687 > *v683 )
                      {
                        v130 = (unsigned __int64)v2628;
LABEL_1043:
                        v574 = (_BYTE *)v2633;
                        goto LABEL_1044;
                      }
                      ++v683;
                      ++v682;
                    }
                    v574 = (_BYTE *)v2633;
                    v689 = (_QWORD *)v686;
                    v690 = (const char *)v686;
                    *(_DWORD *)(v2633 + 2088) += v685;
                    v691 = *((_DWORD *)v574 + 517);
                    v692 = *((_QWORD *)v574 + 259);
                    if ( v686 < v687 )
                    {
                      do
                      {
                        _mm_prefetch(v690, 0);
                        v690 += 64;
                      }
                      while ( (unsigned __int64)v690 < v687 );
                    }
                    v693 = *((_QWORD *)v574 + 259);
                    v694 = v685 >> 7;
                    if ( v685 >> 7 )
                    {
                      do
                      {
                        v695 = 8LL;
                        do
                        {
                          v696 = v693 ^ *v689;
                          v697 = v689[1];
                          v689 += 2;
                          v693 = __ROL8__(__ROL8__(v696, v691) ^ v697, v691);
                          --v695;
                        }
                        while ( v695 );
                        v698 = __ROL8__(v692 ^ ((unsigned __int64)v689 - v686), 17) ^ v692 ^ ((unsigned __int64)v689
                                                                                            - v686);
                        v2804 = (v698 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v691 = ((unsigned __int8)v698 ^ (unsigned __int8)(v2804 ^ v691)) & 0x3F;
                        if ( !v691 )
                          LOBYTE(v691) = 1;
                        --v694;
                      }
                      while ( v694 );
                      v99 = (unsigned __int64)v2621;
                      v574 = (_BYTE *)v2633;
                    }
                    v699 = v685 & 0x7F;
                    if ( v699 >= 8 )
                    {
                      v700 = (unsigned __int64)v699 >> 3;
                      do
                      {
                        v693 = __ROL8__(*v689++ ^ v693, v691);
                        v699 -= 8;
                        --v700;
                      }
                      while ( v700 );
                    }
                    if ( v699 )
                    {
                      do
                      {
                        v701 = *(unsigned __int8 *)v689;
                        v689 = (_QWORD *)((char *)v689 + 1);
                        v693 = __ROL8__(v701 ^ v693, v691);
                        --v699;
                      }
                      while ( v699 );
                      v628 = v2639;
                    }
                    for ( i31 = v693; ; LODWORD(v693) = i31 ^ v693 )
                    {
                      i31 >>= 31;
                      if ( !i31 )
                        break;
                    }
                    v681 = (unsigned int *)v2625;
                    v130 = (unsigned __int64)v2628;
                    *(_DWORD *)(v2625 + 20) = v693 & 0x7FFFFFFF;
LABEL_1044:
                    v593 = v2638;
                    if ( (char *)v130 != v2635 && *(_DWORD *)v130 >= v2622 && *(_DWORD *)(v130 + 4) <= v628 )
                    {
                      if ( v2638 != (unsigned int *)v2635 )
                      {
                        v703 = v2627;
                        *v2627 = 0x80;
                        v2627 = (char *)v703 + 1;
                        v593 += 3;
                        v2638 = v593;
                      }
                      v130 += 12LL;
                      v2628 = (char *)v130;
                    }
                    v589 = v681 + 6;
                    v597 = (unsigned __int8 *)(v2620 + 40);
                    v2625 = (__int64)v589;
                    v2620 += 40LL;
                    if ( v589 == (unsigned int *)v2623 )
                    {
                      v412 = v2654;
                      break;
                    }
                  }
                }
LABEL_1052:
                v413 = v2636;
                v443 = 0;
                v2659 = v412;
                goto LABEL_1053;
              }
              v490[8] |= 2u;
              goto LABEL_733;
            case 25:
              v343 = *(_QWORD ***)(v99 + 1328);
              v2622 = 0;
              v2627 = (char *)(*(__int64 (__fastcall **)(__int64, __int64))(v99 + 888))(v131, 1LL);
              _disable();
              v344 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v99 + 1608));
              _enable();
              (*(void (__fastcall **)(__int64))(v99 + 360))(v344);
              LOBYTE(v345) = 1;
              (*(void (__fastcall **)(_QWORD, __int64))(v99 + 240))(*(_QWORD *)(v99 + 1336), v345);
              v346 = **(unsigned int ***)(v99 + 1552);
              v347 = *v346;
              v2620 = (__int64)(v346 + 4);
              v2625 = (__int64)&v346[6 * v347 + 4];
              v2972 = 0;
              if ( *((_BYTE *)v346 + 12) )
              {
                LODWORD(v347) = 0;
                v348 = *v343;
                while ( v348 != v343 )
                {
                  v348 = (_QWORD *)*v348;
                  LODWORD(v347) = v347 + 1;
                }
              }
              v349 = *(unsigned int *)(v99 + 2064);
              v350 = __rdtsc();
              v351 = __ROR8__(v350, 3);
              v2907 = ((v351 ^ v350) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v352 = ((unsigned __int16)(8193 * (v351 ^ v350)) ^ (unsigned __int16)v2907) & 0x7FF;
              v353 = __rdtsc();
              v354 = (__ROR8__(v353, 3) ^ v353) * (unsigned __int128)0x7010008004002001uLL;
              v2908 = *((_QWORD *)&v354 + 1);
              v355 = (*((_QWORD *)&v354 + 1) ^ (unsigned __int64)v354) % (unsigned int)(v352 + 1);
              v357 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v99 + 248))(
                       512LL,
                       (unsigned int)(v352 + 8 * v347),
                       v349);
              if ( !v357 )
              {
                ++*(_DWORD *)(v99 + 2584);
                goto LABEL_562;
              }
              v358 = v355;
              v359 = (unsigned __int64 *)v357;
              if ( (unsigned int)v355 >= 8 )
              {
                v360 = (unsigned __int64)(unsigned int)v355 >> 3;
                do
                {
                  v358 -= 8;
                  v361 = __rdtsc();
                  v362 = (__ROR8__(v361, 3) ^ v361) * (unsigned __int128)0x7010008004002001uLL;
                  v2909 = *((_QWORD *)&v362 + 1);
                  v356 = v362 ^ *((_QWORD *)&v362 + 1);
                  *v359++ = v356;
                  --v360;
                }
                while ( v360 );
                v99 = (unsigned __int64)v2621;
              }
              if ( v358 )
              {
                v363 = __rdtsc();
                v364 = (__ROR8__(v363, 3) ^ v363) * (unsigned __int128)0x7010008004002001uLL;
                v2910 = *((_QWORD *)&v364 + 1);
                v356 = v364 ^ *((_QWORD *)&v364 + 1);
                do
                {
                  *(_BYTE *)v359 = v356;
                  v359 = (unsigned __int64 *)((char *)v359 + 1);
                  v356 >>= 8;
                  --v358;
                }
                while ( v358 );
              }
              v365 = v352 - v355;
              v366 = (unsigned __int64 *)((unsigned int)v355 + v357 + (unsigned int)(8 * v347));
              if ( v365 >= 8 )
              {
                v359 = (unsigned __int64 *)((unsigned __int64)v365 >> 3);
                do
                {
                  v365 -= 8;
                  v367 = __rdtsc();
                  v368 = (__ROR8__(v367, 3) ^ v367) * (unsigned __int128)0x7010008004002001uLL;
                  v2925 = *((_QWORD *)&v368 + 1);
                  v356 = v368 ^ *((_QWORD *)&v368 + 1);
                  *v366++ = v356;
                  v359 = (unsigned __int64 *)((char *)v359 - 1);
                }
                while ( v359 );
              }
              if ( v365 )
              {
                v369 = __rdtsc();
                v370 = (__ROR8__(v369, 3) ^ v369) * (unsigned __int128)0x7010008004002001uLL;
                v2926 = *((_QWORD *)&v370 + 1);
                v356 = v370 ^ *((_QWORD *)&v370 + 1);
                do
                {
                  *(_BYTE *)v366 = v356;
                  v366 = (unsigned __int64 *)((char *)v366 + 1);
                  v356 >>= 8;
                  --v365;
                }
                while ( v365 );
              }
              v371 = v357 + (unsigned int)v355;
              v2705 = v357;
              if ( v371 )
              {
                v372 = *v343;
                if ( *v343 != v343 )
                {
                  v373 = 0;
                  do
                  {
                    v374 = *(_QWORD *)((char *)v372 + *(_QWORD *)(v99 + 1872) - *(_QWORD *)(v99 + 1864));
                    if ( !(*(unsigned int (__fastcall **)(__int64, unsigned __int64, unsigned __int64 *, unsigned __int64 *))(v99 + 680))(
                            v374,
                            v356,
                            v366,
                            v359)
                      && v373 < (unsigned int)v347 )
                    {
                      v375 = v373++;
                      *(_QWORD *)(v371 + 8 * v375) = v374;
                    }
                    v372 = (_QWORD *)*v372;
                    ++v2622;
                  }
                  while ( v372 != v343 );
                  v2972 = v373;
                }
                (*(void (__fastcall **)(__int64, _QWORD, unsigned __int64 *, unsigned __int64 *))(v99 + 920))(
                  v371,
                  v2972,
                  v366,
                  v359);
                v376 = v2620;
                v377 = v2625;
                v378 = v2619;
                do
                {
                  v379 = *(_QWORD *)(v376 + 8);
                  if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v99 + 680))(v379) )
                  {
                    v380 = v2972 - 1;
                    v381 = 0;
                    if ( (int)(v2972 - 1) < 0 )
                      goto LABEL_580;
                    do
                    {
                      v382 = (v380 + v381) >> 1;
                      if ( v379 >= *(_QWORD *)(v371 + 8LL * v382) )
                      {
                        if ( v379 <= *(_QWORD *)(v371 + 8LL * v382) )
                          break;
                        v381 = v382 + 1;
                      }
                      else
                      {
                        if ( !v382 )
                          goto LABEL_580;
                        v380 = v382 - 1;
                      }
                    }
                    while ( v380 >= v381 );
                    if ( v380 < v381 )
                    {
LABEL_580:
                      if ( !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = (char *)v378 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *v378;
                        *(_QWORD *)(v99 + 2328) = v379;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                      }
                    }
                  }
                  v376 += 24LL;
                }
                while ( v376 < v377 );
              }
              else
              {
LABEL_562:
                v2705 = 0LL;
              }
              (*(void (__fastcall **)(_QWORD))(v99 + 280))(*(_QWORD *)(v99 + 1336));
              (*(void (**)(void))(v99 + 368))();
              (*(void (__fastcall **)(char *))(v99 + 896))(v2627);
              if ( v2705 )
              {
                *(_DWORD *)(v99 + 2088) += v2622 << 9;
                (*(void (__fastcall **)(__int64))(v99 + 256))(v2705);
              }
              goto LABEL_212;
            case 26:
              if ( (*(_DWORD *)(v99 + 2096) & 1) == 0 )
              {
                v328 = *(_QWORD *)(v99 + 1448);
                v329 = *(_QWORD *)(v99 + 1352);
                v330 = 0;
                v2971 = 0;
                v2620 = *(_QWORD *)(v99 + 1456);
                v331 = *(void (__fastcall **)(__int64, __int64))(v99 + 376);
                v2625 = v328;
                v331(v131, 1LL);
                if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 || (v332 = *(_DWORD *)(v99 + 2384), v332 >= 7) )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 296))(*(_QWORD *)(v99 + 2560), 0LL);
                  v333 = 0x80;
                }
                else
                {
                  v333 = 1 << v332;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v99 + 312))(v329, 0LL);
                v334 = *(volatile signed __int8 ***)(v99 + 1312);
                v335 = *v334;
                if ( *v334 != (volatile signed __int8 *)v334 )
                {
                  do
                  {
                    _InterlockedOr8(&v335[*(_QWORD *)(v99 + 1720) - *(_QWORD *)(v99 + 1744)], v333);
                    v335 = *(volatile signed __int8 **)v335;
                    ++v330;
                  }
                  while ( v335 != (volatile signed __int8 *)v334 );
                  v2971 = v330;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v99 + 312))(v328, 0LL);
                v336 = *(_QWORD ***)(v99 + 1440);
                v337 = *v336;
                if ( *v336 != v336 )
                {
                  v338 = v2620;
                  v339 = v2619;
                  do
                  {
                    v340 = (char *)v337 - *(_QWORD *)(v99 + 1856);
                    if ( v340 != (char *)v338 )
                    {
                      v341 = *(_QWORD *)(v99 + 1720);
                      v342 = *(_QWORD *)&v340[*(_QWORD *)(v99 + 1848)];
                      if ( (v333 & *(_BYTE *)(v341 + v342)) == 0
                        && (*(_DWORD *)(v342 + *(_QWORD *)(v99 + 1728)) & *(_DWORD *)(v99 + 1752)) != 0
                        && !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = (char *)v339 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *v339;
                        *(_QWORD *)(v99 + 2328) = v342;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                        v341 = *(_QWORD *)(v99 + 1720);
                      }
                      _InterlockedAnd8((volatile signed __int8 *)(v342 + v341), ~v333);
                      v338 = v2620;
                    }
                    v337 = (_QWORD *)*v337;
                  }
                  while ( v337 != v336 );
                  v330 = v2971;
                }
                (*(void (__fastcall **)(__int64, _QWORD))(v99 + 320))(v2625, 0LL);
                if ( v333 == 0x80 )
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 304))(*(_QWORD *)(v99 + 2560), 0LL);
                (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 320))(*(_QWORD *)(v99 + 1352), 0LL);
                (*(void (**)(void))(v99 + 384))();
                *(_DWORD *)(v99 + 2088) += v330 << 8;
              }
              goto LABEL_212;
            case 27:
              if ( (*(_DWORD *)(v99 + 2096) & 1) == 0 )
                goto LABEL_212;
              v307 = *(char **)(v99 + 1448);
              v308 = *(_QWORD **)(v99 + 1456);
              v309 = *(_QWORD *)(v99 + 1352);
              v2622 = 0;
              v310 = *(void (__fastcall **)(__int64, __int64))(v99 + 376);
              v2627 = v307;
              v2620 = (__int64)v308;
              v310(v131, 1LL);
              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 || (v311 = *(_DWORD *)(v99 + 2384), v311 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 296))(*(_QWORD *)(v99 + 2560), 0LL);
                LOBYTE(v143) = 0x80;
              }
              else
              {
                LODWORD(v143) = 1;
                LOBYTE(v143) = 1 << v311;
              }
              v312 = *(void (__fastcall **)(__int64, _QWORD))(v99 + 312);
              v2626 = v143;
              v312(v309, 0LL);
              (*(void (__fastcall **)(char *, _QWORD))(v99 + 312))(v307, 0LL);
              v313 = *(unsigned __int64 **)(v99 + 1440);
              v314 = 0LL;
              v2625 = 0LL;
              v315 = *v313;
              if ( (unsigned __int64 *)*v313 != v313 )
              {
                do
                {
                  if ( (_QWORD *)(v315 - 24) != v308 )
                  {
                    v316 = *(_QWORD *)(v315 - 24 + *(_QWORD *)(v99 + 1848));
                    if ( (*(_DWORD *)(v316 + *(_QWORD *)(v99 + 1728)) & *(_DWORD *)(v99 + 1752)) == 0 )
                    {
                      v317 = *(_QWORD *)(v315 - 24 + *(_QWORD *)(v99 + 1848));
                      if ( v314 )
                        v317 = 1LL;
                      v314 = v317;
                    }
                    _InterlockedOr8((volatile signed __int8 *)(v316 + *(_QWORD *)(v99 + 1720)), v143);
                  }
                  v315 = *(_QWORD *)v315;
                }
                while ( (unsigned __int64 *)v315 != v313 );
                v2625 = v314;
              }
              v318 = *(_QWORD ***)(v99 + 1312);
              v319 = *v318;
              if ( *v318 != v318 )
              {
                v320 = v2620;
                v315 = (unsigned __int8)v143;
                v321 = ~(_BYTE)v143;
                LODWORD(v143) = v2622;
                v2970 = v315;
                do
                {
                  v322 = (char *)v319 - *(_QWORD *)(v99 + 1744);
                  v323 = *(_QWORD *)(v99 + 1720);
                  if ( (v322[v323] & (unsigned int)v315) == 0 )
                  {
                    v324 = *(_QWORD *)&v322[*(_QWORD *)(v99 + 1736)];
                    if ( v324 && v324 != v320 && !*(_DWORD *)(v99 + 2296) )
                    {
                      v325 = v2619;
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = (char *)v325 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *v325;
                      *(_QWORD *)(v99 + 2328) = v322;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                      v323 = *(_QWORD *)(v99 + 1720);
                    }
                    v315 = v2970;
                  }
                  _InterlockedAnd8(&v322[v323], v321);
                  v319 = (_QWORD *)*v319;
                  LODWORD(v143) = v143 + 1;
                }
                while ( v319 != v318 );
                v308 = (_QWORD *)v2620;
                v2622 = v143;
                LOBYTE(v143) = v2626;
              }
              if ( v2625 )
              {
                if ( v2625 == 1 )
                {
                  v326 = *(_QWORD ***)(v99 + 1440);
                  for ( i32 = *v326; i32 != v326; i32 = (_QWORD *)*i32 )
                  {
                    v315 = (unsigned __int64)(i32 - 3);
                    if ( i32 - 3 != v308 )
                    {
                      v315 = *(_QWORD *)(v315 + *(_QWORD *)(v99 + 1848));
                      _InterlockedAnd8((volatile signed __int8 *)(v315 + *(_QWORD *)(v99 + 1720)), ~(_BYTE)v143);
                    }
                  }
                }
                else
                {
                  _InterlockedAnd8((volatile signed __int8 *)(v2625 + *(_QWORD *)(v99 + 1720)), ~(_BYTE)v143);
                }
              }
              (*(void (__fastcall **)(char *, _QWORD, unsigned __int64))(v99 + 320))(v2627, 0LL, v315);
              if ( (_BYTE)v143 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 304))(*(_QWORD *)(v99 + 2560), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 320))(*(_QWORD *)(v99 + 1352), 0LL);
              (*(void (**)(void))(v99 + 384))();
              v270 = v2622;
LABEL_420:
              v247 = v270 << 8;
              goto LABEL_385;
          }
        }
        else
        {
          switch ( v150 )
          {
            case 12:
              goto LABEL_2095;
            case 0:
              v286 = *(const char **)(v143 + 8);
              v287 = *(unsigned int *)(v143 + 16);
              v130 = (unsigned __int64)v286;
              *(_DWORD *)(v99 + 2088) += v287;
              v288 = v286;
              v289 = *(_DWORD *)(v99 + 2068);
              for ( i33 = *(_QWORD *)(v99 + 2072); v288 < &v286[v287]; v288 += 64 )
                _mm_prefetch(v288, 0);
              v291 = *(_QWORD *)(v99 + 2072);
              v292 = (unsigned int)v287 >> 7;
              if ( (unsigned int)v287 >> 7 )
              {
                do
                {
                  v293 = 8LL;
                  do
                  {
                    v294 = v291 ^ *(_QWORD *)v130;
                    v295 = *(_QWORD *)(v130 + 8);
                    v130 += 16LL;
                    v291 = __ROL8__(__ROL8__(v294, v289) ^ v295, v289);
                    --v293;
                  }
                  while ( v293 );
                  v296 = __ROL8__(i33 ^ (v130 - (_QWORD)v286), 17) ^ i33 ^ (v130 - (_QWORD)v286);
                  v2906 = (v296 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v289 = ((unsigned __int8)(v296 ^ v2906) ^ (unsigned __int8)v289) & 0x3F;
                  if ( !v289 )
                    LOBYTE(v289) = 1;
                  --v292;
                }
                while ( v292 );
                v99 = (unsigned __int64)v2621;
              }
              v100 = v287 & 0x7F;
              if ( (unsigned int)v100 >= 8 )
              {
                v297 = (unsigned __int64)(unsigned int)v100 >> 3;
                do
                {
                  v291 = __ROL8__(*(_QWORD *)v130 ^ v291, v289);
                  v130 += 8LL;
                  v100 = (unsigned int)(v100 - 8);
                  --v297;
                }
                while ( v297 );
              }
              if ( (_DWORD)v100 )
              {
                do
                {
                  v298 = *(unsigned __int8 *)v130++;
                  v291 = __ROL8__(v298 ^ v291, v289);
                  v100 = (unsigned int)(v100 - 1);
                }
                while ( (_DWORD)v100 );
                v99 = (unsigned __int64)v2621;
              }
              for ( i34 = v291; ; LODWORD(v291) = i34 ^ v291 )
              {
                i34 >>= 31;
                if ( !i34 )
                  break;
              }
              v300 = v291 & 0x7FFFFFFF;
              v301 = 0;
              if ( v300 == *(_DWORD *)(v143 + 20) )
                goto LABEL_212;
              if ( !*(_DWORD *)v143 )
                v301 = *(_DWORD *)(v143 + 24) != 0;
              v302 = *(unsigned int *)(v143 + 16);
              v303 = *(_QWORD *)(v143 + 8);
              if ( *(_DWORD *)(v143 + 16) )
              {
                v100 = 64LL;
                if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                {
                  v304 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v305 = v303 & 0xFFFFFFFFFFFFF000uLL;
                  v2620 = (v303 + v302 - 1) | 0xFFF;
                  v2969 = (v303 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v176 = v304;
                    while ( 1 )
                    {
                      v306 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                               v305,
                               0LL,
                               v100,
                               v130);
                      if ( v306 != -1073741267 )
                        break;
                      if ( v301 )
                        goto LABEL_476;
                      if ( v304 > 1u )
                        goto LABEL_474;
                      v176 = v304;
                      __writecr8(v304);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v306 < 0 )
                      break;
LABEL_474:
                    v305 += 4096LL;
                    v2969 += 4096LL;
                    if ( v2969 == v2620 )
                      goto LABEL_258;
                  }
LABEL_476:
                  __writecr8(v176);
                  v143 = (__int64)v2619;
                }
              }
              v178 = *(_DWORD *)(v99 + 2296);
              j = 0LL;
              v179 = *(unsigned int *)(v143 + 20);
              if ( !v178 )
              {
                v180 = v300;
LABEL_262:
                *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v180 ^ v179;
                v178 = *(_DWORD *)(v99 + 2296);
              }
LABEL_263:
              v181 = *(_QWORD *)(v143 + 8);
LABEL_264:
              if ( v178 )
                goto LABEL_213;
              *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v99 + 2320) = *(int *)v143;
              *(_QWORD *)(v99 + 2328) = v181;
LABEL_266:
              *(_DWORD *)(v99 + 2296) = 1;
              goto LABEL_267;
            case 1:
              goto LABEL_2095;
            case 4:
              if ( (*(_DWORD *)(v99 + 2096) & 1) != 0 )
                goto LABEL_212;
              v271 = *(_QWORD *)(v99 + 1352);
              v272 = 0;
              v2626 = 0;
              (*(void (__fastcall **)(_QWORD, __int64))(v99 + 376))((unsigned int)(v150 - 4), 1LL);
              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 || (v273 = *(_DWORD *)(v99 + 2384), v273 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 296))(*(_QWORD *)(v99 + 2560), 0LL);
                v274 = 0x80;
              }
              else
              {
                v274 = 1 << v273;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v99 + 312))(v271, 0LL);
              v275 = *(_QWORD ***)(v99 + 1312);
              v276 = *v275;
              if ( *v275 != v275 )
              {
                v277 = v2619;
                do
                {
                  v278 = (unsigned __int64)v276 - *(_QWORD *)(v99 + 1744);
                  if ( v274 != 0x80
                    && (v274 & *(_BYTE *)(v278 + *(_QWORD *)(v99 + 1720))) != 0
                    && (*(_DWORD *)(v278 + *(_QWORD *)(v99 + 1728)) & *(_DWORD *)(v99 + 1752)) != 0
                    && !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v277 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v277;
                    *(_QWORD *)(v99 + 2328) = v278 | 1;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
                  _InterlockedOr8((volatile signed __int8 *)(v278 + *(_QWORD *)(v99 + 1720)), v274);
                  v276 = (_QWORD *)*v276;
                  ++v272;
                }
                while ( v276 != v275 );
                v2626 = v272;
              }
              v279 = *(_QWORD *)(v99 + 1280);
              v2620 = KeGetCurrentIrql();
              __writecr8(0xCuLL);
              (*(void (__fastcall **)(__int64, _BYTE *))(v99 + 328))(v279, v2954);
              v280 = *(_QWORD ***)(v99 + 1272);
              v281 = *v280;
              if ( *v280 != v280 )
              {
                v282 = v2619;
                v283 = v274;
                v2639 = v274;
                do
                {
                  v284 = *(_QWORD *)(v99 + 1720);
                  v285 = (char *)v281 - *(_QWORD *)(v99 + 1712);
                  if ( (v285[v284] & v283) == 0 && !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v282 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v282;
                    *(_QWORD *)(v99 + 2328) = v285;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                    v284 = *(_QWORD *)(v99 + 1720);
                    v283 = v2639;
                  }
                  _InterlockedAnd8(&v285[v284], ~v274);
                  v281 = (_QWORD *)*v281;
                }
                while ( v281 != v280 );
              }
              (*(void (__fastcall **)(_BYTE *))(v99 + 392))(v2954);
              __writecr8((unsigned __int8)v2620);
              if ( v274 == 0x80 )
                (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 304))(*(_QWORD *)(v99 + 2560), 0LL);
              (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 320))(*(_QWORD *)(v99 + 1352), 0LL);
              (*(void (**)(void))(v99 + 384))();
              v270 = v2626;
              goto LABEL_420;
            case 5:
              v248 = *(_DWORD *)(v99 + 2096);
              if ( (v248 & 1) == 0 )
                goto LABEL_212;
              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
              {
                v250 = __rdtsc();
                v251 = (__ROR8__(v250, 3) ^ v250) * (unsigned __int128)0x7010008004002001uLL;
                v2905 = *((_QWORD *)&v251 + 1);
                v249 = v251 ^ *((_QWORD *)&v251 + 1);
                v144 = ((unsigned __int64)v251 ^ *((_QWORD *)&v251 + 1)) / 3;
                v2968 = v249 == 3 * v144;
              }
              else
              {
                v249 = v248 & 3;
                v2968 = (_BYTE)v249 == 3;
              }
              v252 = *(_QWORD *)(v99 + 1352);
              v253 = 0;
              v2626 = 0;
              (*(void (__fastcall **)(__int64, unsigned __int64))(v99 + 376))(v249, v144);
              if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 || (v254 = *(_DWORD *)(v99 + 2384), v254 >= 7) )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 296))(*(_QWORD *)(v99 + 2560), 0LL);
                v255 = 0x80;
              }
              else
              {
                v255 = 1 << v254;
              }
              (*(void (__fastcall **)(__int64, _QWORD))(v99 + 312))(v252, 0LL);
              v256 = *(volatile signed __int8 ***)(v99 + 1312);
              v257 = *v256;
              if ( *v256 != (volatile signed __int8 *)v256 )
              {
                do
                {
                  _InterlockedOr8(&v257[*(_QWORD *)(v99 + 1720) - *(_QWORD *)(v99 + 1744)], v255);
                  v257 = *(volatile signed __int8 **)v257;
                  ++v253;
                }
                while ( v257 != (volatile signed __int8 *)v256 );
                v2626 = v253;
              }
              v258 = 4LL;
              v259 = **(_QWORD **)(v99 + 1360);
              v260 = *(unsigned int *)(*(_QWORD *)(v99 + 1840) + v259);
              v2620 = v260;
              while ( 2 )
              {
                v261 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v99 + 264))(v259, v258);
                if ( v261 )
                {
                  v262 = (_BYTE *)((*v261 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
                  v263 = *v262 & 0x7F;
                  if ( v263 == 3 )
                  {
                    v264 = *(_QWORD *)(v99 + 1720);
                    if ( (v255 & v262[v264]) == 0
                      && (*(_DWORD *)&v262[*(_QWORD *)(v99 + 1728)] & *(_DWORD *)(v99 + 1752)) != 0
                      && !*(_DWORD *)(v99 + 2296) )
                    {
                      v265 = v2619;
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = (char *)v265 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *v265;
                      *(_QWORD *)(v99 + 2328) = v262;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                      v264 = *(_QWORD *)(v99 + 1720);
                    }
                    _InterlockedAnd8(&v262[v264], ~v255);
                    goto LABEL_415;
                  }
                  if ( v263 != 6 )
                  {
                    v268 = v263 == 0;
                    goto LABEL_412;
                  }
                  if ( !v2968 )
                    goto LABEL_415;
                  v266 = *(_QWORD *)(v99 + 1664);
                  v267 = *(_QWORD *)&v262[v266 + 32];
                  if ( (v267 == *(_QWORD *)(v99 + 800) || v267 == *(_QWORD *)(v99 + 808))
                    && *(_QWORD *)&v262[v266 + 48] == *(_QWORD *)(v99 + 816) )
                  {
                    v268 = *(_QWORD *)&v262[v266 + 40] == *(_QWORD *)(v99 + 824);
LABEL_412:
                    if ( v268 )
                      goto LABEL_415;
                  }
                  if ( !*(_DWORD *)(v99 + 2296) )
                  {
                    v269 = v2619;
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = (char *)v269 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *v269;
                    *(_QWORD *)(v99 + 2328) = v262;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
LABEL_415:
                  (*(void (__fastcall **)(__int64, __int64 *))(v99 + 288))(v259, v261);
                  v260 = v2620;
                }
                v258 += 4LL;
                if ( v258 >= v260 )
                {
                  if ( v255 == 0x80 )
                    (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 304))(*(_QWORD *)(v99 + 2560), 0LL);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(v99 + 320))(*(_QWORD *)(v99 + 1352), 0LL);
                  (*(void (**)(void))(v99 + 384))();
                  v270 = (v260 >> 2) + v2626;
                  goto LABEL_420;
                }
                continue;
              }
            case 7:
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v99 + 416))(v2945, *(unsigned int *)(v143 + 28));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v99 + 464))(v2945, v2912);
              for ( i35 = 0; i35 < *(_DWORD *)(v143 + 24); ++i35 )
              {
                v241 = *(unsigned int *)(v143 + 24LL * i35 + 64);
                if ( (*(_BYTE *)(v99 + 2171) & 2) != 0
                  && (_DWORD)v241 == -1073741694
                  && KeGetPcr()->Prcb.Number == *(_DWORD *)(v99 + 2288) )
                {
                  v242 = *(_QWORD *)(v99 + 2280);
                }
                else
                {
                  v242 = __readmsr(v241);
                }
                v243 = *(_QWORD *)(v143 + 24LL * i35 + 48);
                v244 = *(_QWORD *)(v143 + 24LL * i35 + 56);
                v245 = v243 & v242;
                if ( v245 == v244 )
                {
                  if ( (*(_DWORD *)(v99 + 2452) & 0x200) != 0 && v243 == -1 )
                    __writemsr(v241, v245);
                }
                else
                {
                  v246 = v241 | ((unsigned __int64)*(unsigned int *)(v143 + 28) << 32);
                  if ( !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v245 ^ v244;
                    if ( !*(_DWORD *)(v99 + 2296) )
                    {
                      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v99 + 2320) = *(int *)v143;
                      *(_QWORD *)(v99 + 2328) = v246;
                      *(_DWORD *)(v99 + 2296) = 1;
                      __b8(v99, 0LL);
                    }
                  }
                }
              }
              (*(void (__fastcall **)(_BYTE *))(v99 + 408))(v2912);
              v247 = *(_DWORD *)(v143 + 24) << 15;
              goto LABEL_385;
            case 8:
              v209 = *(_QWORD *)(v143 + 24);
              v210 = *(_WORD *)(v143 + 34);
              if ( *(_WORD *)(v209 + *(_QWORD *)(v99 + 1776) + *(_QWORD *)(v99 + 1824)) != v210
                && !*(_DWORD *)(v99 + 2296) )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v209;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
                v210 = *(_WORD *)(v143 + 34);
              }
              if ( (v210 & *(_WORD *)(v99 + 1832)) == 0
                && *(_QWORD *)(v209 + *(_QWORD *)(v99 + 1784)) != v209 + *(_QWORD *)(v99 + 1784)
                && !*(_DWORD *)(v99 + 2296) )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v209;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
              }
              v211 = *(_QWORD **)(v143 + 8);
              v212 = *(unsigned int *)(v143 + 16);
              v213 = v211;
              *(_DWORD *)(v99 + 2088) += v212;
              v214 = (const char *)v211;
              v215 = *(_DWORD *)(v99 + 2068);
              v216 = *(_QWORD *)(v99 + 2072);
              if ( v211 < (_QWORD *)((char *)v211 + v212) )
              {
                do
                {
                  _mm_prefetch(v214, 0);
                  v214 += 64;
                }
                while ( v214 < (const char *)v211 + v212 );
              }
              v217 = *(_QWORD *)(v99 + 2072);
              v218 = (unsigned int)v212 >> 7;
              if ( (unsigned int)v212 >> 7 )
              {
                do
                {
                  v219 = 8LL;
                  do
                  {
                    v220 = v217 ^ *v213;
                    v221 = v213[1];
                    v213 += 2;
                    v217 = __ROL8__(__ROL8__(v220, v215) ^ v221, v215);
                    --v219;
                  }
                  while ( v219 );
                  v222 = (__ROL8__(v216 ^ ((char *)v213 - (char *)v211), 17) ^ v216 ^ (unsigned __int64)((char *)v213 - (char *)v211))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v2904 = *((_QWORD *)&v222 + 1);
                  v215 = ((unsigned __int8)(v222 ^ BYTE8(v222)) ^ (unsigned __int8)v215) & 0x3F;
                  if ( !v215 )
                    LOBYTE(v215) = 1;
                  --v218;
                }
                while ( v218 );
                v99 = (unsigned __int64)v2621;
              }
              v223 = v212 & 0x7F;
              if ( v223 >= 8 )
              {
                v224 = (unsigned __int64)v223 >> 3;
                do
                {
                  v217 = __ROL8__(*v213++ ^ v217, v215);
                  v223 -= 8;
                  --v224;
                }
                while ( v224 );
              }
              for ( ; v223; --v223 )
              {
                v225 = *(unsigned __int8 *)v213;
                v213 = (_QWORD *)((char *)v213 + 1);
                v217 = __ROL8__(v225 ^ v217, v215);
              }
              for ( i36 = v217; ; LODWORD(v217) = i36 ^ v217 )
              {
                i36 >>= 31;
                if ( !i36 )
                  break;
              }
              v227 = v2619;
              v228 = v217 & 0x7FFFFFFF;
              v229 = 0;
              if ( v228 != v2619[5] )
              {
                if ( !*v2619 )
                  v229 = v2619[6] != 0;
                v230 = (unsigned int)v2619[4];
                v231 = *((_QWORD *)v2619 + 1);
                if ( v2619[4] )
                {
                  v232 = 64LL;
                  if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                  {
                    v233 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v234 = v231 & 0xFFFFFFFFFFFFF000uLL;
                    v2620 = (v231 + v230 - 1) | 0xFFF;
                    v2967 = (v231 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v235 = v233;
                      while ( 1 )
                      {
                        v236 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v99 + 1128))(
                                 v234,
                                 0LL,
                                 v232,
                                 v213);
                        if ( v236 != -1073741267 )
                          break;
                        if ( v229 )
                          goto LABEL_365;
                        if ( v233 > 1u )
                          goto LABEL_358;
                        v235 = v233;
                        __writecr8(v233);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v236 < 0 )
                        break;
LABEL_358:
                      v234 += 4096LL;
                      v2967 += 4096LL;
                      if ( v2967 == v2620 )
                      {
                        __writecr8(v235);
                        v227 = v2619;
                        goto LABEL_360;
                      }
                    }
LABEL_365:
                    __writecr8(v235);
                    v227 = v2619;
                  }
                }
                v238 = *(_DWORD *)(v99 + 2296);
                if ( !v238 )
                {
                  *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v228 ^ (unsigned __int64)(unsigned int)v227[5];
                  v238 = *(_DWORD *)(v99 + 2296);
                }
                v239 = *((_QWORD *)v227 + 1);
                if ( !v238 )
                {
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = (char *)v227 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v99 + 2320) = *v227;
                  *(_QWORD *)(v99 + 2328) = v239;
                  *(_DWORD *)(v99 + 2296) = 1;
                  __b8(v99, 0LL);
                }
              }
LABEL_360:
              v2757 = v227 + 12;
              v2756[0] = *((_WORD *)v227 + 16);
              v2756[1] = v2756[0];
              LOBYTE(v2618) = 0;
              j = 0LL;
              if ( (*(int (__fastcall **)(_WORD *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, __int64 *))(v99 + 488))(
                     v2756,
                     0LL,
                     0LL,
                     0LL,
                     *(_QWORD *)(v99 + 1288),
                     v2618,
                     0LL,
                     &v2728) < 0 )
                goto LABEL_213;
              v237 = v2728;
              if ( v2728 != *((_QWORD *)v227 + 3) && !*(_DWORD *)(v99 + 2296) )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = (char *)v227 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *v227;
                *(_QWORD *)(v99 + 2328) = v237;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
              }
              goto LABEL_364;
            case 10:
              if ( *(_DWORD *)(v143 + 24) )
              {
                if ( !*(_QWORD *)(v99 + 2432) || (v182 = *(_DWORD *)(v99 + 2452), (v182 & 4) != 0) )
                {
                  LODWORD(v200) = 0;
                  j = 0LL;
                  v183 = (_DWORD *)(v99 + 2084);
                  goto LABEL_321;
                }
                v183 = (_DWORD *)(v99 + 2084);
                j = 0LL;
                if ( *(_DWORD *)(v99 + 2084) )
                {
                  if ( (v182 & 0x20) != 0 )
                  {
                    LODWORD(v200) = 0;
                    goto LABEL_321;
                  }
                }
                else
                {
                  *(_DWORD *)(v99 + 2452) = v182 ^ ((unsigned __int8)v182 ^ (unsigned __int8)(8 * v182)) & 0x20;
                }
              }
              v184 = v143 + 48 + 16LL * *(unsigned int *)(v99 + 2084);
              v185 = v143 + 48 + 16LL * *(unsigned int *)(v143 + 28);
              v2625 = v99 + 2084;
              v2966 = v185;
              v2620 = v184;
              while ( 2 )
              {
                if ( *(int *)v184 < 0 )
                {
LABEL_308:
                  j = 0LL;
                }
                else
                {
                  v186 = *(_QWORD *)(v184 + 8);
                  v187 = *(unsigned int *)(v184 + 4);
                  v130 = v186;
                  *(_DWORD *)(v99 + 2088) += v187;
                  v188 = (const char *)v186;
                  v189 = *(_DWORD *)(v99 + 2068);
                  v190 = (unsigned int)v187;
                  v191 = *(_QWORD *)(v99 + 2072);
                  if ( v186 < v186 + v187 )
                  {
                    do
                    {
                      _mm_prefetch(v188, 0);
                      v188 += 64;
                    }
                    while ( (unsigned __int64)v188 < v186 + v187 );
                  }
                  v192 = *(_QWORD *)(v99 + 2072);
                  v193 = (unsigned int)v187 >> 7;
                  if ( (unsigned int)v187 >> 7 )
                  {
                    do
                    {
                      v194 = 8LL;
                      do
                      {
                        v195 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v192, v189);
                        v130 += 16LL;
                        v192 = __ROL8__(v195, v189);
                        --v194;
                      }
                      while ( v194 );
                      v196 = __ROL8__(v191 ^ (v130 - v186), 17) ^ v191 ^ (v130 - v186);
                      v2903 = (v196 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v189 = ((unsigned __int8)(v2903 ^ v196) ^ (unsigned __int8)v189) & 0x3F;
                      if ( !v189 )
                        LOBYTE(v189) = 1;
                      --v193;
                    }
                    while ( v193 );
                    v99 = (unsigned __int64)v2621;
                    v190 = v187;
                    v184 = v2620;
                    v185 = v2966;
                  }
                  v100 = v187 & 0x7F;
                  if ( (unsigned int)v100 >= 8 )
                  {
                    v197 = (unsigned __int64)(unsigned int)v100 >> 3;
                    do
                    {
                      v192 = __ROL8__(*(_QWORD *)v130 ^ v192, v189);
                      v130 += 8LL;
                      v100 = (unsigned int)(v100 - 8);
                      --v197;
                    }
                    while ( v197 );
                  }
                  if ( (_DWORD)v100 )
                  {
                    do
                    {
                      v198 = *(unsigned __int8 *)v130++;
                      v192 = __ROL8__(v198 ^ v192, v189);
                      v100 = (unsigned int)(v100 - 1);
                    }
                    while ( (_DWORD)v100 );
                    v99 = (unsigned __int64)v2621;
                  }
                  v199 = v192 >> 31;
                  j = 0LL;
                  while ( v199 )
                  {
                    LODWORD(v192) = v199 ^ v192;
                    v199 >>= 31;
                  }
                  v201 = *(_DWORD *)v184;
                  v202 = v192 & 0x7FFFFFFF;
                  if ( v202 != (*(_DWORD *)v184 & 0x7FFFFFFF) )
                  {
                    if ( v190 && (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                    {
                      v203 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v204 = v186 & 0xFFFFFFFFFFFFF000uLL;
                      v2627 = (char *)((v190 + v186 - 1) | 0xFFF);
                      v2620 = (v186 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v205 = v203;
                        while ( 1 )
                        {
                          v206 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 1128))(
                                   v204,
                                   0LL,
                                   v100,
                                   v130);
                          if ( v206 != -1073741267 )
                            break;
                          if ( v203 > 1u )
                            goto LABEL_305;
                          v205 = v203;
                          __writecr8(v203);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v206 < 0 )
                          break;
LABEL_305:
                        v204 += 4096LL;
                        v2620 += 4096LL;
                        if ( (char *)v2620 == v2627 )
                        {
                          __writecr8(v205);
                          goto LABEL_307;
                        }
                      }
                      __writecr8(v205);
                      v201 = *(_DWORD *)v184;
                      v143 = (__int64)v2619;
                    }
                    v208 = v201;
                    if ( !*(_DWORD *)(v99 + 2296) )
                    {
                      LODWORD(v208) = v201 & 0x7FFFFFFF;
                      *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v208 ^ v202;
                      if ( !*(_DWORD *)(v99 + 2296) )
                      {
                        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v99 + 2320) = *(int *)v143;
                        *(_QWORD *)(v99 + 2328) = v186;
                        *(_DWORD *)(v99 + 2296) = 1;
                        __b8(v99, 0LL);
                      }
                    }
LABEL_307:
                    v185 = v2966;
                    v133 = v2636;
                    goto LABEL_308;
                  }
                  v133 = v2636;
                }
                v184 += 16LL;
                v2620 = v184;
                v207 = v184 == v185;
                if ( v184 >= v185 )
                  goto LABEL_312;
                v143 = (__int64)v2619;
                if ( *(_DWORD *)(v99 + 2088) >= *v133 )
                {
                  v207 = v184 == v185;
LABEL_312:
                  if ( v207 )
                  {
                    LODWORD(v200) = 0;
                    j = 0LL;
                  }
                  else
                  {
                    v200 = (__int64)(v184 - (_QWORD)(v2619 + 12)) >> 4;
                  }
                  v183 = (_DWORD *)v2625;
LABEL_321:
                  *v183 = v200;
                  goto LABEL_213;
                }
                continue;
              }
            case 11:
              if ( !*(_QWORD *)(v99 + 2432) )
              {
LABEL_211:
                *(_DWORD *)(v99 + 2084) = 0;
                goto LABEL_212;
              }
              if ( *(_DWORD *)(v99 + 2084) )
              {
                v153 = *(_DWORD *)(v99 + 2452);
                if ( (((unsigned __int8)v153 ^ (unsigned __int8)(v153 >> 3)) & 4) != 0 )
                  goto LABEL_211;
              }
              else
              {
                v153 = *(_DWORD *)(v99 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v99 + 2452) ^ (unsigned __int8)(8 * *(_DWORD *)(v99 + 2452))) & 0x20;
                *(_DWORD *)(v99 + 2452) = v153;
              }
              if ( (v153 & 4) != 0 )
              {
                v154 = *(_QWORD *)(v143 + 8) & 0xFFFFFFFFFFFFF000uLL;
                for ( i37 = (*(unsigned int *)(v143 + 16) + (unsigned __int64)(*(_DWORD *)(v143 + 8) & 0xFFF) + 4095) >> 12;
                      i37;
                      v154 += 4096LL )
                {
                  --i37;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v99 + 688))(v154)
                    && !*(_DWORD *)(v99 + 2296) )
                  {
                    *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v99 + 2320) = *(int *)v143;
                    *(_QWORD *)(v99 + 2328) = v154;
                    *(_DWORD *)(v99 + 2296) = 1;
                    __b8(v99, 0LL);
                  }
                  *(_DWORD *)(v99 + 2088) += 256;
                }
                goto LABEL_212;
              }
              v156 = *(const char **)(v143 + 8);
              v157 = *(unsigned int *)(v143 + 16);
              v130 = (unsigned __int64)v156;
              *(_DWORD *)(v99 + 2088) += v157;
              v158 = v156;
              v159 = *(_DWORD *)(v99 + 2068);
              for ( i38 = *(_QWORD *)(v99 + 2072); v158 < &v156[v157]; v158 += 64 )
                _mm_prefetch(v158, 0);
              v161 = *(_QWORD *)(v99 + 2072);
              v162 = (unsigned int)v157 >> 7;
              if ( (unsigned int)v157 >> 7 )
              {
                do
                {
                  v163 = 8LL;
                  do
                  {
                    v164 = v161 ^ *(_QWORD *)v130;
                    v165 = *(_QWORD *)(v130 + 8);
                    v130 += 16LL;
                    v161 = __ROL8__(__ROL8__(v164, v159) ^ v165, v159);
                    --v163;
                  }
                  while ( v163 );
                  v166 = __ROL8__(i38 ^ (v130 - (_QWORD)v156), 17) ^ i38 ^ (v130 - (_QWORD)v156);
                  v2902 = (v166 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v159 = ((unsigned __int8)v2902 ^ (unsigned __int8)(v166 ^ v159)) & 0x3F;
                  if ( !v159 )
                    LOBYTE(v159) = 1;
                  --v162;
                }
                while ( v162 );
                v99 = (unsigned __int64)v2621;
              }
              v100 = v157 & 0x7F;
              if ( (unsigned int)v100 >= 8 )
              {
                v167 = (unsigned __int64)(unsigned int)v100 >> 3;
                do
                {
                  v161 = __ROL8__(*(_QWORD *)v130 ^ v161, v159);
                  v130 += 8LL;
                  v100 = (unsigned int)(v100 - 8);
                  --v167;
                }
                while ( v167 );
              }
              if ( (_DWORD)v100 )
              {
                do
                {
                  v168 = *(unsigned __int8 *)v130++;
                  v161 = __ROL8__(v168 ^ v161, v159);
                  v100 = (unsigned int)(v100 - 1);
                }
                while ( (_DWORD)v100 );
                v99 = (unsigned __int64)v2621;
              }
              v169 = v161 >> 31;
              j = 0LL;
              while ( v169 )
              {
                LODWORD(v161) = v169 ^ v161;
                v169 >>= 31;
              }
              v170 = *(_DWORD *)(v143 + 20);
              v171 = v161 & 0x7FFFFFFF;
              if ( v171 == v170 )
                goto LABEL_213;
              v172 = *(unsigned int *)(v143 + 16);
              v100 = *(_QWORD *)(v143 + 8);
              if ( *(_DWORD *)(v143 + 16) )
              {
                v130 = 64LL;
                if ( (*(_DWORD *)(v99 + 2452) & 0x40) != 0 )
                {
                  v173 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v174 = v100 & 0xFFFFFFFFFFFFF000uLL;
                  v2965 = (v100 + v172 - 1) | 0xFFF;
                  v175 = (v100 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 2 )
                  {
                    v176 = v173;
                    while ( 1 )
                    {
                      v177 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v174, 0LL);
                      if ( v177 != -1073741267 )
                        break;
                      if ( v173 > 1u )
                        goto LABEL_257;
                      v176 = v173;
                      __writecr8(v173);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v177 < 0 )
                    {
                      __writecr8(v176);
                      v143 = (__int64)v2619;
                      v170 = v2619[5];
                      goto LABEL_260;
                    }
LABEL_257:
                    v174 += 4096LL;
                    v175 += 4096LL;
                    if ( v175 != v2965 )
                      continue;
                    break;
                  }
LABEL_258:
                  __writecr8(v176);
                  goto LABEL_212;
                }
              }
LABEL_260:
              v178 = *(_DWORD *)(v99 + 2296);
              j = 0LL;
              if ( !v178 )
              {
                v179 = v171;
                v180 = v170;
                goto LABEL_262;
              }
              goto LABEL_263;
          }
        }
      }
      v1458 = v150 - 2;
      if ( v1458 )
      {
        v1459 = v1458 - 1;
        if ( v1459 )
        {
          if ( v1459 != 20 )
          {
            j = 0LL;
            if ( *(_DWORD *)(v99 + 2296) )
              goto LABEL_213;
            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v99 + 2320) = 257LL;
            *(_QWORD *)(v99 + 2328) = 0LL;
LABEL_2132:
            *(_DWORD *)(v99 + 2296) = 1;
            goto LABEL_267;
          }
          (*(void (__fastcall **)(_BYTE *, _QWORD))(v99 + 416))(v2916, *(unsigned int *)(v143 + 40));
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(v99 + 464))(v2916, v2917);
          v1460 = *(_QWORD *)(v99 + 2576);
          j = 0LL;
          if ( v1460 )
          {
            v1461 = *(_DWORD *)(v1460 + 800);
            v1460 = *(_QWORD *)(v99 + 2576);
          }
          else
          {
            v1462 = __readmsr(0x832u);
            v1461 = v1462;
          }
          if ( v1460 )
          {
            v1463 = *(_DWORD *)(v1460 + 832);
          }
          else
          {
            v1464 = __readmsr(0x834u);
            v1463 = v1464;
          }
          (*(void (__fastcall **)(_BYTE *))(v99 + 408))(v2917);
          if ( (*(_BYTE *)(v99 + 2171) & 0x10) != 0 )
          {
            _disable();
            v1465 = *(_QWORD *)(v99 + 2272);
            v1466 = 38LL;
            v1467 = 304;
            v1468 = (_QWORD *)v1465;
            do
            {
              *v1468 = 0LL;
              v1467 -= 8;
              ++v1468;
              --v1466;
            }
            while ( v1466 );
            for ( ; v1467; --v1467 )
            {
              *(_BYTE *)v1468 = 0;
              v1468 = (_QWORD *)((char *)v1468 + 1);
            }
            *(_OWORD *)(v1465 + 16) = *(_OWORD *)(v99 + 2120);
            *(_OWORD *)(v1465 + 32) = *(_OWORD *)(v99 + 2136);
            *(_OWORD *)(v1465 + 288) = *(_OWORD *)(v99 + 2152);
            v2736 = 303;
            v2737 = v1465;
            *(_WORD *)(v1465 + 16) = v99 + 2168;
            v2830 = (_BYTE *)(v99 + 2168);
            *(_WORD *)(v1465 + 22) = (unsigned int)(v99 + 2168) >> 16;
            *(_DWORD *)(v1465 + 24) = (v99 + 2168) >> 32;
            __sidt(v2785);
            __lidt(&v2736);
            if ( (*(_DWORD *)(v99 + 2452) & 0x20000) == 0 )
            {
              v1469 = KeGetCurrentPrcb();
              **(_QWORD **)(v99 + 1216) = v99 - 0x5C5FC0A76E374B18LL;
              **(_QWORD **)(v99 + 1224) = v1469;
              **(_QWORD **)(v99 + 1232) = 0LL;
              **(_QWORD **)(v99 + 1240) = 277LL;
            }
            KiErrata361Present();
            if ( (*(_DWORD *)(v99 + 2452) & 0x20000) == 0 )
            {
              **(_QWORD **)(v99 + 1216) = 0xA3A03F5891C8B4E8uLL;
              **(_QWORD **)(v99 + 1224) = 0LL;
              **(_QWORD **)(v99 + 1232) = 0LL;
              **(_QWORD **)(v99 + 1240) = 0LL;
            }
            __lidt(v2785);
            _enable();
          }
          v1470 = *(unsigned int *)(v143 + 24);
          if ( (v1461 & *(_DWORD *)(v143 + 28)) != (_DWORD)v1470
            || (v1461 & 0x10000) == 0 && (_BYTE)v1461 != 0xD1 && (unsigned __int8)(v1461 + 3) > 1u )
          {
            v1471 = v1470 | ((unsigned __int64)*(unsigned int *)(v143 + 40) << 48) | 0x32000000000LL;
            if ( !*(_DWORD *)(v99 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1470 ^ v1461;
              if ( !*(_DWORD *)(v99 + 2296) )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v1471;
                *(_DWORD *)(v99 + 2296) = 1;
                __b8(v99, 0LL);
              }
            }
          }
          v100 = *(unsigned int *)(v143 + 32);
          if ( (v1463 & *(_DWORD *)(v143 + 36)) != (_DWORD)v100
            || (v1463 & 0x10000) == 0 && (_BYTE)v1463 != 0xD1 && (unsigned __int8)(v1463 + 3) > 1u )
          {
            v1472 = v100 | ((unsigned __int64)*(unsigned int *)(v143 + 40) << 48) | 0x34000000000LL;
            if ( !*(_DWORD *)(v99 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v100 ^ v1463;
              if ( !*(_DWORD *)(v99 + 2296) )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = v143 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v99 + 2320) = *(int *)v143;
                *(_QWORD *)(v99 + 2328) = v1472;
                *(_DWORD *)(v99 + 2296) = 1;
                goto LABEL_2409;
              }
            }
          }
          goto LABEL_2410;
        }
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v99 + 416))(v2918, *(unsigned int *)(v143 + 40));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v99 + 464))(v2918, v2919);
        KiGetGdtIdt(&v2723, v2946);
        v1473 = v2724;
        v1474 = *(unsigned int *)(v143 + 16);
        if ( (*(_BYTE *)(v99 + 2171) & 2) != 0 )
        {
          v1475 = *(_QWORD *)(v99 + 2272);
          v1476 = 38LL;
          v1477 = 304;
          v1478 = (_QWORD *)v1475;
          do
          {
            *v1478 = 0LL;
            v1477 -= 8;
            ++v1478;
            --v1476;
          }
          while ( v1476 );
          if ( v1477 )
          {
            v1476 = 0xFFFFFFFFLL;
            do
            {
              *(_BYTE *)v1478 = 0;
              v1478 = (_QWORD *)((char *)v1478 + 1);
              --v1477;
            }
            while ( v1477 );
          }
          *(_OWORD *)(v1475 + 16) = *(_OWORD *)(v99 + 2120);
          *(_OWORD *)(v1475 + 32) = *(_OWORD *)(v99 + 2136);
          *(_OWORD *)(v1475 + 288) = *(_OWORD *)(v99 + 2152);
          v2738 = 303;
          v2739 = v1475;
          *(_WORD *)(v1475 + 16) = v99 + 2168;
          v2831 = (_BYTE *)(v99 + 2168);
          *(_WORD *)(v1475 + 22) = (unsigned int)(v99 + 2168) >> 16;
          *(_DWORD *)(v1475 + 24) = (v99 + 2168) >> 32;
          _disable();
          __sidt(v2787);
          __lidt(&v2738);
          __writedr(7u, 0LL);
          *(_WORD *)(v1475 + 16) = v99 + 2174;
          v1479 = (v99 + 2174) >> 16;
          *(_WORD *)(v1475 + 22) = v1479;
          *(_DWORD *)(v1475 + 24) = (v99 + 2174) >> 32;
          if ( (*(_BYTE *)(v99 + 2171) & 0x20) != 0 )
          {
            *(_WORD *)(v99 + 2218) = KiGetSs(v1479, v1475, v1476, 1LL);
            __writedr(0, v99 + 2218);
            __writedr(7u, 0x70001uLL);
            *(_QWORD *)(v99 + 2280) = KiErrataSkx55Present(v99 + 2218);
            __writedr(7u, 0LL);
            __writedr(0, 0LL);
          }
          else
          {
            *(_QWORD *)(v99 + 2280) = KiErrata704Present(v1479, v1475, v1476, 1LL);
          }
          *(_DWORD *)(v99 + 2288) = KeGetPcr()->Prcb.Number;
          __lidt(v2787);
          _enable();
        }
        Ldtr = KiGetLdtr();
        Tr = KiGetTr();
        *(_DWORD *)(v99 + 2088) += v1474;
        v1483 = *(unsigned int *)(v99 + 2068);
        v1484 = Tr;
        v1485 = *(_QWORD *)(v99 + 2072);
        v1486 = v1473;
        v1487 = (const char *)v1473;
        if ( v1473 < (_QWORD *)((char *)v1473 + v1474) )
        {
          v1482 = 64LL;
          do
          {
            _mm_prefetch(v1487, 0);
            v1487 += 64;
          }
          while ( v1487 < (const char *)v1473 + v1474 );
        }
        v1488 = *(_QWORD *)(v99 + 2072);
        v1489 = (unsigned int)v1474 >> 7;
        if ( (unsigned int)v1474 >> 7 )
        {
          do
          {
            v1490 = 8LL;
            do
            {
              v1491 = v1488 ^ *v1486;
              v1492 = v1486[1];
              v1486 += 2;
              v1488 = __ROL8__(__ROL8__(v1491, v1483) ^ v1492, v1483);
              --v1490;
            }
            while ( v1490 );
            v1493 = __ROL8__(v1485 ^ ((char *)v1486 - (char *)v1473), 17) ^ v1485 ^ ((char *)v1486 - (char *)v1473);
            v1482 = (v1493 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v2832 = v1482;
            v1483 = ((unsigned __int8)v1482 ^ (unsigned __int8)(v1493 ^ v1483)) & 0x3F;
            if ( !(_DWORD)v1483 )
              v1483 = 1LL;
            --v1489;
          }
          while ( v1489 );
          v99 = (unsigned __int64)v2621;
        }
        v1494 = v1474 & 0x7F;
        if ( v1494 >= 8 )
        {
          v1482 = (unsigned __int64)v1494 >> 3;
          do
          {
            v1488 = __ROL8__(*v1486++ ^ v1488, v1483);
            v1494 -= 8;
            --v1482;
          }
          while ( v1482 );
        }
        j = 0LL;
        if ( v1494 )
        {
          do
          {
            v1495 = *(unsigned __int8 *)v1486;
            v1486 = (_QWORD *)((char *)v1486 + 1);
            v1488 = __ROL8__(v1495 ^ v1488, v1483);
            --v1494;
          }
          while ( v1494 );
          j = 0LL;
        }
        for ( i39 = v1488; ; LODWORD(v1488) = i39 ^ v1488 )
        {
          i39 >>= 31;
          if ( !i39 )
            break;
        }
        v1497 = v1488 & 0x7FFFFFFF;
        (*(void (__fastcall **)(_BYTE *, __int64, _QWORD *, __int64))(v99 + 408))(v2919, v1482, v1486, v1483);
        v130 = (unsigned __int64)v2619;
        if ( v1497 == v2619[5] && v2723 == *((_WORD *)v2619 + 22) && !Ldtr && v1484 == 64 )
          goto LABEL_2410;
        if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
        {
          v1498 = *(_QWORD **)(v99 + 2688);
          v1499 = 48;
          v100 = 6LL;
          do
          {
            v1499 -= 8;
            *v1498 = *(_QWORD *)v130;
            v130 += 8LL;
            ++v1498;
            --v100;
          }
          while ( v100 );
          if ( v1499 )
          {
            do
            {
              v1500 = *(_BYTE *)v130++;
              *(_BYTE *)v1498 = v1500;
              v1498 = (_QWORD *)((char *)v1498 + 1);
              --v1499;
            }
            while ( v1499 );
            j = 0LL;
          }
          v130 = *(_QWORD *)(v99 + 2688);
        }
        *(_QWORD *)(v130 + 24) = v2724;
        *(_QWORD *)(v130 + 32) = v1497;
        if ( Ldtr )
        {
          v1501 = Ldtr;
          goto LABEL_2404;
        }
        if ( v1484 != 64 )
        {
          v1501 = v1484;
LABEL_2404:
          *(_QWORD *)(v130 + 24) = v1501;
        }
        v1502 = *(_DWORD *)(v99 + 2296);
        if ( !v1502 )
        {
          *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = *(unsigned int *)(v130 + 20) ^ (unsigned __int64)v1497;
          v1502 = *(_DWORD *)(v99 + 2296);
        }
        v1503 = *(_QWORD *)(v130 + 8);
        if ( !v1502 )
        {
          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v99 + 2312) = v130 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v99 + 2320) = *(int *)v130;
          *(_QWORD *)(v99 + 2328) = v1503;
          *(_DWORD *)(v99 + 2296) = 1;
LABEL_2409:
          __b8(v99, 0LL);
        }
LABEL_2410:
        *(_DWORD *)(v99 + 2088) += 0x8000;
        goto LABEL_213;
      }
      v1504 = *(unsigned int *)(v143 + 40);
      v1505 = *(void (__fastcall **)(_BYTE *, __int64))(v99 + 416);
      LODWORD(v2638) = 0;
      v1505(v2920, v1504);
      (*(void (__fastcall **)(_BYTE *, _BYTE *))(v99 + 464))(v2920, v2921);
      KiGetGdtIdt(v2947, &v2740);
      v1506 = 0;
      v2623 = v2741;
      v1507 = v2741 + 4;
      v2620 = v2741 + 4;
      do
      {
        v1508 = 0LL;
        v2673 = *(_QWORD *)(v99 + 2248);
        v1509 = 0LL;
        v1510 = *(_QWORD *)(v99 + 2256);
        v1511 = *(unsigned int *)(v99 + 2220);
        v1512 = *(unsigned int *)(v99 + 2224);
        v2625 = v1510;
        BugCheckParameter2 = 0LL;
        v2627 = 0LL;
        v1513 = KeGetCurrentIrql();
        __writecr8(0xFuLL);
        v1514 = *(_WORD *)v1507;
        LOWORD(v2645) = *(_WORD *)(v1507 - 4);
        WORD1(v2645) = *(_WORD *)(v1507 + 2);
        v1515 = *(_DWORD *)(v1507 + 4);
        v1516 = *(_QWORD *)(v99 + 1560);
        HIDWORD(v2645) = v1515;
        v1517 = v2645;
        v2995 = v1514;
        if ( v2645 != (int *)(v1516 + 8LL * v1506) )
        {
          v1519 = 0LL;
          goto LABEL_2421;
        }
        if ( (v1514 & 0x6000) == 0 )
        {
          v1509 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(v99 + 1136))(v1506);
          if ( v1509 )
          {
            v1518 = *(_QWORD *)(v1511 + v1509);
            BugCheckParameter2 = v1518;
            if ( v1506 < 0x30 )
            {
              __writecr8(v1513);
LABEL_2445:
              v1508 = BugCheckParameter2;
              goto LABEL_2446;
            }
            v1519 = *(char **)(v1512 + v1509);
            v1510 = v2625;
LABEL_2422:
            __writecr8(v1513);
            if ( !v1509 )
            {
              if ( (unsigned __int64)v1517 < v2673 )
                goto LABEL_2445;
              if ( (unsigned __int64)v1517 > v1510 )
                goto LABEL_2445;
              v1520 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v99 + 528))(
                        *(_QWORD *)(v99 + 2264),
                        v2673,
                        (unsigned int)((_DWORD)v2645 - v2673));
              if ( !v1520 || (*(_DWORD *)(v1520 + 36) & 0x2000000) != 0 )
                goto LABEL_2445;
            }
            if ( *(_WORD *)(v2620 - 2) != 16 || (*(_WORD *)v2620 & 0x1F00) != 0xE00 || *(__int16 *)v2620 >= 0 )
              goto LABEL_2445;
            v1521 = (unsigned int *)(*(__int64 (__fastcall **)(int *, unsigned __int64 *, _QWORD))(v99 + 608))(
                                      v1517,
                                      &v2673,
                                      0LL);
            if ( v1521 && (int *)(v2673 + *v1521) == v1517 && v2673 == *(_QWORD *)(v99 + 2248) )
            {
              if ( !v1509 )
                goto LABEL_2449;
            }
            else if ( !v1509 )
            {
              goto LABEL_2445;
            }
            if ( (v2995 & 0x6000) == 0 )
            {
              if ( v1509 == -1 )
                goto LABEL_2449;
              v1522 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, unsigned __int64 *, _QWORD))(v99 + 608))(
                                        v1518,
                                        &v2673,
                                        0LL);
              if ( v1522 )
              {
                if ( v2673 + *v1522 == v1518 && v2673 == *(_QWORD *)(v99 + 2248) )
                {
                  v1523 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v99 + 528))(
                            *(_QWORD *)(v99 + 2264),
                            v2673,
                            (unsigned int)(v1518 - v2673));
                  if ( v1523 )
                  {
                    if ( (*(_DWORD *)(v1523 + 36) & 0x2000000) == 0 && (v1506 != 254 || v1519 == *(char **)(v99 + 2232)) )
                      goto LABEL_2449;
                  }
                }
              }
            }
            goto LABEL_2445;
          }
          v1510 = v2625;
          v1509 = -1LL;
          v1519 = v2627;
LABEL_2421:
          v1518 = BugCheckParameter2;
          goto LABEL_2422;
        }
        __writecr8(v1513);
LABEL_2446:
        v1524 = *(_QWORD *)(v99 + 1424);
        *(_QWORD *)v1524 = v1517;
        *(_DWORD *)(v1524 + 16) = 128;
        if ( v1508 )
        {
          v1525 = *(_QWORD *)(v99 + 1424);
          *(_QWORD *)(v1525 + 8) = v1508;
          *(_DWORD *)(v1525 + 20) = 128;
        }
        LODWORD(v2638) = 1;
LABEL_2449:
        ++v1506;
        v1507 = v2620 + 16;
        v2620 += 16LL;
      }
      while ( v1506 <= 0xFF );
      if ( (*(_BYTE *)(v99 + 2171) & 1) != 0 )
      {
        _disable();
        v1526 = 3221225602LL;
        v1527 = __readmsr(0xC0000082);
        v1528 = (struct _KPRCB *)((v99 + 2170) >> 32);
        __writemsr(0xC0000082, v99 + 2170);
        if ( (*(_DWORD *)(v99 + 2452) & 0x20000) == 0 )
        {
          v1528 = KeGetCurrentPrcb();
          v1526 = v99 - 0x5C5FC0A76E374B18LL;
          **(_QWORD **)(v99 + 1216) = v99 - 0x5C5FC0A76E374B18LL;
          **(_QWORD **)(v99 + 1224) = v1528;
          **(_QWORD **)(v99 + 1232) = 3221225602LL;
          **(_QWORD **)(v99 + 1240) = 274LL;
        }
        ((void (__fastcall *)(__int64, struct _KPRCB *))(v99 + 2172))(v1526, v1528);
        if ( (*(_DWORD *)(v99 + 2452) & 0x20000) == 0 )
        {
          **(_QWORD **)(v99 + 1216) = 0xA3A03F5891C8B4E8uLL;
          **(_QWORD **)(v99 + 1224) = 0LL;
          **(_QWORD **)(v99 + 1232) = 0LL;
          **(_QWORD **)(v99 + 1240) = 0LL;
        }
        __writemsr(0xC0000082, v1527);
        _enable();
      }
      v1529 = (_QWORD *)v2623;
      *(_DWORD *)(v99 + 2088) += 848;
      v1530 = v1529;
      v1531 = *(_DWORD *)(v99 + 2088);
      v1532 = (const char *)v1529;
      v1533 = *(_DWORD *)(v99 + 2068);
      v1534 = *(_QWORD *)(v99 + 2072);
      if ( v1529 < v1529 + 106 )
      {
        do
        {
          _mm_prefetch(v1532, 0);
          v1532 += 64;
        }
        while ( v1532 < (const char *)v1529 + 848 );
      }
      v1535 = 6;
      v1536 = *(_QWORD *)(v99 + 2072);
      do
      {
        v1537 = 8LL;
        do
        {
          v1538 = v1536 ^ *v1530;
          v1539 = v1530 + 1;
          v1540 = *v1539;
          v1530 = v1539 + 1;
          v1536 = __ROL8__(__ROL8__(v1538, v1533) ^ v1540, v1533);
          --v1537;
        }
        while ( v1537 );
        v1541 = __ROL8__(v1534 ^ ((char *)v1530 - (char *)v1529), 17) ^ v1534 ^ ((char *)v1530 - (char *)v1529);
        v2833 = (v1541 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v1533 = ((unsigned __int8)v2833 ^ (unsigned __int8)(v1541 ^ v1533)) & 0x3F;
        if ( !v1533 )
          LOBYTE(v1533) = 1;
        --v1535;
      }
      while ( v1535 );
      v99 = (unsigned __int64)v2621;
      v1542 = 80;
      v1543 = (int)v2638;
      v1544 = 10LL;
      do
      {
        v1536 = __ROL8__(*v1530++ ^ v1536, v1533);
        v1542 -= 8;
        --v1544;
      }
      while ( v1544 );
      for ( ; v1542; --v1542 )
      {
        v1545 = *(unsigned __int8 *)v1530;
        v1530 = (_QWORD *)((char *)v1530 + 1);
        v1536 = __ROL8__(v1545 ^ v1536, v1533);
      }
      for ( i40 = v1536; ; LODWORD(v1536) = i40 ^ v1536 )
      {
        i40 >>= 31;
        if ( !i40 )
          break;
      }
      v1547 = v1536 & 0x7FFFFFFF;
      *((_DWORD *)v2621 + 522) = v1531 + 16;
      v1548 = v1529 + 450;
      v1549 = *(_DWORD *)(v99 + 2068);
      v1550 = *(_QWORD *)(v99 + 2072);
      v1551 = (const char *)(v1529 + 450);
      if ( v1529 + 450 < v1529 + 452 )
      {
        do
        {
          _mm_prefetch(v1551, 0);
          v1551 += 64;
        }
        while ( v1551 < (const char *)v1529 + 3616 );
      }
      v1552 = 2LL;
      v1553 = 16;
      do
      {
        v1550 = __ROL8__(*v1548++ ^ v1550, v1549);
        v1553 -= 8;
        --v1552;
      }
      while ( v1552 );
      j = 0LL;
      if ( v1553 )
      {
        do
        {
          v1554 = *(unsigned __int8 *)v1548;
          v1548 = (_QWORD *)((char *)v1548 + 1);
          v1550 = __ROL8__(v1554 ^ v1550, v1549);
          --v1553;
        }
        while ( v1553 );
        j = 0LL;
      }
      for ( i41 = v1550; ; LODWORD(v1550) = i41 ^ v1550 )
      {
        i41 >>= 31;
        if ( !i41 )
          break;
      }
      v1556 = v1550 & 0x7FFFFFFF;
      (*(void (__fastcall **)(_BYTE *, _QWORD *))(v99 + 408))(v2921, v1548);
      v100 = (unsigned __int64)v2619;
      v1557 = (unsigned int)v2619[5];
      if ( v1547 != (_DWORD)v1557 || v1556 != *((_QWORD *)v2619 + 3) || v2740 != *((_WORD *)v2619 + 22) || v1543 )
      {
        if ( !v1543 )
        {
          if ( v1556 == *((_QWORD *)v2619 + 3) )
          {
            if ( !*(_DWORD *)(v99 + 2296) )
            {
              v1558 = v1557 ^ v1547;
              goto LABEL_2491;
            }
          }
          else if ( !*(_DWORD *)(v99 + 2296) )
          {
            v1558 = (unsigned int)v2619[6] ^ (unsigned __int64)v1556;
LABEL_2491:
            *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v1558;
          }
        }
        v1559 = *(_QWORD *)(v100 + 8);
        if ( !*(_DWORD *)(v99 + 2296) )
        {
          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v99 + 2312) = v100 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v99 + 2320) = *(int *)v100;
          *(_QWORD *)(v99 + 2328) = v1559;
          *(_DWORD *)(v99 + 2296) = 1;
          __b8(v99, 0LL);
        }
      }
      *(_DWORD *)(v99 + 2088) += 0x10000;
LABEL_213:
      v151 = v2641 - 1;
      if ( !*(_DWORD *)(v99 + 2084) )
        v151 = v2641;
      *((_QWORD *)&v132 + 1) = 1LL;
      v131 = (unsigned int)(v151 + 1);
      if ( *(_DWORD *)(v99 + 2296) != (_DWORD)j
        || (v133 = (_DWORD *)(v99 + 2092),
            v152 = *(_DWORD *)(v99 + 2092),
            v2636 = (_DWORD *)(v99 + 2092),
            *(_DWORD *)(v99 + 2088) >= v152) )
      {
        v106 = 1;
        break;
      }
      v134 = v2631;
      v135 = v2629;
      v136 = v2632;
    }
  }
  *(_DWORD *)(v99 + 2080) = v131;
  if ( v2647 != (_DWORD)j )
  {
    v1564 = *(_QWORD *)(v99 + 1704) + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v99 + 1608));
    v1565 = *(_QWORD *)(v1564 + *(_QWORD *)(v99 + 1672));
    (*(void (__fastcall **)(_BYTE *, __int64, unsigned __int64, unsigned __int64))(v99 + 408))(v2924, v1564, v100, v130);
    (*(void (__fastcall **)(_BYTE *))(v99 + 1088))(v2802);
    (*(void (__fastcall **)(__int64))(v99 + 936))(v1565);
    (*(void (__fastcall **)(__int64))(v99 + 952))(v1565);
  }
  if ( v2630 != (_DWORD)j && ((*(_DWORD *)(v99 + 2448) & 0x8000) != 0 || *(_DWORD *)(v99 + 2296) == (_DWORD)j) )
  {
    v1566 = *(_QWORD *)(v99 + 2432);
    *(_QWORD *)(v99 + 2432) = j;
    (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int64, unsigned __int64))(v99 + 664))(v1566, v2802, v100, v130);
    LODWORD(v132) = *(_DWORD *)(v99 + 2448);
    if ( (v132 & 1) != 0 )
    {
      *(_DWORD *)(v99 + 2448) = v132 & 0xFFFFFFFE;
      v1566 = (*(__int64 (__fastcall **)(__int64))(v99 + 640))(v1566);
      if ( v1566 )
        LODWORD(v132) = (*(__int64 (__fastcall **)(__int64))(v99 + 672))(v1566);
      else
        LODWORD(v132) = -1;
      *(_DWORD *)(v99 + 2416) = v132;
    }
    if ( v1566 )
      (*(void (__fastcall **)(__int64))(v99 + 648))(v1566);
  }
  if ( (*(_DWORD *)(v99 + 2448) & 0x800008) == 0x800008 )
  {
    v1567 = *(unsigned int *)(v99 + 2056);
    v207 = (*(_DWORD *)(v99 + 2452) & 1) == 0;
    v1568 = *(_DWORD *)(v99 + 2020);
    v1569 = *(_QWORD *)(v99 + 2552);
    v2623 = *(_QWORD *)(v99 + 2672);
    v2996 = v1567;
    if ( !v207 )
      v1569 = *(_QWORD *)(v99 + 1496);
    v2629 = *(const char **)(v99 + 352);
    v2645 = *(int **)(v99 + 712);
    v2631 = *(_QWORD *)(v99 + 832);
    v1570 = __rdtsc();
    v1571 = (__ROR8__(v1570, 3) ^ v1570) * (unsigned __int128)0x7010008004002001uLL;
    v2834 = *((_QWORD *)&v1571 + 1);
    v1572 = -1200000000LL - ((unsigned __int64)v1571 ^ *((_QWORD *)&v1571 + 1)) % 0x5F5E100;
    v2684 = v1572;
    v1573 = *(_DWORD *)(v99 + 2448);
    if ( (v1573 & 0x4000000) != 0 )
    {
      v1574 = __rdtsc();
      v1575 = (__ROR8__(v1574, 3) ^ v1574) * (unsigned __int128)0x7010008004002001uLL;
      v2835 = *((_QWORD *)&v1575 + 1);
      if ( ((unsigned __int64)v1575 ^ *((_QWORD *)&v1575 + 1)) % 0xA < 2 )
      {
        v1576 = __rdtsc();
        v1577 = (__ROR8__(v1576, 3) ^ v1576) * (unsigned __int128)0x7010008004002001uLL;
        v2836 = *((_QWORD *)&v1577 + 1);
        v2684 = v1572 * (((unsigned __int64)v1577 ^ *((_QWORD *)&v1577 + 1)) % 0xA + 1);
        v1573 = *(_DWORD *)(v99 + 2448);
      }
    }
    v1578 = v1567;
    v1579 = j;
    if ( (v1573 & 2) != 0 )
      v1578 = v1568;
    if ( (v1573 & 0x80u) != 0 )
    {
      v1580 = __rdtsc();
      v1581 = (__ROR8__(v1580, 3) ^ v1580) * (unsigned __int128)0x7010008004002001uLL;
      v1582 = 340;
      v2837 = *((_QWORD *)&v1581 + 1);
      v1579 = v1581 ^ *((_QWORD *)&v1581 + 1);
      v1583 = (_QWORD *)(v99 + 2712);
      j = v99 ^ v1579;
      v1584 = v1579;
      do
      {
        *v1583-- ^= v1584;
        v1584 = __ROR8__(v1584, v1582--);
      }
      while ( v1582 );
      v1585 = (unsigned __int64)(v1567 - 2720) >> 3;
      if ( (_DWORD)v1585 )
      {
        v1586 = (__int64 *)(v99 + 2712 + 8LL * (int)v1585);
        do
        {
          v1587 = *v1586--;
          j = (2 * j) ^ __ROR8__(v1587, v1585);
          LODWORD(v1585) = v1585 - 1;
        }
        while ( (_DWORD)v1585 );
        v99 = (unsigned __int64)v2621;
      }
      v1588 = (v1578 - (unsigned int)v1567) >> 3;
      if ( (_DWORD)v1588 )
      {
        v1589 = (_QWORD *)(v99 + v1567 + 8 * v1588 - 8);
        do
        {
          *v1589-- ^= v1584;
          v1584 = __ROR8__(v1584, v1588);
          LODWORD(v1588) = v1588 - 1;
        }
        while ( (_DWORD)v1588 );
      }
    }
    else
    {
      v106 = 0;
    }
    if ( v2623 )
    {
      ((void (__fastcall *)(unsigned __int64, _QWORD, unsigned __int64 *, const char *, __int64))v2631)(
        v99,
        v1578,
        &v2684,
        v2629,
        v2623);
    }
    else if ( v1569 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, unsigned __int64 *))v2645)(v1569, 0LL, 0LL, 0LL, &v2684);
    }
    else
    {
      ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *))v2629)(0LL, 0LL, &v2684);
    }
    if ( !v106 )
      goto LABEL_2550;
    v1590 = (_QWORD *)(v99 + 2712);
    v130 = v99 ^ v1579;
    v1591 = 340;
    do
    {
      *v1590-- ^= v1579;
      v1579 = __ROR8__(v1579, v1591--);
    }
    while ( v1591 );
    v1592 = v2996;
    v100 = ((unsigned __int64)v2996 - 2720) >> 3;
    if ( (_DWORD)v100 )
    {
      v1593 = (__int64 *)(v99 + 8 * ((int)v100 + 339LL));
      do
      {
        v1594 = *v1593--;
        *((_QWORD *)&v132 + 1) = __ROR8__(v1594, v100);
        v130 = (2 * v130) ^ *((_QWORD *)&v132 + 1);
        v100 = (unsigned int)(v100 - 1);
      }
      while ( (_DWORD)v100 );
      v1592 = v2996;
    }
    v1595 = (v1578 - v2996) >> 3;
    if ( v1595 )
    {
      *((_QWORD *)&v132 + 1) = v99 + v1592 + 8 * (v1595 - 1LL);
      do
      {
        **((_QWORD **)&v132 + 1) ^= v1579;
        v1579 = __ROR8__(v1579, v1595);
        *((_QWORD *)&v132 + 1) -= 8LL;
        --v1595;
      }
      while ( v1595 );
    }
    if ( v130 == j )
    {
LABEL_2550:
      j = 0LL;
    }
    else
    {
      v1596 = *(_QWORD *)(v99 + 1424);
      v1597 = *(_DWORD *)(v99 + 2020);
      *(_QWORD *)v1596 = v99;
      *(_DWORD *)(v1596 + 16) = v1597;
      v1598 = *(_DWORD *)(v99 + 2296);
      if ( !v1598 )
      {
        *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = j ^ v130;
        v1598 = *(_DWORD *)(v99 + 2296);
      }
      j = 0LL;
      if ( !v1598 )
      {
        *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v99 + 2312) = 0LL;
        *(_QWORD *)(v99 + 2320) = 270LL;
        *(_QWORD *)(v99 + 2328) = v130;
        *(_DWORD *)(v99 + 2296) = 1;
        __b8(v99, 0LL);
      }
    }
  }
  v1599 = *(_DWORD *)(v99 + 2392);
  if ( v1599 == 11 || v1599 == 1 )
    goto LABEL_3646;
  if ( *(_DWORD *)(v99 + 2296) != (_DWORD)j )
    goto LABEL_3647;
  if ( **(_QWORD **)(v99 + 2400) == *(_QWORD *)(v99 + 2408) )
  {
    if ( (*(_DWORD *)(v99 + 2096) & 1) != 0 )
    {
      v2232 = *(unsigned int *)(v99 + 2416);
      v2233 = (_DWORD)v2232 == -1
            ? j
            : (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 632))(
                v2232,
                *((_QWORD *)&v132 + 1),
                v100,
                v130);
      if ( v2233 || (v2233 = (*(__int64 (__fastcall **)(_QWORD))(v99 + 640))(0LL)) != 0 )
      {
        v2234 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v99 + 656))(v2233, v2802);
        if ( v2234 >= 0 )
        {
          *(_QWORD *)(v99 + 2432) = v2233;
          v2235 = (*(__int64 (**)(void))(v99 + 696))();
          *((_QWORD *)&v132 + 1) = (*(__int64 (__fastcall **)(__int64))(v99 + 728))(v2235);
          if ( *((_QWORD *)&v132 + 1) )
          {
            (*(void (__fastcall **)(__int64, _QWORD))(v99 + 744))(v2235, *((_QWORD *)&v132 + 1));
            v2236 = j;
          }
          else
          {
            v2236 = 4;
          }
          v2234 = j;
          *(_DWORD *)(v99 + 2452) = v2236 | *(_DWORD *)(v99 + 2452) & 0xFFFFFFFB;
          *(_DWORD *)(v99 + 2088) += 0x10000;
        }
        else
        {
          (*(void (__fastcall **)(__int64))(v99 + 648))(v2233);
        }
        if ( v2234 >= 0 )
        {
          if ( **(_QWORD **)(v99 + 2400) == *(_QWORD *)(v99 + 2408)
            && *(_DWORD *)(*(_QWORD *)(v99 + 1392) + 48LL) != (_DWORD)j )
          {
            _InterlockedOr(v2617, j);
            if ( **(_QWORD **)(v99 + 2400) == *(_QWORD *)(v99 + 2408) )
            {
              *((_QWORD *)&v132 + 1) = **(_QWORD **)(v99 + 2400);
              if ( !*(_DWORD *)(v99 + 2296) )
              {
                *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = *((_QWORD *)&v132 + 1) ^ *(_QWORD *)(v99 + 2408);
                v2237 = *(_QWORD *)(v99 + 2408);
                if ( !*(_DWORD *)(v99 + 2296) )
                {
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = j;
                  *(_QWORD *)(v99 + 2320) = 259LL;
                  *(_QWORD *)(v99 + 2328) = v2237;
                  *(_DWORD *)(v99 + 2296) = 1;
                  __b8(v99, 0LL);
                }
              }
            }
          }
          if ( (*(_DWORD *)(v99 + 2448) & 0x8000) != 0 || *(_DWORD *)(v99 + 2296) == (_DWORD)j )
          {
            v2238 = *(_QWORD *)(v99 + 2432);
            *(_QWORD *)(v99 + 2432) = j;
            (*(void (__fastcall **)(__int64, _BYTE *))(v99 + 664))(v2238, v2802);
            LODWORD(v132) = *(_DWORD *)(v99 + 2448);
            if ( (v132 & 1) != 0 )
            {
              *(_DWORD *)(v99 + 2448) = v132 & 0xFFFFFFFE;
              v2238 = (*(__int64 (__fastcall **)(__int64))(v99 + 640))(v2238);
              if ( v2238 )
                *(_DWORD *)(v99 + 2416) = (*(__int64 (__fastcall **)(__int64))(v99 + 672))(v2238);
              else
                *(_DWORD *)(v99 + 2416) = -1;
            }
            if ( v2238 )
              (*(void (__fastcall **)(__int64))(v99 + 648))(v2238);
          }
        }
      }
    }
    goto LABEL_3646;
  }
  v1600 = *(unsigned int *)(v99 + 2416);
  v1601 = (_BYTE *)v99;
  v2625 = v99;
  if ( (_DWORD)v1600 == -1 )
    v1602 = j;
  else
    v1602 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 632))(
              v1600,
              *((_QWORD *)&v132 + 1),
              v100,
              v130);
  if ( v1602 || (v1602 = (*(__int64 (__fastcall **)(_QWORD))(v99 + 640))(0LL)) != 0 )
  {
    v1603 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(v99 + 656))(v1602, v2802);
    if ( v1603 >= 0 )
    {
      *(_QWORD *)(v99 + 2432) = v1602;
      v1604 = (*(__int64 (**)(void))(v99 + 696))();
      *((_QWORD *)&v132 + 1) = (*(__int64 (__fastcall **)(__int64))(v99 + 728))(v1604);
      if ( *((_QWORD *)&v132 + 1) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(v99 + 744))(v1604, *((_QWORD *)&v132 + 1));
        v1605 = 0;
      }
      else
      {
        v1605 = 4;
      }
      v1603 = 0;
      *(_DWORD *)(v99 + 2452) = v1605 | *(_DWORD *)(v99 + 2452) & 0xFFFFFFFB;
      *(_DWORD *)(v99 + 2088) += 0x10000;
    }
    else
    {
      (*(void (__fastcall **)(__int64))(v99 + 648))(v1602);
    }
    if ( v1603 >= 0 )
    {
      j = 0LL;
      if ( (*(unsigned int (__fastcall **)(_QWORD))(v99 + 672))(*(_QWORD *)(v99 + 2432)) )
        goto LABEL_2754;
      v1606 = *(_QWORD *)(v99 + 2408);
      v1607 = &v2760;
      v1608 = *(_QWORD *)(v99 + 1400) + 32LL;
      v2620 = 0LL;
      v2760 = v1608;
      v1609 = *(_QWORD *)(v99 + 1392);
      v2645 = (int *)v1606;
      v2761 = v1609 + 32;
      v1610 = *(_QWORD *)(v99 + 2400);
      v1611 = 0LL;
      v2627 = (char *)v1610;
      v2629 = (const char *)&v2760;
      v2631 = 2LL;
      do
      {
        v1612 = *v1607;
        v1613 = v1610 ^ v1611;
        v2623 = v1612;
        v1614 = v1613 & 0x3F;
        v1615 = *(const char **)v1612;
        v1617 = *(const char **)v1612;
        v2997 = *(_DWORD *)(v1612 + 16);
        v1616 = v2997;
        v1618 = 4 * v2997;
        v1619 = *(const char **)v1612;
        v1620 = *(_QWORD *)v1612 + 4 * v2997;
        if ( *(_QWORD *)v1612 < v1620 )
        {
          do
          {
            _mm_prefetch(v1619, 0);
            v1619 += 64;
          }
          while ( (unsigned __int64)v1619 < v1620 );
        }
        v1621 = v1613;
        v1622 = v1618 >> 7;
        if ( v1618 >> 7 )
        {
          do
          {
            v1623 = 8LL;
            do
            {
              v1624 = *((_QWORD *)v1617 + 1) ^ __ROL8__(*(_QWORD *)v1617 ^ v1621, v1614);
              v1617 += 16;
              v1621 = __ROL8__(v1624, v1614);
              --v1623;
            }
            while ( v1623 );
            v1625 = (__ROL8__(v1613 ^ (v1617 - v1615), 17) ^ v1613 ^ (v1617 - v1615))
                  * (unsigned __int128)0x7010008004002001uLL;
            v2838 = *((_QWORD *)&v1625 + 1);
            v1614 = (v1625 ^ DWORD2(v1625) ^ v1614) & 0x3F;
            if ( !v1614 )
              v1614 = 1;
            --v1622;
          }
          while ( v1622 );
          v1616 = v2997;
          v1612 = v2623;
          v1607 = (__int64 *)v2629;
          v1606 = (unsigned __int64)v2645;
        }
        v1626 = v1618 & 0x7F;
        if ( v1626 >= 8 )
        {
          v1627 = (unsigned __int64)v1626 >> 3;
          do
          {
            v1621 = __ROL8__(*(_QWORD *)v1617 ^ v1621, v1614);
            v1617 += 8;
            v1626 -= 8;
            --v1627;
          }
          while ( v1627 );
        }
        for ( ; v1626; --v1626 )
        {
          v1628 = *(unsigned __int8 *)v1617++;
          v1621 = __ROL8__(v1628 ^ v1621, v1614);
        }
        v1629 = *(_QWORD **)(v1612 + 24);
        v1630 = v1606 ^ v1621;
        v1631 = v1629;
        LOBYTE(v1632) = v1630 & 0x3F;
        v1633 = (const char *)v1629;
        v1634 = v1616;
        v1635 = (unsigned __int64)v1629 + v1616;
        if ( (unsigned __int64)v1629 < v1635 )
        {
          do
          {
            _mm_prefetch(v1633, 0);
            v1633 += 64;
          }
          while ( (unsigned __int64)v1633 < v1635 );
        }
        v1636 = v1630;
        v1637 = v1616 >> 7;
        if ( v1616 >> 7 )
        {
          do
          {
            v1638 = 8LL;
            do
            {
              v1639 = v1636 ^ *v1631;
              v1640 = v1631[1];
              v1631 += 2;
              v1636 = __ROL8__(__ROL8__(v1639, v1632) ^ v1640, v1632);
              --v1638;
            }
            while ( v1638 );
            v1641 = __ROL8__(v1630 ^ ((char *)v1631 - (char *)v1629), 17) ^ v1630 ^ ((char *)v1631 - (char *)v1629);
            v2839 = (v1641 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1632 = ((unsigned __int8)(v1641 ^ v2839) ^ (unsigned __int8)v1632) & 0x3F;
            if ( !v1632 )
              LOBYTE(v1632) = 1;
            --v1637;
          }
          while ( v1637 );
          v1607 = (__int64 *)v2629;
        }
        v1642 = v1616 & 0x7F;
        if ( v1642 >= 8 )
        {
          v1643 = (unsigned __int64)v1642 >> 3;
          do
          {
            v1636 = __ROL8__(*v1631++ ^ v1636, v1632);
            v1642 -= 8;
            --v1643;
          }
          while ( v1643 );
        }
        for ( ; v1642; --v1642 )
        {
          v1644 = *(unsigned __int8 *)v1631;
          v1631 = (_QWORD *)((char *)v1631 + 1);
          v1636 = __ROL8__(v1644 ^ v1636, v1632);
        }
        v1610 = (unsigned __int64)v2627;
        ++v1607;
        v1606 = (unsigned __int64)v2645;
        v2629 = (const char *)v1607;
        v1611 = v1636 ^ v1634 ^ (unsigned __int64)v1615;
        --v2631;
      }
      while ( v2631 );
      v2620 = v1636 ^ v1634 ^ (unsigned __int64)v1615;
      v99 = (unsigned __int64)v2621;
      (*((void (__fastcall **)(const char *, unsigned __int64 *))v2621 + 65))(v1615, &v2726);
      v1601 = (_BYTE *)v2625;
      j = 0LL;
      if ( v2726 )
      {
        v1645 = __rdtsc();
        v1646 = (__ROR8__(v1645, 3) ^ v1645) * (unsigned __int128)0x7010008004002001uLL;
        v2840 = *((_QWORD *)&v1646 + 1);
        v1647 = ((unsigned __int64)v1646 ^ *((_QWORD *)&v1646 + 1)) % 0xB;
        if ( (unsigned int)v1647 > 5 )
        {
          v1651 = v1647 - 6;
          if ( v1651 )
          {
            v1652 = v1651 - 1;
            if ( v1652 )
            {
              v1653 = v1652 - 1;
              if ( v1653 )
              {
                if ( v1653 == 1 )
                {
                  v2688 = -1333354875;
                  v1650 = __ROR4__(-1333354868, 33);
                }
                else
                {
                  v1654 = __rdtsc();
                  v1655 = __ROR8__(v1654, 3);
                  v2841 = ((v1655 ^ v1654) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v1656 = (67117057 * (v1655 ^ v1654)) ^ v2841;
                  v1650 = ((((((v1656 % 0x1A + 97) << 8) | ((v1656 >> 5)
                                                          - 26
                                                          * ((unsigned int)((1321528399 * (unsigned __int64)(v1656 >> 5)) >> 32) >> 3)
                                                          + 65)) << 8) | ((v1656 >> 10) % 0x1A + 97)) << 8) | ((v1656 >> 15) % 0x1A + 65);
                }
              }
              else
              {
                v2689 = 1684422978;
                v1650 = __ROR4__(1684422978, 8);
              }
            }
            else
            {
              v2690 = -2100910376;
              v1650 = __ROL4__(-2100910376, 7);
            }
          }
          else
          {
            v2691 = 1314342514;
            v1650 = __ROR4__(1314342516, 24);
          }
        }
        else if ( (_DWORD)v1647 == 5 )
        {
          v2687 = 680282605;
          v1650 = __ROR4__(680282605, 5);
        }
        else if ( (_DWORD)v1647 )
        {
          v1648 = v1647 - 1;
          if ( v1648 )
          {
            v1649 = v1648 - 1;
            if ( v1649 )
            {
              if ( v1649 == 1 )
              {
                v2717 = -1474152136;
                v1650 = __ROR4__(-1474152133, 15);
              }
              else
              {
                v2716 = 1728537748;
                v1650 = __ROL4__(1728537748, 4);
              }
            }
            else
            {
              v2718 = -2051698419;
              v1650 = __ROR4__(-2051698419, 2);
            }
          }
          else
          {
            v2719 = -1297272415;
            v1650 = __ROL4__(-1297272415, 1);
          }
        }
        else
        {
          v2720 = -795291432;
          v1650 = __ROR4__(-795291432, 6);
        }
        *(_QWORD *)&v132 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(v99 + 248))(512LL, 128LL, v1650);
        v2645 = (int *)v132;
        v130 = v132;
        if ( !(_QWORD)v132 )
          goto LABEL_2754;
        v1657 = 128;
        *((_QWORD *)&v132 + 1) = 16LL;
        do
        {
          *(_QWORD *)v132 = 0LL;
          v1657 -= 8;
          *(_QWORD *)&v132 = v132 + 8;
          --*((_QWORD *)&v132 + 1);
        }
        while ( *((_QWORD *)&v132 + 1) );
        for ( ; v1657; --v1657 )
        {
          *(_BYTE *)v132 = 0;
          *(_QWORD *)&v132 = v132 + 1;
        }
        v1658 = 0LL;
        v2674 = v2726;
        *(_QWORD *)v130 = v2726;
        v1659 = v2620;
        v2631 = v2620;
        v2998 = 0;
        v2636 = 0LL;
        while ( 1 )
        {
          v2674 = *(_QWORD *)(v130 + 8LL * (_QWORD)v1658);
          if ( !v2674 )
            goto LABEL_2710;
          v1660 = v1659 & 0x3F;
          v1661 = (*(__int64 (**)(void))(v99 + 504))();
          v2629 = (const char *)v1661;
          if ( !v1661 )
            break;
          v1662 = v2631;
          v1663 = (char *)(v1661 + *(unsigned __int16 *)(v1661 + 20) + 24LL);
          v2627 = &v1663[40 * *(unsigned __int16 *)(v1661 + 6)];
          v1664 = v2627;
          do
          {
            v1665 = 0;
            if ( (*((_DWORD *)v1663 + 9) & 0x2000000) != 0
              || (v1666 = *(_DWORD *)v1663, *(_DWORD *)v1663 == 1414090313) && *((_DWORD *)v1663 + 1) == 1195525195
              || v1666 == 1162297680
              && ((v1667 = *((_WORD *)v1663 + 2), v1667 == 30839) || v1667 == 29303 || v1667 == 30583)
              || v1666 == 1095914053 && *((_WORD *)v1663 + 2) == 16724 )
            {
LABEL_2656:
              v1665 = 1;
            }
            else
            {
              v1668 = *(char **)(v99 + 2352);
              v1669 = 7;
              v2770 = *(__int64 **)(v99 + 2360);
              v1670 = v1663 - v1668;
              v2771 = *(char **)(v99 + 2368);
              v2772 = *(char **)(v99 + 2376);
              v2769 = v1668;
              while ( 1 )
              {
                v1671 = (unsigned __int8)v1668[v1670];
                v1672 = (unsigned __int8)*v1668++;
                if ( v1671 != v1672 )
                  break;
                if ( !--v1669 )
                  goto LABEL_2656;
              }
              v1673 = v2770;
              v1674 = 8;
              v1675 = (__int64 *)v1663;
              while ( 1 )
              {
                v1676 = *v1675++;
                v1677 = *v1673++;
                if ( v1676 != v1677 )
                  break;
                v1674 -= 8;
                if ( v1674 < 8 )
                {
                  if ( !v1674 )
                    goto LABEL_2656;
                  while ( 1 )
                  {
                    v1678 = *(unsigned __int8 *)v1675;
                    v1675 = (__int64 *)((char *)v1675 + 1);
                    v1679 = *(unsigned __int8 *)v1673;
                    v1673 = (__int64 *)((char *)v1673 + 1);
                    if ( v1678 != v1679 )
                      goto LABEL_2649;
                    if ( !--v1674 )
                      goto LABEL_2656;
                  }
                }
              }
LABEL_2649:
              v1680 = v2771;
              v1681 = 4;
              while ( 1 )
              {
                v1682 = (unsigned __int8)v1680[v1663 - v2771];
                v1683 = (unsigned __int8)*v1680++;
                if ( v1682 != v1683 )
                  break;
                if ( !--v1681 )
                  goto LABEL_2656;
              }
              v1684 = v2772;
              v1685 = 6;
              while ( 1 )
              {
                v1686 = (unsigned __int8)v1684[v1663 - v2772];
                v1687 = (unsigned __int8)*v1684++;
                if ( v1686 != v1687 )
                  break;
                if ( !--v1685 )
                  goto LABEL_2656;
              }
            }
            v1688 = *((_DWORD *)v1663 + 4);
            if ( *((int *)v1663 + 9) < 0 )
              v1665 = 1;
            if ( v1688 <= *((_DWORD *)v1663 + 2) )
              v1688 = *((_DWORD *)v1663 + 2);
            if ( !v1665 )
            {
              v1689 = (_QWORD *)(v2674 + *((unsigned int *)v1663 + 3));
              LOBYTE(v1690) = v1660;
              v1691 = (unsigned __int64)v1689 + v1688;
              v1692 = v1689;
              v1693 = (const char *)v1689;
              if ( (unsigned __int64)v1689 < v1691 )
              {
                do
                {
                  _mm_prefetch(v1693, 0);
                  v1693 += 64;
                }
                while ( (unsigned __int64)v1693 < v1691 );
              }
              v1694 = v1662;
              v1695 = v1688 >> 7;
              if ( v1688 >> 7 )
              {
                do
                {
                  v1696 = 8LL;
                  do
                  {
                    v1697 = v1692[1] ^ __ROL8__(*v1692 ^ v1694, v1690);
                    v1692 += 2;
                    v1694 = __ROL8__(v1697, v1690);
                    --v1696;
                  }
                  while ( v1696 );
                  v1698 = (__ROL8__(v1662 ^ ((char *)v1692 - (char *)v1689), 17) ^ v1662 ^ ((char *)v1692 - (char *)v1689))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v2842 = *((_QWORD *)&v1698 + 1);
                  v1690 = ((unsigned __int8)v1698 ^ (unsigned __int8)(BYTE8(v1698) ^ v1690)) & 0x3F;
                  if ( !v1690 )
                    LOBYTE(v1690) = 1;
                  --v1695;
                }
                while ( v1695 );
                v99 = (unsigned __int64)v2621;
                v1664 = v2627;
              }
              v1699 = v1688 & 0x7F;
              if ( v1699 >= 8 )
              {
                v1700 = (unsigned __int64)v1699 >> 3;
                do
                {
                  v1694 = __ROL8__(*v1692++ ^ v1694, v1690);
                  v1699 -= 8;
                  --v1700;
                }
                while ( v1700 );
              }
              for ( ; v1699; --v1699 )
              {
                v1701 = *(unsigned __int8 *)v1692;
                v1692 = (_QWORD *)((char *)v1692 + 1);
                v1694 = __ROL8__(v1701 ^ v1694, v1690);
              }
              v1662 = v1694;
            }
            v1663 += 40;
          }
          while ( v1663 != v1664 );
          v1702 = v2998;
          v2631 = v1662;
          if ( !v2998 )
          {
            v1703 = v2629;
            v1704 = v2674;
            v1705 = *((unsigned int *)v2629 + 37);
            if ( (unsigned int)v1705 >= 0x14 )
            {
              v1706 = *((unsigned int *)v2629 + 36);
              v1707 = v2674 + v1706 + v1705;
              v1708 = v1706 + v2674;
              if ( v1706 + v2674 != v1707 )
              {
                while ( 1 )
                {
                  if ( !*(_DWORD *)(v1708 + 12) || (v1709 = *(unsigned int *)(v1708 + 16), !(_DWORD)v1709) )
                  {
                    v1702 = 0;
                    break;
                  }
                  v1710 = *(_QWORD *)(v1709 + v1704);
                  if ( v1710 && (v1710 < v1704 || v1710 >= v1704 + *((unsigned int *)v1703 + 20)) )
                  {
                    if ( (*(unsigned int (__fastcall **)(unsigned __int64))(v99 + 680))(v1710) )
                    {
                      (*(void (__fastcall **)(unsigned __int64, unsigned __int64 *))(v99 + 520))(v1710, &v2674);
                      if ( v2674 )
                      {
                        v1711 = 0;
                        v1712 = v2645;
                        while ( *(_QWORD *)v1712 != v2674 )
                        {
                          if ( !*(_QWORD *)v1712 )
                          {
                            *(_QWORD *)&v2645[2 * v1711] = v2674;
                            break;
                          }
                          ++v1711;
                          v1712 += 2;
                          if ( v1711 >= 0x10 )
                            break;
                        }
                        if ( v1711 == 16 )
                        {
                          v1659 = v2631;
                          goto LABEL_2710;
                        }
                      }
                      v1703 = v2629;
                    }
                    else
                    {
                      v1703 = v2629;
                    }
                  }
                  v1708 += 20LL;
                  if ( v1708 == v1707 )
                  {
                    v1702 = 0;
                    break;
                  }
                }
              }
            }
          }
          v1659 = v2631;
          v1658 = (char *)v2636 + 1;
          v130 = (unsigned __int64)v2645;
          v2998 = v1702 + 1;
          v2636 = (_DWORD *)((char *)v2636 + 1);
          if ( (unsigned int)(v1702 + 1) >= 0x10 )
          {
LABEL_2710:
            v1713 = v1659;
            goto LABEL_2705;
          }
        }
        if ( !*(_DWORD *)(v99 + 2296) )
        {
          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v99 + 2312) = 0LL;
          *(_QWORD *)(v99 + 2320) = 258LL;
          *(_QWORD *)(v99 + 2328) = -1073741701LL;
          *(_DWORD *)(v99 + 2296) = 1;
          __b8(v99, 0LL);
        }
        v1713 = v2620;
LABEL_2705:
        if ( v1713 == *(_QWORD *)(v99 + 2408) || !v1713 )
          v1713 ^= 0x95EA5DE843D5D824uLL;
        (*(void (__fastcall **)(int *))(v99 + 256))(v2645);
      }
      else
      {
        v1713 = v2620;
      }
      if ( v1713 != **(_QWORD **)(v99 + 2400) && (*(_DWORD *)(v99 + 2452) & 0x40) == 0 )
      {
        *((_QWORD *)&v132 + 1) = **(_QWORD **)(v99 + 2400);
        if ( !*(_DWORD *)(v99 + 2296) )
        {
          *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = *((_QWORD *)&v132 + 1) ^ v1713;
          if ( !*(_DWORD *)(v99 + 2296) )
          {
            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v99 + 2312) = 0LL;
            *(_QWORD *)(v99 + 2320) = 258LL;
            *(_QWORD *)(v99 + 2328) = v1713;
            *(_DWORD *)(v99 + 2296) = 1;
            __b8(v99, 0LL);
          }
        }
      }
      v1714 = 0;
      v1715 = 2;
      v1716 = (int ***)&v2761;
      do
      {
        v1717 = 0;
        v1718 = (__int64)**v1716;
        v1719 = *((_DWORD *)*v1716 + 4);
        v1720 = v1718 + v1714 + (unsigned int)*v1716;
        if ( v1719 )
        {
          v1721 = **v1716;
          do
          {
            *((_QWORD *)&v132 + 1) = *v1721;
            ++v1717;
            ++v1721;
            v1720 = v1717 * ((DWORD2(v132) + *(_DWORD *)((*((__int64 *)&v132 + 1) >> 4) + v1718)) ^ v1720);
          }
          while ( v1717 < v1719 );
        }
        v1714 += 2 * v1720;
        --v1716;
        v100 = (unsigned int)(2 * v1720);
        --v1715;
      }
      while ( v1715 );
      v1601 = (_BYTE *)v2625;
      v130 = **(unsigned int **)(v99 + 1432);
      if ( v1714 == (_DWORD)v130 )
      {
        j = 0LL;
      }
      else
      {
        j = 0LL;
        if ( (*(_DWORD *)(v99 + 2448) & 0x20000) != 0 )
        {
          LODWORD(v132) = *(_DWORD *)(v99 + 2296);
          if ( !(_DWORD)v132 )
          {
            *((_QWORD *)&v132 + 1) = *(_QWORD *)(v99 + 1424);
            *(_QWORD *)(*((_QWORD *)&v132 + 1) + 24LL) = v130 ^ (unsigned int)v100;
            LODWORD(v132) = *(_DWORD *)(v99 + 2296);
          }
          if ( !(_DWORD)v132 )
          {
            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v99 + 2312) = 0LL;
            *(_QWORD *)(v99 + 2320) = 263LL;
            *(_QWORD *)(v99 + 2328) = (unsigned int)v100;
            *(_DWORD *)(v99 + 2296) = 1;
            __b8(v99, 0LL);
          }
        }
      }
      v1722 = *(_DWORD *)(v99 + 2392);
      if ( v1722 >= 7 )
      {
        if ( v1722 != 7 )
        {
          if ( v1722 != 8 )
          {
            if ( v1722 != 9 )
              goto LABEL_3611;
            goto LABEL_2733;
          }
LABEL_3526:
          v2187 = (_QWORD *)*((_QWORD *)v1601 + 192);
          if ( v2187 && *v2187 )
          {
            v130 = *((unsigned int *)v1601 + 526);
            v2188 = 32;
            v2189 = *((unsigned int *)v1601 + 505);
            if ( (_DWORD)v130 != 7 )
              v2188 = 0;
            v3006 = *((_DWORD *)v1601 + 526);
            v2190 = v2189 + 48;
            if ( (unsigned int)(v2189 + 48) <= *((_DWORD *)v1601 + 647) )
            {
              v2191 = (__int64)v1601;
              *((_DWORD *)v1601 + 505) = v2190;
            }
            else
            {
              v2191 = pg_unknown7(v1601, v2190, *((_DWORD *)v1601 + 585));
              if ( !v2191 )
                goto LABEL_3548;
              v2192 = *((_DWORD *)v1601 + 612);
              if ( (v2192 & 4) == 0 )
              {
                v2193 = *((_DWORD *)v1601 + 505);
                v2194 = *((_QWORD *)v1601 + 249);
                v2195 = (v2192 & 0x20000000) != 0 ? *((_DWORD *)v1601 + 585) : 0;
                if ( v2193 >= 8 )
                {
                  v2196 = (unsigned __int64)v2193 >> 3;
                  do
                  {
                    *(_QWORD *)v1601 = 0LL;
                    v2193 -= 8;
                    v1601 += 8;
                    --v2196;
                  }
                  while ( v2196 );
                }
                for ( ; v2193; --v2193 )
                  *v1601++ = 0;
                v2197 = *(_DWORD *)(v2191 + 2340);
                *(_DWORD *)(v2191 + 2340) = v2195;
                if ( v2195 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v2191 + 872))(v2194);
                }
                else
                {
                  v2198 = 0;
                  if ( (*(_DWORD *)(v2191 + 2448) & 0x10000000) == 0 )
                    v2198 = v2195;
                  if ( v2198 )
                    (*(void (__fastcall **)(__int64, _QWORD))(v2191 + 552))(v2194 - 8, *(_QWORD *)(v2194 - 8));
                  else
                    (*(void (__fastcall **)(__int64))(v2191 + 256))(v2194);
                }
                *(_DWORD *)(v2191 + 2340) = v2197;
              }
              *(_DWORD *)(v2191 + 2448) &= ~4u;
              v130 = v3006;
            }
            v2199 = v2191 + v2189;
            ++*(_DWORD *)(v2191 + 2060);
            v2200 = (_QWORD *)(v2191 + v2189);
            v2855 = v2191 + v2189;
            v2201 = 48;
            v2202 = 6LL;
            do
            {
              *v2200 = 0LL;
              v2201 -= 8;
              ++v2200;
              --v2202;
            }
            while ( v2202 );
            for ( ; v2201; --v2201 )
            {
              *(_BYTE *)v2200 = 0;
              v2200 = (_QWORD *)((char *)v2200 + 1);
            }
            *(_DWORD *)v2199 = v2188;
            *(_QWORD *)(v2199 + 8) = v2187;
            if ( (_DWORD)v130 == 7 )
              pg_unknown12(v2191, v2187, 8LL, v2199 + 24);
            *(_DWORD *)(v2199 + 16) = 8;
            *((_QWORD *)&v132 + 1) = v2187 + 1;
            *(_DWORD *)(v2191 + 2088) += 8;
            *(_QWORD *)&v132 = v2187;
            v100 = *(_QWORD *)(v2191 + 2072);
            if ( v2187 < v2187 + 1 )
            {
              v130 = 64LL;
              do
              {
                _mm_prefetch((const char *)v132, 0);
                *(_QWORD *)&v132 = v132 + 64;
              }
              while ( (unsigned __int64)v132 < *((_QWORD *)&v132 + 1) );
            }
            v2203 = __ROL8__(v100 ^ *v2187, *(_DWORD *)(v2191 + 2068));
            for ( i42 = v2203; ; LODWORD(v2203) = i42 ^ v2203 )
            {
              i42 >>= 31;
              if ( !i42 )
                break;
            }
            v99 = v2191;
            *(_DWORD *)(v2199 + 20) = v2203 & 0x7FFFFFFF;
            v1601 = (_BYTE *)v2191;
            *(_DWORD *)(v2191 + 2088) += 8;
          }
          *((_DWORD *)v1601 + 598) = 9;
LABEL_2733:
          v1723 = (unsigned __int64 *)*((_QWORD *)v1601 + 192);
          if ( v1723 )
          {
            v1724 = *v1723;
            if ( v1724 )
            {
              _InterlockedOr(v2617, 0);
              v130 = v1724;
              v1726 = *(_DWORD *)(v1724 + 2068);
              v1727 = (const char *)v1724;
              v1728 = *(_QWORD *)(v1724 + 2072);
              v2999 = *(_DWORD *)(v1724 + 2020);
              v1725 = v2999;
              if ( v1724 < v1724 + v2999 )
              {
                do
                {
                  _mm_prefetch(v1727, 0);
                  v1727 += 64;
                }
                while ( (unsigned __int64)v1727 < v1724 + v2999 );
              }
              v100 = *(_QWORD *)(v1724 + 2072);
              v1729 = v2999 >> 7;
              if ( v2999 >> 7 )
              {
                do
                {
                  v1730 = 8LL;
                  do
                  {
                    v1731 = v100 ^ *(_QWORD *)v130;
                    v1732 = *(_QWORD *)(v130 + 8);
                    v130 += 16LL;
                    v100 = __ROL8__(__ROL8__(v1731, v1726) ^ v1732, v1726);
                    --v1730;
                  }
                  while ( v1730 );
                  v1733 = __ROL8__(v1728 ^ (v130 - v1724), 17) ^ v1728 ^ (v130 - v1724);
                  v2856 = (v1733 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v1726 = ((unsigned __int8)(v1733 ^ v2856) ^ (unsigned __int8)v1726) & 0x3F;
                  if ( !v1726 )
                    LOBYTE(v1726) = 1;
                  --v1729;
                }
                while ( v1729 );
                v1725 = v2999;
              }
              *((_QWORD *)&v132 + 1) = v1725 & 0x7F;
              if ( DWORD2(v132) >= 8 )
              {
                v1734 = (unsigned __int64)(v1725 & 0x7F) >> 3;
                do
                {
                  v100 = __ROL8__(*(_QWORD *)v130 ^ v100, v1726);
                  v130 += 8LL;
                  *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 8);
                  --v1734;
                }
                while ( v1734 );
              }
              for ( ; DWORD2(v132); *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 1) )
              {
                *(_QWORD *)&v132 = *(unsigned __int8 *)v130++;
                v100 = __ROL8__(v132 ^ v100, v1726);
              }
              if ( v100 != **((_QWORD **)v1601 + 193) )
              {
                v1735 = *((_QWORD *)v1601 + 178);
                *(_QWORD *)v1735 = v1724;
                j = 0LL;
                *(_DWORD *)(v1735 + 16) = v1725;
                if ( !*((_DWORD *)v1601 + 574) )
                {
                  *(_QWORD *)(*((_QWORD *)v1601 + 178) + 24LL) = v100 ^ **((_QWORD **)v1601 + 193);
                  if ( !*((_DWORD *)v1601 + 574) )
                  {
                    *((_QWORD *)v1601 + 288) = v1601 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v1601 + 289) = 0LL;
                    *((_QWORD *)v1601 + 290) = 273LL;
                    *((_QWORD *)v1601 + 291) = v100;
LABEL_2753:
                    *((_DWORD *)v1601 + 574) = 1;
                    __b8(v1601, 0LL);
                  }
                }
LABEL_2754:
                if ( (*((_DWORD *)v1601 + 612) & 0x8000) != 0 || !*((_DWORD *)v1601 + 574) )
                {
                  v1736 = *((_QWORD *)v1601 + 304);
                  *((_QWORD *)v1601 + 304) = 0LL;
                  (*((void (__fastcall **)(__int64, _BYTE *, unsigned __int64, unsigned __int64))v1601 + 83))(
                    v1736,
                    v2802,
                    v100,
                    v130);
                  LODWORD(v132) = *((_DWORD *)v1601 + 612);
                  if ( (v132 & 1) != 0 )
                  {
                    *((_DWORD *)v1601 + 612) = v132 & 0xFFFFFFFE;
                    v1736 = (*((__int64 (__fastcall **)(__int64))v1601 + 80))(v1736);
                    if ( v1736 )
                      *((_DWORD *)v1601 + 604) = (*((__int64 (__fastcall **)(__int64))v1601 + 84))(v1736);
                    else
                      *((_DWORD *)v1601 + 604) = -1;
                  }
                  if ( v1736 )
                    (*((void (__fastcall **)(__int64))v1601 + 81))(v1736);
                }
                goto LABEL_3646;
              }
              v2205 = *((_DWORD *)v1601 + 526);
              v2206 = 32;
              v2207 = *((_DWORD *)v1601 + 505);
              v2208 = *((_DWORD *)v1601 + 585);
              if ( v2205 != 7 )
                v2206 = 0;
              v2630 = *((_DWORD *)v1601 + 505);
              v2209 = v2207 + 48;
              v2641 = v2205;
              if ( v2209 <= *((_DWORD *)v1601 + 647) )
              {
                v2210 = (__int64)v1601;
                *((_DWORD *)v1601 + 505) = v2209;
LABEL_3584:
                v2218 = v2630;
                ++*(_DWORD *)(v2210 + 2060);
                v2219 = v2210 + v2218;
                v2623 = v2219;
                v2220 = (_QWORD *)v2219;
                v2221 = 48;
                v2857 = v2219;
                v2222 = 6LL;
                do
                {
                  *v2220 = 0LL;
                  v2221 -= 8;
                  ++v2220;
                  --v2222;
                }
                while ( v2222 );
                for ( ; v2221; --v2221 )
                {
                  *(_BYTE *)v2220 = 0;
                  v2220 = (_QWORD *)((char *)v2220 + 1);
                }
                *(_DWORD *)v2219 = v2206;
                *(_QWORD *)(v2219 + 8) = v1724;
                if ( v2205 == 7 && v1725 )
                  pg_unknown12(v2210, v1724, v1725, v2219 + 24);
                *(_DWORD *)(v2219 + 16) = v1725;
                v130 = v1724;
                *(_DWORD *)(v2210 + 2088) += v1725;
                v2223 = (const char *)v1724;
                v2224 = *(_DWORD *)(v2210 + 2068);
                v2225 = *(_QWORD *)(v2210 + 2072);
                v2226 = v1724 + v1725;
                if ( v1724 < v2226 )
                {
                  do
                  {
                    _mm_prefetch(v2223, 0);
                    v2223 += 64;
                  }
                  while ( (unsigned __int64)v2223 < v2226 );
                }
                v100 = *(_QWORD *)(v2210 + 2072);
                v2227 = v1725 >> 7;
                if ( v1725 >> 7 )
                {
                  do
                  {
                    v2228 = 8LL;
                    do
                    {
                      v2229 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v100, v2224);
                      v130 += 16LL;
                      v100 = __ROL8__(v2229, v2224);
                      --v2228;
                    }
                    while ( v2228 );
                    v2230 = (__ROL8__(v2225 ^ (v130 - v1724), 17) ^ v2225 ^ (v130 - v1724))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v2858 = *((_QWORD *)&v2230 + 1);
                    v2224 = ((unsigned __int8)v2230 ^ (unsigned __int8)(BYTE8(v2230) ^ v2224)) & 0x3F;
                    if ( !v2224 )
                      LOBYTE(v2224) = 1;
                    --v2227;
                  }
                  while ( v2227 );
                  v2219 = v2623;
                  v1725 = v2999;
                }
                *((_QWORD *)&v132 + 1) = v1725 & 0x7F;
                if ( DWORD2(v132) >= 8 )
                {
                  *(_QWORD *)&v132 = (unsigned __int64)(v1725 & 0x7F) >> 3;
                  do
                  {
                    v100 = __ROL8__(*(_QWORD *)v130 ^ v100, v2224);
                    v130 += 8LL;
                    *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 8);
                    *(_QWORD *)&v132 = v132 - 1;
                  }
                  while ( (_QWORD)v132 );
                }
                j = 0LL;
                if ( DWORD2(v132) )
                {
                  do
                  {
                    *(_QWORD *)&v132 = *(unsigned __int8 *)v130++;
                    v100 = __ROL8__(v132 ^ v100, v2224);
                    *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 1);
                  }
                  while ( DWORD2(v132) );
                  j = 0LL;
                }
                for ( i43 = v100; ; v100 = (unsigned int)i43 ^ (unsigned int)v100 )
                {
                  i43 >>= 31;
                  if ( !i43 )
                    break;
                }
                LODWORD(v100) = v100 & 0x7FFFFFFF;
                v99 = v2210;
                *(_DWORD *)(v2219 + 20) = v100;
                v1601 = (_BYTE *)v2210;
                *(_DWORD *)(v2210 + 2088) += v1725;
                goto LABEL_3611;
              }
              v2210 = pg_unknown7(v1601, v2209, v2208);
              if ( v2210 )
              {
                v2211 = *((_DWORD *)v1601 + 612);
                if ( (v2211 & 4) == 0 )
                {
                  v2212 = *((_DWORD *)v1601 + 505);
                  v2213 = *((_QWORD *)v1601 + 249);
                  v2214 = (v2211 & 0x20000000) != 0 ? *((_DWORD *)v1601 + 585) : 0;
                  if ( v2212 >= 8 )
                  {
                    v2215 = (unsigned __int64)v2212 >> 3;
                    do
                    {
                      *(_QWORD *)v1601 = 0LL;
                      v2212 -= 8;
                      v1601 += 8;
                      --v2215;
                    }
                    while ( v2215 );
                  }
                  for ( ; v2212; --v2212 )
                    *v1601++ = 0;
                  v2216 = *(_DWORD *)(v2210 + 2340);
                  *(_DWORD *)(v2210 + 2340) = v2214;
                  if ( v2214 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v2210 + 872))(v2213);
                  }
                  else
                  {
                    v2217 = 0;
                    if ( (*(_DWORD *)(v2210 + 2448) & 0x10000000) == 0 )
                      v2217 = v2214;
                    if ( v2217 )
                      (*(void (__fastcall **)(__int64, _QWORD))(v2210 + 552))(v2213 - 8, *(_QWORD *)(v2213 - 8));
                    else
                      (*(void (__fastcall **)(__int64))(v2210 + 256))(v2213);
                  }
                  *(_DWORD *)(v2210 + 2340) = v2216;
                }
                *(_DWORD *)(v2210 + 2448) &= ~4u;
                v2205 = v2641;
                goto LABEL_3584;
              }
LABEL_3548:
              v1601 = (_BYTE *)v99;
              j = 0LL;
              goto LABEL_2754;
            }
          }
          j = 0LL;
LABEL_3611:
          *((_DWORD *)v1601 + 598) = 11;
          goto LABEL_2754;
        }
LABEL_3037:
        v1894 = *((_QWORD *)v1601 + 174);
        v99 = (unsigned __int64)v1601;
        v2621 = v1601;
        v2652 = v1601;
        v1895 = *(const char **)(v1894 + 32);
        v1896 = (__int64 (__fastcall *)(const char *, char *, unsigned __int64))*((_QWORD *)v1601 + 64);
        v2629 = v1895;
        *(_QWORD *)&v132 = v1896(v1895, v2931, v100);
        v1897 = v2933;
        v1898 = v132;
        v2631 = v132;
        v3001 = v2933;
        v2636 = v2932;
        if ( !v2932 )
          goto LABEL_2754;
        v1899 = 4;
        v2676 = 0LL;
        v1900 = &v2677;
        do
        {
          *(_BYTE *)v1900 = 0;
          v1900 = (int *)((char *)v1900 + 1);
          --v1899;
        }
        while ( v1899 );
        if ( *((_DWORD *)v1601 + 515) )
        {
          v1901 = v2677;
          LODWORD(v130) = HIDWORD(v2676);
          v1902 = v2676;
          while ( 1 )
          {
            v1903 = v1601;
            v1904 = 0;
            if ( *((_QWORD *)v1601 + 335) )
              v1903 = (_BYTE *)*((_QWORD *)v1601 + 335);
            v2623 = (__int64)v1903;
            v100 = (unsigned __int64)&v1903[*((unsigned int *)v1903 + 514)];
            if ( v1902 && (unsigned int)v130 <= (unsigned int)j )
            {
              v1904 = v130;
              v100 = (unsigned __int64)&v1903[v1901];
            }
            if ( v1904 != (_DWORD)j )
              break;
LABEL_3074:
            LODWORD(v2676) = 1;
            v1901 = v100 - (_DWORD)v1903;
            HIDWORD(v2676) = v1904;
            v2677 = v100 - (_DWORD)v1903;
            v1902 = 1;
            v1912 = *(int *)v100;
            v130 = v1904;
            if ( (unsigned int)v1912 <= 0x2B
              && (v1913 = 0x80000001002LL, _bittest64(&v1913, v1912))
              && *(_QWORD *)(v100 + 8) == v1898
              && *(_DWORD *)(v100 + 16) == v1897
              || (unsigned int)(v1912 - 33) <= 1 && *(_DWORD **)(v100 + 32) == v2636 )
            {
              j = 0LL;
              goto LABEL_3084;
            }
            LODWORD(j) = j + 1;
            if ( (unsigned int)j >= *((_DWORD *)v1601 + 515) )
              goto LABEL_3083;
          }
          v1905 = (unsigned int)j - v1904;
          v1904 = j;
          while ( 1 )
          {
            v1906 = *(_DWORD *)v100;
            if ( *(int *)v100 > 12 )
              break;
            if ( v1906 == 12 )
              goto LABEL_3066;
            v1907 = v1906 - 1;
            if ( !v1907 )
              goto LABEL_3066;
            v1908 = v1907 - 6;
            if ( v1908 )
            {
              v1909 = v1908 - 1;
              if ( !v1909 )
              {
                v1911 = *(unsigned __int16 *)(v100 + 32);
LABEL_3071:
                v1910 = (v1911 + 55) & 0xFFFFFFF8;
                goto LABEL_3072;
              }
              if ( v1909 != 2 )
                goto LABEL_3068;
              v1910 = (unsigned int)(16 * (*(_DWORD *)(v100 + 28) + 3));
            }
            else
            {
              v1910 = (unsigned int)(24 * (*(_DWORD *)(v100 + 24) + 2));
            }
LABEL_3072:
            v100 += v1910;
            if ( !--v1905 )
            {
              v99 = (unsigned __int64)v2621;
              LODWORD(v1903) = v2623;
              v1898 = v2631;
              v1897 = v3001;
              goto LABEL_3074;
            }
          }
          if ( v1906 == 28 )
          {
            v1911 = *(unsigned __int16 *)(v100 + 40);
            goto LABEL_3071;
          }
          if ( v1906 == 30 )
          {
            v1910 = (((*(_DWORD *)(v100 + 36) != 0 ? *(_DWORD *)(v100 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                  + 24 * (*(unsigned __int16 *)(v100 + 40) + 2);
            goto LABEL_3072;
          }
          if ( v1906 <= 32 )
          {
LABEL_3068:
            v1910 = 48LL;
            goto LABEL_3072;
          }
          if ( v1906 <= 34 )
          {
            v1910 = 20
                  * (unsigned int)(((*(_DWORD *)(v100 + 32) & 0xFFF)
                                  + (unsigned __int64)*(unsigned int *)(v100 + 40)
                                  + 4095) >> 12)
                  + 48;
            goto LABEL_3072;
          }
          if ( v1906 != 43 )
            goto LABEL_3068;
LABEL_3066:
          v1910 = 4 * (*(_DWORD *)(v100 + 16) / 0xCu) + 48;
          goto LABEL_3072;
        }
LABEL_3083:
        j = 0LL;
        v100 = 0LL;
LABEL_3084:
        if ( v100 )
          goto LABEL_3085;
        v1914 = (char *)v2629;
        v1915 = (__int64 (__fastcall *)(const char *, char *, _QWORD, unsigned __int64))*((_QWORD *)v1601 + 64);
        v2651 = v1601;
        *(_QWORD *)&v132 = v1915(v2629, v2934, 0LL, v130);
        v1916 = v2936;
        v2635 = (char *)v132;
        v3002 = v2936;
        v2644 = v2936;
        BugCheckParameter2 = v2935;
        if ( !v2935 )
          goto LABEL_3087;
        v1917 = 4;
        v2680 = 0LL;
        v1918 = &v2681;
        do
        {
          *(_BYTE *)v1918 = 0;
          v1918 = (int *)((char *)v1918 + 1);
          --v1917;
        }
        while ( v1917 );
        v1919 = 0LL;
        if ( *((_DWORD *)v1601 + 515) )
        {
          v1920 = v2681;
          LODWORD(v130) = HIDWORD(v2680);
          v1921 = v2680;
          while ( 1 )
          {
            v1922 = v1601;
            v1923 = 0;
            if ( *((_QWORD *)v1601 + 335) )
              v1922 = (_BYTE *)*((_QWORD *)v1601 + 335);
            v2623 = (__int64)v1922;
            v1924 = (char **)&v1922[*((unsigned int *)v1922 + 514)];
            if ( v1921 && (unsigned int)v130 <= (unsigned int)j )
            {
              v1923 = v130;
              v1924 = (char **)&v1922[v1920];
            }
            if ( v1923 != (_DWORD)j )
              break;
LABEL_3121:
            LODWORD(v2680) = 1;
            v1920 = (_DWORD)v1924 - (_DWORD)v1922;
            HIDWORD(v2680) = v1923;
            v2681 = (_DWORD)v1924 - (_DWORD)v1922;
            v1921 = 1;
            v1919 = *(int *)v1924;
            v130 = v1923;
            if ( (unsigned int)v1919 <= 0x2B )
            {
              v1932 = 0x80000001002LL;
              if ( _bittest64(&v1932, v1919) )
              {
                if ( v1924[1] == v2635 && *((_DWORD *)v1924 + 4) == v1916 )
                {
                  j = 0LL;
                  goto LABEL_3132;
                }
              }
            }
            v1933 = v1919 - 33;
            v1919 = 1LL;
            if ( v1933 <= 1 )
            {
              v1934 = BugCheckParameter2;
              if ( v1924[4] == (char *)BugCheckParameter2 )
              {
                j = 0LL;
                goto LABEL_3133;
              }
            }
            LODWORD(j) = j + 1;
            if ( (unsigned int)j >= *((_DWORD *)v1601 + 515) )
              goto LABEL_3131;
          }
          v1925 = (unsigned int)j - v1923;
          v1923 = j;
          while ( 1 )
          {
            v1926 = *(_DWORD *)v1924;
            if ( *(int *)v1924 > 12 )
              break;
            if ( v1926 == 12 )
              goto LABEL_3113;
            v1927 = v1926 - 1;
            if ( !v1927 )
              goto LABEL_3113;
            v1928 = v1927 - 6;
            if ( v1928 )
            {
              v1929 = v1928 - 1;
              if ( !v1929 )
              {
                v1931 = *((unsigned __int16 *)v1924 + 16);
LABEL_3118:
                v1930 = (v1931 + 55) & 0xFFFFFFF8;
                goto LABEL_3119;
              }
              if ( v1929 != 2 )
                goto LABEL_3115;
              v1930 = (unsigned int)(16 * (*((_DWORD *)v1924 + 7) + 3));
            }
            else
            {
              v1930 = (unsigned int)(24 * (*((_DWORD *)v1924 + 6) + 2));
            }
LABEL_3119:
            v1924 = (char **)((char *)v1924 + v1930);
            if ( !--v1925 )
            {
              v99 = (unsigned __int64)v2621;
              LODWORD(v1922) = v2623;
              v1916 = v3002;
              v1914 = (char *)v2629;
              goto LABEL_3121;
            }
          }
          if ( v1926 == 28 )
          {
            v1931 = *((unsigned __int16 *)v1924 + 20);
            goto LABEL_3118;
          }
          if ( v1926 == 30 )
          {
            v1930 = (((*((_DWORD *)v1924 + 9) != 0 ? *((_DWORD *)v1924 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                  + 24 * (*((unsigned __int16 *)v1924 + 20) + 2);
            goto LABEL_3119;
          }
          if ( v1926 <= 32 )
          {
LABEL_3115:
            v1930 = 48LL;
            goto LABEL_3119;
          }
          if ( v1926 <= 34 )
          {
            v1930 = 20
                  * (unsigned int)((((_DWORD)v1924[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v1924 + 10) + 4095) >> 12)
                  + 48;
            goto LABEL_3119;
          }
          if ( v1926 != 43 )
            goto LABEL_3115;
LABEL_3113:
          v1930 = 4 * (*((_DWORD *)v1924 + 4) / 0xCu) + 48;
          goto LABEL_3119;
        }
LABEL_3131:
        j = 0LL;
        v1924 = 0LL;
LABEL_3132:
        v1934 = BugCheckParameter2;
LABEL_3133:
        v2660 = (char *)v1924;
        if ( v1924
          || (v1935 = (*((__int64 (__fastcall **)(char *, unsigned __int64, _QWORD, unsigned __int64))v1601 + 85))(
                        v1914,
                        v1919,
                        0LL,
                        v130),
              v2626 = v2644,
              (v2630 = v1935) == 0) )
        {
LABEL_3512:
          v2181 = v2636;
          *(_QWORD *)&v132 = (*(__int64 (__fastcall **)(_DWORD *))(v99 + 504))(v2636);
          v2182 = *(unsigned int *)(v132 + 148);
          if ( (unsigned int)v2182 < 0x14 )
          {
LABEL_3085:
            v99 = (unsigned __int64)v1601;
LABEL_3523:
            (*((void (__fastcall **)(_QWORD, char *, unsigned __int64, unsigned __int64))v1601 + 64))(
              *(_QWORD *)(*((_QWORD *)v1601 + 174) + 32LL),
              v2952,
              v100,
              v130);
            if ( !v2953
              || (*((_QWORD *)v1601 + 303) = v2953,
                  *(_QWORD *)&v132 = (*((__int64 (**)(void))v1601 + 63))(),
                  !(_QWORD)v132) )
            {
              if ( *((_DWORD *)v1601 + 574) )
                goto LABEL_2754;
              *((_QWORD *)v1601 + 288) = v1601 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v1601 + 289) = 0LL;
              *((_QWORD *)v1601 + 290) = 261LL;
              *((_QWORD *)v1601 + 291) = -1073741701LL;
              goto LABEL_2753;
            }
            *((_DWORD *)v1601 + 605) = *(_DWORD *)(v132 + 80);
            *((_DWORD *)v1601 + 598) = 8;
            goto LABEL_3526;
          }
          v2183 = *(unsigned int *)(v132 + 144);
          v2184 = (char *)v2181 + v2182 + v2183;
          for ( i44 = (char *)v2181 + v2183; i44 != v2184; i44 += 20 )
          {
            if ( !*((_DWORD *)i44 + 3) )
              break;
            v2186 = *((unsigned int *)i44 + 4);
            if ( !(_DWORD)v2186 )
              break;
            *((_QWORD *)&v132 + 1) = *(_QWORD *)((char *)v2181 + v2186);
            if ( *((_QWORD *)&v132 + 1) )
            {
              LODWORD(v132) = pg_unknown8(&v2652, *((_QWORD *)&v132 + 1), 2147483663LL);
              v99 = (unsigned __int64)v2652;
              v2180 = v132;
              v1601 = v2652;
              if ( (((_DWORD)v132 + 0x80000000) & 0x80000000) == 0 && (_DWORD)v132 != -1073741554 )
              {
                j = 0LL;
                goto LABEL_3521;
              }
            }
          }
          j = 0LL;
          v2180 = 0;
LABEL_3521:
          if ( ((v2180 + 0x80000000) & 0x80000000) == 0 && v2180 != -1073741554 )
            goto LABEL_2754;
          goto LABEL_3523;
        }
        if ( (*((_DWORD *)v1601 + 612) & 0x40000000) != 0 )
        {
          LODWORD(v132) = pg_unknown13(&v2652, v1934, 15LL);
          v99 = (unsigned __int64)v2652;
          v1937 = v132;
          v2634 = v132;
LABEL_3509:
          v1601 = (_BYTE *)v99;
          if ( (int)(v1937 + 0x80000000) >= 0 && v1937 != -1073741554 )
            goto LABEL_3511;
          goto LABEL_3512;
        }
        v1938 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, unsigned int *))*((_QWORD *)v1601 + 62);
        v2783 = 0LL;
        v2722[4] = 0;
        v1939 = BugCheckParameter2;
        LOBYTE(v1936) = 1;
        v1940 = v1938(BugCheckParameter2, v1936, 0LL, &v2644);
        v1941 = v1940;
        v2781[1] = v1940;
        LOBYTE(v1941) = 1;
        v2644 &= -(v1940 != 0);
        v1942 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v1601 + 62);
        v2722[1] = v2644;
        v1943 = v1942(v1939, v1941, 12LL, &v2644);
        v1944 = v1943;
        v2645 = (int *)v1943;
        v2781[2] = v1943;
        LOBYTE(v1944) = 1;
        v2644 &= -(v1943 != 0);
        v1945 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, unsigned int *))*((_QWORD *)v1601 + 62);
        v3003 = v2644;
        v2722[2] = v2644;
        v2782 = v1945(v1939, v1944, 10LL, &v2644);
        v2644 &= -(v2782 != 0);
        v1946 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v1601 + 63);
        v2722[3] = v2644;
        v1947 = v1946(v1939);
        if ( !v1947 )
        {
          j = 0LL;
LABEL_3087:
          v2634 = -1073741701;
LABEL_3511:
          v2180 = v2634;
          goto LABEL_3521;
        }
        v1948 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v1601 + 147))(v1939, &v2749);
        v1949 = *((_DWORD *)v1601 + 585);
        v2784 = v1948;
        v2722[5] = v2749;
        LODWORD(v1948) = *(_DWORD *)(v1947 + 84);
        v2781[0] = v1939;
        v1950 = *((unsigned int *)v1601 + 505);
        v2722[0] = v1948;
        v1951 = v1950 + 288;
        if ( (unsigned int)(v1950 + 288) <= *((_DWORD *)v1601 + 647) )
        {
          v1952 = v1601;
          v2629 = v1601;
          *((_DWORD *)v1601 + 505) = v1951;
        }
        else
        {
          v2629 = (const char *)pg_unknown7(v1601, v1951, v1949);
          v1952 = v2629;
          if ( !v2629 )
          {
            j = 0LL;
            v2651 = 0LL;
            goto LABEL_3511;
          }
          v1953 = *((_DWORD *)v1601 + 612);
          if ( (v1953 & 4) == 0 )
          {
            v1954 = *((_DWORD *)v1601 + 505);
            v1955 = *((_QWORD *)v1601 + 249);
            v1956 = (v1953 & 0x20000000) != 0 ? *((_DWORD *)v1601 + 585) : 0;
            if ( v1954 >= 8 )
            {
              v1957 = (unsigned __int64)v1954 >> 3;
              do
              {
                *(_QWORD *)v1601 = 0LL;
                v1954 -= 8;
                v1601 += 8;
                --v1957;
              }
              while ( v1957 );
            }
            for ( ; v1954; --v1954 )
              *v1601++ = 0;
            v1958 = *((_DWORD *)v1952 + 585);
            *((_DWORD *)v1952 + 585) = v1956;
            if ( v1956 == 3 )
            {
              (*((void (__fastcall **)(__int64))v1952 + 109))(v1955);
            }
            else
            {
              v1959 = 0;
              if ( (*((_DWORD *)v1952 + 612) & 0x10000000) == 0 )
                v1959 = v1956;
              if ( v1959 )
                (*((void (__fastcall **)(__int64, _QWORD))v1952 + 69))(v1955 - 8, *(_QWORD *)(v1955 - 8));
              else
                (*((void (__fastcall **)(__int64))v1952 + 32))(v1955);
            }
            *((_DWORD *)v1952 + 585) = v1958;
          }
          *((_DWORD *)v1952 + 612) &= ~4u;
        }
        v1960 = (char *)&v1952[v1950];
        *((_DWORD *)v1952 + 515) += 6;
        v1961 = v2781;
        v2727 = &v1952[v1950];
        v1962 = v2722;
        v2660 = (char *)&v1952[v1950];
        v2631 = 6LL;
        do
        {
          v1963 = *v1962;
          v1964 = 6LL;
          v1965 = (_QWORD *)*v1961;
          v1966 = 48;
          v2641 = *v1962;
          v1967 = v1960;
          do
          {
            *v1967 = 0LL;
            v1966 -= 8;
            ++v1967;
            --v1964;
          }
          while ( v1964 );
          for ( ; v1966; --v1966 )
          {
            *(_BYTE *)v1967 = 0;
            v1967 = (_QWORD *)((char *)v1967 + 1);
          }
          *(_DWORD *)v1960 = 11;
          *((_QWORD *)v1960 + 1) = v1965;
          v1968 = v1965;
          *((_DWORD *)v1960 + 4) = v1963;
          v1969 = (const char *)v1965;
          *((_DWORD *)v1952 + 522) += v1963;
          v1970 = *((_DWORD *)v1952 + 517);
          v1971 = *((_QWORD *)v1952 + 259);
          if ( v1965 < (_QWORD *)((char *)v1965 + v1963) )
          {
            do
            {
              _mm_prefetch(v1969, 0);
              v1969 += 64;
            }
            while ( v1969 < (const char *)v1965 + v1963 );
          }
          v1972 = *((_QWORD *)v1952 + 259);
          v1973 = (unsigned int)v1963 >> 7;
          if ( (unsigned int)v1963 >> 7 )
          {
            do
            {
              v1974 = 8LL;
              do
              {
                v1975 = v1972 ^ *v1968;
                v1976 = v1968[1];
                v1968 += 2;
                v1972 = __ROL8__(__ROL8__(v1975, v1970) ^ v1976, v1970);
                --v1974;
              }
              while ( v1974 );
              v1977 = __ROL8__(v1971 ^ ((char *)v1968 - (char *)v1965), 17) ^ v1971 ^ ((char *)v1968 - (char *)v1965);
              v2849 = (v1977 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1970 = ((unsigned __int8)(v1977 ^ v2849) ^ (unsigned __int8)v1970) & 0x3F;
              if ( !v1970 )
                LOBYTE(v1970) = 1;
              --v1973;
            }
            while ( v1973 );
            v1952 = v2629;
            LODWORD(v1963) = v2641;
          }
          v1978 = v1963 & 0x7F;
          if ( v1978 >= 8 )
          {
            v1979 = (unsigned __int64)(v1963 & 0x7F) >> 3;
            do
            {
              v1972 = __ROL8__(*v1968++ ^ v1972, v1970);
              v1978 -= 8;
              --v1979;
            }
            while ( v1979 );
            v1952 = v2629;
          }
          for ( ; v1978; --v1978 )
          {
            v1980 = *(unsigned __int8 *)v1968;
            v1968 = (_QWORD *)((char *)v1968 + 1);
            v1972 = __ROL8__(v1980 ^ v1972, v1970);
          }
          for ( i45 = v1972; ; LODWORD(v1972) = i45 ^ v1972 )
          {
            i45 >>= 31;
            if ( !i45 )
              break;
          }
          ++v1962;
          *((_DWORD *)v1960 + 5) = v1972 & 0x7FFFFFFF;
          ++v1961;
          *((_DWORD *)v1952 + 522) += v1963;
          v1960 = (char *)(v2727 + 48);
          v207 = v2631-- == 1;
          v2727 += 48;
        }
        while ( !v207 );
        v1982 = v2660;
        v1983 = BugCheckParameter2;
        v99 = (unsigned __int64)v1952;
        v1984 = v2626;
        v1985 = BugCheckParameter2;
        v1986 = (int)v2635;
        *(_DWORD *)v2660 = 44;
        *((_QWORD *)v1982 + 3) = v1985;
        *((_DWORD *)v1982 + 8) |= 2u;
        v2651 = v1952;
        v2652 = v1952;
        LODWORD(v132) = pg_unknown10(
                          (unsigned int)&v2651,
                          v1986,
                          v1984,
                          v1985,
                          v2630,
                          15,
                          (__int64)&v2666,
                          (__int64)v2692);
        j = 0LL;
        if ( (v132 & 0x80000000) != 0LL )
        {
          v1937 = v132;
          v2634 = v132;
          goto LABEL_3509;
        }
        v99 = (unsigned __int64)v2651;
        v1987 = v2692[0] - v2666;
        v2660 += v2651 - v1952;
        v1988 = (_QWORD *)(v1983 + v2666);
        v2652 = v2651;
        v1989 = v2660 + 192;
        v1990 = 48;
        v1991 = v2660 + 192;
        v1992 = 6LL;
        do
        {
          *v1991 = 0LL;
          v1990 -= 8;
          ++v1991;
          --v1992;
        }
        while ( v1992 );
        for ( *((_QWORD *)&v132 + 1) = 1LL; v1990; --v1990 )
        {
          *(_BYTE *)v1991 = 0;
          v1991 = (_QWORD *)((char *)v1991 + 1);
        }
        *v1989 = 11;
        v1993 = v1988;
        *((_QWORD *)v1989 + 1) = v1988;
        v1994 = (const char *)v1988;
        v1989[4] = v1987;
        *(_DWORD *)(v99 + 2088) += v1987;
        v1995 = *(_DWORD *)(v99 + 2068);
        v1996 = *(_QWORD *)(v99 + 2072);
        v1997 = (unsigned __int64)v1988 + v1987;
        if ( (unsigned __int64)v1988 < v1997 )
        {
          do
          {
            _mm_prefetch(v1994, 0);
            v1994 += 64;
          }
          while ( (unsigned __int64)v1994 < v1997 );
        }
        v100 = *(_QWORD *)(v99 + 2072);
        v1998 = v1987 >> 7;
        if ( v1987 >> 7 )
        {
          do
          {
            v1999 = 8LL;
            do
            {
              v2000 = v100 ^ *v1993;
              v2001 = v1993[1];
              v1993 += 2;
              v100 = __ROL8__(__ROL8__(v2000, v1995) ^ v2001, v1995);
              --v1999;
            }
            while ( v1999 );
            v2002 = __ROL8__(v1996 ^ ((char *)v1993 - (char *)v1988), 17) ^ v1996 ^ ((char *)v1993 - (char *)v1988);
            v2850 = (v2002 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1995 = ((unsigned __int8)(v2002 ^ v2850) ^ (unsigned __int8)v1995) & 0x3F;
            *((_QWORD *)&v132 + 1) = 1LL;
            if ( !v1995 )
              LOBYTE(v1995) = 1;
            --v1998;
          }
          while ( v1998 );
          v1983 = BugCheckParameter2;
        }
        v130 = v1987 & 0x7F;
        if ( (unsigned int)v130 >= 8 )
        {
          v2003 = (unsigned __int64)(unsigned int)v130 >> 3;
          do
          {
            v100 = __ROL8__(*v1993++ ^ v100, v1995);
            v130 = (unsigned int)(v130 - 8);
            --v2003;
          }
          while ( v2003 );
          v1983 = BugCheckParameter2;
          *((_QWORD *)&v132 + 1) = 1LL;
        }
        j = 0LL;
        if ( (_DWORD)v130 )
        {
          do
          {
            v2004 = *(unsigned __int8 *)v1993;
            v1993 = (_QWORD *)((char *)v1993 + 1);
            v100 = __ROL8__(v2004 ^ v100, v1995);
            v130 = (unsigned int)(v130 - 1);
          }
          while ( (_DWORD)v130 );
          j = 0LL;
        }
        for ( i46 = v100; ; v100 = (unsigned int)i46 ^ (unsigned int)v100 )
        {
          i46 >>= 31;
          if ( !i46 )
            break;
        }
        LODWORD(v100) = v100 & 0x7FFFFFFF;
        v1989[5] = v100;
        v2006 = v2660;
        *((_DWORD *)v2660 + 60) = 48;
        if ( *((_DWORD *)v2006 + 64) )
          *((_DWORD *)v2006 + 66) |= 1u;
        v2652 = (_BYTE *)v99;
        v2685 = v2660 + 96;
        if ( v2660 == (char *)-96LL )
        {
          v2007 = *(unsigned int *)(v99 + 2020);
          v2008 = v2007 + 48;
          if ( (unsigned int)(v2007 + 48) <= *(_DWORD *)(v99 + 2588) )
          {
            v2009 = v99;
            *(_DWORD *)(v99 + 2020) = v2008;
          }
          else
          {
            v2009 = pg_unknown7((_DWORD *)v99, v2008, *(_DWORD *)(v99 + 2340));
            if ( !v2009 )
              goto LABEL_3227;
            v2010 = *(_DWORD *)(v99 + 2448);
            if ( (v2010 & 4) == 0 )
            {
              v2011 = *(_DWORD *)(v99 + 2020);
              v2012 = *(_QWORD *)(v99 + 1992);
              v2013 = (v2010 & 0x20000000) != 0 ? *(_DWORD *)(v99 + 2340) : 0;
              if ( v2011 >= 8 )
              {
                v2014 = (unsigned __int64)v2011 >> 3;
                do
                {
                  *(_QWORD *)v99 = 0LL;
                  v2011 -= 8;
                  v99 += 8LL;
                  --v2014;
                }
                while ( v2014 );
              }
              for ( ; v2011; --v2011 )
                *(_BYTE *)v99++ = 0;
              v2015 = *(_DWORD *)(v2009 + 2340);
              *(_DWORD *)(v2009 + 2340) = v2013;
              if ( v2013 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v2009 + 872))(v2012);
              }
              else
              {
                v2016 = 0;
                if ( (*(_DWORD *)(v2009 + 2448) & 0x10000000) == 0 )
                  v2016 = v2013;
                if ( v2016 )
                  (*(void (__fastcall **)(__int64, _QWORD))(v2009 + 552))(v2012 - 8, *(_QWORD *)(v2012 - 8));
                else
                  (*(void (__fastcall **)(__int64))(v2009 + 256))(v2012);
              }
              *(_DWORD *)(v2009 + 2340) = v2015;
            }
            *(_DWORD *)(v2009 + 2448) &= ~4u;
          }
          ++*(_DWORD *)(v2009 + 2060);
          v2017 = v2009 + v2007;
          v2018 = 48;
          v2750 = (_DWORD *)(v2009 + v2007);
          v2019 = (_QWORD *)(v2009 + v2007);
          v2020 = 6LL;
          do
          {
            *v2019 = 0LL;
            v2018 -= 8;
            ++v2019;
            --v2020;
          }
          while ( v2020 );
          for ( ; v2018; --v2018 )
          {
            *(_BYTE *)v2019 = 0;
            v2019 = (_QWORD *)((char *)v2019 + 1);
          }
          v2021 = (const char *)v2645;
          v2022 = v3003;
          v130 = (unsigned __int64)v2645;
          *(_DWORD *)v2017 = 14;
          *(_QWORD *)(v2017 + 8) = v130;
          *(_DWORD *)(v2017 + 16) = v3003;
          *(_DWORD *)(v2009 + 2088) += v3003;
          v2023 = *(_DWORD *)(v2009 + 2068);
          v2024 = *(_QWORD *)(v2009 + 2072);
          if ( v130 < v130 + v3003 )
          {
            v2025 = v2021;
            do
            {
              _mm_prefetch(v2025, 0);
              v2025 += 64;
            }
            while ( (unsigned __int64)v2025 < v130 + v3003 );
          }
          v100 = *(_QWORD *)(v2009 + 2072);
          v2026 = v3003 >> 7;
          if ( v3003 >> 7 )
          {
            do
            {
              v2027 = 8LL;
              do
              {
                v2028 = *(_QWORD *)(v130 + 8) ^ __ROL8__(*(_QWORD *)v130 ^ v100, v2023);
                v130 += 16LL;
                v100 = __ROL8__(v2028, v2023);
                --v2027;
              }
              while ( v2027 );
              v2029 = (__ROL8__(v2024 ^ (v130 - (_QWORD)v2021), 17) ^ v2024 ^ (v130 - (unsigned __int64)v2021))
                    * (unsigned __int128)0x7010008004002001uLL;
              v2851 = *((_QWORD *)&v2029 + 1);
              v2023 = ((unsigned __int8)(v2029 ^ BYTE8(v2029)) ^ (unsigned __int8)v2023) & 0x3F;
              if ( !v2023 )
                LOBYTE(v2023) = 1;
              --v2026;
            }
            while ( v2026 );
            v2022 = v3003;
            v1983 = BugCheckParameter2;
          }
          *((_QWORD *)&v132 + 1) = v2022 & 0x7F;
          if ( DWORD2(v132) >= 8 )
          {
            *(_QWORD *)&v132 = (unsigned __int64)(v2022 & 0x7F) >> 3;
            do
            {
              v100 = __ROL8__(*(_QWORD *)v130 ^ v100, v2023);
              v130 += 8LL;
              *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 8);
              *(_QWORD *)&v132 = v132 - 1;
            }
            while ( (_QWORD)v132 );
          }
          for ( ; DWORD2(v132); *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 1) )
          {
            *(_QWORD *)&v132 = *(unsigned __int8 *)v130++;
            v100 = __ROL8__(v132 ^ v100, v2023);
          }
          for ( i47 = v100; ; v100 = (unsigned int)i47 ^ (unsigned int)v100 )
          {
            i47 >>= 31;
            if ( !i47 )
              break;
          }
          LODWORD(v100) = v100 & 0x7FFFFFFF;
          *(_DWORD *)(v2017 + 20) = v100;
          v99 = v2009;
          v2685 = v2750;
          *(_DWORD *)(v2009 + 2088) += v2022;
        }
        else
        {
          v2022 = v3003;
          v2021 = (const char *)v2645;
          *((_DWORD *)v2660 + 24) = 14;
        }
        if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 && v2022 )
          pg_unknown12(v99, v2021, v2022, v2685 + 7);
        j = 0LL;
        v2652 = (_BYTE *)v99;
        v2685[6] = 0;
        v2685[6] |= 1u;
        v2031 = v2660;
        *((_DWORD *)v2660 + 36) = 35;
        *((_DWORD *)v2031 + 46) |= 1u;
        if ( *((_DWORD *)v2031 + 40) < 0x94u )
        {
          v2037 = BugCheckParameter2;
LABEL_3265:
          v207 = (*(_DWORD *)(v99 + 2448) & 0x400000) == 0;
          v2651 = (_BYTE *)v99;
          if ( v207 )
            goto LABEL_3507;
          *(_QWORD *)&v132 = (*(__int64 (__fastcall **)(ULONG_PTR))(v99 + 504))(v2037);
          v2623 = v132;
          v2038 = v132;
          if ( !(_QWORD)v132 )
          {
            v1937 = -1073741701;
LABEL_3268:
            j = 0LL;
LABEL_3508:
            v2634 = v1937;
            goto LABEL_3509;
          }
          v2039 = *(_WORD *)(v132 + 6);
          v132 = v2626 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL;
          v3004 = v2039;
          v130 = v2626 / 0xCuLL;
          v2629 = (const char *)v130;
          if ( !v2039 )
          {
            if ( (*(_DWORD *)(v99 + 2448) & 0x200000) == 0 )
            {
              v2692[1] = -805294751;
              KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v2037, 0LL, 0LL);
            }
            goto LABEL_3271;
          }
          v2040 = 0;
          v2041 = (unsigned int *)v2635;
          v2622 = 0;
          v2631 = 12LL * (unsigned int)v130;
          v2628 = &v2635[v2631];
          v2042 = (unsigned int *)&v2635[v2631];
          v2627 = (char *)(*(unsigned __int16 *)(v2038 + 20) + v2038 + 24);
          v100 = (unsigned __int64)v2627;
          v130 = 0LL;
          v2043 = (unsigned int *)(v2627 + 8);
          while ( 1 )
          {
            v2044 = v2043[2];
            *((_QWORD *)&v132 + 1) = v2043[1];
            if ( v2044 <= *v2043 )
              v2044 = *v2043;
            v2632 = v2043[1];
            v2045 = DWORD2(v132) + v2044;
            if ( v2040 )
            {
              if ( v2045 < *(_DWORD *)(v100 + 40LL * (v2040 - 1) + 12) )
              {
                if ( (*(_DWORD *)(v99 + 2448) & 0x200000) == 0 )
                {
                  v2692[2] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v2037, 1uLL, 0LL);
                }
                j = 0LL;
                if ( !*(_DWORD *)(v99 + 2296) )
                {
                  *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v99 + 2312) = 0LL;
                  *(_QWORD *)(v99 + 2320) = 271LL;
                  *(_QWORD *)(v99 + 2328) = v2037;
                  *(_DWORD *)(v99 + 2296) = 1;
LABEL_3273:
                  __b8(v99, 0LL);
                }
LABEL_3274:
                v1937 = -1073741701;
                goto LABEL_3508;
              }
              v2040 = v2622;
            }
            if ( v2041 != v2042 )
              break;
LABEL_3305:
            ++v2040;
            v2043 += 10;
            v2622 = v2040;
            if ( v2040 >= v2039 )
            {
              v130 = (unsigned __int64)v2629;
              v2054 = v2623;
              v2055 = v2631;
              v2056 = v2626;
              if ( v2041 != v2042 )
              {
                if ( (*(_DWORD *)(v99 + 2448) & 0x200000) == 0 )
                {
                  v2692[6] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v2037, 3uLL, 0LL);
                }
                goto LABEL_3271;
              }
              if ( (_DWORD)v2629 )
                v2057 = ((_DWORD)v2629 + 6) & 0xFFFFFFF8;
              else
                v2057 = 0;
              v2058 = *(unsigned int *)(v99 + 2020);
              v2059 = v2058 + v2057 + 8 * (3 * v2039 + 6);
              if ( v2059 <= *(_DWORD *)(v99 + 2588) )
              {
                v2060 = v99;
                *(_DWORD *)(v99 + 2020) = v2059;
                v2631 = v99;
              }
              else
              {
                v2631 = pg_unknown7((_DWORD *)v99, v2059, *(_DWORD *)(v99 + 2340));
                v2060 = v2631;
                if ( !v2631 )
                {
                  v1937 = -1073741670;
                  goto LABEL_3268;
                }
                v2061 = *(_DWORD *)(v99 + 2448);
                if ( (v2061 & 4) == 0 )
                {
                  v2062 = *(_DWORD *)(v99 + 2020);
                  v2063 = *(_QWORD *)(v99 + 1992);
                  v2064 = (v2061 & 0x20000000) != 0 ? *(_DWORD *)(v99 + 2340) : 0;
                  if ( v2062 >= 8 )
                  {
                    v2065 = (unsigned __int64)v2062 >> 3;
                    do
                    {
                      *(_QWORD *)v99 = 0LL;
                      v2062 -= 8;
                      v99 += 8LL;
                      --v2065;
                    }
                    while ( v2065 );
                  }
                  for ( ; v2062; --v2062 )
                    *(_BYTE *)v99++ = 0;
                  v2066 = *(_DWORD *)(v2060 + 2340);
                  *(_DWORD *)(v2060 + 2340) = v2064;
                  if ( v2064 == 3 )
                  {
                    (*(void (__fastcall **)(__int64))(v2060 + 872))(v2063);
                  }
                  else
                  {
                    v2067 = 0;
                    if ( (*(_DWORD *)(v2060 + 2448) & 0x10000000) == 0 )
                      v2067 = v2064;
                    if ( v2067 )
                      (*(void (__fastcall **)(__int64, _QWORD))(v2060 + 552))(v2063 - 8, *(_QWORD *)(v2063 - 8));
                    else
                      (*(void (__fastcall **)(__int64))(v2060 + 256))(v2063);
                  }
                  *(_DWORD *)(v2060 + 2340) = v2066;
                }
                *(_DWORD *)(v2060 + 2448) &= ~4u;
                LODWORD(v130) = (_DWORD)v2629;
                v2039 = v3004;
              }
              v2068 = v2060 + v2058;
              ++*(_DWORD *)(v2060 + 2060);
              v2069 = (_QWORD *)(v2060 + v2058);
              v2751 = v2060 + v2058;
              v2070 = 48;
              v2071 = 6LL;
              do
              {
                *v2069 = 0LL;
                v2070 -= 8;
                ++v2069;
                --v2071;
              }
              while ( v2071 );
              for ( ; v2070; --v2070 )
              {
                *(_BYTE *)v2069 = 0;
                v2069 = (_QWORD *)((char *)v2069 + 1);
              }
              v2072 = v2635;
              *(_DWORD *)v2068 = 30;
              *(_QWORD *)(v2068 + 8) = v2072;
              *(_DWORD *)(v2068 + 16) = 0;
              v2073 = *(_QWORD *)(v2060 + 2072);
              for ( i48 = v2073; ; LODWORD(v2073) = i48 ^ v2073 )
              {
                i48 >>= 31;
                if ( !i48 )
                  break;
              }
              v100 = BugCheckParameter2;
              *(_DWORD *)(v2068 + 20) = v2073 & 0x7FFFFFFF;
              v99 = v2060;
              v2675 = v2751;
              v2651 = (_BYTE *)v2060;
              *(_QWORD *)(v2751 + 24) = v100;
              v2075 = *(_DWORD *)(v2054 + 80);
              j = 0LL;
              *(_DWORD *)(v2675 + 32) = v2075;
              *(_DWORD *)(v2675 + 36) = v2056;
              *(_WORD *)(v2675 + 40) = v2039;
              *(_WORD *)(v2675 + 42) |= 1u;
              *((_QWORD *)&v132 + 1) = v2675 + 48;
              v2620 = v2675 + 48;
              if ( (_DWORD)v130 )
                v2076 = (unsigned int *)(*((_QWORD *)&v132 + 1)
                                       + (((unsigned int)(v130 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              else
                v2076 = (unsigned int *)(v2675 + 48);
              v2077 = *(unsigned __int16 *)(v2675 + 40);
              v2078 = 12LL;
              v2625 = (__int64)v2076;
              if ( !(_DWORD)v130 )
                v2078 = v2055;
              v130 = 1LL;
              v2079 = v2635;
              v2080 = &v2635[v2078];
              v2621 = v2080;
              v2081 = &v2076[6 * v2077];
              v2623 = (__int64)v2081;
              if ( v2039 )
              {
                *((_QWORD *)&v132 + 1) = v2039;
                *(_QWORD *)&v132 = v2076 + 2;
                do
                {
                  v2082 = 2LL;
                  do
                  {
                    *(_DWORD *)(v132 - 8) = 0;
                    *(_DWORD *)(v132 - 4) = 0;
                    *(_DWORD *)v132 = 0x80000000;
                    *(_QWORD *)&v132 = v132 + 12;
                    --v2082;
                  }
                  while ( v2082 );
                  --*((_QWORD *)&v132 + 1);
                }
                while ( *((_QWORD *)&v132 + 1) );
                v2080 = v2621;
              }
              if ( v2076 != v2081 )
              {
                v2083 = v2627;
                while ( 1 )
                {
                  if ( (v2084 = 0, (*((_DWORD *)v2083 + 9) & 0x2000000) != 0)
                    || (v2085 = *(_DWORD *)v2083, *(_DWORD *)v2083 == 1414090313)
                    && *((_DWORD *)v2083 + 1) == 1195525195
                    || v2085 == 1162297680
                    && ((v2086 = *((_WORD *)v2083 + 2), v2086 == 30839) || v2086 == 29303 || v2086 == 30583)
                    || v2085 == 1095914053 && *((_WORD *)v2083 + 2) == 16724 )
                  {
                    v2084 = 1;
                  }
                  else
                  {
                    v2087 = *(char **)(v2060 + 2352);
                    v2088 = 7;
                    v2774 = *(__int64 **)(v2060 + 2360);
                    v2089 = v2083 - v2087;
                    v2775 = *(char **)(v2060 + 2368);
                    v2776 = *(char **)(v2060 + 2376);
                    v2773 = v2087;
                    while ( 1 )
                    {
                      v2090 = (unsigned __int8)v2087[v2089];
                      v2091 = (unsigned __int8)*v2087++;
                      if ( v2090 != v2091 )
                        break;
                      if ( !--v2088 )
                      {
LABEL_3383:
                        v2084 = 1;
                        goto LABEL_3385;
                      }
                    }
                    v2092 = v2774;
                    v2093 = 8;
                    v2094 = (__int64 *)v2083;
                    while ( 1 )
                    {
                      v2095 = *v2094++;
                      v2096 = *v2092++;
                      if ( v2095 != v2096 )
                        break;
                      v2093 -= 8;
                      if ( v2093 < 8 )
                      {
                        if ( !v2093 )
                          goto LABEL_3383;
                        while ( 1 )
                        {
                          v2097 = *(unsigned __int8 *)v2094;
                          v2094 = (__int64 *)((char *)v2094 + 1);
                          v2098 = *(unsigned __int8 *)v2092;
                          v2092 = (__int64 *)((char *)v2092 + 1);
                          if ( v2097 != v2098 )
                            goto LABEL_3376;
                          if ( !--v2093 )
                            goto LABEL_3383;
                        }
                      }
                    }
LABEL_3376:
                    v2099 = v2775;
                    v2100 = 4;
                    while ( 1 )
                    {
                      v2101 = (unsigned __int8)v2099[v2083 - v2775];
                      v2102 = (unsigned __int8)*v2099++;
                      if ( v2101 != v2102 )
                        break;
                      if ( !--v2100 )
                        goto LABEL_3383;
                    }
                    v2103 = v2776;
                    v2104 = 6;
                    while ( 1 )
                    {
                      v2105 = (unsigned __int8)v2103[v2083 - v2776];
                      v2106 = (unsigned __int8)*v2103++;
                      if ( v2105 != v2106 )
                        break;
                      if ( !--v2104 )
                        goto LABEL_3383;
                    }
LABEL_3385:
                    v100 = BugCheckParameter2;
                  }
                  v2107 = *((_DWORD *)v2083 + 9);
                  if ( v2107 < 0 )
                    v2084 = 1;
                  v3005 = v2084;
                  if ( v2084 && *(_DWORD *)v2083 == 1414090313 && *((_DWORD *)v2083 + 1) == 1195525195 )
                  {
                    if ( (*(_DWORD *)(v2060 + 2452) & 0x2000) != 0 )
                      v2084 = 0;
                    v3005 = v2084;
                  }
                  if ( (*(_DWORD *)(v2060 + 2452) & 0x4000) != 0
                    && (v2107 & 0x20000000) != 0
                    && (v100 == *(_QWORD *)(v2060 + 1512) || v100 == *(_QWORD *)(v2060 + 1520)) )
                  {
                    v2084 = 1;
                    v3005 = 1;
                  }
                  v2108 = *((_DWORD *)v2083 + 4);
                  v2109 = *((_DWORD *)v2083 + 3);
                  v130 = (unsigned __int64)v2628;
                  if ( v2108 <= *((_DWORD *)v2083 + 2) )
                    v2108 = *((_DWORD *)v2083 + 2);
                  v2110 = v2109 + v2108;
                  v2626 = *((_DWORD *)v2083 + 3);
                  v2622 = v2110;
                  if ( v2079 == v2628 )
                  {
                    v2111 = 0;
                  }
                  else
                  {
                    LODWORD(j) = *(_DWORD *)v2079;
                    v2111 = *((_DWORD *)v2079 + 1);
                  }
                  v2632 = v2109;
                  if ( v2635 != v2628 && (unsigned int)j > v2109 && v2111 <= v2110 && !v2084 )
                  {
                    *v2076 = v2109;
                    v2112 = v2722;
                    v2076[1] = j;
                    v2113 = v2781;
                    v2114 = *v2076;
                    v2115 = j - v2114;
                    v2632 = j;
                    v2116 = v100 + v2114;
                    v100 = 0LL;
                    v2117 = v2116 + (unsigned int)(j - v2114);
                    do
                    {
                      if ( v2116 < *v2113 + *v2112 && v2117 > *v2113 )
                      {
                        v2110 = v2622;
                        v2080 = v2621;
                        v2109 = v2626;
                        v130 = (unsigned __int64)v2628;
                        goto LABEL_3431;
                      }
                      v100 = (unsigned int)(v100 + 1);
                      ++v2113;
                      ++v2112;
                    }
                    while ( (unsigned int)v100 < 6 );
                    *(_DWORD *)(v2060 + 2088) += v2115;
                    v2118 = (_QWORD *)v2116;
                    v2119 = *(_DWORD *)(v2060 + 2068);
                    v2120 = (const char *)v2116;
                    v2121 = *(_QWORD *)(v2060 + 2072);
                    if ( v2116 < v2117 )
                    {
                      do
                      {
                        _mm_prefetch(v2120, 0);
                        v2120 += 64;
                      }
                      while ( (unsigned __int64)v2120 < v2117 );
                    }
                    v100 = *(_QWORD *)(v2060 + 2072);
                    v2122 = v2115 >> 7;
                    if ( v2115 >> 7 )
                    {
                      do
                      {
                        v2123 = 8LL;
                        do
                        {
                          v2124 = v100 ^ *v2118;
                          v2125 = v2118[1];
                          v2118 += 2;
                          v100 = __ROL8__(__ROL8__(v2124, v2119) ^ v2125, v2119);
                          --v2123;
                        }
                        while ( v2123 );
                        v2126 = __ROL8__(v2121 ^ ((unsigned __int64)v2118 - v2116), 17) ^ v2121 ^ ((unsigned __int64)v2118
                                                                                                 - v2116);
                        v2852 = (v2126 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v2119 = ((unsigned __int8)(v2126 ^ v2852) ^ (unsigned __int8)v2119) & 0x3F;
                        if ( !v2119 )
                          LOBYTE(v2119) = 1;
                        --v2122;
                      }
                      while ( v2122 );
                      v2060 = v2631;
                    }
                    v2127 = v2115 & 0x7F;
                    if ( v2127 >= 8 )
                    {
                      v2128 = (unsigned __int64)v2127 >> 3;
                      do
                      {
                        v100 = __ROL8__(*v2118++ ^ v100, v2119);
                        v2127 -= 8;
                        --v2128;
                      }
                      while ( v2128 );
                    }
                    for ( ; v2127; --v2127 )
                    {
                      v2129 = *(unsigned __int8 *)v2118;
                      v2118 = (_QWORD *)((char *)v2118 + 1);
                      v100 = __ROL8__(v2129 ^ v100, v2119);
                    }
                    for ( i49 = v100; ; v100 = (unsigned int)i49 ^ (unsigned int)v100 )
                    {
                      i49 >>= 31;
                      if ( !i49 )
                        break;
                    }
                    LODWORD(v100) = v100 & 0x7FFFFFFF;
                    v2110 = v2622;
                    v2080 = v2621;
                    v2109 = v2626;
                    v130 = (unsigned __int64)v2628;
                    *(_DWORD *)(v2625 + 8) = v100;
                  }
LABEL_3431:
                  if ( (unsigned int)j < v2109 )
                  {
                    v2132 = v3005;
                  }
                  else
                  {
                    v2131 = v2111 <= v2110;
                    v2132 = v3005;
                    if ( v2131 )
                    {
                      v100 = (unsigned __int64)v2635;
                      if ( v2635 != (char *)v130 )
                      {
                        v2133 = *((_DWORD *)v2080 + 1);
                        if ( v2133 <= v2110 )
                        {
                          v2134 = (_BYTE *)v2620;
                          do
                          {
                            if ( v2080 == (char *)v130 )
                              break;
                            if ( v2132 )
                            {
                              v2135 = 0x80;
                            }
                            else
                            {
                              v2136 = *(unsigned int *)(v100 + 4);
                              v2137 = *(_DWORD *)v2621;
                              v2632 = v2137;
                              if ( v2137 < (unsigned int)v2136 )
                              {
                                if ( (*(_DWORD *)(v2060 + 2448) & 0x200000) == 0 )
                                {
                                  v2692[7] = -805294751;
                                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, 6uLL, 0LL);
                                }
                                if ( !*(_DWORD *)(v2060 + 2296) )
                                {
                                  v2138 = BugCheckParameter2;
                                  *(_QWORD *)(v2060 + 2304) = v2060 - 0x5C5FC0A76E374B18LL;
                                  *(_QWORD *)(v2060 + 2312) = 0LL;
                                  *(_QWORD *)(v2060 + 2320) = 271LL;
                                  *(_QWORD *)(v2060 + 2328) = v2138;
                                  *(_DWORD *)(v2060 + 2296) = 1;
                                  __b8(v2060, 0LL);
                                }
                              }
                              v2139 = v2722;
                              v2140 = BugCheckParameter2 + v2136;
                              v2141 = v2781;
                              v2142 = v2137 - v2136;
                              v2143 = BugCheckParameter2 + v2136 + v2137 - (unsigned int)v2136;
                              for ( i50 = 0; i50 < 6; ++i50 )
                              {
                                if ( v2140 < *v2141 + *v2139 && v2143 > *v2141 )
                                  goto LABEL_3466;
                                ++v2139;
                                ++v2141;
                              }
                              if ( v2142 < 4 )
                              {
LABEL_3466:
                                v2135 = 0x80;
                                goto LABEL_3467;
                              }
                              *(_DWORD *)(v2060 + 2088) += v2142;
                              v2145 = (_QWORD *)v2140;
                              v2146 = *(_DWORD *)(v2060 + 2068);
                              v2147 = (const char *)v2140;
                              v2148 = *(_QWORD *)(v2060 + 2072);
                              if ( v2140 < v2143 )
                              {
                                do
                                {
                                  _mm_prefetch(v2147, 0);
                                  v2147 += 64;
                                }
                                while ( (unsigned __int64)v2147 < v2143 );
                              }
                              v2149 = *(_QWORD *)(v2060 + 2072);
                              v2150 = v2142 >> 7;
                              if ( v2142 >> 7 )
                              {
                                do
                                {
                                  v2151 = 8LL;
                                  do
                                  {
                                    v2152 = v2149 ^ *v2145;
                                    v2153 = v2145[1];
                                    v2145 += 2;
                                    v2149 = __ROL8__(__ROL8__(v2152, v2146) ^ v2153, v2146);
                                    --v2151;
                                  }
                                  while ( v2151 );
                                  v2154 = __ROL8__(v2148 ^ ((unsigned __int64)v2145 - v2140), 17) ^ v2148 ^ ((unsigned __int64)v2145 - v2140);
                                  v2853 = (v2154 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                  v2146 = ((unsigned __int8)(v2154 ^ v2853) ^ (unsigned __int8)v2146) & 0x3F;
                                  if ( !v2146 )
                                    LOBYTE(v2146) = 1;
                                  --v2150;
                                }
                                while ( v2150 );
                                v2132 = v3005;
                              }
                              v2155 = v2142 & 0x7F;
                              if ( v2155 >= 8 )
                              {
                                v2156 = (unsigned __int64)v2155 >> 3;
                                do
                                {
                                  v2149 = __ROL8__(*v2145++ ^ v2149, v2146);
                                  v2155 -= 8;
                                  --v2156;
                                }
                                while ( v2156 );
                              }
                              for ( ; v2155; --v2155 )
                              {
                                v2157 = *(unsigned __int8 *)v2145;
                                v2145 = (_QWORD *)((char *)v2145 + 1);
                                v2149 = __ROL8__(v2157 ^ v2149, v2146);
                              }
                              for ( i51 = v2149; ; LOBYTE(v2149) = i51 ^ v2149 )
                              {
                                i51 >>= 7;
                                if ( !i51 )
                                  break;
                              }
                              v2135 = v2149 & 0x7F;
LABEL_3467:
                              v130 = (unsigned __int64)v2628;
                              v2080 = v2621;
                              v2110 = v2622;
                              v2134 = (_BYTE *)v2620;
                            }
                            *v2134 = v2135;
                            v2080 += 12;
                            v100 = (unsigned __int64)(v2635 + 12);
                            v2134 = (_BYTE *)(v2620 + 1);
                            v2635 += 12;
                            ++v2620;
                            v2621 = v2080;
                            if ( v2080 != (char *)v130 )
                              v2133 = *((_DWORD *)v2080 + 1);
                          }
                          while ( v2133 <= v2110 );
                        }
                      }
                    }
                  }
                  v2159 = (unsigned int *)v2625;
                  j = 0LL;
                  if ( !v2132 && v2632 != v2110 )
                  {
                    v2160 = BugCheckParameter2;
                    v2161 = v2781;
                    *(_DWORD *)(v2625 + 12) = v2632;
                    v2159[4] = v2110;
                    v2162 = v2110;
                    v2163 = v2159[3];
                    v2164 = v2722;
                    v130 = v2162 - (unsigned int)v2163;
                    v2165 = v2163 + v2160;
                    v100 = 0LL;
                    v2166 = v2165 + (unsigned int)v130;
                    while ( v2165 >= *v2161 + *v2164 || v2166 <= *v2161 )
                    {
                      v100 = (unsigned int)(v100 + 1);
                      ++v2161;
                      ++v2164;
                      if ( (unsigned int)v100 >= 6 )
                      {
                        *(_DWORD *)(v2060 + 2088) += v130;
                        v2167 = (_QWORD *)v2165;
                        v2168 = *(_DWORD *)(v2060 + 2068);
                        v2169 = (const char *)v2165;
                        v2170 = *(_QWORD *)(v2060 + 2072);
                        if ( v2165 < v2166 )
                        {
                          do
                          {
                            _mm_prefetch(v2169, 0);
                            v2169 += 64;
                          }
                          while ( (unsigned __int64)v2169 < v2166 );
                        }
                        v100 = *(_QWORD *)(v2060 + 2072);
                        v2171 = (unsigned int)v130 >> 7;
                        if ( (unsigned int)v130 >> 7 )
                        {
                          do
                          {
                            v2172 = 8LL;
                            do
                            {
                              v2173 = v100 ^ *v2167;
                              v2174 = v2167[1];
                              v2167 += 2;
                              v100 = __ROL8__(__ROL8__(v2173, v2168) ^ v2174, v2168);
                              --v2172;
                            }
                            while ( v2172 );
                            v2175 = __ROL8__(v2170 ^ ((unsigned __int64)v2167 - v2165), 17) ^ v2170 ^ ((unsigned __int64)v2167 - v2165);
                            v2854 = (v2175 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                            v2168 = ((unsigned __int8)(v2175 ^ v2854) ^ (unsigned __int8)v2168) & 0x3F;
                            if ( !v2168 )
                              LOBYTE(v2168) = 1;
                            --v2171;
                          }
                          while ( v2171 );
                          v2159 = (unsigned int *)v2625;
                        }
                        v130 &= 0x7Fu;
                        if ( (unsigned int)v130 >= 8 )
                        {
                          v2176 = (unsigned __int64)(unsigned int)v130 >> 3;
                          do
                          {
                            v100 = __ROL8__(*v2167++ ^ v100, v2168);
                            v130 = (unsigned int)(v130 - 8);
                            --v2176;
                          }
                          while ( v2176 );
                        }
                        j = 0LL;
                        if ( (_DWORD)v130 )
                        {
                          do
                          {
                            v2177 = *(unsigned __int8 *)v2167;
                            v2167 = (_QWORD *)((char *)v2167 + 1);
                            v100 = __ROL8__(v2177 ^ v100, v2168);
                            v130 = (unsigned int)(v130 - 1);
                          }
                          while ( (_DWORD)v130 );
                          j = 0LL;
                        }
                        for ( i52 = v100; ; v100 = (unsigned int)i52 ^ (unsigned int)v100 )
                        {
                          i52 >>= 31;
                          if ( !i52 )
                            break;
                        }
                        LODWORD(v100) = v100 & 0x7FFFFFFF;
                        v2159[5] = v100;
                        break;
                      }
                    }
                  }
                  *((_QWORD *)&v132 + 1) = v2628;
                  v2079 = v2635;
                  v2080 = v2621;
                  if ( v2635 != v2628 && *(_DWORD *)v2635 >= v2626 && *((_DWORD *)v2635 + 1) <= v2622 )
                  {
                    if ( v2621 != v2628 )
                    {
                      v2179 = v2620;
                      *(_BYTE *)v2620 = 0x80;
                      v2620 = v2179 + 1;
                      v2080 += 12;
                      v2621 = v2080;
                    }
                    v2079 += 12;
                    v2635 = v2079;
                  }
                  v2076 = v2159 + 6;
                  v2083 = v2627 + 40;
                  v2625 = (__int64)v2076;
                  v2627 += 40;
                  if ( v2076 == (unsigned int *)v2623 )
                    break;
                  v100 = BugCheckParameter2;
                }
                v99 = (unsigned __int64)v2651;
              }
LABEL_3507:
              v2652 = (_BYTE *)v99;
              v1937 = 0;
              goto LABEL_3508;
            }
          }
          while ( 1 )
          {
            LODWORD(v132) = v2041[1];
            if ( *v2041 >= v2045 || (unsigned int)v132 <= DWORD2(v132) )
            {
LABEL_3304:
              v2040 = v2622;
              v2039 = v3004;
              v100 = (unsigned __int64)v2627;
              v2042 = (unsigned int *)v2628;
              goto LABEL_3305;
            }
            if ( *v2041 < DWORD2(v132) || (unsigned int)v132 > v2045 )
            {
              if ( (*(_DWORD *)(v99 + 2448) & 0x200000) == 0 )
              {
                v2692[5] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v2037, 2uLL, 0LL);
              }
LABEL_3271:
              j = 0LL;
              if ( !*(_DWORD *)(v99 + 2296) )
              {
                *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v99 + 2312) = 0LL;
                *(_QWORD *)(v99 + 2320) = 271LL;
                *(_QWORD *)(v99 + 2328) = v2037;
                *(_DWORD *)(v99 + 2296) = 1;
                goto LABEL_3273;
              }
              goto LABEL_3274;
            }
            v2046 = v2041[2];
            if ( (v2046 & 1) != 0 || (*(_BYTE *)(v2046 + v2037) & 0x20) != 0 )
              break;
LABEL_3303:
            v2041 += 3;
            if ( v2041 == (unsigned int *)v2628 )
              goto LABEL_3304;
          }
          v2047 = v2043[1];
          v2048 = v2043[2];
          if ( v2048 <= *v2043 )
            v2048 = *v2043;
          v2630 = v2043[1];
          v2049 = v2047 + v2048;
          v2050 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR))(v99 + 1048))(
                                    v2041,
                                    BugCheckParameter2);
          if ( *v2050 < v2630 || v2050[1] > v2049 )
          {
            v2051 = BugCheckParameter2;
            if ( (*(_DWORD *)(v99 + 2448) & 0x200000) == 0 )
            {
              v2692[4] = -805294751;
              KeBugCheckEx(
                __ROR4__(-805306349, 92),
                0xAuLL,
                BugCheckParameter2,
                ((_DWORD)v2050 - (_DWORD)BugCheckParameter2) | 0x80000000,
                0LL);
            }
            if ( !*(_DWORD *)(v99 + 2296) )
            {
              *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v99 + 2312) = 0LL;
              *(_QWORD *)(v99 + 2320) = 271LL;
              *(_QWORD *)(v99 + 2328) = v2051;
              *(_DWORD *)(v99 + 2296) = 1;
              __b8(v99, 0LL);
            }
          }
          v2052 = (unsigned int *)(*(__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))(v99 + 1056))(
                                    v2050,
                                    BugCheckParameter2,
                                    BugCheckParameter2 + *v2050);
          if ( *v2052 >= v2630 && v2052[1] <= v2049 )
          {
            v2037 = BugCheckParameter2;
          }
          else
          {
            v2037 = BugCheckParameter2;
            v2053 = ((_DWORD)v2052 - BugCheckParameter2) | 0x80000000;
            if ( (*(_DWORD *)(v99 + 2448) & 0x200000) == 0 )
            {
              v2692[3] = -805294751;
              KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, v2053, 0LL);
            }
            v130 = 0LL;
            if ( *(_DWORD *)(v99 + 2296) )
              goto LABEL_3302;
            *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v99 + 2312) = 0LL;
            *(_QWORD *)(v99 + 2320) = 271LL;
            *(_QWORD *)(v99 + 2328) = v2037;
            *(_DWORD *)(v99 + 2296) = 1;
            __b8(v99, 0LL);
          }
          v130 = 0LL;
LABEL_3302:
          *((_QWORD *)&v132 + 1) = v2632;
          goto LABEL_3303;
        }
        v2032 = *((_QWORD *)v2031 + 19);
        *(_QWORD *)&v132 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, unsigned __int64, unsigned __int64))(v99 + 504))(
                             v1983,
                             *((_QWORD *)&v132 + 1),
                             v100,
                             v130);
        if ( (_QWORD)v132 )
        {
          v2033 = *(unsigned int *)(v132 + 80);
          *((_DWORD *)v2031 + 46) |= 2u;
          v2034 = v1983 + v2033;
          v2035 = *(_QWORD **)(v2032 + 112);
          if ( (unsigned __int64)v2035 >= v1983 && (unsigned __int64)v2035 < v2034 )
          {
            *((_QWORD *)v2031 + 21) = *v2035;
            *((_DWORD *)v2031 + 46) |= 4u;
          }
          v2036 = *(_QWORD **)(v2032 + 120);
          v2037 = BugCheckParameter2;
          if ( (unsigned __int64)v2036 >= BugCheckParameter2 && (unsigned __int64)v2036 < v2034 )
          {
            *((_QWORD *)v2031 + 22) = *v2036;
            *((_DWORD *)v2031 + 46) |= 8u;
          }
          goto LABEL_3265;
        }
LABEL_3227:
        v2651 = 0LL;
        v1601 = (_BYTE *)v99;
        v2634 = -1073741670;
        goto LABEL_3511;
      }
      v1737 = *(_QWORD *)(v99 + 1392);
      v3000 = *(_QWORD *)(v99 + 1400);
      v2631 = v3000 + 32;
      *((_QWORD *)&v132 + 1) = 2LL;
      v2629 = (const char *)v1737;
      v1738 = (const char **)(v1737 + 32);
      v2623 = v1737 + 32;
      if ( v1722 < 2 )
      {
        v1739 = *v1738;
        v1740 = *(unsigned int *)(v99 + 2020);
        v1741 = 4 * *(_DWORD *)(v1737 + 48);
        v1742 = v1740 + 48;
        if ( (unsigned int)(v1740 + 48) <= *(_DWORD *)(v99 + 2588) )
        {
          v1743 = v99;
          *(_DWORD *)(v99 + 2020) = v1742;
        }
        else
        {
          *(_QWORD *)&v132 = pg_unknown7((_DWORD *)v99, v1742, *(_DWORD *)(v99 + 2340));
          v130 = 0LL;
          v1743 = v132;
          if ( !(_QWORD)v132 )
            goto LABEL_3039;
          v1744 = *(_DWORD *)(v99 + 2448);
          if ( (v1744 & 4) == 0 )
          {
            v1745 = *(_DWORD *)(v99 + 2020);
            v1746 = *(_QWORD *)(v99 + 1992);
            v1747 = (v1744 & 0x20000000) != 0 ? *(_DWORD *)(v99 + 2340) : 0;
            if ( v1745 >= 8 )
            {
              v1748 = (unsigned __int64)v1745 >> 3;
              do
              {
                *(_QWORD *)v99 = 0LL;
                v1745 -= 8;
                v99 += 8LL;
                --v1748;
              }
              while ( v1748 );
            }
            for ( ; v1745; --v1745 )
              *(_BYTE *)v99++ = 0;
            v1749 = *(_DWORD *)(v1743 + 2340);
            *(_DWORD *)(v1743 + 2340) = v1747;
            if ( v1747 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v1743 + 872))(v1746);
            }
            else
            {
              v1750 = 0;
              if ( (*(_DWORD *)(v1743 + 2448) & 0x10000000) == 0 )
                v1750 = v1747;
              if ( v1750 )
                (*(void (__fastcall **)(__int64, _QWORD))(v1743 + 552))(v1746 - 8, *(_QWORD *)(v1746 - 8));
              else
                (*(void (__fastcall **)(__int64))(v1743 + 256))(v1746);
            }
            *(_DWORD *)(v1743 + 2340) = v1749;
          }
          *(_DWORD *)(v1743 + 2448) &= ~4u;
        }
        v1751 = v1743 + v1740;
        ++*(_DWORD *)(v1743 + 2060);
        v1752 = (_QWORD *)(v1743 + v1740);
        v2843 = v1743 + v1740;
        v1753 = 48;
        v1754 = 6LL;
        do
        {
          *v1752 = 0LL;
          v1753 -= 8;
          ++v1752;
          --v1754;
        }
        while ( v1754 );
        for ( ; v1753; --v1753 )
        {
          *(_BYTE *)v1752 = 0;
          v1752 = (_QWORD *)((char *)v1752 + 1);
        }
        *(_DWORD *)v1751 = 11;
        v130 = (unsigned __int64)v1739;
        *(_QWORD *)(v1751 + 8) = v1739;
        v1755 = v1739;
        *(_DWORD *)(v1751 + 16) = v1741;
        *(_DWORD *)(v1743 + 2088) += v1741;
        v1756 = *(_DWORD *)(v1743 + 2068);
        v1757 = *(_QWORD *)(v1743 + 2072);
        v1758 = (unsigned __int64)&v1739[v1741];
        if ( (unsigned __int64)v1739 < v1758 )
        {
          do
          {
            _mm_prefetch(v1755, 0);
            v1755 += 64;
          }
          while ( (unsigned __int64)v1755 < v1758 );
        }
        v100 = *(_QWORD *)(v1743 + 2072);
        for ( i53 = v1741 >> 7; i53; --i53 )
        {
          v1760 = 8LL;
          do
          {
            v1761 = v100 ^ *(_QWORD *)v130;
            v1762 = *(_QWORD *)(v130 + 8);
            v130 += 16LL;
            v100 = __ROL8__(__ROL8__(v1761, v1756) ^ v1762, v1756);
            --v1760;
          }
          while ( v1760 );
          v1763 = __ROL8__(v1757 ^ (v130 - (_QWORD)v1739), 17) ^ v1757 ^ (v130 - (_QWORD)v1739);
          v2844 = (v1763 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v1756 = ((unsigned __int8)v1763 ^ (unsigned __int8)(v2844 ^ v1756)) & 0x3F;
          if ( !v1756 )
            LOBYTE(v1756) = 1;
        }
        *((_QWORD *)&v132 + 1) = v1741 & 0x7F;
        if ( DWORD2(v132) >= 8 )
        {
          v1764 = (unsigned __int64)(v1741 & 0x7F) >> 3;
          do
          {
            v100 = __ROL8__(*(_QWORD *)v130 ^ v100, v1756);
            v130 += 8LL;
            *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 8);
            --v1764;
          }
          while ( v1764 );
        }
        for ( ; DWORD2(v132); *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 1) )
        {
          *(_QWORD *)&v132 = *(unsigned __int8 *)v130++;
          v100 = __ROL8__(v132 ^ v100, v1756);
        }
        for ( i54 = v100; ; v100 = (unsigned int)i54 ^ (unsigned int)v100 )
        {
          i54 >>= 31;
          if ( !i54 )
            break;
        }
        v1738 = (const char **)v2623;
        LODWORD(v100) = v100 & 0x7FFFFFFF;
        *(_DWORD *)(v1751 + 20) = v100;
        *(_DWORD *)(v1743 + 2088) += v1741;
        v1601 = (_BYTE *)v1743;
        *(_DWORD *)(v1743 + 2392) = 2;
      }
      if ( *((int *)v1601 + 598) < 3 )
      {
        v1766 = *((unsigned int *)v1601 + 505);
        v1767 = 32;
        v1768 = *((_DWORD *)v1601 + 526);
        if ( v1768 != 7 )
          v1767 = 0;
        v1769 = v1766 + 48;
        if ( (unsigned int)(v1766 + 48) <= *((_DWORD *)v1601 + 647) )
        {
          v1770 = (__int64)v1601;
          *((_DWORD *)v1601 + 505) = v1769;
        }
        else
        {
          v1770 = pg_unknown7(v1601, v1769, *((_DWORD *)v1601 + 585));
          if ( !v1770 )
            goto LABEL_3039;
          v1771 = *((_DWORD *)v1601 + 612);
          if ( (v1771 & 4) == 0 )
          {
            v1772 = *((_DWORD *)v1601 + 505);
            v1773 = *((_QWORD *)v1601 + 249);
            v1774 = (v1771 & 0x20000000) != 0 ? *((_DWORD *)v1601 + 585) : 0;
            if ( v1772 >= 8 )
            {
              v1775 = (unsigned __int64)v1772 >> 3;
              do
              {
                *(_QWORD *)v1601 = 0LL;
                v1772 -= 8;
                v1601 += 8;
                --v1775;
              }
              while ( v1775 );
            }
            for ( ; v1772; --v1772 )
              *v1601++ = 0;
            v1776 = *(_DWORD *)(v1770 + 2340);
            *(_DWORD *)(v1770 + 2340) = v1774;
            if ( v1774 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v1770 + 872))(v1773);
            }
            else
            {
              v1777 = 0;
              if ( (*(_DWORD *)(v1770 + 2448) & 0x10000000) == 0 )
                v1777 = v1774;
              if ( v1777 )
                (*(void (__fastcall **)(__int64, _QWORD))(v1770 + 552))(v1773 - 8, *(_QWORD *)(v1773 - 8));
              else
                (*(void (__fastcall **)(__int64))(v1770 + 256))(v1773);
            }
            *(_DWORD *)(v1770 + 2340) = v1776;
          }
          *(_DWORD *)(v1770 + 2448) &= ~4u;
        }
        v1778 = v1770 + v1766;
        ++*(_DWORD *)(v1770 + 2060);
        v1779 = (_QWORD *)(v1770 + v1766);
        v2845 = v1770 + v1766;
        v1780 = 48;
        v1781 = 6LL;
        do
        {
          *v1779 = 0LL;
          v1780 -= 8;
          ++v1779;
          --v1781;
        }
        while ( v1781 );
        for ( ; v1780; --v1780 )
        {
          *(_BYTE *)v1779 = 0;
          v1779 = (_QWORD *)((char *)v1779 + 1);
        }
        *(_DWORD *)v1778 = v1767;
        *(_QWORD *)(v1778 + 8) = v1738;
        if ( v1768 == 7 )
          pg_unknown12(v1770, v1738, 32LL, v1778 + 24);
        v1782 = v2629;
        v100 = (unsigned __int64)v1738;
        *(_DWORD *)(v1778 + 16) = 32;
        v1783 = (unsigned __int64)(v1782 + 64);
        *(_DWORD *)(v1770 + 2088) += 32;
        *(_QWORD *)&v132 = v1738;
        v1784 = *(_DWORD *)(v1770 + 2068);
        *((_QWORD *)&v132 + 1) = *(_QWORD *)(v1770 + 2072);
        if ( (unsigned __int64)v1738 < v1783 )
        {
          do
          {
            _mm_prefetch((const char *)v132, 0);
            *(_QWORD *)&v132 = v132 + 64;
          }
          while ( (unsigned __int64)v132 < v1783 );
        }
        v1785 = 4LL;
        LODWORD(v130) = 32;
        do
        {
          *((_QWORD *)&v132 + 1) = __ROL8__(*(_QWORD *)v100 ^ *((_QWORD *)&v132 + 1), v1784);
          v100 += 8LL;
          v130 = (unsigned int)(v130 - 8);
          --v1785;
        }
        while ( v1785 );
        for ( ; (_DWORD)v130; v130 = (unsigned int)(v130 - 1) )
        {
          *(_QWORD *)&v132 = *(unsigned __int8 *)v100++;
          *((_QWORD *)&v132 + 1) = __ROL8__(v132 ^ *((_QWORD *)&v132 + 1), v1784);
        }
        *(_QWORD *)&v132 = *((_QWORD *)&v132 + 1) >> 31;
        while ( (_QWORD)v132 )
        {
          *((_QWORD *)&v132 + 1) = (unsigned int)v132 ^ DWORD2(v132);
          *(_QWORD *)&v132 = (unsigned __int64)v132 >> 31;
        }
        DWORD2(v132) &= ~0x80000000;
        *(_DWORD *)(v1778 + 20) = DWORD2(v132);
        v1601 = (_BYTE *)v1770;
        *(_DWORD *)(v1770 + 2088) += 32;
        *(_DWORD *)(v1770 + 2392) = 3;
      }
      v1786 = v2631;
      if ( *((int *)v1601 + 598) < 4 )
      {
        v1787 = *((unsigned int *)v1601 + 505);
        v1788 = *(const char **)v2631;
        v1789 = 4 * *(_DWORD *)(v3000 + 48);
        v1790 = v1787 + 48;
        if ( (unsigned int)(v1787 + 48) <= *((_DWORD *)v1601 + 647) )
        {
          v1791 = (__int64)v1601;
          *((_DWORD *)v1601 + 505) = v1790;
        }
        else
        {
          v1791 = pg_unknown7(v1601, v1790, *((_DWORD *)v1601 + 585));
          if ( !v1791 )
            goto LABEL_3039;
          v1792 = *((_DWORD *)v1601 + 612);
          if ( (v1792 & 4) == 0 )
          {
            v1793 = *((_DWORD *)v1601 + 505);
            v1794 = *((_QWORD *)v1601 + 249);
            v1795 = (v1792 & 0x20000000) != 0 ? *((_DWORD *)v1601 + 585) : 0;
            if ( v1793 >= 8 )
            {
              v1796 = (unsigned __int64)v1793 >> 3;
              do
              {
                *(_QWORD *)v1601 = 0LL;
                v1793 -= 8;
                v1601 += 8;
                --v1796;
              }
              while ( v1796 );
            }
            for ( ; v1793; --v1793 )
              *v1601++ = 0;
            v1797 = *(_DWORD *)(v1791 + 2340);
            *(_DWORD *)(v1791 + 2340) = v1795;
            if ( v1795 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v1791 + 872))(v1794);
            }
            else
            {
              v1798 = 0;
              if ( (*(_DWORD *)(v1791 + 2448) & 0x10000000) == 0 )
                v1798 = v1795;
              if ( v1798 )
                (*(void (__fastcall **)(__int64, _QWORD))(v1791 + 552))(v1794 - 8, *(_QWORD *)(v1794 - 8));
              else
                (*(void (__fastcall **)(__int64))(v1791 + 256))(v1794);
            }
            *(_DWORD *)(v1791 + 2340) = v1797;
          }
          *(_DWORD *)(v1791 + 2448) &= ~4u;
        }
        v1799 = v1791 + v1787;
        ++*(_DWORD *)(v1791 + 2060);
        v1800 = (_QWORD *)(v1791 + v1787);
        v2846 = v1791 + v1787;
        v1801 = 48;
        v1802 = 6LL;
        do
        {
          *v1800 = 0LL;
          v1801 -= 8;
          ++v1800;
          --v1802;
        }
        while ( v1802 );
        for ( ; v1801; --v1801 )
        {
          *(_BYTE *)v1800 = 0;
          v1800 = (_QWORD *)((char *)v1800 + 1);
        }
        *(_DWORD *)v1799 = 11;
        v130 = (unsigned __int64)v1788;
        *(_QWORD *)(v1799 + 8) = v1788;
        v1803 = v1788;
        *(_DWORD *)(v1799 + 16) = v1789;
        *(_DWORD *)(v1791 + 2088) += v1789;
        v1804 = *(_DWORD *)(v1791 + 2068);
        v1805 = *(_QWORD *)(v1791 + 2072);
        v1806 = (unsigned __int64)&v1788[v1789];
        if ( (unsigned __int64)v1788 < v1806 )
        {
          do
          {
            _mm_prefetch(v1803, 0);
            v1803 += 64;
          }
          while ( (unsigned __int64)v1803 < v1806 );
        }
        v100 = *(_QWORD *)(v1791 + 2072);
        v1807 = v1789 >> 7;
        if ( v1789 >> 7 )
        {
          do
          {
            v1808 = 8LL;
            do
            {
              v1809 = v100 ^ *(_QWORD *)v130;
              v1810 = *(_QWORD *)(v130 + 8);
              v130 += 16LL;
              v100 = __ROL8__(__ROL8__(v1809, v1804) ^ v1810, v1804);
              --v1808;
            }
            while ( v1808 );
            v1811 = __ROL8__(v1805 ^ (v130 - (_QWORD)v1788), 17) ^ v1805 ^ (v130 - (_QWORD)v1788);
            v2847 = (v1811 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1804 = ((unsigned __int8)(v1811 ^ v2847) ^ (unsigned __int8)v1804) & 0x3F;
            if ( !v1804 )
              LOBYTE(v1804) = 1;
            --v1807;
          }
          while ( v1807 );
          v1786 = v2631;
        }
        *((_QWORD *)&v132 + 1) = v1789 & 0x7F;
        if ( DWORD2(v132) >= 8 )
        {
          v1812 = (unsigned __int64)(v1789 & 0x7F) >> 3;
          do
          {
            v100 = __ROL8__(*(_QWORD *)v130 ^ v100, v1804);
            v130 += 8LL;
            *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 8);
            --v1812;
          }
          while ( v1812 );
        }
        for ( ; DWORD2(v132); *((_QWORD *)&v132 + 1) = (unsigned int)(DWORD2(v132) - 1) )
        {
          *(_QWORD *)&v132 = *(unsigned __int8 *)v130++;
          v100 = __ROL8__(v132 ^ v100, v1804);
        }
        for ( i55 = v100; ; v100 = (unsigned int)i55 ^ (unsigned int)v100 )
        {
          i55 >>= 31;
          if ( !i55 )
            break;
        }
        LODWORD(v100) = v100 & 0x7FFFFFFF;
        *(_DWORD *)(v1799 + 20) = v100;
        v1601 = (_BYTE *)v1791;
        *(_DWORD *)(v1791 + 2088) += v1789;
        *(_DWORD *)(v1791 + 2392) = 4;
      }
      if ( *((int *)v1601 + 598) >= 5 )
      {
        j = 0LL;
        goto LABEL_2916;
      }
      v1814 = *((unsigned int *)v1601 + 505);
      v1815 = 32;
      v1816 = *((_DWORD *)v1601 + 526);
      if ( v1816 != 7 )
        v1815 = 0;
      v1817 = v1814 + 48;
      if ( (unsigned int)(v1814 + 48) <= *((_DWORD *)v1601 + 647) )
      {
        v1818 = (__int64)v1601;
        *((_DWORD *)v1601 + 505) = v1817;
LABEL_2898:
        v1826 = v1818 + v1814;
        ++*(_DWORD *)(v1818 + 2060);
        v1827 = (_QWORD *)(v1818 + v1814);
        v2848 = v1818 + v1814;
        v1828 = 48;
        v1829 = 6LL;
        do
        {
          *v1827 = 0LL;
          v1828 -= 8;
          ++v1827;
          --v1829;
        }
        while ( v1829 );
        for ( ; v1828; --v1828 )
        {
          *(_BYTE *)v1827 = 0;
          v1827 = (_QWORD *)((char *)v1827 + 1);
        }
        *(_DWORD *)v1826 = v1815;
        *(_QWORD *)(v1826 + 8) = v1786;
        if ( v1816 == 7 )
          pg_unknown12(v1818, v1786, 32LL, v1826 + 24);
        v100 = v1786;
        *(_DWORD *)(v1826 + 16) = 32;
        *(_DWORD *)(v1818 + 2088) += 32;
        *(_QWORD *)&v132 = v1786;
        v1830 = *(_DWORD *)(v1818 + 2068);
        *((_QWORD *)&v132 + 1) = *(_QWORD *)(v1818 + 2072);
        if ( v1786 < v3000 + 64 )
        {
          do
          {
            _mm_prefetch((const char *)v132, 0);
            *(_QWORD *)&v132 = v132 + 64;
          }
          while ( (unsigned __int64)v132 < v3000 + 64 );
        }
        v1831 = 4LL;
        LODWORD(v130) = 32;
        do
        {
          *((_QWORD *)&v132 + 1) = __ROL8__(*(_QWORD *)v100 ^ *((_QWORD *)&v132 + 1), v1830);
          v100 += 8LL;
          v130 = (unsigned int)(v130 - 8);
          --v1831;
        }
        while ( v1831 );
        j = 0LL;
        if ( (_DWORD)v130 )
        {
          do
          {
            *(_QWORD *)&v132 = *(unsigned __int8 *)v100++;
            *((_QWORD *)&v132 + 1) = __ROL8__(v132 ^ *((_QWORD *)&v132 + 1), v1830);
            v130 = (unsigned int)(v130 - 1);
          }
          while ( (_DWORD)v130 );
          j = 0LL;
        }
        *(_QWORD *)&v132 = *((_QWORD *)&v132 + 1);
        while ( 1 )
        {
          *(_QWORD *)&v132 = (unsigned __int64)v132 >> 31;
          if ( !(_QWORD)v132 )
            break;
          *((_QWORD *)&v132 + 1) = (unsigned int)v132 ^ DWORD2(v132);
        }
        DWORD2(v132) &= ~0x80000000;
        *(_DWORD *)(v1826 + 20) = DWORD2(v132);
        v1601 = (_BYTE *)v1818;
        *(_DWORD *)(v1818 + 2088) += 32;
        *(_DWORD *)(v1818 + 2392) = 5;
LABEL_2916:
        v1832 = *((_DWORD *)v1601 + 598);
        v1833 = v1601;
        v1834 = v1601;
        if ( v1832 >= 6 )
        {
LABEL_2977:
          if ( v1832 >= 7 )
          {
LABEL_3035:
            v1893 = 0;
            goto LABEL_3036;
          }
          v207 = (*((_DWORD *)v1834 + 612) & 0x40000000) == 0;
          v1865 = 0;
          *((_QWORD *)&v132 + 1) = v2631;
          v1866 = *(const char **)v2631;
          v2629 = *(const char **)v2631;
          if ( !v207 )
            goto LABEL_3032;
          v1867 = 0;
          if ( !*(_DWORD *)(v3000 + 48) )
            goto LABEL_3032;
          do
          {
            if ( !(*((__int64 (__fastcall **)(const char *, char *, _QWORD))v1834 + 76))(
                    &v1866[(__int64)*(int *)&v1866[4 * v1867] >> 4],
                    v2748,
                    0LL) )
              ++v1865;
            ++v1867;
          }
          while ( v1867 < *(_DWORD *)(v3000 + 48) );
          if ( !v1865 )
            goto LABEL_3032;
          v1868 = *((unsigned int *)v1834 + 505);
          v1869 = v1868 + 16 * v1865 + 48;
          if ( v1869 <= *((_DWORD *)v1834 + 647) )
          {
            v1601 = v1834;
            *((_DWORD *)v1834 + 505) = v1869;
          }
          else
          {
            *(_QWORD *)&v132 = pg_unknown7(v1834, v1869, *((_DWORD *)v1834 + 585));
            v130 = 0LL;
            v1601 = (_BYTE *)v132;
            if ( !(_QWORD)v132 )
            {
              v1877 = -1073741267;
              j = 0LL;
              goto LABEL_3033;
            }
            v1870 = *((_DWORD *)v1834 + 612);
            if ( (v1870 & 4) == 0 )
            {
              v1871 = *((_DWORD *)v1834 + 505);
              v1872 = *((_QWORD *)v1834 + 249);
              v1873 = (v1870 & 0x20000000) != 0 ? *((_DWORD *)v1834 + 585) : 0;
              if ( v1871 >= 8 )
              {
                v1874 = (unsigned __int64)v1871 >> 3;
                do
                {
                  *(_QWORD *)v1834 = 0LL;
                  v1871 -= 8;
                  v1834 += 8;
                  --v1874;
                }
                while ( v1874 );
              }
              for ( ; v1871; --v1871 )
                *v1834++ = 0;
              v1875 = *((_DWORD *)v1601 + 585);
              *((_DWORD *)v1601 + 585) = v1873;
              if ( v1873 == 3 )
              {
                (*((void (__fastcall **)(__int64))v1601 + 109))(v1872);
              }
              else
              {
                v1876 = 0;
                if ( (*((_DWORD *)v1601 + 612) & 0x10000000) == 0 )
                  v1876 = v1873;
                if ( v1876 )
                  (*((void (__fastcall **)(__int64, _QWORD))v1601 + 69))(v1872 - 8, *(_QWORD *)(v1872 - 8));
                else
                  (*((void (__fastcall **)(__int64))v1601 + 32))(v1872);
              }
              *((_DWORD *)v1601 + 585) = v1875;
              v1866 = v2629;
            }
            *((_DWORD *)v1601 + 612) &= ~4u;
          }
          ++*((_DWORD *)v1601 + 515);
          v1878 = &v1601[v1868];
          v2747 = (int *)&v1601[v1868];
          v1879 = &v1601[v1868];
          v130 = 0LL;
          v1880 = 48;
          v100 = 6LL;
          do
          {
            *v1879 = 0LL;
            v1880 -= 8;
            ++v1879;
            --v100;
          }
          while ( v100 );
          if ( v1880 )
          {
            v100 = 0xFFFFFFFFLL;
            do
            {
              *(_BYTE *)v1879 = 0;
              v1879 = (_QWORD *)((char *)v1879 + 1);
              --v1880;
            }
            while ( v1880 );
          }
          *(_DWORD *)v1878 = 10;
          *((_QWORD *)v1878 + 1) = 0LL;
          *((_DWORD *)v1878 + 4) = 0;
          *((_QWORD *)&v132 + 1) = *((_QWORD *)v1601 + 259);
          *(_QWORD *)&v132 = *((_QWORD *)&v132 + 1);
          while ( 1 )
          {
            *(_QWORD *)&v132 = (unsigned __int64)v132 >> 31;
            if ( !(_QWORD)v132 )
              break;
            *((_QWORD *)&v132 + 1) = (unsigned int)v132 ^ DWORD2(v132);
          }
          DWORD2(v132) &= ~0x80000000;
          v1834 = v1601;
          *((_DWORD *)v1878 + 5) = DWORD2(v132);
          v1881 = 0;
          v2693 = v2747;
          v2747[6] = 1;
          v2693[7] = v1865;
          v1882 = v2693;
          v1883 = v2693 + 12;
          if ( *(_DWORD *)(v3000 + 48) )
          {
            while ( 1 )
            {
              v1884 = (__int64 (__fastcall *)(const char *, char *, _QWORD, unsigned __int64))*((_QWORD *)v1601 + 76);
              v1885 = &v2629[(__int64)*(int *)&v1866[4 * v1881] >> 4];
              v2623 = (__int64)v1885;
              if ( !v1884(v1885, v2748, 0LL, v130) )
              {
                v100 = (unsigned __int64)v1885;
                *((_DWORD *)v1601 + 522) += 4;
                v1886 = v1885;
                for ( i56 = *((_QWORD *)v1601 + 259); v1886 < v1885 + 4; v1886 += 64 )
                  _mm_prefetch(v1886, 0);
                LODWORD(v130) = 4;
                do
                {
                  v1888 = *(unsigned __int8 *)v100++;
                  i56 = __ROL8__(v1888 ^ i56, *((_DWORD *)v1601 + 517));
                  v130 = (unsigned int)(v130 - 1);
                }
                while ( (_DWORD)v130 );
                v1889 = v2623;
                for ( i57 = i56; ; LODWORD(i56) = i57 ^ i56 )
                {
                  i57 >>= 31;
                  if ( !i57 )
                    break;
                }
                *((_QWORD *)&v132 + 1) = *v1883 ^ (unsigned int)i56;
                DWORD2(v132) &= ~0x80000000;
                *v1883 ^= DWORD2(v132);
                v1883[1] = 4;
                *((_QWORD *)v1883 + 1) = v1889;
                v1883 += 4;
                if ( !--v1865 )
                  break;
              }
              v1866 = v2629;
              if ( (unsigned int)++v1881 >= *(_DWORD *)(v3000 + 48) )
              {
                v1882 = v2693;
                goto LABEL_3023;
              }
            }
            j = 0LL;
LABEL_3032:
            v1877 = 0;
LABEL_3033:
            v1601 = v1834;
            if ( v1877 >= 0 )
            {
              *((_DWORD *)v1834 + 598) = 7;
              goto LABEL_3035;
            }
LABEL_3040:
            v1893 = -1073741267;
LABEL_3036:
            v99 = (unsigned __int64)v1601;
            if ( v1893 < 0 )
              goto LABEL_2754;
            goto LABEL_3037;
          }
LABEL_3023:
          j = 0LL;
          if ( *((_DWORD *)v1601 + 574) )
            goto LABEL_3040;
          *((_QWORD *)v1601 + 288) = v1601 - 0x5C5FC0A76E374B18LL;
          if ( v1882 )
            v1891 = (char *)v1882 - 0x4C48B4211BBACBEBLL;
          else
            v1891 = 0LL;
          *((_QWORD *)v1601 + 289) = v1891;
          if ( v1882 )
            v1892 = *v1882;
          else
            v1892 = 0LL;
          *((_QWORD *)v1601 + 290) = v1892;
          *((_QWORD *)v1601 + 291) = 0LL;
          *((_DWORD *)v1601 + 574) = 1;
LABEL_2972:
          __b8(v1601, 0LL);
          goto LABEL_3040;
        }
        v207 = (*((_DWORD *)v1601 + 612) & 0x40000000) == 0;
        v1835 = 0;
        v1836 = v2629;
        v2645 = (int *)*((_QWORD *)v2629 + 4);
        if ( v207 )
        {
          v1837 = 0;
          if ( *((_DWORD *)v2629 + 12) )
          {
            v1838 = v2645;
            do
            {
              *(_QWORD *)&v132 = (*((__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))v1833 + 76))(
                                   (__int64)v1838 + ((__int64)v1838[v1837] >> 4),
                                   v2753,
                                   0LL);
              v130 = 1LL;
              if ( !(_QWORD)v132 )
                ++v1835;
              ++v1837;
            }
            while ( v1837 < *((_DWORD *)v1836 + 12) );
            j = 0LL;
            if ( !v1835 )
              goto LABEL_2974;
            v1839 = *((unsigned int *)v1833 + 505);
            v1840 = v1839 + 16 * v1835 + 48;
            if ( v1840 <= *((_DWORD *)v1833 + 647) )
            {
              v1601 = v1833;
              *((_DWORD *)v1833 + 505) = v1840;
            }
            else
            {
              v1601 = (_BYTE *)pg_unknown7(v1833, v1840, *((_DWORD *)v1833 + 585));
              if ( !v1601 )
              {
                v1848 = -1073741267;
                v1834 = v1833;
LABEL_2975:
                v1601 = v1834;
                if ( v1848 < 0 )
                  goto LABEL_3040;
                *((_DWORD *)v1834 + 598) = 6;
                v1832 = 6;
                goto LABEL_2977;
              }
              v1841 = *((_DWORD *)v1833 + 612);
              if ( (v1841 & 4) == 0 )
              {
                v1842 = *((_DWORD *)v1833 + 505);
                v1843 = *((_QWORD *)v1833 + 249);
                v1844 = (v1841 & 0x20000000) != 0 ? *((_DWORD *)v1833 + 585) : 0;
                if ( v1842 >= 8 )
                {
                  v1845 = (unsigned __int64)v1842 >> 3;
                  do
                  {
                    *(_QWORD *)v1833 = 0LL;
                    v1842 -= 8;
                    v1833 += 8;
                    --v1845;
                  }
                  while ( v1845 );
                }
                for ( ; v1842; --v1842 )
                  *v1833++ = 0;
                v1846 = *((_DWORD *)v1601 + 585);
                *((_DWORD *)v1601 + 585) = v1844;
                if ( v1844 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v1601 + 109))(v1843);
                }
                else
                {
                  v1847 = 0;
                  if ( (*((_DWORD *)v1601 + 612) & 0x10000000) == 0 )
                    v1847 = v1844;
                  if ( v1847 )
                    (*((void (__fastcall **)(__int64, _QWORD))v1601 + 69))(v1843 - 8, *(_QWORD *)(v1843 - 8));
                  else
                    (*((void (__fastcall **)(__int64))v1601 + 32))(v1843);
                }
                *((_DWORD *)v1601 + 585) = v1846;
              }
              *((_DWORD *)v1601 + 612) &= ~4u;
            }
            ++*((_DWORD *)v1601 + 515);
            v1849 = &v1601[v1839];
            v2764 = (int *)&v1601[v1839];
            v1850 = &v1601[v1839];
            v1851 = 48;
            v100 = 6LL;
            do
            {
              *v1850 = 0LL;
              v1851 -= 8;
              ++v1850;
              --v100;
            }
            while ( v100 );
            if ( v1851 )
            {
              v100 = 0xFFFFFFFFLL;
              do
              {
                *(_BYTE *)v1850 = 0;
                v1850 = (_QWORD *)((char *)v1850 + 1);
                --v1851;
              }
              while ( v1851 );
            }
            *(_DWORD *)v1849 = 10;
            *((_QWORD *)v1849 + 1) = 0LL;
            *((_DWORD *)v1849 + 4) = 0;
            *((_QWORD *)&v132 + 1) = *((_QWORD *)v1601 + 259);
            *(_QWORD *)&v132 = *((_QWORD *)&v132 + 1);
            while ( 1 )
            {
              *(_QWORD *)&v132 = (unsigned __int64)v132 >> 31;
              if ( !(_QWORD)v132 )
                break;
              *((_QWORD *)&v132 + 1) = (unsigned int)v132 ^ DWORD2(v132);
            }
            DWORD2(v132) &= ~0x80000000;
            v1834 = v1601;
            *((_DWORD *)v1849 + 5) = DWORD2(v132);
            v2707 = v2764;
            v2764[6] = 1;
            v1852 = v2629;
            v2707[7] = v1835;
            v1853 = 0;
            v1854 = v2707;
            v1855 = v2707 + 12;
            if ( !*((_DWORD *)v1852 + 12) )
            {
              v130 = 1LL;
LABEL_2964:
              j = 0LL;
              if ( *((_DWORD *)v1601 + 574) )
                goto LABEL_3040;
              *((_QWORD *)v1601 + 288) = v1601 - 0x5C5FC0A76E374B18LL;
              if ( v1854 )
                v1863 = (char *)v1854 - 0x4C48B4211BBACBEBLL;
              else
                v1863 = 0LL;
              *((_QWORD *)v1601 + 289) = v1863;
              if ( v1854 )
                v1864 = *v1854;
              else
                v1864 = 0LL;
              *((_QWORD *)v1601 + 290) = v1864;
              *((_QWORD *)v1601 + 291) = 0LL;
              *((_DWORD *)v1601 + 574) = 1;
              goto LABEL_2972;
            }
            while ( 1 )
            {
              v1856 = (__int64 (__fastcall *)(__int64, _BYTE *, _QWORD))*((_QWORD *)v1601 + 76);
              v2623 = (__int64)v2645 + ((__int64)v2645[v1853] >> 4);
              v1857 = (const char *)v2623;
              if ( !v1856(v2623, v2753, 0LL) )
              {
                v100 = (unsigned __int64)v1857;
                *((_DWORD *)v1601 + 522) += 4;
                v1858 = v1857;
                for ( i58 = *((_QWORD *)v1601 + 259); v1858 < v1857 + 4; v1858 += 64 )
                  _mm_prefetch(v1858, 0);
                LODWORD(v130) = 4;
                do
                {
                  v1860 = *(unsigned __int8 *)v100++;
                  i58 = __ROL8__(v1860 ^ i58, *((_DWORD *)v1601 + 517));
                  v130 = (unsigned int)(v130 - 1);
                }
                while ( (_DWORD)v130 );
                v1861 = v2623;
                for ( i59 = i58; ; LODWORD(i58) = i59 ^ i58 )
                {
                  i59 >>= 31;
                  if ( !i59 )
                    break;
                }
                *((_QWORD *)&v132 + 1) = *v1855 ^ (unsigned int)i58;
                DWORD2(v132) &= ~0x80000000;
                *v1855 ^= DWORD2(v132);
                v1855[1] = 4;
                *((_QWORD *)v1855 + 1) = v1861;
                v1855 += 4;
                if ( !--v1835 )
                  break;
              }
              v130 = 1LL;
              if ( (unsigned int)++v1853 >= *((_DWORD *)v2629 + 12) )
              {
                v1854 = v2707;
                goto LABEL_2964;
              }
            }
          }
        }
        j = 0LL;
LABEL_2974:
        v1848 = 0;
        goto LABEL_2975;
      }
      v1818 = pg_unknown7(v1601, v1817, *((_DWORD *)v1601 + 585));
      if ( v1818 )
      {
        v1819 = *((_DWORD *)v1601 + 612);
        if ( (v1819 & 4) == 0 )
        {
          v1820 = *((_DWORD *)v1601 + 505);
          v1821 = *((_QWORD *)v1601 + 249);
          v1822 = (v1819 & 0x20000000) != 0 ? *((_DWORD *)v1601 + 585) : 0;
          if ( v1820 >= 8 )
          {
            v1823 = (unsigned __int64)v1820 >> 3;
            do
            {
              *(_QWORD *)v1601 = 0LL;
              v1820 -= 8;
              v1601 += 8;
              --v1823;
            }
            while ( v1823 );
          }
          for ( ; v1820; --v1820 )
            *v1601++ = 0;
          v1824 = *(_DWORD *)(v1818 + 2340);
          *(_DWORD *)(v1818 + 2340) = v1822;
          if ( v1822 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v1818 + 872))(v1821);
          }
          else
          {
            v1825 = 0;
            if ( (*(_DWORD *)(v1818 + 2448) & 0x10000000) == 0 )
              v1825 = v1822;
            if ( v1825 )
              (*(void (__fastcall **)(__int64, _QWORD))(v1818 + 552))(v1821 - 8, *(_QWORD *)(v1821 - 8));
            else
              (*(void (__fastcall **)(__int64))(v1818 + 256))(v1821);
          }
          *(_DWORD *)(v1818 + 2340) = v1824;
        }
        *(_DWORD *)(v1818 + 2448) &= ~4u;
        goto LABEL_2898;
      }
LABEL_3039:
      j = 0LL;
      goto LABEL_3040;
    }
    j = 0LL;
  }
LABEL_3646:
  v2621 = (char *)v99;
LABEL_3647:
  if ( (*(_DWORD *)(v99 + 2448) & 0x2000000) != 0 )
  {
    v2239 = *(_QWORD *)(v99 + 2456);
    if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, unsigned __int64, unsigned __int64))(v99 + 912))(
           v2239,
           *((_QWORD *)&v132 + 1),
           v100,
           v130)
      && *(_DWORD *)(v99 + 2296) == (_DWORD)j )
    {
      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v99 + 2312) = j;
      *(_QWORD *)(v99 + 2320) = 272LL;
      *(_QWORD *)(v99 + 2328) = j;
      *(_DWORD *)(v99 + 2296) = 1;
      __b8(v99, 0LL);
    }
    (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(), unsigned __int64, _QWORD))(v99 + 904))(
      v2239,
      pg_unknown15,
      v99,
      0LL);
  }
  __b8(v99, 1LL);
  if ( (*(_DWORD *)(v99 + 2452) & 0x100) != 0 )
    retaddr = v2646;
  v2241 = *(unsigned int *)(v99 + 2448);
  if ( (*(_DWORD *)(v99 + 2448) & 0x40000) != 0 )
  {
    v2242 = __rdtsc();
    v2240 = (__ROR8__(v2242, 3) ^ v2242) * (unsigned __int128)0x7010008004002001uLL;
    v2859 = *((_QWORD *)&v2240 + 1);
    v2243 = v2240 ^ *((_QWORD *)&v2240 + 1);
    *((_QWORD *)&v2240 + 1) = ((unsigned __int64)v2240 ^ *((_QWORD *)&v2240 + 1)) / 0xA;
    if ( (unsigned __int64)(v2243 - 10LL * *((_QWORD *)&v2240 + 1)) < 2 && *(_DWORD *)(v99 + 2296) == (_DWORD)j )
    {
      *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v99 + 2312) = j;
      *(_QWORD *)(v99 + 2320) = 264LL;
      *(_QWORD *)(v99 + 2328) = j;
      *(_DWORD *)(v99 + 2296) = 1;
      __b8(v99, 0LL);
      v2241 = *(unsigned int *)(v99 + 2448);
    }
  }
  if ( (v2241 & 0x40000000) == 0
    && ((v2241 & 0x8000) != 0 || *(_DWORD *)(v99 + 2296) == (_DWORD)j)
    && (*(_DWORD *)(a1 + 2448) & 0x8000) == 0 )
  {
    v2244 = (_QWORD *)(a1 + 2296);
    if ( *(_DWORD *)(a1 + 2296) != (_DWORD)j )
    {
      LODWORD(v2241) = 40;
      *((_QWORD *)&v2240 + 1) = v99 + 2296;
      v2245 = 5LL;
      do
      {
        v2241 = (unsigned int)(v2241 - 8);
        *v2244 = **((_QWORD **)&v2240 + 1);
        *((_QWORD *)&v2240 + 1) += 8LL;
        ++v2244;
        --v2245;
      }
      while ( v2245 );
      if ( (_DWORD)v2241 )
      {
        do
        {
          LOBYTE(v2240) = **((_BYTE **)&v2240 + 1);
          ++*((_QWORD *)&v2240 + 1);
          *(_BYTE *)v2244 = v2240;
          v2244 = (_QWORD *)((char *)v2244 + 1);
          v2241 = (unsigned int)(v2241 - 1);
        }
        while ( (_DWORD)v2241 );
        LODWORD(j) = 0;
      }
    }
  }
  if ( (*(_DWORD *)(v99 + 2448) & 0x8000) == 0 && *(_DWORD *)(v99 + 2296) != (_DWORD)j
    || (v2246 = *(unsigned int *)(v99 + 2600), !(_DWORD)v2246) )
  {
    LODWORD(v2288) = 0;
    goto LABEL_3717;
  }
  v2247 = (int *)(v99 + v2246);
  v2248 = *(const char **)(v99 + v2246 + 8);
  v2633 = v99 + v2246;
  if ( v2248 )
  {
    v2249 = (unsigned int)v2247[4];
    v2250 = (__int64)v2248;
    *(_DWORD *)(v99 + 2088) += v2249;
    v2251 = v2248;
    v2252 = *(_DWORD *)(v99 + 2068);
    for ( i60 = *(_QWORD *)(v99 + 2072); v2251 < &v2248[v2249]; v2251 += 64 )
      _mm_prefetch(v2251, 0);
    v2254 = *(_QWORD *)(v99 + 2072);
    v2255 = (unsigned int)v2249 >> 7;
    if ( (unsigned int)v2249 >> 7 )
    {
      do
      {
        v2256 = 8LL;
        do
        {
          v2257 = *(_QWORD *)(v2250 + 8) ^ __ROL8__(*(_QWORD *)v2250 ^ v2254, v2252);
          v2250 += 16LL;
          v2254 = __ROL8__(v2257, v2252);
          --v2256;
        }
        while ( v2256 );
        v2258 = (__ROL8__(i60 ^ (v2250 - (_QWORD)v2248), 17) ^ i60 ^ (unsigned __int64)(v2250 - (_QWORD)v2248))
              * (unsigned __int128)0x7010008004002001uLL;
        v2860 = *((_QWORD *)&v2258 + 1);
        v2259 = v2258 ^ BYTE8(v2258) ^ v2252;
        v2260 = 0xFFFFFFFFLL;
        v2252 = v2259 & 0x3F;
        if ( !v2252 )
          LOBYTE(v2252) = 1;
        --v2255;
      }
      while ( v2255 );
    }
    else
    {
      v2260 = 0xFFFFFFFFLL;
    }
    v2261 = v2249 & 0x7F;
    if ( v2261 >= 8 )
    {
      v2262 = (unsigned __int64)v2261 >> 3;
      do
      {
        v2254 = __ROL8__(*(_QWORD *)v2250 ^ v2254, v2252);
        v2250 += 8LL;
        v2261 -= 8;
        --v2262;
      }
      while ( v2262 );
    }
    for ( ; v2261; --v2261 )
    {
      v2263 = *(unsigned __int8 *)v2250++;
      v2254 = __ROL8__(v2263 ^ v2254, v2252);
    }
    for ( i61 = v2254; ; LODWORD(v2254) = i61 ^ v2254 )
    {
      i61 >>= 31;
      if ( !i61 )
        break;
    }
    v2265 = v2254 & 0x7FFFFFFF;
    v2266 = 0;
    if ( v2265 != v2247[5] )
    {
      if ( !*v2247 )
        v2266 = v2247[6] != 0;
      v2267 = (unsigned int)v2247[4];
      v2268 = *((_QWORD *)v2247 + 1);
      if ( v2247[4] && (v2250 = 64LL, (*(_DWORD *)(v99 + 2452) & 0x40) != 0) )
      {
        v2269 = KeGetCurrentIrql();
        v3007 = v2269;
        __writecr8(2uLL);
        v2270 = v2268 & 0xFFFFFFFFFFFFF000uLL;
        v2623 = (v2268 + v2267 - 1) | 0xFFF;
        v2646 = (v2268 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 2 )
        {
          v2271 = v2269;
          while ( 1 )
          {
            v2272 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v99 + 1128))(v2270, 0LL);
            if ( v2272 != -1073741267 )
              break;
            if ( v2266 )
              goto LABEL_3705;
            v2269 = v3007;
            if ( v3007 > 1u )
              goto LABEL_3703;
            v2271 = v3007;
            __writecr8(v3007);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v2272 < 0 )
          {
LABEL_3705:
            __writecr8(v2271);
            goto LABEL_3706;
          }
          v2269 = v3007;
LABEL_3703:
          v2260 = 4096LL;
          v2270 += 4096LL;
          v2646 += 4096LL;
          if ( v2646 != v2623 )
            continue;
          break;
        }
        __writecr8(v2271);
      }
      else
      {
LABEL_3706:
        v2273 = *(_DWORD *)(v99 + 2296);
        v2260 = (unsigned int)v2247[5];
        if ( !v2273 )
        {
          *(_QWORD *)(*(_QWORD *)(v99 + 1424) + 24LL) = v2260 ^ v2265;
          v2273 = *(_DWORD *)(v99 + 2296);
        }
        v2274 = *((_QWORD *)v2247 + 1);
        if ( !v2273 )
        {
          *(_QWORD *)(v99 + 2304) = v99 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v99 + 2312) = (char *)v2247 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v99 + 2320) = *v2247;
          *(_QWORD *)(v99 + 2328) = v2274;
          *(_DWORD *)(v99 + 2296) = 1;
          __b8(v99, 0LL);
        }
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(v99 + 256))(*((_QWORD *)v2247 + 3), v2260, v2250);
    *((_QWORD *)v2247 + 1) = 0LL;
    v2247[4] = 0;
    v2275 = *(_QWORD *)(v99 + 2072);
    for ( i62 = v2275; ; LODWORD(v2275) = i62 ^ v2275 )
    {
      i62 >>= 31;
      if ( !i62 )
        break;
    }
    v2247[5] = v2275 & 0x7FFFFFFF;
  }
  v2277 = 0x7010008004002001LL;
  v2278 = __rdtsc();
  v2240 = (__ROR8__(v2278, 3) ^ v2278) * (unsigned __int128)0x7010008004002001uLL;
  v2861 = *((_QWORD *)&v2240 + 1);
  v2279 = v2240 ^ *((_QWORD *)&v2240 + 1);
  *((_QWORD *)&v2240 + 1) = ((unsigned __int64)v2240 ^ *((_QWORD *)&v2240 + 1)) / 3;
  if ( v2279 == 3LL * *((_QWORD *)&v2240 + 1) )
  {
    v2280 = *(unsigned int *)(v99 + 2064);
    v2281 = v2247 + 6;
    v2282 = __rdtsc();
    v2283 = __ROR8__(v2282, 3);
    v2862 = ((v2283 ^ v2282) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v2284 = ((unsigned __int16)(8193 * (v2283 ^ v2282)) ^ (unsigned __int16)v2862) & 0x7FF;
    v2285 = __rdtsc();
    v2286 = (__ROR8__(v2285, 3) ^ v2285) * (unsigned __int128)0x7010008004002001uLL;
    LODWORD(v2285) = *(_DWORD *)(v99 + 2448);
    v2863 = *((_QWORD *)&v2286 + 1);
    v2287 = (*((_QWORD *)&v2286 + 1) ^ (unsigned __int64)v2286) % (unsigned int)(v2284 + 1);
    *(_QWORD *)&v2240 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v99 + 248))(
                          ((unsigned int)v2285 >> 19) & 0x200,
                          (unsigned int)(v2284 + 2720),
                          v2280);
    v2288 = v2240;
    if ( !(_QWORD)v2240 )
    {
      ++*(_DWORD *)(v99 + 2584);
LABEL_3717:
      v2277 = 0x7010008004002001LL;
      goto LABEL_3718;
    }
    v2328 = v2287;
    v2329 = (_QWORD *)v2240;
    if ( (unsigned int)v2287 >= 8 )
    {
      v2330 = (unsigned __int64)(unsigned int)v2287 >> 3;
      do
      {
        v2328 -= 8;
        v2331 = __rdtsc();
        v2240 = (__ROR8__(v2331, 3) ^ v2331) * (unsigned __int128)0x7010008004002001uLL;
        v2864 = *((_QWORD *)&v2240 + 1);
        *((_QWORD *)&v2240 + 1) ^= v2240;
        *v2329++ = *((_QWORD *)&v2240 + 1);
        --v2330;
      }
      while ( v2330 );
      v2247 = (int *)v2633;
    }
    if ( v2328 )
    {
      v2332 = __rdtsc();
      v2240 = (__ROR8__(v2332, 3) ^ v2332) * (unsigned __int128)0x7010008004002001uLL;
      v2865 = *((_QWORD *)&v2240 + 1);
      *((_QWORD *)&v2240 + 1) ^= v2240;
      do
      {
        *(_BYTE *)v2329 = BYTE8(v2240);
        v2329 = (_QWORD *)((char *)v2329 + 1);
        *((_QWORD *)&v2240 + 1) >>= 8;
        --v2328;
      }
      while ( v2328 );
    }
    v2333 = v2284 - v2287;
    v2334 = v2288 + (unsigned int)v2287;
    v2241 = v2334 + 2720;
    if ( v2333 >= 8 )
    {
      v2335 = (unsigned __int64)v2333 >> 3;
      do
      {
        v2333 -= 8;
        v2336 = __rdtsc();
        v2240 = (__ROR8__(v2336, 3) ^ v2336) * (unsigned __int128)0x7010008004002001uLL;
        v2866 = *((_QWORD *)&v2240 + 1);
        *((_QWORD *)&v2240 + 1) ^= v2240;
        *(_QWORD *)v2241 = *((_QWORD *)&v2240 + 1);
        v2241 += 8LL;
        --v2335;
      }
      while ( v2335 );
    }
    if ( v2333 )
    {
      v2337 = __rdtsc();
      v2338 = __ROR8__(v2337, 3) ^ v2337;
      v2867 = (v2338 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      *((_QWORD *)&v2240 + 1) = (0x7010008004002001LL * v2338) ^ v2867;
      do
      {
        *(_BYTE *)v2241++ = BYTE8(v2240);
        *((_QWORD *)&v2240 + 1) >>= 8;
        --v2333;
      }
      while ( v2333 );
    }
    if ( v2281 )
      *v2281 = v2288;
    LODWORD(v2288) = 0;
    if ( !v2334 )
      goto LABEL_3717;
    *((_QWORD *)v2247 + 1) = v2334;
    v2247[4] = 2720;
    v2339 = 2720;
    v2340 = 340LL;
    v2341 = (char *)v99;
    v2342 = (_QWORD *)v2334;
    do
    {
      v2339 -= 8;
      *v2342 = *(_QWORD *)v2341;
      v2341 += 8;
      ++v2342;
      --v2340;
    }
    while ( v2340 );
    for ( ; v2339; --v2339 )
    {
      v2343 = *v2341++;
      *(_BYTE *)v2342 = v2343;
      v2342 = (_QWORD *)((char *)v2342 + 1);
    }
    *(_DWORD *)(v2334 + 2448) |= 0x80000u;
    *(_DWORD *)(v2334 + 2020) = 2720;
    *(_DWORD *)(v2334 + 2056) = 2720;
    *(_DWORD *)(v2334 + 2448) &= ~2u;
    v2344 = *(_DWORD *)(v2334 + 2020);
    *(_DWORD *)(v2334 + 2604) = v2344;
    v2632 = *(_DWORD *)(v2334 + 2388);
    v3008 = *(_DWORD *)(v2334 + 2448);
    v2631 = *(_QWORD *)(v2334 + 1256);
    v2629 = *(const char **)(v2334 + 1472);
    v2630 = (unsigned int)(v2344 - 200) >> 3;
    *(_DWORD *)(v2334 + 196) = v2630;
    do
    {
      v2345 = __rdtsc();
      v2346 = (__ROR8__(v2345, 3) ^ v2345) * (unsigned __int128)0x7010008004002001uLL;
      v2868 = *((_QWORD *)&v2346 + 1);
      v2347 = v2346 ^ *((_QWORD *)&v2346 + 1);
    }
    while ( (unsigned __int64)v2346 == *((_QWORD *)&v2346 + 1) );
    v2348 = (_QWORD *)(v2334 + 1944);
    v2349 = v2633;
    v2350 = v2956;
    v2646 = *(_QWORD *)(v2334 + 1976);
    v2351 = 32;
    v2641 = *(_DWORD *)(v2334 + 2088);
    v2352 = (char *)(v2334 + 1944);
    v2353 = 4LL;
    do
    {
      v2351 -= 8;
      *(_QWORD *)v2350 = *(_QWORD *)v2352;
      v2352 += 8;
      v2350 += 8;
      --v2353;
    }
    while ( v2353 );
    for ( ; v2351; --v2351 )
    {
      v2354 = *v2352++;
      *v2350++ = v2354;
    }
    *(_QWORD *)(v2334 + 1976) = 0LL;
    v2355 = 32;
    *(_DWORD *)(v2334 + 2088) = 0;
    v2356 = (_QWORD *)(v2334 + 1944);
    v2357 = 4LL;
    do
    {
      *v2356 = 0LL;
      v2355 -= 8;
      ++v2356;
      --v2357;
    }
    while ( v2357 );
    for ( ; v2355; --v2355 )
    {
      *(_BYTE *)v2356 = 0;
      v2356 = (_QWORD *)((char *)v2356 + 1);
    }
    v2358 = (_QWORD *)v2334;
    *(_DWORD *)(v2334 + 2088) += *(_DWORD *)(v2334 + 2020);
    v2359 = (const char *)v2334;
    v2360 = *(unsigned int *)(v2334 + 2020);
    v2361 = *(_DWORD *)(v2334 + 2068);
    if ( v2334 < v2334 + v2360 )
    {
      do
      {
        _mm_prefetch(v2359, 0);
        v2359 += 64;
      }
      while ( (unsigned __int64)v2359 < v2334 + v2360 );
    }
    v2362 = *(_QWORD *)(v2334 + 2072);
    v2363 = (unsigned int)v2360 >> 7;
    if ( (unsigned int)v2360 >> 7 )
    {
      v2364 = *(_QWORD *)(v2334 + 2072);
      do
      {
        v2365 = 8LL;
        do
        {
          v2366 = v2362 ^ *v2358;
          v2367 = v2358[1];
          v2358 += 2;
          v2362 = __ROL8__(__ROL8__(v2366, v2361) ^ v2367, v2361);
          --v2365;
        }
        while ( v2365 );
        v2368 = __ROL8__(v2364 ^ ((unsigned __int64)v2358 - v2334), 17) ^ v2364 ^ ((unsigned __int64)v2358 - v2334);
        v2869 = (v2368 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2361 = ((unsigned __int8)(v2368 ^ v2869) ^ (unsigned __int8)v2361) & 0x3F;
        if ( !v2361 )
          LOBYTE(v2361) = 1;
        --v2363;
      }
      while ( v2363 );
      v2349 = v2633;
      v2348 = (_QWORD *)(v2334 + 1944);
    }
    v2369 = v2360 & 0x7F;
    if ( v2369 >= 8 )
    {
      v2370 = (unsigned __int64)v2369 >> 3;
      do
      {
        v2362 = __ROL8__(*v2358++ ^ v2362, v2361);
        v2369 -= 8;
        --v2370;
      }
      while ( v2370 );
    }
    if ( v2369 )
    {
      do
      {
        v2371 = *(unsigned __int8 *)v2358;
        v2358 = (_QWORD *)((char *)v2358 + 1);
        v2362 = __ROL8__(v2371 ^ v2362, v2361);
        --v2369;
      }
      while ( v2369 );
      v2349 = v2633;
    }
    v2372 = v2956;
    *(_QWORD *)(v2334 + 1976) = v2646;
    DWORD2(v2240) = 32;
    *(_DWORD *)(v2334 + 2088) += v2641;
    v2373 = 4LL;
    do
    {
      *((_QWORD *)&v2240 + 1) = (unsigned int)(DWORD2(v2240) - 8);
      *v2348 = *(_QWORD *)v2372;
      v2372 += 8;
      ++v2348;
      --v2373;
    }
    while ( v2373 );
    if ( DWORD2(v2240) )
    {
      do
      {
        LOBYTE(v2240) = *v2372++;
        *(_BYTE *)v2348 = v2240;
        v2348 = (_QWORD *)((char *)v2348 + 1);
        *((_QWORD *)&v2240 + 1) = (unsigned int)(DWORD2(v2240) - 1);
      }
      while ( DWORD2(v2240) );
      LODWORD(v2373) = 0;
    }
    *(_QWORD *)(v2334 + 1976) = v2362;
    if ( (*(_DWORD *)(v2334 + 2448) & 0x40000000) == 0 )
    {
      v2374 = (_QWORD *)v2334;
      for ( i63 = v2373; i63 < 0x19; ++i63 )
        *v2374++ ^= v2347;
      v2708 = v2347;
      v2376 = v2630;
      if ( v2630 )
      {
        *((_QWORD *)&v2240 + 1) = &v2374[v2630 - 1];
        while ( 1 )
        {
          **((_QWORD **)&v2240 + 1) ^= v2347;
          *((_QWORD *)&v2240 + 1) -= 8LL;
          v2708 = __ROR8__(v2347, v2376);
          _bittestandcomplement64(&v2708, v2708 & 0x3F);
          if ( !--v2376 )
            break;
          v2347 = v2708;
        }
        v2349 = v2633;
      }
      if ( (v3008 & 0x80000) != 0 )
      {
        v2377 = __rdtsc();
        v2240 = (__ROR8__(v2377, 3) ^ v2377) * (unsigned __int128)0x7010008004002001uLL;
        v2870 = *((_QWORD *)&v2240 + 1);
        v2378 = v2240 ^ *((_QWORD *)&v2240 + 1);
        *((_QWORD *)&v2240 + 1) = ((unsigned __int64)v2240 ^ *((_QWORD *)&v2240 + 1)) / 3;
        if ( v2378 != 3LL * *((_QWORD *)&v2240 + 1) )
          goto LABEL_3832;
LABEL_3820:
        v2379 = (unsigned __int64)v2629;
        v2656[3] = 1;
        v2380 = 25;
        v2656[0] = v2373;
        v2656[5] = 2;
        v2381 = __ROR8__(v2334, v2334);
        v2656[1] = 12;
        v2656[6] = 4;
        v2656[2] = 15;
        v2382 = (unsigned __int64 *)v2334;
        v2656[8] = 3;
        v2383 = 0;
        v2656[9] = 5;
        v2384 = 16;
        v2656[12] = 6;
        v2646 = v2632;
        v2656[7] = 7;
        v2656[13] = 8;
        v2656[10] = 9;
        v2656[14] = 10;
        v2656[4] = 11;
        v2656[15] = 13;
        v2656[11] = 14;
        do
        {
          v2385 = *v2382;
          v2386 = v2384;
          do
          {
            v2385 = __ROR8__((unsigned __int8)v2656[*(_BYTE *)v2382 & 0xF] | v2385 & 0xFFFFFFFFFFFFFFF0uLL, 4);
            *v2382 = v2385;
            --v2386;
          }
          while ( v2386 );
          v2387 = v2630;
          v2388 = v2646;
          v2389 = *v2382 - v2383 - v2334;
          if ( (v3008 & 0x200) != 0 )
            v2390 = v2381 ^ v2389;
          else
            v2390 = v2379 ^ __ROR8__(v2381 ^ _byteswap_uint64(v2631 ^ v2389), v2379);
          *v2382 = v2390;
          v2391 = ~(_BYTE)v2390;
          ++v2382;
          *((_QWORD *)&v2240 + 1) = __ROR8__(v2383 ^ (unsigned __int64)(200 - v2383), ~(_BYTE)v2390);
          v2381 = v2388 ^ (v2334 + __ROL8__(*((_QWORD *)&v2240 + 1) ^ v2381, v2391));
          if ( ++v2383 == 25 )
          {
            v2392 = 0;
            v2384 = 1;
            if ( (v3008 & 0x80000) == 0 )
              v2392 = v2387;
            v2380 += v2392;
          }
        }
        while ( v2383 < v2380 );
        v99 = (unsigned __int64)v2621;
        v2349 = v2633;
        goto LABEL_3832;
      }
      if ( (v3008 & 0x100) == 0 )
        goto LABEL_3820;
    }
LABEL_3832:
    v2393 = *(_QWORD **)(v2349 + 8);
    v2394 = *(unsigned int *)(v2349 + 16);
    v2395 = v2393;
    *(_DWORD *)(v99 + 2088) += v2394;
    v2396 = (const char *)v2393;
    v2397 = *(_DWORD *)(v99 + 2068);
    v2398 = *(_QWORD *)(v99 + 2072);
    if ( v2393 < (_QWORD *)((char *)v2393 + v2394) )
    {
      *((_QWORD *)&v2240 + 1) = 64LL;
      do
      {
        _mm_prefetch(v2396, 0);
        v2396 += 64;
      }
      while ( v2396 < (const char *)v2393 + v2394 );
    }
    v2241 = *(_QWORD *)(v99 + 2072);
    v2399 = (unsigned int)v2394 >> 7;
    if ( (unsigned int)v2394 >> 7 )
    {
      do
      {
        v2400 = 8LL;
        do
        {
          v2401 = v2395[1] ^ __ROL8__(*v2395 ^ v2241, v2397);
          v2395 += 2;
          v2241 = __ROL8__(v2401, v2397);
          --v2400;
        }
        while ( v2400 );
        v2240 = (__ROL8__(v2398 ^ ((char *)v2395 - (char *)v2393), 17) ^ v2398 ^ (unsigned __int64)((char *)v2395
                                                                                                  - (char *)v2393))
              * (unsigned __int128)0x7010008004002001uLL;
        v2871 = *((_QWORD *)&v2240 + 1);
        v2397 = (BYTE8(v2240) ^ (unsigned __int8)(v2240 ^ v2397)) & 0x3F;
        if ( !v2397 )
          LOBYTE(v2397) = 1;
        --v2399;
      }
      while ( v2399 );
      v2349 = v2633;
    }
    v2402 = v2394 & 0x7F;
    if ( v2402 >= 8 )
    {
      v2403 = (unsigned __int64)v2402 >> 3;
      do
      {
        v2241 = __ROL8__(*v2395++ ^ v2241, v2397);
        v2402 -= 8;
        --v2403;
      }
      while ( v2403 );
    }
    if ( v2402 )
    {
      do
      {
        v2404 = *(unsigned __int8 *)v2395;
        v2395 = (_QWORD *)((char *)v2395 + 1);
        v2241 = __ROL8__(v2404 ^ v2241, v2397);
        --v2402;
      }
      while ( v2402 );
      v2349 = v2633;
    }
    v2405 = v2241 >> 31;
    LODWORD(v2288) = 0;
    while ( v2405 )
    {
      v2241 = (unsigned int)v2405 ^ (unsigned int)v2241;
      v2405 >>= 31;
    }
    LODWORD(v2241) = v2241 & 0x7FFFFFFF;
    *(_DWORD *)(v2349 + 20) = v2241;
    goto LABEL_3717;
  }
  LODWORD(v2288) = 0;
LABEL_3718:
  v2289 = *(_DWORD *)(v99 + 2448);
  v2630 = 0;
  v2629 = 0LL;
  if ( (v2289 & 0x40000000) == 0 )
  {
    if ( v99 != a1 )
    {
      v2458 = *(const char **)(v99 + 1992);
      v2459 = *(_DWORD *)(v99 + 2604) - 200;
      v2632 = *(_DWORD *)(v99 + 2388);
      v2460 = v2459 >> 3;
      v2620 = *(_QWORD *)(v99 + 1256);
      v2631 = *(_QWORD *)(v99 + 1472);
      v2629 = v2458;
      v2630 = v2460;
      *(_DWORD *)(v99 + 196) = v2460;
      do
      {
        v2461 = __rdtsc();
        v2462 = (__ROR8__(v2461, 3) ^ v2461) * (unsigned __int128)0x7010008004002001uLL;
        v2876 = *((_QWORD *)&v2462 + 1);
        v2463 = v2462 ^ *((_QWORD *)&v2462 + 1);
      }
      while ( (unsigned __int64)v2462 == *((_QWORD *)&v2462 + 1) );
      v2464 = (_QWORD *)(v99 + 1944);
      v2646 = *(_QWORD *)(v99 + 1976);
      v2465 = v2959;
      v2641 = *(_DWORD *)(v99 + 2088);
      v2466 = 32;
      v2467 = (char *)(v99 + 1944);
      v2468 = 4LL;
      do
      {
        v2466 -= 8;
        *(_QWORD *)v2465 = *(_QWORD *)v2467;
        v2467 += 8;
        v2465 += 8;
        --v2468;
      }
      while ( v2468 );
      for ( ; v2466; --v2466 )
      {
        v2469 = *v2467++;
        *v2465++ = v2469;
      }
      *(_QWORD *)(v99 + 1976) = 0LL;
      v2470 = 32;
      *(_DWORD *)(v99 + 2088) = 0;
      v2471 = (_QWORD *)(v99 + 1944);
      v2472 = 4LL;
      do
      {
        *v2471 = 0LL;
        v2470 -= 8;
        ++v2471;
        --v2472;
      }
      while ( v2472 );
      for ( ; v2470; --v2470 )
      {
        *(_BYTE *)v2471 = 0;
        v2471 = (_QWORD *)((char *)v2471 + 1);
      }
      v2473 = (_QWORD *)v99;
      *(_DWORD *)(v99 + 2088) += *(_DWORD *)(v99 + 2020);
      v2474 = *(unsigned int *)(v99 + 2020);
      v2475 = *(_DWORD *)(v99 + 2068);
      v2476 = *(_QWORD *)(v99 + 2072);
      if ( v99 < v99 + v2474 )
      {
        v2477 = (const char *)v99;
        do
        {
          _mm_prefetch(v2477, 0);
          v2477 += 64;
        }
        while ( (unsigned __int64)v2477 < v99 + v2474 );
      }
      v2478 = (unsigned int)v2474 >> 7;
      if ( (unsigned int)v2474 >> 7 )
      {
        v2479 = *(_QWORD *)(v99 + 2072);
        do
        {
          v2480 = 8LL;
          do
          {
            v2481 = v2473[1] ^ __ROL8__(*v2473 ^ v2476, v2475);
            v2473 += 2;
            v2476 = __ROL8__(v2481, v2475);
            --v2480;
          }
          while ( v2480 );
          v2482 = (__ROL8__(v2479 ^ ((unsigned __int64)v2473 - v99), 17) ^ v2479 ^ ((unsigned __int64)v2473 - v99))
                * (unsigned __int128)0x7010008004002001uLL;
          v2877 = *((_QWORD *)&v2482 + 1);
          v2475 = (BYTE8(v2482) ^ (unsigned __int8)(v2482 ^ v2475)) & 0x3F;
          if ( !v2475 )
            LOBYTE(v2475) = 1;
          --v2478;
        }
        while ( v2478 );
        v2460 = v2630;
        v2464 = (_QWORD *)(v99 + 1944);
      }
      v2483 = v2474 & 0x7F;
      if ( v2483 >= 8 )
      {
        v2484 = (unsigned __int64)v2483 >> 3;
        do
        {
          v2476 = __ROL8__(*v2473++ ^ v2476, v2475);
          v2483 -= 8;
          --v2484;
        }
        while ( v2484 );
      }
      for ( ; v2483; --v2483 )
      {
        v2485 = *(unsigned __int8 *)v2473;
        v2473 = (_QWORD *)((char *)v2473 + 1);
        v2476 = __ROL8__(v2485 ^ v2476, v2475);
      }
      v2486 = v2959;
      *(_QWORD *)(v99 + 1976) = v2646;
      v2487 = 4LL;
      *(_DWORD *)(v99 + 2088) += v2641;
      v2488 = 32;
      do
      {
        v2488 -= 8;
        *v2464 = *(_QWORD *)v2486;
        v2486 += 8;
        ++v2464;
        --v2487;
      }
      while ( v2487 );
      for ( ; v2488; --v2488 )
      {
        v2489 = *v2486++;
        *(_BYTE *)v2464 = v2489;
        v2464 = (_QWORD *)((char *)v2464 + 1);
      }
      *(_QWORD *)(v99 + 1976) = v2476;
      if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
        goto LABEL_3956;
      v2490 = 0;
      v2491 = (_QWORD *)v99;
      do
      {
        *v2491 ^= v2463;
        ++v2490;
        ++v2491;
      }
      while ( v2490 < 0x19 );
      v2710 = v2463;
      v2492 = v2460;
      if ( v2460 )
      {
        v2493 = &v2491[v2460 - 1];
        while ( 1 )
        {
          *v2493-- ^= v2463;
          v2710 = __ROR8__(v2463, v2492);
          _bittestandcomplement64(&v2710, v2710 & 0x3F);
          if ( !--v2492 )
            break;
          v2463 = v2710;
        }
      }
      if ( (v2289 & 0x80000) != 0 )
      {
        v2494 = __rdtsc();
        v2495 = (__ROR8__(v2494, 3) ^ v2494) * (unsigned __int128)0x7010008004002001uLL;
        v2878 = *((_QWORD *)&v2495 + 1);
        if ( ((unsigned __int64)v2495 ^ *((_QWORD *)&v2495 + 1)) != 3
                                                                  * (((unsigned __int64)v2495 ^ *((_QWORD *)&v2495 + 1))
                                                                   / 3) )
          goto LABEL_3956;
      }
      else if ( (v2289 & 0x100) != 0 )
      {
        goto LABEL_3956;
      }
      v2496 = v2631;
      v2658[5] = 2;
      v2658[6] = 4;
      v2658[1] = 12;
      v2658[0] = 0;
      v2497 = 25;
      v2658[3] = 1;
      v2498 = 0;
      v2658[8] = 3;
      v2499 = v2632;
      v2500 = (unsigned __int64 *)v99;
      v2501 = 16;
      v2658[9] = 5;
      v2658[12] = 6;
      v2658[7] = 7;
      v2658[13] = 8;
      v2658[10] = 9;
      v2658[14] = 10;
      v2658[4] = 11;
      v2658[15] = 13;
      v2658[11] = 14;
      v2658[2] = 15;
      v2502 = __ROR8__(v99, v99);
      do
      {
        v2503 = *v2500;
        v2504 = v2501;
        do
        {
          v2503 = __ROR8__((unsigned __int8)v2658[*(_BYTE *)v2500 & 0xF] | v2503 & 0xFFFFFFFFFFFFFFF0uLL, 4);
          *v2500 = v2503;
          --v2504;
        }
        while ( v2504 );
        v2505 = v2630;
        v2506 = *v2500 - v2498 - v99;
        if ( (v2289 & 0x200) != 0 )
          v2507 = v2502 ^ v2506;
        else
          v2507 = v2496 ^ __ROR8__(v2502 ^ _byteswap_uint64(v2620 ^ v2506), v2496);
        *v2500++ = v2507;
        v2502 = v2499 ^ (v99
                       + __ROL8__(
                           __ROR8__(v2498 ^ (unsigned __int64)(200 - v2498), ~(_BYTE)v2507) ^ v2502,
                           ~(_BYTE)v2507));
        if ( ++v2498 == 25 )
        {
          v2508 = 0;
          v2501 = 1;
          if ( (v2289 & 0x80000) == 0 )
            v2508 = v2505;
          v2497 += v2508;
        }
      }
      while ( v2498 < v2497 );
      goto LABEL_3956;
    }
    if ( (v2289 & 0x8000) != 0 || !*(_DWORD *)(v99 + 2296) )
    {
      v2290 = pg_unknown7((_DWORD *)a1, *(_DWORD *)(a1 + 2020), *(_DWORD *)(a1 + 2340));
      v99 = v2290;
      if ( v2290 )
      {
        v2291 = *(const char **)(v2290 + 1992);
        v2292 = *(_DWORD *)(v99 + 2604) - 200;
        v2632 = *(_DWORD *)(v99 + 2388);
        v2630 = *(_DWORD *)(v99 + 2448);
        v2293 = v2292 >> 3;
        v2631 = *(_QWORD *)(v99 + 1256);
        v2646 = *(_QWORD *)(v99 + 1472);
        v2629 = v2291;
        *(_DWORD *)(v99 + 196) = v2293;
        do
        {
          v2294 = __rdtsc();
          v2295 = (__ROR8__(v2294, 3) ^ v2294) * (unsigned __int128)0x7010008004002001uLL;
          v2872 = *((_QWORD *)&v2295 + 1);
          v2296 = v2295 ^ *((_QWORD *)&v2295 + 1);
        }
        while ( (unsigned __int64)v2295 == *((_QWORD *)&v2295 + 1) );
        v2297 = (_QWORD *)(v99 + 1944);
        v2623 = *(_QWORD *)(v99 + 1976);
        v2298 = v2957;
        v2641 = *(_DWORD *)(v99 + 2088);
        v2299 = 32;
        v2300 = (char *)(v99 + 1944);
        v2301 = 4LL;
        do
        {
          v2299 -= 8;
          *(_QWORD *)v2298 = *(_QWORD *)v2300;
          v2300 += 8;
          v2298 += 8;
          --v2301;
        }
        while ( v2301 );
        for ( ; v2299; --v2299 )
        {
          v2302 = *v2300++;
          *v2298++ = v2302;
        }
        *(_QWORD *)(v99 + 1976) = 0LL;
        v2303 = 32;
        *(_DWORD *)(v99 + 2088) = 0;
        v2304 = (_QWORD *)(v99 + 1944);
        v2305 = 4LL;
        do
        {
          *v2304 = 0LL;
          v2303 -= 8;
          ++v2304;
          --v2305;
        }
        while ( v2305 );
        for ( ; v2303; --v2303 )
        {
          *(_BYTE *)v2304 = 0;
          v2304 = (_QWORD *)((char *)v2304 + 1);
        }
        v2306 = (_QWORD *)v99;
        *(_DWORD *)(v99 + 2088) += *(_DWORD *)(v99 + 2020);
        v2307 = (const char *)v99;
        v2308 = *(unsigned int *)(v99 + 2020);
        v2309 = *(_DWORD *)(v99 + 2068);
        v2310 = *(_QWORD *)(v99 + 2072);
        if ( v99 < v99 + v2308 )
        {
          do
          {
            _mm_prefetch(v2307, 0);
            v2307 += 64;
          }
          while ( (unsigned __int64)v2307 < v99 + v2308 );
        }
        v2311 = *(_QWORD *)(v99 + 2072);
        for ( i64 = (unsigned int)v2308 >> 7; i64; --i64 )
        {
          v2313 = 8LL;
          do
          {
            v2314 = v2311 ^ *v2306;
            v2315 = v2306[1];
            v2306 += 2;
            v2311 = __ROL8__(__ROL8__(v2314, v2309) ^ v2315, v2309);
            --v2313;
          }
          while ( v2313 );
          v2316 = __ROL8__(v2310 ^ ((unsigned __int64)v2306 - v99), 17) ^ v2310 ^ ((unsigned __int64)v2306 - v99);
          v2873 = ((unsigned __int64)v2316 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v2309 = ((unsigned __int8)v2873 ^ (unsigned __int8)(v2316 ^ v2309)) & 0x3F;
          if ( !v2309 )
            LOBYTE(v2309) = 1;
        }
        v2317 = v2308 & 0x7F;
        if ( v2317 >= 8 )
        {
          v2318 = (unsigned __int64)v2317 >> 3;
          do
          {
            v2311 = __ROL8__(*v2306++ ^ v2311, v2309);
            v2317 -= 8;
            --v2318;
          }
          while ( v2318 );
        }
        for ( ; v2317; --v2317 )
        {
          v2319 = *(unsigned __int8 *)v2306;
          v2306 = (_QWORD *)((char *)v2306 + 1);
          v2311 = __ROL8__(v2319 ^ v2311, v2309);
        }
        v2320 = v2957;
        *(_QWORD *)(v99 + 1976) = v2623;
        v2321 = 4LL;
        *(_DWORD *)(v99 + 2088) += v2641;
        v2322 = 32;
        do
        {
          v2322 -= 8;
          *v2297 = *(_QWORD *)v2320;
          v2320 += 8;
          ++v2297;
          --v2321;
        }
        while ( v2321 );
        for ( ; v2322; --v2322 )
        {
          v2323 = *v2320++;
          *(_BYTE *)v2297 = v2323;
          v2297 = (_QWORD *)((char *)v2297 + 1);
        }
        *(_QWORD *)(v99 + 1976) = v2311;
        if ( (*(_DWORD *)(v99 + 2448) & 0x40000000) != 0 )
          goto LABEL_3956;
        v2324 = 0;
        v2325 = (_QWORD *)v99;
        do
        {
          *v2325 ^= v2296;
          ++v2324;
          ++v2325;
        }
        while ( v2324 < 0x19 );
        v2709 = v2296;
        v2326 = v2293;
        if ( v2293 )
        {
          v2327 = &v2325[v2293 - 1];
          while ( 1 )
          {
            *v2327-- ^= v2296;
            v2709 = __ROR8__(v2296, v2326);
            _bittestandcomplement64(&v2709, v2709 & 0x3F);
            if ( !--v2326 )
              break;
            v2296 = v2709;
          }
        }
        if ( (v2630 & 0x80000) != 0 )
        {
          v2406 = __rdtsc();
          v2407 = (__ROR8__(v2406, 3) ^ v2406) * (unsigned __int128)0x7010008004002001uLL;
          v2874 = *((_QWORD *)&v2407 + 1);
          if ( ((unsigned __int64)v2407 ^ *((_QWORD *)&v2407 + 1)) != 3
                                                                    * (((unsigned __int64)v2407 ^ *((_QWORD *)&v2407 + 1))
                                                                     / 3) )
            goto LABEL_3956;
LABEL_3858:
          v2408 = v2646;
          v2657[3] = 1;
          v2657[6] = 4;
          v2657[5] = 2;
          v2657[0] = 0;
          v2657[1] = 12;
          v2409 = 25;
          v2657[8] = 3;
          v2410 = 0;
          v2657[9] = 5;
          v2411 = v2632;
          v2412 = (unsigned __int64 *)v99;
          v2657[12] = 6;
          v2413 = 16;
          v2657[7] = 7;
          v2657[13] = 8;
          v2657[10] = 9;
          v2657[14] = 10;
          v2657[4] = 11;
          v2657[15] = 13;
          v2657[11] = 14;
          v2657[2] = 15;
          v2414 = __ROR8__(v99, v99);
          do
          {
            v2415 = *v2412;
            v2416 = v2413;
            do
            {
              v2415 = __ROR8__((unsigned __int8)v2657[*(_BYTE *)v2412 & 0xF] | v2415 & 0xFFFFFFFFFFFFFFF0uLL, 4);
              *v2412 = v2415;
              --v2416;
            }
            while ( v2416 );
            v2417 = v2630;
            v2418 = *v2412 - v2410 - v99;
            if ( (v2630 & 0x200) != 0 )
              v2419 = v2414 ^ v2418;
            else
              v2419 = v2408 ^ __ROR8__(v2414 ^ _byteswap_uint64(v2631 ^ v2418), v2408);
            *v2412++ = v2419;
            v2414 = v2411 ^ (v99
                           + __ROL8__(
                               __ROR8__(v2410 ^ (unsigned __int64)(200 - v2410), ~(_BYTE)v2419) ^ v2414,
                               ~(_BYTE)v2419));
            if ( ++v2410 == 25 )
            {
              v2420 = 0;
              v2413 = 1;
              if ( (v2417 & 0x80000) == 0 )
                v2420 = v2293;
              v2409 += v2420;
            }
          }
          while ( v2410 < v2409 );
          goto LABEL_3956;
        }
        if ( (v2630 & 0x100) == 0 )
          goto LABEL_3858;
LABEL_3956:
        v2509 = __rdtsc();
        v2630 = 1;
        v2510 = __ROR8__(v2509, 3) ^ v2509;
        v2511 = v2510 * (unsigned __int128)0x7010008004002001uLL;
        v2879 = *((_QWORD *)&v2511 + 1);
        v2448 = *((_QWORD *)&v2511 + 1) ^ (0x7010008004002001LL * v2510);
        goto LABEL_3963;
      }
    }
    v2421 = (_QWORD *)(a1 + 1944);
    *(_DWORD *)(a1 + 196) = 1;
    v2422 = v2958;
    v2423 = *(_QWORD *)(a1 + 1976);
    v99 = a1;
    v2424 = *(_DWORD *)(a1 + 2088);
    v2425 = (char *)(a1 + 1944);
    v2646 = v2423;
    v2426 = 32;
    v2623 = a1 + 1944;
    v2427 = 4LL;
    do
    {
      v2426 -= 8;
      *(_QWORD *)v2422 = *(_QWORD *)v2425;
      v2425 += 8;
      v2422 += 8;
      --v2427;
    }
    while ( v2427 );
    for ( ; v2426; --v2426 )
    {
      v2428 = *v2425++;
      *v2422++ = v2428;
    }
    *(_QWORD *)(a1 + 1976) = 0LL;
    v2429 = 32;
    *(_DWORD *)(a1 + 2088) = 0;
    v2430 = (_QWORD *)(a1 + 1944);
    v2431 = 4LL;
    do
    {
      *v2430 = 0LL;
      v2429 -= 8;
      ++v2430;
      --v2431;
    }
    while ( v2431 );
    for ( ; v2429; --v2429 )
    {
      *(_BYTE *)v2430 = 0;
      v2430 = (_QWORD *)((char *)v2430 + 1);
    }
    v2432 = (_QWORD *)a1;
    *(_DWORD *)(a1 + 2088) += *(_DWORD *)(a1 + 2020);
    v2433 = (const char *)a1;
    v2434 = *(unsigned int *)(a1 + 2020);
    v2435 = *(_DWORD *)(a1 + 2068);
    v2436 = *(_QWORD *)(a1 + 2072);
    if ( a1 < a1 + v2434 )
    {
      do
      {
        _mm_prefetch(v2433, 0);
        v2433 += 64;
      }
      while ( (unsigned __int64)v2433 < a1 + v2434 );
    }
    v2241 = *(_QWORD *)(a1 + 2072);
    v2437 = (unsigned int)v2434 >> 7;
    if ( (unsigned int)v2434 >> 7 )
    {
      do
      {
        v2438 = 8LL;
        do
        {
          v2439 = v2432[1] ^ __ROL8__(*v2432 ^ v2241, v2435);
          v2432 += 2;
          v2241 = __ROL8__(v2439, v2435);
          --v2438;
        }
        while ( v2438 );
        v2440 = (__ROL8__(v2436 ^ ((unsigned __int64)v2432 - a1), 17) ^ v2436 ^ ((unsigned __int64)v2432 - a1))
              * (unsigned __int128)0x7010008004002001uLL;
        v2911 = *((_QWORD *)&v2440 + 1);
        v2435 = (BYTE8(v2440) ^ (unsigned __int8)(v2440 ^ v2435)) & 0x3F;
        if ( !v2435 )
          LOBYTE(v2435) = 1;
        --v2437;
      }
      while ( v2437 );
      v2421 = (_QWORD *)v2623;
      v2423 = v2646;
    }
    v2441 = v2434 & 0x7F;
    if ( v2441 >= 8 )
    {
      v2442 = (unsigned __int64)v2441 >> 3;
      do
      {
        v2241 = __ROL8__(*v2432++ ^ v2241, v2435);
        v2441 -= 8;
        --v2442;
      }
      while ( v2442 );
    }
    for ( ; v2441; --v2441 )
    {
      v2443 = *(unsigned __int8 *)v2432;
      v2432 = (_QWORD *)((char *)v2432 + 1);
      v2241 = __ROL8__(v2443 ^ v2241, v2435);
    }
    v2277 = a1;
    v2444 = v2958;
    *((_QWORD *)&v2240 + 1) = 4LL;
    *(_QWORD *)(a1 + 1976) = v2423;
    *(_DWORD *)(a1 + 2088) += v2424;
    v2445 = 32;
    do
    {
      v2445 -= 8;
      *v2421 = *(_QWORD *)v2444;
      v2444 += 8;
      ++v2421;
      --*((_QWORD *)&v2240 + 1);
    }
    while ( *((_QWORD *)&v2240 + 1) );
    for ( LODWORD(v2288) = 0; v2445; --v2445 )
    {
      v2446 = *v2444++;
      *(_BYTE *)v2421 = v2446;
      v2421 = (_QWORD *)((char *)v2421 + 1);
    }
    *(_QWORD *)(a1 + 1976) = v2241;
  }
  v2447 = *(_DWORD *)(v99 + 2448);
  v2448 = 0LL;
  v2623 = 0LL;
  if ( (v2447 & 0x40000000) == 0 )
  {
    if ( (v2447 & 0x100) == 0 )
    {
      v2449 = *(unsigned int *)(v99 + 2388);
      v2450 = *(_QWORD *)(v99 + 1472);
      v2451 = *(_QWORD *)(v99 + 1256);
      v2452 = (__int64 *)v99;
      v2655[3] = 1;
      v2655[5] = 2;
      v2655[1] = 12;
      v2655[0] = 0;
      v2655[8] = 3;
      v2655[6] = 4;
      v2655[9] = 5;
      v2277 = __ROR8__(v99, v99);
      v2453 = 16;
      v2655[12] = 6;
      v2655[7] = 7;
      v2655[13] = 8;
      v2655[10] = 9;
      v2655[14] = 10;
      v2655[4] = 11;
      v2655[15] = 13;
      v2655[11] = 14;
      v2655[2] = 15;
      v3009 = v2449;
      do
      {
        v2454 = *v2452;
        v2455 = v2453;
        do
        {
          v2454 = __ROR8__((unsigned __int8)v2655[*(_BYTE *)v2452 & 0xF] | v2454 & 0xFFFFFFFFFFFFFFF0uLL, 4);
          *v2452 = v2454;
          --v2455;
        }
        while ( v2455 );
        v2456 = *v2452 - (unsigned int)v2288 - v99;
        if ( (v2447 & 0x200) != 0 )
          v2457 = v2456 ^ v2277;
        else
          v2457 = v2450 ^ __ROR8__(v2277 ^ _byteswap_uint64(v2456 ^ v2451), v2450);
        *v2452 = v2457;
        v2241 = (unsigned int)v2457 ^ 0xEFF;
        ++v2452;
        *((_QWORD *)&v2240 + 1) = __ROR8__(
                                    (unsigned int)v2288 ^ (unsigned __int64)(unsigned int)(200 - v2288),
                                    ~(_BYTE)v2457);
        v2277 = v3009 ^ (v99 + __ROL8__(*((_QWORD *)&v2240 + 1) ^ v2277, ~(_BYTE)v2457));
        LODWORD(v2288) = v2288 + 1;
        if ( (_DWORD)v2288 == 25 )
          v2453 = 1;
      }
      while ( (unsigned int)v2288 < 0x19 );
      v2448 = v2623;
    }
    (*(void (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64, __int64))(v99 + 616))(
      v99 + 2048,
      *((_QWORD *)&v2240 + 1),
      v2241,
      v2277);
  }
LABEL_3963:
  i65 = a1;
  v2513 = *(_DWORD **)(a1 + 2008);
  if ( (*(_DWORD *)(a1 + 2448) & 0x10000000) != 0 )
  {
    v2514 = __rdtsc();
    v2515 = (__ROR8__(v2514, 3) ^ v2514) * (unsigned __int128)0x7010008004002001uLL;
    v2880 = *((_QWORD *)&v2515 + 1);
    v2513 = (_DWORD *)(*(_QWORD *)(a1 + 1488) + 16LL * (((unsigned __int8)v2515 ^ BYTE8(v2515)) & 0xF));
  }
  v2516 = 40;
  v2517 = (char *)(a1 + 2296);
  v2518 = (char *)(a1 + 2296);
  v2519 = &v2789;
  v2520 = 5LL;
  do
  {
    v2516 -= 8;
    *(_QWORD *)v2519 = *(_QWORD *)v2518;
    v2518 += 8;
    v2519 += 2;
    --v2520;
  }
  while ( v2520 );
  for ( ; v2516; --v2516 )
  {
    v2521 = *v2518++;
    *(_BYTE *)v2519 = v2521;
    v2519 = (int *)((char *)v2519 + 1);
  }
  v2522 = *(_DWORD *)(a1 + 2448);
  if ( (v2522 & 0x8000) != 0 || !*(_DWORD *)v2517 )
  {
    if ( (v2522 & 0x40000000) != 0 )
      goto LABEL_4048;
    v2523 = v99 ^ v2448;
    v2524 = (unsigned __int8)(*(_BYTE *)(a1 + 2336) - 1);
    v2525 = __rdtsc();
    v2526 = __ROR8__(v2525, 3) ^ v2525;
    v2881 = (v2526 * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v2527 = v2524 + (v2881 ^ (0x7010008004002001LL * v2526)) % (unsigned int)(63 - v2524);
    do
    {
      v2528 = __rdtsc();
      v2529 = __ROR8__(v2528, 3) ^ v2528;
      v2882 = (v2529 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2530 = v2524 + (v2882 ^ (0x7010008004002001LL * v2529)) % (unsigned int)(63 - v2524);
    }
    while ( v2530 == v2527 );
    v2531 = *(_QWORD *)(a1 + 1936);
    v2532 = *(_QWORD *)(a1 + 1928);
    v2533 = (v2523 | (1LL << v2527)) & ~(1LL << v2530);
    if ( *(_DWORD *)(a1 + 2340) == 3 )
    {
      v2534 = (unsigned __int64)v2629;
      if ( v2629 )
      {
        v2535 = *(_QWORD *)(a1 + 880);
        *(_BYTE *)v2531 = 19;
        *(_BYTE *)(v2531 + 1) = 1;
        *(_WORD *)(v2531 + 2) = 0;
        *(_QWORD *)(v2531 + 24) = v2535;
        *(_QWORD *)(v2531 + 32) = v2534;
        *(_QWORD *)(v2531 + 56) = 0LL;
        *(_QWORD *)(v2531 + 16) = 0LL;
        *(_QWORD *)(v2531 + 40) = v2533;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 864))(
          *(_QWORD *)(v2534 + 8),
          *(unsigned int *)(v2534 + 16),
          *(_QWORD *)v2534);
        v2536 = *(_QWORD *)v2534;
        v2537 = v2534 ^ __ROL8__(v2534, 17);
        v2538 = 4;
        v2883 = (v2537 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2539 = v2537 ^ v2883;
        v2540 = (_QWORD *)(v2534 + 24);
        v2541 = (0x7010008004002001LL * v2537) ^ v2883;
        do
        {
          *v2540 ^= v2541;
          v2541 = __ROL8__(v2541, v2538);
          --v2540;
          --v2538;
        }
        while ( v2538 );
        if ( (v2539 & 0xFu) < 7 )
        {
          v2542 = 6;
          v2543 = v2536 ^ __ROL8__(v2536, 17);
          v2884 = ((unsigned __int64)v2543 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v2544 = ((0x7010008004002001LL * v2543) ^ v2884) + v2541;
          v2545 = (_QWORD *)(v2536 + 40);
          v2546 = (unsigned int)*(__int16 *)(v2536 + 8);
          do
          {
            *v2545 ^= v2544;
            v2544 = __ROL8__(v2544, v2542);
            --v2545;
            --v2542;
          }
          while ( v2542 );
          v2547 = (unsigned __int64)(v2546 - 48) >> 3;
          if ( (_DWORD)v2547 )
          {
            v2548 = (_QWORD *)(v2536 + 8 * ((int)v2547 + 5LL));
            do
            {
              *v2548 ^= v2544;
              v2544 = __ROL8__(v2544, v2547);
              --v2548;
              LODWORD(v2547) = v2547 - 1;
            }
            while ( (_DWORD)v2547 );
          }
        }
        i65 = a1;
        goto LABEL_3985;
      }
      i65 = a1;
    }
    *(_BYTE *)v2531 = 19;
    *(_BYTE *)(v2531 + 1) = 1;
    *(_WORD *)(v2531 + 2) = 0;
    *(_QWORD *)(v2531 + 24) = v2513;
    *(_QWORD *)(v2531 + 32) = v2533;
    *(_QWORD *)(v2531 + 56) = 0LL;
    *(_QWORD *)(v2531 + 16) = 0LL;
LABEL_3985:
    *(_QWORD *)(v2531 + 64) = v2448;
    if ( (*(_DWORD *)(i65 + 2448) & 0x100) != 0 )
    {
      v2549 = (unsigned __int64)(v2513 - 18);
      *((_QWORD *)v2513 - 1) = v2531;
      v2550 = 25LL;
      v2551 = __rdtsc();
      v2552 = (__ROR8__(v2551, 3) ^ v2551) * (unsigned __int128)0x7010008004002001uLL;
      v2885 = *((_QWORD *)&v2552 + 1);
      v2553 = v2552 ^ *((_QWORD *)&v2552 + 1);
      v2554 = v2513;
      do
      {
        *v2554++ ^= v2553;
        --v2550;
      }
      while ( v2550 );
      *v2513 = 1213280584;
      *(_QWORD *)(v2549 + 32) = v2553;
    }
    else
    {
      v2549 = v2531;
    }
    v2555 = *(_QWORD *)(i65 + 2712);
    if ( v2555 )
    {
      v2556 = *(_QWORD *)(v2555 + 32);
      v2557 = *(_QWORD *)(i65 + 1424) ^ ((v2556 ^ ((v2556 ^ 0xE0E20100uLL) >> 4)) >> 4);
      v2558 = v2557;
      v2559 = (*(_BYTE *)(i65 + 1424) ^ ((v2556 ^ ((v2556 ^ 0xE0E20100uLL) >> 4)) >> 4)) & 0xF;
      if ( !v2559 )
        v2559 = 1;
      do
      {
        v2560 = (unsigned __int64 *)(v2556 + (v2557 & 0xF));
        v2556 = *v2560;
        v2557 ^= (*v2560 ^ ((*v2560 ^ 0x1DFE00) >> 4)) >> 4;
        --v2559;
      }
      while ( v2559 );
      v2561 = v2558;
      v2562 = v2549 ^ v2558;
      if ( (v2561 & 0x1000) == 0 )
        v2562 = v2549;
      *v2560 = v2562;
      v2549 = *(_QWORD *)(i65 + 2712);
    }
    _InterlockedOr(v2617, 0);
    v2563 = *(_DWORD *)(i65 + 2104);
    if ( v2563 )
    {
      v2564 = v2563 - 1;
      if ( v2564 )
      {
        v2565 = v2564 - 1;
        if ( v2565 )
        {
          v2566 = v2565 - 1;
          if ( v2566 )
          {
            if ( v2566 == 1 )
            {
              v2570 = *(_QWORD *)(i65 + 2528);
              v2571 = *(_QWORD *)(i65 + 2544);
              v2572 = *(_QWORD *)(i65 + 2536);
              v2573 = *(_QWORD *)(i65 + 2456);
              *(_BYTE *)v2570 = 18;
              *(_BYTE *)(v2570 + 2) = 88;
              *(_BYTE *)(v2570 + 80) = 0;
              *(_QWORD *)(v2570 + 8) = v2573;
              *(_QWORD *)(v2570 + 32) = v2572;
              *(_QWORD *)(v2570 + 40) = 0LL;
              *(_QWORD *)(v2570 + 48) = v2571;
              *(_BYTE *)(v2570 + 81) = 0;
              *(_QWORD *)(v2570 + 56) = 0LL;
              *(_BYTE *)(v2570 + 82) = 0;
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD))(i65 + 704))(
                      *(_QWORD *)(i65 + 2528),
                      v2531,
                      0LL,
                      0LL) )
              {
                if ( !*(_DWORD *)v2517 )
                {
                  *(_QWORD *)(i65 + 2304) = i65 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(i65 + 2312) = 0LL;
                  *(_QWORD *)(i65 + 2320) = 260LL;
                  *(_QWORD *)(i65 + 2328) = v2573;
                  *(_DWORD *)v2517 = 1;
                  __b8(i65, 0LL);
                }
                v2574 = 40;
                v2575 = &v2789;
                v2576 = 5LL;
                do
                {
                  v2574 -= 8;
                  *(_QWORD *)v2575 = *(_QWORD *)v2517;
                  v2517 += 8;
                  v2575 += 2;
                  --v2576;
                }
                while ( v2576 );
                for ( i65 = a1; v2574; --v2574 )
                {
                  v2577 = *v2517++;
                  *(_BYTE *)v2575 = v2577;
                  v2575 = (int *)((char *)v2575 + 1);
                }
              }
            }
            else
            {
              v2567 = *(_QWORD *)(i65 + 2456);
              *(_QWORD *)(v2567 + 72) = v2549;
              _InterlockedOr(v2617, 0);
              v2568 = __rdtsc();
              v2569 = (__ROR8__(v2568, 3) ^ v2568) * (unsigned __int128)0x7010008004002001uLL;
              v2886 = *((_QWORD *)&v2569 + 1);
              *(_DWORD *)v2567 = (__int64)(((unsigned __int64)v2569 ^ *((_QWORD *)&v2569 + 1)) % 0x5F5E100 + 1200000000)
                               / 10000000;
            }
          }
          else
          {
            v2578 = *(_QWORD *)(i65 + 2456);
            v2579 = *(_QWORD *)(v2578 + *(_QWORD *)(i65 + 1688));
            if ( v2579 )
            {
              if ( !*(_DWORD *)v2517 )
              {
                *(_QWORD *)(i65 + 2304) = i65 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(i65 + 2312) = 0LL;
                *(_QWORD *)(i65 + 2320) = 260LL;
                *(_QWORD *)(i65 + 2328) = v2579;
                *(_DWORD *)v2517 = 1;
                __b8(i65, 0LL);
              }
              v2580 = 40;
              v2581 = &v2789;
              v2582 = 5LL;
              do
              {
                v2580 -= 8;
                *(_QWORD *)v2581 = *(_QWORD *)v2517;
                v2517 += 8;
                v2581 += 2;
                --v2582;
              }
              while ( v2582 );
              for ( i65 = a1; v2580; --v2580 )
              {
                v2583 = *v2517++;
                *(_BYTE *)v2581 = v2583;
                v2581 = (int *)((char *)v2581 + 1);
              }
            }
            _InterlockedOr(v2617, 0);
            *(_QWORD *)(v2578 + *(_QWORD *)(i65 + 1688)) = v2531;
          }
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)(i65 + 1984) + 128LL) = v2549;
        }
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(i65 + 1984) + *(_QWORD *)(i65 + 1584)) = v2549;
      }
    }
    else
    {
      v2584 = __rdtsc();
      v2585 = (__ROR8__(v2584, 3) ^ v2584) * (unsigned __int128)0x7010008004002001uLL;
      v2887 = *((_QWORD *)&v2585 + 1);
      v2586 = -1200000000LL - ((unsigned __int64)v2585 ^ *((_QWORD *)&v2585 + 1)) % 0x5F5E100;
      *(_QWORD *)&v2585 = __rdtsc();
      v2587 = (__ROR8__(v2585, 3) ^ (unsigned __int64)v2585) * (unsigned __int128)0x7010008004002001uLL;
      v2888 = *((_QWORD *)&v2587 + 1);
      (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD, unsigned __int64, unsigned __int64))(i65 + 472))(
        v2532,
        v2586,
        0LL,
        ((unsigned __int64)v2587 ^ *((_QWORD *)&v2587 + 1)) % 0x2710,
        v2549);
    }
  }
  if ( v2789 && (*(_DWORD *)(i65 + 2448) & 0x8000) == 0 )
  {
    v2588 = v2792;
    v2589 = v2793;
    v2590 = v2791;
    v2591 = (int)v2790;
    v3010 = v2792;
    v2623 = v2793;
    v2646 = v2791;
    v2629 = v2790;
    v2650 = a1;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v2592 = KeGetCurrentPrcb();
    v2593 = *(_QWORD *)((char *)&v2592->MxCsr + *(_QWORD *)(v2650 + 1592));
    v2594 = *(_QWORD *)((char *)&v2592->MxCsr + *(_QWORD *)(v2650 + 1608));
    if ( !*((_BYTE *)&v2592->MxCsr + *(_QWORD *)(v2650 + 1600))
      || (unsigned __int64)&v2650 > v2593
      || (unsigned __int64)&v2650 < v2593 - 24576 )
    {
      v2593 = *(_QWORD *)(v2594 + *(_QWORD *)(v2650 + 1656));
    }
    v2595 = v2650;
    if ( (*(_DWORD *)(v2650 + 2448) & 0x8000000) == 0 )
    {
      v2596 = __readcr0();
      __writecr0(v2596 & 0xFFFFFFFFFFFEFFFFuLL);
      v2597 = v2650 + 2728;
      v2598 = 16LL * *(unsigned int *)(v2650 + 2720) + v2650 + 2728;
      v2599 = 0;
      v2600 = (_QWORD *)v2598;
      if ( *(_DWORD *)(v2650 + 2724) )
      {
        do
        {
          *(_QWORD *)*v2600 = v2600[1];
          v2601 = __readcr4();
          if ( (v2601 & 0x20080) != 0 )
          {
            __writecr4(v2601 ^ 0x80);
            __writecr4(v2601);
          }
          else
          {
            v2602 = __readcr3();
            __writecr3(v2602);
          }
          v2600 += 2;
          ++v2599;
        }
        while ( v2599 < *(_DWORD *)(v2595 + 2724) );
        v2588 = v3010;
      }
      if ( v2597 < v2598 )
      {
        do
        {
          v2603 = *(unsigned int *)(v2597 + 8);
          v2604 = v2600;
          v2605 = *(char **)v2597;
          v2606 = v2603;
          if ( (unsigned int)v2603 >= 8 )
          {
            v2607 = (unsigned __int64)(unsigned int)v2603 >> 3;
            do
            {
              v2606 -= 8;
              *(_QWORD *)v2605 = *v2604++;
              v2605 += 8;
              --v2607;
            }
            while ( v2607 );
          }
          if ( v2606 )
          {
            v2608 = v2605 - (char *)v2604;
            do
            {
              *((_BYTE *)v2604 + v2608) = *(_BYTE *)v2604;
              v2604 = (_QWORD *)((char *)v2604 + 1);
              --v2606;
            }
            while ( v2606 );
          }
          v2600 = (_QWORD *)((char *)v2600 + v2603);
          v2597 += 16LL;
        }
        while ( v2597 < v2598 );
        v2588 = v3010;
        v2589 = v2623;
        v2590 = v2646;
      }
      **(_BYTE **)(v2595 + 536) = -61;
      __writecr0(v2596);
      v2591 = (int)v2629;
    }
    v2611 = *(_DWORD *)(v2650 + 2344);
    if ( v2611 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v2611 = *(_DWORD *)(v2650 + 2344);
      }
      if ( v2611 )
      {
        v2612 = v2611 - 1;
        if ( v2612 )
        {
          v2613 = v2612 - 1;
          if ( v2613 )
          {
            v2614 = v2613 - 1;
            if ( v2614 )
            {
              v2615 = v2614 - 1;
              if ( v2615 )
              {
                if ( v2615 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v2650 + 1608)),
                    (*(_DWORD *)(v2650 + 2448) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(v2650 + 1464) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*(_QWORD *)(v2650 + 1704)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr
                                                          + *(_QWORD *)(v2650 + 1608))
                                              + *(_QWORD *)(v2650 + 1672)),
                  (*(_DWORD *)(v2650 + 2448) >> 10) & 0x1F);
              }
              goto LABEL_4088;
            }
            v2616 = *(volatile signed __int32 **)(v2650 + 1376);
          }
          else
          {
            v2616 = *(volatile signed __int32 **)(v2650 + 1368);
          }
        }
        else
        {
          v2616 = *(volatile signed __int32 **)(v2650 + 1352);
        }
        _interlockedbittestandset64(v2616, 0LL);
      }
    }
LABEL_4088:
    *(_QWORD *)(v2594 + *(_QWORD *)(v2650 + 1680)) = 0LL;
    *(_QWORD *)(v2594 + *(_QWORD *)(v2650 + 1696)) = 0LL;
    SdbpCheckDll(265, v2591, v2590, v2589, v2588, *(_QWORD *)(v2650 + 344), v2593);
    JUMPOUT(0x140A0CE92LL);
  }
LABEL_4048:
  if ( (*(_DWORD *)(i65 + 2448) & 0x40000000) == 0 && v2630 )
  {
    if ( *(_DWORD *)(i65 + 2340) == 1 )
    {
      *(_QWORD *)(i65 + 1992) -= 8LL;
      *(_DWORD *)(i65 + 2000) = **(_DWORD **)(i65 + 1992);
      v2609 = *(_QWORD *)(i65 + 552);
      goto LABEL_4054;
    }
    if ( *(_DWORD *)(i65 + 2340) == 3 )
    {
      v2609 = *(_QWORD *)(i65 + 872);
LABEL_4054:
      *(_QWORD *)(i65 + 256) = v2609;
    }
  }
  return i65;
}