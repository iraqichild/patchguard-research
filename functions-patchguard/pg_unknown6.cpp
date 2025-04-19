/* XREFS
Down	o	KiFilterFiberContext+10F	lea     rdx, pg_unknown6; Argument1
*/

__int64 __fastcall pg_unknown6(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // r14
  int v6; // eax
  __int64 v7; // r8
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  unsigned __int8 v15; // al
  SIZE_T v16; // rbx
  struct _SLIST_ENTRY *PoolWithTag; // rax
  PSLIST_ENTRY v18; // r13
  PSLIST_ENTRY v19; // r15
  __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned __int64 v22; // rdi
  __int64 Next_low; // rcx
  __int64 v24; // rbx
  int v25; // esi
  __int64 v26; // rbx
  __int64 v27; // rdx
  int v28; // ecx
  __int64 v29; // rdx
  int Next_high; // eax
  unsigned __int64 v31; // rax
  unsigned __int128 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int128 v34; // rax
  unsigned __int64 v35; // rcx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // r10d
  int v39; // ecx
  int v40; // ecx
  int v41; // ecx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r10d
  __int64 v45; // r14
  unsigned __int64 v46; // rsi
  unsigned __int64 v47; // rax
  unsigned __int128 v48; // rax
  __int64 v49; // rbx
  unsigned int *v50; // rax
  int v51; // ecx
  unsigned __int64 v52; // r14
  unsigned int Next; // ecx
  unsigned __int64 v54; // r12
  unsigned int v55; // r15d
  unsigned __int64 v56; // rbx
  unsigned int v57; // esi
  int v58; // eax
  unsigned __int64 v59; // r9
  int v60; // r8d
  char *v61; // r13
  unsigned int v62; // ecx
  __int64 v63; // r10
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // ecx
  __int64 v68; // rax
  unsigned __int64 v69; // rax
  unsigned __int128 v70; // rax
  unsigned __int64 v71; // rbx
  __int64 v72; // rcx
  int v73; // eax
  unsigned int v74; // r8d
  unsigned __int64 v75; // rcx
  int v76; // edx
  __int64 *v77; // r9
  bool v78; // zf
  __int64 v79; // r8
  __int64 v80; // rcx
  unsigned int *v81; // rdx
  unsigned __int64 v82; // r11
  __int64 *v83; // r8
  int v84; // eax
  int v85; // r9d
  int v86; // r10d
  unsigned int v87; // ecx
  unsigned __int64 v88; // rbx
  unsigned __int64 v89; // rsi
  _QWORD *v90; // rsi
  __int64 v91; // r8
  _QWORD *v92; // r9
  const char *v93; // rax
  int v94; // r11d
  unsigned __int64 v95; // rbx
  unsigned int v96; // r10d
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rbx
  unsigned __int128 v100; // rax
  unsigned int v101; // r8d
  unsigned __int64 v102; // rdx
  __int64 v103; // rax
  unsigned __int64 i27; // rax
  unsigned __int64 v105; // rcx
  unsigned int v106; // ebx
  __int64 v107; // rdx
  __int64 v108; // r8
  unsigned __int8 v109; // r15
  unsigned __int64 v110; // rsi
  __int64 v111; // r13
  unsigned __int64 v112; // r12
  int v113; // eax
  unsigned int v114; // ecx
  int v115; // eax
  unsigned __int64 v116; // rcx
  int v117; // ecx
  unsigned __int64 v118; // rbx
  unsigned __int64 v119; // r12
  unsigned __int64 v120; // r13
  __int64 v121; // r8
  _QWORD *v122; // r9
  const char *v123; // rax
  int v124; // r11d
  __int64 v125; // r15
  unsigned __int64 v126; // rsi
  unsigned int v127; // r10d
  __int64 v128; // rdx
  unsigned __int64 v129; // rax
  __int64 v130; // rsi
  unsigned __int64 v131; // rcx
  __int64 v132; // r8
  unsigned __int64 v133; // rdx
  __int64 v134; // rax
  unsigned __int64 i26; // rax
  __int64 v136; // rbx
  unsigned int v137; // ecx
  unsigned int v138; // esi
  unsigned __int8 v139; // r12
  unsigned __int64 v140; // r13
  unsigned __int64 v141; // r15
  int v142; // eax
  int *v143; // rsi
  bool v144; // zf
  __int64 v145; // rax
  __int64 v146; // rbx
  unsigned __int16 v147; // dx
  _QWORD *v148; // rsi
  __int64 v149; // r8
  _QWORD *v150; // r9
  const char *v151; // rax
  int v152; // r10d
  __int64 v153; // r14
  unsigned __int64 v154; // rbx
  unsigned int v155; // r11d
  __int64 v156; // rax
  __int64 v157; // rbx
  unsigned __int128 v158; // rax
  unsigned int v159; // r8d
  unsigned __int64 v160; // rax
  __int64 v161; // rax
  unsigned __int64 i25; // rax
  unsigned int v163; // ebx
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // r8
  unsigned __int8 v167; // r12
  unsigned __int64 v168; // rsi
  unsigned __int64 v169; // r13
  unsigned __int64 v170; // r14
  int v171; // eax
  __int16 v172; // ax
  __int64 v173; // rcx
  int (__fastcall *v174)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 v175; // rcx
  void (*v176)(void); // rax
  int v177; // eax
  __int64 v178; // rcx
  unsigned int i24; // ebx
  __int64 v180; // rcx
  unsigned __int64 v181; // rdx
  __int64 v182; // r9
  __int64 v183; // r8
  unsigned __int64 v184; // rdx
  unsigned __int64 v185; // r9
  int v186; // eax
  int v187; // ecx
  unsigned __int64 v188; // rax
  unsigned __int128 v189; // rax
  void (*v190)(void); // rax
  int v191; // r14d
  __int64 v192; // rbx
  unsigned int v193; // ecx
  unsigned __int8 v194; // si
  volatile signed __int8 **v195; // r8
  volatile signed __int8 *v196; // rdx
  __int64 v197; // r12
  unsigned __int64 v198; // r13
  __int64 *v199; // rax
  __int64 v200; // r8
  __int64 v201; // r9
  __int64 *v202; // r15
  _BYTE *v203; // rbx
  char v204; // cl
  __int64 v205; // rdx
  int *v206; // rcx
  __int64 v207; // rcx
  __int64 v208; // rax
  bool v209; // zf
  int *v210; // rcx
  void (*v211)(void); // rax
  int v212; // r13d
  __int64 v213; // rbx
  unsigned int v214; // ecx
  unsigned __int8 v215; // si
  _QWORD **v216; // r15
  _QWORD *v217; // r14
  unsigned __int64 v218; // rbx
  int *v219; // rcx
  __int64 v220; // rcx
  unsigned __int64 *v221; // r12
  unsigned __int8 v222; // r15
  int v223; // r13d
  int *v224; // rsi
  unsigned __int8 v225; // r15
  __int64 v226; // rcx
  unsigned __int64 v227; // rbx
  _QWORD *v228; // rsi
  __int64 v229; // r8
  _QWORD *v230; // r9
  const char *v231; // rax
  int v232; // r11d
  unsigned __int64 v233; // rbx
  unsigned int v234; // r10d
  __int64 v235; // rax
  __int64 v236; // rbx
  unsigned __int128 v237; // rax
  unsigned int v238; // r8d
  unsigned __int64 v239; // rax
  __int64 v240; // rax
  unsigned __int64 i23; // rax
  unsigned int v242; // ebx
  __int64 v243; // rcx
  __int64 v244; // rdx
  __int64 v245; // r8
  unsigned __int8 v246; // r12
  unsigned __int64 v247; // rsi
  unsigned __int64 v248; // r13
  int v249; // eax
  __int64 v250; // rcx
  unsigned __int64 v251; // rsi
  _QWORD *v252; // r12
  void (*v253)(void); // rax
  __int64 v254; // rbx
  unsigned int v255; // ecx
  void (__fastcall *v256)(__int64, _QWORD); // rax
  unsigned __int64 *v257; // r9
  __int64 v258; // r13
  unsigned __int64 v259; // r8
  __int64 v260; // rdx
  __int64 v261; // rax
  _QWORD **v262; // r15
  _QWORD *v263; // rsi
  unsigned int v264; // r13d
  unsigned __int8 v265; // r12
  __int64 v266; // r14
  char *v267; // rbx
  __int64 v268; // rcx
  __int64 v269; // r8
  int *v270; // rcx
  _QWORD **v271; // r10
  _QWORD *i7; // r9
  int v273; // r12d
  __int64 v274; // r13
  __int64 v275; // rbx
  void (*v276)(void); // rax
  unsigned int v277; // ecx
  volatile signed __int8 **v278; // r8
  volatile signed __int8 *v279; // rdx
  _QWORD **v280; // r15
  _QWORD *v281; // rsi
  __int64 v282; // rax
  int *v283; // r13
  char *v284; // rcx
  __int64 v285; // rdx
  __int64 v286; // rbx
  _QWORD **v287; // r15
  __int64 (*v288)(void); // rax
  __int64 v289; // rcx
  __int64 v290; // rdx
  unsigned int v291; // r13d
  unsigned int *v292; // rcx
  __int64 v293; // r12
  _QWORD *v294; // rax
  unsigned __int64 v295; // rax
  __int64 v296; // rcx
  int v297; // ebx
  unsigned __int64 v298; // rax
  unsigned __int128 v299; // rax
  __int64 v300; // r8
  unsigned __int64 v301; // rsi
  __int64 v302; // rax
  __int64 v303; // r11
  int v304; // r10d
  _QWORD *v305; // r9
  unsigned __int64 v306; // r8
  unsigned __int64 v307; // rax
  unsigned __int128 v308; // rax
  unsigned __int64 v309; // rax
  unsigned __int128 v310; // rax
  unsigned __int64 v311; // rdx
  unsigned int v312; // ebx
  _QWORD *v313; // r8
  unsigned __int64 v314; // rax
  unsigned __int128 v315; // rax
  unsigned __int64 v316; // rax
  unsigned __int128 v317; // rax
  unsigned __int64 v318; // rdx
  _QWORD *v319; // rbx
  __int64 v320; // rsi
  __int64 v321; // rax
  unsigned __int64 v322; // rsi
  unsigned __int64 v323; // r15
  unsigned __int64 v324; // rbx
  int v325; // edx
  int v326; // r8d
  int v327; // ecx
  int *v328; // rcx
  unsigned __int64 v329; // rax
  unsigned __int128 v330; // rax
  int v331; // ecx
  int v332; // ecx
  int v333; // ecx
  int v334; // ecx
  int v335; // ecx
  char *v336; // rbx
  int i11; // r13d
  unsigned int v338; // esi
  _QWORD *v339; // rcx
  int v340; // edx
  __int64 v341; // r8
  char v342; // al
  __int64 v343; // rax
  __int64 v344; // rcx
  __int64 (__fastcall *v345)(_QWORD); // rax
  char *v346; // r12
  char *v347; // rbx
  int v348; // r15d
  __int64 v349; // rsi
  _QWORD *v350; // rcx
  int v351; // edx
  __int64 v352; // r8
  char v353; // al
  __int64 v354; // rax
  __int64 v355; // rax
  __int64 (__fastcall *v356)(unsigned __int64); // rax
  _BYTE *v357; // rbx
  __int64 *v358; // rax
  __int64 v359; // rsi
  int *v360; // rcx
  __int64 v361; // rax
  __int64 v362; // rax
  __int64 v363; // rax
  __int64 (__fastcall *v364)(__int64, char *); // rax
  __int64 v365; // rax
  ULONG_PTR v366; // r12
  unsigned int v367; // r15d
  unsigned __int64 v368; // r13
  int v369; // ecx
  int v370; // ecx
  int *v371; // rax
  __int64 v372; // r9
  __int64 v373; // rdx
  int v374; // r10d
  unsigned int v375; // r11d
  __int64 v376; // rsi
  int *v377; // r8
  __int64 v378; // r9
  int v379; // ecx
  int v380; // ecx
  int v381; // ecx
  int v382; // ecx
  __int64 v383; // rax
  int v384; // eax
  unsigned __int64 v385; // rcx
  __int64 v386; // r11
  unsigned int v387; // eax
  __int64 v388; // rdx
  int v389; // eax
  __int64 (__fastcall *v390)(ULONG_PTR, __int64, _QWORD, unsigned int *); // rax
  __int64 v391; // rdx
  __int64 (__fastcall *v392)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 v393; // rax
  __int64 v394; // rdx
  __int64 (__fastcall *v395)(ULONG_PTR, __int64, __int64, unsigned int *); // rax
  __int64 (__fastcall *v396)(ULONG_PTR); // rax
  __int64 v397; // rsi
  __int64 v398; // rax
  int v399; // r8d
  int v400; // r9d
  unsigned int v401; // eax
  __int64 v402; // rsi
  int v403; // edx
  unsigned int v404; // ecx
  __int64 v405; // r9
  _QWORD *v406; // rax
  int v407; // r8d
  unsigned __int64 v408; // rdx
  int v409; // ebx
  int v410; // ecx
  unsigned __int64 v411; // r15
  ULONG_PTR *v412; // r13
  unsigned int *v413; // rdi
  __int64 v414; // r12
  int v415; // ecx
  _QWORD *v416; // r14
  __int64 v417; // rdx
  _QWORD *v418; // rax
  _QWORD *v419; // r10
  const char *v420; // rax
  int v421; // ebx
  __int64 v422; // r11
  unsigned __int64 v423; // r8
  unsigned int v424; // r9d
  __int64 v425; // rdx
  __int64 v426; // rax
  __int64 v427; // r8
  __int64 v428; // rax
  unsigned int v429; // edx
  unsigned __int64 v430; // r9
  unsigned __int64 i13; // rax
  _DWORD *v432; // rbx
  unsigned int v433; // r13d
  unsigned int v434; // r9d
  _QWORD *v435; // rsi
  int *v436; // r12
  int v437; // ecx
  _QWORD *v438; // rax
  __int64 v439; // rdx
  _QWORD *v440; // r10
  const char *v441; // rax
  int v442; // r14d
  __int64 v443; // r15
  unsigned __int64 v444; // rcx
  __int64 v445; // r8
  unsigned int v446; // r11d
  __int64 v447; // rax
  __int64 v448; // r8
  unsigned __int128 v449; // rax
  unsigned __int64 v450; // r9
  unsigned __int64 v451; // rax
  __int64 v452; // rax
  unsigned __int64 i14; // rax
  _DWORD *v454; // rdx
  __int64 v455; // r15
  unsigned int v456; // eax
  __int64 v457; // rsi
  int v458; // edx
  unsigned int v459; // ecx
  __int64 v460; // r9
  int v461; // r8d
  unsigned __int64 v462; // rax
  int v463; // ebx
  int v464; // ecx
  __int64 v465; // r15
  _QWORD *v466; // rax
  int v467; // ecx
  __int64 v468; // rdx
  const char *v469; // r12
  int v470; // r11d
  __int64 v471; // rbx
  const char *v472; // rax
  unsigned int v473; // r10d
  __int64 v474; // rdx
  __int64 v475; // rax
  __int64 v476; // r8
  unsigned __int64 v477; // rcx
  unsigned int v478; // edx
  unsigned __int64 v479; // r10
  __int64 v480; // rax
  unsigned __int64 i15; // rax
  __int64 v482; // rdx
  _DWORD *v483; // rsi
  ULONG_PTR v484; // r15
  __int64 v485; // rax
  __int64 v486; // rcx
  unsigned __int64 v487; // rcx
  _QWORD *v488; // rax
  _QWORD *v489; // rax
  ULONG_PTR v490; // rsi
  __int64 v491; // rax
  unsigned __int16 v492; // r15
  unsigned int v493; // ecx
  unsigned int v494; // r10d
  unsigned int *v495; // r12
  __int64 v496; // r11
  _DWORD *v497; // rdx
  __int64 v498; // r9
  unsigned int v499; // r13d
  __int64 v500; // r8
  unsigned int v501; // r13d
  unsigned int v502; // eax
  __int64 v503; // rax
  unsigned int v504; // r14d
  unsigned int v505; // r15d
  unsigned int *v506; // rax
  unsigned int *v507; // rsi
  ULONG_PTR v508; // r8
  unsigned int *v509; // rax
  unsigned int v510; // eax
  int v511; // r9d
  __int64 v512; // r13
  int v513; // ecx
  __int64 v514; // rsi
  unsigned int v515; // eax
  _BYTE *v516; // r12
  int v517; // edx
  unsigned int v518; // ecx
  __int64 v519; // r9
  int v520; // r8d
  unsigned __int64 v521; // rax
  int v522; // ebx
  int v523; // ecx
  _BYTE *v524; // rdx
  int v525; // ecx
  _QWORD *v526; // rax
  __int64 v527; // r8
  unsigned __int64 v528; // rax
  unsigned __int64 v529; // rcx
  unsigned __int64 i16; // rax
  unsigned int v531; // r15d
  __int64 v532; // rax
  unsigned int *v533; // r9
  unsigned __int64 v534; // r8
  __int64 v535; // rcx
  __int64 v536; // rdx
  _DWORD *v537; // rax
  __int64 v538; // rcx
  unsigned __int8 *v539; // rbx
  int v540; // r11d
  int v541; // ecx
  __int16 v542; // ax
  int v543; // r10d
  unsigned __int8 *v544; // r8
  unsigned __int8 *v545; // r9
  __int64 v546; // rdx
  __int64 v547; // rax
  __int64 *v548; // r9
  unsigned int v549; // r8d
  __int64 *v550; // r10
  __int64 v551; // rcx
  __int64 v552; // rax
  __int64 v553; // rdx
  __int64 v554; // rax
  unsigned __int8 *v555; // r8
  int v556; // r10d
  unsigned __int8 *v557; // r9
  __int64 v558; // rdx
  __int64 v559; // rax
  unsigned __int8 *v560; // r8
  int v561; // r10d
  unsigned __int8 *v562; // r9
  __int64 v563; // rdx
  __int64 v564; // rax
  int v565; // ecx
  ULONG_PTR v566; // rdx
  unsigned int v567; // ecx
  unsigned int v568; // esi
  unsigned int *v569; // r8
  unsigned int v570; // ecx
  unsigned int v571; // r10d
  unsigned int v572; // r12d
  unsigned int v573; // r13d
  unsigned __int64 *v574; // r8
  __int64 v575; // rax
  unsigned int v576; // r9d
  unsigned __int64 v577; // rbx
  unsigned __int64 v578; // r11
  unsigned int *v579; // rdx
  __int64 v580; // rax
  _QWORD *v581; // r10
  int v582; // esi
  unsigned __int64 v583; // r14
  const char *v584; // rax
  unsigned int v585; // r11d
  unsigned __int64 v586; // r8
  __int64 v587; // rax
  __int64 v588; // r8
  unsigned __int128 v589; // rax
  unsigned int v590; // r9d
  unsigned __int64 v591; // rax
  __int64 v592; // rax
  unsigned __int64 i17; // rax
  bool v594; // cc
  int v595; // r12d
  unsigned int *v596; // rax
  char v597; // r8
  __int64 v598; // rbx
  __int64 v599; // r14
  __int64 v600; // rcx
  ULONG_PTR v601; // rdx
  ULONG_PTR *v602; // r8
  unsigned int v603; // r9d
  unsigned __int64 v604; // rsi
  unsigned int v605; // r10d
  unsigned int *v606; // rdx
  ULONG_PTR v607; // r11
  _QWORD *v608; // r10
  int v609; // r14d
  __int64 v610; // rbx
  const char *v611; // rax
  unsigned __int64 v612; // r8
  unsigned int v613; // r11d
  __int64 v614; // rdx
  __int64 v615; // rax
  __int64 v616; // r8
  unsigned __int64 v617; // rcx
  unsigned int v618; // r9d
  unsigned __int64 v619; // rdx
  __int64 v620; // rax
  unsigned __int64 i18; // rax
  char *v622; // rax
  unsigned int v623; // r15d
  unsigned __int64 v624; // r14
  ULONG_PTR v625; // rbx
  unsigned int *v626; // rdx
  unsigned __int64 *v627; // r8
  __int64 v628; // rax
  unsigned int v629; // r9d
  unsigned __int64 v630; // rbx
  unsigned int v631; // r10d
  unsigned __int64 v632; // r11
  _QWORD *v633; // r10
  const char *v634; // rax
  int v635; // r14d
  __int64 v636; // rsi
  unsigned __int64 v637; // r8
  unsigned int v638; // r11d
  __int64 v639; // rdx
  __int64 v640; // rax
  __int64 v641; // r8
  unsigned __int64 v642; // rcx
  unsigned int v643; // r9d
  unsigned __int64 v644; // rdx
  __int64 v645; // rax
  unsigned __int64 i19; // rax
  __int64 v647; // rcx
  char *v648; // rax
  _BYTE *v649; // rax
  char *v650; // rdx
  char *v651; // rbx
  __int64 v652; // r12
  __int64 v653; // rdx
  __int64 v654; // r8
  __int64 v655; // rsi
  __int64 v656; // r8
  _QWORD *v657; // rcx
  int v658; // edx
  __int64 v659; // r8
  char v660; // al
  __int64 v661; // rax
  __int64 v662; // rax
  char *v663; // rbx
  __int64 i12; // rsi
  _QWORD *v665; // rcx
  int v666; // edx
  __int64 v667; // r8
  char v668; // al
  __int64 v669; // rax
  __int64 v670; // rax
  char *v671; // rbx
  _QWORD *v672; // rcx
  int v673; // edx
  __int64 v674; // r8
  char v675; // al
  __int64 v676; // rax
  __int64 v677; // rax
  __int64 v678; // rsi
  int v679; // ebx
  __int64 v680; // rax
  __int64 v681; // rdx
  unsigned __int64 v682; // rbx
  __int64 v683; // rcx
  unsigned __int64 v684; // r8
  __int64 v685; // rdx
  __int64 v686; // rsi
  unsigned __int64 v687; // rax
  __int64 v688; // rcx
  unsigned __int64 v689; // rbx
  unsigned __int64 v690; // rcx
  unsigned int v691; // ecx
  _QWORD *v692; // rsi
  __int64 v693; // r8
  _QWORD *v694; // r9
  const char *v695; // rax
  int v696; // r11d
  unsigned __int64 v697; // rbx
  unsigned int v698; // r10d
  __int64 v699; // rdx
  __int64 v700; // rax
  __int64 v701; // rbx
  unsigned __int128 v702; // rax
  unsigned int v703; // r8d
  unsigned __int64 v704; // rdx
  __int64 v705; // rax
  unsigned __int64 i6; // rax
  unsigned int v707; // ebx
  __int64 v708; // rcx
  __int64 v709; // rdx
  __int64 v710; // r8
  unsigned __int8 v711; // r15
  unsigned __int64 v712; // rsi
  __int64 v713; // r13
  unsigned __int64 v714; // r12
  int v715; // eax
  __int64 v716; // r8
  unsigned int v717; // r8d
  __int64 *v718; // r9
  unsigned __int8 *v719; // r10
  __int64 v720; // rcx
  __int64 v721; // rax
  __int64 v722; // rdx
  __int64 v723; // rax
  int v724; // eax
  __int64 v725; // rcx
  __int64 v726; // rdx
  __int64 v727; // rcx
  __int64 v728; // r8
  unsigned __int64 v729; // rbx
  __int64 v730; // r12
  unsigned __int64 v731; // r15
  unsigned __int64 v732; // rsi
  int v733; // eax
  __int64 v734; // r8
  __int16 v735; // ax
  __int64 v736; // rcx
  int (__fastcall *v737)(_WORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _QWORD, __int64 *); // rax
  __int64 (*v738)(void); // rax
  __int64 v739; // rax
  __int64 (*v740)(void); // rax
  __int64 v741; // rax
  unsigned int v742; // r10d
  unsigned __int8 v743; // dl
  __int64 v744; // r15
  unsigned __int64 v745; // r9
  _QWORD *v746; // rsi
  __int64 v747; // r9
  _QWORD *v748; // r10
  const char *v749; // rax
  int v750; // ebx
  __int64 v751; // r14
  unsigned __int64 v752; // r8
  unsigned int v753; // r11d
  __int64 v754; // rax
  __int64 v755; // r8
  unsigned __int128 v756; // rax
  unsigned int v757; // r9d
  unsigned __int64 v758; // rax
  __int64 v759; // rax
  unsigned __int64 i2; // rax
  unsigned int v761; // r10d
  const char *v762; // rsi
  unsigned __int8 v763; // dl
  unsigned int v764; // r8d
  unsigned __int64 v765; // rcx
  const char *v766; // r9
  int v767; // ebx
  const char *v768; // rax
  const char *v769; // rcx
  unsigned int v770; // r11d
  unsigned __int64 v771; // r8
  __int64 v772; // rdx
  __int64 v773; // rax
  __int64 v774; // r8
  unsigned __int64 v775; // rcx
  unsigned int v776; // r10d
  unsigned __int64 v777; // rdx
  __int64 v778; // rax
  unsigned __int64 i3; // rax
  __int64 v780; // rax
  _QWORD *v781; // rcx
  int v782; // edx
  __int64 v783; // r8
  char v784; // al
  __int64 v785; // rax
  __int64 v786; // rcx
  _QWORD *v787; // rsi
  _QWORD *v788; // r9
  int v789; // r11d
  const char *v790; // rax
  __int64 v791; // r14
  unsigned __int64 v792; // rbx
  unsigned int v793; // r10d
  __int64 v794; // rax
  __int64 v795; // rbx
  unsigned __int64 v796; // rcx
  unsigned int v797; // r8d
  unsigned __int64 v798; // rax
  __int64 v799; // rax
  unsigned __int64 i4; // rax
  unsigned int v801; // ebx
  __int64 v802; // rcx
  __int64 v803; // rdx
  __int64 v804; // r8
  unsigned __int8 v805; // r12
  unsigned __int64 v806; // rsi
  unsigned __int64 v807; // r13
  unsigned __int64 v808; // r14
  int v809; // eax
  unsigned int v810; // r9d
  _QWORD *v811; // r10
  int v812; // ebx
  const char *v813; // rax
  __int64 v814; // rsi
  unsigned __int64 v815; // rcx
  unsigned __int64 v816; // r8
  unsigned int v817; // r11d
  __int64 v818; // rdx
  __int64 v819; // rax
  __int64 v820; // r8
  unsigned __int64 v821; // rcx
  unsigned int v822; // r9d
  unsigned __int64 v823; // rdx
  __int64 v824; // rax
  unsigned __int64 i5; // rax
  int v826; // eax
  __int64 v827; // rcx
  unsigned __int64 v828; // rcx
  unsigned int v829; // r8d
  const char *v830; // rsi
  __int64 v831; // r8
  __int64 v832; // r9
  const char *v833; // rax
  int v834; // r10d
  __int64 j; // r14
  unsigned __int64 v836; // rbx
  unsigned int v837; // r11d
  __int64 v838; // rax
  __int64 v839; // rbx
  unsigned __int128 v840; // rax
  char v841; // r10
  __int64 v842; // r8
  unsigned __int64 v843; // rax
  __int64 v844; // rax
  unsigned __int64 k; // rax
  unsigned int v846; // ebx
  __int64 v847; // rcx
  __int64 v848; // rdx
  unsigned __int8 v849; // r12
  unsigned __int64 v850; // rsi
  unsigned __int64 v851; // r13
  unsigned __int64 v852; // r14
  int v853; // eax
  int v854; // eax
  __int64 v855; // rcx
  __int64 v856; // rcx
  unsigned __int8 v857; // r14
  __int64 v858; // rdx
  unsigned int *v859; // rcx
  unsigned int *v860; // rbx
  char v861; // r15
  unsigned __int64 v862; // r12
  __int64 v863; // r8
  __int64 *v864; // r9
  unsigned int *v865; // r10
  __int64 v866; // rcx
  __int64 v867; // rax
  __int64 v868; // rax
  __int64 v869; // rcx
  unsigned __int64 v870; // rdx
  unsigned int *v871; // rcx
  unsigned int *v872; // rbx
  unsigned __int64 v873; // rsi
  unsigned __int64 v874; // rcx
  unsigned __int64 v875; // rax
  unsigned int v876; // edx
  unsigned int v877; // ecx
  int v878; // edx
  unsigned __int64 v879; // rbx
  unsigned __int64 v880; // rsi
  _QWORD *v881; // rsi
  __int64 v882; // r8
  _QWORD *v883; // r9
  const char *v884; // rax
  int v885; // r11d
  __int64 v886; // r14
  unsigned __int64 v887; // rbx
  unsigned int v888; // r10d
  __int64 v889; // rdx
  __int64 v890; // rax
  __int64 v891; // rbx
  unsigned __int64 v892; // rcx
  unsigned int v893; // r8d
  unsigned __int64 v894; // rdx
  __int64 v895; // rax
  unsigned __int64 m; // rax
  unsigned int v897; // edx
  unsigned int v898; // ebx
  __int64 v899; // rcx
  __int64 v900; // r8
  unsigned __int8 v901; // r15
  unsigned __int64 v902; // rsi
  __int64 v903; // r13
  unsigned __int64 v904; // r12
  unsigned __int64 v905; // r14
  int v906; // eax
  int v907; // eax
  __int64 v908; // rbx
  __int64 v909; // rcx
  __int64 v910; // rdx
  __int64 v911; // rax
  int v912; // eax
  __int64 v913; // rcx
  __int64 v914; // rcx
  __int64 v915; // rdx
  __int64 v916; // rax
  int v917; // eax
  __int64 v918; // rcx
  int v919; // eax
  __int64 v920; // rcx
  __int64 v921; // rax
  __int64 v922; // rcx
  _QWORD *v923; // rsi
  __int64 v924; // r8
  _QWORD *v925; // r9
  const char *v926; // rax
  int v927; // r11d
  __int64 v928; // r14
  unsigned __int64 v929; // rbx
  unsigned int v930; // r10d
  __int64 v931; // rax
  __int64 v932; // rbx
  unsigned __int64 v933; // rcx
  unsigned int v934; // r8d
  unsigned __int64 v935; // rax
  __int64 v936; // rax
  unsigned __int64 n; // rax
  unsigned int v938; // ebx
  __int64 v939; // rcx
  __int64 v940; // rdx
  __int64 v941; // r8
  unsigned __int8 v942; // r12
  unsigned __int64 v943; // rsi
  unsigned __int64 v944; // r13
  int v945; // eax
  int v946; // eax
  __int64 v947; // rbx
  __int64 (__fastcall *v948)(_QWORD); // rax
  unsigned int v949; // esi
  __int64 v950; // rax
  unsigned __int8 v951; // bl
  char v952; // si
  char v953; // r13
  char *v954; // r12
  __int64 v955; // r12
  unsigned __int64 v956; // rbx
  char *v957; // rsi
  unsigned __int64 *v958; // rsi
  unsigned __int64 v959; // rcx
  unsigned __int64 *v960; // rbx
  unsigned __int8 v961; // si
  __int64 v962; // r13
  __int64 v963; // rdx
  unsigned __int64 v964; // r12
  unsigned __int64 v965; // rcx
  _QWORD *v966; // rcx
  int v967; // edx
  __int64 v968; // r8
  char v969; // al
  unsigned __int8 v970; // bl
  char v971; // si
  char v972; // r13
  char *v973; // r12
  __int64 v974; // r12
  unsigned __int64 v975; // rbx
  char *v976; // rsi
  unsigned __int64 v977; // rcx
  unsigned __int64 *v978; // rbx
  unsigned __int8 v979; // si
  __int64 v980; // r13
  __int64 v981; // rdx
  unsigned __int64 v982; // r12
  unsigned __int64 v983; // rcx
  _QWORD *v984; // rcx
  int v985; // edx
  __int64 v986; // r8
  char v987; // al
  __int64 (__fastcall *v988)(__int64); // rax
  __int64 v989; // r15
  __int64 v990; // r12
  unsigned __int8 v991; // bl
  unsigned __int8 v992; // r13
  int *v993; // r14
  char v994; // si
  unsigned __int64 v995; // rbx
  char v996; // al
  int *v997; // rsi
  char v998; // al
  unsigned __int64 *v999; // rsi
  unsigned __int64 v1000; // rcx
  unsigned __int64 *v1001; // rbx
  __int64 v1002; // r15
  char *v1003; // rsi
  __int64 v1004; // rdx
  unsigned __int64 v1005; // rcx
  _QWORD *v1006; // rcx
  int v1007; // edx
  __int64 v1008; // r8
  char v1009; // al
  unsigned int v1010; // esi
  int v1011; // ecx
  __int64 v1012; // r8
  unsigned __int64 v1013; // rcx
  __int64 v1014; // r9
  unsigned int *v1015; // rbx
  unsigned __int64 v1016; // r10
  unsigned int v1017; // r11d
  unsigned __int64 v1018; // rdx
  unsigned int v1019; // eax
  unsigned __int64 v1020; // r12
  __int64 v1021; // r9
  _QWORD *v1022; // r10
  int v1023; // ebx
  const char *v1024; // rax
  unsigned __int64 v1025; // rsi
  __int64 v1026; // r15
  unsigned __int64 v1027; // r8
  unsigned int v1028; // r11d
  __int64 v1029; // rdx
  __int64 v1030; // rax
  __int64 v1031; // r8
  unsigned __int64 v1032; // rcx
  unsigned int v1033; // r9d
  unsigned __int64 v1034; // rdx
  __int64 v1035; // rax
  unsigned __int64 ii; // rax
  char v1037; // cl
  unsigned int v1038; // r13d
  unsigned __int8 v1039; // r14
  unsigned __int64 v1040; // rbx
  __int64 v1041; // r12
  unsigned __int64 v1042; // r15
  unsigned __int64 v1043; // rsi
  int v1044; // eax
  __int64 v1045; // rcx
  int *v1046; // rdx
  __int64 v1047; // r15
  __int64 v1048; // r8
  _QWORD *v1049; // r9
  int v1050; // r11d
  const char *v1051; // rax
  unsigned __int64 v1052; // rsi
  __int64 v1053; // r12
  unsigned __int64 v1054; // rbx
  unsigned int v1055; // r10d
  __int64 v1056; // rax
  __int64 v1057; // rbx
  unsigned __int128 v1058; // rax
  unsigned int v1059; // r8d
  unsigned __int64 v1060; // rax
  __int64 v1061; // rax
  unsigned __int64 jj; // rax
  unsigned int v1063; // ecx
  unsigned int v1064; // ebx
  __int64 v1065; // r8
  unsigned __int8 v1066; // r15
  unsigned __int64 v1067; // rsi
  __int64 v1068; // r13
  unsigned __int64 v1069; // r12
  int v1070; // eax
  __int64 v1071; // rax
  __int64 v1072; // rcx
  _QWORD *v1073; // rsi
  __int64 v1074; // r8
  _QWORD *v1075; // r9
  const char *v1076; // rax
  int v1077; // r11d
  unsigned __int64 v1078; // rbx
  unsigned int v1079; // r10d
  __int64 v1080; // rdx
  __int64 v1081; // rax
  __int64 v1082; // rbx
  unsigned __int64 v1083; // rcx
  __int64 v1084; // r8
  unsigned __int64 v1085; // rdx
  __int64 v1086; // rax
  unsigned __int64 i; // rax
  unsigned int v1088; // ebx
  __int64 v1089; // rcx
  __int64 v1090; // rdx
  unsigned __int8 v1091; // r12
  unsigned __int64 v1092; // rsi
  unsigned __int64 v1093; // r13
  int v1094; // eax
  int v1095; // r12d
  unsigned __int64 **v1096; // r15
  unsigned int v1097; // eax
  __int64 v1098; // r13
  char *v1099; // rbx
  __int64 v1100; // rsi
  _QWORD *v1101; // rcx
  int v1102; // edx
  __int64 v1103; // r8
  char v1104; // al
  __int64 v1105; // rax
  __int64 v1106; // rax
  int v1107; // eax
  __int64 v1108; // rcx
  volatile signed __int32 *v1109; // rcx
  _QWORD *v1110; // rsi
  __int64 v1111; // r8
  _QWORD *v1112; // r9
  const char *v1113; // rax
  int v1114; // r10d
  __int64 v1115; // r14
  unsigned __int64 v1116; // rbx
  unsigned int v1117; // r11d
  __int64 v1118; // rax
  __int64 v1119; // rbx
  unsigned __int128 v1120; // rax
  unsigned int v1121; // r8d
  unsigned __int64 v1122; // rax
  __int64 v1123; // rax
  unsigned __int64 kk; // rax
  unsigned int v1125; // ebx
  __int64 v1126; // rcx
  __int64 v1127; // rdx
  __int64 v1128; // r8
  unsigned __int8 v1129; // r12
  unsigned __int64 v1130; // rsi
  unsigned __int64 v1131; // r13
  unsigned __int64 v1132; // r14
  int v1133; // eax
  unsigned __int64 v1134; // rcx
  int v1135; // eax
  __int64 v1136; // rcx
  unsigned int v1137; // edx
  int v1138; // ecx
  unsigned __int64 v1139; // rbx
  unsigned __int64 v1140; // rsi
  _QWORD *v1141; // rsi
  __int64 v1142; // r8
  _QWORD *v1143; // r9
  const char *v1144; // rax
  int v1145; // r10d
  __int64 v1146; // r14
  unsigned __int64 v1147; // rbx
  unsigned int v1148; // r11d
  __int64 v1149; // rax
  __int64 v1150; // rbx
  unsigned __int128 v1151; // rax
  unsigned int v1152; // r8d
  unsigned __int64 v1153; // rax
  __int64 v1154; // rax
  unsigned __int64 mm; // rax
  __int64 v1156; // rdx
  __int64 v1157; // r8
  unsigned __int8 v1158; // r15
  unsigned __int64 v1159; // rsi
  __int64 v1160; // r13
  unsigned __int64 v1161; // r12
  int v1162; // eax
  __int64 v1163; // rsi
  __int64 v1164; // rcx
  int v1165; // eax
  __int64 v1166; // rcx
  unsigned int v1167; // ebx
  _QWORD *v1168; // rcx
  int v1169; // edx
  __int64 v1170; // r8
  char v1171; // al
  __int64 v1172; // rcx
  int v1173; // esi
  unsigned int v1174; // ecx
  char v1175; // bl
  volatile signed __int8 **v1176; // r8
  volatile signed __int8 *v1177; // rdx
  unsigned __int8 v1178; // bl
  int v1179; // ecx
  unsigned int v1180; // eax
  unsigned int v1181; // ecx
  int v1182; // edx
  unsigned __int64 v1183; // rbx
  unsigned __int64 v1184; // rsi
  _QWORD *v1185; // rsi
  __int64 v1186; // r8
  _QWORD *v1187; // r9
  const char *v1188; // rax
  int v1189; // r11d
  unsigned __int64 v1190; // rbx
  unsigned int v1191; // r10d
  __int64 v1192; // rdx
  __int64 v1193; // rax
  __int64 v1194; // rbx
  unsigned __int64 v1195; // rcx
  unsigned int v1196; // r8d
  unsigned __int64 v1197; // rdx
  __int64 v1198; // rax
  unsigned __int64 nn; // rax
  unsigned int v1200; // edx
  unsigned int v1201; // ebx
  __int64 v1202; // rcx
  __int64 v1203; // r8
  unsigned __int8 v1204; // r15
  unsigned __int64 v1205; // rsi
  __int64 v1206; // r13
  unsigned __int64 v1207; // r12
  int v1208; // eax
  __int64 v1209; // r13
  __int64 v1210; // rax
  unsigned int v1211; // r15d
  int v1212; // eax
  unsigned __int64 v1213; // rcx
  __int64 v1214; // rcx
  _QWORD *v1215; // rsi
  __int64 v1216; // r8
  _QWORD *v1217; // r9
  const char *v1218; // rax
  int v1219; // r11d
  unsigned __int64 v1220; // rbx
  unsigned int v1221; // r10d
  __int64 v1222; // rax
  __int64 v1223; // rbx
  unsigned __int64 v1224; // rcx
  unsigned int v1225; // r8d
  unsigned __int64 v1226; // rax
  __int64 v1227; // rax
  unsigned __int64 i1; // rax
  unsigned int v1229; // ebx
  __int64 v1230; // rcx
  __int64 v1231; // rdx
  __int64 v1232; // r8
  unsigned __int8 v1233; // r12
  unsigned __int64 v1234; // rsi
  unsigned __int64 v1235; // r13
  int v1236; // eax
  unsigned int v1237; // ecx
  unsigned int v1238; // r11d
  unsigned int v1239; // r12d
  int v1240; // ecx
  __int16 v1241; // ax
  char *v1242; // r8
  int v1243; // r10d
  unsigned __int8 *v1244; // r9
  __int64 v1245; // rdx
  __int64 v1246; // rax
  __int64 v1247; // r8
  __int64 v1248; // rax
  __int64 *v1249; // r9
  unsigned int v1250; // r8d
  __int64 *v1251; // r10
  __int64 v1252; // rcx
  __int64 v1253; // rax
  __int64 v1254; // rdx
  __int64 v1255; // rax
  unsigned __int8 *v1256; // r8
  int v1257; // r10d
  unsigned __int8 *v1258; // r9
  __int64 v1259; // rdx
  __int64 v1260; // rax
  unsigned __int8 *v1261; // r8
  int v1262; // r10d
  unsigned __int8 *v1263; // r9
  __int64 v1264; // rdx
  __int64 v1265; // rax
  int v1266; // eax
  BOOL v1267; // esi
  __int64 v1268; // rbx
  int v1269; // eax
  int *v1270; // rcx
  int v1271; // eax
  unsigned __int64 v1272; // rcx
  unsigned __int8 v1273; // bl
  unsigned int v1274; // edx
  int v1275; // ecx
  __int64 v1276; // rbx
  unsigned __int64 v1277; // rsi
  __int64 v1278; // rbx
  unsigned __int64 v1279; // rbx
  __int64 v1280; // rcx
  __int64 v1281; // rdx
  unsigned int *v1282; // rcx
  unsigned int *v1283; // rbx
  char v1284; // r15
  unsigned __int64 v1285; // r12
  __int64 v1286; // r8
  __int64 *v1287; // r9
  unsigned int *v1288; // r10
  __int64 v1289; // rcx
  __int64 v1290; // rax
  __int64 v1291; // rax
  int v1292; // ecx
  unsigned __int64 v1293; // rbx
  unsigned __int64 v1294; // rsi
  _QWORD *v1295; // r11
  __int64 v1296; // r8
  _QWORD *v1297; // r9
  const char *v1298; // rax
  int v1299; // esi
  __int64 v1300; // r14
  unsigned __int64 v1301; // rbx
  unsigned int v1302; // r10d
  __int64 v1303; // rdx
  __int64 v1304; // rax
  __int64 v1305; // rbx
  unsigned __int64 v1306; // rcx
  unsigned int v1307; // r8d
  unsigned __int64 v1308; // rdx
  __int64 v1309; // rax
  unsigned __int64 i20; // rax
  unsigned int v1311; // edx
  unsigned int v1312; // ebx
  __int64 v1313; // rcx
  __int64 v1314; // r8
  unsigned __int8 v1315; // r15
  unsigned __int64 v1316; // rsi
  __int64 v1317; // r13
  unsigned __int64 v1318; // r12
  int v1319; // eax
  __int64 v1320; // r8
  unsigned __int64 v1321; // rcx
  unsigned int *v1322; // rbx
  int *v1323; // r12
  unsigned int *v1324; // rsi
  unsigned __int64 v1325; // r15
  _QWORD *v1326; // r8
  int v1327; // r10d
  const char *v1328; // rax
  __int64 v1329; // r11
  unsigned __int64 v1330; // rcx
  unsigned __int64 v1331; // r13
  unsigned int v1332; // r9d
  __int64 v1333; // rdx
  __int64 v1334; // rax
  __int64 v1335; // r13
  unsigned __int64 v1336; // rcx
  unsigned int v1337; // edx
  unsigned __int64 v1338; // r9
  __int64 v1339; // rax
  unsigned __int64 i22; // rax
  int v1341; // eax
  __int64 v1342; // rcx
  __int64 v1343; // rax
  __int64 v1344; // rcx
  _QWORD *v1345; // rsi
  __int64 v1346; // r8
  _QWORD *v1347; // r9
  const char *v1348; // rax
  int v1349; // r11d
  __int64 v1350; // r14
  unsigned __int64 v1351; // rbx
  unsigned int v1352; // r10d
  __int64 v1353; // rdx
  __int64 v1354; // rax
  __int64 v1355; // rbx
  unsigned __int64 v1356; // rcx
  unsigned int v1357; // r8d
  unsigned __int64 v1358; // rdx
  __int64 v1359; // rax
  unsigned __int64 i21; // rax
  unsigned int v1361; // ebx
  __int64 v1362; // rcx
  __int64 v1363; // rdx
  __int64 v1364; // r8
  unsigned __int8 v1365; // r12
  unsigned __int64 v1366; // rsi
  unsigned __int64 v1367; // r13
  int v1368; // eax
  unsigned int v1369; // r13d
  _BYTE *v1370; // rbx
  char *v1371; // rsi
  char v1372; // cl
  volatile signed __int32 *v1373; // rcx
  struct _KPRCB *v1374; // rdx
  __int64 v1375; // r8
  int v1376; // ecx
  struct _KPRCB *v1377; // rax
  unsigned __int64 v1378; // rcx
  BOOL v1379; // r9d
  int *v1380; // rcx
  unsigned int v1381; // ecx
  __int64 v1382; // rdx
  unsigned __int64 v1383; // rbx
  __int64 v1384; // r12
  unsigned __int64 v1385; // r15
  unsigned __int64 v1386; // rsi
  int v1387; // eax
  bool v1388; // zf
  __int64 v1389; // rax
  __int64 v1390; // rcx
  __int64 v1391; // rdx
  unsigned int *v1392; // rcx
  unsigned int *v1393; // rbx
  char v1394; // r15
  unsigned __int64 v1395; // r12
  __int64 v1396; // r8
  __int64 *v1397; // r9
  unsigned int *v1398; // r10
  __int64 v1399; // rcx
  __int64 v1400; // rax
  __int64 v1401; // rax
  __int64 v1402; // r9
  _QWORD *v1403; // rbx
  int v1404; // r11d
  _QWORD *v1405; // r10
  const char *v1406; // rax
  __int64 v1407; // r8
  unsigned int v1408; // esi
  __int64 v1409; // rax
  __int64 v1410; // r8
  unsigned __int128 v1411; // rax
  unsigned int v1412; // r9d
  unsigned __int64 v1413; // rax
  __int64 v1414; // rax
  __int64 v1415; // rcx
  int v1416; // eax
  unsigned __int64 v1417; // rcx
  int v1418; // r10d
  int v1419; // r10d
  __int64 v1420; // r8
  unsigned int v1421; // ebx
  unsigned __int64 v1422; // rax
  unsigned int v1423; // esi
  unsigned __int64 v1424; // rax
  __int64 v1425; // rdx
  __int64 v1426; // r8
  int v1427; // ecx
  _QWORD *v1428; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v1430; // r8
  unsigned __int64 v1431; // rdx
  __int64 v1432; // r8
  unsigned __int64 v1433; // rdx
  _QWORD *v1434; // r14
  __int64 v1435; // rsi
  __int64 v1436; // rdx
  __int64 v1437; // r8
  int v1438; // ecx
  _QWORD *v1439; // rax
  unsigned __int64 v1440; // rcx
  unsigned __int16 Ldtr; // r15
  unsigned __int16 Tr; // ax
  unsigned __int64 v1443; // rdx
  __int64 v1444; // r9
  unsigned __int16 v1445; // r12
  __int64 v1446; // r11
  _QWORD *v1447; // r8
  const char *v1448; // rcx
  unsigned __int64 v1449; // rbx
  unsigned int v1450; // r10d
  __int64 v1451; // rdx
  __int64 v1452; // rax
  __int64 v1453; // rbx
  unsigned __int64 v1454; // rcx
  unsigned int v1455; // esi
  __int64 v1456; // rax
  unsigned __int64 i8; // rax
  unsigned int v1458; // ebx
  _QWORD *v1459; // rcx
  int v1460; // edx
  __int64 v1461; // r8
  char v1462; // al
  __int64 v1463; // rax
  int v1464; // eax
  __int64 v1465; // rcx
  __int64 v1466; // rdx
  void (__fastcall *v1467)(_BYTE *, __int64); // rax
  unsigned int v1468; // r10d
  __int64 v1469; // rcx
  __int64 v1470; // r8
  __int64 v1471; // rsi
  unsigned __int64 v1472; // r13
  __int64 v1473; // r12
  __int64 v1474; // r15
  unsigned __int8 v1475; // r14
  __int16 v1476; // r9
  int v1477; // eax
  __int64 v1478; // rcx
  _SLIST_ENTRY *v1479; // rbx
  _SLIST_ENTRY *v1480; // rdx
  __int64 v1481; // r15
  __int64 v1482; // rax
  __int64 v1483; // rax
  __int64 v1484; // r12
  __int64 v1485; // rax
  unsigned int *v1486; // rax
  __int64 v1487; // rcx
  unsigned __int64 v1488; // rbx
  unsigned __int64 v1489; // rdx
  struct _KPRCB *v1490; // r8
  _QWORD *v1491; // r8
  int v1492; // esi
  const char *v1493; // rax
  int v1494; // r9d
  __int64 v1495; // r11
  unsigned __int64 v1496; // rbx
  int v1497; // r10d
  __int64 v1498; // rax
  __int64 v1499; // rbx
  unsigned __int128 v1500; // rax
  int v1501; // edx
  int v1502; // r15d
  __int64 v1503; // rax
  __int64 v1504; // rax
  unsigned __int64 i9; // rax
  unsigned int *v1506; // rax
  __int64 v1507; // rax
  unsigned int v1508; // ebx
  _QWORD *v1509; // rdx
  int v1510; // r10d
  unsigned __int64 v1511; // rsi
  const char *v1512; // rax
  int v1513; // r8d
  __int64 v1514; // r9
  __int64 v1515; // rax
  unsigned __int64 i10; // rax
  unsigned int v1517; // esi
  int *v1518; // r8
  __int64 v1519; // rdx
  unsigned __int64 v1520; // rcx
  __int64 v1521; // rcx
  __int64 v1522; // rax
  __int64 v1523; // rdx
  __int64 v1524; // rbx
  __int64 v1525; // rdx
  __int64 v1526; // r8
  int v1527; // eax
  __int64 v1528; // rbx
  __int64 v1529; // rbx
  int v1530; // eax
  __int64 v1531; // r13
  unsigned __int64 v1532; // rbx
  unsigned __int64 v1533; // rdi
  _SLIST_ENTRY *v1534; // r14
  struct _KPRCB *v1535; // rdx
  unsigned __int64 v1536; // rsi
  __int64 v1537; // r15
  _SLIST_ENTRY *v1538; // rax
  PSLIST_ENTRY v1539; // r9
  unsigned __int64 v1540; // r12
  unsigned __int64 v1541; // r10
  unsigned __int64 v1542; // r14
  unsigned int v1543; // r8d
  _QWORD *v1544; // rdx
  unsigned __int64 v1545; // rcx
  unsigned __int64 v1546; // rax
  __int64 v1547; // rdi
  _QWORD *v1548; // rcx
  char *v1549; // r8
  int v1550; // r11d
  unsigned __int64 v1551; // rbx
  signed __int64 v1552; // r8
  unsigned int v1553; // ebx
  unsigned int v1554; // ebx
  __int64 v1555; // rdx
  __int64 v1556; // rcx
  __int64 v1557; // r8
  __int64 v1558; // r9
  unsigned __int8 CurrentIrql; // al
  unsigned int v1560; // ebx
  __int64 v1561; // rdx
  __int64 v1562; // rcx
  __int64 v1563; // r8
  __int64 v1564; // r9
  unsigned __int8 v1565; // al
  unsigned int v1566; // ebx
  __int64 v1567; // rdx
  __int64 v1568; // rcx
  __int64 v1569; // r8
  __int64 v1570; // r9
  unsigned __int8 v1571; // al
  int v1572; // ecx
  int v1573; // ecx
  int v1574; // ecx
  int v1575; // ecx
  int v1576; // ecx
  volatile signed __int32 *v1577; // rax
  unsigned int v1578; // ebx
  __int64 v1579; // rdx
  __int64 v1580; // rcx
  __int64 v1581; // r8
  __int64 v1582; // r9
  unsigned __int8 v1583; // al
  signed __int32 v1584[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v1585; // [rsp+28h] [rbp-D8h]
  __int64 *v1586; // [rsp+38h] [rbp-C8h]
  char *v1587; // [rsp+50h] [rbp-B0h]
  struct _SLIST_ENTRY *v1588; // [rsp+58h] [rbp-A8h]
  __int64 v1589; // [rsp+60h] [rbp-A0h]
  unsigned int v1590; // [rsp+68h] [rbp-98h]
  __int64 v1591; // [rsp+70h] [rbp-90h]
  __int64 v1592; // [rsp+78h] [rbp-88h]
  unsigned __int64 v1593; // [rsp+80h] [rbp-80h]
  unsigned __int64 v1594; // [rsp+88h] [rbp-78h]
  unsigned __int8 v1595; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int8 v1596; // [rsp+91h] [rbp-6Fh] BYREF
  char v1597[2]; // [rsp+92h] [rbp-6Eh] BYREF
  unsigned int v1598; // [rsp+94h] [rbp-6Ch]
  __int64 v1599; // [rsp+98h] [rbp-68h]
  char *v1600; // [rsp+A0h] [rbp-60h]
  unsigned int v1601; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v1602; // [rsp+ACh] [rbp-54h]
  __int64 v1603; // [rsp+B0h] [rbp-50h]
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp-48h]
  __int64 v1605; // [rsp+C0h] [rbp-40h] BYREF
  int v1606; // [rsp+C8h] [rbp-38h]
  int v1607; // [rsp+CCh] [rbp-34h]
  __int64 v1608; // [rsp+D0h] [rbp-30h]
  PSLIST_ENTRY v1609; // [rsp+D8h] [rbp-28h] BYREF
  unsigned int *v1610; // [rsp+E0h] [rbp-20h]
  _BYTE *v1611; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int v1612; // [rsp+F0h] [rbp-10h]
  PSLIST_ENTRY v1613; // [rsp+F8h] [rbp-8h]
  unsigned __int8 v1614; // [rsp+100h] [rbp+0h]
  unsigned __int8 v1615; // [rsp+101h] [rbp+1h]
  unsigned __int64 v1616; // [rsp+108h] [rbp+8h]
  _BYTE *v1617; // [rsp+110h] [rbp+10h] BYREF
  unsigned int v1618; // [rsp+118h] [rbp+18h]
  unsigned __int8 v1619; // [rsp+11Ch] [rbp+1Ch]
  _DWORD *v1620; // [rsp+120h] [rbp+20h]
  unsigned __int64 v1621; // [rsp+128h] [rbp+28h]
  _SLIST_ENTRY *v1622; // [rsp+130h] [rbp+30h]
  __int64 v1623; // [rsp+138h] [rbp+38h] BYREF
  PSLIST_ENTRY v1624; // [rsp+140h] [rbp+40h]
  __int64 v1625; // [rsp+148h] [rbp+48h]
  unsigned int v1626; // [rsp+150h] [rbp+50h] BYREF
  int v1627; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v1628; // [rsp+160h] [rbp+60h] BYREF
  int v1629; // [rsp+168h] [rbp+68h]
  _BYTE *v1630; // [rsp+170h] [rbp+70h]
  unsigned int v1631; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1632; // [rsp+17Ch] [rbp+7Ch] BYREF
  __int64 v1633; // [rsp+180h] [rbp+80h]
  int v1634; // [rsp+188h] [rbp+88h] BYREF
  __int64 v1635; // [rsp+190h] [rbp+90h] BYREF
  __int64 v1636; // [rsp+198h] [rbp+98h]
  _DWORD *v1637; // [rsp+1A0h] [rbp+A0h]
  int v1638; // [rsp+1A8h] [rbp+A8h]
  int v1639; // [rsp+1ACh] [rbp+ACh]
  int v1640; // [rsp+1B0h] [rbp+B0h]
  int v1641; // [rsp+1B4h] [rbp+B4h]
  int v1642; // [rsp+1B8h] [rbp+B8h]
  int v1643; // [rsp+1BCh] [rbp+BCh]
  int v1644; // [rsp+1C0h] [rbp+C0h]
  int v1645; // [rsp+1C4h] [rbp+C4h]
  int v1646; // [rsp+1C8h] [rbp+C8h]
  int v1647; // [rsp+1CCh] [rbp+CCh]
  int v1648; // [rsp+1D0h] [rbp+D0h]
  int v1649; // [rsp+1D4h] [rbp+D4h]
  unsigned int v1650; // [rsp+1D8h] [rbp+D8h]
  int v1651; // [rsp+1DCh] [rbp+DCh]
  int v1652; // [rsp+1E0h] [rbp+E0h]
  int v1653; // [rsp+1E4h] [rbp+E4h] BYREF
  _DWORD v1654[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v1655; // [rsp+1F0h] [rbp+F0h]
  __int64 v1656; // [rsp+1F8h] [rbp+F8h] BYREF
  int v1657; // [rsp+200h] [rbp+100h]
  int v1658; // [rsp+204h] [rbp+104h]
  _DWORD v1659[6]; // [rsp+208h] [rbp+108h] BYREF
  __int16 v1660; // [rsp+220h] [rbp+120h] BYREF
  _QWORD *v1661; // [rsp+222h] [rbp+122h]
  __int64 v1662; // [rsp+230h] [rbp+130h] BYREF
  __int64 v1663; // [rsp+238h] [rbp+138h] BYREF
  __int64 v1664; // [rsp+240h] [rbp+140h] BYREF
  __int64 v1665; // [rsp+248h] [rbp+148h] BYREF
  __int64 v1666; // [rsp+250h] [rbp+150h] BYREF
  __int64 v1667; // [rsp+258h] [rbp+158h] BYREF
  __int64 v1668; // [rsp+260h] [rbp+160h]
  __int64 v1669; // [rsp+268h] [rbp+168h]
  unsigned __int64 v1670; // [rsp+270h] [rbp+170h]
  __int128 v1671; // [rsp+278h] [rbp+178h]
  __int128 v1672; // [rsp+288h] [rbp+188h]
  __int16 v1673; // [rsp+298h] [rbp+198h] BYREF
  struct _KPRCB *v1674; // [rsp+29Ah] [rbp+19Ah]
  __int16 v1675; // [rsp+2A8h] [rbp+1A8h] BYREF
  __int64 v1676; // [rsp+2AAh] [rbp+1AAh]
  __int16 v1677; // [rsp+2B8h] [rbp+1B8h] BYREF
  __int64 v1678; // [rsp+2BAh] [rbp+1BAh]
  __int16 v1679; // [rsp+2C8h] [rbp+1C8h] BYREF
  __int64 v1680; // [rsp+2CAh] [rbp+1CAh]
  _BYTE *v1681; // [rsp+2D8h] [rbp+1D8h]
  __int64 v1682; // [rsp+2E0h] [rbp+1E0h] BYREF
  unsigned int v1683; // [rsp+2E8h] [rbp+1E8h]
  _WORD v1684[4]; // [rsp+2F0h] [rbp+1F0h] BYREF
  _BYTE *v1685; // [rsp+2F8h] [rbp+1F8h]
  __int64 v1686; // [rsp+300h] [rbp+200h] BYREF
  int v1687; // [rsp+308h] [rbp+208h] BYREF
  _DWORD *v1688; // [rsp+310h] [rbp+210h]
  _WORD v1689[4]; // [rsp+318h] [rbp+218h] BYREF
  _BYTE *v1690; // [rsp+320h] [rbp+220h]
  unsigned int v1691; // [rsp+328h] [rbp+228h]
  unsigned __int8 *v1692; // [rsp+330h] [rbp+230h]
  __int64 *v1693; // [rsp+338h] [rbp+238h]
  unsigned __int8 *v1694; // [rsp+340h] [rbp+240h]
  unsigned __int8 *v1695; // [rsp+348h] [rbp+248h]
  ULONG_PTR v1696; // [rsp+350h] [rbp+250h] BYREF
  __int64 v1697; // [rsp+358h] [rbp+258h]
  __int64 v1698; // [rsp+360h] [rbp+260h]
  __int64 v1699; // [rsp+368h] [rbp+268h]
  __int64 v1700; // [rsp+370h] [rbp+270h]
  __int64 v1701; // [rsp+378h] [rbp+278h]
  _BYTE v1702[16]; // [rsp+380h] [rbp+280h] BYREF
  _BYTE v1703[16]; // [rsp+390h] [rbp+290h] BYREF
  _BYTE v1704[16]; // [rsp+3A0h] [rbp+2A0h] BYREF
  __int64 v1705; // [rsp+3B0h] [rbp+2B0h] BYREF
  __int16 v1706; // [rsp+3B8h] [rbp+2B8h]
  __int16 v1707; // [rsp+3BAh] [rbp+2BAh]
  unsigned __int64 v1708; // [rsp+3D0h] [rbp+2D0h]
  int v1709; // [rsp+3D8h] [rbp+2D8h]
  unsigned int v1710; // [rsp+3DCh] [rbp+2DCh]
  unsigned __int64 v1711; // [rsp+3E0h] [rbp+2E0h]
  _BYTE v1712[16]; // [rsp+3E8h] [rbp+2E8h] BYREF
  char v1713[8]; // [rsp+3F8h] [rbp+2F8h] BYREF
  char v1714[8]; // [rsp+400h] [rbp+300h] BYREF
  __int64 v1715; // [rsp+408h] [rbp+308h]
  __int64 v1716; // [rsp+410h] [rbp+310h]
  __int64 v1717; // [rsp+418h] [rbp+318h]
  unsigned int *v1718; // [rsp+420h] [rbp+320h]
  __int64 v1719; // [rsp+428h] [rbp+328h]
  __int64 v1720; // [rsp+430h] [rbp+330h]
  __int64 v1721; // [rsp+438h] [rbp+338h]
  char v1722[8]; // [rsp+440h] [rbp+340h] BYREF
  char v1723[8]; // [rsp+448h] [rbp+348h] BYREF
  char v1724[8]; // [rsp+450h] [rbp+350h] BYREF
  __int64 v1725; // [rsp+458h] [rbp+358h]
  __int64 v1726; // [rsp+460h] [rbp+360h]
  __int64 v1727; // [rsp+468h] [rbp+368h]
  __int64 v1728; // [rsp+470h] [rbp+370h]
  __int64 v1729; // [rsp+478h] [rbp+378h]
  __int64 v1730; // [rsp+480h] [rbp+380h]
  __int64 v1731; // [rsp+488h] [rbp+388h]
  __int64 v1732; // [rsp+490h] [rbp+390h]
  __int64 v1733; // [rsp+498h] [rbp+398h]
  __int64 v1734; // [rsp+4A0h] [rbp+3A0h]
  __int64 v1735; // [rsp+4A8h] [rbp+3A8h]
  char v1736[8]; // [rsp+4B0h] [rbp+3B0h] BYREF
  __int64 v1737; // [rsp+4B8h] [rbp+3B8h]
  __int64 v1738; // [rsp+4C0h] [rbp+3C0h]
  __int64 v1739; // [rsp+4C8h] [rbp+3C8h]
  __int64 v1740; // [rsp+4D0h] [rbp+3D0h]
  unsigned __int64 v1741; // [rsp+4E0h] [rbp+3E0h]
  __int64 v1742; // [rsp+4E8h] [rbp+3E8h]
  __int64 v1743; // [rsp+4F0h] [rbp+3F0h]
  __int64 v1744; // [rsp+4F8h] [rbp+3F8h]
  unsigned __int64 v1745; // [rsp+500h] [rbp+400h]
  __int64 v1746; // [rsp+508h] [rbp+408h]
  unsigned __int64 v1747; // [rsp+510h] [rbp+410h]
  __int64 v1748; // [rsp+518h] [rbp+418h]
  unsigned __int64 v1749; // [rsp+520h] [rbp+420h]
  __int64 v1750; // [rsp+528h] [rbp+428h]
  __int64 v1751; // [rsp+530h] [rbp+430h]
  __int64 v1752; // [rsp+538h] [rbp+438h]
  __int64 v1753; // [rsp+540h] [rbp+440h]
  __int64 v1754; // [rsp+548h] [rbp+448h]
  unsigned __int64 v1755; // [rsp+550h] [rbp+450h]
  unsigned __int64 v1756; // [rsp+558h] [rbp+458h]
  __int64 v1757; // [rsp+560h] [rbp+460h]
  __int64 v1758; // [rsp+568h] [rbp+468h]
  __int64 v1759; // [rsp+570h] [rbp+470h]
  __int64 v1760; // [rsp+578h] [rbp+478h]
  __int64 v1761; // [rsp+580h] [rbp+480h]
  __int64 v1762; // [rsp+588h] [rbp+488h]
  __int64 v1763; // [rsp+590h] [rbp+490h]
  __int64 v1764; // [rsp+598h] [rbp+498h]
  _BYTE v1765[16]; // [rsp+5A0h] [rbp+4A0h] BYREF
  _BYTE v1766[16]; // [rsp+5B0h] [rbp+4B0h] BYREF
  _BYTE v1767[16]; // [rsp+5C0h] [rbp+4C0h] BYREF
  unsigned __int64 v1768; // [rsp+5D0h] [rbp+4D0h]
  _BYTE v1769[16]; // [rsp+5D8h] [rbp+4D8h] BYREF
  _BYTE v1770[16]; // [rsp+5E8h] [rbp+4E8h] BYREF
  _BYTE v1771[16]; // [rsp+5F8h] [rbp+4F8h] BYREF
  _BYTE v1772[16]; // [rsp+608h] [rbp+508h] BYREF
  _BYTE v1773[16]; // [rsp+618h] [rbp+518h] BYREF
  _BYTE v1774[16]; // [rsp+628h] [rbp+528h] BYREF
  _BYTE v1775[16]; // [rsp+638h] [rbp+538h] BYREF
  _BYTE v1776[16]; // [rsp+648h] [rbp+548h] BYREF
  _BYTE v1777[16]; // [rsp+658h] [rbp+558h] BYREF
  _BYTE v1778[16]; // [rsp+668h] [rbp+568h] BYREF
  __int64 v1779; // [rsp+678h] [rbp+578h]
  _BYTE v1780[24]; // [rsp+680h] [rbp+580h] BYREF
  char v1781[8]; // [rsp+698h] [rbp+598h] BYREF
  ULONG_PTR v1782; // [rsp+6A0h] [rbp+5A0h]
  unsigned int v1783; // [rsp+6ACh] [rbp+5ACh]
  __int64 v1784; // [rsp+6B0h] [rbp+5B0h]
  __int64 v1785; // [rsp+6B8h] [rbp+5B8h]
  __int64 v1786; // [rsp+6C0h] [rbp+5C0h]
  _BYTE v1787[16]; // [rsp+6C8h] [rbp+5C8h] BYREF
  char v1788[16]; // [rsp+6D8h] [rbp+5D8h] BYREF
  char v1789[16]; // [rsp+6E8h] [rbp+5E8h] BYREF
  char v1790[8]; // [rsp+6F8h] [rbp+5F8h] BYREF
  unsigned __int64 v1791; // [rsp+700h] [rbp+600h]
  _BYTE v1792[24]; // [rsp+710h] [rbp+610h] BYREF
  _BYTE v1793[48]; // [rsp+728h] [rbp+628h] BYREF
  char v1794[8]; // [rsp+758h] [rbp+658h] BYREF
  unsigned __int64 v1795; // [rsp+760h] [rbp+660h]
  _BYTE v1796[96]; // [rsp+770h] [rbp+670h] BYREF
  int v1798; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int64 v1799; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1800; // [rsp+7F0h] [rbp+6F0h]
  BOOL v1801; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int8 v1802; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1803; // [rsp+7F0h] [rbp+6F0h]
  unsigned int v1804; // [rsp+7F0h] [rbp+6F0h]
  int v1805; // [rsp+7F0h] [rbp+6F0h]
  int v1806; // [rsp+7F0h] [rbp+6F0h]
  unsigned int v1807; // [rsp+7F0h] [rbp+6F0h]
  int v1808; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int16 v1809; // [rsp+7F0h] [rbp+6F0h]
  int v1810; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1811; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1812; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1813; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int8 v1814; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int8 v1815; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1816; // [rsp+7F0h] [rbp+6F0h]
  unsigned int v1817; // [rsp+7F0h] [rbp+6F0h]
  int *v1818; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1819; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int64 **v1820; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1821; // [rsp+7F0h] [rbp+6F0h]
  BOOL v1822; // [rsp+7F0h] [rbp+6F0h]
  __int64 v1823; // [rsp+7F0h] [rbp+6F0h]
  unsigned __int16 v1824; // [rsp+7F0h] [rbp+6F0h]
  __int16 v1825; // [rsp+7F0h] [rbp+6F0h]
  char v1826; // [rsp+7F8h] [rbp+6F8h] BYREF

  v2 = a2;
  if ( !__32 )
    KeBugCheck(0x33u);
  v4 = *(_QWORD *)&MaxDataSize;
  _InterlockedOr(v1584, 0);
  if ( !v4 )
    return 3221225635LL;
  if ( *(_QWORD *)a1 < 0x40uLL
    || *(_QWORD *)(a1 + 8) != (unsigned int)KiGetNtDdiVersion()
    || (*(_DWORD *)(a1 + 20) & 0x7FFFFFFE) != 0
    || *(_QWORD *)(a1 + 24)
    || *(_QWORD *)(a1 + 32)
    || *(_QWORD *)(a1 + 40)
    || *(_QWORD *)(v2 + 16)
    || *(_QWORD *)(v2 + 24)
    || *(_QWORD *)(v2 + 32)
    || *(_DWORD *)(v2 + 4) >= *(_DWORD *)(v4 + 2060) )
  {
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_QWORD *)(a1 + 56);
  v8 = *(_DWORD *)(a1 + 20) & 1;
  v9 = *(unsigned int *)(a1 + 52);
  if ( v6 )
  {
    if ( v6 <= 0 )
      return 3221225485LL;
    if ( v6 > 4 )
    {
      if ( __PAIR64__(v9, v6) == 5 )
      {
        if ( (unsigned __int8)ObGetCurrentIrql(v9, 16LL, v7, 4294967294LL) || KeAreApcsDisabled() )
        {
          v1554 = KeAreAllApcsDisabled();
          CurrentIrql = ObGetCurrentIrql(v1556, v1555, v1557, v1558);
          KeBugCheckEx(0xC8u, ((unsigned __int64)CurrentIrql << 16) | 0xFF, v1554, 0LL, 0LL);
        }
        goto LABEL_33;
      }
      return 3221225485LL;
    }
    if ( (_DWORD)v9 != 16 || !(unsigned __int8)KeVerifyGroupAffinity(*(_QWORD *)(a1 + 56), 0LL) )
      return 3221225485LL;
    v14 = *(_DWORD *)(a1 + 20);
    v15 = ObGetCurrentIrql(v11, v10, v12, v13);
    if ( v14 >= 0 )
    {
      if ( v15 || KeAreApcsDisabled() )
      {
        v1566 = KeAreAllApcsDisabled();
        v1571 = ObGetCurrentIrql(v1568, v1567, v1569, v1570);
        KeBugCheckEx(0xC8u, ((unsigned __int64)v1571 << 16) | 0xFF, v1566, 0LL, 0LL);
      }
    }
    else if ( v15 > 1u )
    {
      v1560 = KeAreAllApcsDisabled();
      v1565 = ObGetCurrentIrql(v1562, v1561, v1563, v1564);
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1565 << 16) | 0xFF, v1560, 0LL, 0LL);
    }
  }
  else
  {
    if ( (_DWORD)v9 != 16 || (unsigned __int64)(*(_QWORD *)(v7 + 8) - 1LL) > 0xFFFFFFFE )
      return 3221225485LL;
    if ( (unsigned __int8)ObGetCurrentIrql(v9, 16LL, v7, 4294967294LL) || KeAreApcsDisabled() )
    {
      v1578 = KeAreAllApcsDisabled();
      v1583 = ObGetCurrentIrql(v1580, v1579, v1581, v1582);
      KeBugCheckEx(0xC8u, ((unsigned __int64)v1583 << 16) | 0xFF, v1578, 0LL, 0LL);
    }
  }
LABEL_33:
  v1636 = 2800LL;
  if ( !v8 || (v16 = *(_QWORD *)(v4 + 2704) + 2807LL, v1636 = v16, v16 == 2800) )
  {
    ++dword_140C13014;
    v1613 = RtlpInterlockedPopEntrySList(&Lookaside);
    v18 = v1613;
    if ( v1613 )
      goto LABEL_39;
    ++dword_140C13018;
    PoolWithTag = (struct _SLIST_ENTRY *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140C13030)(
                                           (unsigned int)dword_140C13024,
                                           (unsigned int)dword_140C1302C,
                                           (unsigned int)dword_140C13028);
  }
  else
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x746E494Bu);
  }
  v1613 = PoolWithTag;
  v18 = PoolWithTag;
LABEL_39:
  if ( !v18 )
    return 3221225626LL;
  v19 = v18 + 2;
  v1624 = v18 + 2;
  memmove(&v18[2], (const void *)v4, 0xAA0uLL);
  *((_QWORD *)&v18[169].Next + 1) = v4;
  v18[170].Next = v18 + 172;
  LODWORD(v18[132].Next) = *(_DWORD *)v2;
  HIDWORD(v18[132].Next) = *(_DWORD *)(v2 + 4);
  *((_DWORD *)&v18[132].Next + 2) = 0;
  LODWORD(v18[133].Next) = 0;
  HIDWORD(v18[155].Next) |= 0x1000u;
  if ( v8 )
    *((_QWORD *)&v18[170].Next + 1) = ((unsigned __int64)&v18[175].Next + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v21 = *(_DWORD *)(a1 + 16);
  v1588 = v18 + 2;
  if ( v21 > 0x80000 )
    v21 = 0x80000;
  *((_DWORD *)&v18[132].Next + 3) = v21;
  v1606 = 0;
  v1629 = 0;
  if ( !v21 )
    v21 = 1;
  *((_DWORD *)&v18[132].Next + 3) = v21;
  v1668 = a1;
  v22 = (unsigned __int64)&v18[2];
  v1669 = v2;
  Next_low = LODWORD(v18[153].Next);
  if ( (_DWORD)Next_low != -1 )
  {
    v24 = (*((__int64 (__fastcall **)(__int64, __int64, __int64))&v18[41].Next + 1))(Next_low, v20, 6LL);
    if ( v24 || (v24 = ((__int64 (__fastcall *)(_QWORD))v18[42].Next)(0LL)) != 0 )
    {
      v25 = ((__int64 (__fastcall *)(__int64, _BYTE *))v18[43].Next)(v24, v1793);
      if ( v25 >= 0 )
      {
        v18[154].Next = (_SLIST_ENTRY *)v24;
        v26 = (*((__int64 (**)(void))&v18[45].Next + 1))();
        v27 = (*((__int64 (__fastcall **)(__int64))&v18[47].Next + 1))(v26);
        if ( v27 )
        {
          (*((void (__fastcall **)(__int64, __int64))&v18[48].Next + 1))(v26, v27);
          v28 = 0;
        }
        else
        {
          v28 = 4;
        }
        v25 = 0;
        HIDWORD(v18[155].Next) = v28 | HIDWORD(v18[155].Next) & 0xFFFFFFFB;
        *((_DWORD *)&v18[132].Next + 2) += 0x10000;
      }
      else
      {
        (*((void (__fastcall **)(__int64))&v18[42].Next + 1))(v24);
      }
      if ( v25 >= 0 )
      {
        v29 = 1LL;
        v1629 = 1;
        goto LABEL_94;
      }
    }
  }
  Next_high = HIDWORD(v18[155].Next);
  if ( (Next_high & 8) != 0 && (Next_high & 0x1000) == 0 )
  {
    v31 = __rdtsc();
    v32 = (__ROR8__(v31, 3) ^ v31) * (unsigned __int128)0x7010008004002001uLL;
    v1748 = *((_QWORD *)&v32 + 1);
    if ( (((unsigned __int8)v32 ^ BYTE8(v32)) & 3) == 0 )
    {
      v33 = __rdtsc();
      v34 = (__ROR8__(v33, 3) ^ v33) * (unsigned __int128)0x7010008004002001uLL;
      v1751 = *((_QWORD *)&v34 + 1);
      v35 = ((unsigned __int64)v34 ^ *((_QWORD *)&v34 + 1)) % 0xB;
      if ( (unsigned int)v35 > 5 )
      {
        v39 = v35 - 6;
        if ( v39 )
        {
          v40 = v39 - 1;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              if ( v41 == 1 )
              {
                v1658 = -1333354875;
                v38 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v42 = __rdtsc();
                v43 = __ROR8__(v42, 3);
                v1752 = ((v43 ^ v42) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v44 = (67117057 * (v43 ^ v42)) ^ v1752;
                v38 = ((((((v44 % 0x1A + 97) << 8) | ((v44 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v44 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v44 >> 10)
                                                                  - 26
                                                                  * ((unsigned int)((1321528399
                                                                                   * (unsigned __int64)(v44 >> 10)) >> 32) >> 3)
                                                                  + 97)) << 8) | ((v44 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v1657 = 1684422978;
              v38 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v1643 = -2100910376;
            v38 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v1654[1] = 1314342514;
          v38 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v35 == 5 )
      {
        v1642 = 680282605;
        v38 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 1;
          if ( v37 )
          {
            if ( v37 == 1 )
            {
              v1639 = -1474152136;
              v38 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v1638 = 1728537748;
              v38 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v1651 = -2051698419;
            v38 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v1640 = -1297272415;
          v38 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v1641 = -795291432;
        v38 = __ROR4__(-795291432, 6);
      }
      v45 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))&v18[17].Next + 1))(
              512LL,
              *((_QWORD *)&v18[120].Next + 1),
              v38);
      if ( v45 )
      {
        v46 = *(unsigned int *)(*((_QWORD *)&v18[112].Next + 1) + *((_QWORD *)&v18[83].Next + 1));
        if ( (_DWORD)v46 )
        {
          v47 = __rdtsc();
          v48 = (__ROR8__(v47, 3) ^ v47) * (unsigned __int128)0x7010008004002001uLL;
          v1753 = *((_QWORD *)&v48 + 1);
          v46 = (*((_QWORD *)&v48 + 1) ^ (unsigned __int64)v48) % v46;
        }
        v49 = ((__int64 (__fastcall *)(_QWORD))v18[61].Next)(0LL);
        if ( v49 )
        {
          do
          {
            if ( !(_DWORD)v46 )
              break;
            LODWORD(v46) = v46 - 1;
            v49 = ((__int64 (__fastcall *)(__int64))v18[61].Next)(v49);
          }
          while ( v49 );
          v22 = (unsigned __int64)&v18[2];
          if ( !v49 )
          {
LABEL_92:
            ((void (__fastcall *)(__int64))v18[18].Next)(v45);
            goto LABEL_93;
          }
          if ( ((int (__fastcall *)(__int64))v18[60].Next)(v49) < 0 )
          {
            (*((void (__fastcall **)(__int64))&v18[61].Next + 1))(v49);
            v49 = 0LL;
          }
        }
        if ( v49 )
        {
          (*((void (__fastcall **)(__int64, _BYTE *))&v18[69].Next + 1))(v49, v1793);
          ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD))v18[30].Next)(v49, v45, 0LL, 0LL);
          v69 = __rdtsc();
          v70 = (__ROR8__(v69, 3) ^ v69) * (unsigned __int128)0x7010008004002001uLL;
          v1754 = *((_QWORD *)&v70 + 1);
          v71 = ((unsigned __int64)v70 ^ *((_QWORD *)&v70 + 1))
              % (*((unsigned int (__fastcall **)(__int64))&v18[29].Next + 1))(v45);
          _disable();
          v72 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)&v18[102].Next + 1));
          _enable();
          (*((void (__fastcall **)(__int64, _BYTE *))&v18[30].Next + 1))(v72, v1712);
          (*((void (__fastcall **)(_BYTE *, __int64))&v18[28].Next + 1))(v1780, v45);
          while ( ((int (__fastcall *)(unsigned int *, _BYTE *))v18[29].Next)(&v1632, v1780) >= 0 )
          {
            if ( !(_DWORD)v71 )
            {
              ((void (__fastcall *)(_BYTE *, _QWORD))v18[28].Next)(v1712, v1632);
              break;
            }
            LODWORD(v71) = v71 - 1;
          }
          ((void (__fastcall *)(_BYTE *, _BYTE *))v18[31].Next)(v1712, v1778);
          ((void (__fastcall *)(__int64))v18[18].Next)(v45);
          v29 = 1LL;
          v1606 = 1;
          goto LABEL_94;
        }
        goto LABEL_92;
      }
    }
  }
LABEL_93:
  v29 = 1LL;
  v1606 = 0;
LABEL_94:
  v1625 = 0LL;
  v50 = &v1626;
  v51 = 4;
  LODWORD(v52) = -1;
  do
  {
    *(_BYTE *)v50 = 0;
    v50 = (unsigned int *)((char *)v50 + 1);
    --v51;
  }
  while ( v51 );
  Next = (unsigned int)v18[132].Next;
  if ( *((_DWORD *)&v18[132].Next + 2) >= *((_DWORD *)&v18[132].Next + 3) )
    goto LABEL_2507;
  v54 = v1755;
  v55 = 0;
  v56 = v1756;
  v57 = v1691;
  v1621 = v1755;
  v1616 = v1756;
  v1618 = v1691;
  v1612 = v1683;
  while ( 1 )
  {
    v58 = *(_DWORD *)(v22 + 2448) & 0x110000;
    v1650 = Next;
    if ( v58 != 1114112 )
      __writedr(7u, 0LL);
    if ( Next == *(_DWORD *)(v22 + 2060) )
      break;
    v59 = v22;
    v60 = 0;
    if ( *(_QWORD *)(v22 + 2680) )
      v59 = *(_QWORD *)(v22 + 2680);
    v61 = (char *)(v59 + *(unsigned int *)(v59 + 2056));
    v1587 = v61;
    if ( (_DWORD)v1625 && HIDWORD(v1625) <= Next )
    {
      v60 = HIDWORD(v1625);
      v61 = (char *)(v59 + v1626);
      v1587 = v61;
    }
    if ( v60 != Next )
    {
      v62 = Next - v60;
      v63 = v62;
      v60 += v62;
      while ( 1 )
      {
        v64 = *(_DWORD *)v61;
        if ( *(int *)v61 > 12 )
          break;
        if ( v64 == 12 )
          goto LABEL_129;
        v65 = v64 - 1;
        if ( !v65 )
          goto LABEL_129;
        v66 = v65 - 6;
        if ( v66 )
        {
          v67 = v66 - 1;
          if ( !v67 )
          {
            v73 = *((unsigned __int16 *)v61 + 16);
LABEL_135:
            v68 = (v73 + 55) & 0xFFFFFFF8;
            goto LABEL_136;
          }
          if ( v67 != 2 )
          {
LABEL_132:
            v68 = 48LL;
            goto LABEL_136;
          }
          v68 = (unsigned int)(16 * (*((_DWORD *)v61 + 7) + 3));
        }
        else
        {
          v68 = (unsigned int)(24 * (*((_DWORD *)v61 + 6) + 2));
        }
LABEL_136:
        v61 += v68;
        if ( !--v63 )
        {
          v54 = v1621;
          v56 = v1616;
          v57 = v1618;
          v1587 = v61;
          goto LABEL_138;
        }
      }
      if ( v64 == 28 )
      {
        v73 = *((unsigned __int16 *)v61 + 20);
        goto LABEL_135;
      }
      if ( v64 == 30 )
      {
        v68 = (((*((_DWORD *)v61 + 9) != 0 ? *((_DWORD *)v61 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
            + 24 * (*((unsigned __int16 *)v61 + 20) + 2);
      }
      else
      {
        if ( v64 <= 32 )
          goto LABEL_132;
        if ( v64 <= 34 )
        {
          v68 = 20
              * (unsigned int)(((*((_DWORD *)v61 + 8) & 0xFFF) + (unsigned __int64)*((unsigned int *)v61 + 10) + 4095) >> 12)
              + 48;
        }
        else
        {
          if ( v64 != 43 )
            goto LABEL_132;
LABEL_129:
          v68 = 4 * (*((_DWORD *)v61 + 4) / 0xCu) + 48;
        }
      }
      v29 = 1LL;
      goto LABEL_136;
    }
LABEL_138:
    LODWORD(v1625) = 1;
    HIDWORD(v1625) = v60;
    v1626 = (_DWORD)v61 - v59;
    if ( !*(_DWORD *)(v22 + 2084) )
    {
      v74 = 0;
      v75 = *(int *)v61;
      v76 = *(_DWORD *)(v1668 + 48);
      v77 = *(__int64 **)(v1668 + 56);
      if ( (int)v75 > 21 )
      {
        if ( (_DWORD)v75 != 24 )
        {
          if ( (int)v75 <= 27 )
            goto LABEL_235;
          if ( (int)v75 > 29 )
          {
            if ( (unsigned int)v75 <= 0x23 && (v79 = 0x940000000LL, _bittest64(&v79, v75)) )
            {
              LODWORD(v52) = 1;
            }
            else
            {
              LODWORD(v52) = 1;
              if ( (unsigned int)(v75 - 43) > 1 )
                goto LABEL_235;
            }
            goto LABEL_172;
          }
        }
        goto LABEL_179;
      }
      if ( (_DWORD)v75 == 21 )
      {
        LODWORD(v52) = 1;
      }
      else
      {
        if ( (v75 & 0x80000000) != 0LL )
          goto LABEL_235;
        LODWORD(v52) = 1;
        if ( (int)v75 <= 1 )
          goto LABEL_172;
        if ( (int)v75 > 3 )
        {
          if ( (_DWORD)v75 != 7 )
          {
            if ( (_DWORD)v75 != 8 )
            {
              if ( (_DWORD)v75 != 9 && (unsigned int)(v75 - 11) > 3 )
                goto LABEL_235;
LABEL_172:
              if ( v76 )
                goto LABEL_235;
LABEL_173:
              v80 = *((unsigned int *)v61 + 4);
              if ( !(_DWORD)v80 )
                goto LABEL_235;
              v81 = v1654;
              v82 = *((_QWORD *)v61 + 1);
              v83 = &v1686;
              v1686 = *v77;
              v84 = *((_DWORD *)v77 + 2);
              v85 = 0;
              v1654[0] = v84;
              while ( v82 >= *v83 + (unsigned __int64)*v81 || v82 + v80 <= *v83 )
              {
                ++v85;
                ++v83;
                ++v81;
                if ( v85 )
                  goto LABEL_235;
              }
LABEL_180:
              v29 = 1LL;
              ++*(_QWORD *)(v1669 + 8);
              goto LABEL_181;
            }
LABEL_179:
            if ( v76 != 5 )
              goto LABEL_235;
            goto LABEL_180;
          }
          v74 = *((_DWORD *)v61 + 7);
          v78 = v76 == 1;
LABEL_153:
          if ( !v78 )
            goto LABEL_235;
          goto LABEL_162;
        }
        if ( !v76 )
          goto LABEL_173;
      }
      if ( (_DWORD)v75 == 21 )
      {
        v74 = *((_DWORD *)v61 + 11);
        v78 = v76 == 4;
        goto LABEL_153;
      }
      if ( (unsigned int)(v75 - 2) <= 1 )
      {
        v74 = *((_DWORD *)v61 + 10);
        if ( (_DWORD)v75 == 3 && v76 != 2 )
          goto LABEL_235;
        if ( (_DWORD)v75 == 2 && v76 != 3 )
          goto LABEL_235;
      }
LABEL_162:
      if ( !(unsigned int)KeCheckProcessorGroupAffinity(*(_QWORD *)(v1668 + 56), v74) )
        goto LABEL_235;
      goto LABEL_180;
    }
LABEL_181:
    v86 = *(_DWORD *)v61;
    v1798 = *(_DWORD *)v61;
    if ( *(int *)v61 > 28 )
    {
      if ( v86 <= 37 )
      {
        if ( v86 == 37 )
        {
          if ( (*(_DWORD *)(v22 + 2452) & 2) != 0
            || !(*(unsigned __int8 (**)(void))(v22 + 1064))()
            || *(_DWORD *)(v22 + 2296) )
          {
            goto LABEL_235;
          }
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = 0LL;
          goto LABEL_456;
        }
        if ( v86 == 29 )
        {
          v1073 = (_QWORD *)*((_QWORD *)v61 + 1);
          v1074 = *((unsigned int *)v61 + 4);
          v1075 = v1073;
          *(_DWORD *)(v22 + 2088) += v1074;
          v1076 = (const char *)v1073;
          v1077 = *(_DWORD *)(v22 + 2068);
          v52 = *(_QWORD *)(v22 + 2072);
          if ( v1073 < (_QWORD *)((char *)v1073 + v1074) )
          {
            do
            {
              _mm_prefetch(v1076, 0);
              v1076 += 64;
            }
            while ( v1076 < (const char *)v1073 + v1074 );
          }
          v1078 = *(_QWORD *)(v22 + 2072);
          v1079 = (unsigned int)v1074 >> 7;
          if ( (unsigned int)v1074 >> 7 )
          {
            do
            {
              v1080 = 8LL;
              do
              {
                v1081 = v1078 ^ *v1075;
                v1082 = v1075[1];
                v1075 += 2;
                v1078 = __ROL8__(__ROL8__(v1081, v1077) ^ v1082, v1077);
                --v1080;
              }
              while ( v1080 );
              v1083 = __ROL8__(v52 ^ ((char *)v1075 - (char *)v1073), 17) ^ v52 ^ ((char *)v1075 - (char *)v1073);
              v1735 = (v1083 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1077 = ((unsigned __int8)(v1735 ^ v1083) ^ (unsigned __int8)v1077) & 0x3F;
              if ( !v1077 )
                LOBYTE(v1077) = 1;
              --v1079;
            }
            while ( v1079 );
            v22 = (unsigned __int64)v1588;
          }
          v1084 = v1074 & 0x7F;
          if ( (unsigned int)v1084 >= 8 )
          {
            v1085 = (unsigned __int64)(unsigned int)v1084 >> 3;
            do
            {
              v1078 = __ROL8__(*v1075++ ^ v1078, v1077);
              v1084 = (unsigned int)(v1084 - 8);
              --v1085;
            }
            while ( v1085 );
            v22 = (unsigned __int64)v1588;
          }
          for ( ; (_DWORD)v1084; v1084 = (unsigned int)(v1084 - 1) )
          {
            v1086 = *(unsigned __int8 *)v1075;
            v1075 = (_QWORD *)((char *)v1075 + 1);
            v1078 = __ROL8__(v1086 ^ v1078, v1077);
          }
          for ( i = v1078; ; LODWORD(v1078) = i ^ v1078 )
          {
            i >>= 31;
            if ( !i )
              break;
          }
          v1088 = v1078 & 0x7FFFFFFF;
          if ( v1088 == *((_DWORD *)v61 + 5) )
            goto LABEL_1767;
          if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
            v55 = 1;
          v1089 = *((unsigned int *)v61 + 4);
          v1090 = *((_QWORD *)v61 + 1);
          if ( *((_DWORD *)v61 + 4) )
          {
            v1084 = 64LL;
            if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
            {
              v1091 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1092 = v1090 & 0xFFFFFFFFFFFFF000uLL;
              v1819 = (v1090 + v1089 - 1) | 0xFFF;
              v1093 = (v1090 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v52 = v1091;
                while ( 1 )
                {
                  v1094 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                            v1092,
                            0LL,
                            v1084,
                            v1075);
                  if ( v1094 != -1073741267 )
                    break;
                  if ( v55 )
                    goto LABEL_1785;
                  if ( v1091 > 1u )
                    goto LABEL_1765;
                  v52 = v1091;
                  __writecr8(v1091);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1094 < 0 )
                  break;
LABEL_1765:
                v1092 += 4096LL;
                v1093 += 4096LL;
                if ( v1093 == v1819 )
                {
                  __writecr8(v52);
                  v61 = v1587;
                  goto LABEL_1767;
                }
              }
LABEL_1785:
              __writecr8(v52);
              v61 = v1587;
            }
          }
          v1107 = *(_DWORD *)(v22 + 2296);
          if ( !v1107 )
          {
            *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1088 ^ (unsigned __int64)*((unsigned int *)v61 + 5);
            v1107 = *(_DWORD *)(v22 + 2296);
          }
          v1108 = *((_QWORD *)v61 + 1);
          if ( v1107 )
          {
LABEL_1767:
            v1095 = 1;
          }
          else
          {
            v1095 = 1;
            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2320) = *(int *)v61;
            *(_QWORD *)(v22 + 2328) = v1108;
            *(_DWORD *)(v22 + 2296) = 1;
            __b8(v22, 0LL);
          }
          v1096 = (unsigned __int64 **)*((_QWORD *)v61 + 1);
          v1097 = *((_DWORD *)v61 + 4) >> 4;
          v1820 = v1096;
          if ( v1097 )
          {
            v1098 = v1097;
            v1589 = v1097;
            do
            {
              v1099 = v1587;
              v52 = **v1096;
              v1664 = 0LL;
              v1100 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *, __int64, _QWORD *))(v22 + 784))(
                        v52,
                        &v1664,
                        v1084,
                        v1075);
              if ( v1100 )
              {
                do
                {
                  ++v1095;
                  if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 520))(v1100, v1736) )
                  {
                    if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
                    {
                      v1101 = *(_QWORD **)(v22 + 2688);
                      v1102 = 48;
                      v1103 = 6LL;
                      do
                      {
                        v1102 -= 8;
                        *v1101 = *(_QWORD *)v1099;
                        v1099 += 8;
                        ++v1101;
                        --v1103;
                      }
                      while ( v1103 );
                      if ( v1102 )
                      {
                        do
                        {
                          v1104 = *v1099++;
                          *(_BYTE *)v1101 = v1104;
                          v1101 = (_QWORD *)((char *)v1101 + 1);
                          --v1102;
                        }
                        while ( v1102 );
                        v22 = (unsigned __int64)v1588;
                      }
                      v1099 = *(char **)(v22 + 2688);
                    }
                    *((_QWORD *)v1099 + 3) = v1100;
                    *((_QWORD *)v1099 + 4) = v52;
                    v1105 = *(_QWORD *)(v22 + 1424);
                    *(_QWORD *)v1105 = v1099;
                    *(_DWORD *)(v1105 + 16) = 48;
                    v1106 = *(_QWORD *)(v22 + 1424);
                    *(_QWORD *)(v1106 + 8) = v1100;
                    *(_DWORD *)(v1106 + 20) = 4096;
                    if ( !*(_DWORD *)(v22 + 2296) )
                    {
                      *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v22 + 2312) = v1099 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2320) = *(int *)v1099;
                      *(_QWORD *)(v22 + 2328) = 6LL;
                      *(_DWORD *)(v22 + 2296) = 1;
                      __b8(v22, 0LL);
                    }
                  }
                  v1100 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(v22 + 784))(v52, &v1664);
                }
                while ( v1100 );
                v1096 = v1820;
                v1098 = v1589;
              }
              v1095 = 1;
              v1096 += 2;
              --v1098;
              v1820 = v1096;
              v1589 = v1098;
            }
            while ( v1098 );
          }
          goto LABEL_234;
        }
        if ( v86 != 30 )
        {
          if ( v86 != 31 )
          {
            if ( v86 == 32 )
            {
              pg_unknown26(v22, v61);
              goto LABEL_235;
            }
            if ( v86 == 33 )
            {
              pg_unknown11(v22, v61);
              goto LABEL_235;
            }
            if ( v86 != 35 )
            {
              if ( v86 == 36 )
              {
                v830 = (const char *)*((_QWORD *)v61 + 1);
                v831 = *((unsigned int *)v61 + 4);
                v832 = (__int64)v830;
                *(_DWORD *)(v22 + 2088) += v831;
                v833 = v830;
                v834 = *(_DWORD *)(v22 + 2068);
                for ( j = *(_QWORD *)(v22 + 2072); v833 < &v830[v831]; v833 += 64 )
                  _mm_prefetch(v833, 0);
                v836 = *(_QWORD *)(v22 + 2072);
                v837 = (unsigned int)v831 >> 7;
                if ( (unsigned int)v831 >> 7 )
                {
                  do
                  {
                    v838 = 8LL;
                    do
                    {
                      v839 = *(_QWORD *)(v832 + 8) ^ __ROL8__(*(_QWORD *)v832 ^ v836, v834);
                      v832 += 16LL;
                      v836 = __ROL8__(v839, v834);
                      --v838;
                    }
                    while ( v838 );
                    v840 = (__ROL8__(j ^ (v832 - (_QWORD)v830), 17) ^ j ^ (unsigned __int64)(v832 - (_QWORD)v830))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v1730 = *((_QWORD *)&v840 + 1);
                    v841 = BYTE8(v840) ^ v840 ^ v834;
                    v29 = 1LL;
                    v834 = v841 & 0x3F;
                    if ( !v834 )
                      LOBYTE(v834) = 1;
                    --v837;
                  }
                  while ( v837 );
                  v22 = (unsigned __int64)v1588;
                }
                v842 = v831 & 0x7F;
                if ( (unsigned int)v842 >= 8 )
                {
                  v843 = (unsigned __int64)(unsigned int)v842 >> 3;
                  do
                  {
                    v836 = __ROL8__(*(_QWORD *)v832 ^ v836, v834);
                    v832 += 8LL;
                    v842 = (unsigned int)(v842 - 8);
                    --v843;
                  }
                  while ( v843 );
                }
                for ( ; (_DWORD)v842; v842 = (unsigned int)(v842 - 1) )
                {
                  v844 = *(unsigned __int8 *)v832++;
                  v836 = __ROL8__(v844 ^ v836, v834);
                }
                for ( k = v836; ; LODWORD(v836) = k ^ v836 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                v846 = v836 & 0x7FFFFFFF;
                if ( v846 == *((_DWORD *)v61 + 5) )
                  goto LABEL_1367;
                v842 = 0LL;
                if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
                  v55 = 1;
                v847 = *((unsigned int *)v61 + 4);
                v848 = *((_QWORD *)v61 + 1);
                if ( *((_DWORD *)v61 + 4) )
                {
                  v832 = 64LL;
                  if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
                  {
                    v849 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v850 = v848 & 0xFFFFFFFFFFFFF000uLL;
                    v1812 = (v848 + v847 - 1) | 0xFFF;
                    v851 = (v848 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 1 )
                    {
                      v852 = v849;
                      while ( 1 )
                      {
                        v853 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v850, 0LL);
                        if ( v853 != -1073741267 )
                          break;
                        if ( v55 )
                          goto LABEL_1362;
                        if ( v849 > 1u )
                          goto LABEL_1360;
                        v852 = v849;
                        __writecr8(v849);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v853 < 0 )
                        break;
LABEL_1360:
                      v850 += 4096LL;
                      v851 += 4096LL;
                      if ( v851 == v1812 )
                      {
                        __writecr8(v852);
                        v61 = v1587;
LABEL_1367:
                        v856 = *(_QWORD *)(v22 + 1344);
                        v857 = KeGetCurrentIrql();
                        __writecr8(0xFuLL);
                        (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(v22 + 336))(v856, v29, v842, v832);
                        v859 = **(unsigned int ***)(v22 + 1552);
                        v860 = v859 + 4;
                        v861 = *((_BYTE *)v859 + 12);
                        v862 = (unsigned __int64)&v859[6 * *v859 + 4];
                        while ( 1 )
                        {
                          v863 = 24LL;
                          v864 = (__int64 *)(v61 + 24);
                          v865 = v860;
                          do
                          {
                            v866 = *(_QWORD *)v865;
                            v865 += 2;
                            v867 = *v864++;
                            if ( v866 != v867 )
                              goto LABEL_1375;
                            v863 = (unsigned int)(v863 - 8);
                          }
                          while ( (unsigned int)v863 >= 8 );
                          if ( (_DWORD)v863 )
                          {
                            while ( 1 )
                            {
                              v858 = *(unsigned __int8 *)v865;
                              v865 = (unsigned int *)((char *)v865 + 1);
                              v868 = *(unsigned __int8 *)v864;
                              v864 = (__int64 *)((char *)v864 + 1);
                              if ( v858 != v868 )
                                break;
                              v78 = (_DWORD)v863 == 1;
                              v863 = (unsigned int)(v863 - 1);
                              if ( v78 )
                                goto LABEL_1376;
                            }
LABEL_1375:
                            v860 += 6;
                            if ( (unsigned __int64)v860 < v862 )
                              continue;
                          }
LABEL_1376:
                          v22 = (unsigned __int64)v1588;
                          ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1588[25].Next)(
                            v1588[84].Next,
                            v858,
                            v863,
                            v864);
                          __writecr8(v857);
                          if ( !v861 )
                            goto LABEL_1383;
                          if ( (*(_DWORD *)(v22 + 2452) & 0x10) != 0 && !*(_DWORD *)(v22 + 2296) )
                          {
                            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                            *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                            *(_QWORD *)(v22 + 2320) = *(int *)v61;
                            *(_QWORD *)(v22 + 2328) = 1LL;
                            *(_DWORD *)(v22 + 2296) = 1;
                            __b8(v22, 0LL);
                          }
                          if ( *((_QWORD *)v61 + 3) == 1LL )
                          {
                            v55 = 0;
                          }
                          else
                          {
LABEL_1383:
                            v55 = 0;
                            if ( v860 == (unsigned int *)v862 && !*(_DWORD *)(v22 + 2296) )
                            {
                              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v22 + 2320) = *(int *)v61;
                              *(_QWORD *)(v22 + 2328) = v860;
                              *(_DWORD *)(v22 + 2296) = 1;
                              __b8(v22, 0LL);
                            }
                          }
                          v869 = *(_QWORD *)(v22 + 1344);
                          LODWORD(v52) = KeGetCurrentIrql();
                          __writecr8(0xFuLL);
                          (*(void (__fastcall **)(__int64))(v22 + 336))(v869);
                          v870 = 0LL;
                          v871 = **(unsigned int ***)(v22 + 1552);
                          v872 = v871 + 4;
                          v873 = (unsigned __int64)&v871[6 * *v871 + 4];
                          while ( 1 )
                          {
                            v872 += 6;
                            if ( (unsigned __int64)v872 >= v873 )
                              break;
                            v874 = *((_QWORD *)v872 + 1);
                            if ( v874 < v870 )
                              break;
                            if ( (v874 & 0xFFFFFFFFFFFFF000uLL) != v874 )
                              break;
                            v875 = v874 + v872[4];
                            if ( v875 <= v874 || v875 == v870 )
                              break;
                            v870 = v874 + v872[4];
                          }
                          (*(void (__fastcall **)(_QWORD))(v22 + 400))(*(_QWORD *)(v22 + 1344));
                          __writecr8((unsigned __int8)v52);
                          if ( v872 == (unsigned int *)v873 || *(_DWORD *)(v22 + 2296) )
                            goto LABEL_235;
                          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v22 + 2320) = *(int *)v61;
                          *(_QWORD *)(v22 + 2328) = v872;
                          goto LABEL_456;
                        }
                      }
                    }
LABEL_1362:
                    __writecr8(v852);
                    v61 = v1587;
                  }
                }
                v854 = *(_DWORD *)(v22 + 2296);
                v29 = *((unsigned int *)v61 + 5);
                if ( !v854 )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v29 ^ v846;
                  v854 = *(_DWORD *)(v22 + 2296);
                }
                v855 = *((_QWORD *)v61 + 1);
                if ( !v854 )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v61;
                  *(_QWORD *)(v22 + 2328) = v855;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                goto LABEL_1367;
              }
              goto LABEL_2324;
            }
            if ( (*((_DWORD *)v61 + 10) & 1) != 0 && (!*(_QWORD *)(v22 + 2432) || (*(_DWORD *)(v22 + 2452) & 4) != 0) )
              goto LABEL_1733;
            if ( (*((_DWORD *)v61 + 10) & 1) != 0 )
            {
              v876 = *(_DWORD *)(v22 + 2452);
              v877 = v876;
              if ( *(_DWORD *)(v22 + 2084) )
              {
                if ( (((unsigned __int8)v876 ^ (unsigned __int8)(v876 >> 3)) & 4) != 0 )
                  goto LABEL_1733;
              }
              else
              {
                v877 = v876 ^ ((unsigned __int8)v876 ^ (unsigned __int8)(8 * v876)) & 0x20;
                *(_DWORD *)(v22 + 2452) = v877;
              }
              if ( !*(_QWORD *)(v22 + 2432) )
                goto LABEL_1464;
              LOBYTE(v878) = v877;
              if ( !*(_DWORD *)(v22 + 2084) )
              {
                v878 = v877 ^ ((unsigned __int8)v877 ^ (unsigned __int8)(8 * v877)) & 0x20;
                *(_DWORD *)(v22 + 2452) = v878;
                goto LABEL_1406;
              }
              if ( (((unsigned __int8)v877 ^ (unsigned __int8)(v877 >> 3)) & 4) != 0 )
              {
LABEL_1464:
                *(_DWORD *)(v22 + 2084) = 0;
                goto LABEL_1444;
              }
LABEL_1406:
              if ( (v878 & 4) != 0 )
              {
                v879 = *((_QWORD *)v61 + 1) & 0xFFFFFFFFFFFFF000uLL;
                v880 = (*((unsigned int *)v61 + 4) + (unsigned __int64)(*((_DWORD *)v61 + 2) & 0xFFF) + 4095) >> 12;
                while ( v880 )
                {
                  --v880;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v22 + 688))(v879)
                    && !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = v879;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                  v879 += 4096LL;
                  *(_DWORD *)(v22 + 2088) += 256;
                }
                goto LABEL_1444;
              }
              v881 = (_QWORD *)*((_QWORD *)v61 + 1);
              v882 = *((unsigned int *)v61 + 4);
              v883 = v881;
              *(_DWORD *)(v22 + 2088) += v882;
              v884 = (const char *)v881;
              v885 = *(_DWORD *)(v22 + 2068);
              v886 = *(_QWORD *)(v22 + 2072);
              if ( v881 < (_QWORD *)((char *)v881 + v882) )
              {
                do
                {
                  _mm_prefetch(v884, 0);
                  v884 += 64;
                }
                while ( v884 < (const char *)v881 + v882 );
              }
              v887 = *(_QWORD *)(v22 + 2072);
              v888 = (unsigned int)v882 >> 7;
              if ( (unsigned int)v882 >> 7 )
              {
                do
                {
                  v889 = 8LL;
                  do
                  {
                    v890 = v887 ^ *v883;
                    v891 = v883[1];
                    v883 += 2;
                    v887 = __ROL8__(__ROL8__(v890, v885) ^ v891, v885);
                    --v889;
                  }
                  while ( v889 );
                  v892 = __ROL8__(v886 ^ ((char *)v883 - (char *)v881), 17) ^ v886 ^ ((char *)v883 - (char *)v881);
                  v1731 = (v892 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v885 = ((unsigned __int8)(v1731 ^ v892) ^ (unsigned __int8)v885) & 0x3F;
                  if ( !v885 )
                    LOBYTE(v885) = 1;
                  --v888;
                }
                while ( v888 );
                v22 = (unsigned __int64)v1588;
              }
              v893 = v882 & 0x7F;
              if ( v893 >= 8 )
              {
                v894 = (unsigned __int64)v893 >> 3;
                do
                {
                  v887 = __ROL8__(*v883++ ^ v887, v885);
                  v893 -= 8;
                  --v894;
                }
                while ( v894 );
              }
              if ( v893 )
              {
                do
                {
                  v895 = *(unsigned __int8 *)v883;
                  v883 = (_QWORD *)((char *)v883 + 1);
                  v887 = __ROL8__(v895 ^ v887, v885);
                  --v893;
                }
                while ( v893 );
                v22 = (unsigned __int64)v1588;
              }
              for ( m = v887; ; LODWORD(v887) = m ^ v887 )
              {
                m >>= 31;
                if ( !m )
                  break;
              }
              v897 = *((_DWORD *)v61 + 5);
              v898 = v887 & 0x7FFFFFFF;
              if ( v898 != v897 )
              {
                v899 = *((unsigned int *)v61 + 4);
                v900 = *((_QWORD *)v61 + 1);
                if ( *((_DWORD *)v61 + 4) && (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
                {
                  v901 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v902 = v900 & 0xFFFFFFFFFFFFF000uLL;
                  v903 = (v900 + v899 - 1) | 0xFFF;
                  v904 = (v900 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v905 = v901;
                    while ( 1 )
                    {
                      v906 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v902, 0LL);
                      if ( v906 != -1073741267 )
                        break;
                      if ( v901 > 1u )
                        goto LABEL_1441;
                      v905 = v901;
                      __writecr8(v901);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v906 < 0 )
                      break;
LABEL_1441:
                    v902 += 4096LL;
                    v904 += 4096LL;
                    if ( v904 == v903 )
                      goto LABEL_1442;
                  }
                  __writecr8(v905);
                  v61 = v1587;
                  v55 = 0;
                  v897 = *((_DWORD *)v1587 + 5);
                }
                v919 = *(_DWORD *)(v22 + 2296);
                if ( !v919 )
                {
                  v920 = v898;
                  v921 = v897;
                  goto LABEL_1461;
                }
                goto LABEL_1462;
              }
LABEL_1444:
              LODWORD(v52) = -465226731;
            }
            else
            {
              v923 = (_QWORD *)*((_QWORD *)v61 + 1);
              v924 = *((unsigned int *)v61 + 4);
              v925 = v923;
              *(_DWORD *)(v22 + 2088) += v924;
              v926 = (const char *)v923;
              v927 = *(_DWORD *)(v22 + 2068);
              v928 = *(_QWORD *)(v22 + 2072);
              if ( v923 < (_QWORD *)((char *)v923 + v924) )
              {
                do
                {
                  _mm_prefetch(v926, 0);
                  v926 += 64;
                }
                while ( v926 < (const char *)v923 + v924 );
              }
              v929 = *(_QWORD *)(v22 + 2072);
              v930 = (unsigned int)v924 >> 7;
              if ( (unsigned int)v924 >> 7 )
              {
                do
                {
                  v931 = 8LL;
                  do
                  {
                    v932 = v925[1] ^ __ROL8__(*v925 ^ v929, v927);
                    v925 += 2;
                    v929 = __ROL8__(v932, v927);
                    --v931;
                  }
                  while ( v931 );
                  v933 = __ROL8__(v928 ^ ((char *)v925 - (char *)v923), 17) ^ v928 ^ ((char *)v925 - (char *)v923);
                  v1732 = (v933 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v927 = ((unsigned __int8)(v1732 ^ v933) ^ (unsigned __int8)v927) & 0x3F;
                  if ( !v927 )
                    LOBYTE(v927) = 1;
                  --v930;
                }
                while ( v930 );
                v22 = (unsigned __int64)v1588;
              }
              v934 = v924 & 0x7F;
              if ( v934 >= 8 )
              {
                v935 = (unsigned __int64)v934 >> 3;
                do
                {
                  v929 = __ROL8__(*v925++ ^ v929, v927);
                  v934 -= 8;
                  --v935;
                }
                while ( v935 );
              }
              for ( ; v934; --v934 )
              {
                v936 = *(unsigned __int8 *)v925;
                v925 = (_QWORD *)((char *)v925 + 1);
                v929 = __ROL8__(v936 ^ v929, v927);
              }
              for ( n = v929; ; LODWORD(v929) = n ^ v929 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v938 = v929 & 0x7FFFFFFF;
              if ( v938 == *((_DWORD *)v61 + 5) )
              {
LABEL_1443:
                v55 = 0;
                goto LABEL_1444;
              }
              if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
                v55 = 1;
              v939 = *((unsigned int *)v61 + 4);
              v940 = *((_QWORD *)v61 + 1);
              if ( *((_DWORD *)v61 + 4) )
              {
                v941 = 64LL;
                if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
                {
                  v942 = KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v943 = v940 & 0xFFFFFFFFFFFFF000uLL;
                  v1813 = (v940 + v939 - 1) | 0xFFF;
                  v944 = (v940 & 0xFFFFFFFFFFFFF000uLL) - 1;
                  while ( 1 )
                  {
                    v905 = v942;
                    while ( 1 )
                    {
                      v945 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                               v943,
                               0LL,
                               v941,
                               v925);
                      if ( v945 != -1073741267 )
                        break;
                      if ( v55 )
                        goto LABEL_1497;
                      if ( v942 > 1u )
                        goto LABEL_1495;
                      v905 = v942;
                      __writecr8(v942);
                      KeGetCurrentIrql();
                      __writecr8(2uLL);
                    }
                    if ( v945 < 0 )
                      break;
LABEL_1495:
                    v943 += 4096LL;
                    v944 += 4096LL;
                    if ( v944 == v1813 )
                    {
LABEL_1442:
                      __writecr8(v905);
                      v61 = v1587;
                      goto LABEL_1443;
                    }
                  }
LABEL_1497:
                  __writecr8(v905);
                  v61 = v1587;
                }
              }
              v919 = *(_DWORD *)(v22 + 2296);
              v55 = 0;
              v920 = *((unsigned int *)v61 + 5);
              if ( !v919 )
              {
                v921 = v938;
LABEL_1461:
                *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v921 ^ v920;
                v919 = *(_DWORD *)(v22 + 2296);
              }
LABEL_1462:
              v922 = *((_QWORD *)v61 + 1);
              LODWORD(v52) = -465226731;
              if ( !v919 )
              {
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v61;
                *(_QWORD *)(v22 + 2328) = v922;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
              }
            }
            v907 = *((_DWORD *)v61 + 10);
            if ( (v907 & 2) == 0 )
              goto LABEL_235;
            v908 = *((_QWORD *)v61 + 1);
            if ( (v907 & 4) != 0 )
            {
              v909 = *((_QWORD *)v61 + 3);
              v910 = **(_QWORD **)(v908 + 112);
              if ( v910 != v909 )
              {
                v911 = *(_QWORD *)(v22 + 1424);
                *(_QWORD *)v911 = v910;
                *(_DWORD *)(v911 + 16) = 256;
                v912 = *(_DWORD *)(v22 + 2296);
                if ( !v912 )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v910 ^ v909;
                  v912 = *(_DWORD *)(v22 + 2296);
                }
                v913 = *(_QWORD *)(v908 + 112);
                if ( !v912 )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v61;
                  *(_QWORD *)(v22 + 2328) = v913;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
              }
            }
            if ( (*((_DWORD *)v61 + 10) & 8) == 0 )
              goto LABEL_235;
            v914 = *((_QWORD *)v61 + 4);
            v915 = **(_QWORD **)(v908 + 120);
            if ( v915 == v914 )
              goto LABEL_235;
            v916 = *(_QWORD *)(v22 + 1424);
            *(_QWORD *)v916 = v915;
            *(_DWORD *)(v916 + 16) = 256;
            v917 = *(_DWORD *)(v22 + 2296);
            if ( !v917 )
            {
              *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v915 ^ v914;
              v917 = *(_DWORD *)(v22 + 2296);
            }
            v918 = *(_QWORD *)(v908 + 120);
            if ( v917 )
              goto LABEL_235;
            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2320) = *(int *)v61;
            *(_QWORD *)(v22 + 2328) = v918;
            goto LABEL_1320;
          }
          if ( (*(_DWORD *)(v22 + 2096) & 1) == 0 )
            goto LABEL_235;
          if ( !*(_QWORD *)(v22 + 2432) || (*(_DWORD *)(v22 + 2452) & 4) != 0 )
          {
            v947 = 0LL;
          }
          else
          {
            v946 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(v22 + 976))(26LL, &v1682, 0LL);
            v947 = v1682;
            if ( v946 < 0 )
              v947 = 0LL;
          }
          v948 = *(__int64 (__fastcall **)(_QWORD))(v22 + 944);
          v1589 = v947;
          v949 = 0;
          v1590 = 0;
          v950 = v948(0LL);
          while ( 2 )
          {
            v989 = v950;
            if ( !v950 )
            {
              v990 = *(_QWORD *)(v22 + 1248);
              v55 = 0;
              if ( (*(int (__fastcall **)(__int64))(v22 + 928))(v990) >= 0 )
              {
                v991 = (*(__int64 (__fastcall **)(__int64))(v22 + 992))(v990);
                v1619 = v991;
                v992 = (*(__int64 (__fastcall **)(__int64, char *))(v22 + 1000))(v990, v1597);
                v1816 = (*(__int64 (__fastcall **)(__int64))(v22 + 1008))(v990);
                if ( v991 == 114
                  || *(_DWORD *)(v22 + 2296)
                  || (*(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v991 ^ 0x72LL, *(_DWORD *)(v22 + 2296)) )
                {
                  v993 = (int *)v1587;
                }
                else
                {
                  v993 = (int *)v1587;
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = (char *)v993 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *v993;
                  *(_QWORD *)(v22 + 2328) = v990;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                v994 = 0;
                if ( (v991 & 7) == 1 )
                {
                  v994 = 48;
                }
                else if ( (v991 & 7) == 2 )
                {
                  v994 = 16;
                  LOBYTE(v55) = 16;
                }
                else if ( (v991 & 7) != 0 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = (char *)v993 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *v993;
                  *(_QWORD *)(v22 + 2328) = v990;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                v52 = *(_QWORD *)(v22 + 1480);
                v995 = (unsigned __int64)v991 >> 4;
                v996 = v994 | *(_BYTE *)(v52 + 2 * v995);
                v997 = (int *)v1587;
                if ( v996 != v992 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = (char *)v997 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *v997;
                  *(_QWORD *)(v22 + 2328) = v990;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                v998 = v55 | *(_BYTE *)(v52 + 2 * v995 + 1);
                v55 = 0;
                if ( v998 != v1597[0] && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = (char *)v997 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *v997;
                  *(_QWORD *)(v22 + 2328) = v990;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                if ( v990 == *(_QWORD *)(v22 + 1248) )
                  v999 = 0LL;
                else
                  v999 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v22 + 984))(v990, 1LL);
                v1591 = (__int64)v999;
                if ( v999 )
                {
                  v1000 = *v999;
                  v1001 = v999;
                  if ( *v999 )
                  {
                    v1002 = v1816;
                    v1003 = v1587;
                    do
                    {
                      *v1001 = v1000 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v22 + 480))();
                      v1004 = (unsigned __int8)v1597[0];
                      v52 = v1001[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v52 == v1002 )
                        v1004 = v992;
                      v1005 = v1001[1] >> 6;
                      LOBYTE(v1005) = v1005 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v22 + 1016))(v1005, v1004) )
                      {
                        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
                        {
                          v1006 = *(_QWORD **)(v22 + 2688);
                          v1007 = 48;
                          v1008 = 6LL;
                          do
                          {
                            v1007 -= 8;
                            *v1006 = *(_QWORD *)v1003;
                            v1003 += 8;
                            ++v1006;
                            --v1008;
                          }
                          while ( v1008 );
                          if ( v1007 )
                          {
                            do
                            {
                              v1009 = *v1003++;
                              *(_BYTE *)v1006 = v1009;
                              v1006 = (_QWORD *)((char *)v1006 + 1);
                              --v1007;
                            }
                            while ( v1007 );
                            v1002 = v1816;
                          }
                          v1003 = *(char **)(v22 + 2688);
                        }
                        *((_QWORD *)v1003 + 3) = v52;
                        *((_QWORD *)v1003 + 4) = *v1001;
                        v1003[40] = ((unsigned __int64)*((unsigned int *)v1001 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v22 + 2296) )
                        {
                          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v22 + 2312) = v1003 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v22 + 2320) = *(int *)v1003;
                          *(_QWORD *)(v22 + 2328) = v990;
                          *(_DWORD *)(v22 + 2296) = 1;
                          __b8(v22, 0LL);
                        }
                      }
                      v1001 += 6;
                      v1000 = *v1001;
                    }
                    while ( *v1001 );
                    v999 = (unsigned __int64 *)v1591;
                    v55 = 0;
                  }
                  (*(void (__fastcall **)(unsigned __int64 *))(v22 + 256))(v999);
                }
                (*(void (__fastcall **)(__int64))(v22 + 936))(v990);
                v949 = v1590;
                *(_DWORD *)(v22 + 2088) += 0x8000;
              }
              if ( v1589 )
                (*(void (**)(void))(v22 + 480))();
              v1010 = v949 << 8;
              goto LABEL_1636;
            }
            if ( v947 == v950 )
            {
              v52 = (unsigned __int64)v61;
              if ( (*(int (__fastcall **)(__int64))(v22 + 928))(v950) >= 0 )
              {
                v951 = (*(__int64 (__fastcall **)(__int64))(v22 + 992))(v989);
                v1614 = v951;
                v1814 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v22 + 1000))(v989, &v1595);
                v1603 = (*(__int64 (__fastcall **)(__int64))(v22 + 1008))(v989);
                if ( v951 != 97 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v951 ^ 0x61LL;
                  if ( !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = v989;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                }
                v952 = 0;
                v953 = 0;
                if ( (v951 & 7) == 1 )
                {
                  v952 = 48;
                }
                else if ( (v951 & 7) == 2 )
                {
                  v952 = 16;
                  v953 = 16;
                }
                else if ( (v951 & 7) != 0 && !*(_DWORD *)(v22 + 2296) )
                {
                  v954 = v1587;
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v954;
                  *(_QWORD *)(v22 + 2328) = v989;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                v955 = *(_QWORD *)(v22 + 1480);
                v956 = (unsigned __int64)v951 >> 4;
                v78 = (*(_BYTE *)(v955 + 2 * v956) | (unsigned __int8)v952) == v1814;
                v957 = v1587;
                if ( !v78 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v957;
                  *(_QWORD *)(v22 + 2328) = v989;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                if ( ((unsigned __int8)v953 | *(_BYTE *)(v955 + 2 * v956 + 1)) != v1595 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v957;
                  *(_QWORD *)(v22 + 2328) = v989;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                if ( v989 == *(_QWORD *)(v22 + 1248) )
                  v958 = 0LL;
                else
                  v958 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v22 + 984))(v989, 1LL);
                v1591 = (__int64)v958;
                if ( v958 )
                {
                  v959 = *v958;
                  v960 = v958;
                  if ( *v958 )
                  {
                    v961 = v1814;
                    v962 = v1603;
                    do
                    {
                      *v960 = v959 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v22 + 480))();
                      v963 = v1595;
                      v964 = v960[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v964 == v962 )
                        v963 = v961;
                      v965 = v960[1] >> 6;
                      LOBYTE(v965) = v965 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v22 + 1016))(v965, v963) )
                      {
                        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
                        {
                          v966 = *(_QWORD **)(v22 + 2688);
                          v967 = 48;
                          v968 = 6LL;
                          do
                          {
                            v967 -= 8;
                            *v966 = *(_QWORD *)v52;
                            v52 += 8LL;
                            ++v966;
                            --v968;
                          }
                          while ( v968 );
                          if ( v967 )
                          {
                            do
                            {
                              v969 = *(_BYTE *)v52++;
                              *(_BYTE *)v966 = v969;
                              v966 = (_QWORD *)((char *)v966 + 1);
                              --v967;
                            }
                            while ( v967 );
                            v961 = v1814;
                          }
                          v52 = *(_QWORD *)(v22 + 2688);
                        }
                        *(_QWORD *)(v52 + 24) = v964;
                        *(_QWORD *)(v52 + 32) = *v960;
                        *(_BYTE *)(v52 + 40) = ((unsigned __int64)*((unsigned int *)v960 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v22 + 2296) )
                        {
                          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v22 + 2320) = *(int *)v52;
                          *(_QWORD *)(v22 + 2328) = v989;
                          *(_DWORD *)(v22 + 2296) = 1;
                          __b8(v22, 0LL);
                        }
                      }
                      v960 += 6;
                      v959 = *v960;
                    }
                    while ( *v960 );
                    goto LABEL_1587;
                  }
                  goto LABEL_1588;
                }
                goto LABEL_1589;
              }
            }
            else if ( (*(unsigned int (__fastcall **)(__int64))(v22 + 968))(v950) )
            {
              v52 = (unsigned __int64)v61;
              if ( (*(int (__fastcall **)(__int64))(v22 + 928))(v989) >= 0 )
              {
                v970 = (*(__int64 (__fastcall **)(__int64))(v22 + 992))(v989);
                v1615 = v970;
                v1815 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(v22 + 1000))(v989, &v1596);
                v1603 = (*(__int64 (__fastcall **)(__int64))(v22 + 1008))(v989);
                if ( v970 != 97 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v970 ^ 0x61LL;
                  if ( !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = v989;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                }
                v971 = 0;
                v972 = 0;
                if ( (v970 & 7) == 1 )
                {
                  v971 = 48;
                }
                else if ( (v970 & 7) == 2 )
                {
                  v971 = 16;
                  v972 = 16;
                }
                else if ( (v970 & 7) != 0 && !*(_DWORD *)(v22 + 2296) )
                {
                  v973 = v1587;
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v973;
                  *(_QWORD *)(v22 + 2328) = v989;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                v974 = *(_QWORD *)(v22 + 1480);
                v975 = (unsigned __int64)v970 >> 4;
                v78 = (*(_BYTE *)(v974 + 2 * v975) | (unsigned __int8)v971) == v1815;
                v976 = v1587;
                if ( !v78 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v976;
                  *(_QWORD *)(v22 + 2328) = v989;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                if ( ((unsigned __int8)v972 | *(_BYTE *)(v974 + 2 * v975 + 1)) != v1596 && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v976;
                  *(_QWORD *)(v22 + 2328) = v989;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                if ( v989 == *(_QWORD *)(v22 + 1248) )
                  v958 = 0LL;
                else
                  v958 = (unsigned __int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(v22 + 984))(v989, 1LL);
                v1591 = (__int64)v958;
                if ( v958 )
                {
                  v977 = *v958;
                  v978 = v958;
                  if ( *v958 )
                  {
                    v979 = v1815;
                    v980 = v1603;
                    do
                    {
                      *v978 = v977 & 0xFFFFFFFFFFFFFFFCuLL;
                      (*(void (**)(void))(v22 + 480))();
                      v981 = v1596;
                      v982 = v978[1] & 0xFFFFFFFFFFFF0000uLL;
                      if ( v982 == v980 )
                        v981 = v979;
                      v983 = v978[1] >> 6;
                      LOBYTE(v983) = v983 & 0xF;
                      if ( !(*(unsigned int (__fastcall **)(unsigned __int64, __int64))(v22 + 1016))(v983, v981) )
                      {
                        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
                        {
                          v984 = *(_QWORD **)(v22 + 2688);
                          v985 = 48;
                          v986 = 6LL;
                          do
                          {
                            v985 -= 8;
                            *v984 = *(_QWORD *)v52;
                            v52 += 8LL;
                            ++v984;
                            --v986;
                          }
                          while ( v986 );
                          if ( v985 )
                          {
                            do
                            {
                              v987 = *(_BYTE *)v52++;
                              *(_BYTE *)v984 = v987;
                              v984 = (_QWORD *)((char *)v984 + 1);
                              --v985;
                            }
                            while ( v985 );
                            v979 = v1815;
                          }
                          v52 = *(_QWORD *)(v22 + 2688);
                        }
                        *(_QWORD *)(v52 + 24) = v982;
                        *(_QWORD *)(v52 + 32) = *v978;
                        *(_BYTE *)(v52 + 40) = ((unsigned __int64)*((unsigned int *)v978 + 2) >> 6) & 0xF;
                        if ( !*(_DWORD *)(v22 + 2296) )
                        {
                          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                          *(_QWORD *)(v22 + 2312) = v52 - 0x4C48B4211BBACBEBLL;
                          *(_QWORD *)(v22 + 2320) = *(int *)v52;
                          *(_QWORD *)(v22 + 2328) = v989;
                          *(_DWORD *)(v22 + 2296) = 1;
                          __b8(v22, 0LL);
                        }
                      }
                      v978 += 6;
                      v977 = *v978;
                    }
                    while ( *v978 );
LABEL_1587:
                    v958 = (unsigned __int64 *)v1591;
                  }
LABEL_1588:
                  (*(void (__fastcall **)(unsigned __int64 *))(v22 + 256))(v958);
                }
LABEL_1589:
                (*(void (__fastcall **)(__int64))(v22 + 936))(v989);
                v61 = v1587;
                *(_DWORD *)(v22 + 2088) += 0x8000;
                v949 = v1590;
                v947 = v1589;
              }
            }
            v988 = *(__int64 (__fastcall **)(_QWORD))(v22 + 944);
            v1590 = ++v949;
            v950 = v988(v989);
            continue;
          }
        }
        if ( (v61[42] & 1) != 0 )
        {
          if ( !*(_QWORD *)(v22 + 2432) )
            goto LABEL_1733;
          v1011 = *(_DWORD *)(v22 + 2452);
          if ( (v1011 & 4) != 0 )
            goto LABEL_1733;
          if ( *(_DWORD *)(v22 + 2084) )
          {
            if ( (v1011 & 0x20) != 0 )
              goto LABEL_1733;
          }
          else
          {
            *(_DWORD *)(v22 + 2452) = v1011 ^ ((unsigned __int8)v1011 ^ (unsigned __int8)(8 * v1011)) & 0x20;
          }
        }
        v1012 = *(unsigned int *)(v22 + 2084);
        v1013 = *((unsigned int *)v61 + 9);
        v1608 = *((_QWORD *)v61 + 1);
        v1014 = v1608 + 12 * v1012;
        v1015 = (unsigned int *)(v1014 + 12);
        v1591 = v1014;
        v1594 = v1014 + 12;
        v1016 = v1013 / 0xC;
        v1593 = v1013 / 0xC;
        v1610 = (unsigned int *)(v1608 + 12LL * (unsigned int)(v1013 / 0xC));
        v52 = (unsigned __int64)&v61[v1012 + 48];
        v1589 = v52;
        v1017 = v1013 / 0xC - 1;
        v1817 = v1017;
        if ( (unsigned int)(v1013 / 0xC) )
        {
          v1018 = (unsigned __int64)&v61[((v1017 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
          v1600 = (char *)v1018;
        }
        else
        {
          v1018 = (unsigned __int64)(v61 + 48);
          v1600 = v61 + 48;
          v1817 = v1013 / 0xC - 1;
        }
        BugCheckParameter2 = v1018 + 24LL * *((unsigned __int16 *)v61 + 20);
        if ( !(_DWORD)v1016 || (unsigned int)v1012 >= v1017 )
          goto LABEL_1684;
        while ( 2 )
        {
          if ( *(char *)v52 < 0 )
            goto LABEL_1681;
          v1019 = *(_DWORD *)(v1014 + 4);
          v1020 = *((_QWORD *)v61 + 3) + v1019;
          v1021 = *v1015 - v1019;
          *(_DWORD *)(v22 + 2088) += v1021;
          v1022 = (_QWORD *)v1020;
          v1023 = *(_DWORD *)(v22 + 2068);
          v1024 = (const char *)v1020;
          v1025 = *(_QWORD *)(v22 + 2072);
          v1603 = v1020;
          v1026 = (unsigned int)v1021;
          if ( v1020 < v1021 + v1020 )
          {
            do
            {
              _mm_prefetch(v1024, 0);
              v1024 += 64;
            }
            while ( (unsigned __int64)v1024 < v1021 + v1020 );
          }
          v1027 = v1025;
          v1028 = (unsigned int)v1021 >> 7;
          if ( (unsigned int)v1021 >> 7 )
          {
            do
            {
              v1029 = 8LL;
              do
              {
                v1030 = v1027 ^ *v1022;
                v1031 = v1022[1];
                v1022 += 2;
                v1027 = __ROL8__(__ROL8__(v1030, v1023) ^ v1031, v1023);
                --v1029;
              }
              while ( v1029 );
              v1032 = __ROL8__(v1025 ^ ((unsigned __int64)v1022 - v1020), 17) ^ v1025 ^ ((unsigned __int64)v1022 - v1020);
              v1733 = (v1032 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1023 = ((unsigned __int8)v1733 ^ (unsigned __int8)(v1032 ^ v1023)) & 0x3F;
              if ( !v1023 )
                LOBYTE(v1023) = 1;
              --v1028;
            }
            while ( v1028 );
            v22 = (unsigned __int64)v1588;
          }
          v1033 = v1021 & 0x7F;
          if ( v1033 >= 8 )
          {
            v1034 = (unsigned __int64)v1033 >> 3;
            do
            {
              v1027 = __ROL8__(*v1022++ ^ v1027, v1023);
              v1033 -= 8;
              --v1034;
            }
            while ( v1034 );
          }
          if ( v1033 )
          {
            do
            {
              v1035 = *(unsigned __int8 *)v1022;
              v1022 = (_QWORD *)((char *)v1022 + 1);
              v1027 = __ROL8__(v1035 ^ v1027, v1023);
              --v1033;
            }
            while ( v1033 );
            v52 = v1589;
          }
          for ( ii = v1027; ; LOBYTE(v1027) = ii ^ v1027 )
          {
            ii >>= 7;
            if ( !ii )
              break;
          }
          v1037 = *(_BYTE *)v52;
          v1038 = v1027 & 0x7F;
          if ( v1038 == (*(_BYTE *)v52 & 0x7F) )
          {
LABEL_1678:
            v55 = 0;
          }
          else
          {
            if ( v1026 && (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
            {
              v1039 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1040 = v1020 & 0xFFFFFFFFFFFFF000uLL;
              v1041 = (v1026 - 1 + v1020) | 0xFFF;
              v1042 = v1040 - 1;
              while ( 1 )
              {
                v1043 = v1039;
                while ( 1 )
                {
                  v1044 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v1040, 0LL);
                  if ( v1044 != -1073741267 )
                    break;
                  if ( v1039 > 1u )
                    goto LABEL_1676;
                  v1043 = v1039;
                  __writecr8(v1039);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1044 < 0 )
                  break;
LABEL_1676:
                v1040 += 4096LL;
                v1042 += 4096LL;
                if ( v1042 == v1041 )
                {
                  __writecr8(v1043);
                  goto LABEL_1678;
                }
              }
              __writecr8(v1043);
              v1020 = v1603;
              v1037 = *(_BYTE *)v1589;
            }
            v55 = 0;
            if ( !*(_DWORD *)(v22 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1037 & 0x7F ^ (unsigned __int64)v1038;
              if ( !*(_DWORD *)(v22 + 2296) )
              {
                v61 = v1587;
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v61;
                *(_QWORD *)(v22 + 2328) = v1020;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
LABEL_1680:
                v1014 = v1591;
                *(_DWORD *)(v22 + 2088) += 64;
                v52 = v1589;
                v1015 = (unsigned int *)v1594;
LABEL_1681:
                ++v52;
                v1014 += 12LL;
                v1589 = v52;
                v1015 += 3;
                v1591 = v1014;
                v1594 = (unsigned __int64)v1015;
                if ( v1015 >= v1610 || *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
                {
                  LODWORD(v1016) = v1593;
                  LODWORD(v1012) = ((int)v1014 - (int)v1608) / 12;
                  *(_DWORD *)(v22 + 2084) = v1012;
                  v1018 = (unsigned __int64)v1600;
                  if ( (unsigned int)v1012 < v1817 )
                    goto LABEL_235;
LABEL_1684:
                  if ( *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
                    goto LABEL_235;
                  if ( (_DWORD)v1016 )
                    LODWORD(v1012) = v1012 - v1016 + 1;
                  v1045 = v1018 + 24LL * (unsigned int)v1012;
                  v1591 = v1045;
                  while ( 1 )
                  {
                    v1046 = (int *)(v1045 + 8);
                    v1047 = 2LL;
                    v1589 = 2LL;
                    v1818 = (int *)(v1045 + 8);
                    do
                    {
                      if ( *v1046 < 0 )
                        goto LABEL_1726;
                      v52 = *((_QWORD *)v61 + 3) + (unsigned int)*(v1046 - 2);
                      v1048 = (unsigned int)(*(v1046 - 1) - *(v1046 - 2));
                      *(_DWORD *)(v22 + 2088) += v1048;
                      v1049 = (_QWORD *)v52;
                      v1050 = *(_DWORD *)(v22 + 2068);
                      v1051 = (const char *)v52;
                      v1052 = *(_QWORD *)(v22 + 2072);
                      v1053 = (unsigned int)v1048;
                      v1594 = v52;
                      v1603 = (unsigned int)v1048;
                      if ( v52 < v1048 + v52 )
                      {
                        do
                        {
                          _mm_prefetch(v1051, 0);
                          v1051 += 64;
                        }
                        while ( (unsigned __int64)v1051 < v1048 + v52 );
                      }
                      v1054 = v1052;
                      v1055 = (unsigned int)v1048 >> 7;
                      if ( (unsigned int)v1048 >> 7 )
                      {
                        do
                        {
                          v1056 = 8LL;
                          do
                          {
                            v1057 = v1049[1] ^ __ROL8__(*v1049 ^ v1054, v1050);
                            v1049 += 2;
                            v1054 = __ROL8__(v1057, v1050);
                            --v1056;
                          }
                          while ( v1056 );
                          v1058 = (__ROL8__(v1052 ^ ((unsigned __int64)v1049 - v52), 17) ^ v1052 ^ ((unsigned __int64)v1049
                                                                                                  - v52))
                                * (unsigned __int128)0x7010008004002001uLL;
                          v1734 = *((_QWORD *)&v1058 + 1);
                          v1050 = (BYTE8(v1058) ^ (unsigned __int8)(v1058 ^ v1050)) & 0x3F;
                          if ( !v1050 )
                            LOBYTE(v1050) = 1;
                          --v1055;
                        }
                        while ( v1055 );
                        v22 = (unsigned __int64)v1588;
                        v1053 = v1603;
                        v1046 = v1818;
                        v1047 = v1589;
                      }
                      v1059 = v1048 & 0x7F;
                      if ( v1059 >= 8 )
                      {
                        v1060 = (unsigned __int64)v1059 >> 3;
                        do
                        {
                          v1054 = __ROL8__(*v1049++ ^ v1054, v1050);
                          v1059 -= 8;
                          --v1060;
                        }
                        while ( v1060 );
                      }
                      if ( v1059 )
                      {
                        do
                        {
                          v1061 = *(unsigned __int8 *)v1049;
                          v1049 = (_QWORD *)((char *)v1049 + 1);
                          v1054 = __ROL8__(v1061 ^ v1054, v1050);
                          --v1059;
                        }
                        while ( v1059 );
                        v22 = (unsigned __int64)v1588;
                      }
                      for ( jj = v1054; ; LODWORD(v1054) = jj ^ v1054 )
                      {
                        jj >>= 31;
                        if ( !jj )
                          break;
                      }
                      v1063 = *v1046;
                      v1064 = v1054 & 0x7FFFFFFF;
                      if ( v1064 == (*v1046 & 0x7FFFFFFF) )
                        goto LABEL_1726;
                      if ( !v1053 )
                        goto LABEL_1722;
                      v1065 = 64LL;
                      if ( (*(_DWORD *)(v22 + 2452) & 0x40) == 0 )
                        goto LABEL_1722;
                      v1066 = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v1067 = v52 & 0xFFFFFFFFFFFFF000uLL;
                      v1068 = (v52 + v1053 - 1) | 0xFFF;
                      v1069 = (v52 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      do
                      {
                        v52 = v1066;
                        while ( 1 )
                        {
                          v1070 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                                    v1067,
                                    0LL,
                                    v1065,
                                    v1049);
                          if ( v1070 != -1073741267 )
                            break;
                          if ( v1066 > 1u )
                            goto LABEL_1730;
                          v52 = v1066;
                          __writecr8(v1066);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v1070 < 0 )
                        {
                          __writecr8(v52);
                          v1046 = v1818;
                          v52 = v1594;
                          v1047 = v1589;
                          v61 = v1587;
                          v1063 = *v1818;
LABEL_1722:
                          v1071 = v1063;
                          if ( !*(_DWORD *)(v22 + 2296) )
                          {
                            LODWORD(v1071) = v1063 & 0x7FFFFFFF;
                            *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1071 ^ v1064;
                            if ( !*(_DWORD *)(v22 + 2296) )
                            {
                              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                              *(_QWORD *)(v22 + 2320) = *(int *)v61;
                              *(_QWORD *)(v22 + 2328) = v52;
                              *(_DWORD *)(v22 + 2296) = 1;
                              __b8(v22, 0LL);
                              goto LABEL_1725;
                            }
                          }
                          goto LABEL_1726;
                        }
LABEL_1730:
                        v1067 += 4096LL;
                        v1069 += 4096LL;
                      }
                      while ( v1069 != v1068 );
                      __writecr8(v52);
                      v1047 = v1589;
LABEL_1725:
                      v1046 = v1818;
LABEL_1726:
                      v61 = v1587;
                      v1046 += 3;
                      --v1047;
                      v1818 = v1046;
                      v1589 = v1047;
                    }
                    while ( v1047 );
                    v1072 = v1591;
                    ++*(_DWORD *)(v22 + 2084);
                    v1045 = v1072 + 24;
                    v1591 = v1045;
                    if ( v1045 == BugCheckParameter2 )
                    {
                      v55 = 0;
                      goto LABEL_1733;
                    }
                    if ( *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
                      goto LABEL_234;
                  }
                }
                continue;
              }
            }
          }
          break;
        }
        v61 = v1587;
        goto LABEL_1680;
      }
      if ( v86 == 38 )
      {
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 416))(v1776, *((unsigned int *)v61 + 11));
        v1522 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v22 + 464))(v1776, v1777);
        __asm { xgetbv }
        v1524 = v1522 | (v1523 << 32);
        (*(void (__fastcall **)(_BYTE *))(v22 + 408))(v1777);
        v1525 = *((_QWORD *)v61 + 4);
        v1526 = v1524 & *((_QWORD *)v61 + 3);
        if ( v1526 == v1525 )
          goto LABEL_235;
        v250 = *((_QWORD *)v61 + 5);
        if ( *(_DWORD *)(v22 + 2296) )
          goto LABEL_235;
        *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1526 ^ v1525;
        v115 = *(_DWORD *)(v22 + 2296);
        goto LABEL_454;
      }
      if ( v86 <= 42 )
      {
        *(_DWORD *)(v22 + 2088) += *((_DWORD *)v61 + 9);
        v1402 = *((unsigned int *)v61 + 9);
        v1403 = (_QWORD *)(v22 + *((unsigned int *)v61 + 8));
        v1404 = *(_DWORD *)(v22 + 2068);
        v1405 = v1403;
        v52 = *(_QWORD *)(v22 + 2072);
        v1406 = (const char *)v1403;
        if ( v1403 < (_QWORD *)((char *)v1403 + v1402) )
        {
          do
          {
            _mm_prefetch(v1406, 0);
            v1406 += 64;
          }
          while ( v1406 < (const char *)v1403 + v1402 );
        }
        v1407 = *(_QWORD *)(v22 + 2072);
        v1408 = (unsigned int)v1402 >> 7;
        if ( (unsigned int)v1402 >> 7 )
        {
          do
          {
            v1409 = 8LL;
            do
            {
              v1410 = v1405[1] ^ __ROL8__(*v1405 ^ v1407, v1404);
              v1405 += 2;
              v1407 = __ROL8__(v1410, v1404);
              --v1409;
            }
            while ( v1409 );
            v1411 = (__ROL8__(v52 ^ ((char *)v1405 - (char *)v1403), 17) ^ v52 ^ ((char *)v1405 - (char *)v1403))
                  * (unsigned __int128)0x7010008004002001uLL;
            v1746 = *((_QWORD *)&v1411 + 1);
            v1404 = (BYTE8(v1411) ^ (unsigned __int8)(v1411 ^ v1404)) & 0x3F;
            if ( !v1404 )
              LOBYTE(v1404) = 1;
            --v1408;
          }
          while ( v1408 );
          v22 = (unsigned __int64)v1588;
        }
        v1412 = v1402 & 0x7F;
        if ( v1412 >= 8 )
        {
          v1413 = (unsigned __int64)v1412 >> 3;
          do
          {
            v1407 = __ROL8__(*v1405++ ^ v1407, v1404);
            v1412 -= 8;
            --v1413;
          }
          while ( v1413 );
        }
        for ( ; v1412; --v1412 )
        {
          v1414 = *(unsigned __int8 *)v1405;
          v1405 = (_QWORD *)((char *)v1405 + 1);
          v1407 = __ROL8__(v1414 ^ v1407, v1404);
        }
        v1415 = *((_QWORD *)v61 + 3);
        if ( v1407 == v1415 )
          goto LABEL_235;
        v1416 = *(_DWORD *)(v22 + 2296);
        if ( !v1416 )
        {
          *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1407 ^ v1415;
          v1416 = *(_DWORD *)(v22 + 2296);
        }
        v1417 = v22 + *((unsigned int *)v61 + 8);
        if ( v1416 )
          goto LABEL_235;
        *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v22 + 2320) = *(int *)v61;
        *(_QWORD *)(v22 + 2328) = v1417;
        goto LABEL_2323;
      }
      if ( v86 == 43 )
        goto LABEL_2128;
      if ( v86 != 44 )
      {
        if ( v86 == 46 )
        {
          if ( (*(_DWORD *)(v22 + 2096) & 1) != 0 )
            goto LABEL_235;
          v1173 = 0;
          v52 = *(_QWORD *)(v22 + 1352);
          (*(void (**)(void))(v22 + 376))();
          if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 || (v1174 = *(_DWORD *)(v22 + 2384), v1174 >= 7) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 296))(*(_QWORD *)(v22 + 2560), 0LL);
            v1175 = 0x80;
          }
          else
          {
            v1175 = 1 << v1174;
          }
          (*(void (__fastcall **)(unsigned __int64, _QWORD))(v22 + 312))(v52, 0LL);
          if ( v1175 == (char)0x80 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 304))(*(_QWORD *)(v22 + 2560), 0LL);
          }
          else
          {
            v1176 = *(volatile signed __int8 ***)(v22 + 1312);
            v1177 = *v1176;
            if ( *v1176 != (volatile signed __int8 *)v1176 )
            {
              v1178 = ~v1175;
              do
              {
                _InterlockedAnd8(&v1177[*(_QWORD *)(v22 + 1720) - *(_QWORD *)(v22 + 1744)], v1178);
                v1177 = *(volatile signed __int8 **)v1177;
                ++v1173;
              }
              while ( v1177 != (volatile signed __int8 *)v1176 );
            }
          }
          (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 1352), 0LL);
          (*(void (**)(void))(v22 + 384))();
          v1010 = v1173 << 7;
LABEL_1636:
          *(_DWORD *)(v22 + 2088) += v1010;
          goto LABEL_235;
        }
        if ( v86 == 47 )
        {
          v1605 = *(_QWORD *)(*(_QWORD *)(v22 + 1704)
                            + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v22 + 1608))
                            + *(_QWORD *)(v22 + 1672));
          v1163 = (*(__int64 (**)(void))(v22 + 1168))();
          if ( v1163 == 0xFFFFFFFFLL )
          {
            v1605 = 0LL;
            v1164 = *(_QWORD *)(v22 + 2440);
            if ( !v1164 )
              goto LABEL_1894;
            v1165 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v22 + 1152))(v1164, &v1605);
            v1166 = v1605;
            if ( v1165 < 0 )
              v1166 = 0LL;
            v1605 = v1166;
            if ( !v1166 )
LABEL_1894:
              v1605 = (*(__int64 (__fastcall **)(_QWORD))(v22 + 960))(0LL);
            *(_QWORD *)(v22 + 2440) = 0LL;
            v1167 = 0;
            if ( !v1605 )
              goto LABEL_1903;
            LODWORD(v52) = 1;
            while ( 1 )
            {
              ++v1167;
              if ( (*(int (**)(void))(v22 + 928))() >= 0 )
              {
                (*(void (__fastcall **)(__int64, _BYTE *))(v22 + 1080))(v1605, v1796);
                v1163 = (*(__int64 (**)(void))(v22 + 1168))();
                (*(void (__fastcall **)(_BYTE *))(v22 + 1088))(v1796);
                (*(void (__fastcall **)(__int64))(v22 + 936))(v1605);
                if ( v1163 != 0xFFFFFFFFLL || v1167 > 0x100 )
                  break;
              }
              v1605 = (*(__int64 (__fastcall **)(__int64))(v22 + 960))(v1605);
              if ( !v1605 )
                goto LABEL_1903;
            }
            *(_QWORD *)(v22 + 2440) = (*(__int64 (__fastcall **)(__int64))(v22 + 1160))(v1605);
            (*(void (__fastcall **)(__int64))(v22 + 480))(v1605);
            if ( v1163 == 0xFFFFFFFFLL )
            {
LABEL_1903:
              *(_DWORD *)(v22 + 2088) += v1167 << 12;
              goto LABEL_235;
            }
          }
          else
          {
            LODWORD(v52) = 1;
          }
          if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
          {
            v1168 = *(_QWORD **)(v22 + 2688);
            v1169 = 48;
            v1170 = 6LL;
            do
            {
              v1169 -= 8;
              *v1168 = *(_QWORD *)v61;
              v61 += 8;
              ++v1168;
              --v1170;
            }
            while ( v1170 );
            for ( ; v1169; --v1169 )
            {
              v1171 = *v61++;
              *(_BYTE *)v1168 = v1171;
              v1168 = (_QWORD *)((char *)v1168 + 1);
            }
            v61 = *(char **)(v22 + 2688);
          }
          *((_QWORD *)v61 + 3) = v1163;
          v1172 = v1605;
          if ( *(_DWORD *)(v22 + 2296) )
            goto LABEL_235;
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v1172;
          *(_DWORD *)(v22 + 2296) = 1;
          goto LABEL_457;
        }
        if ( v86 != 48 )
          goto LABEL_2324;
        if ( !*((_DWORD *)v61 + 4) )
          goto LABEL_235;
        if ( (*(_DWORD *)(v22 + 2452) & 0x4000) != 0 )
        {
          v1109 = *(volatile signed __int32 **)(v22 + 1248);
          while ( 1 )
          {
            _disable();
            if ( !_interlockedbittestandset(v1109, (*(_DWORD *)(v22 + 2448) >> 10) & 0x1F) )
              break;
            _enable();
            _mm_pause();
          }
        }
        if ( (*((_DWORD *)v61 + 6) & 1) == 0 )
        {
          v1110 = (_QWORD *)*((_QWORD *)v61 + 1);
          v1111 = *((unsigned int *)v61 + 4);
          v1112 = v1110;
          *(_DWORD *)(v22 + 2088) += v1111;
          v1113 = (const char *)v1110;
          v1114 = *(_DWORD *)(v22 + 2068);
          v1115 = *(_QWORD *)(v22 + 2072);
          if ( v1110 < (_QWORD *)((char *)v1110 + v1111) )
          {
            do
            {
              _mm_prefetch(v1113, 0);
              v1113 += 64;
            }
            while ( v1113 < (const char *)v1110 + v1111 );
          }
          v1116 = *(_QWORD *)(v22 + 2072);
          v1117 = (unsigned int)v1111 >> 7;
          if ( (unsigned int)v1111 >> 7 )
          {
            do
            {
              v1118 = 8LL;
              do
              {
                v1119 = v1112[1] ^ __ROL8__(*v1112 ^ v1116, v1114);
                v1112 += 2;
                v1116 = __ROL8__(v1119, v1114);
                --v1118;
              }
              while ( v1118 );
              v1120 = (__ROL8__(v1115 ^ ((char *)v1112 - (char *)v1110), 17) ^ v1115 ^ (unsigned __int64)((char *)v1112 - (char *)v1110))
                    * (unsigned __int128)0x7010008004002001uLL;
              v1737 = *((_QWORD *)&v1120 + 1);
              v1114 = (BYTE8(v1120) ^ (unsigned __int8)(v1120 ^ v1114)) & 0x3F;
              if ( !v1114 )
                LOBYTE(v1114) = 1;
              --v1117;
            }
            while ( v1117 );
            v22 = (unsigned __int64)v1588;
          }
          v1121 = v1111 & 0x7F;
          if ( v1121 >= 8 )
          {
            v1122 = (unsigned __int64)v1121 >> 3;
            do
            {
              v1116 = __ROL8__(*v1112++ ^ v1116, v1114);
              v1121 -= 8;
              --v1122;
            }
            while ( v1122 );
          }
          for ( ; v1121; --v1121 )
          {
            v1123 = *(unsigned __int8 *)v1112;
            v1112 = (_QWORD *)((char *)v1112 + 1);
            v1116 = __ROL8__(v1123 ^ v1116, v1114);
          }
          for ( kk = v1116; ; LODWORD(v1116) = kk ^ v1116 )
          {
            kk >>= 31;
            if ( !kk )
              break;
          }
          v1125 = v1116 & 0x7FFFFFFF;
          if ( v1125 != *((_DWORD *)v61 + 5) )
          {
            if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
              v55 = 1;
            v1126 = *((unsigned int *)v61 + 4);
            v1127 = *((_QWORD *)v61 + 1);
            if ( *((_DWORD *)v61 + 4) )
            {
              v1128 = 64LL;
              if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
              {
                v1129 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1130 = v1127 & 0xFFFFFFFFFFFFF000uLL;
                v1821 = (v1127 + v1126 - 1) | 0xFFF;
                v1131 = (v1127 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v1132 = v1129;
                  while ( 1 )
                  {
                    v1133 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                              v1130,
                              0LL,
                              v1128,
                              v1112);
                    if ( v1133 != -1073741267 )
                      break;
                    if ( v55 )
                      goto LABEL_1839;
                    if ( v1129 > 1u )
                      goto LABEL_1837;
                    v1132 = v1129;
                    __writecr8(v1129);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1133 < 0 )
                    break;
LABEL_1837:
                  v1130 += 4096LL;
                  v1131 += 4096LL;
                  if ( v1131 == v1821 )
                    goto LABEL_1838;
                }
LABEL_1839:
                v61 = v1587;
                __writecr8(v1132);
              }
            }
            v1134 = *((unsigned int *)v61 + 5);
LABEL_1841:
            v1135 = *(_DWORD *)(v22 + 2296);
            if ( !v1135 )
            {
              *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1125 ^ v1134;
              v1135 = *(_DWORD *)(v22 + 2296);
            }
            v1136 = *((_QWORD *)v61 + 1);
            if ( !v1135 )
            {
              LODWORD(v52) = 1;
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *(int *)v61;
              *(_QWORD *)(v22 + 2328) = v1136;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
              goto LABEL_1887;
            }
          }
LABEL_1886:
          LODWORD(v52) = 1;
LABEL_1887:
          if ( (*(_DWORD *)(v22 + 2452) & 0x4000) != 0 )
          {
            _InterlockedAnd(*(volatile signed __int32 **)(v22 + 1248), ~(1 << ((*(_DWORD *)(v22 + 2448) >> 10) & 0x1F)));
            _enable();
          }
          goto LABEL_234;
        }
        if ( *(_QWORD *)(v22 + 2432) )
        {
          v1137 = *(_DWORD *)(v22 + 2452);
          LOBYTE(v1138) = v1137;
          if ( !*(_DWORD *)(v22 + 2084) )
          {
            v1138 = v1137 ^ ((unsigned __int8)v1137 ^ (unsigned __int8)(8 * v1137)) & 0x20;
            *(_DWORD *)(v22 + 2452) = v1138;
            goto LABEL_1849;
          }
          if ( (((unsigned __int8)v1137 ^ (unsigned __int8)(v1137 >> 3)) & 4) == 0 )
          {
LABEL_1849:
            if ( (v1138 & 4) != 0 )
            {
              v1139 = *((_QWORD *)v61 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v1140 = ((*((_DWORD *)v61 + 2) & 0xFFF) + (unsigned __int64)*((unsigned int *)v61 + 4) + 4095) >> 12;
              if ( v1140 )
              {
                LODWORD(v52) = 1;
                do
                {
                  --v1140;
                  if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v22 + 688))(v1139)
                    && !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = v1139;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                  *(_DWORD *)(v22 + 2088) += 256;
                  v1139 += 4096LL;
                }
                while ( v1140 );
                goto LABEL_1887;
              }
            }
            else
            {
              v1141 = (_QWORD *)*((_QWORD *)v61 + 1);
              v1142 = *((unsigned int *)v61 + 4);
              v1143 = v1141;
              *(_DWORD *)(v22 + 2088) += v1142;
              v1144 = (const char *)v1141;
              v1145 = *(_DWORD *)(v22 + 2068);
              v1146 = *(_QWORD *)(v22 + 2072);
              if ( v1141 < (_QWORD *)((char *)v1141 + v1142) )
              {
                do
                {
                  _mm_prefetch(v1144, 0);
                  v1144 += 64;
                }
                while ( v1144 < (const char *)v1141 + v1142 );
              }
              v1147 = *(_QWORD *)(v22 + 2072);
              v1148 = (unsigned int)v1142 >> 7;
              if ( (unsigned int)v1142 >> 7 )
              {
                do
                {
                  v1149 = 8LL;
                  do
                  {
                    v1150 = v1143[1] ^ __ROL8__(*v1143 ^ v1147, v1145);
                    v1143 += 2;
                    v1147 = __ROL8__(v1150, v1145);
                    --v1149;
                  }
                  while ( v1149 );
                  v1151 = (__ROL8__(v1146 ^ ((char *)v1143 - (char *)v1141), 17) ^ v1146 ^ (unsigned __int64)((char *)v1143 - (char *)v1141))
                        * (unsigned __int128)0x7010008004002001uLL;
                  v1738 = *((_QWORD *)&v1151 + 1);
                  v1145 = (BYTE8(v1151) ^ (unsigned __int8)(v1151 ^ v1145)) & 0x3F;
                  if ( !v1145 )
                    LOBYTE(v1145) = 1;
                  --v1148;
                }
                while ( v1148 );
                v22 = (unsigned __int64)v1588;
              }
              v1152 = v1142 & 0x7F;
              if ( v1152 >= 8 )
              {
                v1153 = (unsigned __int64)v1152 >> 3;
                do
                {
                  v1147 = __ROL8__(*v1143++ ^ v1147, v1145);
                  v1152 -= 8;
                  --v1153;
                }
                while ( v1153 );
              }
              for ( ; v1152; --v1152 )
              {
                v1154 = *(unsigned __int8 *)v1143;
                v1143 = (_QWORD *)((char *)v1143 + 1);
                v1147 = __ROL8__(v1154 ^ v1147, v1145);
              }
              for ( mm = v1147; ; LODWORD(v1147) = mm ^ v1147 )
              {
                mm >>= 31;
                if ( !mm )
                  break;
              }
              v1134 = *((unsigned int *)v61 + 5);
              v1125 = v1147 & 0x7FFFFFFF;
              if ( v1125 != (_DWORD)v1134 )
              {
                v1156 = *((unsigned int *)v61 + 4);
                v1157 = *((_QWORD *)v61 + 1);
                if ( !*((_DWORD *)v61 + 4) || (*(_DWORD *)(v22 + 2452) & 0x40) == 0 )
                  goto LABEL_1841;
                v1158 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1159 = v1157 & 0xFFFFFFFFFFFFF000uLL;
                v1160 = (v1157 + v1156 - 1) | 0xFFF;
                v1161 = (v1157 & 0xFFFFFFFFFFFFF000uLL) - 1;
                do
                {
                  v1132 = v1158;
                  while ( 1 )
                  {
                    v1162 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v1159, 0LL);
                    if ( v1162 != -1073741267 )
                      break;
                    if ( v1158 > 1u )
                      goto LABEL_1883;
                    v1132 = v1158;
                    __writecr8(v1158);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1162 < 0 )
                    goto LABEL_1839;
LABEL_1883:
                  v1159 += 4096LL;
                  v1161 += 4096LL;
                }
                while ( v1161 != v1160 );
LABEL_1838:
                __writecr8(v1132);
              }
            }
            goto LABEL_1886;
          }
        }
        *(_DWORD *)(v22 + 2084) = 0;
        goto LABEL_1886;
      }
      v1179 = *((_DWORD *)v61 + 8);
      v1593 = v22;
      if ( (v1179 & 2) == 0 )
        goto LABEL_1988;
      if ( !*(_QWORD *)(v22 + 2432) )
        goto LABEL_1733;
      v1180 = *(_DWORD *)(v22 + 2452);
      if ( (v1180 & 4) != 0 )
        goto LABEL_1733;
      if ( (v1179 & 2) != 0 )
      {
        v1181 = *(_DWORD *)(v22 + 2452);
        if ( *(_DWORD *)(v22 + 2084) )
        {
          if ( (((unsigned __int8)v1180 ^ (unsigned __int8)(v1180 >> 3)) & 4) != 0 )
            goto LABEL_1733;
        }
        else
        {
          v1181 = v1180 ^ ((unsigned __int8)v1180 ^ (unsigned __int8)(8 * v1180)) & 0x20;
          *(_DWORD *)(v22 + 2452) = v1181;
        }
        if ( !*(_QWORD *)(v22 + 2432) )
          goto LABEL_1987;
        LOBYTE(v1182) = v1181;
        if ( !*(_DWORD *)(v22 + 2084) )
        {
          v1182 = v1181 ^ ((unsigned __int8)v1181 ^ (unsigned __int8)(8 * v1181)) & 0x20;
          *(_DWORD *)(v22 + 2452) = v1182;
          goto LABEL_1936;
        }
        if ( (((unsigned __int8)v1181 ^ (unsigned __int8)(v1181 >> 3)) & 4) != 0 )
        {
LABEL_1987:
          *(_DWORD *)(v22 + 2084) = 0;
          goto LABEL_1974;
        }
LABEL_1936:
        if ( (v1182 & 4) != 0 )
        {
          v1183 = *((_QWORD *)v61 + 1) & 0xFFFFFFFFFFFFF000uLL;
          v1184 = (*((unsigned int *)v61 + 4) + (unsigned __int64)(*((_DWORD *)v61 + 2) & 0xFFF) + 4095) >> 12;
          if ( v1184 )
          {
            LODWORD(v52) = 1;
            do
            {
              --v1184;
              if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v22 + 688))(v1183) && !*(_DWORD *)(v22 + 2296) )
              {
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v61;
                *(_QWORD *)(v22 + 2328) = v1183;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
              }
              *(_DWORD *)(v22 + 2088) += 256;
              v1183 += 4096LL;
            }
            while ( v1184 );
          }
          goto LABEL_1974;
        }
        v1185 = (_QWORD *)*((_QWORD *)v61 + 1);
        v1186 = *((unsigned int *)v61 + 4);
        v1187 = v1185;
        *(_DWORD *)(v22 + 2088) += v1186;
        v1188 = (const char *)v1185;
        v1189 = *(_DWORD *)(v22 + 2068);
        v52 = *(_QWORD *)(v22 + 2072);
        if ( v1185 < (_QWORD *)((char *)v1185 + v1186) )
        {
          do
          {
            _mm_prefetch(v1188, 0);
            v1188 += 64;
          }
          while ( v1188 < (const char *)v1185 + v1186 );
        }
        v1190 = *(_QWORD *)(v22 + 2072);
        v1191 = (unsigned int)v1186 >> 7;
        if ( (unsigned int)v1186 >> 7 )
        {
          do
          {
            v1192 = 8LL;
            do
            {
              v1193 = v1190 ^ *v1187;
              v1194 = v1187[1];
              v1187 += 2;
              v1190 = __ROL8__(__ROL8__(v1193, v1189) ^ v1194, v1189);
              --v1192;
            }
            while ( v1192 );
            v1195 = __ROL8__(v52 ^ ((char *)v1187 - (char *)v1185), 17) ^ v52 ^ ((char *)v1187 - (char *)v1185);
            v1739 = (v1195 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1189 = ((unsigned __int8)(v1739 ^ v1195) ^ (unsigned __int8)v1189) & 0x3F;
            if ( !v1189 )
              LOBYTE(v1189) = 1;
            --v1191;
          }
          while ( v1191 );
          v22 = (unsigned __int64)v1588;
        }
        v1196 = v1186 & 0x7F;
        if ( v1196 >= 8 )
        {
          v1197 = (unsigned __int64)v1196 >> 3;
          do
          {
            v1190 = __ROL8__(*v1187++ ^ v1190, v1189);
            v1196 -= 8;
            --v1197;
          }
          while ( v1197 );
        }
        if ( v1196 )
        {
          do
          {
            v1198 = *(unsigned __int8 *)v1187;
            v1187 = (_QWORD *)((char *)v1187 + 1);
            v1190 = __ROL8__(v1198 ^ v1190, v1189);
            --v1196;
          }
          while ( v1196 );
          v22 = (unsigned __int64)v1588;
        }
        for ( nn = v1190; ; LODWORD(v1190) = nn ^ v1190 )
        {
          nn >>= 31;
          if ( !nn )
            break;
        }
        v1200 = *((_DWORD *)v61 + 5);
        v1201 = v1190 & 0x7FFFFFFF;
        if ( v1201 != v1200 )
        {
          v1202 = *((unsigned int *)v61 + 4);
          v1203 = *((_QWORD *)v61 + 1);
          if ( *((_DWORD *)v61 + 4) && (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
          {
            v1204 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1205 = v1203 & 0xFFFFFFFFFFFFF000uLL;
            v1206 = (v1203 + v1202 - 1) | 0xFFF;
            v1207 = (v1203 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v52 = v1204;
              while ( 1 )
              {
                v1208 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v1205, 0LL);
                if ( v1208 != -1073741267 )
                  break;
                if ( v1204 > 1u )
                  goto LABEL_1971;
                v52 = v1204;
                __writecr8(v1204);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1208 < 0 )
                break;
LABEL_1971:
              v1205 += 4096LL;
              v1207 += 4096LL;
              if ( v1207 == v1206 )
                goto LABEL_1972;
            }
            __writecr8(v52);
            v61 = v1587;
            v55 = 0;
            v1200 = *((_DWORD *)v1587 + 5);
          }
          v1212 = *(_DWORD *)(v22 + 2296);
          if ( !v1212 )
          {
            v1213 = v1200 ^ (unsigned __int64)v1201;
            goto LABEL_1984;
          }
          goto LABEL_1985;
        }
      }
      else
      {
LABEL_1988:
        v1215 = (_QWORD *)*((_QWORD *)v61 + 1);
        v1216 = *((unsigned int *)v61 + 4);
        v1217 = v1215;
        *(_DWORD *)(v22 + 2088) += v1216;
        v1218 = (const char *)v1215;
        v1219 = *(_DWORD *)(v22 + 2068);
        v52 = *(_QWORD *)(v22 + 2072);
        if ( v1215 < (_QWORD *)((char *)v1215 + v1216) )
        {
          do
          {
            _mm_prefetch(v1218, 0);
            v1218 += 64;
          }
          while ( v1218 < (const char *)v1215 + v1216 );
        }
        v1220 = *(_QWORD *)(v22 + 2072);
        v1221 = (unsigned int)v1216 >> 7;
        if ( (unsigned int)v1216 >> 7 )
        {
          do
          {
            v1222 = 8LL;
            do
            {
              v1223 = v1217[1] ^ __ROL8__(*v1217 ^ v1220, v1219);
              v1217 += 2;
              v1220 = __ROL8__(v1223, v1219);
              --v1222;
            }
            while ( v1222 );
            v1224 = __ROL8__(v52 ^ ((char *)v1217 - (char *)v1215), 17) ^ v52 ^ ((char *)v1217 - (char *)v1215);
            v1740 = (v1224 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v1219 = ((unsigned __int8)(v1740 ^ v1224) ^ (unsigned __int8)v1219) & 0x3F;
            if ( !v1219 )
              LOBYTE(v1219) = 1;
            --v1221;
          }
          while ( v1221 );
          v22 = (unsigned __int64)v1588;
        }
        v1225 = v1216 & 0x7F;
        if ( v1225 >= 8 )
        {
          v1226 = (unsigned __int64)v1225 >> 3;
          do
          {
            v1220 = __ROL8__(*v1217++ ^ v1220, v1219);
            v1225 -= 8;
            --v1226;
          }
          while ( v1226 );
        }
        for ( ; v1225; --v1225 )
        {
          v1227 = *(unsigned __int8 *)v1217;
          v1217 = (_QWORD *)((char *)v1217 + 1);
          v1220 = __ROL8__(v1227 ^ v1220, v1219);
        }
        for ( i1 = v1220; ; LODWORD(v1220) = i1 ^ v1220 )
        {
          i1 >>= 31;
          if ( !i1 )
            break;
        }
        v1229 = v1220 & 0x7FFFFFFF;
        if ( v1229 == *((_DWORD *)v61 + 5) )
        {
LABEL_1973:
          v55 = 0;
          goto LABEL_1974;
        }
        if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
          v55 = 1;
        v1230 = *((unsigned int *)v61 + 4);
        v1231 = *((_QWORD *)v61 + 1);
        if ( *((_DWORD *)v61 + 4) )
        {
          v1232 = 64LL;
          if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
          {
            v1233 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v1234 = v1231 & 0xFFFFFFFFFFFFF000uLL;
            v1823 = (v1231 + v1230 - 1) | 0xFFF;
            v1235 = (v1231 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v52 = v1233;
              while ( 1 )
              {
                v1236 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                          v1234,
                          0LL,
                          v1232,
                          v1217);
                if ( v1236 != -1073741267 )
                  break;
                if ( v55 )
                  goto LABEL_2020;
                if ( v1233 > 1u )
                  goto LABEL_2018;
                v52 = v1233;
                __writecr8(v1233);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v1236 < 0 )
                break;
LABEL_2018:
              v1234 += 4096LL;
              v1235 += 4096LL;
              if ( v1235 == v1823 )
              {
LABEL_1972:
                __writecr8(v52);
                v61 = v1587;
                goto LABEL_1973;
              }
            }
LABEL_2020:
            __writecr8(v52);
            v61 = v1587;
          }
        }
        v1212 = *(_DWORD *)(v22 + 2296);
        v55 = 0;
        if ( !v1212 )
        {
          v1213 = *((unsigned int *)v61 + 5) ^ (unsigned __int64)v1229;
LABEL_1984:
          *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1213;
          v1212 = *(_DWORD *)(v22 + 2296);
        }
LABEL_1985:
        v1214 = *((_QWORD *)v61 + 1);
        if ( !v1212 )
        {
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v1214;
          *(_DWORD *)(v22 + 2296) = 1;
          __b8(v22, 0LL);
        }
      }
LABEL_1974:
      if ( (*((_DWORD *)v61 + 8) & 1) == 0 )
        goto LABEL_235;
      v1209 = *((_QWORD *)v61 + 3);
      v1210 = (*(__int64 (__fastcall **)(__int64))(v22 + 504))(v1209);
      v52 = v1210 + *(unsigned __int16 *)(v1210 + 20) + 24LL;
      v1589 = v52 + 40LL * *(unsigned __int16 *)(v1210 + 6);
      if ( v52 == v1589 )
        goto LABEL_235;
      v1211 = *(_DWORD *)(v22 + 2084);
      if ( !v1211 )
      {
        *(_DWORD *)(v22 + 2084) = 4096;
        v1211 = 4096;
      }
      v1822 = v1209 == *(_QWORD *)(v22 + 1512) || v1209 == *(_QWORD *)(v22 + 1520);
      while ( 2 )
      {
        v1237 = *(_DWORD *)(v52 + 16);
        v1238 = *(_DWORD *)(v52 + 12);
        if ( v1237 <= *(_DWORD *)(v52 + 8) )
          v1237 = *(_DWORD *)(v52 + 8);
        v1239 = (v1237 + v1238 + 4095) & 0xFFFFF000;
        if ( v1211 >= v1239 )
          goto LABEL_2043;
        if ( (*(_DWORD *)(v52 + 36) & 0x2000000) != 0 )
          goto LABEL_2042;
        v1240 = *(_DWORD *)v52;
        if ( *(_DWORD *)v52 == 1414090313 && *(_DWORD *)(v52 + 4) == 1195525195 )
          goto LABEL_2042;
        if ( v1240 == 1162297680 )
        {
          v1241 = *(_WORD *)(v52 + 4);
          if ( v1241 == 30839 || v1241 == 29303 || v1241 == 30583 )
            goto LABEL_2042;
        }
        if ( v1240 == 1095914053 && *(_WORD *)(v52 + 4) == 16724 )
          goto LABEL_2042;
        if ( v1593 )
        {
          v1242 = *(char **)(v1593 + 2352);
          *((_QWORD *)&v1671 + 1) = *(_QWORD *)(v1593 + 2360);
          v1672 = *(_OWORD *)(v1593 + 2368);
          *(_QWORD *)&v1671 = v1242;
        }
        else
        {
          v1671 = *(_OWORD *)VfExcludeSections;
          v1242 = VfExcludeSections[0];
          v1672 = *(_OWORD *)off_140C0F050;
        }
        v1243 = 7;
        v1244 = (unsigned __int8 *)v52;
        while ( 1 )
        {
          v1245 = *v1244++;
          v1246 = (unsigned __int8)*v1242++;
          if ( v1245 != v1246 )
            break;
          if ( !--v1243 )
            goto LABEL_2042;
        }
        v1249 = (__int64 *)*((_QWORD *)&v1671 + 1);
        v1250 = 8;
        v1251 = (__int64 *)v52;
        do
        {
          v1252 = *v1251++;
          v1253 = *v1249++;
          if ( v1252 != v1253 )
            goto LABEL_2053;
          v1250 -= 8;
        }
        while ( v1250 >= 8 );
        if ( !v1250 )
          goto LABEL_2042;
        while ( 1 )
        {
          v1254 = *(unsigned __int8 *)v1251;
          v1251 = (__int64 *)((char *)v1251 + 1);
          v1255 = *(unsigned __int8 *)v1249;
          v1249 = (__int64 *)((char *)v1249 + 1);
          if ( v1254 != v1255 )
            break;
          if ( !--v1250 )
            goto LABEL_2042;
        }
LABEL_2053:
        v1256 = (unsigned __int8 *)v1672;
        v1257 = 4;
        v1258 = (unsigned __int8 *)v52;
        while ( 1 )
        {
          v1259 = *v1258++;
          v1260 = *v1256++;
          if ( v1259 != v1260 )
            break;
          if ( !--v1257 )
            goto LABEL_2042;
        }
        v1261 = (unsigned __int8 *)*((_QWORD *)&v1672 + 1);
        v1262 = 6;
        v1263 = (unsigned __int8 *)v52;
        while ( 1 )
        {
          v1264 = *v1263++;
          v1265 = *v1261++;
          if ( v1264 != v1265 )
            break;
          if ( !--v1262 )
            goto LABEL_2042;
        }
        v1266 = *(_DWORD *)(v52 + 36);
        if ( v1266 < 0 || (v1266 & 0x20000000) == 0 )
        {
LABEL_2042:
          v1211 = v1239;
LABEL_2043:
          v1247 = v1593;
          goto LABEL_2044;
        }
        v1267 = 1;
        if ( v1822 && *(_DWORD *)v52 != 778396769 )
          v1267 = *(_DWORD *)v52 == 1162297680;
        v1247 = v1593;
        if ( v1211 >= v1238 )
          v1238 = v1211;
        v1211 = v1238;
LABEL_2069:
        v1268 = v1209 + v1211;
        if ( (*(_BYTE *)(v1247 + 2171) & 4) != 0 )
        {
          __asm { xbegin  $+6 }
          __asm { xend }
          ++*(_DWORD *)(v1247 + 2108);
          *(_DWORD *)(v1247 + 2088) += 256;
        }
        else
        {
          if ( v1267 )
          {
            v1269 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v1247 + 1104))(&v1705, v1209 + v1211);
            if ( v1269 < 0 )
            {
              if ( v1269 == -1073741819 )
              {
                v1270 = (int *)v1587;
                if ( (*((_DWORD *)v1587 + 8) & 4) == 0 || *(int *)(v52 + 36) < 0 )
                {
                  v1247 = v1593;
                  if ( *(_DWORD *)(v1593 + 2296) )
                    goto LABEL_2079;
                  *(_QWORD *)(v1593 + 2304) = v1593 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v1247 + 2312) = (char *)v1270 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v1247 + 2320) = *v1270;
                  *(_QWORD *)(v1247 + 2328) = v1268;
                  *(_DWORD *)(v1247 + 2296) = 1;
                  __b8(v1247, 0LL);
                }
              }
              v1247 = v1593;
              goto LABEL_2079;
            }
          }
          else
          {
            v1705 = 0LL;
            v1707 = 0;
            v1709 = 4096;
            v1706 = 8 * ((((unsigned __int64)(v1268 & 0xFFF) + 0x1FFF) >> 12) + 6);
            v1708 = v1268 & 0xFFFFFFFFFFFFF000uLL;
            v1710 = v1268 & 0xFFF;
            v1741 = (*(__int64 (__fastcall **)(__int64))(v1247 + 1112))(v1209 + v1211);
            v1711 = v1741 >> 12;
          }
          v1272 = v1593;
          ++*(_DWORD *)(v1593 + 2112);
          *(_QWORD *)(v1272 + 2664) = v1708 + v1710;
          *(_QWORD *)(v1272 + 2656) = v1587;
          v1273 = KeGetCurrentIrql();
          __writecr8(2uLL);
          RtlInitMinimalBarrier(v1272 + 2624, **(unsigned int **)(v1272 + 1528), 0LL);
          v1247 = (*(__int64 (__fastcall **)(unsigned __int64))(v1593 + 1096))(v1593 + *(unsigned int *)(v1593 + 2036));
          v1593 = v1247;
          __writecr8(v1273);
          if ( v1267 )
          {
            (*(void (__fastcall **)(__int64 *, _QWORD))(v1247 + 1120))(&v1705, 0LL);
            v1247 = v1593;
          }
          *(_DWORD *)(v1247 + 2088) += 81920;
        }
LABEL_2079:
        v1271 = *(_DWORD *)(v1247 + 2088);
        v1211 += 4096;
        if ( v1211 >= v1239 || v1271 >= *(_DWORD *)(v1247 + 2092) )
        {
          if ( v1271 >= *(_DWORD *)(v1247 + 2092) )
          {
            v1248 = v1589;
            goto LABEL_2083;
          }
LABEL_2044:
          v1248 = v1589;
          v52 += 40LL;
          if ( v52 == v1589 )
          {
LABEL_2083:
            v22 = (unsigned __int64)v1588;
            if ( v52 == v1248 && v1211 >= v1239 )
            {
              v55 = 0;
              *(_DWORD *)(v1247 + 2084) = 0;
              goto LABEL_235;
            }
            *(_DWORD *)(v1247 + 2084) = v1211;
            goto LABEL_234;
          }
          continue;
        }
        goto LABEL_2069;
      }
    }
    if ( v86 == 28 )
    {
      v734 = *((unsigned int *)v61 + 4);
      if ( !(_DWORD)v734 )
      {
        v1690 = v61 + 48;
        v735 = *((_WORD *)v61 + 20);
        v1586 = &v1623;
        v1689[0] = v735;
        v1689[1] = v735;
        v736 = *(_QWORD *)(v22 + 1296);
        v737 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v22 + 488);
        LOBYTE(v1585) = 0;
        if ( v737(v1689, 0LL, 0LL, 0LL, v736, v1585, 0LL, &v1623) < 0 )
          goto LABEL_235;
        if ( (*(_DWORD *)(v1623 + 16) & 0x10) == 0 )
          goto LABEL_338;
        (*(void (__fastcall **)(_QWORD, char *))(v22 + 512))(*(_QWORD *)(v22 + 488), v1794);
        if ( v1795 )
        {
          v738 = *(__int64 (**)(void))(v22 + 504);
          v54 = v1795;
          v1621 = v1795;
          v739 = v738();
          if ( v739 )
          {
            v57 = *(_DWORD *)(v739 + 80);
            v1618 = v57;
          }
        }
        (*(void (__fastcall **)(_QWORD, char *))(v22 + 512))(*((_QWORD *)v61 + 3), v1790);
        if ( v1791 && (v740 = *(__int64 (**)(void))(v22 + 504), v56 = v1791, v1616 = v1791, (v741 = v740()) != 0) )
        {
          v742 = *(_DWORD *)(v741 + 80);
          v1612 = v742;
        }
        else
        {
          v742 = v1612;
        }
        LODWORD(v52) = 0x40000000;
        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) == 0 )
        {
          *((_QWORD *)v61 + 1) = v1623 + 112;
          *((_DWORD *)v61 + 4) = 224;
        }
        v743 = 0;
        v744 = v57;
        do
        {
          v745 = *(_QWORD *)(v1623 + 8LL * v743 + 112);
          if ( (!v57 || v745 < v54 || v745 > v57 + v54 - 1) && (!v742 || v745 < v56 || v745 > v56 + v742 - 1LL) )
          {
            if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
            {
              v781 = *(_QWORD **)(v22 + 2688);
              v782 = 48;
              v783 = 6LL;
              do
              {
                v782 -= 8;
                *v781 = *(_QWORD *)v61;
                v61 += 8;
                ++v781;
                --v783;
              }
              while ( v783 );
              v55 = 0;
              if ( v782 )
              {
                do
                {
                  v784 = *v61++;
                  *(_BYTE *)v781 = v784;
                  v781 = (_QWORD *)((char *)v781 + 1);
                  --v782;
                }
                while ( v782 );
                v22 = (unsigned __int64)v1588;
              }
              v61 = *(char **)(v22 + 2688);
            }
            else
            {
              v55 = 0;
            }
            *((_QWORD *)v61 + 4) = v745;
            v785 = *(_QWORD *)(v22 + 1424);
            *(_QWORD *)v785 = v61;
            *(_DWORD *)(v785 + 16) = 48;
            v786 = *((_QWORD *)v61 + 1);
            if ( *(_DWORD *)(v22 + 2296) )
              goto LABEL_235;
            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2320) = *(int *)v61;
            *(_QWORD *)(v22 + 2328) = v786;
            *(_DWORD *)(v22 + 2296) = 1;
            goto LABEL_457;
          }
          ++v743;
        }
        while ( v743 < 0x1Cu );
        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
        {
          (*(void (__fastcall **)(__int64))(v22 + 480))(v1623);
          goto LABEL_234;
        }
        v746 = (_QWORD *)*((_QWORD *)v61 + 1);
        v747 = *((unsigned int *)v61 + 4);
        v748 = v746;
        *(_DWORD *)(v22 + 2088) += v747;
        v749 = (const char *)v746;
        v750 = *(_DWORD *)(v22 + 2068);
        v751 = *(_QWORD *)(v22 + 2072);
        if ( v746 < (_QWORD *)((char *)v746 + v747) )
        {
          do
          {
            _mm_prefetch(v749, 0);
            v749 += 64;
          }
          while ( v749 < (const char *)v746 + v747 );
        }
        v752 = *(_QWORD *)(v22 + 2072);
        v753 = (unsigned int)v747 >> 7;
        if ( (unsigned int)v747 >> 7 )
        {
          do
          {
            v754 = 8LL;
            do
            {
              v755 = v748[1] ^ __ROL8__(*v748 ^ v752, v750);
              v748 += 2;
              v752 = __ROL8__(v755, v750);
              --v754;
            }
            while ( v754 );
            v756 = (__ROL8__(v751 ^ ((char *)v748 - (char *)v746), 17) ^ v751 ^ (unsigned __int64)((char *)v748
                                                                                                 - (char *)v746))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1726 = *((_QWORD *)&v756 + 1);
            v750 = ((unsigned __int8)(v756 ^ BYTE8(v756)) ^ (unsigned __int8)v750) & 0x3F;
            if ( !v750 )
              LOBYTE(v750) = 1;
            --v753;
          }
          while ( v753 );
          v22 = (unsigned __int64)v1588;
          v54 = v1621;
        }
        v757 = v747 & 0x7F;
        if ( v757 >= 8 )
        {
          v758 = (unsigned __int64)v757 >> 3;
          do
          {
            v752 = __ROL8__(*v748++ ^ v752, v750);
            v757 -= 8;
            --v758;
          }
          while ( v758 );
        }
        LODWORD(v52) = 0;
        if ( v757 )
        {
          do
          {
            v759 = *(unsigned __int8 *)v748;
            v748 = (_QWORD *)((char *)v748 + 1);
            v752 = __ROL8__(v759 ^ v752, v750);
            --v757;
          }
          while ( v757 );
          v22 = (unsigned __int64)v1588;
        }
        for ( i2 = v752; ; LODWORD(v752) = i2 ^ v752 )
        {
          i2 >>= 31;
          if ( !i2 )
            break;
        }
        v761 = 0;
        *((_DWORD *)v61 + 5) = v752 & 0x7FFFFFFF;
        v762 = *(const char **)(v1623 + 80);
        if ( !v762 || (v761 = *(_DWORD *)v762, v763 = 0, (v764 = (unsigned int)(*(_DWORD *)v762 - 8) >> 3) == 0) )
        {
LABEL_1227:
          *(_DWORD *)(v22 + 2088) += v761;
          v766 = v762;
          v767 = *(_DWORD *)(v22 + 2068);
          v768 = v762;
          v52 = *(_QWORD *)(v22 + 2072);
          v769 = &v762[v761];
          if ( v762 < v769 )
          {
            do
            {
              _mm_prefetch(v768, 0);
              v768 += 64;
            }
            while ( v768 < v769 );
          }
          v55 = 0;
          v770 = v761 >> 7;
          v771 = *(_QWORD *)(v22 + 2072);
          if ( v761 >> 7 )
          {
            do
            {
              v772 = 8LL;
              do
              {
                v773 = v771 ^ *(_QWORD *)v766;
                v774 = *((_QWORD *)v766 + 1);
                v766 += 16;
                v771 = __ROL8__(__ROL8__(v773, v767) ^ v774, v767);
                --v772;
              }
              while ( v772 );
              v775 = __ROL8__(v52 ^ (v766 - v762), 17) ^ v52 ^ (v766 - v762);
              v1727 = (v775 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v767 = ((unsigned __int8)(v775 ^ v1727) ^ (unsigned __int8)v767) & 0x3F;
              if ( !v767 )
                LOBYTE(v767) = 1;
              --v770;
            }
            while ( v770 );
            v22 = (unsigned __int64)v1588;
          }
          v776 = v761 & 0x7F;
          if ( v776 >= 8 )
          {
            v777 = (unsigned __int64)v776 >> 3;
            do
            {
              v771 = __ROL8__(*(_QWORD *)v766 ^ v771, v767);
              v766 += 8;
              v776 -= 8;
              --v777;
            }
            while ( v777 );
          }
          if ( v776 )
          {
            do
            {
              v778 = *(unsigned __int8 *)v766++;
              v771 = __ROL8__(v778 ^ v771, v767);
              --v776;
            }
            while ( v776 );
            v22 = (unsigned __int64)v1588;
          }
          for ( i3 = v771; ; LODWORD(v771) = i3 ^ v771 )
          {
            i3 >>= 31;
            if ( !i3 )
              break;
          }
          *((_DWORD *)v61 + 11) = v771 & 0x7FFFFFFF;
          goto LABEL_235;
        }
        while ( 1 )
        {
          v765 = *(_QWORD *)&v762[8 * v763 + 8];
          if ( v765
            && (!v744 || v765 < v54 || v765 > v54 + v744 - 1)
            && (!v1612 || v765 < v1616 || v765 > v1612 + v1616 - 1) )
          {
            break;
          }
          if ( ++v763 >= v764 )
            goto LABEL_1227;
        }
        *((_QWORD *)v61 + 4) = v765;
        v55 = 0;
        v780 = *(_QWORD *)(v22 + 1424);
        *(_QWORD *)v780 = v61;
        *(_DWORD *)(v780 + 16) = 48;
        if ( *(_DWORD *)(v22 + 2296) )
          goto LABEL_235;
        *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v22 + 2320) = *(int *)v61;
        *(_QWORD *)(v22 + 2328) = v762;
LABEL_456:
        *(_DWORD *)(v22 + 2296) = 1;
LABEL_457:
        __b8(v22, 0LL);
        goto LABEL_235;
      }
      v787 = (_QWORD *)*((_QWORD *)v61 + 1);
      *(_DWORD *)(v22 + 2088) += v734;
      v788 = v787;
      v789 = *(_DWORD *)(v22 + 2068);
      v790 = (const char *)v787;
      v791 = *(_QWORD *)(v22 + 2072);
      if ( v787 < (_QWORD *)((char *)v787 + v734) )
      {
        do
        {
          _mm_prefetch(v790, 0);
          v790 += 64;
        }
        while ( v790 < (const char *)v787 + v734 );
      }
      v792 = *(_QWORD *)(v22 + 2072);
      v793 = (unsigned int)v734 >> 7;
      if ( (unsigned int)v734 >> 7 )
      {
        do
        {
          v794 = 8LL;
          do
          {
            v795 = v788[1] ^ __ROL8__(*v788 ^ v792, v789);
            v788 += 2;
            v792 = __ROL8__(v795, v789);
            --v794;
          }
          while ( v794 );
          v796 = __ROL8__(v791 ^ ((char *)v788 - (char *)v787), 17) ^ v791 ^ ((char *)v788 - (char *)v787);
          v1728 = (v796 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v789 = ((unsigned __int8)(v1728 ^ v796) ^ (unsigned __int8)v789) & 0x3F;
          if ( !v789 )
            LOBYTE(v789) = 1;
          --v793;
        }
        while ( v793 );
        v22 = (unsigned __int64)v1588;
      }
      v797 = v734 & 0x7F;
      if ( v797 >= 8 )
      {
        v798 = (unsigned __int64)v797 >> 3;
        do
        {
          v792 = __ROL8__(*v788++ ^ v792, v789);
          v797 -= 8;
          --v798;
        }
        while ( v798 );
      }
      for ( ; v797; --v797 )
      {
        v799 = *(unsigned __int8 *)v788;
        v788 = (_QWORD *)((char *)v788 + 1);
        v792 = __ROL8__(v799 ^ v792, v789);
      }
      for ( i4 = v792; ; LODWORD(v792) = i4 ^ v792 )
      {
        i4 >>= 31;
        if ( !i4 )
          break;
      }
      v801 = v792 & 0x7FFFFFFF;
      if ( v801 == *((_DWORD *)v61 + 5) )
      {
LABEL_1290:
        v55 = 0;
      }
      else
      {
        if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
          v55 = 1;
        v802 = *((unsigned int *)v61 + 4);
        v803 = *((_QWORD *)v61 + 1);
        if ( *((_DWORD *)v61 + 4) )
        {
          v804 = 64LL;
          if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
          {
            v805 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v806 = v803 & 0xFFFFFFFFFFFFF000uLL;
            v1811 = (v803 + v802 - 1) | 0xFFF;
            v807 = (v803 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v808 = v805;
              while ( 1 )
              {
                v809 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                         v806,
                         0LL,
                         v804,
                         v788);
                if ( v809 != -1073741267 )
                  break;
                if ( v55 )
                  goto LABEL_1309;
                if ( v805 > 1u )
                  goto LABEL_1288;
                v808 = v805;
                __writecr8(v805);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v809 < 0 )
                break;
LABEL_1288:
              v806 += 4096LL;
              v807 += 4096LL;
              if ( v807 == v1811 )
              {
                __writecr8(v808);
                v61 = v1587;
                goto LABEL_1290;
              }
            }
LABEL_1309:
            __writecr8(v808);
            v61 = v1587;
          }
        }
        v826 = *(_DWORD *)(v22 + 2296);
        v55 = 0;
        if ( !v826 )
        {
          *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v801 ^ (unsigned __int64)*((unsigned int *)v61 + 5);
          v826 = *(_DWORD *)(v22 + 2296);
        }
        v827 = *((_QWORD *)v61 + 1);
        if ( !v826 )
        {
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v827;
          *(_DWORD *)(v22 + 2296) = 1;
          __b8(v22, 0LL);
        }
      }
      v810 = 0;
      v1623 = *((_QWORD *)v61 + 1) - 112LL;
      v52 = *(_QWORD *)(v1623 + 80);
      if ( v52 )
        v810 = *(_DWORD *)v52;
      *(_DWORD *)(v22 + 2088) += v810;
      v811 = (_QWORD *)v52;
      v812 = *(_DWORD *)(v22 + 2068);
      v813 = (const char *)v52;
      v814 = *(_QWORD *)(v22 + 2072);
      v815 = v52 + v810;
      if ( v52 < v815 )
      {
        do
        {
          _mm_prefetch(v813, 0);
          v813 += 64;
        }
        while ( (unsigned __int64)v813 < v815 );
      }
      v816 = *(_QWORD *)(v22 + 2072);
      v817 = v810 >> 7;
      if ( v810 >> 7 )
      {
        do
        {
          v818 = 8LL;
          do
          {
            v819 = v816 ^ *v811;
            v820 = v811[1];
            v811 += 2;
            v816 = __ROL8__(__ROL8__(v819, v812) ^ v820, v812);
            --v818;
          }
          while ( v818 );
          v821 = __ROL8__(v814 ^ ((unsigned __int64)v811 - v52), 17) ^ v814 ^ ((unsigned __int64)v811 - v52);
          v1729 = (v821 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v812 = ((unsigned __int8)(v1729 ^ v821) ^ (unsigned __int8)v812) & 0x3F;
          if ( !v812 )
            LOBYTE(v812) = 1;
          --v817;
        }
        while ( v817 );
        v22 = (unsigned __int64)v1588;
      }
      v822 = v810 & 0x7F;
      if ( v822 >= 8 )
      {
        v823 = (unsigned __int64)v822 >> 3;
        do
        {
          v816 = __ROL8__(*v811++ ^ v816, v812);
          v822 -= 8;
          --v823;
        }
        while ( v823 );
      }
      if ( v822 )
      {
        do
        {
          v824 = *(unsigned __int8 *)v811;
          v811 = (_QWORD *)((char *)v811 + 1);
          v816 = __ROL8__(v824 ^ v816, v812);
          --v822;
        }
        while ( v822 );
        v22 = (unsigned __int64)v1588;
      }
      for ( i5 = v816; ; LODWORD(v816) = i5 ^ v816 )
      {
        i5 >>= 31;
        if ( !i5 )
          break;
      }
      v828 = *((unsigned int *)v61 + 11);
      v829 = v816 & 0x7FFFFFFF;
      if ( v829 == (_DWORD)v828 )
        goto LABEL_235;
      if ( *(_DWORD *)(v22 + 2296) )
        goto LABEL_235;
      *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v829 ^ v828;
      if ( *(_DWORD *)(v22 + 2296) )
        goto LABEL_235;
      *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(v22 + 2320) = *(int *)v61;
      *(_QWORD *)(v22 + 2328) = v52;
LABEL_1320:
      *(_DWORD *)(v22 + 2296) = 1;
      goto LABEL_457;
    }
    if ( v86 > 12 )
    {
      if ( v86 <= 14 )
      {
        if ( v86 == 14 )
        {
          if ( !*(_QWORD *)(v22 + 2432) )
            goto LABEL_1733;
          v691 = *(_DWORD *)(v22 + 2452);
          if ( ((v691 >> 2) & 1) != 0 )
            goto LABEL_1733;
          if ( *(_DWORD *)(v22 + 2084) )
          {
            if ( ((v691 >> 5) & 1) != 0 )
              goto LABEL_1733;
          }
          else
          {
            *(_DWORD *)(v22 + 2452) = v691 ^ ((unsigned __int8)v691 ^ (unsigned __int8)(8 * v691)) & 0x20;
          }
        }
        v692 = (_QWORD *)*((_QWORD *)v61 + 1);
        v693 = *((unsigned int *)v61 + 4);
        v694 = v692;
        *(_DWORD *)(v22 + 2088) += v693;
        v695 = (const char *)v692;
        v696 = *(_DWORD *)(v22 + 2068);
        v52 = *(_QWORD *)(v22 + 2072);
        if ( v692 < (_QWORD *)((char *)v692 + v693) )
        {
          do
          {
            _mm_prefetch(v695, 0);
            v695 += 64;
          }
          while ( v695 < (const char *)v692 + v693 );
        }
        v697 = *(_QWORD *)(v22 + 2072);
        v698 = (unsigned int)v693 >> 7;
        if ( (unsigned int)v693 >> 7 )
        {
          do
          {
            v699 = 8LL;
            do
            {
              v700 = v697 ^ *v694;
              v701 = v694[1];
              v694 += 2;
              v697 = __ROL8__(__ROL8__(v700, v696) ^ v701, v696);
              --v699;
            }
            while ( v699 );
            v702 = (__ROL8__(v52 ^ ((char *)v694 - (char *)v692), 17) ^ v52 ^ ((char *)v694 - (char *)v692))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1725 = *((_QWORD *)&v702 + 1);
            v696 = ((unsigned __int8)(v702 ^ BYTE8(v702)) ^ (unsigned __int8)v696) & 0x3F;
            if ( !v696 )
              LOBYTE(v696) = 1;
            --v698;
          }
          while ( v698 );
          v22 = (unsigned __int64)v1588;
        }
        v703 = v693 & 0x7F;
        if ( v703 >= 8 )
        {
          v704 = (unsigned __int64)v703 >> 3;
          do
          {
            v697 = __ROL8__(*v694++ ^ v697, v696);
            v703 -= 8;
            --v704;
          }
          while ( v704 );
          v22 = (unsigned __int64)v1588;
        }
        for ( ; v703; --v703 )
        {
          v705 = *(unsigned __int8 *)v694;
          v694 = (_QWORD *)((char *)v694 + 1);
          v697 = __ROL8__(v705 ^ v697, v696);
        }
        for ( i6 = v697; ; LODWORD(v697) = i6 ^ v697 )
        {
          i6 >>= 31;
          if ( !i6 )
            break;
        }
        v707 = v697 & 0x7FFFFFFF;
        if ( v707 == *((_DWORD *)v61 + 5) )
          goto LABEL_1147;
        _InterlockedOr(v1584, 0);
        if ( (*((_DWORD *)v61 + 6) & 1) != 0 )
        {
          if ( **(_BYTE **)(v22 + 1408) )
            goto LABEL_1147;
        }
        v708 = *((unsigned int *)v61 + 4);
        v709 = *((_QWORD *)v61 + 1);
        if ( *((_DWORD *)v61 + 4) )
        {
          v710 = 64LL;
          if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
          {
            v711 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v712 = v709 & 0xFFFFFFFFFFFFF000uLL;
            v713 = (v709 + v708 - 1) | 0xFFF;
            v714 = (v709 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v52 = v711;
              while ( 1 )
              {
                v715 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                         v712,
                         0LL,
                         v710,
                         v694);
                if ( v715 != -1073741267 )
                  break;
                if ( v711 > 1u )
                  goto LABEL_1145;
                v52 = v711;
                __writecr8(v711);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v715 < 0 )
                break;
LABEL_1145:
              v712 += 4096LL;
              v714 += 4096LL;
              if ( v714 == v713 )
              {
                __writecr8(v52);
                v61 = v1587;
                v55 = 0;
LABEL_1147:
                if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) == 0 )
                  goto LABEL_235;
                v716 = *((unsigned int *)v61 + 4);
                if ( !(_DWORD)v716 )
                  goto LABEL_235;
                pg_unknown12(v22, *((_QWORD *)v61 + 1), v716, v1769);
                v717 = 16;
                v718 = (__int64 *)(v61 + 28);
                v719 = v1769;
                do
                {
                  v720 = *(_QWORD *)v719;
                  v719 += 8;
                  v721 = *v718++;
                  if ( v720 != v721 )
                    goto LABEL_1161;
                  v717 -= 8;
                }
                while ( v717 >= 8 );
                if ( !v717 )
                  goto LABEL_1176;
                while ( 1 )
                {
                  v722 = *v719++;
                  v723 = *(unsigned __int8 *)v718;
                  v718 = (__int64 *)((char *)v718 + 1);
                  if ( v722 != v723 )
                    break;
                  if ( !--v717 )
                    goto LABEL_1176;
                }
LABEL_1161:
                _InterlockedOr(v1584, 0);
                if ( (*((_DWORD *)v61 + 6) & 1) == 0 || !**(_BYTE **)(v22 + 1408) )
                {
                  v726 = *((unsigned int *)v61 + 4);
                  v727 = *((_QWORD *)v61 + 1);
                  if ( *((_DWORD *)v61 + 4) )
                  {
                    v728 = 64LL;
                    if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
                    {
                      LODWORD(v52) = KeGetCurrentIrql();
                      __writecr8(2uLL);
                      v729 = v727 & 0xFFFFFFFFFFFFF000uLL;
                      v730 = (v727 + v726 - 1) | 0xFFF;
                      v731 = (v727 & 0xFFFFFFFFFFFFF000uLL) - 1;
                      while ( 1 )
                      {
                        v732 = (unsigned __int8)v52;
                        while ( 1 )
                        {
                          v733 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64 *))(v22 + 1128))(
                                   v729,
                                   0LL,
                                   v728,
                                   v718);
                          if ( v733 != -1073741267 )
                            break;
                          if ( (unsigned __int8)v52 > 1u )
                            goto LABEL_1171;
                          v732 = (unsigned __int8)v52;
                          __writecr8((unsigned __int8)v52);
                          KeGetCurrentIrql();
                          __writecr8(2uLL);
                        }
                        if ( v733 < 0 )
                          break;
LABEL_1171:
                        v729 += 4096LL;
                        v731 += 4096LL;
                        if ( v731 == v730 )
                        {
                          __writecr8(v732);
                          v55 = 0;
                          goto LABEL_1176;
                        }
                      }
                      __writecr8(v732);
                      v727 = *((_QWORD *)v61 + 1);
                      v55 = 0;
                    }
                  }
                  if ( !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = v727;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                }
LABEL_1176:
                v186 = 16 * *((_DWORD *)v61 + 4);
LABEL_2411:
                *(_DWORD *)(v22 + 2088) += v186;
                goto LABEL_235;
              }
            }
            __writecr8(v52);
            v61 = v1587;
            v55 = 0;
          }
        }
        v724 = *(_DWORD *)(v22 + 2296);
        if ( !v724 )
        {
          *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v707 ^ (unsigned __int64)*((unsigned int *)v61 + 5);
          v724 = *(_DWORD *)(v22 + 2296);
        }
        v725 = *((_QWORD *)v61 + 1);
        if ( !v724 )
        {
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v725;
          *(_DWORD *)(v22 + 2296) = 1;
          __b8(v22, 0LL);
        }
        goto LABEL_1147;
      }
      if ( v86 == 15 )
      {
        if ( *(_DWORD *)(v22 + 2392) == 11 )
        {
          *(_DWORD *)(v22 + 2088) += 256;
          v52 = *(_QWORD *)(v22 + 1416);
          v686 = (*(__int64 (__fastcall **)(unsigned __int64))(v22 + 728))(v52);
          if ( v686 )
          {
            v687 = (*(__int64 (__fastcall **)(__int64))(v22 + 736))(v686);
            v688 = *((_QWORD *)v61 + 3);
            v689 = v687;
            if ( v688 )
            {
              if ( v688 != v687 && !*(_DWORD *)(v22 + 2296) )
              {
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v61;
                *(_QWORD *)(v22 + 2328) = v687;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
              }
            }
            else
            {
              v690 = *(_QWORD *)(v22 + 2424);
              if ( (!*(_DWORD *)(v22 + 2420) || v687 < v690 || v687 > v690 + *(unsigned int *)(v22 + 2420) - 1LL)
                && !*(_DWORD *)(v22 + 2296) )
              {
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v61;
                *(_QWORD *)(v22 + 2328) = v687;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
              }
              *((_QWORD *)v61 + 3) = v689;
            }
            (*(void (__fastcall **)(unsigned __int64, __int64))(v22 + 744))(v52, v686);
          }
        }
        goto LABEL_235;
      }
      if ( v86 == 21 )
      {
        v679 = *((_DWORD *)v61 + 10);
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 416))(v1767, *((unsigned int *)v61 + 11));
        v680 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v22 + 464))(v1767, v1787);
        if ( v1798 == 38 )
        {
          __asm { xgetbv }
          v682 = v680 | (v681 << 32);
        }
        else if ( v679 )
        {
          v682 = __readcr4();
        }
        else
        {
          v682 = __readcr0();
        }
        (*(void (__fastcall **)(_BYTE *))(v22 + 408))(v1787);
        v683 = *((_QWORD *)v61 + 4);
        v684 = v682 & *((_QWORD *)v61 + 3);
        if ( v684 == v683 )
          goto LABEL_235;
        v685 = *((_QWORD *)v61 + 5);
        if ( *(_DWORD *)(v22 + 2296) )
          goto LABEL_235;
        *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v684 ^ v683;
        if ( *(_DWORD *)(v22 + 2296) )
          goto LABEL_235;
        *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v22 + 2320) = *(int *)v61;
        *(_QWORD *)(v22 + 2328) = v685;
        goto LABEL_456;
      }
      if ( v86 != 24 )
      {
        if ( v86 != 25 )
        {
          if ( v86 == 26 )
          {
            if ( (*(_DWORD *)(v22 + 2096) & 1) != 0 )
              goto LABEL_235;
            v273 = 0;
            v274 = *(_QWORD *)(v22 + 1448);
            v275 = *(_QWORD *)(v22 + 1352);
            v1589 = *(_QWORD *)(v22 + 1456);
            v276 = *(void (**)(void))(v22 + 376);
            v1805 = 0;
            v1591 = v274;
            v276();
            if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 || (v277 = *(_DWORD *)(v22 + 2384), v277 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 296))(*(_QWORD *)(v22 + 2560), 0LL);
              LOBYTE(v52) = 0x80;
            }
            else
            {
              LODWORD(v52) = 1;
              LOBYTE(v52) = 1 << v277;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v22 + 312))(v275, 0LL);
            v278 = *(volatile signed __int8 ***)(v22 + 1312);
            v279 = *v278;
            if ( *v278 != (volatile signed __int8 *)v278 )
            {
              do
              {
                _InterlockedOr8(&v279[*(_QWORD *)(v22 + 1720) - *(_QWORD *)(v22 + 1744)], v52);
                v279 = *(volatile signed __int8 **)v279;
                ++v273;
              }
              while ( v279 != (volatile signed __int8 *)v278 );
              v1805 = v273;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v22 + 312))(v274, 0LL);
            v280 = *(_QWORD ***)(v22 + 1440);
            v281 = *v280;
            if ( *v280 != v280 )
            {
              v282 = v1589;
              v283 = (int *)v1587;
              do
              {
                v284 = (char *)v281 - *(_QWORD *)(v22 + 1856);
                if ( v284 != (char *)v282 )
                {
                  v285 = *(_QWORD *)(v22 + 1720);
                  v286 = *(_QWORD *)&v284[*(_QWORD *)(v22 + 1848)];
                  if ( ((unsigned __int8)v52 & *(_BYTE *)(v286 + v285)) == 0
                    && (*(_DWORD *)(v286 + *(_QWORD *)(v22 + 1728)) & *(_DWORD *)(v22 + 1752)) != 0
                    && !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = (char *)v283 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *v283;
                    *(_QWORD *)(v22 + 2328) = v286;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                    v285 = *(_QWORD *)(v22 + 1720);
                  }
                  _InterlockedAnd8((volatile signed __int8 *)(v286 + v285), ~(_BYTE)v52);
                  v282 = v1589;
                }
                v281 = (_QWORD *)*v281;
              }
              while ( v281 != v280 );
              v273 = v1805;
              v274 = v1591;
            }
            (*(void (__fastcall **)(__int64, _QWORD))(v22 + 320))(v274, 0LL);
            if ( (_BYTE)v52 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 304))(*(_QWORD *)(v22 + 2560), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 1352), 0LL);
            (*(void (**)(void))(v22 + 384))();
            *(_DWORD *)(v22 + 2088) += v273 << 8;
            goto LABEL_234;
          }
          if ( v86 == 27 )
          {
            if ( (*(_DWORD *)(v22 + 2096) & 1) == 0 )
              goto LABEL_235;
            v251 = *(_QWORD *)(v22 + 1448);
            v252 = *(_QWORD **)(v22 + 1456);
            v253 = *(void (**)(void))(v22 + 376);
            v254 = *(_QWORD *)(v22 + 1352);
            v1594 = v251;
            v1591 = (__int64)v252;
            v1590 = 0;
            v253();
            if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 || (v255 = *(_DWORD *)(v22 + 2384), v255 >= 7) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 296))(*(_QWORD *)(v22 + 2560), 0LL);
              LOBYTE(v52) = 0x80;
            }
            else
            {
              LODWORD(v52) = 1;
              LOBYTE(v52) = 1 << v255;
            }
            v256 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 312);
            LODWORD(v1592) = v52;
            v256(v254, 0LL);
            (*(void (__fastcall **)(unsigned __int64, _QWORD))(v22 + 312))(v251, 0LL);
            v257 = *(unsigned __int64 **)(v22 + 1440);
            v258 = 0LL;
            v1589 = 0LL;
            v259 = *v257;
            if ( (unsigned __int64 *)*v257 != v257 )
            {
              do
              {
                if ( (_QWORD *)(v259 - 24) != v252 )
                {
                  v260 = *(_QWORD *)(v259 - 24 + *(_QWORD *)(v22 + 1848));
                  if ( (*(_DWORD *)(v260 + *(_QWORD *)(v22 + 1728)) & *(_DWORD *)(v22 + 1752)) == 0 )
                  {
                    v261 = *(_QWORD *)(v259 - 24 + *(_QWORD *)(v22 + 1848));
                    if ( v258 )
                      v261 = 1LL;
                    v258 = v261;
                  }
                  _InterlockedOr8((volatile signed __int8 *)(v260 + *(_QWORD *)(v22 + 1720)), v52);
                }
                v259 = *(_QWORD *)v259;
              }
              while ( (unsigned __int64 *)v259 != v257 );
              v1589 = v258;
            }
            v262 = *(_QWORD ***)(v22 + 1312);
            v263 = *v262;
            if ( *v262 != v262 )
            {
              v264 = v1590;
              v259 = (unsigned __int8)v52;
              v265 = ~(_BYTE)v52;
              v266 = v1591;
              v1804 = v259;
              do
              {
                v267 = (char *)v263 - *(_QWORD *)(v22 + 1744);
                v268 = *(_QWORD *)(v22 + 1720);
                if ( (v267[v268] & (unsigned int)v259) == 0 )
                {
                  v269 = *(_QWORD *)&v267[*(_QWORD *)(v22 + 1736)];
                  if ( v269 && v269 != v266 && !*(_DWORD *)(v22 + 2296) )
                  {
                    v270 = (int *)v1587;
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = (char *)v270 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *v270;
                    *(_QWORD *)(v22 + 2328) = v267;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                    v268 = *(_QWORD *)(v22 + 1720);
                  }
                  v259 = v1804;
                }
                _InterlockedAnd8(&v267[v268], v265);
                v263 = (_QWORD *)*v263;
                ++v264;
              }
              while ( v263 != v262 );
              LODWORD(v52) = v1592;
              v252 = (_QWORD *)v1591;
              v1590 = v264;
              v258 = v1589;
            }
            v55 = 0;
            if ( v258 )
            {
              if ( v258 == 1 )
              {
                v271 = *(_QWORD ***)(v22 + 1440);
                for ( i7 = *v271; i7 != v271; i7 = (_QWORD *)*i7 )
                {
                  v259 = (unsigned __int64)(i7 - 3);
                  if ( i7 - 3 != v252 )
                  {
                    v259 = *(_QWORD *)(v259 + *(_QWORD *)(v22 + 1848));
                    _InterlockedAnd8((volatile signed __int8 *)(v259 + *(_QWORD *)(v22 + 1720)), ~(_BYTE)v52);
                  }
                }
              }
              else
              {
                _InterlockedAnd8((volatile signed __int8 *)(*(_QWORD *)(v22 + 1720) + v258), ~(_BYTE)v52);
              }
            }
            (*(void (__fastcall **)(unsigned __int64, _QWORD, unsigned __int64))(v22 + 320))(v1594, 0LL, v259);
            if ( (_BYTE)v52 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 304))(*(_QWORD *)(v22 + 2560), 0LL);
            (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 1352), 0LL);
            (*(void (**)(void))(v22 + 384))();
            v186 = v1590 << 8;
            goto LABEL_2411;
          }
LABEL_2324:
          v1418 = v86 - 2;
          if ( v1418 )
          {
            v1419 = v1418 - 1;
            if ( v1419 )
            {
              if ( v1419 != 20 )
              {
                if ( *(_DWORD *)(v22 + 2296) )
                  goto LABEL_235;
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = 257LL;
                *(_QWORD *)(v22 + 2328) = 0LL;
LABEL_2323:
                *(_DWORD *)(v22 + 2296) = 1;
                goto LABEL_457;
              }
              (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 416))(v1770, *((unsigned int *)v61 + 10));
              (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 464))(v1770, v1771);
              v1420 = *(_QWORD *)(v22 + 2576);
              if ( v1420 )
              {
                v1421 = *(_DWORD *)(v1420 + 800);
                v1420 = *(_QWORD *)(v22 + 2576);
              }
              else
              {
                v1422 = __readmsr(0x832u);
                v1421 = v1422;
              }
              if ( v1420 )
              {
                v1423 = *(_DWORD *)(v1420 + 832);
              }
              else
              {
                v1424 = __readmsr(0x834u);
                v1423 = v1424;
              }
              (*(void (__fastcall **)(_BYTE *))(v22 + 408))(v1771);
              if ( (*(_BYTE *)(v22 + 2171) & 0x10) != 0 )
              {
                _disable();
                v1425 = *(_QWORD *)(v22 + 2272);
                v1426 = 38LL;
                v1427 = 304;
                v1428 = (_QWORD *)v1425;
                LODWORD(v52) = 1;
                do
                {
                  *v1428 = 0LL;
                  v1427 -= 8;
                  ++v1428;
                  --v1426;
                }
                while ( v1426 );
                for ( ; v1427; --v1427 )
                {
                  *(_BYTE *)v1428 = 0;
                  v1428 = (_QWORD *)((char *)v1428 + 1);
                }
                *(_OWORD *)(v1425 + 16) = *(_OWORD *)(v22 + 2120);
                *(_OWORD *)(v1425 + 32) = *(_OWORD *)(v22 + 2136);
                *(_OWORD *)(v1425 + 288) = *(_OWORD *)(v22 + 2152);
                v1675 = 303;
                v1676 = v1425;
                *(_WORD *)(v1425 + 16) = v22 + 2168;
                v1747 = v22 + 2168;
                *(_WORD *)(v1425 + 22) = (unsigned int)(v22 + 2168) >> 16;
                *(_DWORD *)(v1425 + 24) = (v22 + 2168) >> 32;
                __sidt(v1702);
                __lidt(&v1675);
                if ( (*(_DWORD *)(v22 + 2452) & 0x20000) == 0 )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  **(_QWORD **)(v22 + 1216) = v22 - 0x5C5FC0A76E374B18LL;
                  **(_QWORD **)(v22 + 1224) = CurrentPrcb;
                  **(_QWORD **)(v22 + 1232) = 0LL;
                  **(_QWORD **)(v22 + 1240) = 277LL;
                }
                KiErrata361Present();
                if ( (*(_DWORD *)(v22 + 2452) & 0x20000) == 0 )
                {
                  **(_QWORD **)(v22 + 1216) = 0xA3A03F5891C8B4E8uLL;
                  **(_QWORD **)(v22 + 1224) = 0LL;
                  **(_QWORD **)(v22 + 1232) = 0LL;
                  **(_QWORD **)(v22 + 1240) = 0LL;
                }
                __lidt(v1702);
                _enable();
              }
              else
              {
                LODWORD(v52) = 1;
              }
              v1430 = *((unsigned int *)v61 + 6);
              if ( (v1421 & *((_DWORD *)v61 + 7)) != (_DWORD)v1430
                || (v1421 & 0x10000) == 0 && (_BYTE)v1421 != 0xD1 && (unsigned __int8)(v1421 + 3) > 1u )
              {
                v1431 = v1430 | ((unsigned __int64)*((unsigned int *)v61 + 10) << 48) | 0x32000000000LL;
                if ( !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1430 ^ v1421;
                  if ( !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = v1431;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                }
              }
              v1432 = *((unsigned int *)v61 + 8);
              if ( (v1423 & *((_DWORD *)v61 + 9)) != (_DWORD)v1432
                || (v1423 & 0x10000) == 0 && (_BYTE)v1423 != 0xD1 && (unsigned __int8)(v1423 + 3) > 1u )
              {
                v1433 = v1432 | ((unsigned __int64)*((unsigned int *)v61 + 10) << 48) | 0x34000000000LL;
                if ( !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1432 ^ v1423;
                  if ( !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = v1433;
                    *(_DWORD *)(v22 + 2296) = 1;
                    goto LABEL_2408;
                  }
                }
              }
              goto LABEL_2410;
            }
            (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 416))(v1772, *((unsigned int *)v61 + 10));
            (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 464))(v1772, v1773);
            KiGetGdtIdt(&v1660, v1789);
            v1434 = v1661;
            v1435 = *((unsigned int *)v61 + 4);
            if ( (*(_BYTE *)(v22 + 2171) & 2) != 0 )
            {
              v1436 = *(_QWORD *)(v22 + 2272);
              v1437 = 38LL;
              v1438 = 304;
              v1439 = (_QWORD *)v1436;
              do
              {
                *v1439 = 0LL;
                v1438 -= 8;
                ++v1439;
                --v1437;
              }
              while ( v1437 );
              if ( v1438 )
              {
                v1437 = 0xFFFFFFFFLL;
                do
                {
                  *(_BYTE *)v1439 = 0;
                  v1439 = (_QWORD *)((char *)v1439 + 1);
                  --v1438;
                }
                while ( v1438 );
              }
              *(_OWORD *)(v1436 + 16) = *(_OWORD *)(v22 + 2120);
              *(_OWORD *)(v1436 + 32) = *(_OWORD *)(v22 + 2136);
              *(_OWORD *)(v1436 + 288) = *(_OWORD *)(v22 + 2152);
              v1677 = 303;
              v1678 = v1436;
              *(_WORD *)(v1436 + 16) = v22 + 2168;
              v1768 = v22 + 2168;
              *(_WORD *)(v1436 + 22) = (unsigned int)(v22 + 2168) >> 16;
              *(_DWORD *)(v1436 + 24) = (v22 + 2168) >> 32;
              _disable();
              __sidt(v1703);
              __lidt(&v1677);
              __writedr(7u, 0LL);
              *(_WORD *)(v1436 + 16) = v22 + 2174;
              v1440 = (v22 + 2174) >> 16;
              *(_WORD *)(v1436 + 22) = v1440;
              *(_DWORD *)(v1436 + 24) = (v22 + 2174) >> 32;
              if ( (*(_BYTE *)(v22 + 2171) & 0x20) != 0 )
              {
                *(_WORD *)(v22 + 2218) = KiGetSs(v1440, v1436, v1437, 1LL);
                __writedr(0, v22 + 2218);
                __writedr(7u, 0x70001uLL);
                *(_QWORD *)(v22 + 2280) = KiErrataSkx55Present(v22 + 2218);
                __writedr(7u, 0LL);
                __writedr(0, 0LL);
              }
              else
              {
                *(_QWORD *)(v22 + 2280) = KiErrata704Present(v1440, v1436, v1437, 1LL);
              }
              *(_DWORD *)(v22 + 2288) = KeGetPcr()->Prcb.Number;
              __lidt(v1703);
              _enable();
            }
            Ldtr = KiGetLdtr();
            Tr = KiGetTr();
            *(_DWORD *)(v22 + 2088) += v1435;
            v1443 = (unsigned __int64)v1434 + v1435;
            v1444 = *(unsigned int *)(v22 + 2068);
            v1445 = Tr;
            v1446 = *(_QWORD *)(v22 + 2072);
            v1447 = v1434;
            v1824 = Tr;
            v1448 = (const char *)v1434;
            if ( v1434 < (_QWORD *)((char *)v1434 + v1435) )
            {
              do
              {
                _mm_prefetch(v1448, 0);
                v1448 += 64;
              }
              while ( (unsigned __int64)v1448 < v1443 );
            }
            v1449 = *(_QWORD *)(v22 + 2072);
            v1450 = (unsigned int)v1435 >> 7;
            if ( (unsigned int)v1435 >> 7 )
            {
              do
              {
                v1451 = 8LL;
                do
                {
                  v1452 = v1449 ^ *v1447;
                  v1453 = v1447[1];
                  v1447 += 2;
                  v1449 = __ROL8__(__ROL8__(v1452, v1444) ^ v1453, v1444);
                  --v1451;
                }
                while ( v1451 );
                v1454 = __ROL8__(v1446 ^ ((char *)v1447 - (char *)v1434), 17) ^ v1446 ^ ((char *)v1447 - (char *)v1434);
                v1443 = (v1454 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1749 = v1443;
                v1444 = ((unsigned __int8)v1443 ^ (unsigned __int8)(v1454 ^ v1444)) & 0x3F;
                if ( !(_DWORD)v1444 )
                  v1444 = 1LL;
                --v1450;
              }
              while ( v1450 );
              v22 = (unsigned __int64)v1588;
              v1445 = v1824;
            }
            v1455 = v1435 & 0x7F;
            if ( v1455 >= 8 )
            {
              v1443 = (unsigned __int64)v1455 >> 3;
              do
              {
                v1449 = __ROL8__(*v1447++ ^ v1449, v1444);
                v1455 -= 8;
                --v1443;
              }
              while ( v1443 );
            }
            LODWORD(v52) = 0;
            if ( v1455 )
            {
              do
              {
                v1456 = *(unsigned __int8 *)v1447;
                v1447 = (_QWORD *)((char *)v1447 + 1);
                v1449 = __ROL8__(v1456 ^ v1449, v1444);
                --v1455;
              }
              while ( v1455 );
              v22 = (unsigned __int64)v1588;
            }
            for ( i8 = v1449; ; LODWORD(v1449) = i8 ^ v1449 )
            {
              i8 >>= 31;
              if ( !i8 )
                break;
            }
            v1458 = v1449 & 0x7FFFFFFF;
            (*(void (__fastcall **)(_BYTE *, unsigned __int64, _QWORD *, __int64))(v22 + 408))(
              v1773,
              v1443,
              v1447,
              v1444);
            if ( v1458 == *((_DWORD *)v61 + 5) && v1660 == *((_WORD *)v61 + 22) && !Ldtr && v1445 == 64 )
            {
              v55 = 0;
              goto LABEL_2410;
            }
            if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
            {
              v1459 = *(_QWORD **)(v22 + 2688);
              v1460 = 48;
              v1461 = 6LL;
              do
              {
                v1460 -= 8;
                *v1459 = *(_QWORD *)v61;
                v61 += 8;
                ++v1459;
                --v1461;
              }
              while ( v1461 );
              if ( v1460 )
              {
                do
                {
                  v1462 = *v61++;
                  *(_BYTE *)v1459 = v1462;
                  v1459 = (_QWORD *)((char *)v1459 + 1);
                  --v1460;
                }
                while ( v1460 );
                v22 = (unsigned __int64)v1588;
              }
              v61 = *(char **)(v22 + 2688);
            }
            *((_QWORD *)v61 + 3) = v1661;
            *((_QWORD *)v61 + 4) = v1458;
            if ( Ldtr )
            {
              v1463 = Ldtr;
              goto LABEL_2403;
            }
            if ( v1445 != 64 )
            {
              v1463 = v1445;
LABEL_2403:
              *((_QWORD *)v61 + 3) = v1463;
            }
            v1464 = *(_DWORD *)(v22 + 2296);
            v55 = 0;
            if ( !v1464 )
            {
              *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1458 ^ (unsigned __int64)*((unsigned int *)v61 + 5);
              v1464 = *(_DWORD *)(v22 + 2296);
            }
            v1465 = *((_QWORD *)v61 + 1);
            if ( !v1464 )
            {
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *(int *)v61;
              *(_QWORD *)(v22 + 2328) = v1465;
              *(_DWORD *)(v22 + 2296) = 1;
LABEL_2408:
              __b8(v22, 0LL);
            }
LABEL_2410:
            v186 = 0x8000;
            goto LABEL_2411;
          }
          v1466 = *((unsigned int *)v61 + 10);
          v1467 = *(void (__fastcall **)(_QWORD, _QWORD))(v22 + 416);
          LODWORD(v1599) = 0;
          v1467(v1774, v1466);
          (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 464))(v1774, v1775);
          KiGetGdtIdt(v1788, &v1679);
          v1468 = 0;
          v1603 = v1680;
          v1469 = v1680 + 4;
          v1589 = v1680 + 4;
          v1590 = 0;
          while ( 2 )
          {
            v1470 = 0LL;
            v1628 = *(_QWORD *)(v22 + 2248);
            v1471 = 0LL;
            v1472 = *(_QWORD *)(v22 + 2256);
            v1473 = *(unsigned int *)(v22 + 2224);
            v1592 = 0LL;
            v1474 = *(unsigned int *)(v22 + 2220);
            v1591 = 0LL;
            v1475 = KeGetCurrentIrql();
            __writecr8(0xFuLL);
            v1476 = *(_WORD *)v1469;
            LOWORD(v1622) = *(_WORD *)(v1469 - 4);
            WORD1(v1622) = *(_WORD *)(v1469 + 2);
            v1477 = *(_DWORD *)(v1469 + 4);
            v1478 = *(_QWORD *)(v22 + 1560);
            HIDWORD(v1622) = v1477;
            v1479 = v1622;
            v1825 = v1476;
            v1480 = (_SLIST_ENTRY *)(v1478 + 8LL * v1468);
            if ( v1622 == v1480 )
            {
              if ( (v1476 & 0x6000) != 0 )
              {
                __writecr8(v1475);
                goto LABEL_2420;
              }
              v1471 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _SLIST_ENTRY *, _QWORD))(v22 + 1136))(
                                   v1468,
                                   v1480,
                                   0LL);
              if ( v1471 )
              {
                v1481 = *(_QWORD *)(v1474 + v1471);
                v1592 = v1481;
                if ( v1590 < 0x30 )
                {
                  __writecr8(v1475);
LABEL_2419:
                  v1470 = v1592;
LABEL_2420:
                  v1482 = *(_QWORD *)(v22 + 1424);
                  *(_QWORD *)v1482 = v1479;
                  *(_DWORD *)(v1482 + 16) = 128;
                  if ( v1470 )
                  {
                    v1483 = *(_QWORD *)(v22 + 1424);
                    *(_QWORD *)(v1483 + 8) = v1470;
                    *(_DWORD *)(v1483 + 20) = 128;
                  }
                  LODWORD(v1599) = 1;
                  goto LABEL_2439;
                }
                v1484 = *(_QWORD *)(v1473 + v1471);
LABEL_2427:
                __writecr8(v1475);
                if ( !v1471 )
                {
                  if ( (unsigned __int64)v1479 < v1628 )
                    goto LABEL_2419;
                  if ( (unsigned __int64)v1479 > v1472 )
                    goto LABEL_2419;
                  v1485 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v22 + 528))(
                            *(_QWORD *)(v22 + 2264),
                            v1628,
                            (unsigned int)((_DWORD)v1622 - v1628));
                  if ( !v1485 || (*(_DWORD *)(v1485 + 36) & 0x2000000) != 0 )
                    goto LABEL_2419;
                }
                if ( *(_WORD *)(v1589 - 2) != 16 || (*(_WORD *)v1589 & 0x1F00) != 0xE00 || *(__int16 *)v1589 >= 0 )
                  goto LABEL_2419;
                v1486 = (unsigned int *)(*(__int64 (__fastcall **)(_SLIST_ENTRY *, unsigned __int64 *, _QWORD))(v22 + 608))(
                                          v1479,
                                          &v1628,
                                          0LL);
                if ( v1486 && (_SLIST_ENTRY *)(v1628 + *v1486) == v1479 && v1628 == *(_QWORD *)(v22 + 2248) )
                {
                  if ( !v1471 )
                    goto LABEL_2439;
                }
                else if ( !v1471 )
                {
                  goto LABEL_2419;
                }
                if ( (v1825 & 0x6000) != 0 )
                  goto LABEL_2419;
                if ( v1471 != -1 )
                {
                  v1506 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, unsigned __int64 *, _QWORD))(v22 + 608))(
                                            v1481,
                                            &v1628,
                                            0LL);
                  if ( !v1506 )
                    goto LABEL_2419;
                  if ( v1628 + *v1506 != v1481 )
                    goto LABEL_2419;
                  if ( v1628 != *(_QWORD *)(v22 + 2248) )
                    goto LABEL_2419;
                  v1507 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v22 + 528))(
                            *(_QWORD *)(v22 + 2264),
                            v1628,
                            (unsigned int)(v1481 - v1628));
                  if ( !v1507
                    || (*(_DWORD *)(v1507 + 36) & 0x2000000) != 0
                    || v1590 == 254 && v1484 != *(_QWORD *)(v22 + 2232) )
                  {
                    goto LABEL_2419;
                  }
                }
LABEL_2439:
                v1468 = v1590 + 1;
                v1469 = v1589 + 16;
                v1590 = v1468;
                v1589 += 16LL;
                if ( v1468 > 0xFF )
                {
                  if ( (*(_BYTE *)(v22 + 2171) & 1) != 0 )
                  {
                    _disable();
                    v1487 = 3221225602LL;
                    v1488 = __readmsr(0xC0000082);
                    v1489 = (v22 + 2170) >> 32;
                    __writemsr(0xC0000082, v22 + 2170);
                    if ( (*(_DWORD *)(v22 + 2452) & 0x20000) == 0 )
                    {
                      v1490 = KeGetCurrentPrcb();
                      v1489 = v22 - 0x5C5FC0A76E374B18LL;
                      **(_QWORD **)(v22 + 1216) = v22 - 0x5C5FC0A76E374B18LL;
                      **(_QWORD **)(v22 + 1224) = v1490;
                      **(_QWORD **)(v22 + 1232) = 3221225602LL;
                      v1487 = *(_QWORD *)(v22 + 1240);
                      *(_QWORD *)v1487 = 274LL;
                    }
                    ((void (__fastcall *)(__int64, unsigned __int64))(v22 + 2172))(v1487, v1489);
                    if ( (*(_DWORD *)(v22 + 2452) & 0x20000) == 0 )
                    {
                      **(_QWORD **)(v22 + 1216) = 0xA3A03F5891C8B4E8uLL;
                      **(_QWORD **)(v22 + 1224) = 0LL;
                      **(_QWORD **)(v22 + 1232) = 0LL;
                      **(_QWORD **)(v22 + 1240) = 0LL;
                    }
                    __writemsr(0xC0000082, v1488);
                    _enable();
                  }
                  v52 = v1603;
                  *(_DWORD *)(v22 + 2088) += 848;
                  v1491 = (_QWORD *)v52;
                  v1492 = *(_DWORD *)(v22 + 2088);
                  v1493 = (const char *)v52;
                  v1494 = *(_DWORD *)(v22 + 2068);
                  v1495 = *(_QWORD *)(v22 + 2072);
                  if ( v52 < v52 + 848 )
                  {
                    do
                    {
                      _mm_prefetch(v1493, 0);
                      v1493 += 64;
                    }
                    while ( (unsigned __int64)v1493 < v52 + 848 );
                  }
                  v1496 = *(_QWORD *)(v22 + 2072);
                  v1497 = 6;
                  do
                  {
                    v1498 = 8LL;
                    do
                    {
                      v1499 = v1491[1] ^ __ROL8__(*v1491 ^ v1496, v1494);
                      v1491 += 2;
                      v1496 = __ROL8__(v1499, v1494);
                      --v1498;
                    }
                    while ( v1498 );
                    v1500 = (__ROL8__(v1495 ^ ((unsigned __int64)v1491 - v52), 17) ^ v1495 ^ ((unsigned __int64)v1491
                                                                                            - v52))
                          * (unsigned __int128)0x7010008004002001uLL;
                    v1750 = *((_QWORD *)&v1500 + 1);
                    v1494 = (BYTE8(v1500) ^ (unsigned __int8)(v1500 ^ v1494)) & 0x3F;
                    if ( !v1494 )
                      LOBYTE(v1494) = 1;
                    --v1497;
                  }
                  while ( v1497 );
                  v22 = (unsigned __int64)v1588;
                  v1501 = 80;
                  v1502 = v1599;
                  v1503 = 10LL;
                  do
                  {
                    v1496 = __ROL8__(*v1491++ ^ v1496, v1494);
                    v1501 -= 8;
                    --v1503;
                  }
                  while ( v1503 );
                  for ( ; v1501; --v1501 )
                  {
                    v1504 = *(unsigned __int8 *)v1491;
                    v1491 = (_QWORD *)((char *)v1491 + 1);
                    v1496 = __ROL8__(v1504 ^ v1496, v1494);
                  }
                  for ( i9 = v1496; ; LODWORD(v1496) = i9 ^ v1496 )
                  {
                    i9 >>= 31;
                    if ( !i9 )
                      break;
                  }
                  v1508 = v1496 & 0x7FFFFFFF;
                  *((_DWORD *)&v1588[130].Next + 2) = v1492 + 16;
                  v1509 = (_QWORD *)(v52 + 3600);
                  v1510 = *(_DWORD *)(v22 + 2068);
                  v1511 = *(_QWORD *)(v22 + 2072);
                  v1512 = (const char *)(v52 + 3600);
                  if ( v52 + 3600 < v52 + 3616 )
                  {
                    do
                    {
                      _mm_prefetch(v1512, 0);
                      v1512 += 64;
                    }
                    while ( (unsigned __int64)v1512 < v52 + 3616 );
                  }
                  v1513 = 16;
                  v1514 = 2LL;
                  do
                  {
                    v1511 = __ROL8__(*v1509++ ^ v1511, v1510);
                    v1513 -= 8;
                    --v1514;
                  }
                  while ( v1514 );
                  for ( ; v1513; --v1513 )
                  {
                    v1515 = *(unsigned __int8 *)v1509;
                    v1509 = (_QWORD *)((char *)v1509 + 1);
                    v1511 = __ROL8__(v1515 ^ v1511, v1510);
                  }
                  for ( i10 = v1511; ; LODWORD(v1511) = i10 ^ v1511 )
                  {
                    i10 >>= 31;
                    if ( !i10 )
                      break;
                  }
                  v1517 = v1511 & 0x7FFFFFFF;
                  (*(void (__fastcall **)(_BYTE *, _QWORD *))(v22 + 408))(v1775, v1509);
                  v1518 = (int *)v1587;
                  v1519 = *((unsigned int *)v1587 + 5);
                  if ( v1508 == (_DWORD)v1519
                    && v1517 == *((_QWORD *)v1587 + 3)
                    && v1679 == *((_WORD *)v1587 + 22)
                    && !v1502 )
                  {
                    v55 = 0;
                  }
                  else
                  {
                    if ( v1502 )
                    {
                      v55 = 0;
                    }
                    else
                    {
                      v55 = 0;
                      if ( v1517 == *((_QWORD *)v1587 + 3) )
                      {
                        if ( !*(_DWORD *)(v22 + 2296) )
                        {
                          v1520 = v1519 ^ v1508;
                          goto LABEL_2489;
                        }
                      }
                      else if ( !*(_DWORD *)(v22 + 2296) )
                      {
                        v1520 = v1517 ^ (unsigned __int64)*((unsigned int *)v1587 + 6);
LABEL_2489:
                        *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1520;
                      }
                    }
                    v1521 = *((_QWORD *)v1518 + 1);
                    if ( !*(_DWORD *)(v22 + 2296) )
                    {
                      *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v22 + 2312) = (char *)v1518 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2320) = *v1518;
                      *(_QWORD *)(v22 + 2328) = v1521;
                      *(_DWORD *)(v22 + 2296) = 1;
                      __b8(v22, 0LL);
                    }
                  }
                  *(_DWORD *)(v22 + 2088) += 0x10000;
                  goto LABEL_235;
                }
                continue;
              }
              v1471 = -1LL;
              v1484 = 0LL;
            }
            else
            {
              v1484 = v1591;
            }
            break;
          }
          v1481 = v1592;
          goto LABEL_2427;
        }
        v287 = *(_QWORD ***)(v22 + 1328);
        v288 = *(__int64 (**)(void))(v22 + 888);
        v1589 = (__int64)v287;
        v1806 = 0;
        v1600 = (char *)v288();
        _disable();
        v289 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v22 + 1608));
        _enable();
        (*(void (__fastcall **)(__int64))(v22 + 360))(v289);
        LOBYTE(v290) = 1;
        (*(void (__fastcall **)(_QWORD, __int64))(v22 + 240))(*(_QWORD *)(v22 + 1336), v290);
        v291 = 0;
        v292 = **(unsigned int ***)(v22 + 1552);
        v293 = *v292;
        v1591 = (__int64)(v292 + 4);
        v1594 = (unsigned __int64)&v292[6 * v293 + 4];
        if ( *((_BYTE *)v292 + 12) )
        {
          v294 = *v287;
          LODWORD(v293) = 0;
          while ( v294 != v287 )
          {
            v294 = (_QWORD *)*v294;
            LODWORD(v293) = v293 + 1;
          }
        }
        LODWORD(v52) = 8 * v293;
        v295 = __rdtsc();
        v296 = __ROR8__(v295, 3);
        v1762 = ((v296 ^ v295) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v297 = ((unsigned __int16)(8193 * (v296 ^ v295)) ^ (unsigned __int16)v1762) & 0x7FF;
        v298 = __rdtsc();
        v299 = (__ROR8__(v298, 3) ^ v298) * (unsigned __int128)0x7010008004002001uLL;
        v300 = *(unsigned int *)(v22 + 2064);
        v1763 = *((_QWORD *)&v299 + 1);
        v301 = (*((_QWORD *)&v299 + 1) ^ (unsigned __int64)v299) % (unsigned int)(v297 + 1);
        v302 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v22 + 248))(
                 512LL,
                 (unsigned int)(v297 + 8 * v293),
                 v300);
        v303 = v302;
        if ( !v302 )
        {
          ++*(_DWORD *)(v22 + 2584);
          goto LABEL_541;
        }
        v304 = v301;
        v305 = (_QWORD *)v302;
        if ( (unsigned int)v301 >= 8 )
        {
          v306 = (unsigned __int64)(unsigned int)v301 >> 3;
          do
          {
            v307 = __rdtsc();
            v304 -= 8;
            v308 = (__ROR8__(v307, 3) ^ v307) * (unsigned __int128)0x7010008004002001uLL;
            v1764 = *((_QWORD *)&v308 + 1);
            *v305++ = v308 ^ *((_QWORD *)&v308 + 1);
            --v306;
          }
          while ( v306 );
          v22 = (unsigned __int64)v1588;
          v287 = (_QWORD **)v1589;
        }
        if ( v304 )
        {
          v309 = __rdtsc();
          v310 = (__ROR8__(v309, 3) ^ v309) * (unsigned __int128)0x7010008004002001uLL;
          v1779 = *((_QWORD *)&v310 + 1);
          v311 = v310 ^ *((_QWORD *)&v310 + 1);
          do
          {
            *(_BYTE *)v305 = v311;
            v305 = (_QWORD *)((char *)v305 + 1);
            v311 >>= 8;
            --v304;
          }
          while ( v304 );
        }
        v312 = v297 - v301;
        v313 = (_QWORD *)(v303 + (unsigned int)v301 + (unsigned __int64)(unsigned int)v52);
        if ( v312 >= 8 )
        {
          v305 = (_QWORD *)((unsigned __int64)v312 >> 3);
          do
          {
            v314 = __rdtsc();
            v312 -= 8;
            v315 = (__ROR8__(v314, 3) ^ v314) * (unsigned __int128)0x7010008004002001uLL;
            v1784 = *((_QWORD *)&v315 + 1);
            *v313++ = v315 ^ *((_QWORD *)&v315 + 1);
            v305 = (_QWORD *)((char *)v305 - 1);
          }
          while ( v305 );
        }
        if ( v312 )
        {
          v316 = __rdtsc();
          v317 = (__ROR8__(v316, 3) ^ v316) * (unsigned __int128)0x7010008004002001uLL;
          v1785 = *((_QWORD *)&v317 + 1);
          v318 = v317 ^ *((_QWORD *)&v317 + 1);
          do
          {
            *(_BYTE *)v313 = v318;
            v313 = (_QWORD *)((char *)v313 + 1);
            v318 >>= 8;
            --v312;
          }
          while ( v312 );
        }
        v52 = (unsigned int)v301 + v303;
        v1655 = v303;
        if ( v52 )
        {
          v319 = *v287;
          while ( v319 != v287 )
          {
            v320 = *(_QWORD *)((char *)v319 + *(_QWORD *)(v22 + 1872) - *(_QWORD *)(v22 + 1864));
            if ( !(*(unsigned int (__fastcall **)(__int64))(v22 + 680))(v320) && v291 < (unsigned int)v293 )
            {
              v321 = v291++;
              *(_QWORD *)(v52 + 8 * v321) = v320;
            }
            v319 = (_QWORD *)*v319;
            ++v1806;
          }
          (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, _QWORD *))(v22 + 920))(v52, v291, v313, v305);
          v322 = v1591;
          v323 = v1594;
          do
          {
            v324 = *(_QWORD *)(v322 + 8);
            if ( !(*(unsigned int (__fastcall **)(unsigned __int64))(v22 + 680))(v324) )
            {
              v325 = v291 - 1;
              v326 = 0;
              if ( (int)(v291 - 1) < 0 )
                goto LABEL_558;
              do
              {
                v327 = (v325 + v326) >> 1;
                if ( v324 >= *(_QWORD *)(v52 + 8LL * v327) )
                {
                  if ( v324 <= *(_QWORD *)(v52 + 8LL * v327) )
                    break;
                  v326 = v327 + 1;
                }
                else
                {
                  if ( !v327 )
                    goto LABEL_558;
                  v325 = v327 - 1;
                }
              }
              while ( v325 >= v326 );
              if ( v325 < v326 )
              {
LABEL_558:
                if ( !*(_DWORD *)(v22 + 2296) )
                {
                  v328 = (int *)v1587;
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = (char *)v328 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *v328;
                  *(_QWORD *)(v22 + 2328) = v324;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
              }
            }
            v322 += 24LL;
          }
          while ( v322 < v323 );
          v55 = 0;
        }
        else
        {
LABEL_541:
          v55 = 0;
          v1655 = 0LL;
        }
        (*(void (__fastcall **)(_QWORD))(v22 + 280))(*(_QWORD *)(v22 + 1336));
        (*(void (**)(void))(v22 + 368))();
        (*(void (__fastcall **)(char *))(v22 + 896))(v1600);
        if ( !v1655 )
          goto LABEL_235;
        *(_DWORD *)(v22 + 2088) += v1806 << 9;
        v176 = *(void (**)(void))(v22 + 256);
LABEL_339:
        v176();
        goto LABEL_235;
      }
      LODWORD(v52) = 0x40000000;
      if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 && (*(_DWORD *)(v22 + 2452) & 0x1000) == 0 )
      {
        v329 = __rdtsc();
        v330 = (__ROR8__(v329, 3) ^ v329) * (unsigned __int128)0x7010008004002001uLL;
        v1786 = *((_QWORD *)&v330 + 1);
        *(_DWORD *)(v22 + 2084) = ((unsigned __int64)v330 ^ *((_QWORD *)&v330 + 1)) % 5;
      }
      while ( 2 )
      {
        v331 = *(_DWORD *)(v22 + 2084);
        if ( !v331 )
        {
          v671 = v61;
          v1663 = 0LL;
          for ( i11 = 0; ; ++i11 )
          {
            v678 = (*(__int64 (__fastcall **)(__int64 *))(v22 + 768))(&v1663);
            if ( !v678 )
              break;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 520))(v678, v1724) )
            {
              if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
              {
                v672 = *(_QWORD **)(v22 + 2688);
                v673 = 48;
                v674 = 6LL;
                do
                {
                  v673 -= 8;
                  *v672 = *(_QWORD *)v671;
                  v671 += 8;
                  ++v672;
                  --v674;
                }
                while ( v674 );
                if ( v673 )
                {
                  do
                  {
                    v675 = *v671++;
                    *(_BYTE *)v672 = v675;
                    v672 = (_QWORD *)((char *)v672 + 1);
                    --v673;
                  }
                  while ( v673 );
                  v22 = (unsigned __int64)v1588;
                }
                v671 = *(char **)(v22 + 2688);
              }
              *((_QWORD *)v671 + 3) = v678;
              v676 = *(_QWORD *)(v22 + 1424);
              *(_QWORD *)v676 = v671;
              *(_DWORD *)(v676 + 16) = 48;
              v677 = *(_QWORD *)(v22 + 1424);
              *(_QWORD *)(v677 + 8) = v678;
              *(_DWORD *)(v677 + 20) = 4096;
              if ( !*(_DWORD *)(v22 + 2296) )
              {
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v671 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v671;
                *(_QWORD *)(v22 + 2328) = 3LL;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
              }
            }
          }
          goto LABEL_1084;
        }
        v332 = v331 - 1;
        if ( !v332 )
        {
          v663 = v61;
          v1662 = 0LL;
          i11 = 0;
          LODWORD(v52) = KeGetCurrentIrql();
          __writecr8(0xCuLL);
          for ( i12 = (*(__int64 (__fastcall **)(__int64 *))(v22 + 776))(&v1662);
                i12;
                i12 = (*(__int64 (__fastcall **)(__int64 *))(v22 + 776))(&v1662) )
          {
            ++i11;
            if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 520))(i12, v1723) )
            {
              if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
              {
                v665 = *(_QWORD **)(v22 + 2688);
                v666 = 48;
                v667 = 6LL;
                do
                {
                  v666 -= 8;
                  *v665 = *(_QWORD *)v663;
                  v663 += 8;
                  ++v665;
                  --v667;
                }
                while ( v667 );
                if ( v666 )
                {
                  do
                  {
                    v668 = *v663++;
                    *(_BYTE *)v665 = v668;
                    v665 = (_QWORD *)((char *)v665 + 1);
                    --v666;
                  }
                  while ( v666 );
                  v22 = (unsigned __int64)v1588;
                }
                v663 = *(char **)(v22 + 2688);
              }
              *((_QWORD *)v663 + 3) = i12;
              v669 = *(_QWORD *)(v22 + 1424);
              *(_QWORD *)v669 = v663;
              *(_DWORD *)(v669 + 16) = 48;
              v670 = *(_QWORD *)(v22 + 1424);
              *(_QWORD *)(v670 + 8) = i12;
              *(_DWORD *)(v670 + 20) = 4096;
              if ( !*(_DWORD *)(v22 + 2296) )
              {
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v663 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v663;
                *(_QWORD *)(v22 + 2328) = 4LL;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
              }
            }
          }
          __writecr8((unsigned __int8)v52);
          goto LABEL_1084;
        }
        v333 = v332 - 1;
        if ( !v333 )
        {
          v651 = v61;
          v652 = 0LL;
          i11 = 0;
          do
          {
            v1627 = 0;
            while ( 1 )
            {
              do
              {
                if ( !(*(unsigned int (__fastcall **)(_QWORD, int *, __int64 *))(v22 + 760))(v55, &v1627, &v1656) )
                  goto LABEL_1057;
                v655 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(v22 + 728))(
                         v1656,
                         v653,
                         v654,
                         0LL);
              }
              while ( !v655 );
              ++i11;
              v52 = (*(__int64 (__fastcall **)(__int64))(v22 + 736))(v655);
              if ( !(*(__int64 (__fastcall **)(unsigned __int64, char *))(v22 + 520))(v52, v1722) )
                break;
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(v22 + 744))(v1656, v655, v656, 0LL);
            }
            if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
            {
              v657 = *(_QWORD **)(v22 + 2688);
              v658 = 48;
              v659 = 6LL;
              do
              {
                v658 -= 8;
                *v657 = *(_QWORD *)v651;
                v651 += 8;
                ++v657;
                --v659;
              }
              while ( v659 );
              if ( v658 )
              {
                do
                {
                  v660 = *v651++;
                  *(_BYTE *)v657 = v660;
                  v657 = (_QWORD *)((char *)v657 + 1);
                  --v658;
                }
                while ( v658 );
                v22 = (unsigned __int64)v1588;
              }
              v651 = *(char **)(v22 + 2688);
            }
            *((_QWORD *)v651 + 3) = v52;
            v661 = *(_QWORD *)(v22 + 1424);
            *(_QWORD *)v661 = v651;
            *(_DWORD *)(v661 + 16) = 48;
            v662 = *(_QWORD *)(v22 + 1424);
            *(_QWORD *)(v662 + 8) = v52;
            *(_DWORD *)(v662 + 20) = 4096;
            if ( !*(_DWORD *)(v22 + 2296) )
            {
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = v651 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *(int *)v651;
              *(_QWORD *)(v22 + 2328) = v652;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
            }
LABEL_1057:
            ++v55;
            ++v652;
          }
          while ( v55 < 3 );
          goto LABEL_1084;
        }
        v334 = v333 - 1;
        if ( v334 )
        {
          v335 = v334 - 1;
          if ( v335 )
          {
            if ( v335 != 1 )
            {
              *(_DWORD *)(v22 + 2084) = 0;
LABEL_1087:
              v1588 = (struct _SLIST_ENTRY *)v22;
              goto LABEL_235;
            }
            v336 = v61;
            v1826 = -1;
            i11 = 0;
            v338 = 0;
            v52 = 0LL;
            do
            {
              v1666 = 0LL;
              while ( (*(unsigned int (__fastcall **)(_QWORD, __int64 *, char *, __int64 *))(v22 + 1072))(
                        v338,
                        &v1666,
                        &v1826,
                        &v1635) )
              {
                ++i11;
                if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 520))(v1635, v1713) )
                {
                  if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
                  {
                    v339 = *(_QWORD **)(v22 + 2688);
                    v340 = 48;
                    v341 = 6LL;
                    do
                    {
                      v340 -= 8;
                      *v339 = *(_QWORD *)v336;
                      v336 += 8;
                      ++v339;
                      --v341;
                    }
                    while ( v341 );
                    if ( v340 )
                    {
                      do
                      {
                        v342 = *v336++;
                        *(_BYTE *)v339 = v342;
                        v339 = (_QWORD *)((char *)v339 + 1);
                        --v340;
                      }
                      while ( v340 );
                      v22 = (unsigned __int64)v1588;
                    }
                    v336 = *(char **)(v22 + 2688);
                  }
                  *((_QWORD *)v336 + 3) = v1635;
                  v343 = *(_QWORD *)(v22 + 1424);
                  *(_QWORD *)v343 = v336;
                  *(_DWORD *)(v343 + 16) = 48;
                  v344 = *(_QWORD *)(v22 + 1424);
                  *(_QWORD *)(v344 + 8) = v1635;
                  *(_DWORD *)(v344 + 20) = 4096;
                  if ( !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v336 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v336;
                    *(_QWORD *)(v22 + 2328) = v52;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                }
              }
              ++v338;
              ++v52;
            }
            while ( v338 < 3 );
          }
          else
          {
            v345 = *(__int64 (__fastcall **)(_QWORD))(v22 + 792);
            i11 = 0;
            v1607 = 0;
            v52 = v345(0LL);
            if ( v52 )
            {
              v346 = v1587;
              do
              {
                v1667 = 0LL;
                v347 = v346;
                v348 = 1;
                v349 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(v22 + 784))(v52, &v1667);
                if ( v349 )
                {
                  do
                  {
                    ++v348;
                    if ( !(*(__int64 (__fastcall **)(__int64, char *))(v22 + 520))(v349, v1714) )
                    {
                      if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
                      {
                        v350 = *(_QWORD **)(v22 + 2688);
                        v351 = 48;
                        v352 = 6LL;
                        do
                        {
                          v351 -= 8;
                          *v350 = *(_QWORD *)v347;
                          v347 += 8;
                          ++v350;
                          --v352;
                        }
                        while ( v352 );
                        if ( v351 )
                        {
                          do
                          {
                            v353 = *v347++;
                            *(_BYTE *)v350 = v353;
                            v350 = (_QWORD *)((char *)v350 + 1);
                            --v351;
                          }
                          while ( v351 );
                          v22 = (unsigned __int64)v1588;
                        }
                        v347 = *(char **)(v22 + 2688);
                      }
                      *((_QWORD *)v347 + 3) = v349;
                      *((_QWORD *)v347 + 4) = v52;
                      v354 = *(_QWORD *)(v22 + 1424);
                      *(_QWORD *)v354 = v347;
                      *(_DWORD *)(v354 + 16) = 48;
                      v355 = *(_QWORD *)(v22 + 1424);
                      *(_QWORD *)(v355 + 8) = v349;
                      *(_DWORD *)(v355 + 20) = 4096;
                      if ( !*(_DWORD *)(v22 + 2296) )
                      {
                        *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v22 + 2312) = v347 - 0x4C48B4211BBACBEBLL;
                        *(_QWORD *)(v22 + 2320) = *(int *)v347;
                        *(_QWORD *)(v22 + 2328) = 6LL;
                        *(_DWORD *)(v22 + 2296) = 1;
                        __b8(v22, 0LL);
                      }
                    }
                    v349 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(v22 + 784))(v52, &v1667);
                  }
                  while ( v349 );
                  i11 = v1607;
                  v346 = v1587;
                }
                v356 = *(__int64 (__fastcall **)(_QWORD))(v22 + 792);
                i11 += v348;
                v1607 = i11;
                v52 = v356(v52);
              }
              while ( v52 );
            }
          }
          goto LABEL_1084;
        }
        v357 = (_BYTE *)v22;
        v358 = *(__int64 **)(v22 + 1264);
        i11 = 0;
        v1617 = (_BYTE *)v22;
        v359 = *v358;
        v1608 = *v358;
        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
          goto LABEL_1084;
        v360 = (int *)v1587;
        v361 = *((_QWORD *)v1587 + 5);
        if ( v361 )
        {
          i11 = 1;
          if ( v359 != v361 )
          {
            *((_QWORD *)v1587 + 3) = v359;
            v362 = *(_QWORD *)(v22 + 1424);
            *(_QWORD *)v362 = v360;
            *(_DWORD *)(v362 + 16) = 48;
            v363 = *(_QWORD *)(v22 + 1424);
            *(_QWORD *)(v363 + 8) = v359;
            *(_DWORD *)(v363 + 20) = 4096;
            if ( !*(_DWORD *)(v22 + 2296) )
            {
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = (char *)v360 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *v360;
              *(_QWORD *)(v22 + 2328) = 5LL;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
            }
          }
          goto LABEL_1084;
        }
        if ( !v359 )
        {
LABEL_1084:
          v55 = 0;
          *(_DWORD *)(v22 + 2088) += i11 << 12;
          ++*(_DWORD *)(v22 + 2084);
          if ( *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
            goto LABEL_1087;
          v61 = v1587;
          LODWORD(v52) = 0x40000000;
          continue;
        }
        break;
      }
      v364 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(v22 + 512);
      v1607 = 1;
      v1611 = (_BYTE *)v22;
      v365 = v364(v359, v1781);
      v366 = v1782;
      v367 = v1783;
      v368 = v365;
      v1593 = v365;
      v1807 = v1783;
      v1601 = v1783;
      BugCheckParameter2 = v1782;
      if ( !v1782 )
      {
        v369 = -1073741701;
        goto LABEL_1037;
      }
      v370 = 4;
      v1633 = 0LL;
      v371 = &v1634;
      v372 = 0xFFFFFFFFLL;
      v373 = 1LL;
      do
      {
        *(_BYTE *)v371 = 0;
        v371 = (int *)((char *)v371 + 1);
        --v370;
      }
      while ( v370 );
      LODWORD(v52) = 0;
      if ( *(_DWORD *)(v22 + 2060) )
      {
        LODWORD(v373) = v1634;
        LODWORD(v372) = HIDWORD(v1633);
        v374 = v1633;
        while ( 1 )
        {
          v375 = 0;
          v376 = v22;
          if ( *(_QWORD *)(v22 + 2680) )
            v376 = *(_QWORD *)(v22 + 2680);
          v1589 = v376;
          v377 = (int *)(v376 + *(unsigned int *)(v376 + 2056));
          if ( v374 && (unsigned int)v372 <= (unsigned int)v52 )
          {
            v375 = v372;
            v377 = (int *)(v376 + (unsigned int)v373);
          }
          if ( v375 != (_DWORD)v52 )
            break;
LABEL_646:
          LODWORD(v1633) = 1;
          v373 = (unsigned int)((_DWORD)v377 - v376);
          HIDWORD(v1633) = v375;
          v1634 = (_DWORD)v377 - v376;
          v374 = 1;
          v385 = *v377;
          v372 = v375;
          if ( (unsigned int)v385 <= 0x2B )
          {
            v386 = 0x80000001002LL;
            if ( _bittest64(&v386, v385) )
            {
              if ( *((_QWORD *)v377 + 1) == v368 && v377[4] == v367 )
                goto LABEL_656;
            }
          }
          if ( (unsigned int)(v385 - 33) <= 1 && *((_QWORD *)v377 + 4) == v366 )
            goto LABEL_656;
          LODWORD(v52) = v52 + 1;
          if ( (unsigned int)v52 >= *(_DWORD *)(v22 + 2060) )
            goto LABEL_655;
        }
        v378 = (unsigned int)v52 - v375;
        v375 = v52;
        while ( 2 )
        {
          v379 = *v377;
          if ( *v377 > 12 )
          {
            if ( v379 == 28 )
            {
              v384 = *((unsigned __int16 *)v377 + 20);
              goto LABEL_643;
            }
            if ( v379 == 30 )
            {
              v383 = (((v377[9] != 0 ? v377[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                   + 24 * (*((unsigned __int16 *)v377 + 20) + 2);
              goto LABEL_644;
            }
            if ( v379 <= 32 )
              goto LABEL_640;
            if ( v379 <= 34 )
            {
              v383 = 20 * (unsigned int)(((v377[8] & 0xFFF) + (unsigned __int64)(unsigned int)v377[10] + 4095) >> 12)
                   + 48;
              goto LABEL_644;
            }
            if ( v379 != 43 )
              goto LABEL_640;
          }
          else if ( v379 != 12 )
          {
            v380 = v379 - 1;
            if ( v380 )
            {
              v381 = v380 - 6;
              if ( !v381 )
              {
                v383 = (unsigned int)(24 * (v377[6] + 2));
                goto LABEL_644;
              }
              v382 = v381 - 1;
              if ( v382 )
              {
                if ( v382 == 2 )
                {
                  v383 = (unsigned int)(16 * (v377[7] + 3));
                  goto LABEL_644;
                }
LABEL_640:
                v383 = 48LL;
LABEL_644:
                v377 = (int *)((char *)v377 + v383);
                if ( !--v378 )
                {
                  v22 = (unsigned __int64)v1588;
                  LODWORD(v376) = v1589;
                  v367 = v1807;
                  v366 = BugCheckParameter2;
                  v368 = v1593;
                  goto LABEL_646;
                }
                continue;
              }
              v384 = *((unsigned __int16 *)v377 + 16);
LABEL_643:
              v383 = (v384 + 55) & 0xFFFFFFF8;
              goto LABEL_644;
            }
          }
          break;
        }
        v383 = 4 * (v377[4] / 0xCu) + 48;
        goto LABEL_644;
      }
LABEL_655:
      v377 = 0LL;
LABEL_656:
      v359 = v1608;
      v1620 = v377;
      if ( v377 )
      {
        v369 = -1073741554;
        goto LABEL_1037;
      }
      v387 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(v22 + 680))(v1608, v373, 0LL, v372);
      v78 = (*(_DWORD *)(v22 + 2448) & 0x40000000) == 0;
      LODWORD(v52) = v387;
      v1598 = v387;
      LODWORD(v1592) = v1601;
      if ( !v78 )
      {
        v389 = pg_unknown13(&v1617, v366, 9LL);
        v357 = v1617;
        v369 = v389;
LABEL_1037:
        v1588 = (struct _SLIST_ENTRY *)v357;
        v649 = &v357[-v22];
        v22 = (unsigned __int64)v357;
        v650 = &v1587[(_QWORD)v649];
        v1587 = &v1587[(_QWORD)v649];
        if ( (int)(v369 + 0x80000000) < 0 || v369 == -1073741554 )
          *((_QWORD *)v650 + 5) = v359;
        i11 = v1607;
        goto LABEL_1084;
      }
      v390 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v22 + 496);
      v1700 = 0LL;
      v1659[4] = 0;
      LOBYTE(v388) = 1;
      v1697 = v390(v366, v388, 0LL, &v1601);
      v391 = v1697 != 0 ? v1601 : 0;
      v1601 = v391;
      v392 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v22 + 496);
      v1659[1] = v391;
      LOBYTE(v391) = 1;
      v393 = v392(v366, v391, 12LL, &v1601);
      v394 = v393;
      v1594 = v393;
      v1698 = v393;
      LOBYTE(v394) = 1;
      v1601 &= -(v393 != 0);
      v395 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v22 + 496);
      v1602 = v1601;
      v1659[2] = v1601;
      v1699 = v395(v366, v394, 10LL, &v1601);
      v1601 &= -(v1699 != 0);
      v396 = *(__int64 (__fastcall **)(_QWORD))(v22 + 504);
      v1659[3] = v1601;
      v397 = v396(v366);
      if ( !v397 )
        goto LABEL_661;
      v398 = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(v22 + 1176))(v366, &v1687);
      v399 = *(_DWORD *)(v22 + 2340);
      v1701 = v398;
      v1659[5] = v1687;
      v1659[0] = *(_DWORD *)(v397 + 84);
      LODWORD(v398) = v52;
      v52 = *(unsigned int *)(v22 + 2020);
      v1696 = v366;
      v400 = (_DWORD)v398 != 0 ? 0xB : 0;
      v401 = v52 + 288;
      v1808 = v400;
      if ( (unsigned int)(v52 + 288) <= *(_DWORD *)(v22 + 2588) )
      {
        v402 = v22;
        v1589 = v22;
        *(_DWORD *)(v22 + 2020) = v401;
      }
      else
      {
        v1589 = pg_unknown7((_DWORD *)v22, v401, v399);
        v402 = v1589;
        if ( !v1589 )
        {
          v1611 = 0LL;
LABEL_680:
          v369 = -1073741670;
          goto LABEL_1036;
        }
        v403 = *(_DWORD *)(v22 + 2448);
        if ( (v403 & 4) == 0 )
        {
          v404 = *(_DWORD *)(v22 + 2020);
          v405 = *(_QWORD *)(v22 + 1992);
          v406 = (_QWORD *)v22;
          v407 = (v403 & 0x20000000) != 0 ? *(_DWORD *)(v22 + 2340) : 0;
          if ( v404 >= 8 )
          {
            v408 = (unsigned __int64)v404 >> 3;
            do
            {
              *v406 = 0LL;
              v404 -= 8;
              ++v406;
              --v408;
            }
            while ( v408 );
          }
          for ( ; v404; --v404 )
          {
            *(_BYTE *)v406 = 0;
            v406 = (_QWORD *)((char *)v406 + 1);
          }
          v409 = *(_DWORD *)(v402 + 2340);
          *(_DWORD *)(v402 + 2340) = v407;
          if ( v407 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v402 + 872))(v405);
          }
          else
          {
            v410 = 0;
            if ( (*(_DWORD *)(v402 + 2448) & 0x10000000) == 0 )
              v410 = v407;
            if ( v410 )
              (*(void (__fastcall **)(__int64, _QWORD))(v402 + 552))(v405 - 8, *(_QWORD *)(v405 - 8));
            else
              (*(void (__fastcall **)(__int64))(v402 + 256))(v405);
          }
          *(_DWORD *)(v402 + 2340) = v409;
        }
        *(_DWORD *)(v402 + 2448) &= ~4u;
        v400 = v1808;
      }
      v411 = v402 + v52;
      *(_DWORD *)(v402 + 2060) += 6;
      v412 = &v1696;
      v1670 = v402 + v52;
      v1620 = (_DWORD *)(v402 + v52);
      v413 = v1659;
      v1591 = 6LL;
      do
      {
        v414 = *v413;
        v415 = 48;
        v416 = (_QWORD *)*v412;
        v417 = 6LL;
        v1590 = *v413;
        v418 = (_QWORD *)v411;
        do
        {
          *v418 = 0LL;
          v415 -= 8;
          ++v418;
          --v417;
        }
        while ( v417 );
        for ( ; v415; --v415 )
        {
          *(_BYTE *)v418 = 0;
          v418 = (_QWORD *)((char *)v418 + 1);
        }
        *(_DWORD *)v411 = v400;
        *(_QWORD *)(v411 + 8) = v416;
        v419 = v416;
        *(_DWORD *)(v411 + 16) = v414;
        v420 = (const char *)v416;
        *(_DWORD *)(v402 + 2088) += v414;
        v421 = *(_DWORD *)(v402 + 2068);
        v422 = *(_QWORD *)(v402 + 2072);
        if ( v416 < (_QWORD *)((char *)v416 + v414) )
        {
          do
          {
            _mm_prefetch(v420, 0);
            v420 += 64;
          }
          while ( v420 < (const char *)v416 + v414 );
        }
        v423 = *(_QWORD *)(v402 + 2072);
        v424 = (unsigned int)v414 >> 7;
        if ( (unsigned int)v414 >> 7 )
        {
          do
          {
            v425 = 8LL;
            do
            {
              v426 = v423 ^ *v419;
              v427 = v419[1];
              v419 += 2;
              v423 = __ROL8__(__ROL8__(v426, v421) ^ v427, v421);
              --v425;
            }
            while ( v425 );
            v428 = __ROL8__(v422 ^ ((char *)v419 - (char *)v416), 17);
            v1715 = ((v428 ^ v422 ^ (unsigned __int64)((char *)v419 - (char *)v416))
                   * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v421 = ((unsigned __int8)(v428 ^ v422 ^ ((_BYTE)v419 - (_BYTE)v416) ^ v1715) ^ (unsigned __int8)v421) & 0x3F;
            if ( !v421 )
              LOBYTE(v421) = 1;
            --v424;
          }
          while ( v424 );
          v402 = v1589;
          LODWORD(v414) = v1590;
        }
        v429 = v414 & 0x7F;
        if ( v429 >= 8 )
        {
          v430 = (unsigned __int64)(v414 & 0x7F) >> 3;
          do
          {
            v423 = __ROL8__(*v419++ ^ v423, v421);
            v429 -= 8;
            --v430;
          }
          while ( v430 );
        }
        if ( v429 )
        {
          do
          {
            v423 = __ROL8__(*(unsigned __int8 *)v419 ^ v423, v421);
            v419 = (_QWORD *)((char *)v419 + 1);
            --v429;
          }
          while ( v429 );
          v402 = v1589;
        }
        for ( i13 = v423; ; LODWORD(v423) = i13 ^ v423 )
        {
          i13 >>= 31;
          if ( !i13 )
            break;
        }
        v400 = v1808;
        *(_DWORD *)(v411 + 20) = v423 & 0x7FFFFFFF;
        ++v413;
        *(_DWORD *)(v402 + 2088) += v414;
        ++v412;
        v411 = v1670 + 48;
        v78 = v1591-- == 1;
        v1670 += 48LL;
      }
      while ( !v78 );
      v432 = v1620;
      v52 = BugCheckParameter2;
      v22 = (unsigned __int64)v1588;
      v433 = v1598;
      *v1620 = 44;
      *((_QWORD *)v432 + 3) = v52;
      if ( (*(_DWORD *)(v402 + 2448) & 0x10200000) != 0 )
      {
LABEL_711:
        if ( !v433 )
          goto LABEL_713;
      }
      else if ( !v433 )
      {
        if ( (*(_DWORD *)(v402 + 2452) & 0x8000) != 0 )
        {
          v432[8] |= 1u;
          if ( (unsigned int)pg_unknown9(v402, v52) )
          {
            v432[8] |= 4u;
            goto LABEL_711;
          }
        }
LABEL_713:
        v357 = (_BYTE *)v402;
        v1611 = (_BYTE *)v402;
        v1617 = (_BYTE *)v402;
        v369 = pg_unknown10((unsigned int)&v1611, v1593, v1592, v52, v433, 9, (__int64)&v1631, (__int64)&v1653);
        if ( v369 < 0 )
          goto LABEL_1036;
        v357 = v1611;
        v434 = v1653 - v1631;
        v1620 = &v1611[(_QWORD)v1620 - v402];
        v435 = (_QWORD *)(v52 + v1631);
        v1617 = v1611;
        v436 = v1620 + 48;
        v437 = 48;
        v438 = v1620 + 48;
        v439 = 6LL;
        do
        {
          *v438 = 0LL;
          v437 -= 8;
          ++v438;
          --v439;
        }
        while ( v439 );
        for ( ; v437; --v437 )
        {
          *(_BYTE *)v438 = 0;
          v438 = (_QWORD *)((char *)v438 + 1);
        }
        v440 = v435;
        *v436 = v1808;
        v441 = (const char *)v435;
        *((_QWORD *)v436 + 1) = v435;
        v436[4] = v434;
        *((_DWORD *)v357 + 522) += v434;
        v442 = *((_DWORD *)v357 + 517);
        v443 = *((_QWORD *)v357 + 259);
        v444 = (unsigned __int64)v435 + v434;
        if ( (unsigned __int64)v435 < v444 )
        {
          do
          {
            _mm_prefetch(v441, 0);
            v441 += 64;
          }
          while ( (unsigned __int64)v441 < v444 );
        }
        v445 = *((_QWORD *)v357 + 259);
        v446 = v434 >> 7;
        if ( v434 >> 7 )
        {
          do
          {
            v447 = 8LL;
            do
            {
              v448 = v440[1] ^ __ROL8__(*v440 ^ v445, v442);
              v440 += 2;
              v445 = __ROL8__(v448, v442);
              --v447;
            }
            while ( v447 );
            v449 = (__ROL8__(v443 ^ ((char *)v440 - (char *)v435), 17) ^ v443 ^ (unsigned __int64)((char *)v440
                                                                                                 - (char *)v435))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1716 = *((_QWORD *)&v449 + 1);
            v442 = ((unsigned __int8)(v449 ^ BYTE8(v449)) ^ (unsigned __int8)v442) & 0x3F;
            if ( !v442 )
              LOBYTE(v442) = 1;
            --v446;
          }
          while ( v446 );
          v22 = (unsigned __int64)v1588;
          v433 = v1598;
        }
        v450 = v434 & 0x7F;
        if ( (unsigned int)v450 >= 8 )
        {
          v451 = (unsigned __int64)(unsigned int)v450 >> 3;
          do
          {
            v445 = __ROL8__(*v440++ ^ v445, v442);
            v450 = (unsigned int)(v450 - 8);
            --v451;
          }
          while ( v451 );
        }
        if ( (_DWORD)v450 )
        {
          do
          {
            v452 = *(unsigned __int8 *)v440;
            v440 = (_QWORD *)((char *)v440 + 1);
            v445 = __ROL8__(v452 ^ v445, v442);
            v450 = (unsigned int)(v450 - 1);
          }
          while ( (_DWORD)v450 );
          v22 = (unsigned __int64)v1588;
        }
        for ( i14 = v445; ; v445 = (unsigned int)i14 ^ (unsigned int)v445 )
        {
          i14 >>= 31;
          if ( !i14 )
            break;
        }
        LODWORD(v445) = v445 & 0x7FFFFFFF;
        v436[5] = v445;
        v454 = v1620;
        v1620[60] = 48;
        if ( v454[64] )
        {
          v445 = 4294967294LL;
          v454[66] = v454[66] & 0xFFFFFFFE | (v433 != 0);
        }
        v1617 = v357;
        v1637 = v1620 + 24;
        LODWORD(v52) = (v433 != 0) + 13;
        if ( v1620 == (_DWORD *)-96LL )
        {
          v455 = *((unsigned int *)v357 + 505);
          v456 = v455 + 48;
          if ( (unsigned int)(v455 + 48) <= *((_DWORD *)v357 + 647) )
          {
            v457 = (__int64)v357;
            *((_DWORD *)v357 + 505) = v456;
          }
          else
          {
            v457 = pg_unknown7(v357, v456, *((_DWORD *)v357 + 585));
            if ( !v457 )
            {
              v1611 = 0LL;
              goto LABEL_680;
            }
            v458 = *((_DWORD *)v357 + 612);
            if ( (v458 & 4) == 0 )
            {
              v459 = *((_DWORD *)v357 + 505);
              v460 = *((_QWORD *)v357 + 249);
              v461 = (v458 & 0x20000000) != 0 ? *((_DWORD *)v357 + 585) : 0;
              if ( v459 >= 8 )
              {
                v462 = (unsigned __int64)v459 >> 3;
                do
                {
                  *(_QWORD *)v357 = 0LL;
                  v459 -= 8;
                  v357 += 8;
                  --v462;
                }
                while ( v462 );
              }
              for ( ; v459; --v459 )
                *v357++ = 0;
              v463 = *(_DWORD *)(v457 + 2340);
              *(_DWORD *)(v457 + 2340) = v461;
              if ( v461 == 3 )
              {
                (*(void (__fastcall **)(__int64, __int64))(v457 + 872))(v460, 1LL);
              }
              else
              {
                v464 = 0;
                if ( (*(_DWORD *)(v457 + 2448) & 0x10000000) == 0 )
                  v464 = v461;
                if ( v464 )
                  (*(void (__fastcall **)(__int64, _QWORD))(v457 + 552))(v460 - 8, *(_QWORD *)(v460 - 8));
                else
                  (*(void (__fastcall **)(__int64, __int64))(v457 + 256))(v460, 1LL);
              }
              *(_DWORD *)(v457 + 2340) = v463;
            }
            *(_DWORD *)(v457 + 2448) &= ~4u;
          }
          ++*(_DWORD *)(v457 + 2060);
          v465 = v457 + v455;
          v1688 = (_DWORD *)v465;
          v466 = (_QWORD *)v465;
          v467 = 48;
          v468 = 6LL;
          do
          {
            *v466 = 0LL;
            v467 -= 8;
            ++v466;
            --v468;
          }
          while ( v468 );
          for ( ; v467; --v467 )
          {
            *(_BYTE *)v466 = 0;
            v466 = (_QWORD *)((char *)v466 + 1);
          }
          v469 = (const char *)v1594;
          *(_DWORD *)v465 = v52;
          v450 = (unsigned __int64)v469;
          v52 = v1602;
          *(_QWORD *)(v465 + 8) = v469;
          *(_DWORD *)(v465 + 16) = v52;
          *(_DWORD *)(v457 + 2088) += v52;
          v470 = *(_DWORD *)(v457 + 2068);
          v471 = *(_QWORD *)(v457 + 2072);
          if ( v469 < &v469[v52] )
          {
            v472 = v469;
            do
            {
              _mm_prefetch(v472, 0);
              v472 += 64;
            }
            while ( v472 < &v469[v52] );
          }
          v445 = *(_QWORD *)(v457 + 2072);
          v473 = (unsigned int)v52 >> 7;
          if ( (unsigned int)v52 >> 7 )
          {
            do
            {
              v474 = 8LL;
              do
              {
                v475 = v445 ^ *(_QWORD *)v450;
                v476 = *(_QWORD *)(v450 + 8);
                v450 += 16LL;
                v445 = __ROL8__(__ROL8__(v475, v470) ^ v476, v470);
                --v474;
              }
              while ( v474 );
              v477 = __ROL8__(v471 ^ (v450 - (_QWORD)v469), 17) ^ v471 ^ (v450 - (_QWORD)v469);
              v1717 = (v477 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v470 = ((unsigned __int8)(v477 ^ v1717) ^ (unsigned __int8)v470) & 0x3F;
              if ( !v470 )
                LOBYTE(v470) = 1;
              --v473;
            }
            while ( v473 );
            v22 = (unsigned __int64)v1588;
            v433 = v1598;
          }
          v478 = v52 & 0x7F;
          if ( v478 >= 8 )
          {
            v479 = (v52 & 0x7F) >> 3;
            do
            {
              v445 = __ROL8__(*(_QWORD *)v450 ^ v445, v470);
              v450 += 8LL;
              v478 -= 8;
              --v479;
            }
            while ( v479 );
          }
          if ( v478 )
          {
            do
            {
              v480 = *(unsigned __int8 *)v450++;
              v445 = __ROL8__(v480 ^ v445, v470);
              --v478;
            }
            while ( v478 );
            v22 = (unsigned __int64)v1588;
          }
          for ( i15 = v445; ; v445 = (unsigned int)i15 ^ (unsigned int)v445 )
          {
            i15 >>= 31;
            if ( !i15 )
              break;
          }
          LODWORD(v445) = v445 & 0x7FFFFFFF;
          v357 = (_BYTE *)v457;
          *(_DWORD *)(v465 + 20) = v445;
          v1637 = v1688;
          *(_DWORD *)(v457 + 2088) += v52;
        }
        else
        {
          v469 = (const char *)v1594;
          v1620[24] = v52;
          LODWORD(v52) = v1602;
        }
        if ( (*((_DWORD *)v357 + 612) & 0x40000000) != 0 && (_DWORD)v52 )
          pg_unknown12(v357, v469, (unsigned int)v52, v1637 + 7);
        v1617 = v357;
        v482 = 4294967294LL;
        v1637[6] = 0;
        v1637[6] |= 1u;
        v483 = v1620;
        v1620[36] = 35;
        v483[46] = v483[46] & 0xFFFFFFFE | (v433 != 0);
        if ( v483[40] >= 0x94u )
        {
          v484 = BugCheckParameter2;
          v52 = *((_QWORD *)v483 + 19);
          v485 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned __int64))v357 + 63))(
                   BugCheckParameter2,
                   4294967294LL,
                   v445,
                   v450);
          if ( !v485 )
          {
            v1611 = 0LL;
            goto LABEL_680;
          }
          v486 = *(unsigned int *)(v485 + 80);
          v483[46] |= 2u;
          v487 = v484 + v486;
          v488 = *(_QWORD **)(v52 + 112);
          if ( (unsigned __int64)v488 >= v484 && (unsigned __int64)v488 < v487 )
          {
            *((_QWORD *)v483 + 21) = *v488;
            v483[46] |= 4u;
          }
          v489 = *(_QWORD **)(v52 + 120);
          if ( (unsigned __int64)v489 >= v484 && (unsigned __int64)v489 < v487 )
          {
            *((_QWORD *)v483 + 22) = *v489;
            v483[46] |= 8u;
          }
        }
        v78 = (*((_DWORD *)v357 + 612) & 0x400000) == 0;
        v1611 = v357;
        if ( v78 )
          goto LABEL_1035;
        v490 = BugCheckParameter2;
        v491 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, __int64, unsigned __int64))v357 + 63))(
                 BugCheckParameter2,
                 v482,
                 v445,
                 v450);
        v1600 = (char *)v491;
        LODWORD(v52) = v491;
        if ( !v491 )
          goto LABEL_661;
        v492 = *(_WORD *)(v491 + 6);
        v1809 = v492;
        v1594 = (unsigned int)v1592 / 0xCuLL;
        if ( !v492 )
        {
          if ( (*((_DWORD *)v357 + 612) & 0x200000) == 0 )
          {
            v1649 = -805294751;
            KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v490, 0LL, 0LL);
          }
          if ( !*((_DWORD *)v357 + 574) )
          {
            *((_QWORD *)v357 + 288) = v357 - 0x5C5FC0A76E374B18LL;
            *((_QWORD *)v357 + 289) = 0LL;
            *((_QWORD *)v357 + 290) = 271LL;
            *((_QWORD *)v357 + 291) = v490;
            *((_DWORD *)v357 + 574) = 1;
            goto LABEL_801;
          }
          goto LABEL_661;
        }
        v493 = 0;
        v494 = v492;
        v495 = (unsigned int *)v1593;
        LODWORD(v1599) = 0;
        v1590 = v492;
        v1603 = 12LL * ((unsigned int)v1592 / 0xC);
        v1610 = (unsigned int *)(v1593 + v1603);
        v1591 = *(unsigned __int16 *)(v491 + 20) + v491 + 24;
        v496 = v1591;
        v497 = (_DWORD *)v1591;
        v1589 = v1591;
        v498 = 1LL;
        do
        {
          v499 = v497[4];
          v500 = (unsigned int)v497[3];
          if ( v499 <= v497[2] )
            v499 = v497[2];
          v1602 = v497[3];
          v501 = v500 + v499;
          if ( v493 )
          {
            if ( v501 < *(_DWORD *)(v496 + 40LL * (v493 - 1) + 12) )
            {
              if ( (*((_DWORD *)v357 + 612) & 0x200000) == 0 )
              {
                v1648 = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v490, 1uLL, 0LL);
              }
              if ( !*((_DWORD *)v357 + 574) )
              {
                *((_QWORD *)v357 + 288) = v357 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v357 + 289) = 0LL;
                *((_QWORD *)v357 + 290) = 271LL;
                *((_QWORD *)v357 + 291) = v490;
                *((_DWORD *)v357 + 574) = 1;
                goto LABEL_801;
              }
LABEL_661:
              v369 = -1073741701;
              goto LABEL_1036;
            }
            v493 = v1599;
          }
          if ( v495 != v1610 )
          {
            do
            {
              v502 = v495[1];
              if ( *v495 >= v501 || v502 <= (unsigned int)v500 )
                break;
              if ( *v495 < (unsigned int)v500 || v502 > v501 )
              {
                if ( (*((_DWORD *)v357 + 612) & 0x200000) == 0 )
                {
                  v1645 = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v490, 2uLL, 0LL);
                }
LABEL_839:
                if ( !*((_DWORD *)v357 + 574) )
                {
                  *((_QWORD *)v357 + 288) = v357 - 0x5C5FC0A76E374B18LL;
                  *((_QWORD *)v357 + 289) = 0LL;
                  *((_QWORD *)v357 + 290) = 271LL;
                  *((_QWORD *)v357 + 291) = v490;
                  *((_DWORD *)v357 + 574) = 1;
LABEL_801:
                  __b8(v357, 0LL);
                }
                goto LABEL_661;
              }
              v503 = v495[2];
              v1718 = v495;
              if ( (v503 & 1) != 0 || (*(_BYTE *)(v503 + v490) & 0x20) != 0 )
              {
                v504 = v497[4];
                v505 = v497[3];
                if ( v504 <= v497[2] )
                  v504 = v497[2];
                LODWORD(v52) = v505 + v504;
                v506 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, __int64, __int64))v357
                                        + 131))(
                                         v495,
                                         v490,
                                         v500,
                                         v498);
                v507 = v506;
                if ( *v506 < v505 || v506[1] > (unsigned int)v52 )
                {
                  v508 = BugCheckParameter2;
                  if ( (*((_DWORD *)v357 + 612) & 0x200000) == 0 )
                  {
                    v1646 = -805294751;
                    KeBugCheckEx(
                      __ROR4__(-805306349, 92),
                      0xAuLL,
                      BugCheckParameter2,
                      ((_DWORD)v506 - (_DWORD)BugCheckParameter2) | 0x80000000,
                      0LL);
                  }
                  if ( !*((_DWORD *)v357 + 574) )
                  {
                    *((_QWORD *)v357 + 288) = v357 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v357 + 289) = 0LL;
                    *((_QWORD *)v357 + 290) = 271LL;
                    *((_QWORD *)v357 + 291) = v508;
                    *((_DWORD *)v357 + 574) = 1;
                    __b8(v357, 0LL);
                  }
                }
                v509 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v357 + 132))(
                                         v507,
                                         BugCheckParameter2,
                                         BugCheckParameter2 + *v507);
                if ( *v509 >= v505 && v509[1] <= (unsigned int)v52 )
                {
                  v490 = BugCheckParameter2;
                }
                else
                {
                  v490 = BugCheckParameter2;
                  v510 = ((_DWORD)v509 - BugCheckParameter2) | 0x80000000;
                  if ( (*((_DWORD *)v357 + 612) & 0x200000) == 0 )
                  {
                    v1647 = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, v510, 0LL);
                  }
                  if ( !*((_DWORD *)v357 + 574) )
                  {
                    *((_QWORD *)v357 + 288) = v357 - 0x5C5FC0A76E374B18LL;
                    *((_QWORD *)v357 + 289) = 0LL;
                    *((_QWORD *)v357 + 290) = 271LL;
                    *((_QWORD *)v357 + 291) = v490;
                    *((_DWORD *)v357 + 574) = 1;
                    __b8(v357, 0LL);
                  }
                }
                v497 = (_DWORD *)v1589;
                v500 = v1602;
              }
              v495 += 3;
            }
            while ( v495 != v1610 );
            v493 = v1599;
            v498 = 1LL;
            v494 = v1590;
            v496 = v1591;
          }
          ++v493;
          v497 += 10;
          LODWORD(v1599) = v493;
          v1589 = (__int64)v497;
        }
        while ( v493 < v494 );
        v511 = v1594;
        v52 = (unsigned __int64)v1600;
        v512 = v1603;
        if ( v495 != v1610 )
        {
          if ( (*((_DWORD *)v357 + 612) & 0x200000) == 0 )
          {
            v1644 = -805294751;
            KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v490, 3uLL, 0LL);
          }
          goto LABEL_839;
        }
        if ( (_DWORD)v1594 )
          v513 = (v1594 + 6) & 0xFFFFFFF8;
        else
          v513 = 0;
        v514 = *((unsigned int *)v357 + 505);
        v515 = v514 + v513 + 24 * (v494 + 2);
        if ( v515 <= *((_DWORD *)v357 + 647) )
        {
          v516 = v357;
          v1599 = (__int64)v357;
          *((_DWORD *)v357 + 505) = v515;
          goto LABEL_862;
        }
        v1599 = pg_unknown7(v357, v515, *((_DWORD *)v357 + 585));
        v516 = (_BYTE *)v1599;
        if ( !v1599 )
          goto LABEL_680;
        v517 = *((_DWORD *)v357 + 612);
        if ( (v517 & 4) == 0 )
        {
          v518 = *((_DWORD *)v357 + 505);
          v519 = *((_QWORD *)v357 + 249);
          v520 = (v517 & 0x20000000) != 0 ? *((_DWORD *)v357 + 585) : 0;
          if ( v518 >= 8 )
          {
            v521 = (unsigned __int64)v518 >> 3;
            do
            {
              *(_QWORD *)v357 = 0LL;
              v518 -= 8;
              v357 += 8;
              --v521;
            }
            while ( v521 );
          }
          for ( ; v518; --v518 )
            *v357++ = 0;
          v522 = *((_DWORD *)v516 + 585);
          *((_DWORD *)v516 + 585) = v520;
          if ( v520 == 3 )
          {
            (*((void (__fastcall **)(__int64, __int64))v516 + 109))(v519, 1LL);
          }
          else
          {
            v523 = 0;
            if ( (*((_DWORD *)v516 + 612) & 0x10000000) == 0 )
              v523 = v520;
            if ( v523 )
              (*((void (__fastcall **)(__int64, _QWORD))v516 + 69))(v519 - 8, *(_QWORD *)(v519 - 8));
            else
              (*((void (__fastcall **)(__int64, __int64))v516 + 32))(v519, 1LL);
          }
          *((_DWORD *)v516 + 585) = v522;
        }
        *((_DWORD *)v516 + 612) &= ~4u;
        v511 = v1594;
        v494 = v1590;
LABEL_862:
        v524 = &v516[v514];
        ++*((_DWORD *)v516 + 515);
        v1681 = &v516[v514];
        v525 = 48;
        v526 = &v516[v514];
        v527 = 6LL;
        do
        {
          *v526 = 0LL;
          v525 -= 8;
          ++v526;
          --v527;
        }
        while ( v527 );
        for ( ; v525; --v525 )
        {
          *(_BYTE *)v526 = 0;
          v526 = (_QWORD *)((char *)v526 + 1);
        }
        v528 = v1593;
        *(_DWORD *)v524 = 30;
        *((_QWORD *)v524 + 1) = v528;
        *((_DWORD *)v524 + 4) = 0;
        v529 = *((_QWORD *)v516 + 259);
        for ( i16 = v529; ; LODWORD(v529) = i16 ^ v529 )
        {
          i16 >>= 31;
          if ( !i16 )
            break;
        }
        *((_DWORD *)v524 + 5) = v529 & 0x7FFFFFFF;
        v357 = v516;
        v1630 = v1681;
        v1611 = v516;
        *((_QWORD *)v1681 + 3) = BugCheckParameter2;
        *((_DWORD *)v1630 + 8) = *(_DWORD *)(v52 + 80);
        *((_DWORD *)v1630 + 9) = v1592;
        *((_WORD *)v1630 + 20) = v1809;
        v531 = 0;
        *((_WORD *)v1630 + 21) = *((_WORD *)v1630 + 21) & 0xFFFE | (v1598 != 0);
        v1600 = v1630 + 48;
        if ( v511 )
          v52 = (unsigned __int64)&v1630[(((unsigned int)(v511 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
        else
          v52 = (unsigned __int64)(v1630 + 48);
        v532 = *((unsigned __int16 *)v1630 + 20);
        v78 = v511 == 0;
        v533 = (unsigned int *)v1593;
        v1594 = v52;
        v534 = v52 + 24 * v532;
        v535 = 12LL;
        if ( v78 )
          v535 = v512;
        v1603 = v52 + 24 * v532;
        v1589 = v1593 + v535;
        if ( v494 )
        {
          v536 = v494;
          v537 = (_DWORD *)(v52 + 8);
          do
          {
            v538 = 2LL;
            do
            {
              *(v537 - 2) = 0;
              *(v537 - 1) = 0;
              *v537 = 0x80000000;
              v537 += 3;
              --v538;
            }
            while ( v538 );
            --v536;
          }
          while ( v536 );
          v22 = (unsigned __int64)v1588;
        }
        if ( v52 != v534 )
        {
          v539 = (unsigned __int8 *)v1591;
          while ( 1 )
          {
            v540 = 0;
            if ( (*((_DWORD *)v539 + 9) & 0x2000000) != 0
              || (v541 = *(_DWORD *)v539, *(_DWORD *)v539 == 1414090313) && *((_DWORD *)v539 + 1) == 1195525195
              || v541 == 1162297680 && ((v542 = *((_WORD *)v539 + 2), v542 == 30839) || v542 == 29303 || v542 == 30583)
              || v541 == 1095914053 && *((_WORD *)v539 + 2) == 16724 )
            {
              v540 = 1;
            }
            else
            {
              v543 = 7;
              v544 = (unsigned __int8 *)*((_QWORD *)v516 + 294);
              v545 = v539;
              v1693 = (__int64 *)*((_QWORD *)v516 + 295);
              v1694 = (unsigned __int8 *)*((_QWORD *)v516 + 296);
              v1695 = (unsigned __int8 *)*((_QWORD *)v516 + 297);
              v1692 = v544;
              while ( 1 )
              {
                v546 = *v545++;
                v547 = *v544++;
                if ( v546 != v547 )
                  break;
                if ( !--v543 )
                  goto LABEL_909;
              }
              v548 = v1693;
              v549 = 8;
              v550 = (__int64 *)v539;
              do
              {
                v551 = *v550++;
                v552 = *v548++;
                if ( v551 != v552 )
                  goto LABEL_902;
                v549 -= 8;
              }
              while ( v549 >= 8 );
              if ( v549 )
              {
                while ( 1 )
                {
                  v553 = *(unsigned __int8 *)v550;
                  v550 = (__int64 *)((char *)v550 + 1);
                  v554 = *(unsigned __int8 *)v548;
                  v548 = (__int64 *)((char *)v548 + 1);
                  if ( v553 != v554 )
                    break;
                  if ( !--v549 )
                    goto LABEL_909;
                }
LABEL_902:
                v555 = v1694;
                v556 = 4;
                v557 = v539;
                while ( 1 )
                {
                  v558 = *v557++;
                  v559 = *v555++;
                  if ( v558 != v559 )
                    break;
                  if ( !--v556 )
                    goto LABEL_909;
                }
                v560 = v1695;
                v561 = 6;
                v562 = v539;
                while ( 1 )
                {
                  v563 = *v562++;
                  v564 = *v560++;
                  if ( v563 != v564 )
                    break;
                  if ( !--v561 )
                    goto LABEL_909;
                }
              }
              else
              {
LABEL_909:
                v540 = 1;
              }
              v533 = (unsigned int *)v1593;
            }
            v565 = *((_DWORD *)v539 + 9);
            if ( v565 < 0 )
              v540 = 1;
            v1810 = v540;
            if ( v540 && *(_DWORD *)v539 == 1414090313 && *((_DWORD *)v539 + 1) == 1195525195 )
            {
              if ( (*((_DWORD *)v516 + 613) & 0x2000) != 0 )
                v540 = 0;
              v1810 = v540;
            }
            v566 = BugCheckParameter2;
            if ( (*((_DWORD *)v516 + 613) & 0x4000) != 0
              && (v565 & 0x20000000) != 0
              && (BugCheckParameter2 == *((_QWORD *)v516 + 189) || BugCheckParameter2 == *((_QWORD *)v516 + 190)) )
            {
              v540 = 1;
              v1810 = 1;
            }
            v567 = *((_DWORD *)v539 + 4);
            v568 = *((_DWORD *)v539 + 3);
            v569 = v1610;
            if ( v567 <= *((_DWORD *)v539 + 2) )
              v567 = *((_DWORD *)v539 + 2);
            v570 = v568 + v567;
            v1590 = *((_DWORD *)v539 + 3);
            v571 = 0;
            v1598 = v570;
            if ( v533 == v1610 )
            {
              v572 = 0;
            }
            else
            {
              v531 = *v533;
              v572 = v533[1];
            }
            v1602 = v572;
            v573 = v568;
            LODWORD(v1592) = v531;
            if ( v533 != v1610 && v531 > v568 && v572 <= v570 && !v540 )
            {
              *(_DWORD *)v52 = v568;
              v574 = &v1696;
              *(_DWORD *)(v52 + 4) = v531;
              v575 = *(unsigned int *)v52;
              v573 = v531;
              v576 = v531 - v575;
              v577 = v566 + v575;
              v578 = v566 + v575 + v531 - (unsigned int)v575;
              v579 = v1659;
              do
              {
                if ( v577 < *v574 + *v579 && v578 > *v574 )
                {
                  v570 = v1598;
                  v569 = v1610;
                  v533 = (unsigned int *)v1593;
                  goto LABEL_958;
                }
                ++v571;
                ++v574;
                ++v579;
              }
              while ( v571 < 6 );
              v580 = v1599;
              v581 = (_QWORD *)v577;
              *(_DWORD *)(v1599 + 2088) += v576;
              v582 = *(_DWORD *)(v580 + 2068);
              v583 = *(_QWORD *)(v580 + 2072);
              v584 = (const char *)v577;
              if ( v577 < v578 )
              {
                do
                {
                  _mm_prefetch(v584, 0);
                  v584 += 64;
                }
                while ( (unsigned __int64)v584 < v578 );
              }
              v585 = v576 >> 7;
              v586 = v583;
              if ( v576 >> 7 )
              {
                do
                {
                  v587 = 8LL;
                  do
                  {
                    v588 = v581[1] ^ __ROL8__(*v581 ^ v586, v582);
                    v581 += 2;
                    v586 = __ROL8__(v588, v582);
                    --v587;
                  }
                  while ( v587 );
                  v589 = (__ROL8__(v583 ^ ((unsigned __int64)v581 - v577), 17) ^ v583 ^ ((unsigned __int64)v581 - v577))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v1719 = *((_QWORD *)&v589 + 1);
                  v582 = ((unsigned __int8)v589 ^ (unsigned __int8)(BYTE8(v589) ^ v582)) & 0x3F;
                  if ( !v582 )
                    LOBYTE(v582) = 1;
                  --v585;
                }
                while ( v585 );
                v22 = (unsigned __int64)v1588;
                v531 = v1592;
                v572 = v1602;
              }
              v590 = v576 & 0x7F;
              if ( v590 >= 8 )
              {
                v591 = (unsigned __int64)v590 >> 3;
                do
                {
                  v586 = __ROL8__(*v581++ ^ v586, v582);
                  v590 -= 8;
                  --v591;
                }
                while ( v591 );
              }
              if ( v590 )
              {
                do
                {
                  v592 = *(unsigned __int8 *)v581;
                  v581 = (_QWORD *)((char *)v581 + 1);
                  v586 = __ROL8__(v592 ^ v586, v582);
                  --v590;
                }
                while ( v590 );
                v22 = (unsigned __int64)v1588;
              }
              for ( i17 = v586; ; LODWORD(v586) = i17 ^ v586 )
              {
                i17 >>= 31;
                if ( !i17 )
                  break;
              }
              v570 = v1598;
              v568 = v1590;
              v533 = (unsigned int *)v1593;
              *(_DWORD *)(v1594 + 8) = v586 & 0x7FFFFFFF;
              v569 = v1610;
            }
LABEL_958:
            if ( v531 < v568 )
            {
              v595 = v1810;
            }
            else
            {
              v594 = v572 <= v570;
              v595 = v1810;
              if ( v594 && v533 != v569 )
              {
                v596 = (unsigned int *)v1589;
LABEL_996:
                v623 = v596[1];
                while ( v623 <= v570 && v596 != v569 )
                {
                  if ( v595 )
                  {
                    v597 = 0x80;
                  }
                  else
                  {
                    v598 = v533[1];
                    v573 = *v596;
                    v599 = v1599;
                    if ( *v596 < (unsigned int)v598 )
                    {
                      if ( (*(_DWORD *)(v1599 + 2448) & 0x200000) == 0 )
                      {
                        v1652 = -805294751;
                        KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, BugCheckParameter2, 6uLL, 0LL);
                      }
                      if ( !*(_DWORD *)(v1599 + 2296) )
                      {
                        v600 = v1599;
                        *(_QWORD *)(v1599 + 2304) = v1599 - 0x5C5FC0A76E374B18LL;
                        *(_QWORD *)(v599 + 2312) = 0LL;
                        v601 = BugCheckParameter2;
                        *(_QWORD *)(v599 + 2320) = 271LL;
                        *(_QWORD *)(v599 + 2328) = v601;
                        *(_DWORD *)(v599 + 2296) = 1;
                        __b8(v600, 0LL);
                      }
                    }
                    v602 = &v1696;
                    v603 = v573 - v598;
                    v604 = BugCheckParameter2 + v598;
                    v605 = 0;
                    v606 = v1659;
                    v607 = BugCheckParameter2 + v598 + v573 - (unsigned int)v598;
                    do
                    {
                      if ( v604 < *v602 + *v606 && v607 > *v602 )
                        goto LABEL_993;
                      ++v605;
                      ++v602;
                      ++v606;
                    }
                    while ( v605 < 6 );
                    if ( v603 < 4 )
                    {
LABEL_993:
                      v597 = 0x80;
                    }
                    else
                    {
                      *(_DWORD *)(v599 + 2088) += v603;
                      v608 = (_QWORD *)v604;
                      v609 = *(_DWORD *)(v599 + 2068);
                      v610 = *(_QWORD *)(v1599 + 2072);
                      v611 = (const char *)v604;
                      if ( v604 < v607 )
                      {
                        do
                        {
                          _mm_prefetch(v611, 0);
                          v611 += 64;
                        }
                        while ( (unsigned __int64)v611 < v607 );
                      }
                      v612 = *(_QWORD *)(v1599 + 2072);
                      v613 = v603 >> 7;
                      if ( v603 >> 7 )
                      {
                        do
                        {
                          v614 = 8LL;
                          do
                          {
                            v615 = v612 ^ *v608;
                            v616 = v608[1];
                            v608 += 2;
                            v612 = __ROL8__(__ROL8__(v615, v609) ^ v616, v609);
                            --v614;
                          }
                          while ( v614 );
                          v617 = __ROL8__(v610 ^ ((unsigned __int64)v608 - v604), 17) ^ v610 ^ ((unsigned __int64)v608
                                                                                              - v604);
                          v1720 = (v617 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v609 = ((unsigned __int8)(v617 ^ v1720) ^ (unsigned __int8)v609) & 0x3F;
                          if ( !v609 )
                            LOBYTE(v609) = 1;
                          --v613;
                        }
                        while ( v613 );
                        v22 = (unsigned __int64)v1588;
                        v595 = v1810;
                      }
                      v618 = v603 & 0x7F;
                      if ( v618 >= 8 )
                      {
                        v619 = (unsigned __int64)v618 >> 3;
                        do
                        {
                          v612 = __ROL8__(*v608++ ^ v612, v609);
                          v618 -= 8;
                          --v619;
                        }
                        while ( v619 );
                      }
                      if ( v618 )
                      {
                        do
                        {
                          v620 = *(unsigned __int8 *)v608;
                          v608 = (_QWORD *)((char *)v608 + 1);
                          v612 = __ROL8__(v620 ^ v612, v609);
                          --v618;
                        }
                        while ( v618 );
                        v595 = v1810;
                      }
                      for ( i18 = v612; ; LOBYTE(v612) = i18 ^ v612 )
                      {
                        i18 >>= 7;
                        if ( !i18 )
                          break;
                      }
                      v597 = v612 & 0x7F;
                    }
                    v533 = (unsigned int *)v1593;
                    v570 = v1598;
                  }
                  v622 = v1600++;
                  *v622 = v597;
                  v533 += 3;
                  v596 = (unsigned int *)(v1589 + 12);
                  v1593 = (unsigned __int64)v533;
                  v569 = v1610;
                  v1589 = (__int64)v596;
                  if ( v596 != v1610 )
                    goto LABEL_996;
                }
              }
            }
            v624 = v1594;
            v531 = 0;
            if ( v595 || v573 == v570 )
              goto LABEL_1026;
            v625 = BugCheckParameter2;
            v626 = v1659;
            *(_DWORD *)(v1594 + 12) = v573;
            v627 = &v1696;
            *(_DWORD *)(v624 + 16) = v570;
            v628 = *(unsigned int *)(v624 + 12);
            v629 = v570 - v628;
            v630 = v628 + v625;
            v631 = 0;
            v632 = v630 + v570 - (unsigned int)v628;
            do
            {
              if ( v630 < *v627 + *v626 && v632 > *v627 )
              {
                v533 = (unsigned int *)v1593;
LABEL_1026:
                v516 = (_BYTE *)v1599;
                goto LABEL_1027;
              }
              ++v631;
              ++v627;
              ++v626;
            }
            while ( v631 < 6 );
            v516 = (_BYTE *)v1599;
            v633 = (_QWORD *)v630;
            v634 = (const char *)v630;
            *(_DWORD *)(v1599 + 2088) += v629;
            v635 = *((_DWORD *)v516 + 517);
            v636 = *((_QWORD *)v516 + 259);
            if ( v630 < v632 )
            {
              do
              {
                _mm_prefetch(v634, 0);
                v634 += 64;
              }
              while ( (unsigned __int64)v634 < v632 );
            }
            v637 = *((_QWORD *)v516 + 259);
            v638 = v629 >> 7;
            if ( v629 >> 7 )
            {
              do
              {
                v639 = 8LL;
                do
                {
                  v640 = v637 ^ *v633;
                  v641 = v633[1];
                  v633 += 2;
                  v637 = __ROL8__(__ROL8__(v640, v635) ^ v641, v635);
                  --v639;
                }
                while ( v639 );
                v642 = __ROL8__(v636 ^ ((unsigned __int64)v633 - v630), 17) ^ v636 ^ ((unsigned __int64)v633 - v630);
                v1721 = (v642 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v635 = ((unsigned __int8)(v642 ^ v1721) ^ (unsigned __int8)v635) & 0x3F;
                if ( !v635 )
                  LOBYTE(v635) = 1;
                --v638;
              }
              while ( v638 );
              v22 = (unsigned __int64)v1588;
            }
            v643 = v629 & 0x7F;
            if ( v643 >= 8 )
            {
              v644 = (unsigned __int64)v643 >> 3;
              do
              {
                v637 = __ROL8__(*v633++ ^ v637, v635);
                v643 -= 8;
                --v644;
              }
              while ( v644 );
            }
            if ( v643 )
            {
              do
              {
                v645 = *(unsigned __int8 *)v633;
                v633 = (_QWORD *)((char *)v633 + 1);
                v637 = __ROL8__(v645 ^ v637, v635);
                --v643;
              }
              while ( v643 );
              v22 = (unsigned __int64)v1588;
            }
            for ( i19 = v637; ; LODWORD(v637) = i19 ^ v637 )
            {
              i19 >>= 31;
              if ( !i19 )
                break;
            }
            v624 = v1594;
            v533 = (unsigned int *)v1593;
            *(_DWORD *)(v1594 + 20) = v637 & 0x7FFFFFFF;
LABEL_1027:
            if ( v533 != v1610 && *v533 >= v1590 && v533[1] <= v1598 )
            {
              v647 = v1589;
              if ( (unsigned int *)v1589 != v1610 )
              {
                v648 = v1600;
                *v1600 = 0x80;
                v1600 = v648 + 1;
                v1589 = v647 + 12;
              }
              v533 += 3;
              v1593 = (unsigned __int64)v533;
            }
            v52 = v624 + 24;
            v539 = (unsigned __int8 *)(v1591 + 40);
            v1594 = v52;
            v1591 += 40LL;
            if ( v52 == v1603 )
            {
              v357 = v1611;
              break;
            }
          }
        }
LABEL_1035:
        v1617 = v357;
        v369 = 0;
LABEL_1036:
        v359 = v1608;
        goto LABEL_1037;
      }
      v432[8] |= 2u;
      goto LABEL_713;
    }
    switch ( v86 )
    {
      case 12:
        if ( !*(_QWORD *)(v22 + 2432) )
          goto LABEL_1733;
        v1274 = *(_DWORD *)(v22 + 2452);
        LOBYTE(v1275) = v1274;
        if ( *(_DWORD *)(v22 + 2084) )
        {
          if ( (((unsigned __int8)v1274 ^ (unsigned __int8)(v1274 >> 3)) & 4) != 0 )
            goto LABEL_1733;
        }
        else
        {
          v1275 = v1274 ^ ((unsigned __int8)v1274 ^ (unsigned __int8)(8 * v1274)) & 0x20;
          *(_DWORD *)(v22 + 2452) = v1275;
        }
        if ( (v1275 & 4) != 0 )
        {
          v52 = *((_QWORD *)v61 + 4);
          if ( v52 )
          {
            v1276 = *(unsigned int *)(v22 + 2084);
            v1277 = ((((_WORD)v52 + (_WORD)v1276) & 0xFFF)
                   + (unsigned __int64)(unsigned int)(*((_DWORD *)v61 + 10) - v1276)
                   + 4095) >> 12;
            v1278 = v52 + v1276;
          }
          else
          {
            v1278 = *((_QWORD *)v61 + 1);
            v1277 = (*((unsigned int *)v61 + 4) + (unsigned __int64)(*((_DWORD *)v61 + 2) & 0xFFF) + 4095) >> 12;
          }
          v1279 = v1278 & 0xFFFFFFFFFFFFF000uLL;
          while ( v1277 )
          {
            --v1277;
            if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v22 + 688))(v1279) && !*(_DWORD *)(v22 + 2296) )
            {
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *(int *)v61;
              *(_QWORD *)(v22 + 2328) = v1279;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
            }
            *(_DWORD *)(v22 + 2088) += 256;
            v1279 += 4096LL;
            if ( v52 )
            {
              *(_DWORD *)(v22 + 2084) += 4096;
              if ( *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
                break;
            }
          }
          if ( v52 && !v1277 )
            *(_DWORD *)(v22 + 2084) = 0;
          if ( *(_DWORD *)(v22 + 2084) )
            goto LABEL_235;
          v1280 = *(_QWORD *)(v22 + 1344);
          LODWORD(v52) = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          (*(void (__fastcall **)(__int64))(v22 + 336))(v1280);
          v1282 = **(unsigned int ***)(v22 + 1552);
          v1283 = v1282 + 4;
          v1284 = *((_BYTE *)v1282 + 12);
          v1285 = (unsigned __int64)&v1282[6 * *v1282 + 4];
          do
          {
            v1286 = 24LL;
            v1287 = (__int64 *)(v61 + 24);
            v1288 = v1283;
            do
            {
              v1289 = *(_QWORD *)v1288;
              v1288 += 2;
              v1290 = *v1287++;
              if ( v1289 != v1290 )
                goto LABEL_2119;
              v1286 = (unsigned int)(v1286 - 8);
            }
            while ( (unsigned int)v1286 >= 8 );
            if ( !(_DWORD)v1286 )
              break;
            while ( 1 )
            {
              v1281 = *(unsigned __int8 *)v1288;
              v1288 = (unsigned int *)((char *)v1288 + 1);
              v1291 = *(unsigned __int8 *)v1287;
              v1287 = (__int64 *)((char *)v1287 + 1);
              if ( v1281 != v1291 )
                break;
              v78 = (_DWORD)v1286 == 1;
              v1286 = (unsigned int)(v1286 - 1);
              if ( v78 )
                goto LABEL_2120;
            }
LABEL_2119:
            v1283 += 6;
          }
          while ( (unsigned __int64)v1283 < v1285 );
LABEL_2120:
          v22 = (unsigned __int64)v1588;
          ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1588[25].Next)(
            v1588[84].Next,
            v1281,
            v1286,
            v1287);
          __writecr8((unsigned __int8)v52);
          if ( v1284 )
          {
            v55 = 0;
            if ( (*(_DWORD *)(v22 + 2452) & 0x10) != 0 && !*(_DWORD *)(v22 + 2296) )
            {
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *(int *)v61;
              *(_QWORD *)(v22 + 2328) = 1LL;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
            }
            if ( *((_QWORD *)v61 + 3) == 1LL )
              goto LABEL_235;
          }
          if ( v1283 == (unsigned int *)v1285 )
          {
            v55 = 0;
            if ( *(_DWORD *)(v22 + 2296) )
              goto LABEL_235;
            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2320) = *(int *)v61;
            *(_QWORD *)(v22 + 2328) = v1283;
            *(_DWORD *)(v22 + 2296) = 1;
            goto LABEL_457;
          }
LABEL_234:
          v55 = 0;
          goto LABEL_235;
        }
LABEL_2128:
        if ( !*(_DWORD *)(v22 + 2084) )
        {
          if ( v86 == 12 )
          {
            if ( !*(_QWORD *)(v22 + 2432) )
            {
              *(_DWORD *)(v22 + 2084) = 0;
              goto LABEL_2171;
            }
            v1292 = *(_DWORD *)(v22 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v22 + 2452) ^ (unsigned __int8)(8 * *(_DWORD *)(v22 + 2452))) & 0x20;
            *(_DWORD *)(v22 + 2452) = v1292;
            if ( (v1292 & 4) != 0 )
            {
              v1293 = *((_QWORD *)v61 + 1) & 0xFFFFFFFFFFFFF000uLL;
              v1294 = (*((unsigned int *)v61 + 4) + (unsigned __int64)(*((_DWORD *)v61 + 2) & 0xFFF) + 4095) >> 12;
              if ( !v1294 )
                goto LABEL_2171;
              LODWORD(v52) = 1;
              do
              {
                --v1294;
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v22 + 688))(v1293)
                  && !*(_DWORD *)(v22 + 2296) )
                {
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *(int *)v61;
                  *(_QWORD *)(v22 + 2328) = v1293;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
                *(_DWORD *)(v22 + 2088) += 256;
                v1293 += 4096LL;
              }
              while ( v1294 );
LABEL_2170:
              v86 = v1798;
              goto LABEL_2171;
            }
            v1295 = (_QWORD *)*((_QWORD *)v61 + 1);
            v1296 = *((unsigned int *)v61 + 4);
            v1297 = v1295;
            *(_DWORD *)(v22 + 2088) += v1296;
            v1298 = (const char *)v1295;
            v1299 = *(_DWORD *)(v22 + 2068);
            v1300 = *(_QWORD *)(v22 + 2072);
            if ( v1295 < (_QWORD *)((char *)v1295 + v1296) )
            {
              do
              {
                _mm_prefetch(v1298, 0);
                v1298 += 64;
              }
              while ( v1298 < (const char *)v1295 + v1296 );
            }
            v1301 = *(_QWORD *)(v22 + 2072);
            v1302 = (unsigned int)v1296 >> 7;
            if ( (unsigned int)v1296 >> 7 )
            {
              do
              {
                v1303 = 8LL;
                do
                {
                  v1304 = v1301 ^ *v1297;
                  v1305 = v1297[1];
                  v1297 += 2;
                  v1301 = __ROL8__(__ROL8__(v1304, v1299) ^ v1305, v1299);
                  --v1303;
                }
                while ( v1303 );
                v1306 = __ROL8__(v1300 ^ ((char *)v1297 - (char *)v1295), 17) ^ v1300 ^ ((char *)v1297 - (char *)v1295);
                v1742 = (v1306 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1299 = ((unsigned __int8)(v1742 ^ v1306) ^ (unsigned __int8)v1299) & 0x3F;
                if ( !v1299 )
                  LOBYTE(v1299) = 1;
                --v1302;
              }
              while ( v1302 );
              v22 = (unsigned __int64)v1588;
            }
            v1307 = v1296 & 0x7F;
            LODWORD(v52) = 1;
            if ( v1307 >= 8 )
            {
              v1308 = (unsigned __int64)v1307 >> 3;
              do
              {
                v1301 = __ROL8__(*v1297++ ^ v1301, v1299);
                v1307 -= 8;
                --v1308;
              }
              while ( v1308 );
            }
            if ( v1307 )
            {
              do
              {
                v1309 = *(unsigned __int8 *)v1297;
                v1297 = (_QWORD *)((char *)v1297 + 1);
                v1301 = __ROL8__(v1309 ^ v1301, v1299);
                --v1307;
              }
              while ( v1307 );
              v22 = (unsigned __int64)v1588;
            }
            for ( i20 = v1301; ; LODWORD(v1301) = i20 ^ v1301 )
            {
              i20 >>= 31;
              if ( !i20 )
                break;
            }
            v1311 = *((_DWORD *)v61 + 5);
            v1312 = v1301 & 0x7FFFFFFF;
            if ( v1312 == v1311 )
              goto LABEL_2170;
            v1313 = *((unsigned int *)v61 + 4);
            v1314 = *((_QWORD *)v61 + 1);
            if ( *((_DWORD *)v61 + 4) && (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
            {
              v1315 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1316 = v1314 & 0xFFFFFFFFFFFFF000uLL;
              v1317 = (v1314 + v1313 - 1) | 0xFFF;
              v1318 = (v1314 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v52 = v1315;
                while ( 1 )
                {
                  v1319 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v1316, 0LL);
                  if ( v1319 != -1073741267 )
                    break;
                  if ( v1315 > 1u )
                    goto LABEL_2167;
                  v52 = v1315;
                  __writecr8(v1315);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1319 < 0 )
                  break;
LABEL_2167:
                v1316 += 4096LL;
                v1318 += 4096LL;
                if ( v1318 == v1317 )
                  goto LABEL_2168;
              }
              __writecr8(v52);
              v61 = v1587;
              v55 = 0;
              v1311 = *((_DWORD *)v1587 + 5);
            }
            v1341 = *(_DWORD *)(v22 + 2296);
            if ( !v1341 )
            {
              v1342 = v1312;
              v1343 = v1311;
              goto LABEL_2194;
            }
          }
          else
          {
            v1345 = (_QWORD *)*((_QWORD *)v61 + 1);
            v1346 = *((unsigned int *)v61 + 4);
            v1347 = v1345;
            *(_DWORD *)(v22 + 2088) += v1346;
            v1348 = (const char *)v1345;
            v1349 = *(_DWORD *)(v22 + 2068);
            v1350 = *(_QWORD *)(v22 + 2072);
            if ( v1345 < (_QWORD *)((char *)v1345 + v1346) )
            {
              do
              {
                _mm_prefetch(v1348, 0);
                v1348 += 64;
              }
              while ( v1348 < (const char *)v1345 + v1346 );
            }
            v1351 = *(_QWORD *)(v22 + 2072);
            v1352 = (unsigned int)v1346 >> 7;
            if ( (unsigned int)v1346 >> 7 )
            {
              do
              {
                v1353 = 8LL;
                do
                {
                  v1354 = v1351 ^ *v1347;
                  v1355 = v1347[1];
                  v1347 += 2;
                  v1351 = __ROL8__(__ROL8__(v1354, v1349) ^ v1355, v1349);
                  --v1353;
                }
                while ( v1353 );
                v1356 = __ROL8__(v1350 ^ ((char *)v1347 - (char *)v1345), 17) ^ v1350 ^ ((char *)v1347 - (char *)v1345);
                v1743 = (v1356 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1349 = ((unsigned __int8)(v1743 ^ v1356) ^ (unsigned __int8)v1349) & 0x3F;
                if ( !v1349 )
                  LOBYTE(v1349) = 1;
                --v1352;
              }
              while ( v1352 );
              v22 = (unsigned __int64)v1588;
            }
            v1357 = v1346 & 0x7F;
            LODWORD(v52) = 1;
            if ( v1357 >= 8 )
            {
              v1358 = (unsigned __int64)v1357 >> 3;
              do
              {
                v1351 = __ROL8__(*v1347++ ^ v1351, v1349);
                v1357 -= 8;
                --v1358;
              }
              while ( v1358 );
            }
            if ( v1357 )
            {
              do
              {
                v1359 = *(unsigned __int8 *)v1347;
                v1347 = (_QWORD *)((char *)v1347 + 1);
                v1351 = __ROL8__(v1359 ^ v1351, v1349);
                --v1357;
              }
              while ( v1357 );
              v22 = (unsigned __int64)v1588;
            }
            for ( i21 = v1351; ; LODWORD(v1351) = i21 ^ v1351 )
            {
              i21 >>= 31;
              if ( !i21 )
                break;
            }
            v1361 = v1351 & 0x7FFFFFFF;
            if ( v1361 == *((_DWORD *)v61 + 5) )
            {
LABEL_2169:
              v55 = 0;
              goto LABEL_2170;
            }
            if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
              v55 = 1;
            v1362 = *((unsigned int *)v61 + 4);
            v1363 = *((_QWORD *)v61 + 1);
            if ( *((_DWORD *)v61 + 4) )
            {
              v1364 = 64LL;
              if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
              {
                v1365 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v1366 = v1363 & 0xFFFFFFFFFFFFF000uLL;
                v1603 = (v1363 + v1362 - 1) | 0xFFF;
                v1367 = (v1363 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v52 = v1365;
                  while ( 1 )
                  {
                    v1368 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                              v1366,
                              0LL,
                              v1364,
                              v1347);
                    if ( v1368 != -1073741267 )
                      break;
                    if ( v55 )
                      goto LABEL_2230;
                    if ( v1365 > 1u )
                      goto LABEL_2228;
                    v52 = v1365;
                    __writecr8(v1365);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v1368 < 0 )
                    break;
LABEL_2228:
                  v1366 += 4096LL;
                  v1367 += 4096LL;
                  if ( v1367 == v1603 )
                  {
LABEL_2168:
                    __writecr8(v52);
                    v61 = v1587;
                    goto LABEL_2169;
                  }
                }
LABEL_2230:
                __writecr8(v52);
                v61 = v1587;
              }
            }
            v1341 = *(_DWORD *)(v22 + 2296);
            v55 = 0;
            v1342 = *((unsigned int *)v61 + 5);
            if ( !v1341 )
            {
              v1343 = v1361;
LABEL_2194:
              *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1343 ^ v1342;
              v1341 = *(_DWORD *)(v22 + 2296);
            }
          }
          v1344 = *((_QWORD *)v61 + 1);
          if ( !v1341 )
          {
            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2320) = *(int *)v61;
            *(_QWORD *)(v22 + 2328) = v1344;
            *(_DWORD *)(v22 + 2296) = 1;
            __b8(v22, 0LL);
          }
          goto LABEL_2170;
        }
LABEL_2171:
        v1320 = *(unsigned int *)(v22 + 2084);
        v1321 = *((unsigned int *)v61 + 4);
        v1591 = *((_QWORD *)v61 + 1);
        v1322 = (unsigned int *)(v1591 + 12 * v1320);
        v1600 = (char *)v1322;
        v1323 = (int *)&v61[4 * v1320 + 48];
        v1589 = (__int64)v1323;
        v1324 = (unsigned int *)(v1591 + 12 * (v1321 / 0xC));
        v1594 = (unsigned __int64)v1324;
        if ( v1322 == v1324 )
          goto LABEL_2287;
        while ( 2 )
        {
          if ( *v1323 < 0 )
            goto LABEL_2278;
          v1325 = *((_QWORD *)v61 + 4) + *v1322;
          LODWORD(v52) = v1322[1] - *v1322;
          v1603 = v1325;
          if ( v86 == 43 )
          {
            v1369 = pg_unknown21(v22, v1325, (unsigned int)v52);
            *(_DWORD *)(v22 + 2088) += 8 * v52;
            if ( (*(_DWORD *)(v22 + 2452) & 0x800) != 0 )
            {
              v1370 = (_BYTE *)(v1325 - 6);
              v1371 = (char *)(v1325 - 6 + 5);
              v1372 = *v1371;
              if ( *(_BYTE *)(v1325 - 6) != 76
                || v1370[1] != 0x87
                || v1370[2]
                || v1370[3] != 0x98
                || v1370[4] != 0xC3
                || v1372 != -112 && v1372 != -15 )
              {
                goto LABEL_2583;
              }
              v1373 = *(volatile signed __int32 **)(v22 + 1248);
              while ( 1 )
              {
                _disable();
                if ( !_interlockedbittestandset(v1373, (*(_DWORD *)(v22 + 2448) >> 10) & 0x1F) )
                  break;
                _enable();
                _mm_pause();
              }
              v1374 = *(struct _KPRCB **)(v22 + 2272);
              v1375 = 38LL;
              v1376 = 304;
              v1377 = v1374;
              do
              {
                *(_QWORD *)&v1377->MxCsr = 0LL;
                v1376 -= 8;
                v1377 = (struct _KPRCB *)((char *)v1377 + 8);
                --v1375;
              }
              while ( v1375 );
              if ( v1376 )
              {
                v1375 = 0xFFFFFFFFLL;
                do
                {
                  LOBYTE(v1377->MxCsr) = 0;
                  v1377 = (struct _KPRCB *)((char *)v1377 + 1);
                  --v1376;
                }
                while ( v1376 );
              }
              *(_OWORD *)&v1374->NextThread = *(_OWORD *)(v22 + 2120);
              *(_OWORD *)&v1374->NestingLevel = *(_OWORD *)(v22 + 2136);
              *(_OWORD *)&v1374->ProcessorState.SpecialRegisters.KernelDr0 = *(_OWORD *)(v22 + 2152);
              v1673 = 303;
              v1674 = v1374;
              LOWORD(v1374->NextThread) = v22 + 2188;
              v1378 = (v22 + 2188) >> 16;
              v1745 = v22 + 2188;
              HIWORD(v1374->NextThread) = v1378;
              LODWORD(v1374->IdleThread) = (v22 + 2188) >> 32;
              __sidt(v1704);
              __lidt(&v1673);
              *v1371 = -15;
              if ( *v1371 != -15 )
                goto LABEL_2258;
              if ( (*(_DWORD *)(v22 + 2452) & 0x20000) == 0 )
              {
                v1374 = KeGetCurrentPrcb();
                **(_QWORD **)(v22 + 1216) = v22 - 0x5C5FC0A76E374B18LL;
                v1378 = v1325;
                **(_QWORD **)(v22 + 1224) = v1374;
                **(_QWORD **)(v22 + 1232) = v1325;
                **(_QWORD **)(v22 + 1240) = 275LL;
              }
              ((void (__fastcall *)(unsigned __int64, struct _KPRCB *, __int64, __int64))(v1325 - 6 + 5))(
                v1378,
                v1374,
                v1375,
                1LL);
              if ( (*(_DWORD *)(v22 + 2452) & 0x20000) == 0 )
              {
                **(_QWORD **)(v22 + 1216) = 0xA3A03F5891C8B4E8uLL;
                **(_QWORD **)(v22 + 1224) = 0LL;
                **(_QWORD **)(v22 + 1232) = 0LL;
                **(_QWORD **)(v22 + 1240) = 0LL;
              }
              if ( *v1371 == -15 )
              {
                *v1371 = -112;
                v1379 = *v1371 == -112;
              }
              else
              {
LABEL_2258:
                v1379 = 0;
              }
              __lidt(v1704);
              _InterlockedAnd(
                *(volatile signed __int32 **)(v22 + 1248),
                ~(1 << ((*(_DWORD *)(v22 + 2448) >> 10) & 0x1F)));
              _enable();
              if ( !v1379 )
              {
LABEL_2583:
                if ( !*(_DWORD *)(v22 + 2296) )
                {
                  v1380 = (int *)v1587;
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = (char *)v1380 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *v1380;
                  *(_QWORD *)(v22 + 2328) = v1370;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                }
              }
              v1324 = (unsigned int *)v1594;
              v1322 = (unsigned int *)v1600;
            }
          }
          else
          {
            *(_DWORD *)(v22 + 2088) += v52;
            v1326 = (_QWORD *)v1325;
            v1327 = *(_DWORD *)(v22 + 2068);
            v1328 = (const char *)v1325;
            v1329 = *(_QWORD *)(v22 + 2072);
            v1330 = v1325 + (unsigned int)v52;
            if ( v1325 < v1330 )
            {
              do
              {
                _mm_prefetch(v1328, 0);
                v1328 += 64;
              }
              while ( (unsigned __int64)v1328 < v1330 );
            }
            v1331 = *(_QWORD *)(v22 + 2072);
            v1332 = (unsigned int)v52 >> 7;
            if ( (unsigned int)v52 >> 7 )
            {
              do
              {
                v1333 = 8LL;
                do
                {
                  v1334 = v1331 ^ *v1326;
                  v1335 = v1326[1];
                  v1326 += 2;
                  v1331 = __ROL8__(__ROL8__(v1334, v1327) ^ v1335, v1327);
                  --v1333;
                }
                while ( v1333 );
                v1336 = __ROL8__(v1329 ^ ((unsigned __int64)v1326 - v1325), 17) ^ v1329 ^ ((unsigned __int64)v1326
                                                                                         - v1325);
                v1744 = (v1336 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1327 = ((unsigned __int8)(v1744 ^ v1336) ^ (unsigned __int8)v1327) & 0x3F;
                if ( !v1327 )
                  LOBYTE(v1327) = 1;
                --v1332;
              }
              while ( v1332 );
              v22 = (unsigned __int64)v1588;
              v1323 = (int *)v1589;
            }
            v1337 = v52 & 0x7F;
            if ( v1337 >= 8 )
            {
              v1338 = (v52 & 0x7F) >> 3;
              do
              {
                v1331 = __ROL8__(*v1326++ ^ v1331, v1327);
                v1337 -= 8;
                --v1338;
              }
              while ( v1338 );
              v1324 = (unsigned int *)v1594;
            }
            if ( v1337 )
            {
              do
              {
                v1339 = *(unsigned __int8 *)v1326;
                v1326 = (_QWORD *)((char *)v1326 + 1);
                v1331 = __ROL8__(v1339 ^ v1331, v1327);
                --v1337;
              }
              while ( v1337 );
              v22 = (unsigned __int64)v1588;
              v1323 = (int *)v1589;
            }
            for ( i22 = v1331; ; LODWORD(v1331) = i22 ^ v1331 )
            {
              i22 >>= 31;
              if ( !i22 )
                break;
            }
            v1369 = v1331 & 0x7FFFFFFF;
          }
          v1381 = *v1323;
          if ( v1369 != (*v1323 & 0x7FFFFFFF) )
          {
            v1382 = (unsigned int)v52;
            if ( (_DWORD)v52 && (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
            {
              LODWORD(v52) = KeGetCurrentIrql();
              __writecr8(2uLL);
              v1383 = v1325 & 0xFFFFFFFFFFFFF000uLL;
              v1384 = (v1382 + v1325 - 1) | 0xFFF;
              v1385 = (v1325 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v1386 = (unsigned __int8)v52;
                while ( 1 )
                {
                  v1387 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v1383, 0LL);
                  if ( v1387 != -1073741267 )
                    break;
                  if ( (unsigned __int8)v52 > 1u )
                    goto LABEL_2273;
                  v1386 = (unsigned __int8)v52;
                  __writecr8((unsigned __int8)v52);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v1387 < 0 )
                  break;
LABEL_2273:
                v1383 += 4096LL;
                v1385 += 4096LL;
                if ( v1385 == v1384 )
                {
                  __writecr8(v1386);
                  v1323 = (int *)v1589;
                  goto LABEL_2275;
                }
              }
              __writecr8(v1386);
              v1323 = (int *)v1589;
              v1325 = v1603;
              v1381 = *(_DWORD *)v1589;
            }
            v1389 = v1381;
            if ( !*(_DWORD *)(v22 + 2296) )
            {
              LODWORD(v1389) = v1381 & 0x7FFFFFFF;
              *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v1389 ^ v1369;
              if ( !*(_DWORD *)(v22 + 2296) )
              {
                v61 = v1587;
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v61;
                *(_QWORD *)(v22 + 2328) = v1325;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
                v1322 = (unsigned int *)v1600;
                v1324 = (unsigned int *)v1594;
LABEL_2277:
                v55 = 0;
LABEL_2278:
                ++v1323;
                v1322 += 3;
                v1589 = (__int64)v1323;
                v1600 = (char *)v1322;
                v1388 = v1322 == v1324;
                if ( v1322 >= v1324 )
                  goto LABEL_2281;
                v86 = v1798;
                if ( *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
                {
                  v1388 = v1322 == v1324;
LABEL_2281:
                  if ( !v1388 )
                  {
                    *(_DWORD *)(v22 + 2084) = ((__int64)v1322 - v1591) / 12;
                    goto LABEL_235;
                  }
LABEL_2287:
                  v1390 = *(_QWORD *)(v22 + 1344);
                  LODWORD(v52) = KeGetCurrentIrql();
                  __writecr8(0xFuLL);
                  (*(void (__fastcall **)(__int64))(v22 + 336))(v1390);
                  v1392 = **(unsigned int ***)(v22 + 1552);
                  v1393 = v1392 + 4;
                  v1394 = *((_BYTE *)v1392 + 12);
                  v1395 = (unsigned __int64)&v1392[6 * *v1392 + 4];
                  do
                  {
                    v1396 = 24LL;
                    v1397 = (__int64 *)(v61 + 24);
                    v1398 = v1393;
                    do
                    {
                      v1399 = *(_QWORD *)v1398;
                      v1398 += 2;
                      v1400 = *v1397++;
                      if ( v1399 != v1400 )
                        goto LABEL_2295;
                      v1396 = (unsigned int)(v1396 - 8);
                    }
                    while ( (unsigned int)v1396 >= 8 );
                    if ( !(_DWORD)v1396 )
                      break;
                    while ( 1 )
                    {
                      v1391 = *(unsigned __int8 *)v1398;
                      v1398 = (unsigned int *)((char *)v1398 + 1);
                      v1401 = *(unsigned __int8 *)v1397;
                      v1397 = (__int64 *)((char *)v1397 + 1);
                      if ( v1391 != v1401 )
                        break;
                      v78 = (_DWORD)v1396 == 1;
                      v1396 = (unsigned int)(v1396 - 1);
                      if ( v78 )
                        goto LABEL_2296;
                    }
LABEL_2295:
                    v1393 += 6;
                  }
                  while ( (unsigned __int64)v1393 < v1395 );
LABEL_2296:
                  v22 = (unsigned __int64)v1588;
                  ((void (__fastcall *)(_SLIST_ENTRY *, __int64, __int64, __int64 *))v1588[25].Next)(
                    v1588[84].Next,
                    v1391,
                    v1396,
                    v1397);
                  __writecr8((unsigned __int8)v52);
                  if ( !v1394 )
                    goto LABEL_2301;
                  v55 = 0;
                  if ( (*(_DWORD *)(v22 + 2452) & 0x10) != 0 && !*(_DWORD *)(v22 + 2296) )
                  {
                    *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(v22 + 2320) = *(int *)v61;
                    *(_QWORD *)(v22 + 2328) = 1LL;
                    *(_DWORD *)(v22 + 2296) = 1;
                    __b8(v22, 0LL);
                  }
                  if ( *((_QWORD *)v61 + 3) != 1LL )
                  {
LABEL_2301:
                    v55 = 0;
                    if ( v1393 == (unsigned int *)v1395 && !*(_DWORD *)(v22 + 2296) )
                    {
                      *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v22 + 2320) = *(int *)v61;
                      *(_QWORD *)(v22 + 2328) = v1393;
                      *(_DWORD *)(v22 + 2296) = 1;
                      __b8(v22, 0LL);
                    }
                  }
LABEL_1733:
                  *(_DWORD *)(v22 + 2084) = 0;
                  goto LABEL_235;
                }
                continue;
              }
            }
LABEL_2275:
            v1324 = (unsigned int *)v1594;
            v1322 = (unsigned int *)v1600;
          }
          break;
        }
        v61 = v1587;
        goto LABEL_2277;
      case 0:
        v228 = (_QWORD *)*((_QWORD *)v61 + 1);
        v229 = *((unsigned int *)v61 + 4);
        v230 = v228;
        *(_DWORD *)(v22 + 2088) += v229;
        v231 = (const char *)v228;
        v232 = *(_DWORD *)(v22 + 2068);
        v52 = *(_QWORD *)(v22 + 2072);
        if ( v228 < (_QWORD *)((char *)v228 + v229) )
        {
          do
          {
            _mm_prefetch(v231, 0);
            v231 += 64;
          }
          while ( v231 < (const char *)v228 + v229 );
        }
        v233 = *(_QWORD *)(v22 + 2072);
        v234 = (unsigned int)v229 >> 7;
        if ( (unsigned int)v229 >> 7 )
        {
          do
          {
            v235 = 8LL;
            do
            {
              v236 = v230[1] ^ __ROL8__(*v230 ^ v233, v232);
              v230 += 2;
              v233 = __ROL8__(v236, v232);
              --v235;
            }
            while ( v235 );
            v237 = (__ROL8__(v52 ^ ((char *)v230 - (char *)v228), 17) ^ v52 ^ ((char *)v230 - (char *)v228))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1761 = *((_QWORD *)&v237 + 1);
            v232 = ((unsigned __int8)(v237 ^ BYTE8(v237)) ^ (unsigned __int8)v232) & 0x3F;
            if ( !v232 )
              LOBYTE(v232) = 1;
            --v234;
          }
          while ( v234 );
          v22 = (unsigned __int64)v1588;
        }
        v238 = v229 & 0x7F;
        if ( v238 >= 8 )
        {
          v239 = (unsigned __int64)v238 >> 3;
          do
          {
            v233 = __ROL8__(*v230++ ^ v233, v232);
            v238 -= 8;
            --v239;
          }
          while ( v239 );
        }
        for ( ; v238; --v238 )
        {
          v240 = *(unsigned __int8 *)v230;
          v230 = (_QWORD *)((char *)v230 + 1);
          v233 = __ROL8__(v240 ^ v233, v232);
        }
        for ( i23 = v233; ; LODWORD(v233) = i23 ^ v233 )
        {
          i23 >>= 31;
          if ( !i23 )
            break;
        }
        v242 = v233 & 0x7FFFFFFF;
        if ( v242 == *((_DWORD *)v61 + 5) )
          goto LABEL_234;
        if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
          v55 = 1;
        v243 = *((unsigned int *)v61 + 4);
        v244 = *((_QWORD *)v61 + 1);
        if ( *((_DWORD *)v61 + 4) )
        {
          v245 = 64LL;
          if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
          {
            v246 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v247 = v244 & 0xFFFFFFFFFFFFF000uLL;
            v1803 = (v244 + v243 - 1) | 0xFFF;
            v248 = (v244 & 0xFFFFFFFFFFFFF000uLL) - 1;
            while ( 1 )
            {
              v52 = v246;
              while ( 1 )
              {
                v249 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                         v247,
                         0LL,
                         v245,
                         v230);
                if ( v249 != -1073741267 )
                  break;
                if ( v55 )
                  goto LABEL_449;
                if ( v246 > 1u )
                  goto LABEL_447;
                v52 = v246;
                __writecr8(v246);
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              if ( v249 < 0 )
                break;
LABEL_447:
              v247 += 4096LL;
              v248 += 4096LL;
              if ( v248 == v1803 )
                goto LABEL_233;
            }
LABEL_449:
            __writecr8(v52);
            v61 = v1587;
          }
        }
        v115 = *(_DWORD *)(v22 + 2296);
        v55 = 0;
        if ( !v115 )
        {
          v116 = *((unsigned int *)v61 + 5) ^ (unsigned __int64)v242;
LABEL_452:
          *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v116;
          v115 = *(_DWORD *)(v22 + 2296);
        }
LABEL_453:
        v250 = *((_QWORD *)v61 + 1);
LABEL_454:
        if ( v115 )
          goto LABEL_235;
        *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(v22 + 2320) = *(int *)v61;
        *(_QWORD *)(v22 + 2328) = v250;
        goto LABEL_456;
      case 1:
        goto LABEL_2128;
      case 4:
        if ( (*(_DWORD *)(v22 + 2096) & 1) != 0 )
          goto LABEL_235;
        v211 = *(void (**)(void))(v22 + 376);
        v212 = 0;
        v213 = *(_QWORD *)(v22 + 1352);
        LODWORD(v1592) = 0;
        v211();
        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 || (v214 = *(_DWORD *)(v22 + 2384), v214 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 296))(*(_QWORD *)(v22 + 2560), 0LL);
          v215 = 0x80;
        }
        else
        {
          v215 = 1 << v214;
        }
        v1802 = v215;
        (*(void (__fastcall **)(__int64, _QWORD))(v22 + 312))(v213, 0LL);
        v216 = *(_QWORD ***)(v22 + 1312);
        v217 = *v216;
        if ( *v216 != v216 )
        {
          do
          {
            v218 = (unsigned __int64)v217 - *(_QWORD *)(v22 + 1744);
            if ( v215 != 0x80
              && (v215 & *(_BYTE *)(v218 + *(_QWORD *)(v22 + 1720))) != 0
              && (*(_DWORD *)(v218 + *(_QWORD *)(v22 + 1728)) & *(_DWORD *)(v22 + 1752)) != 0
              && !*(_DWORD *)(v22 + 2296) )
            {
              v219 = (int *)v1587;
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = (char *)v219 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *v219;
              *(_QWORD *)(v22 + 2328) = v218 | 1;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
            }
            _InterlockedOr8((volatile signed __int8 *)(v218 + *(_QWORD *)(v22 + 1720)), v215);
            v217 = (_QWORD *)*v217;
            ++v212;
          }
          while ( v217 != v216 );
          LODWORD(v1592) = v212;
        }
        v220 = *(_QWORD *)(v22 + 1280);
        v1589 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        (*(void (__fastcall **)(__int64, _BYTE *))(v22 + 328))(v220, v1792);
        v221 = *(unsigned __int64 **)(v22 + 1272);
        v52 = *v221;
        if ( (unsigned __int64 *)*v221 != v221 )
        {
          v222 = v215;
          v223 = v215;
          v224 = (int *)v1587;
          v225 = ~v222;
          do
          {
            v226 = *(_QWORD *)(v22 + 1720);
            v227 = v52 - *(_QWORD *)(v22 + 1712);
            if ( (*(char *)(v227 + v226) & v223) == 0 && !*(_DWORD *)(v22 + 2296) )
            {
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = (char *)v224 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *v224;
              *(_QWORD *)(v22 + 2328) = v227;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
              v226 = *(_QWORD *)(v22 + 1720);
            }
            _InterlockedAnd8((volatile signed __int8 *)(v227 + v226), v225);
            v52 = *(_QWORD *)v52;
          }
          while ( (unsigned __int64 *)v52 != v221 );
          v215 = v1802;
          v212 = v1592;
        }
        (*(void (__fastcall **)(_BYTE *))(v22 + 392))(v1792);
        __writecr8((unsigned __int8)v1589);
        if ( v215 == 0x80 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 304))(*(_QWORD *)(v22 + 2560), 0LL);
        (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 320))(*(_QWORD *)(v22 + 1352), 0LL);
        (*(void (**)(void))(v22 + 384))();
        *(_DWORD *)(v22 + 2088) += v212 << 8;
        goto LABEL_234;
      case 5:
        v187 = *(_DWORD *)(v22 + 2096);
        if ( (v187 & 1) == 0 )
          goto LABEL_235;
        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 )
        {
          v188 = __rdtsc();
          v189 = (__ROR8__(v188, 3) ^ v188) * (unsigned __int128)0x7010008004002001uLL;
          v1760 = *((_QWORD *)&v189 + 1);
          v1801 = ((unsigned __int64)v189 ^ *((_QWORD *)&v189 + 1)) == 3
                                                                     * (((unsigned __int64)v189 ^ *((_QWORD *)&v189 + 1))
                                                                      / 3);
        }
        else
        {
          v1801 = (v187 & 3) == 3;
        }
        v190 = *(void (**)(void))(v22 + 376);
        v191 = 0;
        v192 = *(_QWORD *)(v22 + 1352);
        LODWORD(v1592) = 0;
        v190();
        if ( (*(_DWORD *)(v22 + 2448) & 0x40000000) != 0 || (v193 = *(_DWORD *)(v22 + 2384), v193 >= 7) )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(v22 + 296))(*(_QWORD *)(v22 + 2560), 0LL);
          v194 = 0x80;
        }
        else
        {
          v194 = 1 << v193;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(v22 + 312))(v192, 0LL);
        v195 = *(volatile signed __int8 ***)(v22 + 1312);
        v196 = *v195;
        if ( *v195 != (volatile signed __int8 *)v195 )
        {
          do
          {
            _InterlockedOr8(&v196[*(_QWORD *)(v22 + 1720) - *(_QWORD *)(v22 + 1744)], v194);
            v196 = *(volatile signed __int8 **)v196;
            ++v191;
          }
          while ( v196 != (volatile signed __int8 *)v195 );
          LODWORD(v1592) = v191;
        }
        v52 = 4LL;
        v197 = **(_QWORD **)(v22 + 1360);
        v198 = *(unsigned int *)(*(_QWORD *)(v22 + 1840) + v197);
        while ( 1 )
        {
          v199 = (__int64 *)(*(__int64 (__fastcall **)(__int64, unsigned __int64))(v22 + 264))(v197, v52);
          v201 = 0LL;
          v202 = v199;
          if ( v199 )
            break;
LABEL_390:
          v52 += 4LL;
          if ( v52 >= v198 )
          {
            if ( v194 == 0x80 )
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v22 + 304))(
                *(_QWORD *)(v22 + 2560),
                0LL,
                v200,
                v201);
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v22 + 320))(
              *(_QWORD *)(v22 + 1352),
              0LL,
              v200,
              v201);
            (*(void (**)(void))(v22 + 384))();
            *(_DWORD *)(v22 + 2088) += ((unsigned int)(v198 >> 2) + (_DWORD)v1592) << 8;
            goto LABEL_234;
          }
        }
        v203 = (_BYTE *)((*v199 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
        v204 = *v203 & 0x7F;
        if ( v204 == 3 )
        {
          v200 = *(_QWORD *)(v22 + 1720);
          v205 = v200;
          if ( (v194 & v203[v200]) == 0
            && (*(_DWORD *)&v203[*(_QWORD *)(v22 + 1728)] & *(_DWORD *)(v22 + 1752)) != 0
            && !*(_DWORD *)(v22 + 2296) )
          {
            v206 = (int *)v1587;
            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2312) = (char *)v206 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2320) = *v206;
            *(_QWORD *)(v22 + 2328) = v203;
            *(_DWORD *)(v22 + 2296) = 1;
            __b8(v22, 0LL);
            v205 = *(_QWORD *)(v22 + 1720);
          }
          _InterlockedAnd8(&v203[v205], ~v194);
          goto LABEL_389;
        }
        if ( v204 == 6 )
        {
          if ( v1801 )
          {
            v207 = *(_QWORD *)(v22 + 1664);
            v208 = *(_QWORD *)&v203[v207 + 32];
            if ( (v208 == *(_QWORD *)(v22 + 800) || v208 == *(_QWORD *)(v22 + 808))
              && *(_QWORD *)&v203[v207 + 48] == *(_QWORD *)(v22 + 816) )
            {
              v209 = *(_QWORD *)&v203[v207 + 40] == *(_QWORD *)(v22 + 824);
              goto LABEL_386;
            }
            goto LABEL_387;
          }
        }
        else
        {
          v209 = v204 == 0;
LABEL_386:
          if ( !v209 )
          {
LABEL_387:
            if ( !*(_DWORD *)(v22 + 2296) )
            {
              v210 = (int *)v1587;
              *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(v22 + 2312) = (char *)v210 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(v22 + 2320) = *v210;
              *(_QWORD *)(v22 + 2328) = v203;
              *(_DWORD *)(v22 + 2296) = 1;
              __b8(v22, 0LL);
            }
          }
        }
LABEL_389:
        (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v22 + 288))(v197, v202, v200, v201);
        goto LABEL_390;
      case 7:
        (*(void (__fastcall **)(_BYTE *, _QWORD))(v22 + 416))(v1765, *((unsigned int *)v61 + 7));
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(v22 + 464))(v1765, v1766);
        for ( i24 = 0; i24 < *((_DWORD *)v61 + 6); ++i24 )
        {
          v180 = *(unsigned int *)&v61[24 * i24 + 64];
          if ( (*(_BYTE *)(v22 + 2171) & 2) != 0
            && (_DWORD)v180 == -1073741694
            && KeGetPcr()->Prcb.Number == *(_DWORD *)(v22 + 2288) )
          {
            v181 = *(_QWORD *)(v22 + 2280);
          }
          else
          {
            v181 = __readmsr(v180);
          }
          v182 = *(_QWORD *)&v61[24 * i24 + 48];
          v183 = *(_QWORD *)&v61[24 * i24 + 56];
          v184 = v182 & v181;
          if ( v184 == v183 )
          {
            if ( (*(_DWORD *)(v22 + 2452) & 0x200) != 0 && v182 == -1 )
              __writemsr(v180, v184);
          }
          else
          {
            v185 = v180 | ((unsigned __int64)*((unsigned int *)v61 + 7) << 32);
            if ( !*(_DWORD *)(v22 + 2296) )
            {
              *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v184 ^ v183;
              if ( !*(_DWORD *)(v22 + 2296) )
              {
                *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(v22 + 2320) = *(int *)v61;
                *(_QWORD *)(v22 + 2328) = v185;
                *(_DWORD *)(v22 + 2296) = 1;
                __b8(v22, 0LL);
              }
            }
          }
        }
        (*(void (__fastcall **)(_BYTE *))(v22 + 408))(v1766);
        v186 = *((_DWORD *)v61 + 6) << 15;
        goto LABEL_2411;
      case 8:
        v146 = *((_QWORD *)v61 + 3);
        v147 = *((_WORD *)v61 + 17);
        if ( *(_WORD *)(v146 + *(_QWORD *)(v22 + 1776) + *(_QWORD *)(v22 + 1824)) != v147 && !*(_DWORD *)(v22 + 2296) )
        {
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v146;
          *(_DWORD *)(v22 + 2296) = 1;
          __b8(v22, 0LL);
          v147 = *((_WORD *)v61 + 17);
        }
        if ( (v147 & *(_WORD *)(v22 + 1832)) == 0
          && *(_QWORD *)(v146 + *(_QWORD *)(v22 + 1784)) != v146 + *(_QWORD *)(v22 + 1784)
          && !*(_DWORD *)(v22 + 2296) )
        {
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v146;
          *(_DWORD *)(v22 + 2296) = 1;
          __b8(v22, 0LL);
        }
        v148 = (_QWORD *)*((_QWORD *)v61 + 1);
        v149 = *((unsigned int *)v61 + 4);
        v150 = v148;
        *(_DWORD *)(v22 + 2088) += v149;
        v151 = (const char *)v148;
        v152 = *(_DWORD *)(v22 + 2068);
        v153 = *(_QWORD *)(v22 + 2072);
        if ( v148 < (_QWORD *)((char *)v148 + v149) )
        {
          do
          {
            _mm_prefetch(v151, 0);
            v151 += 64;
          }
          while ( v151 < (const char *)v148 + v149 );
        }
        v154 = *(_QWORD *)(v22 + 2072);
        v155 = (unsigned int)v149 >> 7;
        if ( (unsigned int)v149 >> 7 )
        {
          do
          {
            v156 = 8LL;
            do
            {
              v157 = v150[1] ^ __ROL8__(*v150 ^ v154, v152);
              v150 += 2;
              v154 = __ROL8__(v157, v152);
              --v156;
            }
            while ( v156 );
            v158 = (__ROL8__(v153 ^ ((char *)v150 - (char *)v148), 17) ^ v153 ^ (unsigned __int64)((char *)v150
                                                                                                 - (char *)v148))
                 * (unsigned __int128)0x7010008004002001uLL;
            v1759 = *((_QWORD *)&v158 + 1);
            v152 = ((unsigned __int8)v158 ^ (unsigned __int8)(BYTE8(v158) ^ v152)) & 0x3F;
            if ( !v152 )
              LOBYTE(v152) = 1;
            --v155;
          }
          while ( v155 );
          v22 = (unsigned __int64)v1588;
        }
        v159 = v149 & 0x7F;
        if ( v159 >= 8 )
        {
          v160 = (unsigned __int64)v159 >> 3;
          do
          {
            v154 = __ROL8__(*v150++ ^ v154, v152);
            v159 -= 8;
            --v160;
          }
          while ( v160 );
        }
        for ( ; v159; --v159 )
        {
          v161 = *(unsigned __int8 *)v150;
          v150 = (_QWORD *)((char *)v150 + 1);
          v154 = __ROL8__(v161 ^ v154, v152);
        }
        for ( i25 = v154; ; LODWORD(v154) = i25 ^ v154 )
        {
          i25 >>= 31;
          if ( !i25 )
            break;
        }
        v163 = v154 & 0x7FFFFFFF;
        if ( v163 == *((_DWORD *)v61 + 5) )
        {
LABEL_332:
          v55 = 0;
        }
        else
        {
          if ( !*(_DWORD *)v61 && *((_DWORD *)v61 + 6) )
            v55 = 1;
          v164 = *((unsigned int *)v61 + 4);
          v165 = *((_QWORD *)v61 + 1);
          if ( *((_DWORD *)v61 + 4) )
          {
            v166 = 64LL;
            if ( (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
            {
              v167 = KeGetCurrentIrql();
              __writecr8(2uLL);
              v168 = v165 & 0xFFFFFFFFFFFFF000uLL;
              v1800 = (v165 + v164 - 1) | 0xFFF;
              v169 = (v165 & 0xFFFFFFFFFFFFF000uLL) - 1;
              while ( 1 )
              {
                v170 = v167;
                while ( 1 )
                {
                  v171 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                           v168,
                           0LL,
                           v166,
                           v150);
                  if ( v171 != -1073741267 )
                    break;
                  if ( v55 )
                    goto LABEL_340;
                  if ( v167 > 1u )
                    goto LABEL_330;
                  v170 = v167;
                  __writecr8(v167);
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                }
                if ( v171 < 0 )
                  break;
LABEL_330:
                v168 += 4096LL;
                v169 += 4096LL;
                if ( v169 == v1800 )
                {
                  __writecr8(v170);
                  v61 = v1587;
                  goto LABEL_332;
                }
              }
LABEL_340:
              __writecr8(v170);
              v61 = v1587;
            }
          }
          v177 = *(_DWORD *)(v22 + 2296);
          v55 = 0;
          if ( !v177 )
          {
            *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v163 ^ (unsigned __int64)*((unsigned int *)v61 + 5);
            v177 = *(_DWORD *)(v22 + 2296);
          }
          v178 = *((_QWORD *)v61 + 1);
          if ( !v177 )
          {
            LODWORD(v52) = -465226731;
            *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(v22 + 2320) = *(int *)v61;
            *(_QWORD *)(v22 + 2328) = v178;
            *(_DWORD *)(v22 + 2296) = 1;
            __b8(v22, 0LL);
            goto LABEL_334;
          }
        }
        LODWORD(v52) = -465226731;
LABEL_334:
        v1685 = v61 + 48;
        v172 = *((_WORD *)v61 + 16);
        v1586 = &v1665;
        v1684[0] = v172;
        v1684[1] = v172;
        v173 = *(_QWORD *)(v22 + 1288);
        v174 = *(int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))(v22 + 488);
        LOBYTE(v1585) = 0;
        if ( v174(v1684, 0LL, 0LL, 0LL, v173, v1585, 0LL, &v1665) < 0 )
          goto LABEL_235;
        v175 = v1665;
        if ( v1665 != *((_QWORD *)v61 + 3) && !*(_DWORD *)(v22 + 2296) )
        {
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v175;
          *(_DWORD *)(v22 + 2296) = 1;
          __b8(v22, 0LL);
        }
LABEL_338:
        v176 = *(void (**)(void))(v22 + 480);
        goto LABEL_339;
      case 10:
        if ( *((_DWORD *)v61 + 6) )
        {
          if ( !*(_QWORD *)(v22 + 2432) )
            goto LABEL_267;
          v117 = *(_DWORD *)(v22 + 2452);
          if ( (v117 & 4) != 0 )
            goto LABEL_267;
          if ( *(_DWORD *)(v22 + 2084) )
          {
            if ( (v117 & 0x20) != 0 )
              goto LABEL_267;
          }
          else
          {
            *(_DWORD *)(v22 + 2452) = v117 ^ ((unsigned __int8)v117 ^ (unsigned __int8)(8 * v117)) & 0x20;
          }
        }
        v118 = (unsigned __int64)&v61[16 * *(unsigned int *)(v22 + 2084) + 48];
        v119 = (unsigned __int64)&v61[16 * *((unsigned int *)v61 + 7) + 48];
        v1799 = v119;
        while ( 1 )
        {
          if ( *(int *)v118 >= 0 )
          {
            v120 = *(_QWORD *)(v118 + 8);
            v121 = *(unsigned int *)(v118 + 4);
            v122 = (_QWORD *)v120;
            *(_DWORD *)(v22 + 2088) += v121;
            v123 = (const char *)v120;
            v124 = *(_DWORD *)(v22 + 2068);
            v125 = (unsigned int)v121;
            v52 = *(_QWORD *)(v22 + 2072);
            v1591 = v120;
            if ( v120 < v121 + v120 )
            {
              do
              {
                _mm_prefetch(v123, 0);
                v123 += 64;
              }
              while ( (unsigned __int64)v123 < v121 + v120 );
            }
            v126 = v52;
            v127 = (unsigned int)v121 >> 7;
            if ( (unsigned int)v121 >> 7 )
            {
              do
              {
                v128 = 8LL;
                do
                {
                  v129 = v126 ^ *v122;
                  v130 = v122[1];
                  v122 += 2;
                  v126 = __ROL8__(__ROL8__(v129, v124) ^ v130, v124);
                  --v128;
                }
                while ( v128 );
                v131 = __ROL8__(v52 ^ ((unsigned __int64)v122 - v120), 17) ^ v52 ^ ((unsigned __int64)v122 - v120);
                v1758 = (v131 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v124 = ((unsigned __int8)(v131 ^ v1758) ^ (unsigned __int8)v124) & 0x3F;
                if ( !v124 )
                  LOBYTE(v124) = 1;
                --v127;
              }
              while ( v127 );
              v22 = (unsigned __int64)v1588;
              v119 = v1799;
            }
            v132 = v121 & 0x7F;
            if ( (unsigned int)v132 >= 8 )
            {
              v133 = (unsigned __int64)(unsigned int)v132 >> 3;
              do
              {
                v126 = __ROL8__(*v122++ ^ v126, v124);
                v132 = (unsigned int)(v132 - 8);
                --v133;
              }
              while ( v133 );
            }
            if ( (_DWORD)v132 )
            {
              do
              {
                v134 = *(unsigned __int8 *)v122;
                v122 = (_QWORD *)((char *)v122 + 1);
                v126 = __ROL8__(v134 ^ v126, v124);
                v132 = (unsigned int)(v132 - 1);
              }
              while ( (_DWORD)v132 );
              v22 = (unsigned __int64)v1588;
            }
            for ( i26 = v126; ; LODWORD(v126) = i26 ^ v126 )
            {
              i26 >>= 31;
              if ( !i26 )
                break;
            }
            v137 = *(_DWORD *)v118;
            v138 = v126 & 0x7FFFFFFF;
            if ( v138 == (*(_DWORD *)v118 & 0x7FFFFFFF) )
            {
LABEL_281:
              v55 = 0;
            }
            else
            {
              if ( v125 && (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
              {
                v139 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v52 = v120 & 0xFFFFFFFFFFFFF000uLL;
                v1589 = (v125 + v120 - 1) | 0xFFF;
                v140 = (v120 & 0xFFFFFFFFFFFFF000uLL) - 1;
                while ( 1 )
                {
                  v141 = v139;
                  while ( 1 )
                  {
                    v142 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, _QWORD *))(v22 + 1128))(
                             v52,
                             0LL,
                             v132,
                             v122);
                    if ( v142 != -1073741267 )
                      break;
                    if ( v139 > 1u )
                      goto LABEL_279;
                    v141 = v139;
                    __writecr8(v139);
                    KeGetCurrentIrql();
                    __writecr8(2uLL);
                  }
                  if ( v142 < 0 )
                    break;
LABEL_279:
                  v52 += 4096LL;
                  v140 += 4096LL;
                  if ( v140 == v1589 )
                  {
                    __writecr8(v141);
                    v119 = v1799;
                    goto LABEL_281;
                  }
                }
                __writecr8(v141);
                v137 = *(_DWORD *)v118;
                v120 = v1591;
                v119 = v1799;
              }
              v145 = v137;
              v55 = 0;
              if ( !*(_DWORD *)(v22 + 2296) )
              {
                LODWORD(v145) = v137 & 0x7FFFFFFF;
                *(_QWORD *)(*(_QWORD *)(v22 + 1424) + 24LL) = v145 ^ v138;
                if ( !*(_DWORD *)(v22 + 2296) )
                {
                  v143 = (int *)v1587;
                  *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(v22 + 2312) = (char *)v143 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(v22 + 2320) = *v143;
                  *(_QWORD *)(v22 + 2328) = v120;
                  *(_DWORD *)(v22 + 2296) = 1;
                  __b8(v22, 0LL);
                  goto LABEL_283;
                }
              }
            }
          }
          v143 = (int *)v1587;
LABEL_283:
          v118 += 16LL;
          v144 = v118 == v119;
          if ( v118 >= v119 )
            goto LABEL_286;
          if ( *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
          {
            v144 = v118 == v119;
LABEL_286:
            if ( !v144 )
            {
              v136 = (__int64)(v118 - (_QWORD)(v143 + 12)) >> 4;
              goto LABEL_288;
            }
LABEL_267:
            LODWORD(v136) = 0;
LABEL_288:
            *(_DWORD *)(v22 + 2084) = v136;
            goto LABEL_235;
          }
        }
    }
    if ( v86 != 11 )
      goto LABEL_2324;
    if ( !*(_QWORD *)(v22 + 2432) )
      goto LABEL_1733;
    if ( *(_DWORD *)(v22 + 2084) )
    {
      v87 = *(_DWORD *)(v22 + 2452);
      if ( (((unsigned __int8)v87 ^ (unsigned __int8)(v87 >> 3)) & 4) != 0 )
        goto LABEL_1733;
    }
    else
    {
      v87 = *(_DWORD *)(v22 + 2452) ^ ((unsigned __int8)*(_DWORD *)(v22 + 2452) ^ (unsigned __int8)(8
                                                                                                  * *(_DWORD *)(v22 + 2452))) & 0x20;
      *(_DWORD *)(v22 + 2452) = v87;
    }
    if ( (v87 & 4) != 0 )
    {
      v88 = *((_QWORD *)v61 + 1) & 0xFFFFFFFFFFFFF000uLL;
      v89 = (*((unsigned int *)v61 + 4) + (unsigned __int64)(*((_DWORD *)v61 + 2) & 0xFFF) + 4095) >> 12;
      while ( v89 )
      {
        --v89;
        if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v22 + 688))(v88) && !*(_DWORD *)(v22 + 2296) )
        {
          *(_QWORD *)(v22 + 2304) = v22 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(v22 + 2312) = v61 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(v22 + 2320) = *(int *)v61;
          *(_QWORD *)(v22 + 2328) = v88;
          *(_DWORD *)(v22 + 2296) = 1;
          __b8(v22, 0LL);
        }
        v88 += 4096LL;
        *(_DWORD *)(v22 + 2088) += 256;
      }
      goto LABEL_235;
    }
    v90 = (_QWORD *)*((_QWORD *)v61 + 1);
    v91 = *((unsigned int *)v61 + 4);
    v92 = v90;
    *(_DWORD *)(v22 + 2088) += v91;
    v93 = (const char *)v90;
    v94 = *(_DWORD *)(v22 + 2068);
    v52 = *(_QWORD *)(v22 + 2072);
    if ( v90 < (_QWORD *)((char *)v90 + v91) )
    {
      do
      {
        _mm_prefetch(v93, 0);
        v93 += 64;
      }
      while ( v93 < (const char *)v90 + v91 );
    }
    v95 = *(_QWORD *)(v22 + 2072);
    v96 = (unsigned int)v91 >> 7;
    if ( (unsigned int)v91 >> 7 )
    {
      do
      {
        v97 = 8LL;
        do
        {
          v98 = v95 ^ *v92;
          v99 = v92[1];
          v92 += 2;
          v95 = __ROL8__(__ROL8__(v98, v94) ^ v99, v94);
          --v97;
        }
        while ( v97 );
        v100 = (__ROL8__(v52 ^ ((char *)v92 - (char *)v90), 17) ^ v52 ^ ((char *)v92 - (char *)v90))
             * (unsigned __int128)0x7010008004002001uLL;
        v1757 = *((_QWORD *)&v100 + 1);
        v94 = ((unsigned __int8)(v100 ^ BYTE8(v100)) ^ (unsigned __int8)v94) & 0x3F;
        if ( !v94 )
          LOBYTE(v94) = 1;
        --v96;
      }
      while ( v96 );
      v22 = (unsigned __int64)v1588;
    }
    v101 = v91 & 0x7F;
    if ( v101 >= 8 )
    {
      v102 = (unsigned __int64)v101 >> 3;
      do
      {
        v95 = __ROL8__(*v92++ ^ v95, v94);
        v101 -= 8;
        --v102;
      }
      while ( v102 );
      v22 = (unsigned __int64)v1588;
    }
    for ( ; v101; --v101 )
    {
      v103 = *(unsigned __int8 *)v92;
      v92 = (_QWORD *)((char *)v92 + 1);
      v95 = __ROL8__(v103 ^ v95, v94);
    }
    for ( i27 = v95; ; LODWORD(v95) = i27 ^ v95 )
    {
      i27 >>= 31;
      if ( !i27 )
        break;
    }
    v105 = *((unsigned int *)v61 + 5);
    v106 = v95 & 0x7FFFFFFF;
    if ( v106 != (_DWORD)v105 )
    {
      v107 = *((unsigned int *)v61 + 4);
      v108 = *((_QWORD *)v61 + 1);
      if ( *((_DWORD *)v61 + 4) && (*(_DWORD *)(v22 + 2452) & 0x40) != 0 )
      {
        v109 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v110 = v108 & 0xFFFFFFFFFFFFF000uLL;
        v111 = (v108 + v107 - 1) | 0xFFF;
        v112 = (v108 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 2 )
        {
          v52 = v109;
          while ( 1 )
          {
            v113 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v22 + 1128))(v110, 0LL);
            if ( v113 != -1073741267 )
              break;
            if ( v109 > 1u )
              goto LABEL_232;
            v52 = v109;
            __writecr8(v109);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          if ( v113 < 0 )
          {
            __writecr8(v52);
            v61 = v1587;
            v55 = 0;
            v105 = *((unsigned int *)v1587 + 5);
            goto LABEL_241;
          }
LABEL_232:
          v110 += 4096LL;
          v112 += 4096LL;
          if ( v112 != v111 )
            continue;
          break;
        }
LABEL_233:
        __writecr8(v52);
        goto LABEL_234;
      }
LABEL_241:
      v115 = *(_DWORD *)(v22 + 2296);
      if ( !v115 )
      {
        v116 = v106 ^ v105;
        goto LABEL_452;
      }
      goto LABEL_453;
    }
LABEL_235:
    v114 = v1650 - 1;
    if ( !*(_DWORD *)(v22 + 2084) )
      v114 = v1650;
    v29 = 1LL;
    Next = v114 + 1;
    if ( *(_DWORD *)(v22 + 2296) || *(_DWORD *)(v22 + 2088) >= *(_DWORD *)(v22 + 2092) )
      goto LABEL_2505;
    v54 = v1621;
    v56 = v1616;
    v57 = v1618;
  }
  ++*(_DWORD *)(v22 + 2096);
  Next = 0;
  if ( *(_DWORD *)(v22 + 2392) != 11 || (v1527 = *(_DWORD *)(v22 + 2448), (v1527 & 1) != 0) )
  {
LABEL_2505:
    v18 = v1613;
    v2 = a2;
  }
  else
  {
    v2 = a2;
    v18 = v1613;
    if ( *(_DWORD *)(v22 + 2416) == -1 )
      *(_DWORD *)(v22 + 2416) = 0;
    else
      *(_DWORD *)(v22 + 2448) = v1527 | 1;
  }
  v19 = v1624;
LABEL_2507:
  *(_DWORD *)(v22 + 2080) = Next;
  if ( v1606 )
  {
    v1528 = *(_QWORD *)(*(_QWORD *)(v22 + 1704)
                      + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v22 + 1608))
                      + *(_QWORD *)(v22 + 1672));
    (*(void (__fastcall **)(_BYTE *))(v22 + 408))(v1778);
    (*(void (__fastcall **)(_BYTE *))(v22 + 1088))(v1793);
    (*(void (__fastcall **)(__int64))(v22 + 936))(v1528);
    (*(void (__fastcall **)(__int64))(v22 + 952))(v1528);
  }
  if ( v1629 && ((*(_DWORD *)(v22 + 2448) & 0x8000) != 0 || !*(_DWORD *)(v22 + 2296)) )
  {
    v1529 = *(_QWORD *)(v22 + 2432);
    *(_QWORD *)(v22 + 2432) = 0LL;
    (*(void (__fastcall **)(__int64, _BYTE *))(v22 + 664))(v1529, v1793);
    v1530 = *(_DWORD *)(v22 + 2448);
    if ( (v1530 & 1) != 0 )
    {
      *(_DWORD *)(v22 + 2448) = v1530 & 0xFFFFFFFE;
      v1529 = (*(__int64 (__fastcall **)(__int64))(v22 + 640))(v1529);
      if ( v1529 )
        *(_DWORD *)(v22 + 2416) = (*(__int64 (__fastcall **)(__int64))(v22 + 672))(v1529);
      else
        *(_DWORD *)(v22 + 2416) = -1;
    }
    if ( v1529 )
      (*(void (__fastcall **)(__int64))(v22 + 648))(v1529);
  }
  if ( *((_DWORD *)&v19[143].Next + 2) )
  {
    v1531 = (__int64)v19[145].Next;
    v1532 = *((_QWORD *)&v19[145].Next + 1);
    v1533 = *((_QWORD *)&v19[144].Next + 1);
    v1534 = v19[144].Next;
    v1616 = v1532;
    v1621 = v1533;
    v1622 = v1534;
    v1609 = v19;
    if ( KeGetCurrentIrql() < 2u )
    {
      KeGetCurrentIrql();
      __writecr8(2uLL);
    }
    v1535 = KeGetCurrentPrcb();
    v1536 = *(_QWORD *)((char *)&v1535->MxCsr + *((_QWORD *)&v1609[99].Next + 1));
    v1537 = *(_QWORD *)((char *)&v1535->MxCsr + *((_QWORD *)&v1609[100].Next + 1));
    v1538 = v1609[100].Next;
    v1603 = v1537;
    if ( !*((_BYTE *)&v1538->Next + (_QWORD)v1535)
      || (unsigned __int64)&v1609 > v1536
      || (unsigned __int64)&v1609 < v1536 - 24576 )
    {
      v1536 = *(_QWORD *)(v1537 + *((_QWORD *)&v1609[103].Next + 1));
    }
    v1539 = v1609;
    if ( ((__int64)v1609[153].Next & 0x8000000) == 0 )
    {
      v1540 = __readcr0();
      v1636 = v1540;
      __writecr0(v1540 & 0xFFFFFFFFFFFEFFFFuLL);
      v1541 = (unsigned __int64)(&v1609[170].Next + 1);
      v1542 = (unsigned __int64)(&v1609[LODWORD(v1609[170].Next) + 170].Next + 1);
      v1543 = 0;
      v1544 = (_QWORD *)v1542;
      if ( HIDWORD(v1609[170].Next) )
      {
        do
        {
          *(_QWORD *)*v1544 = v1544[1];
          v1545 = __readcr4();
          if ( (v1545 & 0x20080) != 0 )
          {
            __writecr4(v1545 ^ 0x80);
            __writecr4(v1545);
          }
          else
          {
            v1546 = __readcr3();
            __writecr3(v1546);
          }
          v1544 += 2;
          ++v1543;
        }
        while ( v1543 < HIDWORD(v1539[170].Next) );
        LODWORD(v1532) = v1616;
      }
      if ( v1541 < v1542 )
      {
        do
        {
          v1547 = *(unsigned int *)(v1541 + 8);
          v1548 = v1544;
          v1549 = *(char **)v1541;
          v1550 = v1547;
          if ( (unsigned int)v1547 >= 8 )
          {
            v1551 = (unsigned __int64)(unsigned int)v1547 >> 3;
            do
            {
              v1550 -= 8;
              *(_QWORD *)v1549 = *v1548++;
              v1549 += 8;
              --v1551;
            }
            while ( v1551 );
          }
          if ( v1550 )
          {
            v1552 = v1549 - (char *)v1548;
            do
            {
              *((_BYTE *)v1548 + v1552) = *(_BYTE *)v1548;
              v1548 = (_QWORD *)((char *)v1548 + 1);
              --v1550;
            }
            while ( v1550 );
          }
          v1544 = (_QWORD *)((char *)v1544 + v1547);
          v1541 += 16LL;
        }
        while ( v1541 < v1542 );
        v1537 = v1603;
        v1540 = v1636;
        LODWORD(v1532) = v1616;
        LODWORD(v1533) = v1621;
      }
      **((_BYTE **)&v1539[33].Next + 1) = -61;
      __writecr0(v1540);
      LODWORD(v1534) = (_DWORD)v1622;
    }
    v1572 = *((_DWORD *)&v1609[146].Next + 2);
    if ( v1572 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v1572 = *((_DWORD *)&v1609[146].Next + 2);
      }
      if ( v1572 )
      {
        v1573 = v1572 - 1;
        if ( v1573 )
        {
          v1574 = v1573 - 1;
          if ( v1574 )
          {
            v1575 = v1574 - 1;
            if ( v1575 )
            {
              v1576 = v1575 - 1;
              if ( v1576 )
              {
                if ( v1576 == 1 )
                  _interlockedbittestandset(
                    *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)&v1609[100].Next + 1)),
                    (LODWORD(v1609[153].Next) >> 10) & 0x1F);
                else
                  _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)&v1609[91].Next + 1) + 832LL), 1uLL);
              }
              else
              {
                _interlockedbittestandset(
                  *(volatile signed __int32 **)(*((_QWORD *)&v1609[106].Next + 1)
                                              + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr
                                                          + *((_QWORD *)&v1609[100].Next + 1))
                                              + *((_QWORD *)&v1609[104].Next + 1)),
                  (LODWORD(v1609[153].Next) >> 10) & 0x1F);
              }
              goto LABEL_2579;
            }
            v1577 = (volatile signed __int32 *)v1609[86].Next;
          }
          else
          {
            v1577 = (volatile signed __int32 *)*((_QWORD *)&v1609[85].Next + 1);
          }
        }
        else
        {
          v1577 = (volatile signed __int32 *)*((_QWORD *)&v1609[84].Next + 1);
        }
        _interlockedbittestandset64(v1577, 0LL);
      }
    }
LABEL_2579:
    *(_SLIST_ENTRY **)((char *)&v1609[105].Next->Next + v1537) = 0LL;
    *(_SLIST_ENTRY **)((char *)&v1609[106].Next->Next + v1537) = 0LL;
    SdbpCheckDll(265, (_DWORD)v1534, v1533, v1532, v1531, *((_QWORD *)&v1609[21].Next + 1), v1536);
    __debugbreak();
  }
  if ( HIDWORD(v19[130].Next) || LODWORD(v19[130].Next) )
  {
    v1553 = -1073741802;
    *(_DWORD *)v2 = v19[130].Next;
    *(_DWORD *)(v2 + 4) = HIDWORD(v19[130].Next);
  }
  else
  {
    v1553 = *(_QWORD *)(v2 + 8) == 0LL ? 0xC0000225 : 0;
  }
  if ( v1636 == 2800 )
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, v18);
  else
    ExFreePoolWithTag(v18, v29);
  return v1553;
}