/* XREFS 
Down	p	pg_initialize+1D	call    pg_main
*/

char __fastcall pg_main(unsigned int a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // esi
  int *i; // rax
  int *j; // rax
  unsigned int *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r13
  PVOID PoolWithTag; // r14
  int v17; // r15d
  unsigned __int64 *v18; // rdx
  int v19; // ebx
  __int64 *v20; // rcx
  __int64 v21; // rdi
  char v22; // al
  SIZE_T v23; // r12
  unsigned __int64 v24; // rcx
  unsigned __int128 v25; // rax
  unsigned __int64 v26; // rcx
  int v27; // ecx
  int v28; // ecx
  ULONG v29; // edi
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int128 v36; // rax
  unsigned __int64 v37; // rcx
  int v38; // ecx
  int v39; // ecx
  ULONG v40; // edi
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  unsigned __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // edi
  ULONG_PTR BugCheckParameter4; // rdx
  int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int128 v50; // rax
  unsigned __int64 v51; // rcx
  int v52; // ecx
  int v53; // ecx
  ULONG v54; // edi
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // edi
  unsigned int *v61; // rax
  unsigned int v62; // edx
  unsigned int k; // ecx
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  int v66; // ebx
  __int64 *v67; // rcx
  unsigned __int64 *v68; // rdx
  __int64 v69; // rdi
  char v70; // al
  __int64 v71; // rax
  __int64 v72; // rax
  void *v73; // rcx
  ULONG_PTR v74; // rdx
  unsigned __int64 v75; // rdi
  BOOL v76; // ebx
  unsigned __int64 v77; // rcx
  unsigned __int128 v78; // rax
  unsigned __int64 v79; // rcx
  unsigned __int128 v80; // rax
  unsigned __int64 v81; // rcx
  unsigned __int128 v82; // rax
  unsigned int v83; // ecx
  unsigned int v84; // esi
  int v85; // r15d
  __int64 v86; // r14
  __int64 v87; // rbx
  _DWORD *v88; // rsi
  __int64 v89; // rdi
  int v90; // r8d
  signed int v91; // ebx
  int v92; // ecx
  unsigned int v93; // edx
  _DWORD *v94; // r9
  _DWORD *v95; // rax
  __int64 *v96; // r8
  ULONG_PTR v97; // rsi
  int v98; // ecx
  __int64 v99; // rcx
  ULONG_PTR v100; // rdx
  unsigned __int64 v101; // rcx
  unsigned int v102; // ebx
  __int64 v103; // rdi
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned __int64 v106; // rsi
  __int64 v107; // rcx
  unsigned int v108; // edx
  unsigned __int64 v109; // r14
  unsigned __int64 *v110; // rdx
  __int64 v111; // rbx
  unsigned __int64 v112; // rcx
  BOOL v113; // ebx
  int v114; // edx
  int v115; // edi
  unsigned int v116; // r13d
  __int64 v117; // r15
  __int64 v118; // r12
  unsigned int v119; // edx
  unsigned __int64 v120; // rcx
  unsigned __int128 v121; // rax
  unsigned __int64 v122; // rcx
  int v123; // ecx
  int v124; // ecx
  ULONG v125; // edi
  int v126; // ecx
  int v127; // ecx
  int v128; // ecx
  unsigned __int64 v129; // rcx
  __int64 v130; // rax
  unsigned int v131; // edi
  char *v132; // rsi
  _QWORD *v133; // rcx
  char *v134; // rbx
  ULONG v135; // edx
  unsigned __int64 v136; // rdi
  signed __int64 v137; // rbx
  __int64 v138; // rcx
  PVOID *v139; // rdx
  unsigned __int64 v140; // rcx
  __int64 v141; // rbx
  BOOL v142; // ebx
  int v143; // edx
  int v144; // edi
  int v145; // r15d
  __int64 v146; // r12
  PVOID v147; // r13
  unsigned int v148; // edx
  unsigned int v149; // r8d
  unsigned __int64 v150; // rcx
  unsigned __int128 v151; // rax
  unsigned __int64 v152; // rcx
  int v153; // ecx
  int v154; // ecx
  ULONG v155; // edi
  int v156; // ecx
  int v157; // ecx
  int v158; // ecx
  unsigned __int64 v159; // rcx
  __int64 v160; // rax
  unsigned int v161; // edi
  char *v162; // r14
  _QWORD *v163; // rcx
  char *v164; // rbx
  ULONG v165; // edx
  unsigned __int64 v166; // rdi
  signed __int64 v167; // rbx
  __int64 v168; // rcx
  int v169; // r15d
  int v170; // r12d
  int v171; // ecx
  int v172; // edx
  int v173; // r13d
  unsigned __int64 v174; // rcx
  __int64 v175; // rax
  unsigned int v176; // r15d
  unsigned __int64 v177; // rcx
  unsigned __int128 v178; // rax
  unsigned __int64 v179; // rcx
  int v180; // ecx
  int v181; // ecx
  ULONG v182; // edi
  int v183; // ecx
  int v184; // ecx
  int v185; // ecx
  unsigned __int64 v186; // rcx
  __int64 v187; // rax
  unsigned int v188; // edi
  unsigned __int64 v189; // rcx
  __int64 v190; // rax
  int v191; // esi
  unsigned __int64 v192; // rcx
  unsigned __int128 v193; // rax
  unsigned __int64 v194; // r14
  _QWORD *v195; // r9
  int v196; // edi
  _QWORD *v197; // rbx
  unsigned __int64 v198; // r8
  unsigned __int64 v199; // rcx
  unsigned __int128 v200; // rax
  unsigned __int64 v201; // rcx
  unsigned __int128 v202; // rax
  unsigned __int64 v203; // rdx
  __int64 v204; // r8
  unsigned int v205; // esi
  _QWORD *v206; // rbx
  unsigned __int64 v207; // rdi
  unsigned __int64 v208; // rcx
  unsigned __int128 v209; // rax
  unsigned __int64 v210; // rcx
  unsigned __int128 v211; // rax
  unsigned __int64 v212; // rdx
  _BYTE *v213; // r14
  int v214; // edi
  unsigned int v215; // ecx
  __int64 v216; // rdx
  _DWORD *v217; // r13
  unsigned int v218; // r12d
  unsigned int v219; // esi
  __int64 v220; // r15
  __int64 v221; // rbx
  _DWORD *v222; // rsi
  __int64 v223; // rdi
  int v224; // r8d
  signed int v225; // ebx
  int v226; // edx
  unsigned int v227; // ecx
  _DWORD *v228; // r9
  _DWORD *v229; // rax
  __int64 *v230; // r8
  ULONG_PTR v231; // r15
  int v232; // ecx
  __int64 v233; // rcx
  ULONG_PTR v234; // rdx
  unsigned __int64 v235; // rcx
  unsigned int v236; // ebx
  __int64 v237; // rdi
  __int64 v238; // rax
  __int64 v239; // rax
  __int64 v240; // rax
  unsigned __int64 v241; // rcx
  unsigned __int64 *v242; // rdx
  __int64 v243; // rbx
  unsigned __int64 v244; // rcx
  BOOL v245; // ebx
  int v246; // edx
  int v247; // edi
  __int64 v248; // rcx
  unsigned int v249; // edx
  ULONG_PTR v250; // rcx
  __int64 v251; // rax
  unsigned __int64 v252; // r15
  unsigned __int64 *v253; // rdx
  __int64 v254; // rbx
  unsigned __int64 v255; // rcx
  BOOL v256; // ebx
  int v257; // edx
  int v258; // edi
  unsigned __int64 v259; // r14
  __int64 v260; // r12
  __int64 v261; // r13
  unsigned int m; // edx
  unsigned int v263; // r8d
  unsigned __int64 v264; // rcx
  unsigned __int128 v265; // rax
  unsigned __int64 v266; // rcx
  int v267; // ecx
  int v268; // ecx
  ULONG v269; // edi
  int v270; // ecx
  int v271; // ecx
  int v272; // ecx
  unsigned __int64 v273; // rcx
  __int64 v274; // rax
  unsigned int v275; // edi
  char *v276; // rsi
  _QWORD *v277; // rcx
  char *v278; // rbx
  ULONG v279; // edx
  unsigned __int64 v280; // rdi
  signed __int64 v281; // rbx
  __int64 v282; // rcx
  __int64 v283; // r15
  __int64 v284; // r12
  unsigned int n; // edx
  unsigned int v286; // r8d
  unsigned __int64 v287; // rcx
  unsigned __int128 v288; // rax
  unsigned __int64 v289; // rcx
  int v290; // ecx
  int v291; // ecx
  ULONG v292; // edi
  int v293; // ecx
  int v294; // ecx
  int v295; // ecx
  unsigned __int64 v296; // rcx
  __int64 v297; // rax
  unsigned int v298; // edi
  char *v299; // rsi
  _QWORD *v300; // rcx
  char *v301; // rbx
  ULONG v302; // edx
  unsigned __int64 v303; // rdi
  signed __int64 v304; // rbx
  __int64 v305; // rcx
  int v306; // r11d
  unsigned int v307; // ecx
  char *v308; // rbx
  char *v309; // r10
  char *v310; // rdi
  __int64 v311; // r8
  _QWORD *v312; // rax
  char *v313; // r8
  _QWORD *v314; // rcx
  unsigned __int64 v315; // r9
  signed __int64 v316; // r8
  __int64 v317; // rax
  _DWORD *v318; // rbx
  _DWORD *v319; // rdx
  int v320; // eax
  _DWORD *v321; // rcx
  _DWORD *v322; // rax
  _DWORD *v323; // rcx
  unsigned int v324; // ecx
  __int64 v325; // rbx
  unsigned __int64 v326; // rcx
  unsigned __int128 v327; // rax
  unsigned __int64 v328; // rcx
  unsigned __int128 v329; // rax
  __int64 v330; // rcx
  unsigned __int64 v331; // rcx
  unsigned __int128 v332; // rax
  __int64 v333; // rcx
  __int64 *v334; // rcx
  __int64 v335; // rdx
  _OWORD *v336; // rax
  __int128 v337; // xmm1
  __int64 (__fastcall *v338)(); // rax
  unsigned __int64 v339; // rcx
  unsigned __int128 v340; // rax
  unsigned __int64 v341; // rcx
  int v342; // ecx
  int v343; // ecx
  unsigned int v344; // edi
  int v345; // ecx
  int v346; // ecx
  int v347; // ecx
  unsigned __int64 v348; // rcx
  __int64 v349; // rax
  unsigned int v350; // edi
  unsigned int v351; // ebx
  unsigned int v352; // edx
  unsigned __int64 v353; // rcx
  unsigned __int128 v354; // rax
  __int64 v355; // rcx
  unsigned __int64 v356; // rcx
  unsigned __int128 v357; // rax
  int v358; // ecx
  unsigned __int64 v359; // rcx
  unsigned __int128 v360; // rax
  unsigned __int64 v361; // rcx
  unsigned __int128 v362; // rax
  unsigned int v363; // esi
  unsigned __int64 v364; // rcx
  unsigned __int128 v365; // rax
  unsigned __int64 v366; // rcx
  unsigned __int128 v367; // rax
  unsigned __int64 v368; // rcx
  unsigned __int128 v369; // rax
  unsigned __int64 v370; // rcx
  unsigned __int128 v371; // rax
  unsigned __int64 v372; // rcx
  unsigned __int128 v373; // rax
  unsigned __int64 v374; // rcx
  unsigned __int128 v375; // rax
  unsigned __int64 v376; // rcx
  unsigned __int128 v377; // rax
  __int64 v378; // rcx
  unsigned __int64 v379; // rcx
  unsigned __int128 v380; // rax
  unsigned __int64 v381; // rcx
  unsigned __int128 v382; // rax
  unsigned __int64 v383; // rcx
  int v384; // ecx
  int v385; // ecx
  unsigned int v386; // edi
  int v387; // ecx
  int v388; // ecx
  int v389; // ecx
  unsigned __int64 v390; // rcx
  __int64 v391; // rax
  unsigned int v392; // edi
  __int64 v393; // rax
  unsigned __int64 v394; // rcx
  unsigned __int128 v395; // rax
  unsigned __int64 v396; // rcx
  int v397; // ecx
  int v398; // ecx
  unsigned int v399; // edi
  int v400; // ecx
  int v401; // ecx
  int v402; // ecx
  unsigned __int64 v403; // rcx
  __int64 v404; // rax
  unsigned int v405; // edi
  _QWORD *v406; // rax
  unsigned int v412; // edi
  unsigned __int64 v413; // rcx
  unsigned __int128 v414; // rax
  unsigned __int64 v415; // rsi
  _QWORD *v416; // r8
  __int64 v417; // r15
  unsigned __int64 v418; // rcx
  __int64 v419; // rax
  __int64 v420; // rax
  int v421; // r9d
  __int64 v422; // rcx
  unsigned int v423; // edi
  _QWORD *v424; // r10
  unsigned __int64 v425; // rcx
  const char *v426; // rax
  __int64 *v427; // rbx
  unsigned int ii; // r11d
  __int64 v429; // rax
  __int64 v430; // rbx
  unsigned __int64 v431; // rcx
  unsigned int v432; // edi
  unsigned __int64 v433; // rax
  __int64 v434; // rax
  unsigned int v435; // ecx
  unsigned __int64 v436; // rcx
  unsigned __int128 v437; // rax
  __int64 v438; // r8
  unsigned __int64 v439; // rcx
  __int64 v440; // rax
  int v441; // esi
  unsigned __int64 v442; // rcx
  unsigned __int128 v443; // rax
  unsigned __int64 v444; // r15
  __int64 v445; // r9
  __int64 v446; // r8
  int v447; // edi
  _QWORD *v448; // rbx
  unsigned __int64 v449; // r8
  unsigned __int64 v450; // rcx
  unsigned __int128 v451; // rax
  unsigned __int64 v452; // rcx
  unsigned __int128 v453; // rax
  unsigned __int64 v454; // rdx
  unsigned int v455; // esi
  _QWORD *v456; // rbx
  unsigned __int64 v457; // rdi
  unsigned __int64 v458; // rcx
  unsigned __int128 v459; // rax
  unsigned __int64 v460; // rcx
  unsigned __int128 v461; // rax
  unsigned __int64 v462; // rdx
  unsigned __int64 v463; // rcx
  unsigned __int128 v464; // rax
  __int64 v465; // r8
  unsigned __int64 v466; // rcx
  __int64 v467; // rax
  int v468; // esi
  unsigned __int64 v469; // rcx
  unsigned __int128 v470; // rax
  unsigned __int64 v471; // r15
  __int64 v472; // r9
  int v474; // edi
  _QWORD *v475; // rbx
  unsigned __int64 v476; // r8
  unsigned __int64 v477; // rcx
  unsigned __int128 v478; // rax
  unsigned __int64 v479; // rcx
  unsigned __int128 v480; // rax
  unsigned __int64 v481; // rdx
  unsigned int v482; // esi
  __int64 v483; // r8
  _QWORD *v484; // rbx
  unsigned __int64 v485; // rdi
  unsigned __int64 v486; // rcx
  unsigned __int128 v487; // rax
  unsigned __int64 v488; // rcx
  unsigned __int128 v489; // rax
  unsigned __int64 v490; // rdx
  _BYTE *v491; // rbx
  unsigned __int64 v492; // rcx
  unsigned __int128 v493; // rax
  _BYTE *v494; // rcx
  unsigned int jj; // eax
  __int64 v496; // r10
  unsigned __int8 v497; // r9
  char v498; // al
  int v499; // edi
  _QWORD *v500; // rbx
  __int64 v501; // r9
  unsigned __int64 v502; // rcx
  unsigned __int128 v503; // rax
  unsigned __int64 v504; // rcx
  unsigned __int128 v505; // rax
  unsigned __int64 v506; // rdx
  unsigned __int64 v507; // rcx
  unsigned __int128 v508; // rax
  unsigned int i167; // esi
  unsigned __int64 v510; // rcx
  unsigned __int128 v511; // rax
  unsigned __int64 v512; // rcx
  int v513; // ecx
  int v514; // ecx
  ULONG v515; // edi
  int v516; // ecx
  int v517; // ecx
  int v518; // ecx
  unsigned __int64 v519; // rcx
  __int64 v520; // rax
  unsigned int v521; // edi
  PVOID v522; // rcx
  unsigned __int64 v523; // rcx
  unsigned int v524; // r12d
  __int64 v525; // rax
  __int64 v526; // rdx
  __int64 *v527; // rcx
  __int64 v528; // r13
  unsigned __int64 v529; // rsi
  char v530; // r15
  __int64 v531; // rbx
  _QWORD *v532; // rdi
  unsigned __int64 v533; // rcx
  unsigned __int128 v534; // rax
  unsigned __int64 v535; // rcx
  __int64 *v536; // rcx
  unsigned __int64 v537; // rcx
  unsigned __int128 v538; // rax
  unsigned __int64 v539; // rcx
  int v540; // ecx
  int v541; // ecx
  ULONG v542; // edi
  int v543; // ecx
  int v544; // ecx
  int v545; // ecx
  unsigned __int64 v546; // rcx
  __int64 v547; // rax
  unsigned int v548; // edi
  _BYTE *v549; // rax
  unsigned __int64 v550; // rcx
  unsigned __int128 v551; // rax
  __int64 v552; // r8
  unsigned __int64 v553; // rcx
  __int64 v554; // rax
  int v555; // esi
  unsigned __int64 v556; // rcx
  unsigned __int128 v557; // rax
  unsigned __int64 v558; // r15
  __int64 v559; // r9
  int v560; // edi
  _QWORD *v561; // rbx
  unsigned __int64 v562; // r8
  unsigned __int64 v563; // rcx
  unsigned __int128 v564; // rax
  unsigned __int64 v565; // rcx
  unsigned __int128 v566; // rax
  unsigned __int64 v567; // rdx
  unsigned int v568; // esi
  struct _KTIMER *v569; // rdi
  LIST_ENTRY *p_WaitListHead; // rbx
  unsigned __int64 v571; // rdi
  unsigned __int64 v572; // rcx
  unsigned __int128 v573; // rax
  unsigned __int64 v574; // rcx
  unsigned __int128 v575; // rax
  unsigned __int64 v576; // rdx
  unsigned __int64 v577; // rcx
  unsigned __int128 v578; // rax
  __int64 v579; // r8
  unsigned __int64 v580; // rcx
  __int64 v581; // rax
  int v582; // edi
  unsigned __int64 v583; // rcx
  unsigned __int128 v584; // rax
  unsigned __int64 v585; // rsi
  __int64 v586; // r10
  int v587; // r8d
  _QWORD *v588; // rbx
  unsigned __int64 v589; // r9
  unsigned __int64 v590; // rcx
  unsigned __int128 v591; // rax
  unsigned __int64 v592; // rcx
  unsigned __int128 v593; // rax
  unsigned __int64 v594; // rdx
  unsigned int v595; // edi
  struct _KTIMER *v596; // r8
  LIST_ENTRY *v597; // rbx
  unsigned __int64 v598; // r8
  unsigned __int64 v599; // rcx
  unsigned __int128 v600; // rax
  unsigned __int64 v601; // rcx
  unsigned __int128 v602; // rax
  unsigned __int64 v603; // rdx
  unsigned int v604; // eax
  __int64 v605; // r8
  unsigned __int64 v606; // rcx
  __int64 v607; // rax
  int v608; // esi
  unsigned __int64 v609; // rcx
  unsigned __int128 v610; // rax
  unsigned __int64 v611; // r15
  __int64 v612; // r9
  int v613; // edi
  _QWORD *v614; // rbx
  unsigned __int64 v615; // r8
  unsigned __int64 v616; // rcx
  unsigned __int128 v617; // rax
  unsigned __int64 v618; // rcx
  unsigned __int128 v619; // rax
  unsigned __int64 v620; // rdx
  unsigned int v621; // esi
  __int64 v622; // r8
  _QWORD *v623; // rbx
  unsigned __int64 v624; // rdi
  unsigned __int64 v625; // rcx
  unsigned __int128 v626; // rax
  unsigned __int64 v627; // rcx
  unsigned __int128 v628; // rax
  unsigned __int64 v629; // rdx
  unsigned __int64 v630; // rcx
  __int64 v631; // rax
  __int64 v632; // r8
  unsigned __int64 v633; // rcx
  __int64 v634; // rax
  int v635; // edi
  unsigned __int64 v636; // rcx
  unsigned __int128 v637; // rax
  unsigned __int64 v638; // rsi
  __int64 v639; // r10
  _DWORD *v640; // r9
  int v641; // r8d
  _QWORD *v642; // rbx
  unsigned __int64 v643; // r9
  unsigned __int64 v644; // rcx
  unsigned __int128 v645; // rax
  unsigned __int64 v646; // rcx
  unsigned __int128 v647; // rax
  unsigned __int64 v648; // rdx
  unsigned int v649; // edi
  _QWORD *v650; // rbx
  unsigned __int64 v651; // r8
  unsigned __int64 v652; // rcx
  unsigned __int128 v653; // rax
  unsigned __int64 v654; // rcx
  unsigned __int128 v655; // rax
  unsigned __int64 v656; // rdx
  __int64 v657; // rbx
  __int64 v658; // rdi
  __int64 v659; // rbx
  KIRQL v660; // al
  __int64 v661; // rax
  unsigned __int64 v662; // rcx
  unsigned __int128 v663; // rax
  unsigned __int64 v664; // rcx
  unsigned __int128 v665; // rax
  int v666; // eax
  unsigned __int64 v667; // rcx
  unsigned __int128 v668; // rax
  unsigned __int64 v669; // rcx
  unsigned __int128 v670; // rax
  __int64 v671; // r8
  unsigned __int64 v672; // rcx
  __int64 v673; // rax
  int v674; // r15d
  unsigned __int64 v675; // rcx
  unsigned __int128 v676; // rax
  unsigned __int64 v677; // r12
  __int64 v678; // r9
  int v679; // edi
  _QWORD *v680; // rbx
  unsigned __int64 v681; // r8
  unsigned __int64 v682; // rcx
  unsigned __int128 v683; // rax
  unsigned __int64 v684; // rcx
  unsigned __int128 v685; // rax
  unsigned __int64 v686; // rdx
  unsigned int v687; // r15d
  struct _KEVENT *v688; // r13
  struct _KEVENT *v689; // rbx
  unsigned __int64 v690; // rdi
  unsigned __int64 v691; // rcx
  unsigned __int128 v692; // rax
  unsigned __int64 v693; // rcx
  unsigned __int128 v694; // rax
  unsigned __int64 v695; // rdx
  ULONG_PTR v696; // rbx
  unsigned __int64 v697; // rcx
  unsigned __int64 v698; // rcx
  unsigned __int128 v699; // rax
  int v700; // edi
  char *v701; // r12
  int v702; // ebx
  __int64 v703; // rax
  unsigned __int8 CurrentIrql; // bl
  _KIDTENTRY64 *IdtBase; // r15
  unsigned __int64 v706; // rcx
  unsigned __int128 v707; // rax
  unsigned __int64 v708; // rcx
  int v709; // ecx
  int v710; // ecx
  unsigned int v711; // edi
  int v712; // ecx
  int v713; // ecx
  int v714; // ecx
  unsigned __int64 v715; // rcx
  __int64 v716; // rax
  unsigned int v717; // edi
  __int64 v718; // rax
  BOOL v719; // r9d
  __int64 v720; // r8
  unsigned int v726; // edi
  __int64 v727; // rax
  char v728; // r10
  char v729; // r11
  BOOL v735; // ebx
  unsigned __int64 v736; // rcx
  unsigned __int128 v737; // rax
  int v738; // eax
  unsigned __int64 v739; // rcx
  unsigned __int128 v740; // rax
  int v741; // eax
  unsigned __int64 v742; // rcx
  unsigned __int64 v743; // rcx
  int v744; // eax
  unsigned __int64 v745; // rcx
  unsigned __int128 v746; // rax
  int v747; // eax
  unsigned __int64 v748; // rcx
  unsigned __int128 v749; // rax
  unsigned __int64 v750; // rcx
  unsigned __int128 v751; // rax
  BOOL v752; // ecx
  int v753; // eax
  int v754; // ebx
  unsigned __int64 v755; // rcx
  unsigned __int128 v756; // rax
  unsigned __int64 v757; // rcx
  unsigned __int128 v758; // rax
  unsigned __int64 v759; // rcx
  int v760; // ecx
  int v761; // ecx
  unsigned int v762; // edi
  int v763; // ecx
  int v764; // ecx
  int v765; // ecx
  unsigned __int64 v766; // rcx
  __int64 v767; // rax
  int v768; // ebx
  _QWORD *v769; // rax
  __int64 v770; // rcx
  int v771; // ebx
  __int64 v772; // rdi
  _KIDTENTRY64 *v773; // rcx
  unsigned __int64 *v774; // rdx
  char OffsetLow; // al
  int v776; // edx
  char *v777; // rcx
  __int64 v778; // rbx
  char v779; // al
  int v780; // rax^4
  unsigned __int64 v781; // rdx
  unsigned int v782; // ecx
  int v783; // eax
  int v784; // r15d
  unsigned int v785; // r12d
  ULONG_PTR v786; // r13
  __int64 v787; // rax
  _DWORD *v788; // rcx
  __int64 v789; // rbx
  _DWORD *v790; // r15
  __int64 v791; // r8
  int v792; // edi
  signed int v793; // ebx
  int v794; // edx
  unsigned int v795; // ecx
  _DWORD *v796; // r9
  _DWORD *v797; // rax
  __int64 *v798; // rdi
  int v799; // ecx
  __int64 v800; // rcx
  ULONG_PTR v801; // rdx
  unsigned __int64 v802; // rcx
  unsigned int v803; // ebx
  __int64 v804; // rdi
  __int64 v805; // rax
  __int64 v806; // rcx
  __int64 v807; // r15
  unsigned int v808; // eax
  __int64 v809; // rbx
  int v810; // ecx
  unsigned int v811; // eax
  __int64 v812; // rdi
  int v813; // edx
  unsigned __int64 v814; // rcx
  int nn; // ecx
  int v816; // r14d
  __int64 v817; // r8
  __int64 v818; // r13
  ULONG_PTR v819; // r15
  unsigned int v820; // r12d
  unsigned int v821; // eax
  __int64 v822; // rdi
  int v823; // ecx
  unsigned int v824; // eax
  __int64 v825; // rbx
  int v826; // edx
  unsigned __int64 v827; // rcx
  int kk; // ecx
  int v829; // r14d
  __int64 v830; // r14
  int v831; // ecx
  _QWORD *v832; // rax
  __int64 v833; // rdx
  ULONG_PTR v834; // rcx
  _QWORD *v835; // r8
  const char *v836; // rax
  int v837; // r9d
  __int64 v838; // r11
  unsigned __int64 v839; // rbx
  unsigned int v840; // r10d
  __int64 v841; // rax
  __int64 v842; // rbx
  unsigned __int128 v843; // rax
  unsigned int v844; // edx
  unsigned __int64 v845; // rax
  __int64 v846; // rax
  unsigned __int64 mm; // rax
  int v848; // r15d
  __int64 v849; // rdi
  int v850; // ecx
  _QWORD *v851; // rax
  __int64 v852; // rdx
  const char *v853; // r13
  const char *v854; // rax
  unsigned __int64 v855; // rdx
  int v856; // r8d
  __int64 v857; // rax
  unsigned __int64 i1; // rax
  int v859; // r15d
  __int64 v860; // r15
  unsigned int v861; // eax
  __int64 v862; // rbx
  int v863; // ecx
  unsigned int v864; // eax
  __int64 v865; // rdi
  int v866; // edx
  unsigned __int64 v867; // rcx
  int i2; // ecx
  int v869; // r14d
  __int64 v870; // rdx
  int v871; // ecx
  _QWORD *v872; // rax
  __int64 v873; // rdi
  unsigned __int64 v874; // rcx
  unsigned __int64 i3; // rax
  int v876; // ebx
  unsigned int v877; // eax
  int v878; // edi
  unsigned __int64 v879; // rcx
  unsigned __int128 v880; // rax
  unsigned __int64 v881; // rcx
  unsigned __int128 v882; // rax
  int v883; // ebx
  unsigned __int64 v884; // rcx
  unsigned __int128 v885; // rax
  __int64 *v886; // r15
  void *v887; // rax
  ULONG_PTR v888; // r12
  __int64 v889; // rax
  _QWORD *v890; // r8
  ULONG_PTR *v891; // rbx
  unsigned int v892; // edi
  bool v893; // zf
  __int64 v894; // rax
  _QWORD *v895; // r8
  ULONG_PTR *v896; // rbx
  unsigned int v897; // edi
  bool v898; // zf
  __int64 v899; // rcx
  __int64 v900; // rdx
  PVOID *i4; // rbx
  char *v902; // rdi
  int v903; // edx
  __int64 (__fastcall *v904)(ULONG_PTR, char *); // rax
  _QWORD *v905; // rbx
  __int64 v906; // rax
  __int64 v907; // r8
  int v908; // r13d
  __int64 v909; // r12
  int v910; // ecx
  int *v911; // rax
  unsigned int v912; // r15d
  int v913; // edx
  int v914; // r9d
  _BYTE *v915; // r11
  unsigned int v916; // r10d
  int *v917; // rdi
  __int64 v918; // r8
  int v919; // ecx
  int v920; // ecx
  int v921; // ecx
  int v922; // ecx
  __int64 v923; // rax
  int v924; // eax
  unsigned __int64 v925; // rcx
  __int64 v926; // r10
  __int64 (__fastcall *v927)(unsigned __int64, char *, __int64); // rax
  unsigned __int64 v928; // r13
  __int64 v929; // rax
  ULONG_PTR v930; // r8
  int v931; // r12d
  int v932; // ecx
  int v933; // ecx
  __int64 v934; // rdx
  int *v935; // rax
  unsigned int v936; // r15d
  int v937; // r9d
  _BYTE *v938; // r11
  unsigned int v939; // r10d
  int *v940; // rdi
  __int64 v941; // r8
  int v942; // ecx
  int v943; // ecx
  int v944; // ecx
  int v945; // ecx
  __int64 v946; // rax
  int v947; // eax
  unsigned __int64 v948; // rcx
  __int64 v949; // r10
  __int64 v950; // rdx
  int v951; // r15d
  unsigned int v952; // edi
  int v953; // eax
  __int64 v954; // rax
  __int64 v955; // rdx
  __int64 (__fastcall *v956)(ULONG_PTR, __int64, __int64, _DWORD *); // rax
  __int64 v957; // rax
  __int64 v958; // rdx
  __int64 (__fastcall *v959)(ULONG_PTR, __int64, __int64, _DWORD *); // rax
  __int64 (__fastcall *v960)(ULONG_PTR); // rax
  __int64 v961; // rdi
  __int64 v962; // rax
  __int64 v963; // r13
  __int64 v964; // r8
  unsigned int v965; // eax
  int v966; // edi
  __int64 v967; // r15
  int v968; // ecx
  unsigned int v969; // eax
  __int64 v970; // rdi
  int v971; // edx
  unsigned __int64 v972; // rcx
  int i5; // ecx
  int v974; // ebx
  __int64 v975; // rdx
  __int64 v976; // r14
  _QWORD *v977; // r13
  unsigned int *v978; // rsi
  __int64 v979; // r12
  int v980; // ecx
  _QWORD *v981; // r11
  _QWORD *v982; // rax
  _QWORD *v983; // r8
  const char *v984; // rax
  int v985; // r10d
  __int64 v986; // r9
  unsigned __int64 v987; // rbx
  unsigned int v988; // edi
  __int64 v989; // rdx
  __int64 v990; // rax
  __int64 v991; // rbx
  unsigned __int64 v992; // rcx
  unsigned int v993; // edx
  unsigned __int64 v994; // rdi
  __int64 v995; // rax
  unsigned __int64 i6; // rax
  _DWORD *v997; // rbx
  ULONG_PTR v998; // r12
  int v999; // edi
  int v1000; // eax
  char v1001; // r13
  unsigned int v1002; // edi
  const char *v1003; // r11
  _DWORD *v1004; // r12
  int v1005; // ecx
  _QWORD *v1006; // rax
  __int64 v1007; // rdx
  const char *v1008; // rax
  int v1009; // r10d
  __int64 v1010; // r15
  unsigned __int64 v1011; // rcx
  unsigned __int64 v1012; // rbx
  unsigned int v1013; // r9d
  __int64 v1014; // rdx
  __int64 v1015; // rax
  __int64 v1016; // rbx
  ULONG_PTR v1017; // rcx
  unsigned int v1018; // edi
  unsigned __int64 v1019; // rdx
  __int64 v1020; // rax
  unsigned __int64 v1021; // rax
  int v1022; // ecx
  int v1023; // r13d
  int v1024; // r12d
  __int64 v1025; // r15
  unsigned int v1026; // eax
  int v1027; // ecx
  unsigned int v1028; // eax
  __int64 v1029; // r8
  int v1030; // edx
  unsigned __int64 v1031; // rcx
  int i7; // ecx
  int v1033; // edi
  char *v1034; // r14
  int v1035; // ecx
  _QWORD *v1036; // rax
  __int64 v1037; // rdx
  __int64 v1038; // r15
  const char *v1039; // r12
  int v1040; // r10d
  __int64 v1041; // r11
  const char *v1042; // rax
  unsigned __int64 v1043; // rdi
  unsigned int v1044; // r9d
  __int64 v1045; // rax
  __int64 v1046; // rdi
  ULONG_PTR v1047; // rcx
  unsigned __int64 v1048; // rax
  __int64 v1049; // rax
  unsigned __int64 i8; // rax
  _DWORD *v1051; // rdi
  BOOL v1052; // ecx
  ULONG_PTR v1053; // r15
  __int64 v1054; // r14
  __int64 v1055; // rax
  __int64 v1056; // rcx
  unsigned __int64 v1057; // rcx
  _QWORD *v1058; // rax
  _QWORD *v1059; // rax
  ULONG_PTR v1060; // r14
  ULONG_PTR v1061; // rax
  unsigned __int16 v1062; // r13
  unsigned int *v1063; // r12
  unsigned int v1064; // r9d
  unsigned int i10; // ecx
  unsigned int v1066; // r13d
  unsigned int v1067; // edi
  unsigned int v1068; // r13d
  unsigned int v1069; // eax
  __int64 v1070; // rax
  unsigned int v1071; // r14d
  unsigned int v1072; // r15d
  unsigned int v1073; // r14d
  unsigned int *v1074; // rax
  unsigned int *v1075; // rdi
  ULONG_PTR v1076; // r8
  unsigned int *v1077; // rax
  int v1078; // edi
  ULONG_PTR v1079; // r15
  __int16 v1080; // r13
  int v1081; // ecx
  __int64 v1082; // r14
  unsigned int v1083; // eax
  _DWORD *v1084; // r11
  int v1085; // ecx
  unsigned int v1086; // eax
  __int64 v1087; // rdi
  int v1088; // edx
  unsigned __int64 v1089; // rcx
  int i11; // ecx
  int v1091; // ebx
  char *v1092; // rbx
  _QWORD *v1093; // rax
  int v1094; // ecx
  __int64 v1095; // rdx
  __int64 v1096; // rax
  unsigned __int64 v1097; // rcx
  unsigned __int64 i12; // rax
  ULONG_PTR v1099; // rdx
  unsigned int *v1100; // r10
  __int64 v1101; // rax
  unsigned int *v1102; // rdi
  ULONG_PTR v1103; // rcx
  _DWORD *v1104; // rax
  __int64 v1105; // rcx
  char *v1106; // r15
  int v1107; // r14d
  int v1108; // ecx
  __int16 v1109; // ax
  char *v1110; // rbx
  __int64 *v1111; // r8
  signed __int64 v1112; // rdi
  char *v1113; // r10
  char *v1114; // r11
  int v1115; // r9d
  __int64 v1116; // rdx
  __int64 v1117; // rax
  unsigned int v1118; // ebx
  __int64 *v1119; // rdi
  __int64 v1120; // rcx
  __int64 v1121; // rax
  __int64 v1122; // rdx
  __int64 v1123; // rax
  int v1124; // edi
  signed __int64 v1125; // rbx
  __int64 v1126; // rdx
  __int64 v1127; // rax
  int v1128; // edi
  signed __int64 v1129; // rbx
  __int64 v1130; // rdx
  __int64 v1131; // rax
  int v1132; // ecx
  ULONG_PTR v1133; // rdx
  unsigned int v1134; // ecx
  unsigned int *v1135; // rbx
  unsigned int v1136; // ecx
  unsigned int v1137; // r15d
  unsigned int v1138; // r12d
  int v1139; // r13d
  __int64 v1140; // rax
  unsigned int v1141; // edi
  _QWORD *v1142; // r10
  ULONG_PTR v1143; // r9
  unsigned int i13; // edx
  ULONG_PTR v1145; // rbx
  _QWORD *v1146; // r8
  int v1147; // r14d
  const char *v1148; // rax
  unsigned __int64 v1149; // r11
  unsigned __int64 v1150; // rbx
  unsigned int v1151; // r9d
  __int64 v1152; // rdx
  __int64 v1153; // rax
  __int64 v1154; // rbx
  unsigned __int64 v1155; // rcx
  unsigned int v1156; // edi
  unsigned __int64 v1157; // rdx
  __int64 v1158; // rax
  unsigned __int64 i14; // rax
  bool v1160; // cc
  int v1161; // r12d
  unsigned int *v1162; // r14
  unsigned int v1163; // r15d
  _BYTE *v1164; // rax
  char v1165; // bl
  __int64 v1166; // rbx
  ULONG_PTR v1167; // rax
  const char *v1168; // r10
  unsigned int v1169; // edi
  ULONG_PTR v1170; // r9
  unsigned int i15; // edx
  ULONG_PTR v1172; // rbx
  _DWORD *v1173; // r11
  const char *v1174; // rax
  int v1175; // r14d
  unsigned __int64 v1176; // r11
  unsigned __int64 v1177; // rbx
  unsigned int v1178; // r9d
  __int64 v1179; // rdx
  __int64 v1180; // rax
  __int64 v1181; // rbx
  ULONG_PTR v1182; // rcx
  unsigned int v1183; // edi
  unsigned __int64 v1184; // rdx
  __int64 v1185; // rax
  unsigned __int64 i16; // rax
  unsigned __int64 v1187; // rax
  ULONG_PTR v1188; // r10
  __int64 v1189; // rax
  unsigned int v1190; // edi
  const char *v1191; // r10
  unsigned __int64 v1192; // r9
  unsigned int i17; // edx
  unsigned __int64 v1194; // rbx
  _DWORD *v1195; // rax
  int v1196; // r11d
  unsigned __int64 v1197; // r14
  const char *i18; // rax
  unsigned __int64 v1199; // rbx
  unsigned int i19; // r9d
  __int64 v1201; // rdx
  __int64 v1202; // rax
  __int64 v1203; // rbx
  ULONG_PTR v1204; // rcx
  unsigned int v1205; // edi
  unsigned __int64 v1206; // rdx
  __int64 v1207; // rax
  unsigned __int64 i20; // rax
  unsigned __int64 v1209; // r10
  ULONG_PTR v1210; // rcx
  ULONG_PTR v1211; // rax
  __int64 v1212; // rax
  __int64 v1213; // rcx
  __int64 v1214; // rax
  __int64 v1215; // rdi
  __int64 i9; // rbx
  __int64 v1217; // rax
  __int64 v1218; // rdx
  int v1219; // eax
  PVOID v1220; // r12
  __int64 (__fastcall *v1221)(void *, char *); // rax
  ULONG_PTR v1222; // rax
  ULONG_PTR v1223; // r13
  int v1224; // r15d
  int v1225; // ecx
  int *v1226; // rax
  unsigned int v1227; // r11d
  int v1228; // edx
  unsigned int v1229; // edi
  int v1230; // r8d
  _BYTE *v1231; // r10
  unsigned int v1232; // r9d
  int *v1233; // rbx
  __int64 v1234; // rdi
  int v1235; // ecx
  int v1236; // ecx
  int v1237; // ecx
  int v1238; // ecx
  __int64 v1239; // rax
  int v1240; // eax
  unsigned __int64 v1241; // rcx
  __int64 v1242; // r9
  unsigned int v1243; // ebx
  __int64 v1244; // rdx
  int v1245; // r15d
  int v1246; // eax
  __int64 v1247; // rax
  __int64 v1248; // rdx
  __int64 (__fastcall *v1249)(ULONG_PTR, __int64, __int64, int *); // rax
  void *v1250; // rax
  void *v1251; // rdx
  __int64 (__fastcall *v1252)(ULONG_PTR, void *, __int64, int *); // rax
  __int64 (__fastcall *v1253)(ULONG_PTR); // rax
  __int64 v1254; // rbx
  __int64 v1255; // rax
  __int64 v1256; // r8
  __int64 v1257; // r13
  int v1258; // ebx
  unsigned int v1259; // eax
  __int64 v1260; // r15
  int v1261; // ecx
  unsigned int v1262; // eax
  __int64 v1263; // rdi
  int v1264; // edx
  unsigned __int64 v1265; // rcx
  int i21; // ecx
  int v1267; // ebx
  __int64 v1268; // r14
  __int64 v1269; // rdx
  _QWORD *v1270; // r13
  unsigned int *v1271; // rsi
  __int64 v1272; // r12
  int v1273; // ecx
  _QWORD *v1274; // r11
  _QWORD *v1275; // rax
  _QWORD *v1276; // r8
  const char *v1277; // rax
  int v1278; // r10d
  __int64 v1279; // r9
  unsigned __int64 v1280; // rbx
  unsigned int v1281; // edi
  __int64 v1282; // rdx
  __int64 v1283; // rax
  __int64 v1284; // rbx
  unsigned __int64 v1285; // rcx
  unsigned int v1286; // edx
  unsigned __int64 v1287; // rdi
  __int64 v1288; // rax
  unsigned __int64 i22; // rax
  _DWORD *v1290; // rbx
  ULONG_PTR v1291; // r12
  int v1292; // r13d
  int v1293; // eax
  int v1294; // ecx
  _BYTE *v1295; // rdi
  unsigned int v1296; // r8d
  _QWORD *v1297; // r14
  _DWORD *v1298; // r12
  int v1299; // ecx
  _QWORD *v1300; // rax
  __int64 v1301; // rdx
  _QWORD *v1302; // r9
  const char *v1303; // rax
  int v1304; // r11d
  __int64 v1305; // r15
  unsigned __int64 v1306; // rcx
  unsigned __int64 v1307; // rbx
  unsigned int v1308; // r10d
  __int64 v1309; // rdx
  __int64 v1310; // rax
  __int64 v1311; // rbx
  unsigned __int64 v1312; // rcx
  __int64 v1313; // r8
  unsigned __int64 v1314; // rdx
  __int64 v1315; // rax
  unsigned __int64 v1316; // rax
  int v1317; // ecx
  unsigned __int64 v1318; // rdx
  int v1319; // r12d
  __int64 v1320; // r15
  unsigned int v1321; // eax
  int v1322; // ecx
  unsigned int v1323; // eax
  __int64 v1324; // r8
  int v1325; // edx
  unsigned __int64 v1326; // rcx
  int i23; // ecx
  int v1328; // ebx
  _BYTE *v1329; // r11
  int v1330; // ecx
  _QWORD *v1331; // rax
  __int64 v1332; // rdx
  __int64 v1333; // r15
  char *v1334; // r12
  _QWORD *v1335; // rdi
  __int64 v1336; // r10
  const char *v1337; // rax
  unsigned __int64 v1338; // rbx
  unsigned int v1339; // r9d
  __int64 v1340; // rax
  __int64 v1341; // rbx
  unsigned __int128 v1342; // rax
  unsigned __int64 v1343; // rax
  __int64 v1344; // rax
  unsigned __int64 i24; // rax
  _DWORD *v1346; // rbx
  ULONG_PTR v1347; // r15
  __int64 v1348; // rdi
  __int64 v1349; // rax
  __int64 v1350; // rcx
  unsigned __int64 v1351; // rcx
  _QWORD *v1352; // rax
  _QWORD *v1353; // rax
  unsigned __int16 v1354; // dx
  unsigned int *v1355; // r12
  unsigned int v1356; // r9d
  char *v1357; // r8
  unsigned int i25; // ecx
  __int64 v1359; // rdx
  unsigned int v1360; // r13d
  unsigned int v1361; // ebx
  unsigned int v1362; // r13d
  unsigned int v1363; // eax
  __int64 v1364; // rax
  unsigned int v1365; // ebx
  unsigned int v1366; // r15d
  unsigned int v1367; // ebx
  unsigned int *v1368; // rax
  unsigned int *v1369; // rdi
  ULONG_PTR v1370; // r8
  unsigned int *v1371; // rax
  int v1372; // edi
  _DWORD *v1373; // r13
  int v1374; // ecx
  __int64 v1375; // r15
  unsigned int v1376; // eax
  _DWORD *v1377; // r11
  int v1378; // ecx
  unsigned int v1379; // eax
  __int64 v1380; // rdi
  int v1381; // edx
  unsigned __int64 v1382; // rcx
  int i26; // ecx
  int v1384; // ebx
  char *v1385; // rbx
  _QWORD *v1386; // rax
  int v1387; // ecx
  __int64 v1388; // rdx
  ULONG_PTR v1389; // rax
  unsigned __int64 v1390; // rcx
  unsigned __int64 i27; // rax
  ULONG_PTR v1392; // rdx
  unsigned int *v1393; // r10
  __int64 v1394; // rax
  unsigned int *v1395; // rbx
  unsigned int *v1396; // rdi
  ULONG_PTR v1397; // rcx
  _DWORD *v1398; // rax
  __int64 v1399; // rdx
  __int64 v1400; // rcx
  char *v1401; // r15
  int v1402; // r14d
  int v1403; // ecx
  __int16 v1404; // ax
  char *v1405; // rbx
  __int64 *v1406; // r8
  signed __int64 v1407; // rdi
  char *v1408; // r10
  char *v1409; // r11
  int v1410; // r9d
  __int64 v1411; // rdx
  __int64 v1412; // rax
  unsigned int v1413; // ebx
  __int64 *v1414; // rdi
  __int64 v1415; // rcx
  __int64 v1416; // rax
  __int64 v1417; // rdx
  __int64 v1418; // rax
  int v1419; // edi
  signed __int64 v1420; // rbx
  __int64 v1421; // rdx
  __int64 v1422; // rax
  int v1423; // edi
  signed __int64 v1424; // rbx
  __int64 v1425; // rdx
  __int64 v1426; // rax
  int v1427; // ecx
  ULONG_PTR v1428; // rdx
  unsigned int v1429; // ecx
  unsigned int v1430; // r8d
  ULONG_PTR v1431; // rbx
  unsigned int v1432; // ecx
  unsigned int v1433; // r15d
  unsigned int v1434; // r12d
  unsigned int v1435; // r13d
  __int64 v1436; // rax
  unsigned int v1437; // edi
  _QWORD *v1438; // r10
  ULONG_PTR v1439; // r9
  unsigned int i28; // edx
  ULONG_PTR v1441; // rbx
  _QWORD *v1442; // r8
  const char *v1443; // rax
  int v1444; // r11d
  __int64 v1445; // r14
  unsigned __int64 v1446; // rbx
  unsigned int v1447; // r9d
  __int64 v1448; // rdx
  __int64 v1449; // rax
  __int64 v1450; // rbx
  unsigned __int64 v1451; // rcx
  unsigned int v1452; // edi
  unsigned __int64 v1453; // rdx
  __int64 v1454; // rax
  unsigned __int64 i29; // rax
  int v1456; // r12d
  unsigned int *v1457; // r14
  unsigned int v1458; // r15d
  _BYTE *v1459; // rax
  char v1460; // bl
  __int64 v1461; // rbx
  ULONG_PTR v1462; // rdx
  _QWORD *v1463; // r11
  unsigned int v1464; // edi
  ULONG_PTR v1465; // r9
  unsigned int i30; // edx
  ULONG_PTR v1467; // rbx
  _DWORD *v1468; // r14
  _QWORD *v1469; // r8
  const char *v1470; // rax
  int v1471; // r10d
  unsigned __int64 v1472; // r14
  unsigned __int64 v1473; // rbx
  unsigned int v1474; // r9d
  __int64 v1475; // rdx
  __int64 v1476; // rax
  __int64 v1477; // rbx
  unsigned __int64 v1478; // rcx
  unsigned int v1479; // edi
  unsigned __int64 v1480; // rdx
  __int64 v1481; // rax
  unsigned __int64 i31; // rax
  unsigned int *v1483; // r10
  ULONG_PTR v1484; // r11
  __int64 v1485; // rax
  unsigned int v1486; // edi
  _QWORD *v1487; // r11
  unsigned __int64 v1488; // r9
  int v1489; // edx
  unsigned __int64 v1490; // rbx
  _DWORD *v1491; // rax
  _QWORD *v1492; // r8
  int v1493; // r10d
  unsigned __int64 v1494; // r14
  const char *v1495; // rax
  unsigned __int64 v1496; // rbx
  unsigned int i32; // r9d
  __int64 v1498; // rdx
  __int64 v1499; // rax
  __int64 v1500; // rbx
  unsigned __int128 v1501; // rax
  unsigned int v1502; // edi
  unsigned __int64 v1503; // rdx
  __int64 v1504; // rax
  unsigned __int64 i33; // rax
  ULONG_PTR v1506; // rcx
  unsigned __int64 v1507; // rax
  ULONG_PTR v1508; // rax
  bool v1509; // zf
  __int64 HalExtensionModuleFromLinks; // rcx
  __int64 v1511; // rax
  ULONG_PTR v1512; // r12
  __int64 (__fastcall *v1513)(ULONG_PTR, char *); // rax
  __int64 v1514; // rax
  ULONG_PTR v1515; // r13
  int v1516; // r15d
  int v1517; // ecx
  int *v1518; // rax
  unsigned int v1519; // r11d
  int v1520; // edx
  unsigned int v1521; // edi
  int v1522; // r8d
  _BYTE *v1523; // r10
  unsigned int v1524; // r9d
  int *v1525; // rbx
  __int64 v1526; // rdi
  int v1527; // ecx
  int v1528; // ecx
  int v1529; // ecx
  int v1530; // ecx
  __int64 v1531; // rax
  int v1532; // eax
  unsigned __int64 v1533; // rcx
  __int64 v1534; // r9
  __int64 v1535; // rdx
  int v1536; // eax
  __int64 v1537; // rax
  __int64 v1538; // rdx
  __int64 (__fastcall *v1539)(ULONG_PTR, __int64, __int64, int *); // rax
  ULONG_PTR v1540; // rax
  ULONG_PTR v1541; // rdx
  __int64 (__fastcall *v1542)(ULONG_PTR, ULONG_PTR, __int64, int *); // rax
  __int64 (__fastcall *v1543)(ULONG_PTR); // rax
  __int64 v1544; // rbx
  __int64 v1545; // rax
  __int64 v1546; // r15
  __int64 v1547; // r8
  unsigned int v1548; // eax
  int v1549; // ebx
  __int64 v1550; // rdi
  __int64 v1551; // rax
  int v1552; // ecx
  unsigned int v1553; // eax
  __int64 v1554; // r8
  int v1555; // edx
  unsigned __int64 v1556; // rcx
  int i34; // ecx
  int v1558; // ebx
  __int64 v1559; // r15
  _QWORD *v1560; // r13
  __int64 v1561; // rdx
  unsigned int *v1562; // rsi
  __int64 v1563; // r12
  int v1564; // ecx
  _QWORD *v1565; // r14
  _QWORD *v1566; // rax
  _QWORD *v1567; // r9
  const char *v1568; // rax
  int v1569; // r10d
  __int64 v1570; // r11
  unsigned __int64 v1571; // rbx
  unsigned int v1572; // r8d
  __int64 v1573; // rdx
  __int64 v1574; // rax
  __int64 v1575; // rbx
  unsigned __int64 v1576; // rcx
  unsigned int v1577; // edx
  unsigned __int64 v1578; // r8
  __int64 v1579; // rax
  unsigned __int64 i35; // rax
  _DWORD *v1581; // rbx
  ULONG_PTR v1582; // r15
  int v1583; // r13d
  int v1584; // eax
  int v1585; // ecx
  _BYTE *v1586; // rax
  unsigned int v1587; // edi
  const char *v1588; // r11
  _DWORD *v1589; // r12
  int v1590; // ecx
  _QWORD *v1591; // rax
  __int64 v1592; // rdx
  unsigned __int64 v1593; // r8
  const char *v1594; // rax
  __int64 v1595; // r9
  __int64 v1596; // r15
  unsigned __int64 v1597; // rcx
  unsigned __int64 v1598; // rbx
  unsigned int v1599; // r10d
  __int64 v1600; // rax
  __int64 v1601; // rbx
  unsigned __int128 v1602; // rax
  unsigned int v1603; // edi
  unsigned __int64 v1604; // rax
  __int64 v1605; // rax
  unsigned __int64 v1606; // rax
  int v1607; // ecx
  unsigned __int64 v1608; // rdx
  int v1609; // r12d
  __int64 v1610; // r13
  unsigned int v1611; // eax
  __int64 v1612; // r15
  int v1613; // ecx
  unsigned int v1614; // eax
  __int64 v1615; // rdi
  int v1616; // edx
  unsigned __int64 v1617; // rcx
  int i36; // ecx
  int v1619; // ebx
  __int64 v1620; // r11
  _QWORD *v1621; // rax
  int v1622; // ecx
  __int64 v1623; // rdx
  ULONG_PTR v1624; // r13
  _QWORD *v1625; // rdi
  __int64 v1626; // r12
  __int64 v1627; // r10
  const char *v1628; // rax
  unsigned __int64 v1629; // rbx
  __int64 v1630; // rdx
  __int64 v1631; // rax
  __int64 v1632; // rbx
  unsigned __int64 v1633; // rcx
  __int64 v1634; // rax
  unsigned __int64 i37; // rax
  ULONG_PTR v1636; // r15
  _DWORD *v1637; // rbx
  BOOL v1638; // ecx
  __int64 v1639; // rdi
  __int64 v1640; // rcx
  unsigned __int64 v1641; // rcx
  _QWORD *v1642; // rax
  _QWORD *v1643; // rax
  unsigned __int16 v1644; // dx
  unsigned int *v1645; // r12
  unsigned int v1646; // r9d
  ULONG_PTR v1647; // r8
  unsigned int i38; // ecx
  __int64 v1649; // rdx
  unsigned int v1650; // r13d
  unsigned int v1651; // ebx
  unsigned int v1652; // r13d
  unsigned int v1653; // eax
  __int64 v1654; // rax
  unsigned int v1655; // ebx
  unsigned int v1656; // r15d
  unsigned int v1657; // ebx
  unsigned int *v1658; // rax
  unsigned int *v1659; // rdi
  ULONG_PTR v1660; // r8
  unsigned int *v1661; // rax
  int v1662; // edi
  ULONG_PTR v1663; // r13
  int v1664; // ecx
  __int64 v1665; // r15
  unsigned int v1666; // eax
  ULONG_PTR v1667; // r8
  int v1668; // ecx
  unsigned int v1669; // eax
  __int64 v1670; // rdi
  int v1671; // edx
  unsigned __int64 v1672; // rcx
  int i39; // ecx
  int v1674; // ebx
  ULONG_PTR v1675; // rbx
  _QWORD *v1676; // rax
  int v1677; // ecx
  __int64 v1678; // rdx
  unsigned int *v1679; // r11
  unsigned __int64 v1680; // rcx
  unsigned __int64 i40; // rax
  ULONG_PTR v1682; // rdx
  unsigned int *v1683; // r10
  __int64 v1684; // rax
  unsigned int *v1685; // rbx
  __int64 v1686; // rcx
  _DWORD *v1687; // rax
  __int64 v1688; // rdx
  __int64 v1689; // rcx
  char *v1690; // r15
  int v1691; // r14d
  int v1692; // ecx
  __int16 v1693; // ax
  char *v1694; // rbx
  int v1695; // r9d
  __int64 *v1696; // r8
  signed __int64 v1697; // rdi
  char *v1698; // r10
  char *v1699; // r11
  __int64 v1700; // rdx
  __int64 v1701; // rax
  unsigned int v1702; // ebx
  __int64 *v1703; // rdi
  __int64 v1704; // rcx
  __int64 v1705; // rax
  __int64 v1706; // rdx
  __int64 v1707; // rax
  int v1708; // edi
  signed __int64 v1709; // rbx
  __int64 v1710; // rdx
  __int64 v1711; // rax
  int v1712; // edi
  signed __int64 v1713; // rbx
  __int64 v1714; // rdx
  __int64 v1715; // rax
  int v1716; // ecx
  ULONG_PTR v1717; // rdx
  unsigned int v1718; // ecx
  unsigned int v1719; // r9d
  unsigned int *v1720; // rbx
  unsigned int v1721; // ecx
  unsigned int v1722; // r15d
  unsigned int v1723; // r12d
  unsigned int v1724; // r13d
  __int64 v1725; // rax
  unsigned int v1726; // edi
  const char *v1727; // r11
  ULONG_PTR v1728; // r10
  unsigned int i41; // edx
  ULONG_PTR v1730; // rbx
  const char *v1731; // rax
  int v1732; // r9d
  unsigned __int64 v1733; // r14
  const char *i42; // r8
  unsigned __int64 v1735; // rbx
  unsigned int v1736; // r10d
  __int64 v1737; // rdx
  __int64 v1738; // rax
  __int64 v1739; // rbx
  unsigned __int64 v1740; // rcx
  unsigned int v1741; // edi
  unsigned __int64 v1742; // rdx
  __int64 v1743; // rax
  unsigned __int64 i43; // rax
  int v1745; // r12d
  unsigned int *v1746; // r14
  unsigned int v1747; // r15d
  _BYTE *v1748; // rax
  char v1749; // bl
  __int64 v1750; // rbx
  ULONG_PTR v1751; // rdx
  _QWORD *v1752; // r11
  unsigned int v1753; // edi
  ULONG_PTR v1754; // r10
  unsigned int i44; // edx
  ULONG_PTR v1756; // rbx
  ULONG_PTR v1757; // rax
  _QWORD *v1758; // r8
  int v1759; // r9d
  unsigned __int64 v1760; // r14
  const char *v1761; // rax
  unsigned __int64 v1762; // rbx
  unsigned int v1763; // r10d
  __int64 v1764; // rax
  __int64 v1765; // rbx
  unsigned __int128 v1766; // rax
  unsigned int v1767; // edi
  unsigned __int64 v1768; // rax
  __int64 v1769; // rax
  unsigned __int64 i45; // rax
  ULONG_PTR v1771; // rax
  ULONG_PTR v1772; // r11
  __int64 v1773; // rax
  unsigned int v1774; // edi
  _QWORD *v1775; // r11
  unsigned __int64 v1776; // r10
  unsigned int i46; // edx
  unsigned __int64 v1778; // rbx
  ULONG_PTR v1779; // rax
  _QWORD *v1780; // r8
  int v1781; // r9d
  unsigned __int64 v1782; // r14
  const char *v1783; // rax
  unsigned __int64 v1784; // rbx
  unsigned int v1785; // r10d
  __int64 v1786; // rax
  __int64 v1787; // rbx
  unsigned __int128 v1788; // rax
  unsigned int v1789; // edi
  unsigned __int64 v1790; // rax
  __int64 v1791; // rax
  unsigned __int64 i47; // rax
  ULONG_PTR v1793; // r10
  __int64 v1794; // rcx
  ULONG_PTR v1795; // rax
  unsigned __int64 v1796; // rcx
  unsigned __int128 v1797; // rax
  __int64 v1798; // rcx
  _DWORD *v1799; // rax
  int v1800; // ebx
  int v1801; // r9d
  __int64 v1802; // r13
  __int64 v1803; // r8
  _QWORD *v1804; // r12
  unsigned int v1805; // r15d
  unsigned int v1806; // eax
  _BYTE *v1807; // rdi
  int v1808; // ecx
  unsigned int v1809; // eax
  __int64 v1810; // rbx
  int v1811; // edx
  unsigned __int64 v1812; // rcx
  int i48; // ecx
  int v1814; // r14d
  _BYTE *v1815; // r14
  int v1816; // ecx
  _QWORD *v1817; // rax
  __int64 v1818; // rdx
  _QWORD *v1819; // r8
  const char *v1820; // rax
  int v1821; // r9d
  __int64 v1822; // r11
  unsigned __int64 v1823; // rcx
  unsigned __int64 v1824; // rbx
  unsigned int i49; // r10d
  __int64 v1826; // rdx
  __int64 v1827; // rax
  __int64 v1828; // rbx
  unsigned __int64 v1829; // rcx
  unsigned int v1830; // edx
  unsigned __int64 v1831; // r10
  __int64 v1832; // rax
  unsigned __int64 i50; // rax
  int v1834; // r10d
  int v1835; // r9d
  __int64 v1836; // r14
  __int64 v1837; // r8
  unsigned int v1838; // eax
  _BYTE *v1839; // rbx
  int v1840; // ecx
  unsigned int v1841; // eax
  __int64 v1842; // r8
  int v1843; // edx
  unsigned __int64 v1844; // rcx
  int i51; // ecx
  int v1846; // edi
  _QWORD *v1847; // r13
  _BYTE *v1848; // r14
  unsigned int *v1849; // rsi
  __int64 v1850; // r12
  int v1851; // ecx
  _QWORD *v1852; // r15
  _QWORD *v1853; // rax
  __int64 v1854; // rdx
  _QWORD *v1855; // r8
  int v1856; // r9d
  const char *v1857; // rax
  __int64 v1858; // r11
  unsigned __int64 v1859; // rdi
  unsigned int v1860; // r10d
  __int64 v1861; // rax
  __int64 v1862; // rdi
  unsigned __int128 v1863; // rax
  unsigned int v1864; // edx
  unsigned __int64 v1865; // rax
  __int64 v1866; // rax
  unsigned __int64 i52; // rax
  _BYTE *v1868; // rax
  int v1869; // ecx
  int v1870; // r13d
  int v1871; // eax
  unsigned int v1872; // edi
  __int64 v1873; // r14
  unsigned int v1874; // ecx
  __int64 v1875; // rdi
  int v1876; // ecx
  unsigned int v1877; // eax
  __int64 v1878; // r8
  int v1879; // edx
  unsigned __int64 v1880; // rcx
  int i53; // ecx
  int v1882; // ebx
  __int64 v1883; // rdx
  int v1884; // ecx
  _QWORD *v1885; // rax
  __int64 v1886; // rbx
  unsigned __int64 v1887; // rcx
  unsigned __int64 i54; // rax
  unsigned int v1889; // r12d
  __int64 v1890; // r15
  ULONG_PTR v1891; // r14
  unsigned __int8 *v1892; // r8
  const char *v1893; // rax
  unsigned __int64 v1894; // rdx
  int v1895; // r9d
  __int64 v1896; // rax
  unsigned __int64 i55; // rax
  __int64 v1898; // r14
  unsigned int v1899; // eax
  _BYTE *v1900; // rdi
  int v1901; // ecx
  unsigned int v1902; // eax
  __int64 v1903; // r8
  int v1904; // edx
  unsigned __int64 v1905; // rcx
  int i56; // ecx
  int v1907; // ebx
  _BYTE *v1908; // r9
  _QWORD *v1909; // rax
  int v1910; // ecx
  __int64 v1911; // rdx
  ULONG_PTR *v1912; // rbx
  int v1913; // ecx
  unsigned __int64 v1914; // rdx
  __int64 v1915; // r8
  __int64 v1916; // r10
  __int64 v1917; // rax
  unsigned __int64 i57; // rax
  int v1919; // r14d
  _BYTE *v1920; // rbx
  ULONG_PTR v1921; // r15
  __int64 v1922; // rcx
  unsigned __int8 v1923; // r12
  unsigned int *v1924; // rcx
  unsigned __int64 v1925; // rdx
  int v1926; // ecx
  _QWORD *v1927; // rax
  __int64 v1928; // rdx
  __int64 v1929; // r14
  unsigned int v1930; // eax
  _BYTE *v1931; // rbx
  int v1932; // ecx
  unsigned int v1933; // eax
  __int64 v1934; // r8
  int v1935; // edx
  unsigned __int64 v1936; // rcx
  int i58; // ecx
  int v1938; // edi
  _BYTE *v1939; // rdx
  int v1940; // ecx
  _QWORD *v1941; // rax
  __int64 v1942; // rdi
  unsigned __int64 v1943; // rcx
  unsigned __int64 i59; // rax
  __int64 v1945; // r14
  unsigned int v1946; // eax
  _BYTE *v1947; // rdi
  int v1948; // ecx
  unsigned int v1949; // eax
  __int64 v1950; // r8
  int v1951; // edx
  unsigned __int64 v1952; // rcx
  int i60; // ecx
  int v1954; // ebx
  _BYTE *v1955; // rdx
  int v1956; // ecx
  _QWORD *v1957; // rax
  __int64 v1958; // rbx
  unsigned __int64 v1959; // rcx
  unsigned __int64 i61; // rax
  __int64 v1961; // r14
  unsigned int v1962; // eax
  _BYTE *v1963; // rbx
  int v1964; // ecx
  unsigned int v1965; // eax
  __int64 v1966; // r8
  int v1967; // edx
  unsigned __int64 v1968; // rcx
  int i62; // ecx
  int v1970; // edi
  _BYTE *v1971; // rdx
  int v1972; // ecx
  _QWORD *v1973; // rax
  __int64 v1974; // rdi
  unsigned __int64 v1975; // rcx
  unsigned __int64 i63; // rax
  unsigned int v1977; // r14d
  __int64 v1978; // r15
  unsigned int v1979; // r14d
  unsigned int v1980; // eax
  _BYTE *v1981; // rdi
  int v1982; // ecx
  unsigned int v1983; // eax
  __int64 v1984; // r8
  int v1985; // edx
  unsigned __int64 v1986; // rcx
  int i64; // ecx
  int v1988; // ebx
  _DWORD *v1989; // r15
  int v1990; // ecx
  _QWORD *v1991; // rax
  __int64 v1992; // rdx
  __int64 *v1993; // r8
  const char *v1994; // rax
  int v1995; // r9d
  __int64 v1996; // r11
  __int64 *v1997; // rcx
  unsigned __int64 v1998; // rbx
  unsigned int v1999; // r10d
  __int64 v2000; // rax
  __int64 v2001; // rbx
  unsigned __int128 v2002; // rax
  unsigned int v2003; // edx
  unsigned __int64 v2004; // rax
  __int64 v2005; // rax
  unsigned __int64 i65; // rax
  __int64 v2007; // r15
  __int64 v2008; // r13
  _QWORD *v2009; // r12
  unsigned int v2010; // eax
  __int64 v2011; // r14
  int v2012; // ecx
  unsigned int v2013; // eax
  __int64 v2014; // rbx
  int v2015; // edx
  unsigned __int64 v2016; // rcx
  int i66; // ecx
  int v2018; // edi
  _DWORD *v2019; // r15
  _QWORD *v2020; // rax
  int v2021; // ecx
  __int64 v2022; // rdx
  _QWORD *v2023; // rdi
  int v2024; // r8d
  const char *v2025; // rax
  __int64 v2026; // r10
  unsigned __int64 v2027; // rbx
  unsigned int v2028; // r9d
  __int64 v2029; // rax
  __int64 v2030; // rbx
  unsigned __int128 v2031; // rax
  unsigned int v2032; // edx
  unsigned __int64 v2033; // rax
  __int64 v2034; // rax
  unsigned __int64 i67; // rax
  __int64 v2036; // rcx
  int v2037; // r12d
  int v2038; // r13d
  __int64 v2039; // r14
  __int64 v2040; // r8
  unsigned int v2041; // r15d
  unsigned int v2042; // eax
  _BYTE *v2043; // rbx
  int v2044; // ecx
  unsigned int v2045; // eax
  __int64 v2046; // r8
  int v2047; // edx
  unsigned __int64 v2048; // rcx
  int i68; // ecx
  int v2050; // edi
  _DWORD *v2051; // r14
  _QWORD *v2052; // rax
  int v2053; // ecx
  __int64 v2054; // rdx
  __int64 *v2055; // r8
  const char *v2056; // rax
  int v2057; // r9d
  __int64 v2058; // r11
  __int64 *v2059; // rcx
  unsigned __int64 v2060; // rdi
  unsigned int v2061; // r10d
  __int64 v2062; // rax
  __int64 v2063; // rdi
  unsigned __int128 v2064; // rax
  unsigned int v2065; // edx
  unsigned __int64 v2066; // rax
  __int64 v2067; // rax
  unsigned __int64 i69; // rax
  unsigned int v2069; // edx
  unsigned int v2070; // r10d
  __int64 v2071; // r12
  __int64 v2072; // r13
  unsigned __int16 v2073; // cx
  __int64 v2074; // r15
  __int64 v2075; // r8
  _QWORD *v2076; // r14
  unsigned int v2077; // ecx
  _BYTE *v2078; // rdi
  int v2079; // ecx
  unsigned int v2080; // eax
  __int64 v2081; // r8
  int v2082; // edx
  unsigned __int64 v2083; // rcx
  int i70; // ecx
  int v2085; // ebx
  ULONG_PTR v2086; // r15
  _QWORD *v2087; // rax
  int v2088; // ecx
  __int64 v2089; // rdx
  _QWORD *v2090; // r8
  const char *v2091; // rax
  int v2092; // r9d
  __int64 v2093; // r11
  unsigned __int64 v2094; // rcx
  unsigned int v2095; // r10d
  unsigned __int64 v2096; // rbx
  __int64 v2097; // rdx
  __int64 v2098; // rax
  __int64 v2099; // rbx
  unsigned __int64 v2100; // rcx
  unsigned int v2101; // r11d
  unsigned int v2102; // edx
  unsigned __int64 v2103; // r10
  __int64 v2104; // rax
  unsigned __int64 i71; // rax
  __int16 v2106; // dx
  int v2107; // r9d
  __int64 v2108; // r10
  __int64 v2109; // rcx
  const wchar_t *v2110; // rcx
  ULONG_PTR v2111; // r8
  _QWORD *v2112; // rdx
  char v2113; // al
  unsigned int v2114; // edx
  char *v2115; // r8
  _QWORD *v2116; // rcx
  unsigned __int64 v2117; // r9
  signed __int64 v2118; // r8
  __int64 v2119; // r14
  __int64 v2120; // r12
  _QWORD *v2121; // r15
  unsigned int v2122; // eax
  int v2123; // ecx
  unsigned int v2124; // eax
  __int64 v2125; // r8
  int v2126; // edx
  unsigned __int64 v2127; // rcx
  int i72; // ecx
  int v2129; // edi
  _DWORD *v2130; // r14
  int v2131; // ecx
  _QWORD *v2132; // rax
  __int64 v2133; // rdx
  _QWORD *v2134; // r8
  int v2135; // r9d
  const char *v2136; // rax
  __int64 v2137; // r11
  unsigned __int64 v2138; // rdi
  unsigned int v2139; // r10d
  __int64 v2140; // rax
  __int64 v2141; // rdi
  unsigned __int64 v2142; // rcx
  unsigned int v2143; // edx
  unsigned __int64 v2144; // rax
  __int64 v2145; // rax
  unsigned __int64 i73; // rax
  __int64 v2147; // r14
  unsigned int v2148; // eax
  _BYTE *v2149; // rdi
  int v2150; // ecx
  unsigned int v2151; // eax
  __int64 v2152; // r8
  int v2153; // edx
  unsigned __int64 v2154; // rcx
  int i74; // ecx
  int v2156; // ebx
  _BYTE *v2157; // rdx
  int v2158; // ecx
  _QWORD *v2159; // rax
  __int64 v2160; // rbx
  unsigned __int64 v2161; // rcx
  unsigned __int64 i75; // rax
  __int64 v2163; // r15
  __int64 v2164; // rcx
  const char *v2165; // r11
  const char *v2166; // rcx
  const char *v2167; // r8
  const char *v2168; // rax
  int v2169; // r9d
  __int64 v2170; // r14
  __int64 v2171; // rbx
  unsigned int v2172; // r10d
  __int64 v2173; // rdx
  __int64 v2174; // rax
  __int64 v2175; // rbx
  unsigned __int64 v2176; // rcx
  unsigned int v2177; // r15d
  unsigned __int64 v2178; // rdx
  __int64 v2179; // rax
  __int64 v2180; // r13
  __int64 v2181; // r8
  unsigned int v2182; // r12d
  unsigned int v2183; // r14d
  unsigned int v2184; // eax
  _BYTE *v2185; // rbx
  int v2186; // ecx
  unsigned int v2187; // eax
  __int64 v2188; // r8
  int v2189; // edx
  unsigned __int64 v2190; // rcx
  int i76; // ecx
  int v2192; // edi
  _BYTE *v2193; // rdx
  int v2194; // ecx
  _QWORD *v2195; // rax
  __int64 v2196; // rdi
  unsigned __int64 v2197; // rcx
  unsigned __int64 i77; // rax
  _QWORD *v2199; // r8
  unsigned __int64 v2200; // rcx
  const char *v2201; // rax
  int v2202; // r9d
  __int64 v2203; // r15
  __int64 v2204; // rdi
  unsigned int i78; // r11d
  __int64 v2206; // rdx
  __int64 v2207; // rax
  __int64 v2208; // rdi
  __int64 v2209; // rcx
  unsigned int v2210; // r14d
  unsigned __int64 v2211; // rdx
  __int64 v2212; // rax
  __int64 v2213; // r14
  unsigned int v2214; // eax
  __int64 v2215; // rdi
  int v2216; // ecx
  unsigned int v2217; // eax
  __int64 v2218; // r8
  int v2219; // edx
  unsigned __int64 v2220; // rcx
  int i79; // ecx
  int v2222; // ebx
  __int64 v2223; // rdx
  int v2224; // ecx
  _QWORD *v2225; // rax
  __int64 v2226; // rbx
  unsigned __int64 v2227; // rcx
  unsigned __int64 i80; // rax
  __int64 v2229; // rcx
  _QWORD *v2230; // r10
  _QWORD *v2231; // r8
  unsigned __int64 v2232; // rcx
  const char *v2233; // rax
  int v2234; // r9d
  __int64 v2235; // r14
  __int64 v2236; // rbx
  unsigned int i81; // r11d
  __int64 v2238; // rdx
  __int64 v2239; // rax
  __int64 *v2240; // r8
  __int64 v2241; // rbx
  unsigned __int64 v2242; // rcx
  unsigned int v2243; // r12d
  unsigned __int64 v2244; // rdx
  __int64 v2245; // rax
  unsigned int *v2246; // r15
  __int64 v2247; // r14
  unsigned __int64 v2248; // rcx
  unsigned __int128 v2249; // rax
  unsigned __int64 v2250; // rcx
  int v2251; // ecx
  int v2252; // ecx
  ULONG v2253; // edi
  int v2254; // ecx
  int v2255; // ecx
  int v2256; // ecx
  unsigned __int64 v2257; // rcx
  __int64 v2258; // rax
  unsigned int v2259; // edi
  _QWORD *v2260; // r13
  unsigned __int64 v2261; // rcx
  unsigned __int128 v2262; // rax
  unsigned __int64 v2263; // rcx
  int v2264; // ecx
  int v2265; // ecx
  ULONG v2266; // edi
  int v2267; // ecx
  int v2268; // ecx
  int v2269; // ecx
  unsigned __int64 v2270; // rcx
  __int64 v2271; // rax
  unsigned int v2272; // edi
  __int64 v2273; // rdx
  _DWORD *v2274; // r12
  void *v2275; // rcx
  int v2276; // ecx
  unsigned int v2277; // ebx
  int v2278; // r9d
  __int64 v2279; // rax
  __int64 v2280; // rbx
  __int64 v2281; // rbx
  __int64 v2282; // rbx
  unsigned int v2283; // r8d
  __int64 v2284; // rdi
  __int64 v2285; // rdi
  _QWORD *v2286; // rax
  unsigned int v2287; // r8d
  __int64 v2288; // rdi
  __int64 v2289; // rdi
  _QWORD *v2290; // rax
  unsigned int v2291; // r8d
  __int64 v2292; // rdi
  __int64 v2293; // rdi
  unsigned int v2294; // r8d
  __int64 v2295; // rdi
  __int64 v2296; // rdi
  _BYTE *v2297; // r14
  int v2298; // r10d
  int v2299; // r9d
  __int64 v2300; // r15
  __int64 v2301; // r8
  unsigned int v2302; // eax
  _BYTE *v2303; // rdi
  int v2304; // ecx
  unsigned int v2305; // eax
  __int64 v2306; // r8
  int v2307; // edx
  unsigned __int64 v2308; // rcx
  int i82; // ecx
  int v2310; // r14d
  _BYTE *v2311; // r14
  _QWORD *v2312; // rsi
  _DWORD *v2313; // rbx
  __int64 v2314; // r12
  int v2315; // ecx
  _QWORD *v2316; // r15
  _QWORD *v2317; // rax
  __int64 v2318; // rdx
  _QWORD *v2319; // r9
  int v2320; // r10d
  const char *v2321; // rax
  __int64 v2322; // r13
  unsigned __int64 v2323; // r8
  unsigned int v2324; // r11d
  __int64 v2325; // rdx
  __int64 v2326; // rax
  __int64 v2327; // r8
  unsigned __int64 v2328; // rcx
  unsigned __int64 v2329; // r11
  __int64 v2330; // rax
  unsigned __int64 i83; // rax
  ULONG v2332; // edx
  int v2333; // ebx
  int v2334; // r9d
  __int64 v2335; // r15
  _QWORD *v2336; // r12
  __int64 v2337; // r13
  __int64 v2338; // r8
  unsigned int v2339; // eax
  __int64 v2340; // r14
  int v2341; // ecx
  unsigned int v2342; // eax
  __int64 v2343; // rbx
  int v2344; // edx
  unsigned __int64 v2345; // rcx
  int i84; // ecx
  int v2347; // edi
  __int64 v2348; // r15
  _QWORD *v2349; // rax
  int v2350; // ecx
  __int64 v2351; // rdx
  _QWORD *v2352; // rdi
  int v2353; // r8d
  const char *v2354; // rax
  __int64 v2355; // r10
  unsigned __int64 v2356; // rbx
  unsigned int i85; // r9d
  __int64 v2358; // rdx
  __int64 v2359; // rax
  __int64 v2360; // rbx
  unsigned __int64 v2361; // rcx
  unsigned int v2362; // edx
  unsigned __int64 v2363; // r9
  __int64 v2364; // rax
  unsigned __int64 i86; // rax
  unsigned int v2366; // ebx
  int v2382; // eax
  int v2383; // r10d
  __int64 v2384; // r15
  __int64 v2385; // r9
  __int64 v2386; // r8
  __int64 v2387; // rax
  unsigned int v2388; // ebx
  unsigned int v2389; // eax
  unsigned int *v2390; // r14
  int v2391; // ecx
  unsigned int v2392; // eax
  __int64 v2393; // rbx
  unsigned int v2394; // edx
  unsigned __int64 v2395; // rcx
  unsigned int i87; // ecx
  unsigned int v2397; // edi
  _QWORD *v2398; // r11
  _BYTE *v2399; // r15
  _DWORD *v2400; // rsi
  __int64 v2401; // r13
  int v2402; // ecx
  _QWORD *v2403; // r12
  _QWORD *v2404; // rax
  __int64 v2405; // rdx
  _QWORD *v2406; // rdi
  __int64 v2407; // r8
  const char *v2408; // rax
  __int64 v2409; // r10
  unsigned __int64 v2410; // rbx
  unsigned int v2411; // r9d
  __int64 v2412; // rax
  __int64 v2413; // rbx
  unsigned __int64 v2414; // rcx
  __int64 v2415; // rdx
  unsigned __int64 v2416; // rax
  __int64 v2417; // rax
  unsigned __int64 i88; // rax
  unsigned int v2419; // r13d
  _BYTE *v2420; // rcx
  int v2421; // eax
  unsigned int v2422; // r8d
  unsigned __int64 v2423; // rcx
  unsigned __int128 v2424; // rax
  unsigned __int64 v2425; // rcx
  int v2426; // ecx
  int v2427; // ecx
  ULONG v2428; // edi
  int v2429; // ecx
  int v2430; // ecx
  int v2431; // ecx
  unsigned __int64 v2432; // rcx
  __int64 v2433; // rax
  unsigned int v2434; // edi
  __int64 v2435; // r15
  _QWORD *v2436; // r12
  unsigned __int64 v2437; // rcx
  unsigned __int128 v2438; // rax
  unsigned __int64 v2439; // rcx
  int v2440; // ecx
  int v2441; // ecx
  ULONG v2442; // edi
  int v2443; // ecx
  int v2444; // ecx
  int v2445; // ecx
  unsigned __int64 v2446; // rcx
  __int64 v2447; // rax
  unsigned int v2448; // edi
  _DWORD *v2449; // r15
  unsigned int v2450; // edi
  __int64 v2451; // rbx
  unsigned int v2452; // r9d
  int v2453; // ebx
  __int64 v2454; // r12
  __int64 v2455; // r8
  unsigned int v2456; // eax
  __int64 v2457; // rdi
  unsigned int v2458; // ecx
  unsigned int v2459; // eax
  __int64 v2460; // rbx
  unsigned int v2461; // edx
  unsigned __int64 v2462; // rcx
  unsigned int i89; // ecx
  int v2464; // r14d
  __int64 v2465; // r14
  _QWORD *v2466; // rsi
  _DWORD *v2467; // r13
  __int64 v2468; // r12
  int v2469; // ecx
  _QWORD *v2470; // r15
  _QWORD *v2471; // rax
  __int64 v2472; // rdx
  _QWORD *v2473; // r8
  int v2474; // r9d
  const char *v2475; // rax
  __int64 v2476; // r11
  unsigned __int64 v2477; // rbx
  unsigned int v2478; // r10d
  __int64 v2479; // rdx
  __int64 v2480; // rax
  __int64 v2481; // rbx
  unsigned __int64 v2482; // rcx
  unsigned __int64 v2483; // r10
  __int64 v2484; // rax
  unsigned __int64 i90; // rax
  ULONG v2486; // edx
  __int64 v2487; // r15
  unsigned int v2488; // eax
  _BYTE *v2489; // rbx
  unsigned int v2490; // ecx
  unsigned int v2491; // eax
  __int64 v2492; // rdi
  unsigned int v2493; // edx
  unsigned __int64 v2494; // rcx
  unsigned int i91; // ecx
  int v2496; // r14d
  _BYTE *v2497; // rdx
  int v2498; // ecx
  _QWORD *v2499; // rax
  __int64 v2500; // rdi
  unsigned __int64 v2501; // rcx
  unsigned __int64 i92; // rax
  __int64 v2503; // r15
  unsigned int v2504; // eax
  int v2505; // ecx
  unsigned int v2506; // eax
  __int64 v2507; // rdi
  unsigned int v2508; // edx
  unsigned __int64 v2509; // rcx
  unsigned int i93; // ecx
  unsigned int v2511; // ebx
  _BYTE *v2512; // rdx
  int v2513; // ecx
  _QWORD *v2514; // rax
  __int64 v2515; // rbx
  unsigned __int64 v2516; // rcx
  unsigned __int64 i94; // rax
  unsigned int v2518; // r13d
  __int64 (__fastcall *v2519)(); // r10
  __int64 v2520; // r15
  __int64 v2521; // r8
  int v2522; // r12d
  unsigned int v2523; // eax
  _BYTE *v2524; // rdi
  unsigned int v2525; // ecx
  unsigned int v2526; // eax
  __int64 v2527; // rbx
  unsigned int v2528; // edx
  unsigned __int64 v2529; // rcx
  unsigned int i95; // ecx
  int v2531; // r14d
  _BYTE *v2532; // r14
  _QWORD *v2533; // rax
  int v2534; // ecx
  __int64 v2535; // rdx
  char *v2536; // r9
  int v2537; // r8d
  const char *v2538; // rax
  __int64 i96; // r11
  int v2540; // r10d
  unsigned __int64 v2541; // rbx
  __int64 v2542; // rax
  __int64 v2543; // rbx
  signed __int64 v2544; // rcx
  unsigned __int64 i97; // rax
  __int64 Prcb; // r8
  __int64 v2547; // rcx
  char *v2548; // rax
  unsigned int v2554; // edx
  int v2555; // eax
  __int64 v2556; // rcx
  __int64 v2557; // rdx
  char v2558; // al
  __int64 v2559; // rcx
  unsigned int v2560; // ecx
  void (__fastcall *v2561)(_BYTE *); // r12
  _QWORD *v2562; // rbx
  int *v2563; // rdx
  __int64 v2564; // r8
  __int64 v2565; // rcx
  int v2566; // eax
  int v2567; // eax
  __int64 v2568; // r15
  _QWORD *v2569; // r14
  unsigned int v2570; // eax
  _BYTE *v2571; // rbx
  int v2572; // ecx
  unsigned int v2573; // eax
  __int64 v2574; // r8
  int v2575; // edx
  unsigned __int64 v2576; // rcx
  int i98; // ecx
  int v2578; // edi
  _BYTE *v2579; // r8
  int v2580; // ecx
  _QWORD *v2581; // rax
  __int64 v2582; // rdx
  const char *v2583; // rax
  int v2584; // r9d
  unsigned __int64 v2585; // rdx
  int v2586; // edi
  __int64 v2587; // rax
  __int64 v2588; // rax
  unsigned __int64 i99; // rax
  PVOID v2590; // r12
  unsigned int v2591; // r14d
  __int64 v2592; // r13
  _QWORD *v2593; // r15
  unsigned int v2594; // eax
  _BYTE *v2595; // rdi
  int v2596; // ecx
  unsigned int v2597; // eax
  __int64 v2598; // r8
  int v2599; // edx
  unsigned __int64 v2600; // rcx
  int i100; // ecx
  int v2602; // ebx
  _BYTE *v2603; // r14
  int v2604; // ecx
  _QWORD *v2605; // rax
  int v2606; // r10d
  __int64 v2607; // rdx
  _QWORD *v2608; // r8
  const char *v2609; // rax
  int v2610; // r9d
  __int64 v2611; // r11
  unsigned __int64 v2612; // rbx
  __int64 v2613; // rax
  __int64 v2614; // rbx
  unsigned __int128 v2615; // rax
  int v2616; // edx
  __int64 v2617; // rax
  __int64 v2618; // rax
  unsigned __int64 i101; // rax
  _QWORD *v2620; // rdx
  _QWORD *v2621; // rdx
  int v2622; // r8d
  const char *v2623; // rax
  unsigned __int64 v2624; // r14
  int v2625; // ebx
  __int64 v2626; // rax
  __int64 v2627; // rax
  unsigned __int64 i102; // rax
  unsigned int v2629; // r12d
  __int64 v2630; // r15
  __int64 v2631; // r14
  unsigned int v2632; // eax
  _BYTE *v2633; // rbx
  int v2634; // ecx
  unsigned int v2635; // eax
  __int64 v2636; // r8
  int v2637; // edx
  unsigned __int64 v2638; // rcx
  int i103; // ecx
  int v2640; // edi
  _BYTE *v2641; // rdx
  int v2642; // ecx
  _QWORD *v2643; // rax
  __int64 v2644; // rdi
  unsigned __int64 v2645; // rcx
  unsigned __int64 i104; // rax
  _BYTE *v2647; // r14
  __int64 v2648; // r9
  __int64 v2649; // r14
  unsigned int *v2650; // rdi
  __int64 v2651; // r8
  unsigned int v2652; // ecx
  unsigned __int64 v2653; // rax
  __int64 v2654; // r15
  unsigned int v2655; // eax
  _BYTE *v2656; // r14
  int v2657; // ecx
  unsigned int v2658; // eax
  __int64 v2659; // rdi
  int v2660; // edx
  unsigned __int64 v2661; // rcx
  int i105; // ecx
  int v2663; // ebx
  _BYTE *v2664; // rdx
  int v2665; // ecx
  _QWORD *v2666; // rax
  __int64 v2667; // rbx
  unsigned __int64 v2668; // rcx
  unsigned __int64 i106; // rax
  unsigned __int64 v2670; // rbx
  __int64 v2671; // r15
  unsigned int v2672; // eax
  _BYTE *v2673; // rdi
  int v2674; // ecx
  unsigned int v2675; // eax
  __int64 v2676; // rbx
  int v2677; // edx
  unsigned __int64 v2678; // rcx
  int i107; // ecx
  int v2680; // r14d
  _BYTE *v2681; // rdx
  int v2682; // ecx
  _QWORD *v2683; // rax
  __int64 v2684; // rbx
  unsigned __int64 v2685; // rcx
  unsigned __int64 i108; // rax
  unsigned __int64 v2687; // rbx
  ULONG64 EnabledExtendedFeatures; // rax
  __int64 v2689; // r8
  __int64 v2690; // r9
  __int64 v2691; // r15
  __int64 v2692; // r8
  unsigned int v2693; // eax
  __int64 v2694; // r14
  int v2695; // ecx
  unsigned int v2696; // eax
  __int64 v2697; // rbx
  int v2698; // edx
  unsigned __int64 v2699; // rcx
  int i109; // ecx
  int v2701; // edi
  __int64 v2702; // rdx
  int v2703; // ecx
  _QWORD *v2704; // rax
  __int64 v2705; // rbx
  unsigned __int64 v2706; // rcx
  unsigned __int64 i110; // rax
  __int64 v2708; // rax
  __int64 v2709; // rdx
  __int64 v2710; // rbx
  __int64 v2711; // rbx
  int v2712; // r12d
  unsigned __int64 v2713; // rax
  int v2714; // r15d
  unsigned __int64 v2715; // rax
  __int64 v2716; // r14
  unsigned int v2717; // r12d
  unsigned int v2718; // r15d
  unsigned int v2719; // eax
  _BYTE *v2720; // rbx
  int v2721; // ecx
  unsigned int v2722; // eax
  __int64 v2723; // r8
  int v2724; // edx
  unsigned __int64 v2725; // rcx
  int i111; // ecx
  int v2727; // edi
  _BYTE *v2728; // rdx
  int v2729; // ecx
  _QWORD *v2730; // rax
  __int64 v2731; // rdi
  unsigned __int64 v2732; // rcx
  unsigned __int64 i112; // rax
  int v2734; // edx
  __int64 v2735; // rcx
  char *v2736; // rcx
  int v2737; // r13d
  const char *v2738; // r14
  __int64 v2739; // r15
  int v2740; // r12d
  unsigned int v2741; // eax
  _BYTE *v2742; // rdi
  int v2743; // ecx
  unsigned int v2744; // eax
  __int64 v2745; // r8
  int v2746; // edx
  unsigned __int64 v2747; // rcx
  int i113; // ecx
  int v2749; // ebx
  _BYTE *v2750; // rbx
  _QWORD *v2751; // rax
  int v2752; // ecx
  __int64 v2753; // rdx
  const char *i114; // rdx
  unsigned __int64 v2755; // rax
  unsigned __int64 i115; // rcx
  int v2757; // r12d
  const char *v2758; // r14
  __int64 v2759; // r15
  int v2760; // r13d
  unsigned int v2761; // eax
  _BYTE *v2762; // rbx
  int v2763; // ecx
  unsigned int v2764; // eax
  __int64 v2765; // r8
  int v2766; // edx
  unsigned __int64 v2767; // rcx
  int i116; // ecx
  int v2769; // edi
  _BYTE *v2770; // rdi
  _QWORD *v2771; // rax
  int v2772; // ecx
  __int64 v2773; // rdx
  const char *i117; // rdx
  unsigned __int64 v2775; // rax
  unsigned __int64 i118; // rcx
  int v2777; // r15d
  __int64 v2778; // r14
  int v2779; // r12d
  unsigned int v2780; // eax
  _BYTE *v2781; // rdi
  int v2782; // ecx
  unsigned int v2783; // eax
  __int64 v2784; // r8
  int v2785; // edx
  unsigned __int64 v2786; // rcx
  int i119; // ecx
  int v2788; // ebx
  _BYTE *v2789; // rbx
  _QWORD *v2790; // rax
  int v2791; // ecx
  __int64 v2792; // rdx
  const char *v2793; // r14
  const char *v2794; // r13
  const char *v2795; // rax
  int v2796; // ecx
  __int64 v2797; // rdx
  unsigned __int64 v2798; // rax
  unsigned __int64 i120; // rcx
  int v2800; // r15d
  __int64 v2801; // r14
  int v2802; // r12d
  unsigned int v2803; // eax
  _BYTE *v2804; // rbx
  int v2805; // ecx
  unsigned int v2806; // eax
  __int64 v2807; // r8
  int v2808; // edx
  unsigned __int64 v2809; // rcx
  int i121; // ecx
  int v2811; // edi
  _BYTE *v2812; // rdi
  _QWORD *v2813; // rax
  int v2814; // ecx
  __int64 v2815; // rdx
  const char *i122; // rax
  unsigned __int64 v2817; // rax
  unsigned __int64 i123; // rcx
  int v2819; // r9d
  _QWORD *v2820; // r12
  __int64 v2821; // r8
  __int64 v2822; // r14
  int v2823; // r15d
  unsigned int v2824; // eax
  int v2825; // ecx
  unsigned int v2826; // eax
  __int64 v2827; // r8
  int v2828; // edx
  unsigned __int64 v2829; // rcx
  int i124; // ecx
  int v2831; // ebx
  _BYTE *v2832; // r14
  _QWORD *v2833; // rax
  int v2834; // ecx
  __int64 v2835; // rdx
  const char *v2836; // rax
  int v2837; // r9d
  unsigned __int64 v2838; // rdx
  int v2839; // ebx
  __int64 v2840; // r8
  __int64 v2841; // rax
  unsigned __int64 i125; // rax
  __int64 v2843; // r15
  _QWORD *v2844; // r14
  int v2845; // r13d
  unsigned int v2846; // eax
  int v2847; // ecx
  unsigned int v2848; // eax
  __int64 v2849; // r8
  int v2850; // edx
  unsigned __int64 v2851; // rcx
  int i137; // ecx
  int v2853; // ebx
  _BYTE *v2854; // r15
  _QWORD *v2855; // rax
  int v2856; // ecx
  __int64 v2857; // rdx
  const char *v2858; // rax
  int v2859; // r9d
  unsigned __int64 v2860; // rdx
  int v2861; // ebx
  __int64 v2862; // r8
  __int64 v2863; // rax
  unsigned __int64 i138; // rax
  unsigned int v2865; // eax
  _QWORD *v2866; // r15
  int v2867; // r13d
  int v2868; // r12d
  __int64 v2869; // r14
  unsigned int v2870; // eax
  _BYTE *v2871; // rbx
  int v2872; // ecx
  unsigned int v2873; // eax
  __int64 v2874; // r8
  int v2875; // edx
  unsigned __int64 v2876; // rcx
  int i126; // ecx
  int v2878; // edi
  _BYTE *v2879; // r14
  int v2880; // ecx
  _QWORD *v2881; // rax
  __int64 v2882; // rdx
  _QWORD *v2883; // r8
  int v2884; // r10d
  const char *v2885; // rax
  unsigned __int64 v2886; // rdx
  int v2887; // edi
  __int64 v2888; // r9
  __int64 v2889; // rax
  unsigned __int64 i127; // rax
  int v2891; // r12d
  const char *v2892; // r14
  __int64 v2893; // r15
  int v2894; // r13d
  unsigned int v2895; // eax
  int v2896; // ecx
  unsigned int v2897; // eax
  __int64 v2898; // r8
  int v2899; // edx
  unsigned __int64 v2900; // rcx
  int i128; // ecx
  int v2902; // ebx
  _BYTE *v2903; // rbx
  int v2904; // ecx
  _QWORD *v2905; // rax
  __int64 v2906; // rdx
  const char *i129; // rax
  unsigned __int64 v2908; // rax
  unsigned __int64 i130; // rcx
  char *v2910; // r15
  int v2911; // r13d
  int v2912; // r12d
  __int64 v2913; // r14
  unsigned int v2914; // eax
  _BYTE *v2915; // rbx
  int v2916; // ecx
  unsigned int v2917; // eax
  __int64 v2918; // r8
  int v2919; // edx
  unsigned __int64 v2920; // rcx
  int i131; // ecx
  int v2922; // edi
  int *v2923; // r14
  int *v2924; // rax
  int v2925; // ecx
  __int64 v2926; // rdx
  char *v2927; // r9
  int v2928; // r8d
  const char *v2929; // rax
  __int64 i132; // r11
  int v2931; // r10d
  unsigned __int64 v2932; // rdi
  __int64 v2933; // rax
  __int64 v2934; // rdi
  unsigned __int128 v2935; // rax
  unsigned __int64 i133; // rax
  int v2937; // r12d
  __int64 v2938; // r14
  char *v2939; // r15
  int v2940; // r13d
  unsigned int v2941; // eax
  int v2942; // ecx
  unsigned int v2943; // eax
  __int64 v2944; // r8
  int v2945; // edx
  unsigned __int64 v2946; // rcx
  int i134; // ecx
  int v2948; // ebx
  int *v2949; // r14
  int *v2950; // rax
  int v2951; // ecx
  __int64 v2952; // rdx
  char *v2953; // r9
  int v2954; // r8d
  const char *v2955; // rax
  __int64 i135; // r11
  int v2957; // r10d
  unsigned __int64 v2958; // rbx
  __int64 v2959; // rax
  __int64 v2960; // rbx
  unsigned __int128 v2961; // rax
  unsigned __int64 i136; // rax
  __int64 v2963; // r14
  unsigned int v2964; // eax
  _BYTE *v2965; // rbx
  int v2966; // ecx
  unsigned int v2967; // eax
  __int64 v2968; // r8
  int v2969; // edx
  unsigned __int64 v2970; // rcx
  int i139; // ecx
  int v2972; // edi
  _BYTE *v2973; // rdx
  int v2974; // ecx
  _QWORD *v2975; // rax
  __int64 v2976; // rdi
  unsigned __int64 v2977; // rcx
  unsigned __int64 i140; // rax
  __int64 v2979; // r14
  unsigned int v2980; // eax
  _BYTE *v2981; // rdi
  int v2982; // ecx
  unsigned int v2983; // eax
  __int64 v2984; // r8
  int v2985; // edx
  unsigned __int64 v2986; // rcx
  int i141; // ecx
  int v2988; // ebx
  _BYTE *v2989; // rdx
  _QWORD *v2990; // rax
  int v2991; // ecx
  __int64 v2992; // rbx
  unsigned __int64 v2993; // rcx
  unsigned __int64 i142; // rax
  int v2995; // r15d
  __int64 v2996; // r14
  int v2997; // r12d
  unsigned int v2998; // eax
  _BYTE *v2999; // rbx
  int v3000; // ecx
  unsigned int v3001; // eax
  __int64 v3002; // r8
  int v3003; // edx
  unsigned __int64 v3004; // rcx
  int v3005; // edi
  int v3006; // ecx
  _BYTE *v3007; // rdi
  int v3008; // ecx
  _QWORD *v3009; // rax
  __int64 v3010; // rdx
  int v3011; // ecx
  unsigned __int64 v3012; // rdx
  unsigned __int64 i143; // rax
  __int64 v3014; // r14
  unsigned int v3015; // eax
  __int64 v3016; // rdi
  int v3017; // ecx
  unsigned int v3018; // eax
  __int64 v3019; // r8
  int v3020; // edx
  unsigned __int64 v3021; // rcx
  int v3022; // ebx
  int v3023; // ecx
  __int64 v3024; // rdx
  int v3025; // ecx
  _QWORD *v3026; // rax
  __int64 v3027; // rbx
  unsigned __int64 v3028; // rcx
  unsigned __int64 i144; // rax
  __int64 v3030; // r14
  unsigned int v3031; // eax
  _BYTE *v3032; // rdi
  int v3033; // ecx
  unsigned int v3034; // eax
  __int64 v3035; // r8
  int v3036; // edx
  unsigned __int64 v3037; // rcx
  int v3038; // ebx
  int v3039; // ecx
  _BYTE *v3040; // rdx
  int v3041; // ecx
  _QWORD *v3042; // rax
  __int64 v3043; // rbx
  unsigned __int64 v3044; // rcx
  unsigned __int64 i145; // rax
  int v3046; // r12d
  const char *v3047; // r14
  __int64 v3048; // r15
  int v3049; // r13d
  unsigned int v3050; // eax
  __int64 v3051; // rbx
  int v3052; // ecx
  unsigned int v3053; // eax
  __int64 v3054; // r8
  int v3055; // edx
  unsigned __int64 v3056; // rcx
  int v3057; // edi
  int v3058; // ecx
  __int64 v3059; // rdi
  _QWORD *v3060; // rax
  int v3061; // ecx
  __int64 v3062; // rdx
  const char *i146; // rax
  unsigned __int64 v3064; // rax
  unsigned __int64 i147; // rcx
  int v3066; // r12d
  __int64 v3067; // r15
  const char *v3068; // r14
  int v3069; // r13d
  unsigned int v3070; // eax
  __int64 v3071; // rbx
  int v3072; // ecx
  unsigned int v3073; // eax
  __int64 v3074; // r8
  int v3075; // edx
  unsigned __int64 v3076; // rcx
  int v3077; // edi
  int v3078; // ecx
  __int64 v3079; // rdi
  _QWORD *v3080; // rax
  int v3081; // ecx
  __int64 v3082; // rdx
  const char *i148; // rdx
  unsigned __int64 v3084; // rax
  unsigned __int64 i149; // rcx
  __int64 v3086; // r14
  int v3087; // r15d
  int v3088; // r12d
  unsigned int v3089; // eax
  _BYTE *v3090; // rbx
  int v3091; // ecx
  unsigned int v3092; // eax
  __int64 v3093; // r8
  int v3094; // edx
  unsigned __int64 v3095; // rcx
  int v3096; // edi
  int v3097; // ecx
  _BYTE *v3098; // r14
  _QWORD *v3099; // rax
  int v3100; // ecx
  __int64 v3101; // rdx
  unsigned __int64 v3102; // r8
  const char *v3103; // rax
  int v3104; // r9d
  __int64 v3105; // r11
  int v3106; // r10d
  unsigned __int64 v3107; // rdi
  __int64 v3108; // rax
  __int64 v3109; // rdi
  unsigned __int128 v3110; // rax
  unsigned __int128 v3111; // rax
  unsigned __int64 i150; // rax
  __int64 v3113; // r13
  unsigned int v3114; // r9d
  __int64 v3115; // r8
  unsigned int v3116; // r14d
  unsigned int v3117; // eax
  __int64 v3118; // rdi
  int v3119; // ecx
  unsigned int v3120; // eax
  __int64 v3121; // r8
  int v3122; // edx
  unsigned __int64 v3123; // rcx
  int v3124; // ebx
  int v3125; // ecx
  int v3126; // ecx
  __int64 v3127; // rbx
  unsigned __int64 v3128; // rcx
  unsigned __int64 i151; // rax
  const char *v3130; // r10
  unsigned __int64 v3131; // rcx
  const char *v3132; // rax
  int v3133; // r9d
  __int64 v3134; // r15
  __int64 v3135; // rbx
  unsigned int v3136; // r11d
  __int64 v3137; // rax
  __int64 v3138; // rbx
  unsigned int v3139; // r14d
  unsigned __int64 v3140; // rax
  __int64 v3141; // rax
  int v3142; // eax
  unsigned int i152; // r12d
  __int64 v3144; // r13
  __int64 v3145; // rcx
  __int64 v3146; // rdx
  PVOID *v3147; // rdi
  char *v3148; // r14
  __int64 v3149; // r15
  wchar_t *v3150; // r14
  unsigned int v3151; // ecx
  __int64 v3152; // rdi
  int v3153; // ecx
  unsigned int v3154; // eax
  __int64 v3155; // r8
  int v3156; // edx
  unsigned __int64 v3157; // rcx
  int v3158; // ebx
  int v3159; // ecx
  __int64 v3160; // rdx
  _QWORD *v3161; // rax
  int v3162; // ecx
  __int64 v3163; // rbx
  unsigned __int64 v3164; // rcx
  unsigned __int64 i153; // rax
  _QWORD *v3166; // rcx
  char *v3167; // rbx
  signed __int64 v3168; // rbx
  __int64 v3169; // r14
  unsigned int v3170; // eax
  _BYTE *v3171; // rdi
  int v3172; // ecx
  unsigned int v3173; // eax
  __int64 v3174; // r8
  int v3175; // edx
  unsigned __int64 v3176; // rcx
  int v3177; // ebx
  int v3178; // ecx
  _BYTE *v3179; // rdx
  int v3180; // ecx
  _QWORD *v3181; // rax
  __int64 v3182; // rbx
  unsigned __int64 v3183; // rcx
  unsigned __int64 i154; // rax
  __int64 v3185; // r15
  unsigned int v3186; // eax
  _BYTE *v3187; // r14
  int v3188; // ecx
  unsigned int v3189; // eax
  __int64 v3190; // rbx
  int v3191; // edx
  unsigned __int64 v3192; // rcx
  int v3193; // edi
  int v3194; // ecx
  _BYTE *v3195; // rdx
  int v3196; // ecx
  _QWORD *v3197; // rax
  __int64 v3198; // rbx
  unsigned __int64 v3199; // rcx
  unsigned __int64 i155; // rax
  __int64 v3201; // r15
  unsigned int v3202; // r9d
  unsigned int v3203; // r12d
  unsigned int v3204; // eax
  __int64 v3205; // rbx
  int v3206; // ecx
  unsigned int v3207; // eax
  __int64 v3208; // rdi
  int v3209; // edx
  unsigned __int64 v3210; // rcx
  int v3211; // r14d
  int v3212; // ecx
  __int64 v3213; // rdx
  int v3214; // ecx
  _QWORD *v3215; // rax
  __int64 v3216; // rdi
  unsigned __int64 v3217; // rcx
  unsigned __int64 i156; // rax
  _QWORD *v3219; // r10
  _QWORD *v3220; // r8
  unsigned __int64 v3221; // rcx
  const char *v3222; // rax
  int v3223; // r9d
  __int64 v3224; // r14
  __int64 v3225; // rdi
  unsigned int i157; // r11d
  __int64 v3227; // rdx
  __int64 v3228; // rax
  __int64 v3229; // rdi
  unsigned __int64 v3230; // rcx
  unsigned int v3231; // r12d
  unsigned __int64 v3232; // rdx
  __int64 v3233; // rax
  unsigned __int64 v3234; // rcx
  unsigned __int128 v3235; // rax
  unsigned __int64 v3236; // rcx
  unsigned __int64 v3237; // rcx
  unsigned __int128 v3238; // rax
  unsigned int v3239; // eax
  bool v3240; // zf
  unsigned __int64 v3241; // rcx
  unsigned __int128 v3242; // rax
  bool v3243; // cf
  int v3244; // ecx
  int v3245; // eax
  unsigned __int64 v3246; // r13
  ULONG_PTR v3247; // r15
  unsigned __int64 v3248; // r8
  __int64 v3249; // rbx
  _DWORD *v3250; // r12
  __int64 v3251; // rax
  int v3252; // edi
  signed int v3253; // ebx
  int v3254; // edx
  unsigned int v3255; // ecx
  _DWORD *v3256; // rax
  __int64 *v3257; // rdi
  ULONG_PTR v3258; // rdx
  ULONG_PTR v3259; // r9
  unsigned __int64 v3260; // r12
  int v3261; // ecx
  __int64 v3262; // rcx
  ULONG_PTR v3263; // rdx
  unsigned __int64 v3264; // rcx
  unsigned int v3265; // ebx
  __int64 v3266; // rdi
  __int64 v3267; // rax
  __int64 v3268; // rax
  unsigned __int64 v3269; // r15
  int v3270; // r8d
  int v3271; // r9d
  unsigned int v3272; // r10d
  unsigned __int64 v3273; // rcx
  __int64 v3274; // rax
  int v3275; // edi
  unsigned __int64 v3276; // rcx
  unsigned __int128 v3277; // rax
  unsigned __int64 v3278; // rcx
  __int64 v3279; // rax
  __int64 v3280; // rbx
  __int64 v3281; // rax
  _QWORD *v3282; // r12
  __int64 v3283; // rdx
  _QWORD *v3284; // rcx
  __int64 v3285; // r12
  unsigned int v3286; // r9d
  _QWORD *v3287; // rbx
  int v3288; // r8d
  unsigned __int64 v3289; // r9
  unsigned __int64 v3290; // rcx
  unsigned __int128 v3291; // rax
  unsigned __int64 v3292; // rcx
  unsigned __int128 v3293; // rax
  unsigned __int64 v3294; // rdx
  unsigned int v3295; // edi
  _QWORD *v3296; // rbx
  unsigned __int64 v3297; // r8
  unsigned __int64 v3298; // rcx
  unsigned __int128 v3299; // rax
  unsigned __int64 v3300; // rcx
  unsigned __int128 v3301; // rax
  unsigned __int64 v3302; // rdx
  void *v3303; // rcx
  unsigned __int64 v3304; // rcx
  unsigned __int128 v3305; // rax
  unsigned int v3306; // eax
  unsigned int v3307; // eax
  int v3308; // eax
  int v3309; // r8d
  int v3310; // r9d
  unsigned int v3311; // r10d
  unsigned __int64 v3312; // rcx
  __int64 v3313; // rax
  int v3314; // r15d
  unsigned __int64 v3315; // rcx
  unsigned __int64 v3316; // rcx
  unsigned __int64 v3317; // r12
  unsigned __int64 v3318; // rcx
  __int64 v3319; // rax
  __int64 v3320; // rax
  _QWORD *v3321; // rbx
  __int64 v3322; // rbx
  int v3323; // r8d
  _QWORD *v3324; // rdi
  unsigned __int64 v3325; // r9
  unsigned __int64 v3326; // rcx
  unsigned __int128 v3327; // rax
  unsigned __int64 v3328; // rcx
  unsigned __int128 v3329; // rax
  unsigned __int64 v3330; // rdx
  unsigned int v3331; // r15d
  __int64 v3332; // rbx
  _QWORD *v3333; // rdi
  unsigned __int64 v3334; // r8
  unsigned __int64 v3335; // rcx
  unsigned __int128 v3336; // rax
  unsigned __int64 v3337; // rcx
  unsigned __int128 v3338; // rax
  unsigned __int64 v3339; // rdx
  int v3340; // r8d
  _QWORD *v3341; // rdi
  __int64 (__fastcall *v3342)(PVOID, PVOID); // rdx
  __int64 v3343; // r9
  char v3344; // al
  _QWORD *v3345; // rdx
  unsigned __int64 v3346; // rbx
  char *v3347; // rdx
  unsigned __int64 v3348; // rcx
  unsigned __int64 v3349; // rcx
  __int64 v3350; // r8
  unsigned int v3351; // ecx
  __int64 v3352; // rdx
  __int64 v3353; // rdx
  unsigned __int64 v3354; // r15
  int v3355; // ecx
  unsigned int v3356; // eax
  __int64 v3357; // rbx
  int v3358; // edx
  unsigned __int64 v3359; // rcx
  int v3360; // edi
  int v3361; // ecx
  __int64 v3362; // rax
  int *v3363; // r12
  _QWORD *v3364; // r10
  __int64 v3365; // rdi
  _QWORD *v3366; // r8
  const char *v3367; // rax
  __int64 v3368; // r9
  __int64 v3369; // r14
  unsigned __int64 v3370; // rbx
  unsigned int v3371; // r11d
  __int64 v3372; // rdx
  __int64 v3373; // rax
  __int64 v3374; // rbx
  unsigned __int64 v3375; // rcx
  unsigned int v3376; // edi
  __int64 v3377; // rax
  unsigned __int64 i158; // rax
  unsigned int v3379; // ebx
  BOOL v3380; // r14d
  __int64 v3381; // rcx
  unsigned __int8 v3382; // r13
  unsigned __int64 v3383; // rdi
  unsigned __int64 v3384; // r12
  int v3385; // eax
  int v3386; // eax
  __int64 v3387; // rcx
  unsigned __int64 v3388; // rcx
  unsigned __int64 i159; // rax
  unsigned __int64 v3390; // rcx
  unsigned __int128 v3391; // rax
  __int64 v3392; // r8
  __int64 *v3393; // r13
  unsigned __int64 v3394; // rcx
  __int64 v3395; // rax
  int v3396; // r14d
  unsigned __int64 v3397; // rcx
  unsigned __int128 v3398; // rax
  unsigned __int64 v3399; // r12
  __int64 v3400; // rax
  __int64 v3401; // r9
  int v3402; // edi
  _QWORD *v3403; // rbx
  unsigned __int64 v3404; // r8
  unsigned __int64 v3405; // rcx
  unsigned __int128 v3406; // rax
  unsigned __int64 v3407; // rcx
  unsigned __int64 v3408; // rcx
  unsigned __int64 v3409; // rdx
  unsigned int v3410; // r14d
  unsigned __int64 v3411; // rdi
  _QWORD *v3412; // rbx
  unsigned __int64 v3413; // r8
  unsigned __int64 v3414; // rcx
  unsigned __int128 v3415; // rax
  unsigned __int64 v3416; // rcx
  unsigned __int64 v3417; // rcx
  unsigned __int64 v3418; // rdx
  unsigned __int64 v3419; // rax
  int v3420; // ebx
  char *v3421; // rcx
  _QWORD *v3422; // rdx
  __int64 v3423; // r8
  char v3424; // al
  int v3425; // eax
  unsigned __int64 v3426; // rcx
  unsigned __int128 v3427; // rax
  signed __int64 v3428; // r11
  _QWORD *v3429; // r12
  int v3430; // ebx
  _BYTE *v3431; // rdx
  char *v3432; // rcx
  __int64 v3433; // r8
  char v3434; // al
  int v3435; // ecx
  _QWORD *v3436; // rax
  __int64 v3437; // rdx
  _QWORD *v3438; // r8
  const char *v3439; // rax
  __int64 v3440; // r9
  int v3441; // r10d
  __int64 v3442; // r13
  __int64 v3443; // rbx
  unsigned int v3444; // r14d
  __int64 v3445; // rdx
  __int64 v3446; // rax
  __int64 v3447; // rbx
  unsigned __int64 v3448; // rcx
  unsigned int v3449; // r9d
  unsigned __int64 v3450; // rdx
  __int64 v3451; // rax
  char *v3452; // rcx
  int v3453; // edx
  __int64 v3454; // r8
  char v3455; // al
  _QWORD *v3456; // rcx
  unsigned int i160; // eax
  int v3458; // ebx
  _QWORD *v3459; // rdx
  unsigned __int64 v3460; // rcx
  unsigned __int128 v3461; // rax
  __int64 v3462; // r12
  int v3463; // r15d
  ULONG_PTR v3464; // rsi
  __int64 v3465; // r8
  unsigned int v3466; // r14d
  ULONG_PTR *v3467; // r9
  unsigned int v3468; // r10d
  unsigned int v3469; // r11d
  ULONG_PTR v3470; // rdx
  __int64 v3471; // rbx
  int v3472; // r13d
  ULONG_PTR v3473; // rcx
  ULONG_PTR v3474; // rax
  int v3475; // eax
  unsigned __int64 v3476; // r12
  _QWORD *v3477; // r11
  __int64 v3478; // r8
  _QWORD *v3479; // rdi
  const char *v3480; // rax
  int v3481; // r9d
  __int64 v3482; // r14
  unsigned __int64 v3483; // rbx
  unsigned int v3484; // r10d
  __int64 v3485; // rdx
  __int64 v3486; // rax
  __int64 v3487; // rbx
  unsigned __int64 v3488; // rcx
  unsigned int v3489; // r8d
  unsigned __int64 v3490; // rdx
  __int64 v3491; // rax
  unsigned __int64 i161; // rax
  int v3493; // r11d
  _QWORD *v3494; // rbx
  int v3495; // r8d
  __int64 v3496; // r10
  const char *v3497; // rax
  __int64 v3498; // rdi
  int v3499; // r9d
  __int64 v3500; // rdx
  __int64 v3501; // rax
  __int64 v3502; // rdi
  unsigned __int64 v3503; // rcx
  int v3504; // edx
  __int64 v3505; // r9
  __int64 v3506; // rax
  int v3507; // r13d
  unsigned int v3508; // r13d
  ULONG_PTR v3509; // rcx
  unsigned __int64 v3510; // rcx
  unsigned __int128 v3511; // rax
  signed __int64 v3512; // r10
  _QWORD *v3513; // r14
  unsigned int v3514; // r13d
  _BYTE *v3515; // rdx
  int v3516; // ebx
  char *v3517; // rcx
  __int64 v3518; // rdi
  char v3519; // al
  int v3520; // ecx
  _QWORD *v3521; // rax
  __int64 v3522; // rdx
  _QWORD *v3523; // rbx
  __int64 v3524; // r8
  int v3525; // r9d
  __int64 v3526; // r12
  const char *v3527; // rax
  __int64 v3528; // rdi
  unsigned int v3529; // r11d
  __int64 v3530; // rdx
  __int64 v3531; // rax
  __int64 v3532; // rdi
  ULONG_PTR v3533; // rcx
  unsigned int v3534; // r8d
  unsigned __int64 v3535; // rdx
  __int64 v3536; // rax
  char *v3537; // rcx
  int v3538; // edx
  __int64 v3539; // rbx
  char v3540; // al
  _QWORD *v3541; // rcx
  unsigned int i162; // eax
  unsigned int v3543; // ebx
  _QWORD *v3544; // rdx
  unsigned __int64 v3545; // rcx
  unsigned __int128 v3546; // rax
  ULONG_PTR v3547; // rsi
  unsigned int v3548; // r11d
  unsigned int v3549; // r9d
  __int64 v3550; // r14
  ULONG_PTR *v3551; // r8
  unsigned int v3552; // r10d
  unsigned __int64 v3553; // rdi
  ULONG_PTR v3554; // rdx
  __int64 v3555; // rbx
  int v3556; // r12d
  unsigned __int64 v3557; // rdx
  ULONG_PTR v3558; // rdx
  unsigned int v3559; // eax
  unsigned __int64 v3560; // r10
  unsigned int v3561; // edi
  void *v3562; // rbx
  SIZE_T v3563; // rax
  unsigned int i163; // r8d
  unsigned __int64 v3565; // rcx
  unsigned __int128 v3566; // rax
  unsigned __int64 v3567; // rcx
  int v3568; // ecx
  int v3569; // ecx
  unsigned int v3570; // edi
  int v3571; // ecx
  int v3572; // ecx
  int v3573; // ecx
  unsigned __int64 v3574; // rcx
  __int64 v3575; // rax
  unsigned int v3576; // edi
  __int64 v3577; // rax
  _QWORD *v3578; // rbx
  __int64 v3579; // r8
  __int64 v3580; // r9
  __int64 v3581; // r11
  const char *v3582; // rax
  __int64 v3583; // rdi
  unsigned int i164; // r10d
  __int64 v3585; // rdx
  __int64 v3586; // rax
  __int64 v3587; // rdi
  ULONG_PTR v3588; // rcx
  unsigned int v3589; // r8d
  unsigned __int64 v3590; // rdx
  __int64 v3591; // rax
  int v3592; // ecx
  unsigned int v3593; // r12d
  _BYTE *v3594; // rax
  unsigned int v3595; // r11d
  unsigned int v3596; // r10d
  int v3597; // r14d
  unsigned __int64 v3598; // r8
  unsigned int v3599; // edi
  int *v3600; // rbx
  __int64 v3601; // r9
  int v3602; // ecx
  int v3603; // ecx
  int v3604; // ecx
  int v3605; // ecx
  __int64 v3606; // rax
  int v3607; // eax
  unsigned __int64 v3608; // rcx
  __int64 v3609; // rdx
  int v3610; // eax
  __int64 v3611; // rax
  int *v3612; // rbx
  int *v3613; // rdx
  unsigned int v3614; // ecx
  unsigned __int64 v3615; // rcx
  unsigned __int128 v3616; // rax
  unsigned __int64 v3617; // rcx
  int v3618; // ecx
  int v3619; // ecx
  unsigned int v3620; // edi
  int v3621; // ecx
  int v3622; // ecx
  int v3623; // ecx
  unsigned __int64 v3624; // rcx
  __int64 v3625; // rax
  unsigned int v3626; // edi
  __int64 (__fastcall *v3627)(__int64, ULONG_PTR, _QWORD, __int64); // rax
  _QWORD *v3628; // rax
  _QWORD *v3629; // r14
  unsigned __int64 v3630; // rcx
  unsigned __int128 v3631; // rax
  unsigned __int64 v3632; // rcx
  unsigned __int128 v3633; // rax
  ULONG_PTR v3634; // rbx
  __int64 v3635; // rcx
  unsigned int v3636; // edi
  _BYTE *v3637; // rax
  int v3638; // ecx
  unsigned __int64 i165; // r13
  struct _KTIMER *v3640; // r11
  unsigned int v3641; // ecx
  unsigned __int64 v3642; // r9
  unsigned int v3643; // r8d
  unsigned __int64 v3644; // rbx
  __int64 v3645; // r10
  int v3646; // ecx
  int v3647; // ecx
  int v3648; // ecx
  int v3649; // ecx
  __int64 v3650; // rax
  int v3651; // eax
  int v3652; // ecx
  unsigned __int64 v3653; // rdx
  int v3654; // eax
  __int64 v3655; // r9
  __int64 v3656; // r8
  unsigned __int64 v3657; // r12
  char *v3658; // rcx
  _QWORD *v3659; // rdx
  char v3660; // al
  unsigned __int64 v3661; // rcx
  __int64 v3662; // rax
  struct _KTIMER *v3663; // rax
  __int64 v3664; // r8
  __int64 v3665; // rax
  unsigned int v3666; // eax
  _QWORD *v3667; // rdx
  unsigned int v3668; // r8d
  unsigned __int64 v3669; // rcx
  __int64 v3670; // rax
  __int64 v3671; // rax
  __int64 v3672; // rax
  char v3673; // r12
  __int64 v3674; // rcx
  __int64 v3675; // rdx
  unsigned __int64 v3676; // rdx
  PVOID *v3677; // rcx
  __int64 v3678; // r9
  char *v3679; // r8
  unsigned __int64 v3680; // rax
  _BYTE *v3681; // rax
  int v3682; // ecx
  __int64 v3683; // r10
  unsigned int v3684; // r9d
  __int64 v3685; // rdx
  __int64 v3686; // rcx
  unsigned __int64 v3687; // r12
  __int64 v3688; // rax
  __int64 v3689; // rsi
  __int64 v3690; // r15
  unsigned __int64 v3691; // r11
  unsigned __int64 v3692; // rcx
  int v3693; // r9d
  __int64 v3694; // rbx
  _QWORD *v3695; // r8
  __int64 v3696; // r10
  char *v3697; // rdx
  char v3698; // al
  int v3699; // r8d
  int *v3700; // rdx
  __int64 v3701; // r8
  __int64 v3702; // rax
  int v3703; // eax
  __int16 v3704; // ax
  unsigned __int64 v3705; // rcx
  unsigned __int64 v3706; // rdx
  unsigned __int64 v3707; // rcx
  unsigned __int64 v3708; // rdx
  unsigned int v3709; // edi
  unsigned __int64 v3710; // rdx
  unsigned __int64 v3711; // rdx
  ULONG v3712; // edx
  __int64 v3713; // r9
  const char *v3714; // rdi
  __int64 v3715; // r8
  const char *v3716; // rax
  unsigned __int64 v3717; // rcx
  __int64 v3718; // rbx
  unsigned __int64 v3719; // rax
  __int64 v3720; // rax
  ULONG_PTR v3721; // rax
  int v3722; // ebx
  ULONG v3723; // edx
  _DWORD *v3724; // r14
  unsigned __int64 v3725; // rcx
  unsigned __int64 v3726; // rcx
  unsigned __int128 v3727; // kr00_16
  __int64 v3728; // r12
  unsigned __int64 v3729; // rcx
  unsigned __int128 v3730; // rax
  int v3731; // ebx
  int *v3732; // rcx
  int *v3733; // rdx
  __int64 v3734; // rdi
  char v3735; // al
  unsigned __int64 v3736; // rbx
  int v3737; // r8d
  unsigned __int64 v3738; // rcx
  unsigned __int128 v3739; // rax
  int v3740; // edi
  unsigned __int64 v3741; // rcx
  unsigned __int64 v3742; // rcx
  int v3743; // edx
  __int64 v3744; // r15
  char v3745; // al
  _BYTE *i166; // rdi
  __int64 v3747; // rbx
  unsigned __int64 v3748; // r13
  __int64 v3749; // rax
  __int64 v3750; // r8
  unsigned __int64 v3751; // rcx
  char v3752; // dl
  _QWORD *v3753; // rax
  __int64 v3754; // rbx
  int v3755; // r9d
  int v3756; // r9d
  __int64 v3757; // rcx
  __int64 v3758; // rbx
  _QWORD *v3759; // rax
  __int64 v3760; // rdx
  unsigned __int64 v3761; // rdx
  _QWORD *v3762; // r9
  unsigned __int64 v3763; // r8
  __int64 v3764; // rbx
  unsigned __int64 v3765; // rcx
  unsigned __int64 v3766; // rcx
  __int64 v3767; // rdx
  _QWORD *v3768; // rax
  __int64 v3769; // rbx
  unsigned __int64 v3770; // rcx
  unsigned __int64 v3771; // r10
  char v3772; // r9
  unsigned __int64 *v3773; // rdx
  unsigned __int64 v3774; // rax
  unsigned __int64 v3775; // rcx
  _DWORD *v3776; // rbx
  unsigned __int64 v3777; // rax
  unsigned __int128 v3778; // rax
  __int64 v3779; // rcx
  __int64 v3780; // rax
  _BYTE *v3781; // rbx
  __int64 v3782; // rsi
  char v3783; // al
  int *v3784; // rcx
  int v3785; // ebx
  int *v3786; // rdx
  char v3787; // al
  __int64 v3788; // rbx
  __int64 v3789; // rdi
  int *v3790; // rcx
  int *v3791; // rdx
  int v3792; // r8d
  char v3793; // al
  unsigned __int64 v3794; // rax
  unsigned __int128 v3795; // rax
  unsigned __int64 v3796; // rsi
  unsigned __int128 v3797; // rax
  __int64 v3798; // r13
  int v3799; // r14d
  int v3800; // r12d
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v3802; // rsi
  __int64 v3803; // r15
  _BYTE *v3804; // rdi
  unsigned __int64 v3805; // r12
  _BYTE *v3806; // r8
  unsigned __int64 v3807; // r14
  unsigned int v3808; // ebx
  _QWORD *v3809; // rdx
  unsigned __int64 v3810; // rcx
  unsigned __int64 v3811; // rax
  __int64 v3812; // r11
  _QWORD *v3813; // rcx
  char *v3814; // rbx
  int v3815; // r9d
  signed __int64 v3816; // rbx
  struct _KEVENT *v3817; // rax
  _BYTE *v3818; // rax
  __int64 v3819; // rcx
  int v3820; // edx
  ULONG_PTR v3821; // r9
  ULONG_PTR v3822; // r9
  ULONG_PTR v3823; // rax
  ULONG_PTR v3824; // r9
  int v3825; // ecx
  int v3826; // ecx
  int v3827; // ecx
  int v3828; // ecx
  int v3829; // ecx
  volatile signed __int32 *v3830; // rax
  signed __int32 v3831[8]; // [rsp+0h] [rbp-24B8h] BYREF
  PVOID HalExtensionList; // [rsp+50h] [rbp-2468h]
  __int64 v3833; // [rsp+58h] [rbp-2460h]
  __int64 v3834; // [rsp+60h] [rbp-2458h]
  void *Src; // [rsp+68h] [rbp-2450h]
  unsigned __int64 v3836; // [rsp+70h] [rbp-2448h]
  __int64 v3837; // [rsp+78h] [rbp-2440h]
  ULONG_PTR v3838; // [rsp+80h] [rbp-2438h]
  ULONG_PTR v3839; // [rsp+88h] [rbp-2430h]
  ULONG_PTR v3840; // [rsp+90h] [rbp-2428h]
  unsigned __int64 v3841; // [rsp+98h] [rbp-2420h]
  unsigned __int64 v3842; // [rsp+A0h] [rbp-2418h]
  ULONG_PTR v3843; // [rsp+A8h] [rbp-2410h]
  unsigned int *v3844; // [rsp+B0h] [rbp-2408h]
  int v3845; // [rsp+B8h] [rbp-2400h]
  ULONG_PTR v3846; // [rsp+C0h] [rbp-23F8h]
  size_t Size; // [rsp+C8h] [rbp-23F0h]
  __int64 v3848; // [rsp+D0h] [rbp-23E8h]
  __int64 v3849; // [rsp+D8h] [rbp-23E0h]
  unsigned __int64 v3850; // [rsp+E0h] [rbp-23D8h]
  unsigned int *v3851; // [rsp+E8h] [rbp-23D0h]
  PKTIMER Timer; // [rsp+F0h] [rbp-23C8h]
  unsigned int v3853; // [rsp+F8h] [rbp-23C0h]
  int v3854; // [rsp+FCh] [rbp-23BCh]
  int v3855; // [rsp+100h] [rbp-23B8h]
  int v3856; // [rsp+104h] [rbp-23B4h]
  int v3857; // [rsp+108h] [rbp-23B0h]
  int v3858; // [rsp+10Ch] [rbp-23ACh]
  int v3859; // [rsp+110h] [rbp-23A8h]
  int v3860; // [rsp+114h] [rbp-23A4h]
  int v3861; // [rsp+118h] [rbp-23A0h]
  int v3862; // [rsp+11Ch] [rbp-239Ch]
  int v3863; // [rsp+120h] [rbp-2398h]
  int v3864; // [rsp+124h] [rbp-2394h]
  int v3865; // [rsp+128h] [rbp-2390h]
  int v3866; // [rsp+12Ch] [rbp-238Ch]
  int v3867; // [rsp+130h] [rbp-2388h]
  int v3868; // [rsp+134h] [rbp-2384h]
  int v3869; // [rsp+138h] [rbp-2380h]
  int v3870; // [rsp+13Ch] [rbp-237Ch]
  int v3871; // [rsp+140h] [rbp-2378h]
  int v3872; // [rsp+144h] [rbp-2374h]
  int v3873; // [rsp+148h] [rbp-2370h]
  int v3874; // [rsp+14Ch] [rbp-236Ch]
  int v3875; // [rsp+150h] [rbp-2368h]
  int v3876; // [rsp+154h] [rbp-2364h]
  int v3877; // [rsp+158h] [rbp-2360h]
  int v3878; // [rsp+15Ch] [rbp-235Ch]
  int v3879; // [rsp+160h] [rbp-2358h]
  int v3880; // [rsp+164h] [rbp-2354h]
  int v3881; // [rsp+168h] [rbp-2350h]
  unsigned int v3882; // [rsp+16Ch] [rbp-234Ch]
  _DWORD v3883[32]; // [rsp+170h] [rbp-2348h] BYREF
  _DWORD v3884[22]; // [rsp+1F0h] [rbp-22C8h] BYREF
  _DWORD v3885[32]; // [rsp+248h] [rbp-2270h] BYREF
  _DWORD v3886[42]; // [rsp+2C8h] [rbp-21F0h] BYREF
  _DWORD v3887[3]; // [rsp+370h] [rbp-2148h] BYREF
  int v3888; // [rsp+37Ch] [rbp-213Ch]
  _DWORD v3889[4]; // [rsp+380h] [rbp-2138h] BYREF
  unsigned int v3890; // [rsp+390h] [rbp-2128h] BYREF
  int v3891; // [rsp+394h] [rbp-2124h] BYREF
  unsigned int v3892; // [rsp+398h] [rbp-2120h] BYREF
  int v3893; // [rsp+39Ch] [rbp-211Ch] BYREF
  int v3894; // [rsp+3A0h] [rbp-2118h] BYREF
  _DWORD v3895[17]; // [rsp+3A4h] [rbp-2114h] BYREF
  int v3896; // [rsp+3E8h] [rbp-20D0h] BYREF
  int v3897; // [rsp+3ECh] [rbp-20CCh] BYREF
  _DWORD v3898[8]; // [rsp+3F0h] [rbp-20C8h] BYREF
  char v3899[4]; // [rsp+410h] [rbp-20A8h] BYREF
  int v3900; // [rsp+414h] [rbp-20A4h]
  int v3901; // [rsp+418h] [rbp-20A0h]
  _DWORD v3902[38]; // [rsp+41Ch] [rbp-209Ch] BYREF
  _DWORD v3903[23]; // [rsp+4B4h] [rbp-2004h] BYREF
  int v3904; // [rsp+510h] [rbp-1FA8h] BYREF
  _BYTE v3905[4]; // [rsp+514h] [rbp-1FA4h] BYREF
  int v3906; // [rsp+518h] [rbp-1FA0h]
  ULONG CompressFragmentWorkSpaceSize; // [rsp+51Ch] [rbp-1F9Ch] BYREF
  ULONG_PTR v3908; // [rsp+520h] [rbp-1F98h]
  ULONG CompressBufferWorkSpaceSize[10]; // [rsp+528h] [rbp-1F90h] BYREF
  __int64 v3910; // [rsp+550h] [rbp-1F68h]
  __int64 v3911; // [rsp+558h] [rbp-1F60h]
  _QWORD v3912[4]; // [rsp+560h] [rbp-1F58h] BYREF
  _QWORD v3913[2]; // [rsp+580h] [rbp-1F38h] BYREF
  __int64 v3914; // [rsp+590h] [rbp-1F28h]
  __int64 v3915; // [rsp+598h] [rbp-1F20h]
  __int64 v3916; // [rsp+5A0h] [rbp-1F18h]
  __int64 v3917; // [rsp+5A8h] [rbp-1F10h]
  __int64 v3918; // [rsp+5B0h] [rbp-1F08h]
  __int64 v3919; // [rsp+5B8h] [rbp-1F00h]
  __int64 v3920; // [rsp+5C0h] [rbp-1EF8h]
  __int64 v3921; // [rsp+5C8h] [rbp-1EF0h]
  __int64 v3922; // [rsp+5D0h] [rbp-1EE8h]
  __int64 v3923; // [rsp+5D8h] [rbp-1EE0h]
  __int64 v3924; // [rsp+5E0h] [rbp-1ED8h]
  __int64 v3925; // [rsp+5E8h] [rbp-1ED0h]
  _QWORD *v3926; // [rsp+5F0h] [rbp-1EC8h]
  _QWORD v3927[2]; // [rsp+5F8h] [rbp-1EC0h] BYREF
  __int64 v3928; // [rsp+608h] [rbp-1EB0h]
  __int64 v3929; // [rsp+610h] [rbp-1EA8h]
  __int64 v3930; // [rsp+618h] [rbp-1EA0h]
  __int64 v3931; // [rsp+620h] [rbp-1E98h]
  __int64 v3932; // [rsp+628h] [rbp-1E90h]
  __int64 v3933; // [rsp+630h] [rbp-1E88h]
  __int64 v3934; // [rsp+638h] [rbp-1E80h]
  __int64 v3935; // [rsp+640h] [rbp-1E78h]
  __int64 v3936; // [rsp+648h] [rbp-1E70h]
  __int64 v3937; // [rsp+650h] [rbp-1E68h]
  __int64 v3938; // [rsp+658h] [rbp-1E60h]
  __int64 v3939; // [rsp+660h] [rbp-1E58h]
  __int64 v3940; // [rsp+668h] [rbp-1E50h]
  __int64 v3941; // [rsp+670h] [rbp-1E48h]
  __int64 v3942; // [rsp+678h] [rbp-1E40h]
  __int64 v3943; // [rsp+680h] [rbp-1E38h]
  __int64 v3944; // [rsp+688h] [rbp-1E30h]
  __int64 v3945; // [rsp+690h] [rbp-1E28h]
  __int64 v3946; // [rsp+698h] [rbp-1E20h]
  __int64 v3947; // [rsp+6A0h] [rbp-1E18h]
  __int64 v3948; // [rsp+6A8h] [rbp-1E10h]
  __int64 v3949; // [rsp+6B0h] [rbp-1E08h]
  __int64 v3950; // [rsp+6B8h] [rbp-1E00h]
  __int64 v3951; // [rsp+6C0h] [rbp-1DF8h]
  __int64 v3952; // [rsp+6C8h] [rbp-1DF0h]
  unsigned int *v3953; // [rsp+6D0h] [rbp-1DE8h] BYREF
  __int64 v3954; // [rsp+6D8h] [rbp-1DE0h]
  __int64 v3955; // [rsp+6E0h] [rbp-1DD8h]
  __int64 v3956; // [rsp+6E8h] [rbp-1DD0h]
  __int64 v3957; // [rsp+6F0h] [rbp-1DC8h]
  __int64 v3958; // [rsp+6F8h] [rbp-1DC0h]
  __int64 v3959; // [rsp+700h] [rbp-1DB8h]
  __int64 v3960; // [rsp+708h] [rbp-1DB0h]
  __int64 v3961; // [rsp+710h] [rbp-1DA8h]
  __int64 v3962; // [rsp+718h] [rbp-1DA0h]
  __int64 v3963; // [rsp+720h] [rbp-1D98h]
  __int64 v3964; // [rsp+728h] [rbp-1D90h]
  __int64 v3965; // [rsp+730h] [rbp-1D88h]
  __int64 v3966; // [rsp+738h] [rbp-1D80h]
  __int64 v3967; // [rsp+740h] [rbp-1D78h]
  __int64 v3968; // [rsp+748h] [rbp-1D70h]
  __int64 v3969; // [rsp+750h] [rbp-1D68h]
  _QWORD v3970[5]; // [rsp+758h] [rbp-1D60h]
  __int64 v3971; // [rsp+780h] [rbp-1D38h]
  __int64 v3972; // [rsp+788h] [rbp-1D30h]
  __int64 v3973; // [rsp+790h] [rbp-1D28h]
  __int64 v3974; // [rsp+798h] [rbp-1D20h]
  __int64 v3975; // [rsp+7A0h] [rbp-1D18h]
  __int64 v3976; // [rsp+7A8h] [rbp-1D10h]
  __int64 v3977; // [rsp+7B0h] [rbp-1D08h]
  __int64 v3978; // [rsp+7B8h] [rbp-1D00h]
  __int64 v3979; // [rsp+7C0h] [rbp-1CF8h]
  __int64 v3980; // [rsp+7C8h] [rbp-1CF0h]
  __int64 v3981; // [rsp+7D0h] [rbp-1CE8h]
  __int64 v3982; // [rsp+7D8h] [rbp-1CE0h]
  __int64 v3983; // [rsp+7E0h] [rbp-1CD8h]
  __int64 v3984; // [rsp+7E8h] [rbp-1CD0h]
  __int64 v3985; // [rsp+7F0h] [rbp-1CC8h]
  __int64 v3986; // [rsp+7F8h] [rbp-1CC0h]
  __int64 v3987; // [rsp+800h] [rbp-1CB8h]
  __int64 v3988; // [rsp+808h] [rbp-1CB0h]
  __int64 v3989; // [rsp+810h] [rbp-1CA8h]
  __int64 v3990; // [rsp+818h] [rbp-1CA0h]
  __int64 v3991; // [rsp+820h] [rbp-1C98h]
  __int64 v3992; // [rsp+828h] [rbp-1C90h]
  __int64 v3993; // [rsp+830h] [rbp-1C88h]
  __int64 v3994; // [rsp+838h] [rbp-1C80h]
  __int64 v3995; // [rsp+840h] [rbp-1C78h]
  __int64 v3996; // [rsp+848h] [rbp-1C70h]
  __int64 v3997; // [rsp+850h] [rbp-1C68h]
  __int64 v3998; // [rsp+858h] [rbp-1C60h]
  __int64 v3999; // [rsp+860h] [rbp-1C58h]
  __int64 v4000; // [rsp+868h] [rbp-1C50h]
  __int64 v4001; // [rsp+870h] [rbp-1C48h]
  __int64 v4002; // [rsp+878h] [rbp-1C40h]
  __int64 v4003; // [rsp+880h] [rbp-1C38h]
  __int64 v4004; // [rsp+888h] [rbp-1C30h]
  __int64 v4005; // [rsp+890h] [rbp-1C28h]
  __int64 v4006; // [rsp+898h] [rbp-1C20h]
  __int64 v4007; // [rsp+8A0h] [rbp-1C18h]
  __int64 v4008; // [rsp+8A8h] [rbp-1C10h]
  __int64 v4009; // [rsp+8B0h] [rbp-1C08h]
  __int64 v4010; // [rsp+8B8h] [rbp-1C00h]
  __int64 v4011; // [rsp+8C0h] [rbp-1BF8h]
  __int64 v4012; // [rsp+8C8h] [rbp-1BF0h]
  __int64 v4013; // [rsp+8D0h] [rbp-1BE8h]
  __int64 v4014; // [rsp+8D8h] [rbp-1BE0h]
  __int64 v4015; // [rsp+8E0h] [rbp-1BD8h]
  __int64 v4016; // [rsp+8E8h] [rbp-1BD0h]
  __int64 v4017; // [rsp+8F0h] [rbp-1BC8h]
  __int64 v4018; // [rsp+8F8h] [rbp-1BC0h]
  __int64 v4019; // [rsp+900h] [rbp-1BB8h]
  __int64 v4020; // [rsp+908h] [rbp-1BB0h]
  __int64 v4021; // [rsp+910h] [rbp-1BA8h]
  __int64 v4022; // [rsp+918h] [rbp-1BA0h]
  __int64 v4023; // [rsp+920h] [rbp-1B98h]
  __int64 v4024; // [rsp+928h] [rbp-1B90h]
  __int64 v4025; // [rsp+930h] [rbp-1B88h]
  unsigned int *v4026; // [rsp+938h] [rbp-1B80h] BYREF
  ULONG_PTR v4027; // [rsp+940h] [rbp-1B78h] BYREF
  unsigned int *v4028; // [rsp+948h] [rbp-1B70h] BYREF
  __int64 v4029; // [rsp+950h] [rbp-1B68h]
  __int64 v4030; // [rsp+958h] [rbp-1B60h]
  __int64 v4031; // [rsp+960h] [rbp-1B58h]
  __int64 v4032; // [rsp+968h] [rbp-1B50h]
  __int64 v4033; // [rsp+970h] [rbp-1B48h]
  __int64 v4034; // [rsp+978h] [rbp-1B40h]
  __int64 v4035; // [rsp+980h] [rbp-1B38h]
  __int64 v4036; // [rsp+988h] [rbp-1B30h]
  __int64 v4037; // [rsp+990h] [rbp-1B28h]
  __int64 v4038; // [rsp+998h] [rbp-1B20h]
  void *v4039; // [rsp+9A0h] [rbp-1B18h] BYREF
  _QWORD *v4040; // [rsp+9A8h] [rbp-1B10h] BYREF
  __int64 v4041; // [rsp+9B0h] [rbp-1B08h]
  _BYTE *v4042; // [rsp+9B8h] [rbp-1B00h] BYREF
  __int64 v4043; // [rsp+9C0h] [rbp-1AF8h] BYREF
  _DWORD *v4044; // [rsp+9C8h] [rbp-1AF0h]
  int v4045; // [rsp+9D0h] [rbp-1AE8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+9D8h] [rbp-1AE0h] BYREF
  __int64 v4047; // [rsp+9E0h] [rbp-1AD8h]
  __int64 v4048; // [rsp+9E8h] [rbp-1AD0h]
  __int64 v4049; // [rsp+9F0h] [rbp-1AC8h]
  __int64 v4050; // [rsp+9F8h] [rbp-1AC0h]
  __int64 v4051; // [rsp+A00h] [rbp-1AB8h]
  _DWORD *v4052; // [rsp+A08h] [rbp-1AB0h]
  char *v4053; // [rsp+A10h] [rbp-1AA8h]
  __int64 v4054; // [rsp+A18h] [rbp-1AA0h]
  __int64 v4055; // [rsp+A20h] [rbp-1A98h]
  __int64 v4056; // [rsp+A28h] [rbp-1A90h]
  char *v4057; // [rsp+A30h] [rbp-1A88h]
  char *v4058; // [rsp+A38h] [rbp-1A80h]
  __int64 v4059; // [rsp+A40h] [rbp-1A78h]
  __int64 v4060; // [rsp+A48h] [rbp-1A70h]
  __int64 v4061; // [rsp+A50h] [rbp-1A68h]
  _BYTE *v4062; // [rsp+A58h] [rbp-1A60h] BYREF
  _DWORD *v4063; // [rsp+A60h] [rbp-1A58h]
  int v4064; // [rsp+A68h] [rbp-1A50h] BYREF
  __int64 v4065; // [rsp+A70h] [rbp-1A48h]
  __int64 v4066; // [rsp+A78h] [rbp-1A40h]
  __int64 v4067; // [rsp+A80h] [rbp-1A38h]
  _DWORD *v4068; // [rsp+A88h] [rbp-1A30h]
  _BYTE *v4069; // [rsp+A90h] [rbp-1A28h]
  __int64 v4070; // [rsp+A98h] [rbp-1A20h]
  char *v4071; // [rsp+AA0h] [rbp-1A18h]
  char *v4072; // [rsp+AA8h] [rbp-1A10h]
  __int64 v4073; // [rsp+AB0h] [rbp-1A08h]
  __int64 v4074; // [rsp+AB8h] [rbp-1A00h]
  __int64 v4075; // [rsp+AC0h] [rbp-19F8h]
  _BYTE *v4076; // [rsp+AC8h] [rbp-19F0h] BYREF
  _DWORD *v4077; // [rsp+AD0h] [rbp-19E8h]
  int v4078; // [rsp+AD8h] [rbp-19E0h] BYREF
  __int64 v4079; // [rsp+AE0h] [rbp-19D8h]
  __int64 v4080; // [rsp+AE8h] [rbp-19D0h]
  __int64 v4081; // [rsp+AF0h] [rbp-19C8h]
  _DWORD *v4082; // [rsp+AF8h] [rbp-19C0h]
  _DWORD *v4083; // [rsp+B00h] [rbp-19B8h]
  __int64 v4084; // [rsp+B08h] [rbp-19B0h]
  __int64 v4085; // [rsp+B10h] [rbp-19A8h]
  __int64 v4086; // [rsp+B18h] [rbp-19A0h]
  __int64 v4087; // [rsp+B20h] [rbp-1998h]
  __int64 v4088; // [rsp+B28h] [rbp-1990h]
  __int64 v4089; // [rsp+B30h] [rbp-1988h]
  __int64 v4090; // [rsp+B38h] [rbp-1980h]
  _BYTE *v4091; // [rsp+B40h] [rbp-1978h]
  __int64 v4092; // [rsp+B48h] [rbp-1970h]
  _BYTE *v4093; // [rsp+B50h] [rbp-1968h]
  _BYTE *v4094; // [rsp+B58h] [rbp-1960h]
  __int64 v4095; // [rsp+B60h] [rbp-1958h]
  char v4096[8]; // [rsp+B68h] [rbp-1950h] BYREF
  __int64 v4097; // [rsp+B70h] [rbp-1948h]
  __int64 v4098; // [rsp+B78h] [rbp-1940h]
  _BYTE *v4099; // [rsp+B80h] [rbp-1938h]
  _BYTE *v4100; // [rsp+B88h] [rbp-1930h]
  _BYTE *v4101; // [rsp+B90h] [rbp-1928h]
  _BYTE *v4102; // [rsp+B98h] [rbp-1920h]
  _BYTE *v4103; // [rsp+BA0h] [rbp-1918h]
  _DWORD *v4104; // [rsp+BA8h] [rbp-1910h]
  __int64 v4105; // [rsp+BB0h] [rbp-1908h]
  _DWORD *v4106; // [rsp+BB8h] [rbp-1900h]
  _DWORD *v4107; // [rsp+BC0h] [rbp-18F8h]
  __int64 v4108; // [rsp+BC8h] [rbp-18F0h]
  _DWORD *v4109; // [rsp+BD0h] [rbp-18E8h]
  _DWORD *v4110; // [rsp+BD8h] [rbp-18E0h]
  __int64 v4111; // [rsp+BE0h] [rbp-18D8h]
  ULONG_PTR v4112; // [rsp+BE8h] [rbp-18D0h]
  __int64 v4113; // [rsp+BF0h] [rbp-18C8h]
  ULONG_PTR v4114; // [rsp+BF8h] [rbp-18C0h]
  _DWORD *v4115; // [rsp+C00h] [rbp-18B8h]
  __int64 v4116; // [rsp+C08h] [rbp-18B0h]
  _DWORD *v4117; // [rsp+C10h] [rbp-18A8h]
  _BYTE *v4118; // [rsp+C18h] [rbp-18A0h]
  _BYTE *v4119; // [rsp+C20h] [rbp-1898h]
  __int64 v4120; // [rsp+C28h] [rbp-1890h]
  _BYTE *v4121; // [rsp+C30h] [rbp-1888h]
  _BYTE *v4122; // [rsp+C38h] [rbp-1880h]
  __int64 v4123; // [rsp+C40h] [rbp-1878h]
  __int64 v4124; // [rsp+C48h] [rbp-1870h]
  __int64 v4125; // [rsp+C50h] [rbp-1868h]
  __int64 v4126; // [rsp+C58h] [rbp-1860h]
  __int64 v4127; // [rsp+C60h] [rbp-1858h]
  __int64 v4128; // [rsp+C68h] [rbp-1850h]
  __int64 v4129; // [rsp+C70h] [rbp-1848h]
  __int64 v4130; // [rsp+C78h] [rbp-1840h]
  _DWORD *v4131; // [rsp+C80h] [rbp-1838h] BYREF
  _QWORD *v4132; // [rsp+C88h] [rbp-1830h] BYREF
  _BYTE *v4133; // [rsp+C90h] [rbp-1828h]
  _BYTE *v4134; // [rsp+C98h] [rbp-1820h]
  __int64 v4135; // [rsp+CA0h] [rbp-1818h]
  __int64 v4136; // [rsp+CA8h] [rbp-1810h]
  __int64 v4137; // [rsp+CB0h] [rbp-1808h]
  _BYTE *v4138; // [rsp+CB8h] [rbp-1800h]
  _BYTE *v4139; // [rsp+CC0h] [rbp-17F8h]
  __int64 v4140; // [rsp+CC8h] [rbp-17F0h]
  _BYTE *v4141; // [rsp+CD0h] [rbp-17E8h]
  __int64 v4142; // [rsp+CD8h] [rbp-17E0h]
  __int64 v4143; // [rsp+CE0h] [rbp-17D8h]
  __int64 v4144; // [rsp+CE8h] [rbp-17D0h]
  __int64 v4145; // [rsp+CF0h] [rbp-17C8h]
  __int64 v4146; // [rsp+CF8h] [rbp-17C0h]
  __int64 v4147; // [rsp+D00h] [rbp-17B8h]
  __int64 v4148; // [rsp+D08h] [rbp-17B0h]
  _BYTE *v4149; // [rsp+D10h] [rbp-17A8h]
  _BYTE *v4150; // [rsp+D18h] [rbp-17A0h]
  _BYTE *v4151; // [rsp+D20h] [rbp-1798h]
  __int64 v4152; // [rsp+D28h] [rbp-1790h]
  _BYTE *v4153; // [rsp+D30h] [rbp-1788h]
  _BYTE *v4154; // [rsp+D38h] [rbp-1780h]
  _BYTE *v4155; // [rsp+D40h] [rbp-1778h]
  __int64 v4156; // [rsp+D48h] [rbp-1770h]
  _BYTE *v4157; // [rsp+D50h] [rbp-1768h]
  _BYTE *v4158; // [rsp+D58h] [rbp-1760h]
  _BYTE *v4159; // [rsp+D60h] [rbp-1758h]
  _BYTE *v4160; // [rsp+D68h] [rbp-1750h]
  _BYTE *v4161; // [rsp+D70h] [rbp-1748h]
  _BYTE *v4162; // [rsp+D78h] [rbp-1740h]
  _BYTE *v4163; // [rsp+D80h] [rbp-1738h]
  __int64 v4164; // [rsp+D88h] [rbp-1730h]
  __int64 v4165; // [rsp+D90h] [rbp-1728h]
  _DWORD *v4166; // [rsp+D98h] [rbp-1720h]
  _DWORD *v4167; // [rsp+DA0h] [rbp-1718h]
  _BYTE *v4168; // [rsp+DA8h] [rbp-1710h]
  _BYTE *v4169; // [rsp+DB0h] [rbp-1708h]
  _BYTE *v4170; // [rsp+DB8h] [rbp-1700h]
  _BYTE *v4171; // [rsp+DC0h] [rbp-16F8h]
  _BYTE *v4172; // [rsp+DC8h] [rbp-16F0h]
  _BYTE *v4173; // [rsp+DD0h] [rbp-16E8h]
  _BYTE *v4174; // [rsp+DD8h] [rbp-16E0h]
  _BYTE *v4175; // [rsp+DE0h] [rbp-16D8h]
  int *v4176; // [rsp+DE8h] [rbp-16D0h]
  __int64 v4177; // [rsp+DF0h] [rbp-16C8h]
  int *v4178; // [rsp+DF8h] [rbp-16C0h]
  __int64 v4179; // [rsp+E00h] [rbp-16B8h]
  _BYTE *v4180; // [rsp+E08h] [rbp-16B0h]
  _BYTE *v4181; // [rsp+E10h] [rbp-16A8h]
  _BYTE *v4182; // [rsp+E18h] [rbp-16A0h]
  __int64 v4183; // [rsp+E20h] [rbp-1698h]
  _BYTE *v4184; // [rsp+E28h] [rbp-1690h]
  __int64 v4185; // [rsp+E30h] [rbp-1688h]
  __int64 v4186; // [rsp+E38h] [rbp-1680h]
  _BYTE *v4187; // [rsp+E40h] [rbp-1678h]
  __int64 v4188; // [rsp+E48h] [rbp-1670h]
  __int64 v4189; // [rsp+E50h] [rbp-1668h]
  __int64 v4190; // [rsp+E58h] [rbp-1660h]
  __int64 v4191; // [rsp+E60h] [rbp-1658h]
  __int64 v4192; // [rsp+E68h] [rbp-1650h]
  __int64 v4193; // [rsp+E70h] [rbp-1648h]
  _BYTE *v4194; // [rsp+E78h] [rbp-1640h]
  _BYTE *v4195; // [rsp+E80h] [rbp-1638h]
  __int64 v4196; // [rsp+E88h] [rbp-1630h]
  __int64 v4197; // [rsp+E90h] [rbp-1628h]
  __int64 v4198; // [rsp+E98h] [rbp-1620h]
  __int64 v4199; // [rsp+EA0h] [rbp-1618h]
  __int64 v4200; // [rsp+EA8h] [rbp-1610h]
  __int64 v4201; // [rsp+EB0h] [rbp-1608h]
  unsigned int *v4202; // [rsp+EB8h] [rbp-1600h] BYREF
  __int64 v4203; // [rsp+EC0h] [rbp-15F8h]
  __int64 v4204; // [rsp+EC8h] [rbp-15F0h]
  __int64 v4205; // [rsp+ED0h] [rbp-15E8h]
  __int64 v4206; // [rsp+ED8h] [rbp-15E0h]
  __int64 v4207; // [rsp+EE0h] [rbp-15D8h]
  __int64 v4208; // [rsp+EE8h] [rbp-15D0h]
  __int64 v4209; // [rsp+EF0h] [rbp-15C8h]
  __int64 v4210; // [rsp+EF8h] [rbp-15C0h]
  __int64 v4211; // [rsp+F00h] [rbp-15B8h]
  __int64 v4212; // [rsp+F08h] [rbp-15B0h]
  __int64 v4213; // [rsp+F10h] [rbp-15A8h]
  __int64 v4214; // [rsp+F18h] [rbp-15A0h]
  __int64 v4215; // [rsp+F20h] [rbp-1598h]
  __int64 v4216; // [rsp+F28h] [rbp-1590h]
  __int64 v4217; // [rsp+F30h] [rbp-1588h]
  __int64 v4218; // [rsp+F38h] [rbp-1580h]
  __int64 v4219; // [rsp+F40h] [rbp-1578h]
  __int64 v4220; // [rsp+F48h] [rbp-1570h]
  __int64 v4221; // [rsp+F50h] [rbp-1568h]
  __int64 v4222; // [rsp+F58h] [rbp-1560h]
  __int64 v4223; // [rsp+F60h] [rbp-1558h]
  __int64 v4224; // [rsp+F68h] [rbp-1550h]
  __int64 v4225; // [rsp+F70h] [rbp-1548h]
  __int64 v4226; // [rsp+F78h] [rbp-1540h]
  __int64 v4227; // [rsp+F80h] [rbp-1538h]
  __int64 v4228; // [rsp+F88h] [rbp-1530h]
  signed __int64 v4229[2]; // [rsp+F90h] [rbp-1528h] BYREF
  __int64 v4230; // [rsp+FA0h] [rbp-1518h]
  __int64 v4231; // [rsp+FA8h] [rbp-1510h]
  __int64 v4232; // [rsp+FB0h] [rbp-1508h]
  __int64 v4233; // [rsp+FB8h] [rbp-1500h]
  signed __int64 v4234[3]; // [rsp+FC0h] [rbp-14F8h] BYREF
  __int64 v4235; // [rsp+FD8h] [rbp-14E0h]
  __int64 v4236; // [rsp+FE0h] [rbp-14D8h]
  __int64 v4237; // [rsp+FE8h] [rbp-14D0h]
  __int64 v4238; // [rsp+FF0h] [rbp-14C8h]
  __int64 v4239; // [rsp+FF8h] [rbp-14C0h]
  _QWORD v4240[2]; // [rsp+1000h] [rbp-14B8h] BYREF
  char v4241[8]; // [rsp+1010h] [rbp-14A8h] BYREF
  __int64 v4242; // [rsp+1018h] [rbp-14A0h]
  __int64 v4243; // [rsp+1020h] [rbp-1498h]
  __int64 v4244; // [rsp+1028h] [rbp-1490h]
  __int64 v4245; // [rsp+1030h] [rbp-1488h]
  __int64 v4246; // [rsp+1038h] [rbp-1480h]
  __int64 v4247; // [rsp+1040h] [rbp-1478h]
  __int64 v4248; // [rsp+1048h] [rbp-1470h]
  __int64 v4249; // [rsp+1050h] [rbp-1468h]
  __int64 v4250; // [rsp+1058h] [rbp-1460h]
  __int64 v4251; // [rsp+1060h] [rbp-1458h]
  _BYTE *v4252; // [rsp+1068h] [rbp-1450h] BYREF
  char v4253[16]; // [rsp+1070h] [rbp-1448h] BYREF
  __int16 v4254; // [rsp+1080h] [rbp-1438h] BYREF
  _QWORD *v4255; // [rsp+1082h] [rbp-1436h]
  __int16 v4256; // [rsp+1090h] [rbp-1428h] BYREF
  _QWORD *v4257; // [rsp+1092h] [rbp-1426h]
  char v4258[16]; // [rsp+10A0h] [rbp-1418h] BYREF
  __int64 v4259; // [rsp+10B0h] [rbp-1408h]
  int v4260; // [rsp+10B8h] [rbp-1400h] BYREF
  __int64 v4261; // [rsp+10C0h] [rbp-13F8h]
  int v4262; // [rsp+10C8h] [rbp-13F0h] BYREF
  __int64 v4263; // [rsp+10D0h] [rbp-13E8h]
  int v4264; // [rsp+10D8h] [rbp-13E0h] BYREF
  __int64 v4265; // [rsp+10E0h] [rbp-13D8h]
  int v4266; // [rsp+10E8h] [rbp-13D0h] BYREF
  __int64 v4267; // [rsp+10F0h] [rbp-13C8h]
  _DWORD v4268[6]; // [rsp+10F8h] [rbp-13C0h] BYREF
  int v4269; // [rsp+1110h] [rbp-13A8h]
  int v4270; // [rsp+1114h] [rbp-13A4h]
  int v4271; // [rsp+1118h] [rbp-13A0h]
  int v4272; // [rsp+111Ch] [rbp-139Ch]
  _DWORD v4273[4]; // [rsp+1120h] [rbp-1398h] BYREF
  __int64 v4274; // [rsp+1130h] [rbp-1388h] BYREF
  unsigned __int64 v4275; // [rsp+1138h] [rbp-1380h]
  _DWORD v4276[4]; // [rsp+1140h] [rbp-1378h] BYREF
  int v4277; // [rsp+1150h] [rbp-1368h]
  unsigned __int64 v4278; // [rsp+1154h] [rbp-1364h]
  int v4279; // [rsp+115Ch] [rbp-135Ch]
  int v4280; // [rsp+1160h] [rbp-1358h]
  int v4281; // [rsp+1164h] [rbp-1354h]
  int v4282; // [rsp+1168h] [rbp-1350h]
  int v4283; // [rsp+116Ch] [rbp-134Ch]
  _BYTE v4284[16]; // [rsp+1170h] [rbp-1348h] BYREF
  _BYTE v4285[16]; // [rsp+1180h] [rbp-1338h] BYREF
  _BYTE v4286[16]; // [rsp+1190h] [rbp-1328h] BYREF
  _BYTE v4287[16]; // [rsp+11A0h] [rbp-1318h] BYREF
  _BYTE v4288[16]; // [rsp+11B0h] [rbp-1308h] BYREF
  _BYTE v4289[16]; // [rsp+11C0h] [rbp-12F8h] BYREF
  _BYTE v4290[16]; // [rsp+11D0h] [rbp-12E8h] BYREF
  _BYTE v4291[16]; // [rsp+11E0h] [rbp-12D8h] BYREF
  _BYTE v4292[16]; // [rsp+11F0h] [rbp-12C8h] BYREF
  _BYTE v4293[16]; // [rsp+1200h] [rbp-12B8h] BYREF
  _BYTE v4294[16]; // [rsp+1210h] [rbp-12A8h] BYREF
  _BYTE v4295[16]; // [rsp+1220h] [rbp-1298h] BYREF
  _BYTE v4296[16]; // [rsp+1230h] [rbp-1288h] BYREF
  _BYTE v4297[16]; // [rsp+1240h] [rbp-1278h] BYREF
  _BYTE v4298[16]; // [rsp+1250h] [rbp-1268h]
  _BYTE v4299[16]; // [rsp+1260h] [rbp-1258h]
  unsigned __int64 v4300; // [rsp+1270h] [rbp-1248h] BYREF
  ULONG_PTR v4301; // [rsp+1278h] [rbp-1240h]
  unsigned int v4302; // [rsp+1280h] [rbp-1238h]
  char v4303[8]; // [rsp+1288h] [rbp-1230h] BYREF
  __int64 v4304; // [rsp+1290h] [rbp-1228h]
  int v4305; // [rsp+129Ch] [rbp-121Ch]
  char v4306[8]; // [rsp+12A0h] [rbp-1218h] BYREF
  ULONG_PTR v4307; // [rsp+12A8h] [rbp-1210h]
  int v4308; // [rsp+12B4h] [rbp-1204h]
  _DWORD v4309[6]; // [rsp+12B8h] [rbp-1200h] BYREF
  char v4310[8]; // [rsp+12D0h] [rbp-11E8h] BYREF
  ULONG_PTR v4311; // [rsp+12D8h] [rbp-11E0h]
  int v4312; // [rsp+12E4h] [rbp-11D4h]
  _DWORD v4313[6]; // [rsp+12E8h] [rbp-11D0h] BYREF
  char v4314[8]; // [rsp+1300h] [rbp-11B8h] BYREF
  ULONG_PTR v4315; // [rsp+1308h] [rbp-11B0h]
  int v4316; // [rsp+1314h] [rbp-11A4h]
  _DWORD v4317[6]; // [rsp+1318h] [rbp-11A0h] BYREF
  __int64 v4318; // [rsp+1330h] [rbp-1188h]
  PVOID P[2]; // [rsp+1338h] [rbp-1180h]
  __int64 v4320; // [rsp+1348h] [rbp-1170h]
  _QWORD v4321[4]; // [rsp+1350h] [rbp-1168h] BYREF
  PVOID v4322[5]; // [rsp+1370h] [rbp-1148h] BYREF
  PVOID v4323[2]; // [rsp+1398h] [rbp-1120h]
  __int64 v4324; // [rsp+13A8h] [rbp-1110h]
  _QWORD v4325[4]; // [rsp+13B0h] [rbp-1108h] BYREF
  _QWORD v4326[4]; // [rsp+13D0h] [rbp-10E8h] BYREF
  _QWORD v4327[4]; // [rsp+13F0h] [rbp-10C8h] BYREF
  PVOID *v4328; // [rsp+1410h] [rbp-10A8h] BYREF
  __int64 (__fastcall **v4329)(); // [rsp+1418h] [rbp-10A0h]
  _BYTE v4330[32]; // [rsp+1430h] [rbp-1088h] BYREF
  _BYTE v4331[32]; // [rsp+1450h] [rbp-1068h] BYREF
  int v4332; // [rsp+1470h] [rbp-1048h] BYREF
  ULONG_PTR v4333; // [rsp+1478h] [rbp-1040h]
  ULONG_PTR v4334; // [rsp+1480h] [rbp-1038h]
  __int64 v4335; // [rsp+1488h] [rbp-1030h]
  void *v4336; // [rsp+1490h] [rbp-1028h]
  _QWORD v4337[3]; // [rsp+1498h] [rbp-1020h] BYREF
  __int64 v4338; // [rsp+14B0h] [rbp-1008h]
  __int64 v4339; // [rsp+14B8h] [rbp-1000h]
  __int64 v4340; // [rsp+14C0h] [rbp-FF8h]
  _QWORD v4341[3]; // [rsp+14C8h] [rbp-FF0h] BYREF
  __int64 v4342; // [rsp+14E0h] [rbp-FD8h]
  __int64 v4343; // [rsp+14E8h] [rbp-FD0h]
  __int64 v4344; // [rsp+14F0h] [rbp-FC8h]
  _QWORD v4345[3]; // [rsp+14F8h] [rbp-FC0h] BYREF
  __int64 v4346; // [rsp+1510h] [rbp-FA8h]
  __int64 v4347; // [rsp+1518h] [rbp-FA0h]
  __int64 v4348; // [rsp+1520h] [rbp-F98h]
  __int64 v4349; // [rsp+1530h] [rbp-F88h]
  __int64 v4350; // [rsp+1538h] [rbp-F80h]
  __int64 v4351; // [rsp+1540h] [rbp-F78h]
  ULONG_PTR BugCheckParameter3; // [rsp+1548h] [rbp-F70h] BYREF
  __int64 v4353; // [rsp+1550h] [rbp-F68h]
  __int64 *v4354; // [rsp+1558h] [rbp-F60h]
  ULONG_PTR v4355; // [rsp+1560h] [rbp-F58h]
  __int64 v4356; // [rsp+1568h] [rbp-F50h]
  unsigned int v4357; // [rsp+1570h] [rbp-F48h]
  int v4358; // [rsp+1574h] [rbp-F44h]
  __int64 v4359; // [rsp+1580h] [rbp-F38h]
  __int64 v4360; // [rsp+1588h] [rbp-F30h]
  __int64 v4361; // [rsp+1590h] [rbp-F28h]
  ULONG_PTR v4362; // [rsp+1598h] [rbp-F20h] BYREF
  __int64 v4363; // [rsp+15A0h] [rbp-F18h]
  __int64 *v4364; // [rsp+15A8h] [rbp-F10h]
  ULONG_PTR v4365; // [rsp+15B0h] [rbp-F08h]
  __int64 v4366; // [rsp+15B8h] [rbp-F00h]
  unsigned int v4367; // [rsp+15C0h] [rbp-EF8h]
  int v4368; // [rsp+15C4h] [rbp-EF4h]
  __int64 v4369; // [rsp+15D8h] [rbp-EE0h] BYREF
  unsigned __int64 v4370; // [rsp+15E8h] [rbp-ED0h]
  __int64 v4371; // [rsp+15F0h] [rbp-EC8h]
  __int64 *v4372; // [rsp+15F8h] [rbp-EC0h]
  ULONG_PTR v4373; // [rsp+1620h] [rbp-E98h]
  __int64 v4374; // [rsp+1628h] [rbp-E90h]
  __int64 v4375; // [rsp+1630h] [rbp-E88h]
  ULONG_PTR v4376; // [rsp+1638h] [rbp-E80h] BYREF
  __int64 v4377; // [rsp+1640h] [rbp-E78h]
  __int64 *v4378; // [rsp+1648h] [rbp-E70h]
  ULONG_PTR v4379; // [rsp+1650h] [rbp-E68h]
  __int64 v4380; // [rsp+1658h] [rbp-E60h]
  unsigned int v4381; // [rsp+1660h] [rbp-E58h]
  int v4382; // [rsp+1664h] [rbp-E54h]
  __int64 (__fastcall *v4383)(__int64, __int64); // [rsp+1670h] [rbp-E48h]
  __int64 v4384; // [rsp+1678h] [rbp-E40h]
  __int64 v4385; // [rsp+1680h] [rbp-E38h]
  ULONG_PTR v4386; // [rsp+1688h] [rbp-E30h] BYREF
  __int64 v4387; // [rsp+1690h] [rbp-E28h]
  unsigned int **v4388; // [rsp+1698h] [rbp-E20h]
  ULONG_PTR v4389; // [rsp+16A0h] [rbp-E18h]
  __int64 v4390; // [rsp+16A8h] [rbp-E10h]
  unsigned int v4391; // [rsp+16B0h] [rbp-E08h]
  int v4392; // [rsp+16B4h] [rbp-E04h]
  _QWORD v4393[17]; // [rsp+16C0h] [rbp-DF8h] BYREF
  char v4394; // [rsp+1748h] [rbp-D70h] BYREF
  _DWORD v4395[6]; // [rsp+1750h] [rbp-D68h] BYREF
  int v4396; // [rsp+1768h] [rbp-D50h]
  int v4397; // [rsp+1780h] [rbp-D38h]
  int v4398; // [rsp+1798h] [rbp-D20h]
  int v4399; // [rsp+17B0h] [rbp-D08h]
  int v4400; // [rsp+17C8h] [rbp-CF0h]
  int v4401; // [rsp+17E0h] [rbp-CD8h]
  int v4402; // [rsp+17F8h] [rbp-CC0h]
  __int64 v4403; // [rsp+1800h] [rbp-CB8h]
  int v4404; // [rsp+1810h] [rbp-CA8h]
  int v4405; // [rsp+1828h] [rbp-C90h]
  ULONG_PTR v4406[6]; // [rsp+1850h] [rbp-C68h]
  __int128 v4407; // [rsp+1880h] [rbp-C38h]
  __int128 v4408; // [rsp+1890h] [rbp-C28h]
  __int128 v4409; // [rsp+18A0h] [rbp-C18h]
  __int128 v4410; // [rsp+18B0h] [rbp-C08h]
  __int128 v4411; // [rsp+18C0h] [rbp-BF8h]
  __int128 v4412; // [rsp+18D0h] [rbp-BE8h]
  __int128 v4413; // [rsp+18E0h] [rbp-BD8h]
  __int64 (__fastcall *v4414)(); // [rsp+18F0h] [rbp-BC8h]
  __int64 (__fastcall *v4415)(int, int, int, int, __int64); // [rsp+18F8h] [rbp-BC0h]
  __int128 v4416; // [rsp+1900h] [rbp-BB8h]
  void *v4417; // [rsp+1910h] [rbp-BA8h]
  KIRQL (__stdcall *v4418)(PKSPIN_LOCK); // [rsp+1918h] [rbp-BA0h]
  void (__stdcall *v4419)(PKSPIN_LOCK, KIRQL); // [rsp+1920h] [rbp-B98h]
  __int64 (__fastcall *v4420)(); // [rsp+1928h] [rbp-B90h]
  void (__stdcall *v4421)(PGROUP_AFFINITY, PGROUP_AFFINITY); // [rsp+1930h] [rbp-B88h]
  void (__stdcall *v4422)(PGROUP_AFFINITY); // [rsp+1938h] [rbp-B80h]
  __int64 (__fastcall *v4423)(); // [rsp+1940h] [rbp-B78h]
  void (__fastcall __noreturn *v4424)(__int64); // [rsp+1948h] [rbp-B70h]
  __int64 (__fastcall *v4425)(); // [rsp+1950h] [rbp-B68h]
  void *(__cdecl *v4426)(void *, const void *, size_t); // [rsp+1958h] [rbp-B60h]
  __int64 *v4427; // [rsp+1960h] [rbp-B58h]
  __int64 (__fastcall *v4428)(int, int, int, int, __int64); // [rsp+1968h] [rbp-B50h]
  NTSTATUS (__stdcall *v4429)(KPROCESSOR_MODE, BOOLEAN, PLARGE_INTEGER); // [rsp+1970h] [rbp-B48h]
  NTSTATUS (__stdcall *v4430)(PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, PLARGE_INTEGER); // [rsp+1978h] [rbp-B40h]
  __int64 (__fastcall *v4431)(ULONG_PTR); // [rsp+1980h] [rbp-B38h]
  __int64 (__fastcall *v4432)(ULONG_PTR); // [rsp+1988h] [rbp-B30h]
  __int64 (__fastcall *v4433)(); // [rsp+1990h] [rbp-B28h]
  __int64 (__fastcall *v4434)(); // [rsp+1998h] [rbp-B20h]
  __int64 (__fastcall *v4435)(); // [rsp+19A0h] [rbp-B18h]
  __int64 (__fastcall *v4436)(); // [rsp+19A8h] [rbp-B10h]
  ULONG_PTR (__stdcall *v4437)(PKIPI_BROADCAST_WORKER, ULONG_PTR); // [rsp+19B0h] [rbp-B08h]
  __int64 (__fastcall *v4438)(); // [rsp+19B8h] [rbp-B00h]
  __int64 (__fastcall *v4439)(); // [rsp+19C0h] [rbp-AF8h]
  __int64 (__fastcall *v4440)(); // [rsp+19C8h] [rbp-AF0h]
  __int64 (__fastcall *v4441)(int, int, int, int, __int64); // [rsp+19D0h] [rbp-AE8h]
  __int64 (__fastcall *v4442)(); // [rsp+19D8h] [rbp-AE0h]
  _BYTE v4443[256]; // [rsp+19E0h] [rbp-AD8h] BYREF
  void (__fastcall *v4444)(ULONG_PTR); // [rsp+1AE0h] [rbp-9D8h]
  void (__fastcall *v4445)(__int64, unsigned __int64, _QWORD, unsigned __int64, unsigned __int64); // [rsp+1BB8h] [rbp-900h]
  __int64 (__fastcall *v4446)(_BYTE *, _BYTE *, _QWORD, _QWORD); // [rsp+1CA0h] [rbp-818h]
  void (__fastcall *v4447)(_QWORD, _QWORD, _QWORD); // [rsp+1D40h] [rbp-778h]
  __int64 v4448; // [rsp+1D50h] [rbp-768h]
  __int64 v4449; // [rsp+1F70h] [rbp-548h]
  __int64 v4450; // [rsp+1FB0h] [rbp-508h]
  __int64 v4451; // [rsp+2010h] [rbp-4A8h]
  __int64 v4452; // [rsp+2078h] [rbp-440h]
  __int64 v4453; // [rsp+2168h] [rbp-350h]
  _BYTE *v4454; // [rsp+2170h] [rbp-348h]
  __int64 v4455; // [rsp+21A0h] [rbp-318h]
  _DWORD *v4456; // [rsp+21B8h] [rbp-300h]
  int v4457; // [rsp+2218h] [rbp-2A0h]
  int v4458; // [rsp+22D8h] [rbp-1E0h] BYREF
  signed __int32 *v4459; // [rsp+22E0h] [rbp-1D8h]
  __int64 v4460; // [rsp+22E8h] [rbp-1D0h]
  __int64 v4461; // [rsp+22F0h] [rbp-1C8h]
  __int64 v4462; // [rsp+22F8h] [rbp-1C0h]
  char v4463; // [rsp+2300h] [rbp-1B8h]
  int v4464; // [rsp+2304h] [rbp-1B4h]
  int v4465; // [rsp+2370h] [rbp-148h]
  __int64 v4466; // [rsp+2378h] [rbp-140h]
  _BYTE *v4467; // [rsp+23C0h] [rbp-F8h]
  __int64 v4468; // [rsp+23C8h] [rbp-F0h]
  __int64 v4469; // [rsp+23D0h] [rbp-E8h]
  unsigned __int64 v4470; // [rsp+2478h] [rbp-40h]
  BOOLEAN QuotaCharged; // [rsp+24C8h] [rbp+10h] BYREF
  unsigned int v4473; // [rsp+24D0h] [rbp+18h]
  __int64 v4474; // [rsp+24D8h] [rbp+20h]

  v4474 = a4;
  v4473 = a3;
  _disable();
  v5 = 0;
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v4041 = 5LL;
  v6 = 41;
  if ( a4 )
  {
    if ( a2 > 5 || !_bittest(&v6, a2) )
      a2 = 0;
    v7 = a5 | 4;
  }
  else
  {
    if ( ((a2 - 3) & 0xFFFFFFFD) != 0 )
    {
      v3888 = a5;
      goto LABEL_12;
    }
    v7 = a5;
    a2 = 0;
  }
  v3888 = v7;
LABEL_12:
  v8 = __2b;
  v9 = 0;
  v10 = 0;
  if ( !_bittest(&v8, a2) )
    v10 = a2;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  if ( KiInitData != 12 )
  {
    v3889[1] = -805294751;
    KeBugCheckEx(__ROR4__(-805306349, 92), 2uLL, 0LL, KiInitData, 0xCuLL);
  }
  for ( i = &_ts_83; i != &_ts_z; ++i )
    v5 += *i;
  for ( j = &_ps_0; j != &_ps_z; ++j )
    v9 += *j;
  if ( v5 != v9 )
  {
    v3889[3] = -805294751;
    KeBugCheckEx(__ROR4__(-805306349, 92), 0xCuLL, v5, v9, 0LL);
  }
  if ( !__2a )
  {
    v4300 = 0x140000000uLL;
    v13 = 0LL;
    if ( (int)LdrResFindResource(
                0x40000000u,
                10,
                (unsigned int)L"FUNCTIONEXTENTLIST",
                0,
                (__int64)&BugCheckParameter2,
                (__int64)&v4043,
                0LL,
                0LL,
                0) >= 0
      && (unsigned __int64)(v4043 - 8) <= 0xFFFFFFF7 )
    {
      v3890 = v4043;
      if ( RtlImageNtHeader(0x140000000uLL) )
      {
        LOBYTE(v14) = 1;
        v15 = RtlImageDirectoryEntryToData(0x140000000uLL, v14, 3LL, v3902);
        if ( v15 )
        {
          PoolWithTag = 0LL;
          v17 = -1073741823;
          if ( *(_DWORD *)BugCheckParameter2 != 1163416643 )
          {
            if ( *(_DWORD *)BugCheckParameter2 != 1163416652 )
              goto LABEL_33;
            goto LABEL_86;
          }
          if ( RtlGetCompressionWorkSpaceSize(4u, CompressBufferWorkSpaceSize, &CompressFragmentWorkSpaceSize) >= 0 )
          {
            v23 = *(unsigned int *)(BugCheckParameter2 + 4);
            if ( (unsigned int)v23 < 8 )
            {
              CompressBufferWorkSpaceSize[1] = -805294751;
              KeBugCheckEx(__ROR4__(-805306349, 92), 0xEuLL, BugCheckParameter2, 0x140000000uLL, v3890);
            }
            v24 = __rdtsc();
            v25 = (__ROR8__(v24, 3) ^ v24) * (unsigned __int128)0x7010008004002001uLL;
            v4048 = *((_QWORD *)&v25 + 1);
            v26 = ((unsigned __int64)v25 ^ *((_QWORD *)&v25 + 1)) % 0xB;
            if ( (unsigned int)v26 > 5 )
            {
              v30 = v26 - 6;
              if ( v30 )
              {
                v31 = v30 - 1;
                if ( v31 )
                {
                  v32 = v31 - 1;
                  if ( v32 )
                  {
                    if ( v32 == 1 )
                    {
                      v3854 = -1333354875;
                      v29 = __ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v33 = __rdtsc();
                      v34 = __ROR8__(v33, 3);
                      v4049 = ((v34 ^ v33) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v29 = ((((((((unsigned int)v4049 ^ (67117057 * ((unsigned int)v34 ^ (unsigned int)v33))) % 0x1A
                                + 97) << 8) | ((((unsigned int)v4049 ^ (67117057
                                                                      * ((unsigned int)v34 ^ (unsigned int)v33))) >> 5)
                                             % 0x1A
                                             + 65)) << 8) | ((((unsigned int)v4049 ^ (67117057
                                                                                    * ((unsigned int)v34 ^ (unsigned int)v33))) >> 10)
                                                           % 0x1A
                                                           + 97)) << 8) | ((((unsigned int)v4049 ^ (67117057
                                                                                                  * ((unsigned int)v34 ^ (unsigned int)v33))) >> 15)
                                                                         % 0x1A
                                                                         + 65);
                    }
                  }
                  else
                  {
                    v3855 = 1684422978;
                    v29 = __ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3856 = -2100910376;
                  v29 = __ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3857 = 1314342514;
                v29 = __ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v26 == 5 )
            {
              CompressBufferWorkSpaceSize[7] = 680282605;
              v29 = __ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v26 )
            {
              v27 = v26 - 1;
              if ( v27 )
              {
                v28 = v27 - 1;
                if ( v28 )
                {
                  if ( v28 == 1 )
                  {
                    CompressBufferWorkSpaceSize[3] = -1474152136;
                    v29 = __ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    CompressBufferWorkSpaceSize[2] = 1728537748;
                    v29 = __ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  CompressBufferWorkSpaceSize[4] = -2051698419;
                  v29 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                CompressBufferWorkSpaceSize[5] = -1297272415;
                v29 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              CompressBufferWorkSpaceSize[6] = -795291432;
              v29 = __ROR4__(-795291432, 6);
            }
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, CompressBufferWorkSpaceSize[0], v29);
            if ( !PoolWithTag )
            {
LABEL_61:
              v13 = 0LL;
              goto LABEL_33;
            }
            v35 = __rdtsc();
            v36 = (__ROR8__(v35, 3) ^ v35) * (unsigned __int128)0x7010008004002001uLL;
            v4055 = *((_QWORD *)&v36 + 1);
            v37 = ((unsigned __int64)v36 ^ *((_QWORD *)&v36 + 1)) % 0xB;
            if ( (unsigned int)v37 > 5 )
            {
              v41 = v37 - 6;
              if ( v41 )
              {
                v42 = v41 - 1;
                if ( v42 )
                {
                  v43 = v42 - 1;
                  if ( v43 )
                  {
                    if ( v43 == 1 )
                    {
                      v3864 = -1333354875;
                      v40 = __ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v44 = __rdtsc();
                      v45 = __ROR8__(v44, 3);
                      v4056 = ((v45 ^ v44) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v46 = v4056 ^ (67117057 * (v45 ^ v44));
                      v40 = ((((((v46 % 0x1A + 97) << 8) | ((v46 >> 5)
                                                          - 26
                                                          * ((unsigned int)((1321528399 * (unsigned __int64)(v46 >> 5)) >> 32) >> 3)
                                                          + 65)) << 8) | ((v46 >> 10) % 0x1A + 97)) << 8) | ((v46 >> 15) % 0x1A + 65);
                    }
                  }
                  else
                  {
                    v3865 = 1684422978;
                    v40 = __ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3866 = -2100910376;
                  v40 = __ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3867 = 1314342514;
                v40 = __ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v37 == 5 )
            {
              v3863 = 680282605;
              v40 = __ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v37 )
            {
              v38 = v37 - 1;
              if ( v38 )
              {
                v39 = v38 - 1;
                if ( v39 )
                {
                  if ( v39 == 1 )
                  {
                    v3859 = -1474152136;
                    v40 = __ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    v3858 = 1728537748;
                    v40 = __ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  v3860 = -2051698419;
                  v40 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v3861 = -1297272415;
                v40 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v3862 = -795291432;
              v40 = __ROR4__(-795291432, 6);
            }
            v13 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v23, v40);
            if ( !v13 )
              goto LABEL_116;
            v48 = RtlDecompressBufferEx(
                    4,
                    (_DWORD)v13,
                    v23,
                    (int)BugCheckParameter2 + 8,
                    v3890 - 8,
                    (__int64)&v3890,
                    (__int64)PoolWithTag);
            if ( v48 < 0 )
            {
              v3868 = -805294751;
              KeBugCheckEx(__ROR4__(-805306349, 92), 0xFuLL, BugCheckParameter2, 0x140000000uLL, v48);
            }
LABEL_86:
            if ( v13 )
            {
LABEL_110:
              v62 = 0;
              for ( k = v15 - 0x40000000; v62 < v3902[0]; k += *(_DWORD *)(v15 + 4 * (v64 >> 2)) )
              {
                v64 = v62;
                v62 += 4;
              }
              v65 = v13[1];
              if ( k != (_DWORD)v65 )
              {
                v3879 = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0x10uLL, (ULONG_PTR)v13, 0x140000000uLL, v65 ^ k);
              }
              BugCheckParameter4 = *v13;
              if ( (unsigned int)BugCheckParameter4 >= 0x1FFFFFFF
                || 8 * (unsigned __int64)(unsigned int)BugCheckParameter4 > v3890 )
              {
                v3880 = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0x11uLL, (ULONG_PTR)v13, 0x140000000uLL, BugCheckParameter4);
              }
              v4302 = v3890;
              v17 = 0;
              goto LABEL_116;
            }
            v49 = __rdtsc();
            v50 = (__ROR8__(v49, 3) ^ v49) * (unsigned __int128)0x7010008004002001uLL;
            v3910 = *((_QWORD *)&v50 + 1);
            v51 = ((unsigned __int64)v50 ^ *((_QWORD *)&v50 + 1)) % 0xB;
            if ( (unsigned int)v51 > 5 )
            {
              v55 = v51 - 6;
              if ( v55 )
              {
                v56 = v55 - 1;
                if ( v56 )
                {
                  v57 = v56 - 1;
                  if ( v57 )
                  {
                    if ( v57 == 1 )
                    {
                      v3875 = -1333354875;
                      v54 = __ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v58 = __rdtsc();
                      v59 = __ROR8__(v58, 3);
                      v3911 = ((v59 ^ v58) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v60 = v3911 ^ (67117057 * (v59 ^ v58));
                      v54 = ((((((v60 % 0x1A + 97) << 8) | ((v60 >> 5)
                                                          - 26
                                                          * ((unsigned int)((1321528399 * (unsigned __int64)(v60 >> 5)) >> 32) >> 3)
                                                          + 65)) << 8) | ((v60 >> 10) % 0x1A + 97)) << 8) | ((v60 >> 15) % 0x1A + 65);
                    }
                  }
                  else
                  {
                    v3876 = 1684422978;
                    v54 = __ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3877 = -2100910376;
                  v54 = __ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3878 = 1314342514;
                v54 = __ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v51 == 5 )
            {
              v3874 = 680282605;
              v54 = __ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v51 )
            {
              v52 = v51 - 1;
              if ( v52 )
              {
                v53 = v52 - 1;
                if ( v53 )
                {
                  if ( v53 == 1 )
                  {
                    v3870 = -1474152136;
                    v54 = __ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    v3869 = 1728537748;
                    v54 = __ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  v3871 = -2051698419;
                  v54 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v3872 = -1297272415;
                v54 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v3873 = -795291432;
              v54 = __ROR4__(-795291432, 6);
            }
            v61 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3890 - 4LL, v54);
            v13 = v61;
            if ( v61 )
            {
              memmove(v61, (const void *)(BugCheckParameter2 + 4), v3890 - 4LL);
              goto LABEL_110;
            }
LABEL_116:
            if ( PoolWithTag )
              ExFreePoolWithTag(PoolWithTag, BugCheckParameter4);
            if ( !v13 || v17 >= 0 )
              goto LABEL_33;
            ExFreePoolWithTag(v13, BugCheckParameter4);
            goto LABEL_61;
          }
        }
      }
    }
LABEL_33:
    v4301 = (ULONG_PTR)v13;
    v18 = &v4300;
    v19 = 24;
    v20 = &__2a;
    v21 = 3LL;
    do
    {
      v19 -= 8;
      *v20++ = *v18++;
      --v21;
    }
    while ( v21 );
    for ( ; v19; --v19 )
    {
      v22 = *(_BYTE *)v18;
      v18 = (unsigned __int64 *)((char *)v18 + 1);
      *(_BYTE *)v20 = v22;
      v20 = (__int64 *)((char *)v20 + 1);
    }
    goto LABEL_125;
  }
  v66 = 24;
  v67 = &__2a;
  v68 = &v4300;
  v69 = 3LL;
  do
  {
    v66 -= 8;
    *v68++ = *v67++;
    --v69;
  }
  while ( v69 );
  for ( ; v66; --v66 )
  {
    v70 = *(_BYTE *)v67;
    v67 = (__int64 *)((char *)v67 + 1);
    *(_BYTE *)v68 = v70;
    v68 = (unsigned __int64 *)((char *)v68 + 1);
  }
LABEL_125:
  if ( !RtlPcToFileHeader(FsRtlUninitializeSmallMcb, v3912) )
    return 0;
  v71 = RtlImageNtHeader(v3912[0]);
  if ( !v71 )
    return 0;
  v72 = RtlSectionTableFromVirtualAddress(v71, v3912[0], (unsigned int)FsRtlUninitializeSmallMcb - LODWORD(v3912[0]));
  if ( !v72 )
    return 0;
  v73 = (void *)(v3912[0] + *(unsigned int *)(v72 + 12));
  v74 = *(unsigned int *)(v72 + 8);
  v3834 = (unsigned int)FsRtlUninitializeSmallMcb - (unsigned int)v73;
  Src = v73;
  LODWORD(v3844) = v74;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3833 = (unsigned int)pg_unknown20 - (unsigned int)v73;
  v75 = (unsigned int)RtlLookupFunctionEntryEx - (unsigned int)v73;
  v3836 = v75;
  v3837 = (unsigned int)pg_unknown19 - (unsigned int)v73;
  if ( (unsigned int)v75 > 0x7FFFFFFF )
  {
    v3881 = -805294751;
    KeBugCheckEx(
      __ROR4__(-805306349, 92),
      9uLL,
      (unsigned int)v75,
      v74,
      (unsigned int)FsRtlUninitializeSmallMcb - (unsigned int)v73);
  }
  v76 = 0;
  if ( (unsigned int)MmStrongCodeGuaranteesEnforced() )
    v76 = ((__int64 (*)(void))pg_unknown16)() != 0;
  if ( v10 == 7 )
    v76 = 1;
  v3845 = v76;
  if ( v10 == 3
    && (v77 = __rdtsc(),
        v78 = (__ROR8__(v77, 3) ^ v77) * (unsigned __int128)0x7010008004002001uLL,
        v3912[1] = *((_QWORD *)&v78 + 1),
        ((unsigned __int64)v78 ^ *((_QWORD *)&v78 + 1)) % 0xA < 5) )
  {
    LODWORD(v3849) = 3;
  }
  else
  {
    v79 = __rdtsc();
    v80 = (__ROR8__(v79, 3) ^ v79) * (unsigned __int128)0x7010008004002001uLL;
    v3912[2] = *((_QWORD *)&v80 + 1);
    if ( ((unsigned __int64)v80 ^ *((_QWORD *)&v80 + 1)) % 0xA >= 2 )
    {
      LODWORD(v3849) = 0;
    }
    else
    {
      v81 = __rdtsc();
      v82 = (__ROR8__(v81, 3) ^ v81) * (unsigned __int128)0x7010008004002001uLL;
      v3912[3] = *((_QWORD *)&v82 + 1);
      v3849 = (DWORD2(v82) ^ (unsigned int)v82) & 1;
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3882 = v10;
  if ( v76 )
  {
    LODWORD(v3849) = 0;
    v3882 = v10;
    if ( v10 != 7 )
    {
      v83 = 0;
      if ( v10 - 3 > 1 )
        v83 = v10;
      v3882 = v83;
    }
  }
  qword_140C00210[0] = (__int64)off_140C005D8;
  *(_OWORD *)P = 0LL;
  v84 = 0;
  v4320 = 0LL;
  v85 = 0;
  v4318 = 0LL;
  LODWORD(v3851) = 0;
  v3853 = 0;
  do
  {
    v86 = qword_140C00210[v84];
    v87 = RtlLookupFunctionTable(v86, &BugCheckParameter3, v3883);
    v4350 = v87;
    if ( !v87 )
    {
      v96 = v4354;
      v89 = v4351;
      v97 = v3846;
      goto LABEL_166;
    }
    v4355 = 0LL;
    if ( v4300 == BugCheckParameter3 )
    {
      v88 = (_DWORD *)v4301;
      v4355 = v4301;
      v4356 = 0LL;
      v4357 = v4302;
      v4358 = 0;
      v89 = RtlLookupFunctionEntry(v86, &BugCheckParameter3, 0LL);
      v4351 = v89;
      if ( v89 )
      {
        v90 = v89 - BugCheckParameter3;
        v91 = 0;
        v92 = *v88 - 1;
        if ( v92 >= 0 )
        {
          do
          {
            v93 = (v92 + v91) >> 1;
            v94 = &v88[2 * v93 + 2];
            if ( v90 - *v94 >= 0 )
            {
              if ( v90 - *v94 <= 0 )
                break;
              v91 = v93 + 1;
            }
            else
            {
              if ( !v93 )
                goto LABEL_162;
              v92 = v93 - 1;
            }
          }
          while ( v92 >= v91 );
          v95 = (_DWORD *)v4356;
          if ( v92 >= v91 )
            v95 = &v88[2 * v93 + 2];
          v4356 = (__int64)v95;
        }
      }
LABEL_162:
      v87 = v4350;
    }
    else
    {
      v89 = v4351;
    }
    v96 = v3913;
    v97 = BugCheckParameter3;
    v4349 = v86;
    v3883[0] /= 0xCu;
    v4354 = v3913;
    v3846 = BugCheckParameter3;
    v4353 = v87 + 12LL * v3883[0];
LABEL_166:
    while ( v87 && v87 != v4353 )
    {
      if ( v4355 )
      {
        if ( !v89 )
          break;
        if ( v4356 )
        {
          v98 = *(_DWORD *)(v4356 + 4);
          if ( (v98 & 1) != 0 )
          {
            *v96 = BugCheckParameter3 + (v98 & 0xFFFFFFFE);
            v4356 = 0LL;
          }
          else
          {
            v99 = (unsigned int)(v4358 + v98);
            v100 = (unsigned int)v99;
            v101 = v99 + 4;
            if ( v101 < v100 || v101 > v4357 )
            {
              v3883[11] = -805294751;
              KeBugCheckEx(__ROR4__(-805306349, 92), 0x12uLL, v4355, BugCheckParameter3, v100);
            }
            v102 = *(_DWORD *)(v100 + v4355);
            v4358 += 4;
            v4356 &= -(__int64)((v102 & 1) != 0);
            if ( (v102 & 1) != 0 )
              v102 &= ~1u;
            *v96 = BugCheckParameter3 + v102;
          }
        }
        else
        {
          *v96 = v89;
          v4351 = 0LL;
        }
      }
      else
      {
        while ( 1 )
        {
          v103 = v87;
          v104 = RtlpConvertFunctionEntry(v87, BugCheckParameter3, v96);
          v105 = RtlpSameFunction(v104, BugCheckParameter3, v4349);
          v87 = v4350 + 12;
          v4350 += 12LL;
          if ( v105 )
            break;
          if ( v87 == v4353 )
            goto LABEL_181;
        }
        *v4354 = v103;
      }
      v107 = *(unsigned int *)v3913[0];
      v108 = *(_DWORD *)(v3913[0] + 4LL) - v107;
      HIDWORD(v4320) += v108;
      LODWORD(Size) = v85 + 1;
      v109 = (v97 + v107) & 0xFFFFFFFFFFFFF000uLL;
      v3850 = v97 + v107 + v108;
      do
      {
        v110 = v4321;
        v111 = 4LL;
        v112 = MmPteBase + ((v109 >> 9) & 0x7FFFFFFFF8LL);
        do
        {
          *v110++ = v112;
          v112 = MmPteBase + ((v112 >> 9) & 0x7FFFFFFFF8LL);
          --v111;
        }
        while ( v111 );
        v113 = 0;
        v114 = 3;
        do
        {
          v115 = v114;
          if ( v113 )
          {
            v4321[v114] = 0LL;
          }
          else
          {
            if ( !v114 )
              break;
            v113 = *(char *)v4321[v114] < 0;
          }
          --v114;
        }
        while ( v115 );
        v116 = v3853;
        LODWORD(v117) = 4;
        do
        {
          v117 = (unsigned int)(v117 - 1);
          v118 = v4321[v117];
          if ( !v118 )
            break;
          v119 = 0;
          if ( HIDWORD(P[1]) )
          {
            do
            {
              if ( v118 == *((_QWORD *)P[0] + v119) )
                break;
              ++v119;
            }
            while ( v119 < HIDWORD(P[1]) );
            v116 = v3853;
          }
          if ( v119 == HIDWORD(P[1]) )
          {
            if ( HIDWORD(P[1]) == v116 )
            {
              v116 = 2 * v116 + 64;
              v3853 = v116;
              v120 = __rdtsc();
              v121 = (__ROR8__(v120, 3) ^ v120) * (unsigned __int128)0x7010008004002001uLL;
              v3913[1] = *((_QWORD *)&v121 + 1);
              v122 = ((unsigned __int64)v121 ^ *((_QWORD *)&v121 + 1)) % 0xB;
              if ( (unsigned int)v122 > 5 )
              {
                v126 = v122 - 6;
                if ( v126 )
                {
                  v127 = v126 - 1;
                  if ( v127 )
                  {
                    v128 = v127 - 1;
                    if ( v128 )
                    {
                      if ( v128 == 1 )
                      {
                        v3883[7] = -1333354875;
                        v125 = __ROR4__(-1333354868, 33);
                      }
                      else
                      {
                        v129 = __rdtsc();
                        v130 = __ROR8__(v129, 3);
                        v3914 = ((v130 ^ v129) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v131 = v3914 ^ (67117057 * (v130 ^ v129));
                        v125 = ((((((v131 % 0x1A + 97) << 8) | ((v131 >> 5)
                                                              - 26
                                                              * ((unsigned int)((1321528399
                                                                               * (unsigned __int64)(v131 >> 5)) >> 32) >> 3)
                                                              + 65)) << 8) | ((v131 >> 10) % 0x1A + 97)) << 8) | ((v131 >> 15) % 0x1A + 65);
                      }
                    }
                    else
                    {
                      v3883[8] = 1684422978;
                      v125 = __ROR4__(1684422978, 8);
                    }
                  }
                  else
                  {
                    v3883[9] = -2100910376;
                    v125 = __ROL4__(-2100910376, 7);
                  }
                }
                else
                {
                  v3883[10] = 1314342514;
                  v125 = __ROR4__(1314342516, 24);
                }
              }
              else if ( (_DWORD)v122 == 5 )
              {
                v3883[6] = 680282605;
                v125 = __ROR4__(680282605, 5);
              }
              else if ( (_DWORD)v122 )
              {
                v123 = v122 - 1;
                if ( v123 )
                {
                  v124 = v123 - 1;
                  if ( v124 )
                  {
                    if ( v124 == 1 )
                    {
                      v3883[2] = -1474152136;
                      v125 = __ROR4__(-1474152133, 15);
                    }
                    else
                    {
                      v3883[1] = 1728537748;
                      v125 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v3883[3] = -2051698419;
                    v125 = __ROR4__(-2051698419, 2);
                  }
                }
                else
                {
                  v3883[4] = -1297272415;
                  v125 = __ROL4__(-1297272415, 1);
                }
              }
              else
              {
                v3883[5] = -795291432;
                v125 = __ROR4__(-795291432, 6);
              }
              v132 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v116, v125);
              if ( !v132 )
                return 0;
              v133 = P[0];
              if ( P[0] )
              {
                v134 = v132;
                v135 = 8 * HIDWORD(P[1]);
                if ( (unsigned int)(8 * HIDWORD(P[1])) >= 8 )
                {
                  v136 = (unsigned __int64)v135 >> 3;
                  do
                  {
                    v135 -= 8;
                    *(_QWORD *)v134 = *v133++;
                    v134 += 8;
                    --v136;
                  }
                  while ( v136 );
                }
                if ( v135 )
                {
                  v137 = v134 - (char *)v133;
                  do
                  {
                    *((_BYTE *)v133 + v137) = *(_BYTE *)v133;
                    v133 = (_QWORD *)((char *)v133 + 1);
                    --v135;
                  }
                  while ( v135 );
                }
                ExFreePoolWithTag(P[0], v135);
              }
              P[0] = v132;
              LODWORD(P[1]) = v116;
            }
            v138 = HIDWORD(P[1]);
            ++HIDWORD(P[1]);
            HIDWORD(v4320) += 16;
            *((_QWORD *)P[0] + v138) = v118;
          }
        }
        while ( (_DWORD)v117 );
        v109 += 4096LL;
      }
      while ( v109 < v3850 );
      v85 = Size;
      v96 = v4354;
      v89 = v4351;
      v87 = v4350;
      v97 = v3846;
      LODWORD(v4320) = Size;
    }
LABEL_181:
    v84 = (_DWORD)v3851 + 1;
    LODWORD(v3851) = v84;
  }
  while ( v84 < 0xF );
  HIDWORD(v4320) += 8;
  LODWORD(Size) = v85 + 1;
  v106 = (unsigned __int64)&off_140C005D8 & 0xFFFFFFFFFFFFF000uLL;
  do
  {
    v139 = v4322;
    v140 = MmPteBase + ((v106 >> 9) & 0x7FFFFFFFF8LL);
    v141 = 4LL;
    do
    {
      *v139++ = (PVOID)v140;
      v140 = MmPteBase + ((v140 >> 9) & 0x7FFFFFFFF8LL);
      --v141;
    }
    while ( v141 );
    v142 = 0;
    v143 = 3;
    do
    {
      v144 = v143;
      if ( v142 )
      {
        v4322[v143] = 0LL;
      }
      else
      {
        if ( !v143 )
          break;
        v142 = *(char *)v4322[v143] < 0;
      }
      --v143;
    }
    while ( v144 );
    v145 = Size;
    LODWORD(v146) = 4;
    do
    {
      v146 = (unsigned int)(v146 - 1);
      v147 = v4322[v146];
      if ( !v147 )
        break;
      v148 = 0;
      if ( HIDWORD(P[1]) )
      {
        do
        {
          if ( v147 == *((PVOID *)P[0] + v148) )
            break;
          ++v148;
        }
        while ( v148 < HIDWORD(P[1]) );
        v145 = Size;
      }
      if ( v148 == HIDWORD(P[1]) )
      {
        if ( HIDWORD(P[1]) == v3853 )
        {
          v149 = 2 * v3853 + 64;
          v3853 = v149;
          v150 = __rdtsc();
          v151 = (__ROR8__(v150, 3) ^ v150) * (unsigned __int128)0x7010008004002001uLL;
          v3915 = *((_QWORD *)&v151 + 1);
          v152 = ((unsigned __int64)v151 ^ *((_QWORD *)&v151 + 1)) % 0xB;
          if ( (unsigned int)v152 > 5 )
          {
            v156 = v152 - 6;
            if ( v156 )
            {
              v157 = v156 - 1;
              if ( v157 )
              {
                v158 = v157 - 1;
                if ( v158 )
                {
                  if ( v158 == 1 )
                  {
                    v3883[18] = -1333354875;
                    v155 = __ROR4__(-1333354868, 33);
                  }
                  else
                  {
                    v159 = __rdtsc();
                    v160 = __ROR8__(v159, 3);
                    v3916 = ((v160 ^ v159) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v161 = v3916 ^ (67117057 * (v160 ^ v159));
                    v155 = ((((((v161 % 0x1A + 97) << 8) | ((v161 >> 5)
                                                          - 26
                                                          * ((unsigned int)((1321528399 * (unsigned __int64)(v161 >> 5)) >> 32) >> 3)
                                                          + 65)) << 8) | ((v161 >> 10) % 0x1A + 97)) << 8) | ((v161 >> 15) % 0x1A + 65);
                  }
                }
                else
                {
                  v3883[19] = 1684422978;
                  v155 = __ROR4__(1684422978, 8);
                }
              }
              else
              {
                v3883[20] = -2100910376;
                v155 = __ROL4__(-2100910376, 7);
              }
            }
            else
            {
              v3883[21] = 1314342514;
              v155 = __ROR4__(1314342516, 24);
            }
          }
          else if ( (_DWORD)v152 == 5 )
          {
            v3883[17] = 680282605;
            v155 = __ROR4__(680282605, 5);
          }
          else if ( (_DWORD)v152 )
          {
            v153 = v152 - 1;
            if ( v153 )
            {
              v154 = v153 - 1;
              if ( v154 )
              {
                if ( v154 == 1 )
                {
                  v3883[13] = -1474152136;
                  v155 = __ROR4__(-1474152133, 15);
                }
                else
                {
                  v3883[12] = 1728537748;
                  v155 = __ROL4__(1728537748, 4);
                }
              }
              else
              {
                v3883[14] = -2051698419;
                v155 = __ROR4__(-2051698419, 2);
              }
            }
            else
            {
              v3883[15] = -1297272415;
              v155 = __ROL4__(-1297272415, 1);
            }
          }
          else
          {
            v3883[16] = -795291432;
            v155 = __ROR4__(-795291432, 6);
          }
          v162 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v149, v155);
          if ( !v162 )
            return 0;
          v163 = P[0];
          if ( P[0] )
          {
            v164 = v162;
            v165 = 8 * HIDWORD(P[1]);
            if ( (unsigned int)(8 * HIDWORD(P[1])) >= 8 )
            {
              v166 = (unsigned __int64)v165 >> 3;
              do
              {
                v165 -= 8;
                *(_QWORD *)v164 = *v163++;
                v164 += 8;
                --v166;
              }
              while ( v166 );
            }
            if ( v165 )
            {
              v167 = v164 - (char *)v163;
              do
              {
                *((_BYTE *)v163 + v167) = *(_BYTE *)v163;
                v163 = (_QWORD *)((char *)v163 + 1);
                --v165;
              }
              while ( v165 );
            }
            ExFreePoolWithTag(P[0], v165);
          }
          LODWORD(P[1]) = v3853;
          P[0] = v162;
        }
        v168 = HIDWORD(P[1]);
        ++HIDWORD(P[1]);
        HIDWORD(v4320) += 16;
        *((_QWORD *)P[0] + v168) = v147;
      }
    }
    while ( (_DWORD)v146 );
    v106 += 4096LL;
  }
  while ( v106 < (unsigned __int64)&qword_140C005E0 );
  LODWORD(v4320) = v145;
  v169 = HIDWORD(v4320) + 16 * v145;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v170 = v3845;
  v171 = 0;
  v172 = 2720;
  if ( !v3845 )
  {
    v171 = (int)v3844;
    v172 = v169 + 2728;
  }
  LODWORD(Size) = v171;
  v3853 = v172;
  v173 = v171 + v172;
  LODWORD(v3851) = v173;
  v174 = __rdtsc();
  v175 = __ROR8__(v174, 3);
  v3917 = ((v175 ^ v174) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v176 = v173 + (((67117057 * (v175 ^ v174)) ^ v3917) & 0x7FF) + 0x80000;
  v177 = __rdtsc();
  v178 = (__ROR8__(v177, 3) ^ v177) * (unsigned __int128)0x7010008004002001uLL;
  v3918 = *((_QWORD *)&v178 + 1);
  v179 = ((unsigned __int64)v178 ^ *((_QWORD *)&v178 + 1)) % 0xB;
  if ( (unsigned int)v179 > 5 )
  {
    v183 = v179 - 6;
    if ( v183 )
    {
      v184 = v183 - 1;
      if ( v184 )
      {
        v185 = v184 - 1;
        if ( v185 )
        {
          if ( v185 == 1 )
          {
            v3883[28] = -1333354875;
            v182 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v186 = __rdtsc();
            v187 = __ROR8__(v186, 3);
            v3919 = ((v187 ^ v186) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v188 = v3919 ^ (67117057 * (v187 ^ v186));
            v182 = ((((((v188 % 0x1A + 97) << 8) | ((v188 >> 5)
                                                  - 26
                                                  * ((unsigned int)((1321528399 * (unsigned __int64)(v188 >> 5)) >> 32) >> 3)
                                                  + 65)) << 8) | ((v188 >> 10) % 0x1A + 97)) << 8) | ((v188 >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v3883[29] = 1684422978;
          v182 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3883[30] = -2100910376;
        v182 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3883[31] = 1314342514;
      v182 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v179 == 5 )
  {
    v3883[27] = 680282605;
    v182 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v179 )
  {
    v180 = v179 - 1;
    if ( v180 )
    {
      v181 = v180 - 1;
      if ( v181 )
      {
        if ( v181 == 1 )
        {
          v3883[23] = -1474152136;
          v182 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3883[22] = 1728537748;
          v182 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3883[24] = -2051698419;
        v182 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3883[25] = -1297272415;
      v182 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3883[26] = -795291432;
    v182 = __ROR4__(-795291432, 6);
  }
  v189 = __rdtsc();
  v190 = __ROR8__(v189, 3);
  v3920 = ((v190 ^ v189) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v191 = (v3920 ^ (67117057 * (v190 ^ v189))) & 0x7FF;
  v192 = __rdtsc();
  v193 = (__ROR8__(v192, 3) ^ v192) * (unsigned __int128)0x7010008004002001uLL;
  v3921 = *((_QWORD *)&v193 + 1);
  v194 = (*((_QWORD *)&v193 + 1) ^ (unsigned __int64)v193) % (unsigned int)(v191 + 1);
  v195 = ExAllocatePoolWithTag(NonPagedPool, v191 + v176, v182);
  if ( !v195 )
    return 0;
  v196 = v194;
  v197 = v195;
  if ( (unsigned int)v194 >= 8 )
  {
    v198 = (unsigned __int64)(unsigned int)v194 >> 3;
    do
    {
      v196 -= 8;
      v199 = __rdtsc();
      v200 = (__ROR8__(v199, 3) ^ v199) * (unsigned __int128)0x7010008004002001uLL;
      v3922 = *((_QWORD *)&v200 + 1);
      *v197++ = v200 ^ *((_QWORD *)&v200 + 1);
      --v198;
    }
    while ( v198 );
  }
  if ( v196 )
  {
    v201 = __rdtsc();
    v202 = (__ROR8__(v201, 3) ^ v201) * (unsigned __int128)0x7010008004002001uLL;
    v3923 = *((_QWORD *)&v202 + 1);
    v203 = v202 ^ *((_QWORD *)&v202 + 1);
    do
    {
      *(_BYTE *)v197 = v203;
      v197 = (_QWORD *)((char *)v197 + 1);
      v203 >>= 8;
      --v196;
    }
    while ( v196 );
  }
  v204 = (unsigned int)v194;
  v205 = v191 - v194;
  v206 = (_QWORD *)((char *)v195 + (unsigned int)v194 + (unsigned __int64)v176);
  if ( v205 >= 8 )
  {
    v207 = (unsigned __int64)v205 >> 3;
    do
    {
      v205 -= 8;
      v208 = __rdtsc();
      v209 = (__ROR8__(v208, 3) ^ v208) * (unsigned __int128)0x7010008004002001uLL;
      v3924 = *((_QWORD *)&v209 + 1);
      *v206++ = v209 ^ *((_QWORD *)&v209 + 1);
      --v207;
    }
    while ( v207 );
  }
  if ( v205 )
  {
    v210 = __rdtsc();
    v211 = (__ROR8__(v210, 3) ^ v210) * (unsigned __int128)0x7010008004002001uLL;
    v3925 = *((_QWORD *)&v211 + 1);
    v212 = v211 ^ *((_QWORD *)&v211 + 1);
    do
    {
      *(_BYTE *)v206 = v212;
      v206 = (_QWORD *)((char *)v206 + 1);
      v212 >>= 8;
      --v205;
    }
    while ( v205 );
  }
  v213 = (char *)v195 + (unsigned int)v194;
  v3926 = v195;
  v3842 = (unsigned __int64)v195 + v204;
  if ( !(_QWORD *)((char *)v195 + v204) )
    return 0;
  v214 = v173 + 0x80000;
  v3845 = v173 + 0x80000;
  memset(v213, 0, (unsigned int)(v173 + 0x80000));
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v215 = (v170 << 28) | *((_DWORD *)v213 + 612) & 0xEFFFFFFF;
  v216 = 0x2000LL;
  *((_DWORD *)v213 + 612) = v215;
  if ( (v215 & 0x10000000) != 0 )
  {
    *((_DWORD *)v213 + 612) = v215 | 0x8000000;
    *((_DWORD *)v213 + 613) |= 0x2000u;
  }
  if ( __32 )
    *((_DWORD *)v213 + 613) |= 0x2000u;
  if ( !v170 )
  {
    v217 = v213 + 2720;
    qword_140C00210[0] = (__int64)off_140C005D8;
    v4322[4] = v213 + 2720;
    v4324 = 0LL;
    v218 = 0;
    LODWORD(v3844) = 0;
    v219 = 0;
    LODWORD(v3850) = 0;
    *(_OWORD *)v4323 = 0LL;
    LODWORD(v3846) = 0;
    do
    {
      v220 = qword_140C00210[v218];
      v221 = RtlLookupFunctionTable(v220, &v4362, v3884);
      v4360 = v221;
      if ( !v221 )
      {
        v230 = v4364;
        v223 = v4361;
        v231 = v3908;
        goto LABEL_350;
      }
      v4365 = 0LL;
      if ( v4300 == v4362 )
      {
        v222 = (_DWORD *)v4301;
        v4365 = v4301;
        v4366 = 0LL;
        v4367 = v4302;
        v4368 = 0;
        v223 = RtlLookupFunctionEntry(v220, &v4362, 0LL);
        v4361 = v223;
        if ( v223 )
        {
          v224 = v223 - v4362;
          v225 = 0;
          v226 = *v222 - 1;
          if ( v226 >= 0 )
          {
            do
            {
              v227 = (v226 + v225) >> 1;
              v228 = &v222[2 * v227 + 2];
              if ( v224 - *v228 >= 0 )
              {
                if ( v224 - *v228 <= 0 )
                  break;
                v225 = v227 + 1;
              }
              else
              {
                if ( !v227 )
                  goto LABEL_346;
                v226 = v227 - 1;
              }
            }
            while ( v226 >= v225 );
            v229 = (_DWORD *)v4366;
            if ( v226 >= v225 )
              v229 = &v222[2 * v227 + 2];
            v4366 = (__int64)v229;
          }
        }
LABEL_346:
        v221 = v4360;
        v219 = v3850;
      }
      else
      {
        v223 = v4361;
      }
      v230 = v3927;
      v4359 = v220;
      v231 = v4362;
      v4364 = v3927;
      v3884[0] /= 0xCu;
      v3908 = v4362;
      v4363 = v221 + 12LL * v3884[0];
LABEL_350:
      while ( v221 && v221 != v4363 )
      {
        if ( v4365 )
        {
          if ( !v223 )
            break;
          if ( v4366 )
          {
            v232 = *(_DWORD *)(v4366 + 4);
            if ( (v232 & 1) != 0 )
            {
              *v230 = v4362 + (v232 & 0xFFFFFFFE);
              v4366 = 0LL;
            }
            else
            {
              v233 = (unsigned int)(v4368 + v232);
              v234 = (unsigned int)v233;
              v235 = v233 + 4;
              if ( v235 < v234 || v235 > v4367 )
              {
                v3884[11] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0x12uLL, v4365, v4362, v234);
              }
              v236 = *(_DWORD *)(v234 + v4365);
              v4368 += 4;
              v4366 &= -(__int64)((v236 & 1) != 0);
              if ( (v236 & 1) != 0 )
                v236 &= ~1u;
              *v230 = v4362 + v236;
            }
          }
          else
          {
            *v230 = v223;
            v4361 = 0LL;
          }
        }
        else
        {
          while ( 1 )
          {
            v237 = v221;
            v238 = RtlpConvertFunctionEntry(v221, v4362, v230);
            v239 = RtlpSameFunction(v238, v4362, v4359);
            v221 = v4360 + 12;
            v4360 += 12LL;
            if ( v239 )
              break;
            if ( v221 == v4363 )
              goto LABEL_365;
          }
          *v4364 = v237;
        }
        v248 = *(unsigned int *)v3927[0];
        v249 = *(_DWORD *)(v3927[0] + 4LL) - v248;
        v250 = v231 + v248;
        if ( v217 )
        {
          v251 = 2LL * v219;
          v217[2 * v251 + 4] = v249;
          *(_QWORD *)&v217[2 * v251 + 2] = v250;
        }
        HIDWORD(v4324) += v249;
        v252 = v250 & 0xFFFFFFFFFFFFF000uLL;
        LODWORD(v3850) = v219 + 1;
        Timer = (PKTIMER)(v250 + v249);
        do
        {
          v253 = v4325;
          v254 = 4LL;
          v255 = MmPteBase + ((v252 >> 9) & 0x7FFFFFFFF8LL);
          do
          {
            *v253++ = v255;
            v255 = MmPteBase + ((v255 >> 9) & 0x7FFFFFFFF8LL);
            --v254;
          }
          while ( v254 );
          v256 = 0;
          v257 = 3;
          do
          {
            v258 = v257;
            if ( v256 )
            {
              v4325[v257] = 0LL;
            }
            else
            {
              if ( !v257 )
                break;
              v256 = *(char *)v4325[v257] < 0;
            }
            --v257;
          }
          while ( v258 );
          v259 = v3842;
          LODWORD(v260) = 4;
          do
          {
            v260 = (unsigned int)(v260 - 1);
            v261 = v4325[v260];
            if ( !v261 )
              break;
            for ( m = 0; m < HIDWORD(v4323[1]); ++m )
            {
              if ( v261 == *((_QWORD *)v4323[0] + m) )
                break;
            }
            if ( m == HIDWORD(v4323[1]) )
            {
              if ( HIDWORD(v4323[1]) == (_DWORD)v3846 )
              {
                v263 = 2 * v3846 + 64;
                LODWORD(v3846) = v263;
                v264 = __rdtsc();
                v265 = (__ROR8__(v264, 3) ^ v264) * (unsigned __int128)0x7010008004002001uLL;
                v3927[1] = *((_QWORD *)&v265 + 1);
                v266 = ((unsigned __int64)v265 ^ *((_QWORD *)&v265 + 1)) % 0xB;
                if ( (unsigned int)v266 > 5 )
                {
                  v270 = v266 - 6;
                  if ( v270 )
                  {
                    v271 = v270 - 1;
                    if ( v271 )
                    {
                      v272 = v271 - 1;
                      if ( v272 )
                      {
                        if ( v272 == 1 )
                        {
                          v3884[7] = -1333354875;
                          v269 = __ROR4__(-1333354868, 33);
                        }
                        else
                        {
                          v273 = __rdtsc();
                          v274 = __ROR8__(v273, 3);
                          v3928 = ((v274 ^ v273) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v275 = v3928 ^ (67117057 * (v274 ^ v273));
                          v269 = ((((((v275 % 0x1A + 97) << 8) | ((v275 >> 5)
                                                                - 26
                                                                * ((unsigned int)((1321528399
                                                                                 * (unsigned __int64)(v275 >> 5)) >> 32) >> 3)
                                                                + 65)) << 8) | ((v275 >> 10) % 0x1A + 97)) << 8) | ((v275 >> 15) % 0x1A + 65);
                        }
                      }
                      else
                      {
                        v3884[8] = 1684422978;
                        v269 = __ROR4__(1684422978, 8);
                      }
                    }
                    else
                    {
                      v3884[9] = -2100910376;
                      v269 = __ROL4__(-2100910376, 7);
                    }
                  }
                  else
                  {
                    v3884[10] = 1314342514;
                    v269 = __ROR4__(1314342516, 24);
                  }
                }
                else if ( (_DWORD)v266 == 5 )
                {
                  v3884[6] = 680282605;
                  v269 = __ROR4__(680282605, 5);
                }
                else if ( (_DWORD)v266 )
                {
                  v267 = v266 - 1;
                  if ( v267 )
                  {
                    v268 = v267 - 1;
                    if ( v268 )
                    {
                      if ( v268 == 1 )
                      {
                        v3884[2] = -1474152136;
                        v269 = __ROR4__(-1474152133, 15);
                      }
                      else
                      {
                        v3884[1] = 1728537748;
                        v269 = __ROL4__(1728537748, 4);
                      }
                    }
                    else
                    {
                      v3884[3] = -2051698419;
                      v269 = __ROR4__(-2051698419, 2);
                    }
                  }
                  else
                  {
                    v3884[4] = -1297272415;
                    v269 = __ROL4__(-1297272415, 1);
                  }
                }
                else
                {
                  v3884[5] = -795291432;
                  v269 = __ROR4__(-795291432, 6);
                }
                v276 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v263, v269);
                if ( !v276 )
                  return 0;
                v277 = v4323[0];
                if ( v4323[0] )
                {
                  v278 = v276;
                  v279 = 8 * HIDWORD(v4323[1]);
                  if ( (unsigned int)(8 * HIDWORD(v4323[1])) >= 8 )
                  {
                    v280 = (unsigned __int64)v279 >> 3;
                    do
                    {
                      v279 -= 8;
                      *(_QWORD *)v278 = *v277++;
                      v278 += 8;
                      --v280;
                    }
                    while ( v280 );
                  }
                  if ( v279 )
                  {
                    v281 = v278 - (char *)v277;
                    do
                    {
                      *((_BYTE *)v277 + v281) = *(_BYTE *)v277;
                      v277 = (_QWORD *)((char *)v277 + 1);
                      --v279;
                    }
                    while ( v279 );
                  }
                  ExFreePoolWithTag(v4323[0], v279);
                }
                LODWORD(v4323[1]) = v3846;
                v4323[0] = v276;
              }
              v282 = HIDWORD(v4323[1]);
              ++HIDWORD(v4323[1]);
              HIDWORD(v4324) += 16;
              *((_QWORD *)v4323[0] + v282) = v261;
            }
          }
          while ( (_DWORD)v260 );
          v252 += 4096LL;
        }
        while ( v252 < (unsigned __int64)Timer );
        v219 = v3850;
        v217 = (_DWORD *)(v259 + 2720);
        v230 = v4364;
        v223 = v4361;
        v221 = v4360;
        v231 = v3908;
        LODWORD(v4324) = v3850;
      }
LABEL_365:
      v218 = (_DWORD)v3844 + 1;
      LODWORD(v3844) = v218;
    }
    while ( v218 < 0xF );
    if ( v217 )
    {
      v240 = 2LL * v219;
      v217[2 * v240 + 4] = 8;
      *(_QWORD *)&v217[2 * v240 + 2] = &off_140C005D8;
    }
    HIDWORD(v4324) += 8;
    v241 = (unsigned __int64)&off_140C005D8 & 0xFFFFFFFFFFFFF000uLL;
    LODWORD(v3850) = v219 + 1;
    Timer = (PKTIMER)((unsigned __int64)&off_140C005D8 & 0xFFFFFFFFFFFFF000uLL);
    do
    {
      v242 = v4326;
      v243 = 4LL;
      v244 = MmPteBase + ((v241 >> 9) & 0x7FFFFFFFF8LL);
      do
      {
        *v242++ = v244;
        v244 = MmPteBase + ((v244 >> 9) & 0x7FFFFFFFF8LL);
        --v243;
      }
      while ( v243 );
      v245 = 0;
      v246 = 3;
      do
      {
        v247 = v246;
        if ( v245 )
        {
          v4326[v246] = 0LL;
        }
        else
        {
          if ( !v246 )
            break;
          v245 = *(char *)v4326[v246] < 0;
        }
        --v246;
      }
      while ( v247 );
      v213 = (_BYTE *)v3842;
      LODWORD(v283) = 4;
      do
      {
        v283 = (unsigned int)(v283 - 1);
        v284 = v4326[v283];
        if ( !v284 )
          break;
        for ( n = 0; n < HIDWORD(v4323[1]); ++n )
        {
          if ( v284 == *((_QWORD *)v4323[0] + n) )
            break;
        }
        if ( n == HIDWORD(v4323[1]) )
        {
          if ( HIDWORD(v4323[1]) == (_DWORD)v3846 )
          {
            v286 = 2 * v3846 + 64;
            LODWORD(v3846) = v286;
            v287 = __rdtsc();
            v288 = (__ROR8__(v287, 3) ^ v287) * (unsigned __int128)0x7010008004002001uLL;
            v3929 = *((_QWORD *)&v288 + 1);
            v289 = ((unsigned __int64)v288 ^ *((_QWORD *)&v288 + 1)) % 0xB;
            if ( (unsigned int)v289 > 5 )
            {
              v293 = v289 - 6;
              if ( v293 )
              {
                v294 = v293 - 1;
                if ( v294 )
                {
                  v295 = v294 - 1;
                  if ( v295 )
                  {
                    if ( v295 == 1 )
                    {
                      v3884[18] = -1333354875;
                      v292 = __ROR4__(-1333354868, 33);
                    }
                    else
                    {
                      v296 = __rdtsc();
                      v297 = __ROR8__(v296, 3);
                      v3930 = ((v297 ^ v296) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v298 = v3930 ^ (67117057 * (v297 ^ v296));
                      v292 = ((((((v298 % 0x1A + 97) << 8) | ((v298 >> 5)
                                                            - 26
                                                            * ((unsigned int)((1321528399 * (unsigned __int64)(v298 >> 5)) >> 32) >> 3)
                                                            + 65)) << 8) | ((v298 >> 10) % 0x1A + 97)) << 8) | ((v298 >> 15) % 0x1A + 65);
                    }
                  }
                  else
                  {
                    v3884[19] = 1684422978;
                    v292 = __ROR4__(1684422978, 8);
                  }
                }
                else
                {
                  v3884[20] = -2100910376;
                  v292 = __ROL4__(-2100910376, 7);
                }
              }
              else
              {
                v3884[21] = 1314342514;
                v292 = __ROR4__(1314342516, 24);
              }
            }
            else if ( (_DWORD)v289 == 5 )
            {
              v3884[17] = 680282605;
              v292 = __ROR4__(680282605, 5);
            }
            else if ( (_DWORD)v289 )
            {
              v290 = v289 - 1;
              if ( v290 )
              {
                v291 = v290 - 1;
                if ( v291 )
                {
                  if ( v291 == 1 )
                  {
                    v3884[13] = -1474152136;
                    v292 = __ROR4__(-1474152133, 15);
                  }
                  else
                  {
                    v3884[12] = 1728537748;
                    v292 = __ROL4__(1728537748, 4);
                  }
                }
                else
                {
                  v3884[14] = -2051698419;
                  v292 = __ROR4__(-2051698419, 2);
                }
              }
              else
              {
                v3884[15] = -1297272415;
                v292 = __ROL4__(-1297272415, 1);
              }
            }
            else
            {
              v3884[16] = -795291432;
              v292 = __ROR4__(-795291432, 6);
            }
            v299 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v286, v292);
            if ( !v299 )
              return 0;
            v300 = v4323[0];
            if ( v4323[0] )
            {
              v301 = v299;
              v302 = 8 * HIDWORD(v4323[1]);
              if ( (unsigned int)(8 * HIDWORD(v4323[1])) >= 8 )
              {
                v303 = (unsigned __int64)v302 >> 3;
                do
                {
                  v302 -= 8;
                  *(_QWORD *)v301 = *v300++;
                  v301 += 8;
                  --v303;
                }
                while ( v303 );
              }
              if ( v302 )
              {
                v304 = v301 - (char *)v300;
                do
                {
                  *((_BYTE *)v300 + v304) = *(_BYTE *)v300;
                  v300 = (_QWORD *)((char *)v300 + 1);
                  --v302;
                }
                while ( v302 );
              }
              ExFreePoolWithTag(v4323[0], v302);
            }
            v4323[0] = v299;
            LODWORD(v4323[1]) = v3846;
          }
          v305 = HIDWORD(v4323[1]);
          ++HIDWORD(v4323[1]);
          HIDWORD(v4324) += 16;
          *((_QWORD *)v4323[0] + v305) = v284;
        }
      }
      while ( (_DWORD)v283 );
      v216 = (__int64)&qword_140C005E0;
      v241 = (unsigned __int64)&Timer[64];
      Timer = (PKTIMER)v241;
    }
    while ( v241 < (unsigned __int64)&qword_140C005E0 );
    v306 = v3850;
    LODWORD(v4324) = v3850;
    if ( v217 )
    {
      v307 = HIDWORD(v4323[1]);
      v308 = (char *)(v217 + 2);
      v217[1] = HIDWORD(v4323[1]);
      v309 = (char *)&v217[4 * v306 + 2];
      v310 = v309;
      if ( v307 )
      {
        v216 = (__int64)v4323[0];
        v311 = v307;
        do
        {
          v312 = *(_QWORD **)v216;
          v216 += 8LL;
          *(_QWORD *)v310 = v312;
          *((_QWORD *)v310 + 1) = *v312;
          v310 += 16;
          --v311;
        }
        while ( v311 );
      }
      if ( v308 < v309 )
      {
        do
        {
          v216 = *((unsigned int *)v308 + 2);
          v313 = v310;
          v314 = *(_QWORD **)v308;
          if ( (unsigned int)v216 >= 8 )
          {
            v315 = (unsigned __int64)(unsigned int)v216 >> 3;
            do
            {
              v216 = (unsigned int)(v216 - 8);
              *(_QWORD *)v313 = *v314++;
              v313 += 8;
              --v315;
            }
            while ( v315 );
          }
          if ( (_DWORD)v216 )
          {
            v316 = v313 - (char *)v314;
            do
            {
              *((_BYTE *)v314 + v316) = *(_BYTE *)v314;
              v314 = (_QWORD *)((char *)v314 + 1);
              v893 = (_DWORD)v216 == 1;
              v216 = (unsigned int)(v216 - 1);
            }
            while ( !v893 );
          }
          v317 = *((unsigned int *)v308 + 2);
          v308 += 16;
          v310 += v317;
        }
        while ( v308 < v309 );
        v213 = (_BYTE *)v3842;
      }
      *v217 = v306;
    }
    v214 = v3845;
    v173 = (int)v3851;
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  LOBYTE(v216) = 1;
  v318 = (_DWORD *)RtlImageDirectoryEntryToData(0x140000000uLL, v216, 6LL, v3885);
  if ( !v318 )
    goto LABEL_503;
  v319 = &v318[7 * (v3885[0] / 0x1CuLL)];
  if ( v318 >= v319 )
    goto LABEL_503;
  while ( 1 )
  {
    v320 = v318[3];
    if ( v320 == 10 )
    {
      v321 = (_DWORD *)(0x140000000LL + (unsigned int)v318[5]);
      v322 = &v321[(unsigned __int64)(unsigned int)v318[4] >> 2];
      while ( v321 < v322 )
      {
        if ( *v321 == 1346849024 )
          goto LABEL_502;
        ++v321;
      }
      goto LABEL_500;
    }
    if ( v320 == 13 )
    {
      v323 = (_DWORD *)(0x140000000LL + (unsigned int)v318[5]);
      if ( v323 != &v323[(unsigned __int64)(unsigned int)v318[4] >> 2] && *v323 == 1346849024 )
        break;
    }
LABEL_500:
    v318 += 7;
    if ( v318 >= v319 )
      goto LABEL_503;
  }
LABEL_502:
  *((_DWORD *)v213 + 613) |= 0x10000u;
LABEL_503:
  if ( __20 )
    *((_DWORD *)v213 + 613) |= 0x4000u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v213 + 505) = v173;
  *((_DWORD *)v213 + 647) = v214;
  *((_QWORD *)v213 + 249) = v3926;
  *((_DWORD *)v213 + 585) = v3849;
  *(_OWORD *)v213 = *(_OWORD *)CmpAppendDllSection;
  qmemcpy(v213 + 16, "H1Q H1Q(H1Q0H1Q8H1Q@H1QHH1QPH1QXH1Q`H1QhH1QpH1Qx", 48);
  *((_OWORD *)v213 + 4) = *((_OWORD *)CmpAppendDllSection + 4);
  *((_OWORD *)v213 + 5) = *((_OWORD *)CmpAppendDllSection + 5);
  *((_OWORD *)v213 + 6) = *((_OWORD *)CmpAppendDllSection + 6);
  *((_OWORD *)v213 + 7) = *((_OWORD *)CmpAppendDllSection + 7);
  *((_OWORD *)v213 + 8) = *((_OWORD *)CmpAppendDllSection + 8);
  *((_OWORD *)v213 + 9) = *((_OWORD *)CmpAppendDllSection + 9);
  *((_OWORD *)v213 + 10) = *((_OWORD *)CmpAppendDllSection + 10);
  *((_OWORD *)v213 + 11) = *((_OWORD *)CmpAppendDllSection + 11);
  *((_DWORD *)v213 + 48) = *((_DWORD *)CmpAppendDllSection + 48);
  v324 = v3853;
  *((_DWORD *)v213 + 508) = v3853 + v3834;
  *((_DWORD *)v213 + 506) = v324 + v3833;
  *((_DWORD *)v213 + 507) = v324 + v3836;
  *((_DWORD *)v213 + 509) = v324 + v3837;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_QWORD *)v213 + 29) = ExAcquireResourceSharedLite;
  *((_QWORD *)v213 + 30) = ExAcquireResourceExclusiveLite;
  *((_QWORD *)v213 + 31) = ExAllocatePoolWithTag;
  *((_QWORD *)v213 + 32) = ExFreePoolWithTag;
  *((_QWORD *)v213 + 33) = ExMapHandleToPointer;
  *((_QWORD *)v213 + 34) = ExQueueWorkItem;
  *((_QWORD *)v213 + 35) = ExReleaseResourceLite;
  *((_QWORD *)v213 + 36) = ExUnlockHandleTableEntry;
  *((_QWORD *)v213 + 37) = ExAcquirePushLockExclusiveEx;
  *((_QWORD *)v213 + 38) = ExReleasePushLockExclusiveEx;
  *((_QWORD *)v213 + 39) = ExAcquirePushLockSharedEx;
  *((_QWORD *)v213 + 40) = ExReleasePushLockSharedEx;
  *((_QWORD *)v213 + 41) = KeAcquireInStackQueuedSpinLockAtDpcLevel;
  *((_QWORD *)v213 + 42) = ExAcquireSpinLockSharedAtDpcLevel;
  *((_QWORD *)v213 + 43) = KeBugCheckEx;
  *((_QWORD *)v213 + 44) = KeDelayExecutionThread;
  *((_QWORD *)v213 + 45) = KeEnterCriticalRegionThread;
  *((_QWORD *)v213 + 46) = KeLeaveCriticalRegion;
  *((_QWORD *)v213 + 47) = KeEnterGuardedRegion;
  *((_QWORD *)v213 + 48) = KeLeaveGuardedRegion;
  *((_QWORD *)v213 + 49) = KeReleaseInStackQueuedSpinLockFromDpcLevel;
  *((_QWORD *)v213 + 50) = ExReleaseSpinLockSharedFromDpcLevel;
  *((_QWORD *)v213 + 51) = KeRevertToUserGroupAffinityThread;
  *((_QWORD *)v213 + 52) = KeProcessorGroupAffinity;
  *((_QWORD *)v213 + 53) = KeInitializeEnumerationContext;
  *((_QWORD *)v213 + 54) = KeEnumerateNextProcessor;
  *((_QWORD *)v213 + 55) = KeCountSetBitsAffinityEx;
  *((_QWORD *)v213 + 56) = KeQueryAffinityProcess;
  *((_QWORD *)v213 + 57) = KeQueryAffinityThread;
  *((_QWORD *)v213 + 58) = KeSetSystemGroupAffinityThread;
  *((_QWORD *)v213 + 59) = KeSetCoalescableTimer;
  *((_QWORD *)v213 + 63) = RtlImageNtHeader;
  *((_QWORD *)v213 + 66) = RtlSectionTableFromVirtualAddress;
  *((_QWORD *)v213 + 64) = RtlLookupFunctionTableEx;
  *((_QWORD *)v213 + 65) = RtlPcToFileHeader;
  *((_QWORD *)v213 + 60) = HalPutDmaAdapter;
  *((_QWORD *)v213 + 61) = ObReferenceObjectByName;
  *((_QWORD *)v213 + 62) = RtlImageDirectoryEntryToData;
  *((_QWORD *)v213 + 67) = DbgPrint;
  *((_QWORD *)v213 + 68) = MmAllocateIndependentPages;
  *((_QWORD *)v213 + 69) = MmFreeIndependentPages;
  *((_QWORD *)v213 + 70) = MmSetPageProtection;
  *((_QWORD *)v213 + 76) = RtlLookupFunctionEntry;
  *((_QWORD *)v213 + 77) = KeAcquireSpinLockRaiseToDpc;
  *((_QWORD *)v213 + 78) = KeReleaseSpinLock;
  *((_QWORD *)v213 + 79) = MmGetSessionById;
  *((_QWORD *)v213 + 80) = MmGetNextSession;
  *((_QWORD *)v213 + 81) = MmQuitNextSession;
  *((_QWORD *)v213 + 82) = MmAttachSession;
  *((_QWORD *)v213 + 83) = MmDetachSession;
  *((_QWORD *)v213 + 84) = MmGetSessionIdEx;
  *((_QWORD *)v213 + 85) = MmIsSessionAddress;
  *((_QWORD *)v213 + 86) = MmIsAddressValid;
  *((_QWORD *)v213 + 87) = MmSessionGetWin32Callouts;
  *((_QWORD *)v213 + 88) = KeInsertQueueApc;
  *((_QWORD *)v213 + 89) = KeWaitForSingleObject;
  *((_QWORD *)v213 + 91) = ExReferenceCallBackBlock;
  *((_QWORD *)v213 + 92) = ExGetCallBackBlockRoutine;
  *((_QWORD *)v213 + 93) = &ExDereferenceCallBackBlock;
  *((_QWORD *)v213 + 94) = pg_unknown1;
  *((_QWORD *)v213 + 95) = PspEnumerateCallback;
  *((_QWORD *)v213 + 96) = CmpEnumerateCallback;
  *((_QWORD *)v213 + 97) = DbgEnumerateCallback;
  *((_QWORD *)v213 + 98) = ExpEnumerateCallback;
  *((_QWORD *)v213 + 99) = ExpGetNextCallback;
  *((_QWORD *)v213 + 100) = xHalTimerWatchdogStop;
  *((_QWORD *)v213 + 101) = KiSchedulerApcTerminate;
  *((_QWORD *)v213 + 102) = KiSchedulerApc;
  *((_QWORD *)v213 + 103) = xHalTimerWatchdogStop;
  *((_QWORD *)v213 + 104) = &pg_unknown4;
  *((_QWORD *)v213 + 105) = MmAllocatePagesForMdlEx;
  *((_QWORD *)v213 + 106) = MmAllocateMappingAddress;
  *((_QWORD *)v213 + 107) = MmMapLockedPagesWithReservedMapping;
  *((_QWORD *)v213 + 108) = MmUnmapReservedMapping;
  *((_QWORD *)v213 + 109) = pg_unknown24;
  *((_QWORD *)v213 + 110) = pg_unknown25;
  *((_QWORD *)v213 + 111) = MmAcquireLoadLock;
  *((_QWORD *)v213 + 112) = MmReleaseLoadLock;
  *((_QWORD *)v213 + 113) = KeEnumerateQueueApc;
  *((_QWORD *)v213 + 114) = KeIsApcRunningThread;
  *((_QWORD *)v213 + 115) = &pg_unknown23;
  v325 = v4474;
  *((_QWORD *)v213 + 116) = PsAcquireProcessExitSynchronization;
  *((_QWORD *)v213 + 117) = ObDereferenceProcessHandleTable;
  *((_QWORD *)v213 + 118) = PsGetNextProcess;
  *((_QWORD *)v213 + 119) = PsQuitNextProcessThread;
  *((_QWORD *)v213 + 120) = PsGetNextProcessEx;
  *((_QWORD *)v213 + 121) = MmIsSessionLeaderProcess;
  *((_QWORD *)v213 + 122) = PsInvokeWin32Callout;
  *((_QWORD *)v213 + 123) = MmEnumerateAddressSpaceAndReferenceImages;
  *((_QWORD *)v213 + 124) = PsGetProcessProtection;
  *((_QWORD *)v213 + 125) = PsGetProcessSignatureLevel;
  *((_QWORD *)v213 + 126) = PsGetProcessSectionBaseAddress;
  *((_QWORD *)v213 + 127) = SeCompareSigningLevels;
  *((_QWORD *)v213 + 133) = RtlIsMultiSessionSku;
  *((_QWORD *)v213 + 134) = KiEnumerateCallback;
  *((_QWORD *)v213 + 135) = KeStackAttachProcess;
  *((_QWORD *)v213 + 136) = KeUnstackDetachProcess;
  *((_QWORD *)v213 + 137) = KeIpiGenericCall;
  *((_QWORD *)v213 + 138) = pg_unknown3;
  *((_QWORD *)v213 + 139) = MmGetPhysicalAddress;
  *((_QWORD *)v213 + 140) = MmUnlockPages;
  *((_QWORD *)v213 + 128) = KeComputeSha256;
  *((_QWORD *)v213 + 129) = KeComputeParallelSha256;
  *((_QWORD *)v213 + 130) = KeSetEvent;
  *((_QWORD *)v213 + 141) = VslVerifyPage;
  *((_QWORD *)v213 + 144) = PsLookupProcessByProcessId;
  *((_QWORD *)v213 + 145) = PsGetProcessId;
  *((_QWORD *)v213 + 146) = MmCheckProcessShadow;
  *((_QWORD *)v213 + 147) = MmGetImageRetpolineCodePage;
  *((_QWORD *)v213 + 300) = &qword_140C12F80;
  if ( v325 )
    *((_QWORD *)v213 + 90) = *(_QWORD *)(v325 + 8);
  *((_QWORD *)v213 + 131) = RtlpConvertFunctionEntry;
  *((_QWORD *)v213 + 132) = RtlpLookupPrimaryFunctionEntry;
  *((_QWORD *)v213 + 142) = KiGetInterruptObjectAddress;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v213 + 599) = v173;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  v326 = __rdtsc();
  v327 = (__ROR8__(v326, 3) ^ v326) * (unsigned __int128)0x7010008004002001uLL;
  v3931 = *((_QWORD *)&v327 + 1);
  if ( ((unsigned __int64)v327 ^ *((_QWORD *)&v327 + 1)) % 0xA >= 3 )
  {
    *((_DWORD *)v213 + 586) = 0;
  }
  else
  {
    *((_DWORD *)v213 + 586) = 4;
    v328 = __rdtsc();
    v329 = (__ROR8__(v328, 3) ^ v328) * (unsigned __int128)0x7010008004002001uLL;
    v3932 = *((_QWORD *)&v329 + 1);
    v330 = v329 ^ *((_QWORD *)&v329 + 1);
    *((_QWORD *)&v329 + 1) = (((unsigned __int64)v329 ^ *((_QWORD *)&v329 + 1))
                            * (unsigned __int128)0x2492492492492493uLL) >> 64;
    *((_DWORD *)v213 + 586) = v330
                            - 7
                            * ((*((_QWORD *)&v329 + 1) + ((unsigned __int64)(v330 - *((_QWORD *)&v329 + 1)) >> 1)) >> 2);
  }
  if ( qword_140D585F0 > 0x1F )
  {
    v3885[1] = -805294751;
    KeBugCheckEx(__ROR4__(-805306349, 92), 3uLL, 0LL, qword_140D585F0, 0LL);
  }
  *((_DWORD *)v213 + 612) ^= (*((_DWORD *)v213 + 612) ^ ((_DWORD)qword_140D585F0 << 10)) & 0x7C00;
  *((_DWORD *)v213 + 596) = dword_140C12F40++;
  *((_QWORD *)v213 + 256) = 0LL;
  *((char **)v213 + 294) = VfExcludeSections[0];
  *((char **)v213 + 295) = off_140C0F048[0];
  *((char **)v213 + 296) = off_140C0F050[0];
  *((_QWORD *)v213 + 297) = off_140C0F058;
  v331 = __rdtsc();
  v332 = (__ROR8__(v331, 3) ^ v331) * (unsigned __int128)0x7010008004002001uLL;
  v3933 = *((_QWORD *)&v332 + 1);
  v333 = v332 ^ *((_QWORD *)&v332 + 1);
  *((_QWORD *)&v332 + 1) = (((unsigned __int64)v332 ^ *((_QWORD *)&v332 + 1)) * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  if ( v333 - 1000 * ((*((_QWORD *)&v332 + 1) + ((unsigned __int64)(v333 - *((_QWORD *)&v332 + 1)) >> 1)) >> 9) < 3 )
    *((_DWORD *)v213 + 613) |= 0x400000u;
  *((_QWORD *)v213 + 248) = KeGetPrcb(0LL);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v213 + 523) = 0x140000 / v4473;
  *((_QWORD *)v213 + 152) = &qword_140C0F1B0;
  *((_QWORD *)v213 + 153) = &qword_140C12F68;
  *((_QWORD *)v213 + 154) = &qword_140C12F70;
  *((_QWORD *)v213 + 155) = &qword_140C12F78;
  *((_QWORD *)v213 + 156) = PsInitialSystemProcess;
  *((_QWORD *)v213 + 157) = KiWaitAlways;
  *((_QWORD *)v213 + 158) = &KiEntropyTimingRoutine;
  *((_QWORD *)v213 + 159) = &KiProcessListHead;
  *((_QWORD *)v213 + 160) = &KiProcessListLock;
  *((_QWORD *)v213 + 161) = ObpTypeObjectType;
  *((_QWORD *)v213 + 162) = IoDriverObjectType;
  *((_QWORD *)v213 + 163) = PsProcessType;
  *((_QWORD *)v213 + 164) = &PsActiveProcessHead;
  *((_QWORD *)v213 + 165) = &PsInvertedFunctionTable;
  *((_QWORD *)v213 + 166) = &PsLoadedModuleList;
  *((_QWORD *)v213 + 167) = &PsLoadedModuleResource;
  *((_QWORD *)v213 + 168) = &PsLoadedModuleSpinLock;
  *((_QWORD *)v213 + 169) = &PspActiveProcessLock;
  *((_QWORD *)v213 + 170) = &PspCidTable;
  *((_QWORD *)v213 + 171) = &ExpUuidLock;
  *((_QWORD *)v213 + 172) = &AlpcpPortListLock;
  *((_QWORD *)v213 + 173) = &KeServiceDescriptorTable;
  *((_QWORD *)v213 + 174) = &KeServiceDescriptorTableShadow;
  *((_QWORD *)v213 + 175) = &KeServiceDescriptorTableFilter;
  *((_QWORD *)v213 + 176) = &VfThunksExtended;
  *((_QWORD *)v213 + 177) = &PsWin32CallBack;
  *((_QWORD *)v213 + 178) = &qword_140C12F48;
  *((_QWORD *)v213 + 179) = &KiTableInformation;
  *((_QWORD *)v213 + 180) = &HandleTableListHead;
  *((_QWORD *)v213 + 181) = &HandleTableListLock;
  *((_QWORD *)v213 + 182) = ObpKernelHandleTable;
  *((_QWORD *)v213 + 183) = 0xFFFFF78000000000uLL;
  *((_QWORD *)v213 + 184) = KiWaitNever;
  *((_QWORD *)v213 + 185) = &SeProtectedMapping;
  *((_QWORD *)v213 + 187) = &KiStackProtectNotifyEvent;
  *((_QWORD *)v213 + 188) = MmPteBase;
  *((_QWORD *)v213 + 189) = PsNtosImageBase;
  *((_QWORD *)v213 + 190) = PsHalImageBase;
  *((_QWORD *)v213 + 191) = &KeNumberProcessors_0;
  v334 = &_ti_a;
  v335 = 2LL;
  *((_QWORD *)v213 + 192) = &MaxDataSize;
  *((_QWORD *)v213 + 193) = &qword_140CFC3D0;
  *((_QWORD *)v213 + 194) = RtlpInvertedFunctionTable;
  *((_QWORD *)v213 + 186) = KiInterruptThunk;
  v336 = v213 + 1584;
  do
  {
    *v336 = *(_OWORD *)v334;
    v336[1] = *((_OWORD *)v334 + 1);
    v336[2] = *((_OWORD *)v334 + 2);
    v336[3] = *((_OWORD *)v334 + 3);
    v336[4] = *((_OWORD *)v334 + 4);
    v336[5] = *((_OWORD *)v334 + 5);
    v336[6] = *((_OWORD *)v334 + 6);
    v336 += 8;
    v337 = *((_OWORD *)v334 + 7);
    v334 += 16;
    *(v336 - 1) = v337;
    --v335;
  }
  while ( v335 );
  *v336 = *(_OWORD *)v334;
  v336[1] = *((_OWORD *)v334 + 1);
  v336[2] = *((_OWORD *)v334 + 2);
  v336[3] = *((_OWORD *)v334 + 3);
  v338 = KxUnexpectedInterrupt0;
  if ( KiKvaShadow )
    v338 = KiIsrThunkShadow;
  *((_QWORD *)v213 + 195) = v338;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  *((_DWORD *)v213 + 514) = v173;
  *((_DWORD *)v213 + 651) = v173;
  v339 = __rdtsc();
  v340 = (__ROR8__(v339, 3) ^ v339) * (unsigned __int128)0x7010008004002001uLL;
  v3934 = *((_QWORD *)&v340 + 1);
  v341 = ((unsigned __int64)v340 ^ *((_QWORD *)&v340 + 1)) % 0xB;
  if ( (unsigned int)v341 > 5 )
  {
    v345 = v341 - 6;
    if ( v345 )
    {
      v346 = v345 - 1;
      if ( v346 )
      {
        v347 = v346 - 1;
        if ( v347 )
        {
          if ( v347 == 1 )
          {
            v3885[7] = -1333354875;
            v344 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v348 = __rdtsc();
            v349 = __ROR8__(v348, 3);
            v3935 = ((v349 ^ v348) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v350 = v3935 ^ (67117057 * (v349 ^ v348));
            v351 = v350 >> 5;
            v352 = (1321528399 * (unsigned __int64)(v350 >> 5)) >> 32;
            LODWORD(v348) = v350 % 0x1A + 97;
            v350 >>= 10;
            LODWORD(v348) = ((((_DWORD)v348 << 8) | (v351 - 26 * (v352 >> 3) + 65)) << 8) | (v350 % 0x1A + 97);
            v325 = v4474;
            v344 = ((_DWORD)v348 << 8) | ((v350 >> 5) % 0x1A + 65);
          }
        }
        else
        {
          v3885[8] = 1684422978;
          v344 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3885[9] = -2100910376;
        v344 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3885[10] = 1314342514;
      v344 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v341 == 5 )
  {
    v3886[11] = 680282605;
    v344 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v341 )
  {
    v342 = v341 - 1;
    if ( v342 )
    {
      v343 = v342 - 1;
      if ( v343 )
      {
        if ( v343 == 1 )
        {
          v3885[3] = -1474152136;
          v344 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3885[2] = 1728537748;
          v344 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3885[4] = -2051698419;
        v344 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3885[5] = -1297272415;
      v344 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3885[6] = -795291432;
    v344 = __ROR4__(-795291432, 6);
  }
  *((_DWORD *)v213 + 516) = v344;
  v353 = __rdtsc();
  v354 = (__ROR8__(v353, 3) ^ v353) * (unsigned __int128)0x7010008004002001uLL;
  v3936 = *((_QWORD *)&v354 + 1);
  v355 = v354 ^ *((_QWORD *)&v354 + 1);
  *((_QWORD *)&v354 + 1) = (((unsigned __int64)v354 ^ *((_QWORD *)&v354 + 1)) * (unsigned __int128)0x410410410410411uLL) >> 64;
  *((_DWORD *)v213 + 517) = v355
                          - 63
                          * ((*((_QWORD *)&v354 + 1) + ((unsigned __int64)(v355 - *((_QWORD *)&v354 + 1)) >> 1)) >> 5)
                          + 1;
  v356 = __rdtsc();
  v357 = (__ROR8__(v356, 3) ^ v356) * (unsigned __int128)0x7010008004002001uLL;
  v358 = 700 - v173;
  v3937 = *((_QWORD *)&v357 + 1);
  *((_QWORD *)&v357 + 1) ^= v357;
  *((_QWORD *)v213 + 259) = *((_QWORD *)&v357 + 1);
  if ( (DWORD2(v357) & 0x80000000) != 0 )
    v358 = 724 - v173;
  *((_DWORD *)v213 + 599) = (*((_DWORD *)v213 + 599) + v358) ^ 0xBC2A27DB;
  v359 = __rdtsc();
  v360 = (__ROR8__(v359, 3) ^ v359) * (unsigned __int128)0x7010008004002001uLL;
  v3938 = *((_QWORD *)&v360 + 1);
  if ( ((unsigned __int64)v360 ^ *((_QWORD *)&v360 + 1)) % 0xA < 3 )
    *((_DWORD *)v213 + 612) |= 8u;
  v361 = __rdtsc();
  v362 = (__ROR8__(v361, 3) ^ v361) * (unsigned __int128)0x7010008004002001uLL;
  v3939 = *((_QWORD *)&v362 + 1);
  if ( ((unsigned __int64)v362 ^ *((_QWORD *)&v362 + 1)) % 0xA < 3 )
    *((_DWORD *)v213 + 612) |= 0x4000000u;
  v363 = v3882;
  if ( v3882 == 7
    || (v364 = __rdtsc(),
        v365 = (__ROR8__(v364, 3) ^ v364) * (unsigned __int128)0x7010008004002001uLL,
        v3940 = *((_QWORD *)&v365 + 1),
        ((unsigned __int64)v365 ^ *((_QWORD *)&v365 + 1)) % 0xA < 2) )
  {
    *((_DWORD *)v213 + 613) |= 8u;
  }
  v366 = __rdtsc();
  v367 = (__ROR8__(v366, 3) ^ v366) * (unsigned __int128)0x7010008004002001uLL;
  v3941 = *((_QWORD *)&v367 + 1);
  if ( !(((unsigned __int64)v367 ^ *((_QWORD *)&v367 + 1)) % 0xA) )
    *((_DWORD *)v213 + 612) |= 0x8000u;
  v368 = __rdtsc();
  v369 = (__ROR8__(v368, 3) ^ v368) * (unsigned __int128)0x7010008004002001uLL;
  v3942 = *((_QWORD *)&v369 + 1);
  if ( ((unsigned __int64)v369 ^ *((_QWORD *)&v369 + 1)) % 0xA < 3 )
    *((_DWORD *)v213 + 612) |= 0x400000u;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v370 = __rdtsc();
  v371 = (__ROR8__(v370, 3) ^ v370) * (unsigned __int128)0x7010008004002001uLL;
  v3943 = *((_QWORD *)&v371 + 1);
  if ( !(((unsigned __int64)v371 ^ *((_QWORD *)&v371 + 1)) % 0xA) )
    *((_DWORD *)v213 + 612) |= 0x8000000u;
  v372 = __rdtsc();
  v373 = (__ROR8__(v372, 3) ^ v372) * (unsigned __int128)0x7010008004002001uLL;
  v3944 = *((_QWORD *)&v373 + 1);
  if ( ((unsigned __int64)v373 ^ *((_QWORD *)&v373 + 1)) % 0xA < 3 )
    *((_DWORD *)v213 + 612) |= 0x800000u;
  if ( v325 )
  {
    if ( (v3888 & 1) != 0 && v363 != 4 )
    {
      v374 = __rdtsc();
      v375 = (__ROR8__(v374, 3) ^ v374) * (unsigned __int128)0x7010008004002001uLL;
      v3945 = *((_QWORD *)&v375 + 1);
      if ( ((unsigned __int64)v375 ^ *((_QWORD *)&v375 + 1)) % 0xA < 6 )
        *((_DWORD *)v213 + 613) |= 1u;
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v376 = __rdtsc();
  v377 = (__ROR8__(v376, 3) ^ v376) * (unsigned __int128)0x7010008004002001uLL;
  v3946 = *((_QWORD *)&v377 + 1);
  v378 = v377 ^ *((_QWORD *)&v377 + 1);
  *((_QWORD *)&v377 + 1) = (((unsigned __int64)v377 ^ *((_QWORD *)&v377 + 1)) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
  if ( v378 == 100 * ((*((_QWORD *)&v377 + 1) + ((unsigned __int64)(v378 - *((_QWORD *)&v377 + 1)) >> 1)) >> 6) )
    *((_DWORD *)v213 + 613) |= 0x20000u;
  if ( (*((unsigned __int8 (**)(void))v213 + 133))() )
    *((_DWORD *)v213 + 613) |= 2u;
  if ( (unsigned int)HvlIsHypervisorPresent() )
    *((_DWORD *)v213 + 613) |= 0x40000u;
  if ( (unsigned __int8)MiIsRetpolineEnabled() )
    *((_DWORD *)v213 + 613) |= 0x100000u;
  v379 = __rdtsc();
  v380 = (__ROR8__(v379, 3) ^ v379) * (unsigned __int128)0x7010008004002001uLL;
  v3947 = *((_QWORD *)&v380 + 1);
  if ( !(((unsigned __int64)v380 ^ *((_QWORD *)&v380 + 1)) % 0xA) )
    *((_DWORD *)v213 + 613) |= 0x80u;
  if ( v363 == 7 )
  {
    *((_DWORD *)v213 + 612) = *((_DWORD *)v213 + 612) & 0xBBFFFFF7 | 0x40000000;
    *((_DWORD *)v213 + 598) = 1;
  }
  if ( (int)KiSwInterruptPresent() >= 0 )
  {
    *((_DWORD *)v213 + 612) |= 0x80000000;
    *((_DWORD *)v213 + 613) |= 0x2000u;
  }
  *((_QWORD *)v213 + 338) = KeComputeParallelSha256StateSize();
  v381 = __rdtsc();
  v382 = (__ROR8__(v381, 3) ^ v381) * (unsigned __int128)0x7010008004002001uLL;
  v3948 = *((_QWORD *)&v382 + 1);
  v383 = ((unsigned __int64)v382 ^ *((_QWORD *)&v382 + 1)) % 0xB;
  if ( (unsigned int)v383 > 5 )
  {
    v387 = v383 - 6;
    if ( v387 )
    {
      v388 = v387 - 1;
      if ( v388 )
      {
        v389 = v388 - 1;
        if ( v389 )
        {
          if ( v389 == 1 )
          {
            v3885[17] = -1333354875;
            v386 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v390 = __rdtsc();
            v391 = __ROR8__(v390, 3);
            v3949 = ((v391 ^ v390) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v392 = v3949 ^ (67117057 * (v391 ^ v390));
            v386 = ((((((v392 % 0x1A + 97) << 8) | ((v392 >> 5)
                                                  - 26
                                                  * ((unsigned int)((1321528399 * (unsigned __int64)(v392 >> 5)) >> 32) >> 3)
                                                  + 65)) << 8) | ((v392 >> 10) % 0x1A + 97)) << 8) | ((v392 >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v3885[18] = 1684422978;
          v386 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3885[19] = -2100910376;
        v386 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3885[20] = 1314342514;
      v386 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v383 == 5 )
  {
    v3885[16] = 680282605;
    v386 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v383 )
  {
    v384 = v383 - 1;
    if ( v384 )
    {
      v385 = v384 - 1;
      if ( v385 )
      {
        if ( v385 == 1 )
        {
          v3885[12] = -1474152136;
          v386 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3885[11] = 1728537748;
          v386 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3885[13] = -2051698419;
        v386 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3885[14] = -1297272415;
      v386 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3885[15] = -795291432;
    v386 = __ROR4__(-795291432, 6);
  }
  v393 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD))v213 + 31))(512LL, *((_QWORD *)v213 + 338), v386);
  *((_QWORD *)v213 + 337) = v393;
  if ( !v393 )
    return 0;
  if ( !__2c )
  {
    v394 = __rdtsc();
    v395 = (__ROR8__(v394, 3) ^ v394) * (unsigned __int128)0x7010008004002001uLL;
    v3950 = *((_QWORD *)&v395 + 1);
    v396 = ((unsigned __int64)v395 ^ *((_QWORD *)&v395 + 1)) % 0xB;
    if ( (unsigned int)v396 > 5 )
    {
      v400 = v396 - 6;
      if ( v400 )
      {
        v401 = v400 - 1;
        if ( v401 )
        {
          v402 = v401 - 1;
          if ( v402 )
          {
            if ( v402 == 1 )
            {
              v3885[27] = -1333354875;
              v399 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v403 = __rdtsc();
              v404 = __ROR8__(v403, 3);
              v3951 = ((v404 ^ v403) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v405 = v3951 ^ (67117057 * (v404 ^ v403));
              v399 = ((((((v405 % 0x1A + 97) << 8) | ((v405 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v405 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v405 >> 10) % 0x1A + 97)) << 8) | ((v405 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            v3885[28] = 1684422978;
            v399 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          v3885[29] = -2100910376;
          v399 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        v3885[30] = 1314342514;
        v399 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v396 == 5 )
    {
      v3885[26] = 680282605;
      v399 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v396 )
    {
      v397 = v396 - 1;
      if ( v397 )
      {
        v398 = v397 - 1;
        if ( v398 )
        {
          if ( v398 == 1 )
          {
            v3885[22] = -1474152136;
            v399 = __ROR4__(-1474152133, 15);
          }
          else
          {
            v3885[21] = 1728537748;
            v399 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v3885[23] = -2051698419;
          v399 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        v3885[24] = -1297272415;
        v399 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      v3885[25] = -795291432;
      v399 = __ROR4__(-795291432, 6);
    }
    v406 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v213 + 31))(512LL, 8LL, v399);
    __2c = (__int64)v406;
    if ( !v406 )
      return 0;
    *v406 = 0LL;
  }
  *((_QWORD *)v213 + 320) = __2c;
  if ( (unsigned int)KiIsKernelCfgActive() )
    *((_DWORD *)v213 + 613) |= 0x10u;
  if ( (unsigned int)KiAreCodePatchesAllowed() )
    *((_DWORD *)v213 + 613) |= 0x40u;
  *((_DWORD *)v213 + 526) = v363;
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _RAX = 2147483656LL;
  __asm { cpuid }
  v4268[2] = _RAX;
  v412 = (unsigned int)_RAX >> 8;
  v213[2336] = BYTE1(_RAX);
  v4268[3] = _RBX;
  v4268[4] = _RCX;
  v4268[5] = _RDX;
  v413 = __rdtsc();
  v414 = (__ROR8__(v413, 3) ^ v413) * (unsigned __int128)0x7010008004002001uLL;
  v3952 = *((_QWORD *)&v414 + 1);
  if ( ((unsigned __int64)v414 ^ *((_QWORD *)&v414 + 1)) % 0xA < 3 )
    *((_DWORD *)v213 + 613) |= 0x100u;
  if ( (unsigned __int8)v412 > 0x3Fu )
  {
    v3885[31] = -805294751;
    KeBugCheckEx(__ROR4__(-805306349, 92), 0LL, 0LL, 0LL, 0LL);
  }
  LODWORD(v3846) = v3888 & 1;
  if ( (v3888 & 1) != 0 )
  {
    v415 = (unsigned __int64)&qword_140C12F90;
    RtlImageNtHeader(0x140000000uLL);
    RtlCaptureImageExceptionValues(0x140000000uLL, &v4369, v3886);
    v417 = v4369;
    v418 = 0x140000000uLL;
    v4370 = 0x140000000uLL;
    v3886[0] /= 0xCu;
    v4372 = (__int64 *)&v3953;
    v419 = v4369 + 12LL * v3886[0];
    v4371 = v419;
    while ( v417 && v417 != v419 )
    {
      v420 = RtlpConvertFunctionEntry(v417, v418, v416);
      LOBYTE(v421) = (unsigned __int64)&qword_140C12F90 & 0x3F;
      *v4372 = v420;
      v417 = v4369 + 12;
      v4369 += 12LL;
      v422 = *v3953;
      v423 = v3953[1] - v422;
      v424 = (_QWORD *)(0x140000000LL + v422);
      v425 = 0x140000000LL + v422 + v423;
      v416 = v424;
      v426 = (const char *)v424;
      if ( (unsigned __int64)v424 < v425 )
      {
        do
        {
          _mm_prefetch(v426, 0);
          v426 += 64;
        }
        while ( (unsigned __int64)v426 < v425 );
      }
      v427 = (__int64 *)v415;
      for ( ii = v423 >> 7; ii; --ii )
      {
        v429 = 8LL;
        do
        {
          v430 = v416[1] ^ __ROL8__(*v416 ^ (unsigned __int64)v427, v421);
          v416 += 2;
          v427 = (__int64 *)__ROL8__(v430, v421);
          --v429;
        }
        while ( v429 );
        v431 = __ROL8__(v415 ^ ((char *)v416 - (char *)v424), 17) ^ v415 ^ ((char *)v416 - (char *)v424);
        v3954 = (v431 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v421 = ((unsigned __int8)(v3954 ^ v431) ^ (unsigned __int8)v421) & 0x3F;
        if ( !v421 )
          LOBYTE(v421) = 1;
      }
      v432 = v423 & 0x7F;
      if ( v432 >= 8 )
      {
        v433 = (unsigned __int64)v432 >> 3;
        do
        {
          v427 = (__int64 *)__ROL8__(*v416++ ^ (unsigned __int64)v427, v421);
          v432 -= 8;
          --v433;
        }
        while ( v433 );
      }
      for ( ; v432; --v432 )
      {
        v434 = *(unsigned __int8 *)v416;
        v416 = (_QWORD *)((char *)v416 + 1);
        v427 = (__int64 *)__ROL8__(v434 ^ (unsigned __int64)v427, v421);
      }
      v419 = v4371;
      v415 = (unsigned __int64)v427;
      v418 = v4370;
    }
    v213 = (_BYTE *)v3842;
    v435 = *(_DWORD *)(v3842 + 2448) & 0xFFFBFFFF | (qword_140C12F90 != v415 ? 0x40000 : 0);
    *(_DWORD *)(v3842 + 2448) = v435;
    if ( (v435 & 0x40000) != 0 && !*((_DWORD *)v213 + 574) )
      *(_QWORD *)(*((_QWORD *)v213 + 178) + 24LL) = qword_140C12F90 ^ v415;
    v363 = v3882;
  }
  v436 = __rdtsc();
  v437 = (__ROR8__(v436, 3) ^ v436) * (unsigned __int128)0x7010008004002001uLL;
  v3955 = *((_QWORD *)&v437 + 1);
  if ( ((unsigned __int64)v437 ^ *((_QWORD *)&v437 + 1)) % 0xA < 2 && v363 != 3 )
  {
    v438 = *((unsigned int *)v213 + 516);
    v439 = __rdtsc();
    v440 = __ROR8__(v439, 3);
    v3956 = ((v440 ^ v439) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v441 = ((unsigned __int16)v3956 ^ (unsigned __int16)(8193 * (v440 ^ v439))) & 0x7FF;
    v442 = __rdtsc();
    v443 = (__ROR8__(v442, 3) ^ v442) * (unsigned __int128)0x7010008004002001uLL;
    v3957 = *((_QWORD *)&v443 + 1);
    v444 = (*((_QWORD *)&v443 + 1) ^ (unsigned __int64)v443) % (unsigned int)(v441 + 1);
    v445 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v213 + 31))(512LL, (unsigned int)(v441 + 32), v438);
    if ( v445 )
    {
      v447 = v444;
      v448 = (_QWORD *)v445;
      if ( (unsigned int)v444 >= 8 )
      {
        v449 = (unsigned __int64)(unsigned int)v444 >> 3;
        do
        {
          v447 -= 8;
          v450 = __rdtsc();
          v451 = (__ROR8__(v450, 3) ^ v450) * (unsigned __int128)0x7010008004002001uLL;
          v3958 = *((_QWORD *)&v451 + 1);
          *v448++ = v451 ^ *((_QWORD *)&v451 + 1);
          --v449;
        }
        while ( v449 );
      }
      if ( v447 )
      {
        v452 = __rdtsc();
        v453 = (__ROR8__(v452, 3) ^ v452) * (unsigned __int128)0x7010008004002001uLL;
        v3959 = *((_QWORD *)&v453 + 1);
        v454 = v453 ^ *((_QWORD *)&v453 + 1);
        do
        {
          *(_BYTE *)v448 = v454;
          v448 = (_QWORD *)((char *)v448 + 1);
          v454 >>= 8;
          --v447;
        }
        while ( v447 );
      }
      v455 = v441 - v444;
      v446 = v445 + (unsigned int)v444;
      v456 = (_QWORD *)(v446 + 32);
      if ( v455 >= 8 )
      {
        v457 = (unsigned __int64)v455 >> 3;
        do
        {
          v455 -= 8;
          v458 = __rdtsc();
          v459 = (__ROR8__(v458, 3) ^ v458) * (unsigned __int128)0x7010008004002001uLL;
          v3960 = *((_QWORD *)&v459 + 1);
          *v456++ = v459 ^ *((_QWORD *)&v459 + 1);
          --v457;
        }
        while ( v457 );
      }
      if ( v455 )
      {
        v460 = __rdtsc();
        v461 = (__ROR8__(v460, 3) ^ v460) * (unsigned __int128)0x7010008004002001uLL;
        v3961 = *((_QWORD *)&v461 + 1);
        v462 = v461 ^ *((_QWORD *)&v461 + 1);
        do
        {
          *(_BYTE *)v456 = v462;
          v456 = (_QWORD *)((char *)v456 + 1);
          v462 >>= 8;
          --v455;
        }
        while ( v455 );
      }
    }
    else
    {
      ++*((_DWORD *)v213 + 646);
      v446 = 0LL;
    }
    *((_QWORD *)v213 + 321) = v446;
    if ( !v446 )
      return 0;
  }
  v463 = __rdtsc();
  v464 = (__ROR8__(v463, 3) ^ v463) * (unsigned __int128)0x7010008004002001uLL;
  v3962 = *((_QWORD *)&v464 + 1);
  if ( ((unsigned __int64)v464 ^ *((_QWORD *)&v464 + 1)) % 0xA < 2 && (*((_DWORD *)v213 + 612) & 0x40000000) == 0 )
  {
    v465 = *((unsigned int *)v213 + 516);
    v466 = __rdtsc();
    v467 = __ROR8__(v466, 3);
    v3963 = ((v467 ^ v466) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v468 = ((unsigned __int16)v3963 ^ (unsigned __int16)(8193 * (v467 ^ v466))) & 0x7FF;
    v469 = __rdtsc();
    v470 = (__ROR8__(v469, 3) ^ v469) * (unsigned __int128)0x7010008004002001uLL;
    v3964 = *((_QWORD *)&v470 + 1);
    v471 = (*((_QWORD *)&v470 + 1) ^ (unsigned __int64)v470) % (unsigned int)(v468 + 1);
    v472 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v213 + 31))(512LL, (unsigned int)(v468 + 514), v465);
    if ( !v472 )
    {
LABEL_687:
      ++*((_DWORD *)v213 + 646);
      return 0;
    }
    v474 = v471;
    v475 = (_QWORD *)v472;
    if ( (unsigned int)v471 >= 8 )
    {
      v476 = (unsigned __int64)(unsigned int)v471 >> 3;
      do
      {
        v474 -= 8;
        v477 = __rdtsc();
        v478 = (__ROR8__(v477, 3) ^ v477) * (unsigned __int128)0x7010008004002001uLL;
        v3965 = *((_QWORD *)&v478 + 1);
        *v475++ = v478 ^ *((_QWORD *)&v478 + 1);
        --v476;
      }
      while ( v476 );
    }
    if ( v474 )
    {
      v479 = __rdtsc();
      v480 = (__ROR8__(v479, 3) ^ v479) * (unsigned __int128)0x7010008004002001uLL;
      v3966 = *((_QWORD *)&v480 + 1);
      v481 = v480 ^ *((_QWORD *)&v480 + 1);
      do
      {
        *(_BYTE *)v475 = v481;
        v475 = (_QWORD *)((char *)v475 + 1);
        v481 >>= 8;
        --v474;
      }
      while ( v474 );
    }
    v482 = v468 - v471;
    v483 = v472 + (unsigned int)v471;
    v484 = (_QWORD *)(v483 + 514);
    if ( v482 >= 8 )
    {
      v485 = (unsigned __int64)v482 >> 3;
      do
      {
        v482 -= 8;
        v486 = __rdtsc();
        v487 = (__ROR8__(v486, 3) ^ v486) * (unsigned __int128)0x7010008004002001uLL;
        v3967 = *((_QWORD *)&v487 + 1);
        *v484++ = v487 ^ *((_QWORD *)&v487 + 1);
        --v485;
      }
      while ( v485 );
    }
    if ( v482 )
    {
      v488 = __rdtsc();
      v489 = (__ROR8__(v488, 3) ^ v488) * (unsigned __int128)0x7010008004002001uLL;
      v3968 = *((_QWORD *)&v489 + 1);
      v490 = v489 ^ *((_QWORD *)&v489 + 1);
      do
      {
        *(_BYTE *)v484 = v490;
        v484 = (_QWORD *)((char *)v484 + 1);
        v490 >>= 8;
        --v482;
      }
      while ( v482 );
    }
    if ( !v483 )
      return 0;
    v491 = (_BYTE *)(v483 + 2);
    v492 = __rdtsc();
    v493 = (__ROR8__(v492, 3) ^ v492) * (unsigned __int128)0x7010008004002001uLL;
    v494 = (_BYTE *)(v483 + 2);
    v3969 = *((_QWORD *)&v493 + 1);
    v3970[0] = v493 ^ *((_QWORD *)&v493 + 1);
    for ( jj = 0; jj < 0x100; ++jj )
      *v494++ = jj;
    v496 = 256LL;
    v497 = 0;
    do
    {
      v497 += *v491 + *((_BYTE *)v3970 + ((-2 - (_BYTE)v483 + (_BYTE)v491) & 7));
      v498 = *(_BYTE *)(v497 + v483 + 2);
      *(_BYTE *)(v497 + v483 + 2) = *v491;
      *v491++ = v498;
      --v496;
    }
    while ( v496 );
    v499 = 256;
    v500 = (_QWORD *)(v483 + 258);
    v501 = 32LL;
    do
    {
      v499 -= 8;
      v502 = __rdtsc();
      v503 = (__ROR8__(v502, 3) ^ v502) * (unsigned __int128)0x7010008004002001uLL;
      v3970[1] = *((_QWORD *)&v503 + 1);
      *v500++ = v503 ^ *((_QWORD *)&v503 + 1);
      --v501;
    }
    while ( v501 );
    if ( v499 )
    {
      v504 = __rdtsc();
      v505 = (__ROR8__(v504, 3) ^ v504) * (unsigned __int128)0x7010008004002001uLL;
      v3970[2] = *((_QWORD *)&v505 + 1);
      v506 = v505 ^ *((_QWORD *)&v505 + 1);
      do
      {
        *(_BYTE *)v500 = v506;
        v500 = (_QWORD *)((char *)v500 + 1);
        v506 >>= 8;
        --v499;
      }
      while ( v499 );
    }
    *((_QWORD *)v213 + 334) = v483;
  }
  v507 = __rdtsc();
  v508 = (__ROR8__(v507, 3) ^ v507) * (unsigned __int128)0x7010008004002001uLL;
  v3970[3] = *((_QWORD *)&v508 + 1);
  if ( (*((_QWORD *)&v508 + 1) ^ (unsigned __int64)v508) % 0xA || ((v3882 - 3) & 0xFFFFFFFA) == 0 && v3882 != 8 )
  {
LABEL_767:
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v550 = __rdtsc();
    v551 = (__ROR8__(v550, 3) ^ v550) * (unsigned __int128)0x7010008004002001uLL;
    v3976 = *((_QWORD *)&v551 + 1);
    if ( ((unsigned __int64)v551 ^ *((_QWORD *)&v551 + 1)) % 0xA < 5 )
      *((_DWORD *)v213 + 612) |= 0x1000000u;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v552 = *((unsigned int *)v213 + 516);
    v553 = __rdtsc();
    v554 = __ROR8__(v553, 3);
    v3977 = ((v554 ^ v553) * (unsigned __int128)0x7010008004002001uLL) >> 64;
    v555 = ((unsigned __int16)v3977 ^ (unsigned __int16)(8193 * (v554 ^ v553))) & 0x7FF;
    v556 = __rdtsc();
    v557 = (__ROR8__(v556, 3) ^ v556) * (unsigned __int128)0x7010008004002001uLL;
    v3978 = *((_QWORD *)&v557 + 1);
    v558 = (*((_QWORD *)&v557 + 1) ^ (unsigned __int64)v557) % (unsigned int)(v555 + 1);
    v559 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v213 + 31))(512LL, (unsigned int)(v555 + 136), v552);
    if ( !v559 )
      goto LABEL_687;
    v560 = v558;
    v561 = (_QWORD *)v559;
    if ( (unsigned int)v558 >= 8 )
    {
      v562 = (unsigned __int64)(unsigned int)v558 >> 3;
      do
      {
        v560 -= 8;
        v563 = __rdtsc();
        v564 = (__ROR8__(v563, 3) ^ v563) * (unsigned __int128)0x7010008004002001uLL;
        v3979 = *((_QWORD *)&v564 + 1);
        *v561++ = v564 ^ *((_QWORD *)&v564 + 1);
        --v562;
      }
      while ( v562 );
    }
    if ( v560 )
    {
      v565 = __rdtsc();
      v566 = (__ROR8__(v565, 3) ^ v565) * (unsigned __int128)0x7010008004002001uLL;
      v3980 = *((_QWORD *)&v566 + 1);
      v567 = v566 ^ *((_QWORD *)&v566 + 1);
      do
      {
        *(_BYTE *)v561 = v567;
        v561 = (_QWORD *)((char *)v561 + 1);
        v567 >>= 8;
        --v560;
      }
      while ( v560 );
    }
    v568 = v555 - v558;
    v569 = (struct _KTIMER *)(v559 + (unsigned int)v558);
    Timer = v569;
    p_WaitListHead = &v569[2].Header.WaitListHead;
    if ( v568 >= 8 )
    {
      v571 = (unsigned __int64)v568 >> 3;
      do
      {
        v568 -= 8;
        v572 = __rdtsc();
        v573 = (__ROR8__(v572, 3) ^ v572) * (unsigned __int128)0x7010008004002001uLL;
        v3981 = *((_QWORD *)&v573 + 1);
        p_WaitListHead->Flink = (struct _LIST_ENTRY *)(v573 ^ *((_QWORD *)&v573 + 1));
        p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 8);
        --v571;
      }
      while ( v571 );
      v569 = Timer;
    }
    if ( v568 )
    {
      v574 = __rdtsc();
      v575 = (__ROR8__(v574, 3) ^ v574) * (unsigned __int128)0x7010008004002001uLL;
      v3982 = *((_QWORD *)&v575 + 1);
      v576 = v575 ^ *((_QWORD *)&v575 + 1);
      do
      {
        LOBYTE(p_WaitListHead->Flink) = v576;
        p_WaitListHead = (LIST_ENTRY *)((char *)p_WaitListHead + 1);
        v576 >>= 8;
        --v568;
      }
      while ( v568 );
    }
    if ( !v569 )
      return 0;
    *((_QWORD *)v213 + 241) = v569;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v577 = __rdtsc();
    v578 = (__ROR8__(v577, 3) ^ v577) * (unsigned __int128)0x7010008004002001uLL;
    v3983 = *((_QWORD *)&v578 + 1);
    if ( ((unsigned __int64)v578 ^ *((_QWORD *)&v578 + 1)) % 0xA >= 3 )
    {
      v596 = v569 + 1;
      v3908 = (ULONG_PTR)&v569[1];
    }
    else
    {
      v579 = *((unsigned int *)v213 + 516);
      v580 = __rdtsc();
      v581 = __ROR8__(v580, 3);
      v3984 = ((v581 ^ v580) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v582 = ((unsigned __int16)v3984 ^ (unsigned __int16)(8193 * (v581 ^ v580))) & 0x7FF;
      v583 = __rdtsc();
      v584 = (__ROR8__(v583, 3) ^ v583) * (unsigned __int128)0x7010008004002001uLL;
      v3985 = *((_QWORD *)&v584 + 1);
      v585 = (*((_QWORD *)&v584 + 1) ^ (unsigned __int64)v584) % (unsigned int)(v582 + 1);
      v586 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v213 + 31))(512LL, (unsigned int)(v582 + 72), v579);
      if ( !v586 )
        goto LABEL_687;
      v587 = v585;
      v588 = (_QWORD *)v586;
      if ( (unsigned int)v585 >= 8 )
      {
        v589 = (unsigned __int64)(unsigned int)v585 >> 3;
        do
        {
          v587 -= 8;
          v590 = __rdtsc();
          v591 = (__ROR8__(v590, 3) ^ v590) * (unsigned __int128)0x7010008004002001uLL;
          v3986 = *((_QWORD *)&v591 + 1);
          *v588++ = v591 ^ *((_QWORD *)&v591 + 1);
          --v589;
        }
        while ( v589 );
      }
      if ( v587 )
      {
        v592 = __rdtsc();
        v593 = (__ROR8__(v592, 3) ^ v592) * (unsigned __int128)0x7010008004002001uLL;
        v3987 = *((_QWORD *)&v593 + 1);
        v594 = v593 ^ *((_QWORD *)&v593 + 1);
        do
        {
          *(_BYTE *)v588 = v594;
          v588 = (_QWORD *)((char *)v588 + 1);
          v594 >>= 8;
          --v587;
        }
        while ( v587 );
      }
      v595 = v582 - v585;
      v596 = (struct _KTIMER *)(v586 + (unsigned int)v585);
      v3908 = (ULONG_PTR)v596;
      v597 = &v596[1].Header.WaitListHead;
      if ( v595 >= 8 )
      {
        v598 = (unsigned __int64)v595 >> 3;
        do
        {
          v595 -= 8;
          v599 = __rdtsc();
          v600 = (__ROR8__(v599, 3) ^ v599) * (unsigned __int128)0x7010008004002001uLL;
          v3988 = *((_QWORD *)&v600 + 1);
          v597->Flink = (struct _LIST_ENTRY *)(v600 ^ *((_QWORD *)&v600 + 1));
          v597 = (LIST_ENTRY *)((char *)v597 + 8);
          --v598;
        }
        while ( v598 );
        v596 = (struct _KTIMER *)v3908;
      }
      if ( v595 )
      {
        v601 = __rdtsc();
        v602 = (__ROR8__(v601, 3) ^ v601) * (unsigned __int128)0x7010008004002001uLL;
        v3989 = *((_QWORD *)&v602 + 1);
        v603 = v602 ^ *((_QWORD *)&v602 + 1);
        do
        {
          LOBYTE(v597->Flink) = v603;
          v597 = (LIST_ENTRY *)((char *)v597 + 1);
          v603 >>= 8;
          --v595;
        }
        while ( v595 );
      }
      if ( !v596 )
        return 0;
    }
    v604 = v3882;
    *((_QWORD *)v213 + 242) = v596;
    if ( v604 == 4 )
    {
      v605 = *((unsigned int *)v213 + 516);
      v606 = __rdtsc();
      v607 = __ROR8__(v606, 3);
      v3990 = ((v607 ^ v606) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v608 = ((unsigned __int16)v3990 ^ (unsigned __int16)(8193 * (v607 ^ v606))) & 0x7FF;
      v609 = __rdtsc();
      v610 = (__ROR8__(v609, 3) ^ v609) * (unsigned __int128)0x7010008004002001uLL;
      v3991 = *((_QWORD *)&v610 + 1);
      v611 = (*((_QWORD *)&v610 + 1) ^ (unsigned __int64)v610) % (unsigned int)(v608 + 1);
      v612 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v213 + 31))(512LL, (unsigned int)(v608 + 88), v605);
      if ( !v612 )
        goto LABEL_687;
      v613 = v611;
      v614 = (_QWORD *)v612;
      if ( (unsigned int)v611 >= 8 )
      {
        v615 = (unsigned __int64)(unsigned int)v611 >> 3;
        do
        {
          v613 -= 8;
          v616 = __rdtsc();
          v617 = (__ROR8__(v616, 3) ^ v616) * (unsigned __int128)0x7010008004002001uLL;
          v3992 = *((_QWORD *)&v617 + 1);
          *v614++ = v617 ^ *((_QWORD *)&v617 + 1);
          --v615;
        }
        while ( v615 );
      }
      if ( v613 )
      {
        v618 = __rdtsc();
        v619 = (__ROR8__(v618, 3) ^ v618) * (unsigned __int128)0x7010008004002001uLL;
        v3993 = *((_QWORD *)&v619 + 1);
        v620 = v619 ^ *((_QWORD *)&v619 + 1);
        do
        {
          *(_BYTE *)v614 = v620;
          v614 = (_QWORD *)((char *)v614 + 1);
          v620 >>= 8;
          --v613;
        }
        while ( v613 );
      }
      v621 = v608 - v611;
      v622 = v612 + (unsigned int)v611;
      v623 = (_QWORD *)(v622 + 88);
      if ( v621 >= 8 )
      {
        v624 = (unsigned __int64)v621 >> 3;
        do
        {
          v621 -= 8;
          v625 = __rdtsc();
          v626 = (__ROR8__(v625, 3) ^ v625) * (unsigned __int128)0x7010008004002001uLL;
          v3994 = *((_QWORD *)&v626 + 1);
          *v623++ = v626 ^ *((_QWORD *)&v626 + 1);
          --v624;
        }
        while ( v624 );
      }
      if ( v621 )
      {
        v627 = __rdtsc();
        v628 = (__ROR8__(v627, 3) ^ v627) * (unsigned __int128)0x7010008004002001uLL;
        v3995 = *((_QWORD *)&v628 + 1);
        v629 = v628 ^ *((_QWORD *)&v628 + 1);
        do
        {
          *(_BYTE *)v623 = v629;
          v623 = (_QWORD *)((char *)v623 + 1);
          v629 >>= 8;
          --v621;
        }
        while ( v621 );
      }
      if ( !v622 )
        return 0;
      *((_QWORD *)v213 + 316) = v622;
      *((_DWORD *)v213 + 612) |= 8u;
      v630 = __rdtsc();
      *((_QWORD *)v213 + 307) = 0LL;
      v631 = *((_QWORD *)v213 + 201);
      v3996 = ((__ROR8__(v630, 3) ^ v630) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      PsEnumProcessThreads(
        *(_QWORD *)(*((_QWORD *)v213 + 213)
                  + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + v631)
                  + *((_QWORD *)v213 + 209)),
        &pg_unknown17,
        v213);
      if ( !*((_QWORD *)v213 + 307) )
        return 0;
      *((_QWORD *)v213 + 317) = KiDispatchCallout;
      *((_QWORD *)v213 + 318) = xHalTimerWatchdogStop;
      *((_DWORD *)v213 + 597) = 2122344719;
    }
    else if ( v604 == 5 )
    {
      v632 = *((unsigned int *)v213 + 516);
      v633 = __rdtsc();
      v634 = __ROR8__(v633, 3);
      v3997 = ((v634 ^ v633) * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v635 = ((unsigned __int16)v3997 ^ (unsigned __int16)(8193 * (v634 ^ v633))) & 0x7FF;
      v636 = __rdtsc();
      v637 = (__ROR8__(v636, 3) ^ v636) * (unsigned __int128)0x7010008004002001uLL;
      v3998 = *((_QWORD *)&v637 + 1);
      v638 = (*((_QWORD *)&v637 + 1) ^ (unsigned __int64)v637) % (unsigned int)(v635 + 1);
      v639 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v213 + 31))(512LL, (unsigned int)(v635 + 80), v632);
      if ( v639 )
      {
        v641 = v638;
        v642 = (_QWORD *)v639;
        if ( (unsigned int)v638 >= 8 )
        {
          v643 = (unsigned __int64)(unsigned int)v638 >> 3;
          do
          {
            v641 -= 8;
            v644 = __rdtsc();
            v645 = (__ROR8__(v644, 3) ^ v644) * (unsigned __int128)0x7010008004002001uLL;
            v3999 = *((_QWORD *)&v645 + 1);
            *v642++ = v645 ^ *((_QWORD *)&v645 + 1);
            --v643;
          }
          while ( v643 );
        }
        if ( v641 )
        {
          v646 = __rdtsc();
          v647 = (__ROR8__(v646, 3) ^ v646) * (unsigned __int128)0x7010008004002001uLL;
          v4000 = *((_QWORD *)&v647 + 1);
          v648 = v647 ^ *((_QWORD *)&v647 + 1);
          do
          {
            *(_BYTE *)v642 = v648;
            v642 = (_QWORD *)((char *)v642 + 1);
            v648 >>= 8;
            --v641;
          }
          while ( v641 );
        }
        v649 = v635 - v638;
        v640 = (_DWORD *)(v639 + (unsigned int)v638);
        v650 = v640 + 20;
        if ( v649 >= 8 )
        {
          v651 = (unsigned __int64)v649 >> 3;
          do
          {
            v649 -= 8;
            v652 = __rdtsc();
            v653 = (__ROR8__(v652, 3) ^ v652) * (unsigned __int128)0x7010008004002001uLL;
            v4001 = *((_QWORD *)&v653 + 1);
            *v650++ = v653 ^ *((_QWORD *)&v653 + 1);
            --v651;
          }
          while ( v651 );
        }
        if ( v649 )
        {
          v654 = __rdtsc();
          v655 = (__ROR8__(v654, 3) ^ v654) * (unsigned __int128)0x7010008004002001uLL;
          v4002 = *((_QWORD *)&v655 + 1);
          v656 = v655 ^ *((_QWORD *)&v655 + 1);
          do
          {
            *(_BYTE *)v650 = v656;
            v650 = (_QWORD *)((char *)v650 + 1);
            v656 >>= 8;
            --v649;
          }
          while ( v649 );
        }
      }
      else
      {
        ++*((_DWORD *)v213 + 646);
        v640 = 0LL;
      }
      *((_QWORD *)v213 + 307) = v640;
      if ( !v640 )
        return 0;
      v657 = v4474;
      *v640 = 0;
      v658 = *((_QWORD *)v213 + 307);
      v659 = *(_QWORD *)(v657 + 24);
      *(_OWORD *)(v658 + 8) = *(_OWORD *)v659;
      *(_OWORD *)(v658 + 24) = *(_OWORD *)(v659 + 16);
      *(_OWORD *)(v658 + 40) = *(_OWORD *)(v659 + 32);
      *(_OWORD *)(v658 + 56) = *(_OWORD *)(v659 + 48);
      v660 = KeAcquireSpinLockRaiseToDpc(&KiHardwareTriggerLock);
      _InterlockedExchange64((volatile __int64 *)(v659 + 24), (__int64)pg_unknown27);
      *(_QWORD *)(v659 + 32) = v658;
      KeReleaseSpinLock(&KiHardwareTriggerLock, v660);
      v661 = *((_QWORD *)v213 + 307);
      *((_OWORD *)v213 + 154) = *(_OWORD *)(v661 + 8);
      *((_OWORD *)v213 + 155) = *(_OWORD *)(v661 + 24);
      *((_OWORD *)v213 + 156) = *(_OWORD *)(v661 + 40);
      *((_OWORD *)v213 + 157) = *(_OWORD *)(v661 + 56);
    }
    v662 = __rdtsc();
    v663 = (__ROR8__(v662, 3) ^ v662) * (unsigned __int128)0x7010008004002001uLL;
    v4003 = *((_QWORD *)&v663 + 1);
    if ( !((*((_QWORD *)&v663 + 1) ^ (unsigned __int64)v663) % 0xA) )
      *((_DWORD *)v213 + 612) |= 2u;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v664 = __rdtsc();
    v665 = (__ROR8__(v664, 3) ^ v664) * (unsigned __int128)0x7010008004002001uLL;
    v4004 = *((_QWORD *)&v665 + 1);
    if ( ((unsigned __int64)v665 ^ *((_QWORD *)&v665 + 1)) % 0xA < 7 )
    {
      v666 = *((_DWORD *)v213 + 612);
      if ( (v666 & 0x40000000) == 0 )
        *((_DWORD *)v213 + 612) = v666 | 0x80;
    }
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v667 = __rdtsc();
    v668 = (__ROR8__(v667, 3) ^ v667) * (unsigned __int128)0x7010008004002001uLL;
    v4005 = *((_QWORD *)&v668 + 1);
    if ( ((unsigned __int64)v668 ^ *((_QWORD *)&v668 + 1)) % 0xA < 7 )
    {
      v669 = __rdtsc();
      v670 = (__ROR8__(v669, 3) ^ v669) * (unsigned __int128)0x7010008004002001uLL;
      v4006 = *((_QWORD *)&v670 + 1);
      if ( ((unsigned __int64)v670 ^ *((_QWORD *)&v670 + 1)) % 0xA >= 7 )
      {
        v696 = ExAllocateTimer(0LL, 0LL, 8LL);
        if ( !v696 )
          return 0;
        *((_QWORD *)v213 + 319) = v696;
        v697 = __rdtsc();
        v4013 = ((__ROR8__(v697, 3) ^ v697) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        ExSetTimer(v696);
      }
      else
      {
        v671 = *((unsigned int *)v213 + 516);
        v672 = __rdtsc();
        v673 = __ROR8__(v672, 3);
        v4007 = ((v673 ^ v672) * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v674 = ((unsigned __int16)v4007 ^ (unsigned __int16)(8193 * (v673 ^ v672))) & 0x7FF;
        v675 = __rdtsc();
        v676 = (__ROR8__(v675, 3) ^ v675) * (unsigned __int128)0x7010008004002001uLL;
        v4008 = *((_QWORD *)&v676 + 1);
        v677 = (*((_QWORD *)&v676 + 1) ^ (unsigned __int64)v676) % (unsigned int)(v674 + 1);
        v678 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v213 + 31))(512LL, (unsigned int)(v674 + 24), v671);
        if ( !v678 )
          goto LABEL_687;
        v679 = v677;
        v680 = (_QWORD *)v678;
        if ( (unsigned int)v677 >= 8 )
        {
          v681 = (unsigned __int64)(unsigned int)v677 >> 3;
          do
          {
            v679 -= 8;
            v682 = __rdtsc();
            v683 = (__ROR8__(v682, 3) ^ v682) * (unsigned __int128)0x7010008004002001uLL;
            v4009 = *((_QWORD *)&v683 + 1);
            *v680++ = v683 ^ *((_QWORD *)&v683 + 1);
            --v681;
          }
          while ( v681 );
        }
        if ( v679 )
        {
          v684 = __rdtsc();
          v685 = (__ROR8__(v684, 3) ^ v684) * (unsigned __int128)0x7010008004002001uLL;
          v4010 = *((_QWORD *)&v685 + 1);
          v686 = v685 ^ *((_QWORD *)&v685 + 1);
          do
          {
            *(_BYTE *)v680 = v686;
            v680 = (_QWORD *)((char *)v680 + 1);
            v686 >>= 8;
            --v679;
          }
          while ( v679 );
        }
        v687 = v674 - v677;
        v688 = (struct _KEVENT *)(v678 + (unsigned int)v677);
        v689 = v688 + 1;
        if ( v687 >= 8 )
        {
          v690 = (unsigned __int64)v687 >> 3;
          do
          {
            v687 -= 8;
            v691 = __rdtsc();
            v692 = (__ROR8__(v691, 3) ^ v691) * (unsigned __int128)0x7010008004002001uLL;
            v4011 = *((_QWORD *)&v692 + 1);
            *(_QWORD *)&v689->Header.Lock = v692 ^ *((_QWORD *)&v692 + 1);
            v689 = (struct _KEVENT *)((char *)v689 + 8);
            --v690;
          }
          while ( v690 );
        }
        if ( v687 )
        {
          v693 = __rdtsc();
          v694 = (__ROR8__(v693, 3) ^ v693) * (unsigned __int128)0x7010008004002001uLL;
          v4012 = *((_QWORD *)&v694 + 1);
          v695 = v694 ^ *((_QWORD *)&v694 + 1);
          do
          {
            v689->Header.Type = v695;
            v689 = (struct _KEVENT *)((char *)v689 + 1);
            v695 >>= 8;
            --v687;
          }
          while ( v687 );
        }
        if ( !v688 )
          return 0;
        KeInitializeEvent(v688, NotificationEvent, 0);
        *((_QWORD *)v213 + 319) = v688;
      }
    }
    v698 = __rdtsc();
    v699 = (__ROR8__(v698, 3) ^ v698) * (unsigned __int128)0x7010008004002001uLL;
    v4014 = *((_QWORD *)&v699 + 1);
    if ( ((unsigned __int64)v699 ^ *((_QWORD *)&v699 + 1)) % 0xA < 2 && *((int *)v213 + 612) >= 0 )
      *((_DWORD *)v213 + 613) |= 0x200u;
    v700 = Size;
    v701 = &v213[v3853];
    v702 = (int)Src;
    memmove(v701, Src, (unsigned int)Size);
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    if ( (_DWORD)Size )
      *(_WORD *)&v701[(unsigned int)KeGuardDispatchICall - (unsigned int)Src] = -7937;
    if ( v700 )
      v701[(unsigned int)KeGuardCheckICall - v702] = -61;
    *((_QWORD *)v213 + 281) = 0x140000000uLL;
    v703 = RtlImageNtHeader(0x140000000uLL);
    *((_QWORD *)v213 + 283) = v703;
    *((_QWORD *)v213 + 282) = 0x140000000LL + *(unsigned int *)(v703 + 80);
    *((_DWORD *)v213 + 555) = dword_140D585E0;
    *((_DWORD *)v213 + 556) = dword_140D58618;
    *((_DWORD *)v213 + 557) = KiIstStackSize;
    if ( (_DWORD)qword_140D585E8 != 8 )
    {
      v3886[21] = -805294751;
      KeBugCheckEx(__ROR4__(-805306349, 92), 4uLL, 0LL, qword_140D585E8, 8uLL);
    }
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    *((_QWORD *)v213 + 279) = *(_QWORD *)(*((unsigned int *)v213 + 556)
                                        + *(_QWORD *)(*((__int64 (__fastcall **)(__int64))v213 + 142))(254LL));
    __writecr8(CurrentIrql);
    *((_WORD *)v213 + 1084) = -12472;
    IdtBase = KeGetPcr()->IdtBase;
    *(_KIDTENTRY64 *)(v213 + 2120) = IdtBase[1];
    *(_KIDTENTRY64 *)(v213 + 2136) = IdtBase[2];
    *(_KIDTENTRY64 *)(v213 + 2152) = IdtBase[18];
    v706 = __rdtsc();
    v707 = (__ROR8__(v706, 3) ^ v706) * (unsigned __int128)0x7010008004002001uLL;
    v4015 = *((_QWORD *)&v707 + 1);
    v708 = ((unsigned __int64)v707 ^ *((_QWORD *)&v707 + 1)) % 0xB;
    if ( (unsigned int)v708 > 5 )
    {
      v712 = v708 - 6;
      if ( v712 )
      {
        v713 = v712 - 1;
        if ( v713 )
        {
          v714 = v713 - 1;
          if ( v714 )
          {
            if ( v714 == 1 )
            {
              v3886[28] = -1333354875;
              v711 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v715 = __rdtsc();
              v716 = __ROR8__(v715, 3);
              v4016 = ((v716 ^ v715) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v717 = v4016 ^ (67117057 * (v716 ^ v715));
              v711 = ((((((v717 % 0x1A + 97) << 8) | ((v717 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v717 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v717 >> 10) % 0x1A + 97)) << 8) | ((v717 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            v3886[29] = 1684422978;
            v711 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          v3886[30] = -2100910376;
          v711 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        v3886[31] = 1314342514;
        v711 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v708 == 5 )
    {
      v3886[27] = 680282605;
      v711 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v708 )
    {
      v709 = v708 - 1;
      if ( v709 )
      {
        v710 = v709 - 1;
        if ( v710 )
        {
          if ( v710 == 1 )
          {
            v3886[23] = -1474152136;
            v711 = __ROR4__(-1474152133, 15);
          }
          else
          {
            v3886[22] = 1728537748;
            v711 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v3886[24] = -2051698419;
          v711 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        v3886[25] = -1297272415;
        v711 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      v3886[26] = -795291432;
      v711 = __ROR4__(-795291432, 6);
    }
    v718 = (*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v213 + 31))(512LL, 432LL, v711);
    *((_QWORD *)v213 + 284) = v718;
    if ( !v718 )
      return 0;
    *((_QWORD *)v213 + 284) = (v718 + 128) & 0xFFFFFFFFFFFFFF80uLL;
    v213[2174] = 72;
    v213[2175] = -121;
    v213[2176] = 12;
    v213[2177] = 36;
    v213[2178] = -127;
    v213[2179] = 100;
    v213[2180] = 36;
    v213[2181] = 16;
    v213[2182] = -1;
    v213[2183] = -2;
    v213[2184] = -1;
    v213[2185] = -1;
    v213[2186] = 72;
    v213[2187] = -49;
    *((_WORD *)v213 + 1086) = 1295;
    v213[2170] = -61;
    v719 = 0;
    v720 = *((_QWORD *)v213 + 248);
    if ( *(_BYTE *)(v720 + *((_QWORD *)v213 + 205)) == v213[1648] )
    {
      _RAX = 0LL;
      __asm { cpuid }
      v726 = _RAX;
      v4269 = _RAX;
      v727 = *((_QWORD *)v213 + 204);
      v4270 = _RBX;
      v4271 = _RCX;
      v4272 = _RDX;
      v728 = *(_BYTE *)(v720 + v727);
      v729 = *(_BYTE *)(v720 + *((_QWORD *)v213 + 203));
      if ( v726 >= 7 )
      {
        _RAX = 7LL;
        __asm { cpuid }
        v4269 = _RAX;
        v4270 = _RBX;
        v719 = (_RBX & 0x800) != 0;
        v4271 = _RCX;
        v4272 = _RDX;
      }
      if ( *(_BYTE *)(v720 + *((_QWORD *)v213 + 202)) == 6
        && (v728 == 60 && v729 == 3 || v728 == 63 && v729 == 2 || v728 == 69 && v729 == 1 || v728 == 70 && v729 == 1) )
      {
        v719 = 0;
      }
      if ( v719 )
        v213[2171] |= 4u;
    }
    if ( (unsigned int)KeKvaShadowingActive() )
      v213[2171] |= 8u;
    v213[2188] = 72;
    v213[2189] = -125;
    v213[2190] = 44;
    v213[2191] = 36;
    v213[2192] = 2;
    v213[2193] = 72;
    v213[2194] = -49;
    v735 = MEMORY[0xFFFFF78000000289] != 0;
    if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 )
      v735 = 1;
    if ( (*((_DWORD *)v213 + 612) & 0x10000000) == 0 )
    {
      *(_DWORD *)&v213[*((unsigned int *)v213 + 507) + 11] = -*((_DWORD *)v213 + 507);
      v736 = __rdtsc();
      v737 = (__ROR8__(v736, 3) ^ v736) * (unsigned __int128)0x7010008004002001uLL;
      v4017 = *((_QWORD *)&v737 + 1);
      if ( !(((unsigned __int64)v737 ^ *((_QWORD *)&v737 + 1)) % 0xA) )
      {
        v738 = *((_DWORD *)v213 + 612);
        if ( v738 >= 0 && (v738 & 0x10000) == 0 && *((_DWORD *)v213 + 526) != 7 )
          v213[2171] |= 1u;
      }
      v739 = __rdtsc();
      v740 = (__ROR8__(v739, 3) ^ v739) * (unsigned __int128)0x7010008004002001uLL;
      v4018 = *((_QWORD *)&v740 + 1);
      if ( !(((unsigned __int64)v740 ^ *((_QWORD *)&v740 + 1)) % 0xA) )
      {
        v741 = *((_DWORD *)v213 + 612);
        if ( v741 >= 0 && (v741 & 0x10000) == 0 && *((_DWORD *)v213 + 526) != 7 )
          v213[2171] |= 2u;
      }
      v742 = __rdtsc();
      v743 = __ROR8__(v742, 3) ^ v742;
      v4019 = (v743 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      if ( (((unsigned __int8)v743 ^ (unsigned __int8)v4019) & 3) == 0 )
      {
        v744 = *((_DWORD *)v213 + 612);
        if ( v744 >= 0 && (v744 & 0x10000) == 0 && v735 && *((_DWORD *)v213 + 526) != 7 )
          v213[2171] |= 0x20u;
      }
      v745 = __rdtsc();
      v746 = (__ROR8__(v745, 3) ^ v745) * (unsigned __int128)0x7010008004002001uLL;
      v4020 = *((_QWORD *)&v746 + 1);
      if ( !(((unsigned __int64)v746 ^ *((_QWORD *)&v746 + 1)) % 0xA) )
      {
        v747 = *((_DWORD *)v213 + 612);
        if ( v747 >= 0 && (v747 & 0x10000) == 0 && v735 && *((_DWORD *)v213 + 526) != 7 )
          v213[2171] |= 0x10u;
      }
    }
    if ( dword_140D58088 )
    {
      if ( (*((_DWORD *)v213 + 612) & 0x10000000) == 0 )
      {
        v748 = __rdtsc();
        v749 = (__ROR8__(v748, 3) ^ v748) * (unsigned __int128)0x7010008004002001uLL;
        v4021 = *((_QWORD *)&v749 + 1);
        if ( ((unsigned __int64)v749 ^ *((_QWORD *)&v749 + 1)) % 0xA < 5 )
        {
          *((_DWORD *)v213 + 613) |= 0x400u;
          if ( *((int *)v213 + 612) >= 0 )
          {
            v750 = __rdtsc();
            v751 = (__ROR8__(v750, 3) ^ v750) * (unsigned __int128)0x7010008004002001uLL;
            v4022 = *((_QWORD *)&v751 + 1);
            if ( ((unsigned __int64)v751 ^ *((_QWORD *)&v751 + 1)) % 0xA < 3 && *((_DWORD *)v213 + 526) != 7 )
              *((_DWORD *)v213 + 613) |= 0x800u;
          }
        }
      }
    }
    v752 = 0;
    if ( MEMORY[0xFFFFF78000000289] )
      v752 = (v213[2171] & 4) != 0;
    if ( (NtBuildNumber & 0xF0000000) == 0xC0000000 )
      v752 = 1;
    if ( v752 )
    {
      v753 = *((_DWORD *)v213 + 612);
      if ( (v753 & 0x10000000) == 0 && v753 >= 0 && *((_DWORD *)v213 + 526) != 7 )
      {
        v754 = *((_DWORD *)v213 + 613);
        if ( (v754 & 0x10000) == 0 )
        {
          v755 = __rdtsc();
          v756 = (__ROR8__(v755, 3) ^ v755) * (unsigned __int128)0x7010008004002001uLL;
          v4023 = *((_QWORD *)&v756 + 1);
          if ( ((unsigned __int64)v756 ^ *((_QWORD *)&v756 + 1)) % 0xA < 3 )
          {
            if ( !qword_140D58080 )
            {
              v757 = __rdtsc();
              v758 = (__ROR8__(v757, 3) ^ v757) * (unsigned __int128)0x7010008004002001uLL;
              v4024 = *((_QWORD *)&v758 + 1);
              v759 = ((unsigned __int64)v758 ^ *((_QWORD *)&v758 + 1)) % 0xB;
              if ( (unsigned int)v759 > 5 )
              {
                v763 = v759 - 6;
                if ( v763 )
                {
                  v764 = v763 - 1;
                  if ( v764 )
                  {
                    v765 = v764 - 1;
                    if ( v765 )
                    {
                      if ( v765 == 1 )
                      {
                        v3886[38] = -1333354875;
                        v762 = __ROR4__(-1333354868, 33);
                      }
                      else
                      {
                        v766 = __rdtsc();
                        v767 = __ROR8__(v766, 3);
                        v4025 = ((v767 ^ v766) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v762 = ((((((((unsigned int)v4025 ^ (67117057 * ((unsigned int)v767 ^ (unsigned int)v766)))
                                   % 0x1A
                                   + 97) << 8) | ((((unsigned int)v4025 ^ (67117057
                                                                         * ((unsigned int)v767 ^ (unsigned int)v766))) >> 5)
                                                % 0x1A
                                                + 65)) << 8) | ((((unsigned int)v4025 ^ (67117057
                                                                                       * ((unsigned int)v767 ^ (unsigned int)v766))) >> 10)
                                                              % 0x1A
                                                              + 97)) << 8) | ((((unsigned int)v4025 ^ (67117057 * ((unsigned int)v767 ^ (unsigned int)v766))) >> 15)
                                                                            % 0x1A
                                                                            + 65);
                      }
                    }
                    else
                    {
                      v3886[39] = 1684422978;
                      v762 = __ROR4__(1684422978, 8);
                    }
                  }
                  else
                  {
                    v3886[40] = -2100910376;
                    v762 = __ROL4__(-2100910376, 7);
                  }
                }
                else
                {
                  v3886[41] = 1314342514;
                  v762 = __ROR4__(1314342516, 24);
                }
              }
              else if ( (_DWORD)v759 == 5 )
              {
                v3886[37] = 680282605;
                v762 = __ROR4__(680282605, 5);
              }
              else if ( (_DWORD)v759 )
              {
                v760 = v759 - 1;
                if ( v760 )
                {
                  v761 = v760 - 1;
                  if ( v761 )
                  {
                    if ( v761 == 1 )
                    {
                      v3886[33] = -1474152136;
                      v762 = __ROR4__(-1474152133, 15);
                    }
                    else
                    {
                      v3886[32] = 1728537748;
                      v762 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v3886[34] = -2051698419;
                    v762 = __ROR4__(-2051698419, 2);
                  }
                }
                else
                {
                  v3886[35] = -1297272415;
                  v762 = __ROL4__(-1297272415, 1);
                }
              }
              else
              {
                v3886[36] = -795291432;
                v762 = __ROR4__(-795291432, 6);
              }
              v768 = 5248;
              v769 = (_QWORD *)(*((__int64 (__fastcall **)(__int64, __int64, _QWORD))v213 + 31))(512LL, 5248LL, v762);
              qword_140D58080 = v769;
              if ( !v769 )
                return 0;
              v770 = 656LL;
              do
              {
                *v769 = 0LL;
                v768 -= 8;
                ++v769;
                --v770;
              }
              while ( v770 );
              for ( ; v768; --v768 )
              {
                *(_BYTE *)v769 = 0;
                v769 = (_QWORD *)((char *)v769 + 1);
              }
              v771 = 512;
              v772 = 64LL;
              *((_QWORD *)qword_140D58080 + 643) = (unsigned __int64)MmGetPhysicalAddress(qword_140D58080).QuadPart >> 12;
              v773 = IdtBase;
              v774 = (unsigned __int64 *)qword_140D58080;
              do
              {
                v771 -= 8;
                *v774 = v773->Alignment;
                v773 = (_KIDTENTRY64 *)((char *)v773 + 8);
                ++v774;
                --v772;
              }
              while ( v772 );
              for ( ; v771; --v771 )
              {
                OffsetLow = v773->OffsetLow;
                v773 = (_KIDTENTRY64 *)((char *)v773 + 1);
                *(_BYTE *)v774 = OffsetLow;
                v774 = (unsigned __int64 *)((char *)v774 + 1);
              }
              v776 = 512;
              v777 = (char *)qword_140D58080 + 512;
              v778 = 64LL;
              do
              {
                v776 -= 8;
                *(_QWORD *)v777 = IdtBase->Alignment;
                IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 8);
                v777 += 8;
                --v778;
              }
              while ( v778 );
              for ( ; v776; --v776 )
              {
                v779 = IdtBase->OffsetLow;
                IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 1);
                *v777++ = v779;
              }
              *((_WORD *)qword_140D58080 + 34) &= ~0x8000u;
              v780 = HIDWORD(qword_140D58080);
              v781 = (unsigned __int64)qword_140D58080 >> 16;
              *((_WORD *)qword_140D58080 + 32) = (_WORD)qword_140D58080;
              *((_WORD *)qword_140D58080 + 35) = v781;
              *((_DWORD *)qword_140D58080 + 18) = v780;
              v754 = *((_DWORD *)v213 + 613);
            }
            v782 = (unsigned int)KiMceThunk - (_DWORD)Src;
            *((_DWORD *)v213 + 613) = v754 | 0x8000;
            *((_QWORD *)v213 + 280) = qword_140D58080;
            *((_DWORD *)v213 + 573) = (_DWORD)v701 - (_DWORD)v213 + v782;
            v213[2195] = 72;
            v213[2196] = -125;
            v213[2197] = -20;
            v213[2198] = 40;
            v213[2199] = -1;
            v213[2200] = 17;
            v213[2201] = 72;
            v213[2202] = -125;
            v213[2203] = -60;
            v213[2204] = 40;
            v213[2205] = -61;
          }
        }
      }
    }
    v783 = *((_DWORD *)v213 + 612);
    if ( v783 < 0 )
      *((_DWORD *)v213 + 612) = v783 | 0x8000000;
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
      *((_DWORD *)v213 + 612) |= 0x40u;
    if ( (*(_BYTE *)((*((unsigned int *)v213 + 599) ^ 0xBC2A27DBLL) - 0x88000000000LL) & 2) != 0 )
      *((_DWORD *)v213 + 505) += 4096;
    v893 = *((_DWORD *)v213 + 526) == 7;
    v4026 = (unsigned int *)v213;
    if ( !v893 )
    {
      v4406[0] = (ULONG_PTR)ExQueueWorkItem;
      v4407 = 0LL;
      v4406[1] = (ULONG_PTR)ExpWorkerThread;
      v4406[2] = (ULONG_PTR)KiDebugTrapOrFault;
      v4406[3] = (ULONG_PTR)&KiExceptionDispatch;
      v4406[4] = (ULONG_PTR)KiDispatchException;
      v4406[5] = 0LL;
      v4414 = RtlDispatchException;
      v4415 = KeContextToKframes;
      v4417 = &pg_unknown4;
      v4418 = KeAcquireSpinLockRaiseToDpc;
      v4419 = KeReleaseSpinLock;
      v4420 = KeProcessorGroupAffinity;
      v4421 = KeSetSystemGroupAffinityThread;
      v4422 = KeRevertToUserGroupAffinityThread;
      v4423 = MmGetSessionIdEx;
      v4424 = pg_unknown2;
      v4425 = pg_unknown1;
      v4426 = memmove;
      v4427 = qword_1403EA9C0;
      v4428 = KiCommitThreadWait;
      v4429 = KeDelayExecutionThread;
      v4430 = KeWaitForSingleObject;
      v4431 = KeRemovePriQueue;
      v4432 = KiAttemptFastRemovePriQueue;
      v4433 = KiExitThreadWait;
      v4434 = EtwTraceThreadWorkItem;
      v4435 = ExIsSafeWorkItem;
      v4436 = pg_unknown3;
      v4437 = KeIpiGenericCall;
      v4438 = _guard_dispatch_icall_fptr;
      v4439 = guard_wrap_icall_retpoline_exit;
      v4440 = guard_wrap_icall_jmp;
      v4441 = PerfInfoLogIpiSend;
      v4442 = PerfInfoLogIpiReceive;
      v784 = 0;
      LODWORD(v3850) = 0;
      v4408 = 0LL;
      v4409 = 0LL;
      v4410 = 0LL;
      v4411 = 0LL;
      v4412 = 0LL;
      v4413 = 0LL;
      v4416 = 0LL;
      v785 = 0;
      LODWORD(v3851) = 0;
      do
      {
        v786 = v4406[v785];
        v3842 = v786;
        if ( v786 )
        {
          RtlPcToFileHeader(v786, &v4027);
          v787 = RtlImageNtHeader(v4027);
          v788 = (_DWORD *)(*((__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD))v213 + 66))(
                             v787,
                             v4027,
                             (unsigned int)(v786 - v4027));
          if ( v788 )
          {
            if ( *v788 == 1414090313 && v788[1] == 1195525195 )
            {
              if ( (*((_DWORD *)v213 + 613) & 0x2000) == 0 )
                goto LABEL_5346;
            }
            else if ( (v788[9] & 0x2000000) != 0 || (unsigned int)MmImageSectionPagable() )
            {
LABEL_5346:
              v3887[1] = -805294751;
              KeBugCheckEx(__ROR4__(-805306349, 92), 1uLL, v785, v786, v4027);
            }
          }
          v3845 = 0;
          v789 = RtlLookupFunctionTable(v786, &v4376, v3887);
          v4374 = v789;
          if ( !v789 )
          {
            v798 = v4378;
            v791 = v4375;
            goto LABEL_1031;
          }
          v4379 = 0LL;
          if ( v4300 == v4376 )
          {
            v790 = (_DWORD *)v4301;
            v4379 = v4301;
            v4380 = 0LL;
            v4381 = v4302;
            v4382 = 0;
            v791 = RtlLookupFunctionEntry(v786, &v4376, 0LL);
            v4375 = v791;
            if ( v791 )
            {
              v792 = v791 - v4376;
              v793 = 0;
              v794 = *v790 - 1;
              if ( v794 >= 0 )
              {
                do
                {
                  v795 = (v794 + v793) >> 1;
                  v796 = &v790[2 * v795 + 2];
                  if ( v792 - *v796 >= 0 )
                  {
                    if ( v792 - *v796 <= 0 )
                      break;
                    v793 = v795 + 1;
                  }
                  else
                  {
                    if ( !v795 )
                      goto LABEL_1027;
                    v794 = v795 - 1;
                  }
                }
                while ( v794 >= v793 );
                v797 = (_DWORD *)v4380;
                if ( v794 >= v793 )
                  v797 = &v790[2 * v795 + 2];
                v4380 = (__int64)v797;
              }
            }
LABEL_1027:
            v789 = v4374;
            v784 = v3850;
          }
          else
          {
            v791 = v4375;
          }
          v798 = (__int64 *)&v4028;
          v4373 = v786;
          v4378 = (__int64 *)&v4028;
          v3887[0] /= 0xCu;
          v4377 = v789 + 12LL * v3887[0];
          v4027 = v4376;
LABEL_1031:
          while ( v789 && v789 != v4377 )
          {
            if ( v4379 )
            {
              if ( !v791 )
                break;
              if ( v4380 )
              {
                v799 = *(_DWORD *)(v4380 + 4);
                if ( (v799 & 1) != 0 )
                {
                  *v798 = v4376 + (v799 & 0xFFFFFFFE);
                  v4380 = 0LL;
                }
                else
                {
                  v800 = (unsigned int)(v4382 + v799);
                  v801 = (unsigned int)v800;
                  v802 = v800 + 4;
                  if ( v802 < v801 || v802 > v4381 )
                  {
                    v3887[2] = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0x12uLL, v4379, v4376, v801);
                  }
                  v803 = *(_DWORD *)(v801 + v4379);
                  v4382 += 4;
                  v4380 &= -(__int64)((v803 & 1) != 0);
                  if ( (v803 & 1) != 0 )
                    v803 &= ~1u;
                  *v798 = v4376 + v803;
                }
              }
              else
              {
                *v798 = v791;
                v4375 = 0LL;
              }
            }
            else
            {
              while ( 1 )
              {
                v804 = v789;
                v805 = RtlpConvertFunctionEntry(v789, v4376, v791);
                v806 = RtlpSameFunction(v805, v4376, v4373);
                v789 = v4374 + 12;
                v4374 += 12LL;
                if ( v806 )
                  break;
                if ( v789 == v4377 )
                  goto LABEL_1046;
              }
              *v4378 = v804;
            }
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v817 = *((unsigned int *)v213 + 585);
            v3845 = 1;
            v818 = *((unsigned int *)v213 + 505);
            v819 = v4027 + *v4028;
            v820 = v4028[1] - *v4028;
            v821 = v818 + 48;
            if ( (unsigned int)(v818 + 48) <= *((_DWORD *)v213 + 647) )
            {
              v822 = (__int64)v213;
              *((_DWORD *)v213 + 505) = v821;
            }
            else
            {
              v822 = pg_unknown7(v213, v821, v817);
              if ( !v822 )
                return 0;
              v823 = *((_DWORD *)v213 + 612);
              if ( (v823 & 4) == 0 )
              {
                v824 = *((_DWORD *)v213 + 505);
                v825 = *((_QWORD *)v213 + 249);
                v826 = (v823 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
                if ( v824 >= 8 )
                {
                  v827 = (unsigned __int64)v824 >> 3;
                  do
                  {
                    *(_QWORD *)v213 = 0LL;
                    v824 -= 8;
                    v213 += 8;
                    --v827;
                  }
                  while ( v827 );
                }
                for ( kk = 0; v824; --v824 )
                  *v213++ = 0;
                v829 = *(_DWORD *)(v822 + 2340);
                *(_DWORD *)(v822 + 2340) = v826;
                if ( v826 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v822 + 872))(v825);
                }
                else
                {
                  if ( (*(_DWORD *)(v822 + 2448) & 0x10000000) == 0 )
                    kk = v826;
                  if ( kk )
                    (*(void (__fastcall **)(__int64, _QWORD))(v822 + 552))(v825 - 8, *(_QWORD *)(v825 - 8));
                  else
                    (*(void (__fastcall **)(__int64))(v822 + 256))(v825);
                }
                *(_DWORD *)(v822 + 2340) = v829;
              }
              *(_DWORD *)(v822 + 2448) &= ~4u;
            }
            ++*(_DWORD *)(v822 + 2060);
            v830 = v822 + v818;
            v831 = 48;
            v3849 = v822 + v818;
            v4029 = v822 + v818;
            v832 = (_QWORD *)(v822 + v818);
            v833 = 6LL;
            do
            {
              *v832 = 0LL;
              v831 -= 8;
              ++v832;
              --v833;
            }
            while ( v833 );
            for ( ; v831; --v831 )
            {
              *(_BYTE *)v832 = 0;
              v832 = (_QWORD *)((char *)v832 + 1);
            }
            *(_DWORD *)v830 = 0;
            v834 = v819 + v820;
            *(_QWORD *)(v830 + 8) = v819;
            v835 = (_QWORD *)v819;
            *(_DWORD *)(v830 + 16) = v820;
            v836 = (const char *)v819;
            *(_DWORD *)(v822 + 2088) += v820;
            v837 = *(_DWORD *)(v822 + 2068);
            v838 = *(_QWORD *)(v822 + 2072);
            if ( v819 < v834 )
            {
              do
              {
                _mm_prefetch(v836, 0);
                v836 += 64;
              }
              while ( (unsigned __int64)v836 < v834 );
            }
            v839 = *(_QWORD *)(v822 + 2072);
            v840 = v820 >> 7;
            if ( v820 >> 7 )
            {
              do
              {
                v841 = 8LL;
                do
                {
                  v842 = v835[1] ^ __ROL8__(*v835 ^ v839, v837);
                  v835 += 2;
                  v839 = __ROL8__(v842, v837);
                  --v841;
                }
                while ( v841 );
                v843 = (__ROL8__(v838 ^ ((unsigned __int64)v835 - v819), 17) ^ v838 ^ ((unsigned __int64)v835 - v819))
                     * (unsigned __int128)0x7010008004002001uLL;
                v4030 = *((_QWORD *)&v843 + 1);
                v837 = (BYTE8(v843) ^ (unsigned __int8)(v843 ^ v837)) & 0x3F;
                if ( !v837 )
                  LOBYTE(v837) = 1;
                --v840;
              }
              while ( v840 );
              v830 = v3849;
            }
            v844 = v820 & 0x7F;
            if ( v844 >= 8 )
            {
              v845 = (unsigned __int64)(v820 & 0x7F) >> 3;
              do
              {
                v839 = __ROL8__(*v835++ ^ v839, v837);
                v844 -= 8;
                --v845;
              }
              while ( v845 );
            }
            for ( ; v844; --v844 )
            {
              v846 = *(unsigned __int8 *)v835;
              v835 = (_QWORD *)((char *)v835 + 1);
              v839 = __ROL8__(v846 ^ v839, v837);
            }
            for ( mm = v839; ; LODWORD(v839) = mm ^ v839 )
            {
              mm >>= 31;
              if ( !mm )
                break;
            }
            v848 = v3850;
            *(_DWORD *)(v830 + 20) = v839 & 0x7FFFFFFF;
            v784 = v848 + 1;
            v213 = (_BYTE *)v822;
            v4031 = v4029;
            *(_DWORD *)(v822 + 2088) += v820;
            LODWORD(v3850) = v784;
            *(_DWORD *)(v4031 + 24) = 1;
            v798 = v4378;
            v791 = v4375;
            v789 = v4374;
          }
LABEL_1046:
          if ( v3845 )
          {
            v785 = (unsigned int)v3851;
          }
          else
          {
            v807 = *((unsigned int *)v213 + 505);
            v808 = v807 + 48;
            if ( (unsigned int)(v807 + 48) <= *((_DWORD *)v213 + 647) )
            {
              v809 = (__int64)v213;
              *((_DWORD *)v213 + 505) = v808;
            }
            else
            {
              v809 = pg_unknown7(v213, v808, *((unsigned int *)v213 + 585));
              if ( !v809 )
                return 0;
              v810 = *((_DWORD *)v213 + 612);
              if ( (v810 & 4) == 0 )
              {
                v811 = *((_DWORD *)v213 + 505);
                v812 = *((_QWORD *)v213 + 249);
                v813 = (v810 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
                if ( v811 >= 8 )
                {
                  v814 = (unsigned __int64)v811 >> 3;
                  do
                  {
                    *(_QWORD *)v213 = 0LL;
                    v811 -= 8;
                    v213 += 8;
                    --v814;
                  }
                  while ( v814 );
                }
                for ( nn = 0; v811; --v811 )
                  *v213++ = 0;
                v816 = *(_DWORD *)(v809 + 2340);
                *(_DWORD *)(v809 + 2340) = v813;
                if ( v813 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v809 + 872))(v812);
                }
                else
                {
                  if ( (*(_DWORD *)(v809 + 2448) & 0x10000000) == 0 )
                    nn = v813;
                  if ( nn )
                    (*(void (__fastcall **)(__int64, _QWORD))(v809 + 552))(v812 - 8, *(_QWORD *)(v812 - 8));
                  else
                    (*(void (__fastcall **)(__int64))(v809 + 256))(v812);
                }
                *(_DWORD *)(v809 + 2340) = v816;
              }
              *(_DWORD *)(v809 + 2448) &= ~4u;
            }
            ++*(_DWORD *)(v809 + 2060);
            v849 = v809 + v807;
            v850 = 48;
            v4032 = v809 + v807;
            v851 = (_QWORD *)(v809 + v807);
            v852 = 6LL;
            do
            {
              *v851 = 0LL;
              v850 -= 8;
              ++v851;
              --v852;
            }
            while ( v852 );
            for ( ; v850; --v850 )
            {
              *(_BYTE *)v851 = 0;
              v851 = (_QWORD *)((char *)v851 + 1);
            }
            v853 = (const char *)v3842;
            *(_DWORD *)v849 = 0;
            v854 = v853;
            *(_QWORD *)(v849 + 8) = v853;
            *(_DWORD *)(v849 + 16) = 4;
            *(_DWORD *)(v809 + 2088) += 4;
            v855 = *(_QWORD *)(v809 + 2072);
            if ( v853 < v853 + 4 )
            {
              do
              {
                _mm_prefetch(v854, 0);
                v854 += 64;
              }
              while ( v854 < v853 + 4 );
            }
            v856 = 4;
            do
            {
              v857 = *(unsigned __int8 *)v853++;
              v855 = __ROL8__(v857 ^ v855, *(_DWORD *)(v809 + 2068));
              --v856;
            }
            while ( v856 );
            for ( i1 = v855; ; LODWORD(v855) = i1 ^ v855 )
            {
              i1 >>= 31;
              if ( !i1 )
                break;
            }
            v859 = v3850;
            *(_DWORD *)(v849 + 20) = v855 & 0x7FFFFFFF;
            v784 = v859 + 1;
            v4033 = v4032;
            v213 = (_BYTE *)v809;
            *(_DWORD *)(v809 + 2088) += 4;
            v785 = (unsigned int)v3851;
            LODWORD(v3850) = v784;
            *(_DWORD *)(v4033 + 24) = 1;
          }
        }
        LODWORD(v3851) = ++v785;
      }
      while ( v785 < 0x32 );
      if ( (*((_DWORD *)v213 + 612) & 0x40000000) == 0 )
      {
        v860 = *((unsigned int *)v213 + 505);
        v861 = v860 + 48;
        if ( (unsigned int)(v860 + 48) <= *((_DWORD *)v213 + 647) )
        {
          v862 = (__int64)v213;
          *((_DWORD *)v213 + 505) = v861;
        }
        else
        {
          v862 = pg_unknown7(v213, v861, *((unsigned int *)v213 + 585));
          if ( !v862 )
            return 0;
          v863 = *((_DWORD *)v213 + 612);
          if ( (v863 & 4) == 0 )
          {
            v864 = *((_DWORD *)v213 + 505);
            v865 = *((_QWORD *)v213 + 249);
            v866 = (v863 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
            if ( v864 >= 8 )
            {
              v867 = (unsigned __int64)v864 >> 3;
              do
              {
                *(_QWORD *)v213 = 0LL;
                v864 -= 8;
                v213 += 8;
                --v867;
              }
              while ( v867 );
            }
            for ( i2 = 0; v864; --v864 )
              *v213++ = 0;
            v869 = *(_DWORD *)(v862 + 2340);
            *(_DWORD *)(v862 + 2340) = v866;
            if ( v866 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v862 + 872))(v865);
            }
            else
            {
              if ( (*(_DWORD *)(v862 + 2448) & 0x10000000) == 0 )
                i2 = v866;
              if ( i2 )
                (*(void (__fastcall **)(__int64, _QWORD))(v862 + 552))(v865 - 8, *(_QWORD *)(v865 - 8));
              else
                (*(void (__fastcall **)(__int64))(v862 + 256))(v865);
            }
            *(_DWORD *)(v862 + 2340) = v869;
          }
          *(_DWORD *)(v862 + 2448) &= ~4u;
        }
        ++*(_DWORD *)(v862 + 2060);
        v870 = v862 + v860;
        v871 = 48;
        v4034 = v862 + v860;
        v872 = (_QWORD *)(v862 + v860);
        v873 = 6LL;
        do
        {
          *v872 = 0LL;
          v871 -= 8;
          ++v872;
          --v873;
        }
        while ( v873 );
        for ( ; v871; --v871 )
        {
          *(_BYTE *)v872 = 0;
          v872 = (_QWORD *)((char *)v872 + 1);
        }
        *(_DWORD *)v870 = 0;
        *(_QWORD *)(v870 + 8) = 0LL;
        *(_DWORD *)(v870 + 16) = 0;
        v874 = *(_QWORD *)(v862 + 2072);
        for ( i3 = v874; ; LODWORD(v874) = i3 ^ v874 )
        {
          i3 >>= 31;
          if ( !i3 )
            break;
        }
        v784 = v3850;
        *(_DWORD *)(v870 + 20) = v874 & 0x7FFFFFFF;
        v213 = (_BYTE *)v862;
        v4035 = v4034;
        *(_DWORD *)(v862 + 2600) = v4034 - v862;
        *(_DWORD *)(v862 + 2604) += 48;
      }
      *((_DWORD *)v213 + 504) = v784;
      *((_DWORD *)v213 + 651) += 48 * v784;
    }
    v4026 = (unsigned int *)v213;
    if ( !v213 )
      return 0;
    v876 = *((_DWORD *)v213 + 612);
    LODWORD(v3850) = *((_DWORD *)v213 + 505);
    v877 = 0;
    LODWORD(v3851) = 0;
    v878 = 0;
    if ( (v876 & 0x40000000) == 0 && !(_DWORD)v3846 )
    {
      v879 = __rdtsc();
      v880 = (__ROR8__(v879, 3) ^ v879) * (unsigned __int128)0x7010008004002001uLL;
      v4036 = *((_QWORD *)&v880 + 1);
      if ( !(((unsigned __int64)v880 ^ *((_QWORD *)&v880 + 1)) % 0xA) )
      {
        v878 = 1;
        LODWORD(v3851) = 1;
        v881 = __rdtsc();
        v882 = (__ROR8__(v881, 3) ^ v881) * (unsigned __int128)0x7010008004002001uLL;
        v4037 = *((_QWORD *)&v882 + 1);
        if ( ((unsigned __int64)v882 ^ *((_QWORD *)&v882 + 1)) % 0xA < 3 )
        {
          v883 = v876 | 0x10000;
          *((_DWORD *)v213 + 612) = v883;
          v884 = __rdtsc();
          v885 = (__ROR8__(v884, 3) ^ v884) * (unsigned __int128)0x7010008004002001uLL;
          v4038 = *((_QWORD *)&v885 + 1);
          if ( ((unsigned __int64)v885 ^ *((_QWORD *)&v885 + 1)) % 0xA < 3 )
            *((_DWORD *)v213 + 612) = v883 | 0x100000;
        }
      }
      v877 = 0;
    }
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    LODWORD(v3846) = 0;
    while ( 1 )
    {
      v886 = &qword_140A98740[3 * v877];
      if ( (v886[2] & 0xE0000000) != 0x80000000 )
      {
        if ( v878 )
          break;
      }
      v887 = (void *)v886[1];
      v4039 = v887;
      if ( !v887 )
      {
        v888 = 0x140000000uLL;
        v3842 = 0x140000000uLL;
        v4039 = (void *)0x140000000LL;
        goto LABEL_1197;
      }
      if ( v887 == (void *)1 )
      {
        v888 = PsHalImageBase;
        v3842 = PsHalImageBase;
        goto LABEL_1196;
      }
      if ( v887 == (void *)2 )
      {
        v889 = 0LL;
        v888 = 0LL;
        v3842 = 0LL;
        v4039 = 0LL;
        if ( (v3888 & 6) != 0 )
          goto LABEL_2110;
        v890 = (_QWORD *)PspPicoProviderRanges;
        if ( !PspPicoProviderRanges )
          goto LABEL_2110;
        v891 = 0LL;
        v892 = 0;
        v893 = *(_QWORD *)(PspPicoProviderRanges + 8) == 0LL;
        if ( !*(_QWORD *)(PspPicoProviderRanges + 8) )
          goto LABEL_1176;
        do
        {
          v891 = (ULONG_PTR *)(*v890 + 16 * v889);
          if ( v891[1] )
          {
            (*((void (__fastcall **)(ULONG_PTR, void **))v213 + 65))(*v891, &v4039);
            v888 = (ULONG_PTR)v4039;
            v3842 = (unsigned __int64)v4039;
            if ( v4039 )
              goto LABEL_1197;
          }
          v890 = (_QWORD *)PspPicoProviderRanges;
          v889 = ++v892;
        }
        while ( (unsigned __int64)v892 < *(_QWORD *)(PspPicoProviderRanges + 8) );
        if ( !v888 )
        {
          v893 = *(_QWORD *)(PspPicoProviderRanges + 8) == 0LL;
LABEL_1176:
          if ( !v893 )
          {
            v3822 = *v891;
            v3895[1] = -805294751;
            KeBugCheckEx(__ROR4__(-805306349, 92), 0x13uLL, (ULONG_PTR)v890, v3822, (ULONG_PTR)v891);
          }
          goto LABEL_2110;
        }
      }
      else
      {
        if ( v887 != (void *)3 )
        {
          v888 = 0LL;
          v3842 = 0LL;
          _disable();
          v213 = v4026;
          v899 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v4026 + 201));
          _enable();
          (*((void (__fastcall **)(__int64))v213 + 45))(v899);
          LOBYTE(v900) = 1;
          (*((void (__fastcall **)(_QWORD, __int64))v213 + 29))(*((_QWORD *)v213 + 167), v900);
          for ( i4 = (PVOID *)PsLoadedModuleList; i4 != &PsLoadedModuleList; i4 = (PVOID *)*i4 )
          {
            v902 = (char *)i4 - *((_QWORD *)v213 + 233);
            if ( RtlEqualUnicodeString((PCUNICODE_STRING)v886, (PCUNICODE_STRING)&v902[*((_QWORD *)v213 + 236)], 1u) )
            {
              v888 = *(_QWORD *)&v902[*((_QWORD *)v213 + 234)];
              v3842 = v888;
              break;
            }
          }
          (*((void (__fastcall **)(_QWORD))v213 + 35))(*((_QWORD *)v213 + 167));
          (*((void (**)(void))v213 + 46))();
LABEL_1196:
          v4039 = (void *)v888;
          if ( !v888 )
            goto LABEL_2110;
          goto LABEL_1197;
        }
        v894 = 0LL;
        v888 = 0LL;
        v3842 = 0LL;
        v4039 = 0LL;
        if ( (v3888 & 6) != 0 )
          goto LABEL_2110;
        v895 = (_QWORD *)__29;
        if ( !__29 )
          goto LABEL_2110;
        v896 = 0LL;
        v897 = 0;
        v898 = *(_QWORD *)(__29 + 8) == 0LL;
        if ( !*(_QWORD *)(__29 + 8) )
          goto LABEL_1187;
        do
        {
          v896 = (ULONG_PTR *)(*v895 + 16 * v894);
          if ( v896[1] )
          {
            (*((void (__fastcall **)(ULONG_PTR, void **))v213 + 65))(*v896, &v4039);
            v888 = (ULONG_PTR)v4039;
            v3842 = (unsigned __int64)v4039;
            if ( v4039 )
              goto LABEL_1197;
          }
          v895 = (_QWORD *)__29;
          v894 = ++v897;
        }
        while ( (unsigned __int64)v897 < *(_QWORD *)(__29 + 8) );
        if ( !v888 )
        {
          v898 = *(_QWORD *)(__29 + 8) == 0LL;
LABEL_1187:
          if ( !v898 )
          {
            v3821 = *v896;
            v3895[2] = -805294751;
            KeBugCheckEx(__ROR4__(-805306349, 92), 0x14uLL, (ULONG_PTR)v895, v3821, (ULONG_PTR)v896);
          }
          goto LABEL_2110;
        }
      }
LABEL_1197:
      v903 = *((_DWORD *)v886 + 4);
      v3845 = v903 & 1;
      if ( (v903 & 4) != 0 )
      {
        v893 = (*((_DWORD *)v213 + 613) & 0x400) == 0;
        v3845 = v903 & 1;
        if ( !v893 )
          v3845 = v903 & 1 | 0x10;
      }
      if ( (v903 & 2) != 0 && !(_DWORD)v3851 )
      {
        v904 = (__int64 (__fastcall *)(ULONG_PTR, char *))*((_QWORD *)v213 + 64);
        v905 = v213;
        v4040 = v213;
        v906 = v904(v888, v4303);
        v908 = v4305;
        v909 = v906;
        v3849 = v906;
        LODWORD(v3844) = v4305;
        v3848 = v4304;
        if ( !v4304 )
          return 0;
        v910 = 4;
        v4259 = 0LL;
        v911 = &v4260;
        do
        {
          *(_BYTE *)v911 = 0;
          v911 = (int *)((char *)v911 + 1);
          --v910;
        }
        while ( v910 );
        v912 = 0;
        if ( *((_DWORD *)v213 + 515) )
        {
          v913 = v4260;
          LODWORD(v907) = HIDWORD(v4259);
          v914 = v4259;
          while ( 1 )
          {
            v915 = v213;
            if ( *((_QWORD *)v213 + 335) )
              v915 = (_BYTE *)*((_QWORD *)v213 + 335);
            v916 = 0;
            v917 = (int *)&v915[*((unsigned int *)v915 + 514)];
            if ( v914 && (unsigned int)v907 <= v912 )
            {
              v916 = v907;
              v917 = (int *)&v915[v913];
            }
            if ( v916 != v912 )
              break;
LABEL_1236:
            HIDWORD(v4259) = v916;
            v913 = (_DWORD)v917 - (_DWORD)v915;
            v914 = 1;
            v4260 = (_DWORD)v917 - (_DWORD)v915;
            v907 = v916;
            LODWORD(v4259) = 1;
            v925 = *v917;
            if ( (unsigned int)v925 <= 0x2B )
            {
              v926 = 0x80000001002LL;
              if ( _bittest64(&v926, v925) )
              {
                if ( *((_QWORD *)v917 + 1) == v909 && v917[4] == v908 )
                  goto LABEL_1244;
              }
            }
            if ( (unsigned int)(v925 - 33) <= 1 && *((_QWORD *)v917 + 4) == v3848 )
              goto LABEL_1244;
            if ( ++v912 >= *((_DWORD *)v213 + 515) )
              goto LABEL_1243;
          }
          v918 = v912 - v916;
          v916 = v912;
          while ( 2 )
          {
            v919 = *v917;
            if ( *v917 > 12 )
            {
              if ( v919 == 28 )
              {
                v924 = *((unsigned __int16 *)v917 + 20);
                goto LABEL_1233;
              }
              if ( v919 == 30 )
              {
                v923 = (((v917[9] != 0 ? v917[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                     + 24 * (*((unsigned __int16 *)v917 + 20) + 2);
                goto LABEL_1234;
              }
              if ( v919 <= 32 )
                goto LABEL_1230;
              if ( v919 <= 34 )
              {
                v923 = 20 * (unsigned int)(((v917[8] & 0xFFF) + (unsigned __int64)(unsigned int)v917[10] + 4095) >> 12)
                     + 48;
                goto LABEL_1234;
              }
              if ( v919 != 43 )
                goto LABEL_1230;
            }
            else if ( v919 != 12 )
            {
              v920 = v919 - 1;
              if ( v920 )
              {
                v921 = v920 - 6;
                if ( !v921 )
                {
                  v923 = (unsigned int)(24 * (v917[6] + 2));
                  goto LABEL_1234;
                }
                v922 = v921 - 1;
                if ( v922 )
                {
                  if ( v922 == 2 )
                  {
                    v923 = (unsigned int)(16 * (v917[7] + 3));
                    goto LABEL_1234;
                  }
LABEL_1230:
                  v923 = 48LL;
LABEL_1234:
                  v917 = (int *)((char *)v917 + v923);
                  if ( !--v918 )
                  {
                    v909 = v3849;
                    v908 = (int)v3844;
                    goto LABEL_1236;
                  }
                  continue;
                }
                v924 = *((unsigned __int16 *)v917 + 16);
LABEL_1233:
                v923 = (v924 + 55) & 0xFFFFFFF8;
                goto LABEL_1234;
              }
            }
            break;
          }
          v923 = 4 * (v917[4] / 0xCu) + 48;
          goto LABEL_1234;
        }
LABEL_1243:
        v917 = 0LL;
LABEL_1244:
        if ( !v917 )
        {
          v927 = (__int64 (__fastcall *)(unsigned __int64, char *, __int64))*((_QWORD *)v213 + 64);
          LODWORD(v3844) = v3845;
          v928 = v3842;
          v4042 = v213;
          v929 = v927(v3842, v4306, v907);
          v931 = v4308;
          v3849 = v929;
          LODWORD(v3837) = v4308;
          v3889[0] = v4308;
          v3843 = v4307;
          if ( !v4307 )
            goto LABEL_1246;
          v933 = 4;
          v4261 = 0LL;
          v934 = 0LL;
          v935 = &v4262;
          do
          {
            *(_BYTE *)v935 = 0;
            v935 = (int *)((char *)v935 + 1);
            --v933;
          }
          while ( v933 );
          v936 = 0;
          if ( *((_DWORD *)v213 + 515) )
          {
            LODWORD(v934) = v4262;
            LODWORD(v930) = HIDWORD(v4261);
            v937 = v4261;
            while ( 1 )
            {
              v938 = v213;
              if ( *((_QWORD *)v213 + 335) )
                v938 = (_BYTE *)*((_QWORD *)v213 + 335);
              v939 = 0;
              v940 = (int *)&v938[*((unsigned int *)v938 + 514)];
              if ( v937 && (unsigned int)v930 <= v936 )
              {
                v939 = v930;
                v940 = (int *)&v938[(unsigned int)v934];
              }
              if ( v939 != v936 )
                break;
LABEL_1281:
              HIDWORD(v4261) = v939;
              v934 = (unsigned int)((_DWORD)v940 - (_DWORD)v938);
              v937 = 1;
              v4262 = (_DWORD)v940 - (_DWORD)v938;
              v930 = v939;
              LODWORD(v4261) = 1;
              v948 = *v940;
              if ( (unsigned int)v948 <= 0x2B )
              {
                v949 = 0x80000001002LL;
                if ( _bittest64(&v949, v948) )
                {
                  if ( *((_QWORD *)v940 + 1) == v3849 && v940[4] == v931 )
                    goto LABEL_1289;
                }
              }
              if ( (unsigned int)(v948 - 33) <= 1 && *((_QWORD *)v940 + 4) == v3843 )
                goto LABEL_1289;
              if ( ++v936 >= *((_DWORD *)v213 + 515) )
                goto LABEL_1288;
            }
            v941 = v936 - v939;
            v939 = v936;
            while ( 2 )
            {
              v942 = *v940;
              if ( *v940 > 12 )
              {
                if ( v942 == 28 )
                {
                  v947 = *((unsigned __int16 *)v940 + 20);
                  goto LABEL_1278;
                }
                if ( v942 == 30 )
                {
                  v946 = (((v940[9] != 0 ? v940[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                       + 24 * (*((unsigned __int16 *)v940 + 20) + 2);
                  goto LABEL_1279;
                }
                if ( v942 <= 32 )
                  goto LABEL_1275;
                if ( v942 <= 34 )
                {
                  v946 = 20
                       * (unsigned int)(((v940[8] & 0xFFF) + (unsigned __int64)(unsigned int)v940[10] + 4095) >> 12)
                       + 48;
                  goto LABEL_1279;
                }
                if ( v942 != 43 )
                  goto LABEL_1275;
              }
              else if ( v942 != 12 )
              {
                v943 = v942 - 1;
                if ( v943 )
                {
                  v944 = v943 - 6;
                  if ( !v944 )
                  {
                    v946 = (unsigned int)(24 * (v940[6] + 2));
                    goto LABEL_1279;
                  }
                  v945 = v944 - 1;
                  if ( v945 )
                  {
                    if ( v945 == 2 )
                    {
                      v946 = (unsigned int)(16 * (v940[7] + 3));
                      goto LABEL_1279;
                    }
LABEL_1275:
                    v946 = 48LL;
LABEL_1279:
                    v940 = (int *)((char *)v940 + v946);
                    if ( !--v941 )
                    {
                      v931 = v3837;
                      v928 = v3842;
                      goto LABEL_1281;
                    }
                    continue;
                  }
                  v947 = *((unsigned __int16 *)v940 + 16);
LABEL_1278:
                  v946 = (v947 + 55) & 0xFFFFFFF8;
                  goto LABEL_1279;
                }
              }
              break;
            }
            v946 = 4 * (v940[4] / 0xCu) + 48;
            goto LABEL_1279;
          }
LABEL_1288:
          v940 = 0LL;
LABEL_1289:
          v4044 = v940;
          if ( v940 )
          {
            v4026 = (unsigned int *)v213;
            goto LABEL_1674;
          }
          v951 = (*((__int64 (__fastcall **)(unsigned __int64, __int64, ULONG_PTR))v213 + 85))(v928, v934, v930);
          LODWORD(v3837) = v951;
          LODWORD(v3836) = v3889[0];
          if ( (v3845 & 0x10) == 0 || (*((_DWORD *)v213 + 613) & 0x400) != 0 )
          {
            v952 = (unsigned int)v3844;
          }
          else
          {
            v952 = v3845 & 0xFFFFFFEF;
            LODWORD(v3844) = v3845 & 0xFFFFFFEF;
          }
          if ( (v952 & 0x10) != 0 && !(unsigned int)pg_unknown9(v213, v3843) )
          {
            v952 &= ~0x10u;
            LODWORD(v3844) = v952;
          }
          if ( (*((_DWORD *)v213 + 612) & 0x40000000) != 0 )
          {
            v953 = pg_unknown13(&v4040, v3843, v952);
            v905 = v4040;
            goto LABEL_1671;
          }
          v4339 = 0LL;
          v4309[4] = 0;
          LOBYTE(v950) = 1;
          v954 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, _DWORD *))v213 + 62))(v3843, v950, 0LL, v3889);
          v955 = v954;
          v4337[1] = v954;
          LOBYTE(v955) = 1;
          v3889[0] &= -(v954 != 0);
          v956 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, _DWORD *))*((_QWORD *)v213 + 62);
          v4309[1] = v3889[0];
          v957 = v956(v3843, v955, 12LL, v3889);
          v958 = v957;
          v3842 = v957;
          v4337[2] = v957;
          LOBYTE(v958) = 1;
          v3889[0] &= -(v957 != 0);
          v959 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, _DWORD *))*((_QWORD *)v213 + 62);
          LODWORD(v3833) = v3889[0];
          v4309[2] = v3889[0];
          v4338 = v959(v3843, v958, 10LL, v3889);
          v3889[0] &= -(v4338 != 0);
          v960 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v213 + 63);
          v4309[3] = v3889[0];
          v961 = v960(v3843);
          if ( !v961 )
          {
LABEL_1246:
            v932 = -1073741701;
            goto LABEL_1247;
          }
          v962 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v213 + 147))(v3843, &v4045);
          v963 = *((unsigned int *)v213 + 505);
          v964 = *((unsigned int *)v213 + 585);
          v4340 = v962;
          v4309[5] = v4045;
          v4309[0] = *(_DWORD *)(v961 + 84);
          v4337[0] = v3843;
          v965 = v963 + 288;
          v966 = v951 != 0 ? 0xB : 0;
          LODWORD(v3834) = v966;
          if ( (unsigned int)(v963 + 288) <= *((_DWORD *)v213 + 647) )
          {
            v967 = (__int64)v213;
            v3840 = (ULONG_PTR)v213;
            *((_DWORD *)v213 + 505) = v965;
            goto LABEL_1320;
          }
          v967 = pg_unknown7(v213, v965, v964);
          v3840 = v967;
          if ( !v967 )
          {
            v4042 = 0LL;
            v932 = -1073741670;
            goto LABEL_1247;
          }
          v968 = *((_DWORD *)v213 + 612);
          if ( (v968 & 4) == 0 )
          {
            v969 = *((_DWORD *)v213 + 505);
            v970 = *((_QWORD *)v213 + 249);
            v971 = (v968 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
            if ( v969 >= 8 )
            {
              v972 = (unsigned __int64)v969 >> 3;
              do
              {
                *(_QWORD *)v213 = 0LL;
                v969 -= 8;
                v213 += 8;
                --v972;
              }
              while ( v972 );
            }
            for ( i5 = 0; v969; --v969 )
              *v213++ = 0;
            v974 = *(_DWORD *)(v967 + 2340);
            *(_DWORD *)(v967 + 2340) = v971;
            if ( v971 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v967 + 872))(v970);
            }
            else
            {
              if ( (*(_DWORD *)(v967 + 2448) & 0x10000000) == 0 )
                i5 = v971;
              if ( i5 )
                (*(void (__fastcall **)(__int64, _QWORD))(v967 + 552))(v970 - 8, *(_QWORD *)(v970 - 8));
              else
                (*(void (__fastcall **)(__int64))(v967 + 256))(v970);
            }
            v966 = v3834;
            *(_DWORD *)(v967 + 2340) = v974;
          }
          *(_DWORD *)(v967 + 2448) &= ~4u;
LABEL_1320:
          v975 = 6LL;
          v976 = v967 + v963;
          *(_DWORD *)(v967 + 2060) += 6;
          v977 = v4337;
          v4047 = v976;
          v978 = v4309;
          v4044 = (_DWORD *)v976;
          v3841 = (unsigned __int64)v4337;
          v3838 = 6LL;
          do
          {
            v979 = *v978;
            v980 = 48;
            v981 = (_QWORD *)*v977;
            v982 = (_QWORD *)v976;
            do
            {
              *v982 = 0LL;
              v980 -= 8;
              ++v982;
              --v975;
            }
            while ( v975 );
            for ( ; v980; --v980 )
            {
              *(_BYTE *)v982 = 0;
              v982 = (_QWORD *)((char *)v982 + 1);
            }
            *(_DWORD *)v976 = v966;
            *(_QWORD *)(v976 + 8) = v981;
            v983 = v981;
            *(_DWORD *)(v976 + 16) = v979;
            v984 = (const char *)v981;
            *(_DWORD *)(v967 + 2088) += v979;
            v985 = *(_DWORD *)(v967 + 2068);
            v986 = *(_QWORD *)(v967 + 2072);
            if ( v981 < (_QWORD *)((char *)v981 + v979) )
            {
              do
              {
                _mm_prefetch(v984, 0);
                v984 += 64;
              }
              while ( v984 < (const char *)v981 + v979 );
            }
            v987 = *(_QWORD *)(v967 + 2072);
            v988 = (unsigned int)v979 >> 7;
            if ( (unsigned int)v979 >> 7 )
            {
              do
              {
                v989 = 8LL;
                do
                {
                  v990 = v987 ^ *v983;
                  v991 = v983[1];
                  v983 += 2;
                  v987 = __ROL8__(__ROL8__(v990, v985) ^ v991, v985);
                  --v989;
                }
                while ( v989 );
                v992 = __ROL8__(v986 ^ ((char *)v983 - (char *)v981), 17) ^ v986 ^ ((char *)v983 - (char *)v981);
                v4050 = (v992 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v985 = ((unsigned __int8)(v4050 ^ v992) ^ (unsigned __int8)v985) & 0x3F;
                if ( !v985 )
                  LOBYTE(v985) = 1;
                --v988;
              }
              while ( v988 );
              v967 = v3840;
              v977 = (_QWORD *)v3841;
            }
            v993 = v979 & 0x7F;
            if ( v993 >= 8 )
            {
              v994 = (unsigned __int64)(v979 & 0x7F) >> 3;
              do
              {
                v987 = __ROL8__(*v983++ ^ v987, v985);
                v993 -= 8;
                --v994;
              }
              while ( v994 );
            }
            for ( ; v993; --v993 )
            {
              v995 = *(unsigned __int8 *)v983;
              v983 = (_QWORD *)((char *)v983 + 1);
              v987 = __ROL8__(v995 ^ v987, v985);
            }
            for ( i6 = v987 >> 31; i6; i6 >>= 31 )
              LODWORD(v987) = i6 ^ v987;
            v966 = v3834;
            v975 = 6LL;
            ++v977;
            *(_DWORD *)(v976 + 20) = v987 & 0x7FFFFFFF;
            ++v978;
            *(_DWORD *)(v967 + 2088) += v979;
            v976 = v4047 + 48;
            v3841 = (unsigned __int64)v977;
            v893 = v3838-- == 1;
            v4047 += 48LL;
          }
          while ( !v893 );
          v997 = v4044;
          v998 = v3843;
          v999 = v3837;
          *v4044 = 44;
          *((_QWORD *)v997 + 3) = v998;
          v1000 = *(_DWORD *)(v967 + 2448);
          if ( (v1000 & 0x10000000) != 0 || (v1000 & 0x200000) != 0 )
          {
LABEL_1349:
            if ( !v999 )
              goto LABEL_1351;
          }
          else if ( !v999 )
          {
            if ( (*(_DWORD *)(v967 + 2452) & 0x8000) != 0 )
            {
              v997[8] |= 1u;
              if ( (unsigned int)pg_unknown9(v967, v998) )
              {
                v997[8] |= 4u;
                goto LABEL_1349;
              }
            }
LABEL_1351:
            v1001 = (char)v3844;
            v905 = (_QWORD *)v967;
            v4042 = (_BYTE *)v967;
            v4040 = (_QWORD *)v967;
            v932 = pg_unknown10(
                     (unsigned int)&v4042,
                     v3849,
                     v3836,
                     v998,
                     v999,
                     (_DWORD)v3844,
                     (__int64)&v3892,
                     (__int64)&v3891);
            if ( v932 < 0 )
              goto LABEL_1672;
            v213 = v4042;
            v1002 = v3891 - v3892;
            v1003 = (const char *)(v998 + v3892);
            v4044 = &v4042[(_QWORD)v4044 - v967];
            v4040 = v4042;
            v1004 = v4044 + 48;
            v1005 = 48;
            v1006 = v4044 + 48;
            v1007 = 6LL;
            do
            {
              *v1006 = 0LL;
              v1005 -= 8;
              ++v1006;
              --v1007;
            }
            while ( v1007 );
            for ( ; v1005; --v1005 )
            {
              *(_BYTE *)v1006 = 0;
              v1006 = (_QWORD *)((char *)v1006 + 1);
            }
            v930 = (ULONG_PTR)v1003;
            *v1004 = v3834;
            v1008 = v1003;
            *((_QWORD *)v1004 + 1) = v1003;
            v1004[4] = v1002;
            *((_DWORD *)v213 + 522) += v1002;
            v1009 = *((_DWORD *)v213 + 517);
            v1010 = *((_QWORD *)v213 + 259);
            v1011 = (unsigned __int64)&v1003[v1002];
            if ( (unsigned __int64)v1003 < v1011 )
            {
              do
              {
                _mm_prefetch(v1008, 0);
                v1008 += 64;
              }
              while ( (unsigned __int64)v1008 < v1011 );
            }
            v1012 = *((_QWORD *)v213 + 259);
            v1013 = v1002 >> 7;
            if ( v1002 >> 7 )
            {
              do
              {
                v1014 = 8LL;
                do
                {
                  v1015 = v1012 ^ *(_QWORD *)v930;
                  v1016 = *(_QWORD *)(v930 + 8);
                  v930 += 16LL;
                  v1012 = __ROL8__(__ROL8__(v1015, v1009) ^ v1016, v1009);
                  --v1014;
                }
                while ( v1014 );
                v1017 = __ROL8__(v1010 ^ (v930 - (_QWORD)v1003), 17) ^ v1010 ^ (v930 - (_QWORD)v1003);
                v4051 = (v1017 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1009 = ((unsigned __int8)(v4051 ^ v1017) ^ (unsigned __int8)v1009) & 0x3F;
                if ( !v1009 )
                  LOBYTE(v1009) = 1;
                --v1013;
              }
              while ( v1013 );
              v1001 = (char)v3844;
            }
            v1018 = v1002 & 0x7F;
            if ( v1018 >= 8 )
            {
              v1019 = (unsigned __int64)v1018 >> 3;
              do
              {
                v1012 = __ROL8__(*(_QWORD *)v930 ^ v1012, v1009);
                v930 += 8LL;
                v1018 -= 8;
                --v1019;
              }
              while ( v1019 );
            }
            for ( ; v1018; --v1018 )
            {
              v1020 = *(unsigned __int8 *)v930++;
              v1012 = __ROL8__(v1020 ^ v1012, v1009);
            }
            v1021 = v1012 >> 31;
            v1022 = 0;
            while ( v1021 )
            {
              LODWORD(v1012) = v1021 ^ v1012;
              v1021 >>= 31;
            }
            v1004[5] = v1012 & 0x7FFFFFFF;
            v934 = (__int64)v4044;
            v4044[60] = 48;
            if ( *(_DWORD *)(v934 + 256) )
            {
              LOBYTE(v1022) = (_DWORD)v3837 != 0;
              *(_DWORD *)(v934 + 264) = *(_DWORD *)(v934 + 264) & 0xFFFFFFFE | v1022;
            }
            v1023 = v1001 & 1;
            v4040 = v213;
            LODWORD(v3844) = v1023;
            v4052 = v4044 + 24;
            v1024 = ((_DWORD)v3837 != 0) + 13;
            if ( v4044 != (_DWORD *)-96LL )
            {
              LODWORD(v1038) = v3833;
              v905 = v213;
              v4044[24] = v1024;
              v1039 = (const char *)v3842;
              goto LABEL_1419;
            }
            v1025 = *((unsigned int *)v213 + 505);
            v1026 = v1025 + 48;
            if ( (unsigned int)(v1025 + 48) <= *((_DWORD *)v213 + 647) )
            {
              v905 = v213;
              *((_DWORD *)v213 + 505) = v1026;
              goto LABEL_1395;
            }
            v905 = (_QWORD *)pg_unknown7(v213, v1026, *((unsigned int *)v213 + 585));
            if ( !v905 )
            {
              v4042 = 0LL;
              v932 = -1073741670;
              v4026 = (unsigned int *)v213;
              goto LABEL_1684;
            }
            v1027 = *((_DWORD *)v213 + 612);
            if ( (v1027 & 4) == 0 )
            {
              v1028 = *((_DWORD *)v213 + 505);
              v1029 = *((_QWORD *)v213 + 249);
              v1030 = (v1027 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
              if ( v1028 >= 8 )
              {
                v1031 = (unsigned __int64)v1028 >> 3;
                do
                {
                  *(_QWORD *)v213 = 0LL;
                  v1028 -= 8;
                  v213 += 8;
                  --v1031;
                }
                while ( v1031 );
              }
              for ( i7 = 0; v1028; --v1028 )
                *v213++ = 0;
              v1033 = *((_DWORD *)v905 + 585);
              *((_DWORD *)v905 + 585) = v1030;
              if ( v1030 == 3 )
              {
                ((void (__fastcall *)(__int64))v905[109])(v1029);
              }
              else
              {
                if ( (v905[306] & 0x10000000) == 0 )
                  i7 = v1030;
                if ( i7 )
                  ((void (__fastcall *)(__int64, _QWORD))v905[69])(v1029 - 8, *(_QWORD *)(v1029 - 8));
                else
                  ((void (__fastcall *)(__int64))v905[32])(v1029);
              }
              *((_DWORD *)v905 + 585) = v1033;
            }
            *((_DWORD *)v905 + 612) &= ~4u;
LABEL_1395:
            ++*((_DWORD *)v905 + 515);
            v1034 = (char *)v905 + v1025;
            v1035 = 48;
            v4053 = (char *)v905 + v1025;
            v1036 = (_QWORD *)((char *)v905 + v1025);
            v1037 = 6LL;
            do
            {
              *v1036 = 0LL;
              v1035 -= 8;
              ++v1036;
              --v1037;
            }
            while ( v1037 );
            for ( ; v1035; --v1035 )
            {
              *(_BYTE *)v1036 = 0;
              v1036 = (_QWORD *)((char *)v1036 + 1);
            }
            v1038 = (unsigned int)v3833;
            *(_DWORD *)v1034 = v1024;
            v1039 = (const char *)v3842;
            *((_QWORD *)v1034 + 1) = v3842;
            v930 = (ULONG_PTR)v1039;
            *((_DWORD *)v1034 + 4) = v1038;
            *((_DWORD *)v905 + 522) += v1038;
            v1040 = *((_DWORD *)v905 + 517);
            v1041 = v905[259];
            if ( v1039 < &v1039[v1038] )
            {
              v1042 = v1039;
              do
              {
                _mm_prefetch(v1042, 0);
                v1042 += 64;
              }
              while ( v1042 < &v1039[v1038] );
            }
            v1043 = v905[259];
            v1044 = (unsigned int)v1038 >> 7;
            if ( (unsigned int)v1038 >> 7 )
            {
              do
              {
                v1045 = 8LL;
                do
                {
                  v1046 = *(_QWORD *)(v930 + 8) ^ __ROL8__(*(_QWORD *)v930 ^ v1043, v1040);
                  v930 += 16LL;
                  v1043 = __ROL8__(v1046, v1040);
                  --v1045;
                }
                while ( v1045 );
                v1047 = __ROL8__(v1041 ^ (v930 - (_QWORD)v1039), 17) ^ v1041 ^ (v930 - (_QWORD)v1039);
                v4054 = (v1047 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1040 = ((unsigned __int8)(v4054 ^ v1047) ^ (unsigned __int8)v1040) & 0x3F;
                if ( !v1040 )
                  LOBYTE(v1040) = 1;
                --v1044;
              }
              while ( v1044 );
              LODWORD(v1038) = v3833;
              v1023 = (int)v3844;
            }
            v934 = v1038 & 0x7F;
            if ( (unsigned int)v934 >= 8 )
            {
              v1048 = (unsigned __int64)(v1038 & 0x7F) >> 3;
              do
              {
                v1043 = __ROL8__(*(_QWORD *)v930 ^ v1043, v1040);
                v930 += 8LL;
                v934 = (unsigned int)(v934 - 8);
                --v1048;
              }
              while ( v1048 );
            }
            if ( (_DWORD)v934 )
            {
              do
              {
                v1049 = *(unsigned __int8 *)v930++;
                v1043 = __ROL8__(v1049 ^ v1043, v1040);
                v893 = (_DWORD)v934 == 1;
                v934 = (unsigned int)(v934 - 1);
              }
              while ( !v893 );
            }
            for ( i8 = v1043; ; LODWORD(v1043) = i8 ^ v1043 )
            {
              i8 >>= 31;
              if ( !i8 )
                break;
            }
            *((_DWORD *)v1034 + 5) = v1043 & 0x7FFFFFFF;
            v4052 = v4053;
            *((_DWORD *)v905 + 522) += v1038;
LABEL_1419:
            if ( (v905[306] & 0x40000000) != 0 && (_DWORD)v1038 )
              pg_unknown12(v905, v1039, (unsigned int)v1038, v4052 + 7);
            v4052[6] = 0;
            if ( v1023 )
              v4052[6] |= 1u;
            v1051 = v4044;
            v4040 = v905;
            v1052 = v3837 != 0;
            v4044[36] = 35;
            v1051[46] = v1051[46] & 0xFFFFFFFE | v1052;
            if ( v1051[40] < 0x94u )
            {
              v1060 = v3843;
            }
            else
            {
              v1053 = v3843;
              v1054 = *((_QWORD *)v1051 + 19);
              v1055 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, ULONG_PTR))v905[63])(v3843, v934, v930);
              if ( !v1055 )
              {
                v4042 = 0LL;
                v932 = -1073741670;
                v213 = v905;
LABEL_1247:
                v4026 = (unsigned int *)v905;
LABEL_1684:
                if ( ((v932 + 0x80000000) & 0x80000000) == 0 )
                  return 0;
                goto LABEL_1685;
              }
              v1056 = *(unsigned int *)(v1055 + 80);
              v1051[46] |= 2u;
              v1057 = v1053 + v1056;
              v1058 = *(_QWORD **)(v1054 + 112);
              if ( (unsigned __int64)v1058 >= v1053 && (unsigned __int64)v1058 < v1057 )
              {
                *((_QWORD *)v1051 + 21) = *v1058;
                v1051[46] |= 4u;
              }
              v1059 = *(_QWORD **)(v1054 + 120);
              v1060 = v3843;
              if ( (unsigned __int64)v1059 >= v3843 && (unsigned __int64)v1059 < v1057 )
              {
                *((_QWORD *)v1051 + 22) = *v1059;
                v1051[46] |= 8u;
              }
            }
            v893 = (v905[306] & 0x400000) == 0;
            v4042 = v905;
            if ( !v893 )
            {
              v1061 = ((__int64 (__fastcall *)(ULONG_PTR))v905[63])(v1060);
              v3838 = v1061;
              if ( !v1061 )
                goto LABEL_1436;
              v1062 = *(_WORD *)(v1061 + 6);
              v934 = ((unsigned int)v3836 * (unsigned __int128)0xAAAAAAAAAAAAAAABuLL) >> 64;
              LOWORD(v3844) = v1062;
              v3841 = (unsigned int)v3836 / 0xCuLL;
              if ( !v1062 )
              {
                if ( (v905[306] & 0x200000) == 0 )
                {
                  v3895[3] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1060, 0LL, 0LL);
                }
LABEL_1439:
                if ( !*((_DWORD *)v905 + 574) )
                {
                  v905[288] = v905 - 0xB8BF814EDC6E963LL;
                  v905[289] = 0LL;
                  v905[290] = 271LL;
                  v905[291] = v1060;
                  *((_DWORD *)v905 + 574) = 1;
                  __b8(v905, 0LL);
                }
LABEL_1436:
                v932 = -1073741701;
LABEL_1672:
                v4026 = (unsigned int *)v905;
                v213 = v905;
                if ( (int)(v932 + 0x80000000) < 0 || v932 == -1073741554 )
                {
LABEL_1674:
                  v1212 = ((__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))v905[63])(v3848, v934, v930);
                  v1213 = *(unsigned int *)(v1212 + 148);
                  if ( (unsigned int)v1213 < 0x14 )
                    goto LABEL_1685;
                  v1214 = *(unsigned int *)(v1212 + 144);
                  v1215 = v3848 + v1214 + v1213;
                  for ( i9 = v1214 + v3848; i9 != v1215; i9 += 20LL )
                  {
                    if ( !*(_DWORD *)(i9 + 12) )
                      break;
                    v1217 = *(unsigned int *)(i9 + 16);
                    if ( !(_DWORD)v1217 )
                      break;
                    v1218 = *(_QWORD *)(v1217 + v3848);
                    if ( v1218 )
                    {
                      v1219 = pg_unknown8(&v4040, v1218, v3845 & 0x7FFFFFEF | 0x80000000);
                      v213 = v4040;
                      v932 = v1219;
                      v4026 = (unsigned int *)v4040;
                      if ( ((v1219 + 0x80000000) & 0x80000000) == 0 && v1219 != -1073741554 )
                        goto LABEL_1684;
                    }
                  }
                  v932 = 0;
                }
                goto LABEL_1684;
              }
              v1063 = (unsigned int *)v3849;
              v1064 = v1062;
              v930 = v1061 + *(unsigned __int16 *)(v1061 + 20) + 24LL;
              v3839 = v930;
              LODWORD(v3834) = v1062;
              v3840 = 12LL * ((unsigned int)v3836 / 0xC);
              v3842 = v3849 + v3840;
              LODWORD(Src) = 0;
              for ( i10 = 0; i10 < v1064; LODWORD(Src) = i10 )
              {
                v934 = 5LL * i10;
                v1066 = *(_DWORD *)(v930 + 40LL * i10 + 16);
                v1067 = *(_DWORD *)(v930 + 40LL * i10 + 12);
                if ( v1066 <= *(_DWORD *)(v930 + 40LL * i10 + 8) )
                  v1066 = *(_DWORD *)(v930 + 40LL * i10 + 8);
                HalExtensionList = (PVOID)(5LL * i10);
                v1068 = v1067 + v1066;
                LODWORD(v3833) = v1067;
                if ( i10 )
                {
                  if ( v1068 < *(_DWORD *)(v930 + 40LL * (i10 - 1) + 12) )
                  {
                    if ( (v905[306] & 0x200000) == 0 )
                    {
                      v3895[4] = -805294751;
                      KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1060, 1uLL, 0LL);
                    }
                    goto LABEL_1439;
                  }
                  i10 = (unsigned int)Src;
                }
                if ( v1063 != (unsigned int *)v3842 )
                {
                  while ( 1 )
                  {
                    v1069 = v1063[1];
                    if ( *v1063 >= v1068 || v1069 <= v1067 )
                    {
LABEL_1469:
                      i10 = (unsigned int)Src;
                      v1064 = v3834;
                      goto LABEL_1470;
                    }
                    if ( *v1063 < v1067 || v1069 > v1068 )
                      break;
                    v1070 = v1063[2];
                    if ( (v1070 & 1) != 0 || (*(_BYTE *)(v1070 + v1060) & 0x20) != 0 )
                    {
                      v1071 = *(_DWORD *)(v930 + 8 * v934 + 16);
                      v1072 = *(_DWORD *)(v930 + 8 * v934 + 12);
                      if ( v1071 <= *(_DWORD *)(v930 + 8 * v934 + 8) )
                        v1071 = *(_DWORD *)(v930 + 8 * v934 + 8);
                      v1073 = v1072 + v1071;
                      v1074 = (unsigned int *)((__int64 (__fastcall *)(unsigned int *, ULONG_PTR))v905[131])(
                                                v1063,
                                                v3843);
                      v1075 = v1074;
                      if ( *v1074 < v1072 || v1074[1] > v1073 )
                      {
                        v1076 = v3843;
                        if ( (v905[306] & 0x200000) == 0 )
                        {
                          v3895[6] = -805294751;
                          KeBugCheckEx(
                            __ROR4__(-805306349, 92),
                            0xAuLL,
                            v3843,
                            ((_DWORD)v1074 - (_DWORD)v3843) | 0x80000000,
                            0LL);
                        }
                        if ( !*((_DWORD *)v905 + 574) )
                        {
                          v905[288] = v905 - 0xB8BF814EDC6E963LL;
                          v905[289] = 0LL;
                          v905[290] = 271LL;
                          v905[291] = v1076;
                          *((_DWORD *)v905 + 574) = 1;
                          __b8(v905, 0LL);
                        }
                      }
                      v1077 = (unsigned int *)((__int64 (__fastcall *)(unsigned int *, ULONG_PTR, ULONG_PTR))v905[132])(
                                                v1075,
                                                v3843,
                                                v3843 + *v1075);
                      if ( *v1077 >= v1072 && v1077[1] <= v1073 )
                      {
                        v1060 = v3843;
                      }
                      else
                      {
                        v1060 = v3843;
                        if ( (v905[306] & 0x200000) == 0 )
                        {
                          v3895[5] = -805294751;
                          KeBugCheckEx(
                            __ROR4__(-805306349, 92),
                            0xAuLL,
                            v3843,
                            ((_DWORD)v1077 - (_DWORD)v3843) | 0x80000000,
                            0LL);
                        }
                        if ( !*((_DWORD *)v905 + 574) )
                        {
                          v905[288] = v905 - 0xB8BF814EDC6E963LL;
                          v905[289] = 0LL;
                          v905[290] = 271LL;
                          v905[291] = v1060;
                          *((_DWORD *)v905 + 574) = 1;
                          __b8(v905, 0LL);
                        }
                      }
                      v934 = (__int64)HalExtensionList;
                      v1067 = v3833;
                      v930 = v3839;
                    }
                    v1063 += 3;
                    if ( v1063 == (unsigned int *)v3842 )
                      goto LABEL_1469;
                  }
                  if ( (v905[306] & 0x200000) == 0 )
                  {
                    v3895[7] = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1060, 2uLL, 0LL);
                  }
                  goto LABEL_1439;
                }
LABEL_1470:
                ++i10;
              }
              v1078 = v3841;
              v1079 = v3838;
              v1080 = (__int16)v3844;
              if ( v1063 != (unsigned int *)v3842 )
              {
                if ( (v905[306] & 0x200000) == 0 )
                {
                  v3895[8] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1060, 3uLL, 0LL);
                }
                goto LABEL_1439;
              }
              if ( (_DWORD)v3841 )
                v1081 = (v3841 + 6) & 0xFFFFFFF8;
              else
                v1081 = 0;
              v1082 = *((unsigned int *)v905 + 505);
              v1083 = v1082 + v1081 + 24 * (v1064 + 2);
              if ( v1083 <= *((_DWORD *)v905 + 647) )
              {
                v1084 = v905;
                HalExtensionList = v905;
                *((_DWORD *)v905 + 505) = v1083;
              }
              else
              {
                HalExtensionList = (PVOID)pg_unknown7(v905, v1083, *((unsigned int *)v905 + 585));
                v1084 = HalExtensionList;
                if ( !HalExtensionList )
                {
                  v932 = -1073741670;
                  goto LABEL_1672;
                }
                v1085 = *((_DWORD *)v905 + 612);
                if ( (v1085 & 4) == 0 )
                {
                  v1086 = *((_DWORD *)v905 + 505);
                  v1087 = v905[249];
                  v1088 = (v1085 & 0x20000000) != 0 ? *((_DWORD *)v905 + 585) : 0;
                  if ( v1086 >= 8 )
                  {
                    v1089 = (unsigned __int64)v1086 >> 3;
                    do
                    {
                      *v905 = 0LL;
                      v1086 -= 8;
                      ++v905;
                      --v1089;
                    }
                    while ( v1089 );
                  }
                  for ( i11 = 0; v1086; --v1086 )
                  {
                    *(_BYTE *)v905 = 0;
                    v905 = (_QWORD *)((char *)v905 + 1);
                  }
                  v1091 = v1084[585];
                  v1084[585] = v1088;
                  if ( v1088 == 3 )
                  {
                    (*((void (__fastcall **)(__int64))v1084 + 109))(v1087);
                  }
                  else
                  {
                    if ( (v1084[612] & 0x10000000) == 0 )
                      i11 = v1088;
                    if ( i11 )
                      (*((void (__fastcall **)(__int64, _QWORD))v1084 + 69))(v1087 - 8, *(_QWORD *)(v1087 - 8));
                    else
                      (*((void (__fastcall **)(__int64))v1084 + 32))(v1087);
                  }
                  v1084 = HalExtensionList;
                  v1078 = v3841;
                  *((_DWORD *)HalExtensionList + 585) = v1091;
                }
                v1084[612] &= ~4u;
                v1064 = v3834;
              }
              v1092 = (char *)v1084 + v1082;
              ++v1084[515];
              v1093 = (_QWORD *)((char *)v1084 + v1082);
              v4057 = (char *)v1084 + v1082;
              v1094 = 48;
              v1095 = 6LL;
              do
              {
                *v1093 = 0LL;
                v1094 -= 8;
                ++v1093;
                --v1095;
              }
              while ( v1095 );
              for ( ; v1094; --v1094 )
              {
                *(_BYTE *)v1093 = 0;
                v1093 = (_QWORD *)((char *)v1093 + 1);
              }
              v1096 = v3849;
              *(_DWORD *)v1092 = 30;
              *((_QWORD *)v1092 + 1) = v1096;
              *((_DWORD *)v1092 + 4) = 0;
              v1097 = *((_QWORD *)v1084 + 259);
              for ( i12 = v1097; ; LODWORD(v1097) = i12 ^ v1097 )
              {
                i12 >>= 31;
                if ( !i12 )
                  break;
              }
              v1099 = v3843;
              *((_DWORD *)v1092 + 5) = v1097 & 0x7FFFFFFF;
              v905 = v1084;
              v4058 = v4057;
              v4042 = v1084;
              *((_QWORD *)v4057 + 3) = v1099;
              *((_DWORD *)v4058 + 8) = *(_DWORD *)(v1079 + 80);
              *((_DWORD *)v4058 + 9) = v3836;
              *((_WORD *)v4058 + 20) = v1080;
              *((_WORD *)v4058 + 21) = *((_WORD *)v4058 + 21) & 0xFFFE | ((_DWORD)v3837 != 0);
              v934 = (__int64)(v4058 + 48);
              v3838 = (ULONG_PTR)(v4058 + 48);
              if ( v1078 )
                v1100 = (unsigned int *)(v934 + (((unsigned int)(v1078 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              else
                v1100 = (unsigned int *)(v4058 + 48);
              v1101 = *((unsigned __int16 *)v4058 + 20);
              v3841 = (unsigned __int64)v1100;
              v930 = (ULONG_PTR)&v1100[6 * v1101];
              v893 = v1078 == 0;
              v1102 = (unsigned int *)v3849;
              v1103 = 12LL;
              if ( v893 )
                v1103 = v3840;
              v3844 = &v1100[6 * v1101];
              v3840 = v3849 + v1103;
              if ( v1064 )
              {
                v934 = v1064;
                v1104 = v1100 + 2;
                do
                {
                  v1105 = 2LL;
                  do
                  {
                    *(v1104 - 2) = 0;
                    *(v1104 - 1) = 0;
                    *v1104 = 0x80000000;
                    v1104 += 3;
                    --v1105;
                  }
                  while ( v1105 );
                  --v934;
                }
                while ( v934 );
              }
              if ( v1100 != (unsigned int *)v930 )
              {
                v1106 = (char *)v3839;
                do
                {
                  v1107 = 0;
                  if ( (*((_DWORD *)v1106 + 9) & 0x2000000) != 0
                    || (v1108 = *(_DWORD *)v1106, *(_DWORD *)v1106 == 1414090313)
                    && *((_DWORD *)v1106 + 1) == 1195525195
                    || v1108 == 1162297680
                    && ((v1109 = *((_WORD *)v1106 + 2), v1109 == 30839) || v1109 == 29303 || v1109 == 30583)
                    || v1108 == 1095914053 && *((_WORD *)v1106 + 2) == 16724 )
                  {
                    v1107 = 1;
                  }
                  else
                  {
                    v1110 = (char *)*((_QWORD *)v1084 + 294);
                    v1111 = (__int64 *)*((_QWORD *)v1084 + 295);
                    v1112 = v1106 - v1110;
                    v1113 = (char *)*((_QWORD *)v1084 + 296);
                    v1114 = (char *)*((_QWORD *)v1084 + 297);
                    v1115 = 7;
                    while ( 1 )
                    {
                      v1116 = (unsigned __int8)v1110[v1112];
                      v1117 = (unsigned __int8)*v1110++;
                      if ( v1116 != v1117 )
                        break;
                      if ( !--v1115 )
                      {
LABEL_1546:
                        v1107 = 1;
                        goto LABEL_1547;
                      }
                    }
                    v1118 = 8;
                    v1119 = (__int64 *)v1106;
                    while ( 1 )
                    {
                      v1120 = *v1119++;
                      v1121 = *v1111++;
                      if ( v1120 != v1121 )
                        break;
                      v1118 -= 8;
                      if ( v1118 < 8 )
                      {
                        if ( !v1118 )
                          goto LABEL_1546;
                        while ( 1 )
                        {
                          v1122 = *(unsigned __int8 *)v1119;
                          v1119 = (__int64 *)((char *)v1119 + 1);
                          v1123 = *(unsigned __int8 *)v1111;
                          v1111 = (__int64 *)((char *)v1111 + 1);
                          if ( v1122 != v1123 )
                            goto LABEL_1539;
                          if ( !--v1118 )
                            goto LABEL_1546;
                        }
                      }
                    }
LABEL_1539:
                    v1124 = 4;
                    v1125 = v1106 - v1113;
                    while ( 1 )
                    {
                      v1126 = (unsigned __int8)v1113[v1125];
                      v1127 = (unsigned __int8)*v1113++;
                      if ( v1126 != v1127 )
                        break;
                      if ( !--v1124 )
                        goto LABEL_1546;
                    }
                    v1128 = 6;
                    v1129 = v1106 - v1114;
                    while ( 1 )
                    {
                      v1130 = (unsigned __int8)v1114[v1129];
                      v1131 = (unsigned __int8)*v1114++;
                      if ( v1130 != v1131 )
                        break;
                      if ( !--v1128 )
                        goto LABEL_1546;
                    }
LABEL_1547:
                    v1102 = (unsigned int *)v3849;
                    v1100 = (unsigned int *)v3841;
                    v1084 = HalExtensionList;
                  }
                  v1132 = *((_DWORD *)v1106 + 9);
                  if ( v1132 < 0 )
                    v1107 = 1;
                  LODWORD(Src) = v1107;
                  if ( v1107 && *(_DWORD *)v1106 == 1414090313 && *((_DWORD *)v1106 + 1) == 1195525195 )
                  {
                    if ( (v1084[613] & 0x2000) != 0 )
                      v1107 = 0;
                    LODWORD(Src) = v1107;
                  }
                  v1133 = v3843;
                  if ( (v1084[613] & 0x4000) != 0
                    && (v1132 & 0x20000000) != 0
                    && (v3843 == *((_QWORD *)v1084 + 189) || v3843 == *((_QWORD *)v1084 + 190)) )
                  {
                    v1107 = 1;
                    LODWORD(Src) = 1;
                  }
                  v1134 = *((_DWORD *)v1106 + 4);
                  v930 = *((unsigned int *)v1106 + 3);
                  v1135 = (unsigned int *)v3842;
                  if ( v1134 <= *((_DWORD *)v1106 + 2) )
                    v1134 = *((_DWORD *)v1106 + 2);
                  v1136 = v930 + v1134;
                  LODWORD(v3834) = *((_DWORD *)v1106 + 3);
                  LODWORD(v3833) = v1136;
                  if ( v1102 == (unsigned int *)v3842 )
                  {
                    v1137 = 0;
                    v1138 = 0;
                  }
                  else
                  {
                    v1137 = *v1102;
                    v1138 = v1102[1];
                  }
                  LODWORD(v3837) = v1138;
                  v1139 = v930;
                  LODWORD(v3836) = v1137;
                  if ( v1102 != (unsigned int *)v3842 && v1137 > (unsigned int)v930 && v1138 <= v1136 && !v1107 )
                  {
                    *v1100 = v930;
                    v1100[1] = v1137;
                    v1139 = v1137;
                    v1140 = *v1100;
                    v1141 = v1137 - v1140;
                    v1142 = (_QWORD *)(v1133 + v1140);
                    v1143 = v1133 + v1140 + v1137 - (unsigned int)v1140;
                    for ( i13 = 0; i13 < 6; ++i13 )
                    {
                      v1145 = v4337[i13];
                      if ( (unsigned __int64)v1142 < v1145 + (unsigned int)v4309[i13] && v1143 > v1145 )
                      {
                        v1136 = v3833;
                        v1135 = (unsigned int *)v3842;
                        v1102 = (unsigned int *)v3849;
                        goto LABEL_1594;
                      }
                    }
                    v1084[522] += v1141;
                    v1146 = v1142;
                    v1147 = v1084[517];
                    v1148 = (const char *)v1142;
                    v1149 = *((_QWORD *)v1084 + 259);
                    if ( (unsigned __int64)v1142 < v1143 )
                    {
                      do
                      {
                        _mm_prefetch(v1148, 0);
                        v1148 += 64;
                      }
                      while ( (unsigned __int64)v1148 < v1143 );
                    }
                    v1150 = v1149;
                    v1151 = v1141 >> 7;
                    if ( v1141 >> 7 )
                    {
                      do
                      {
                        v1152 = 8LL;
                        do
                        {
                          v1153 = v1150 ^ *v1146;
                          v1154 = v1146[1];
                          v1146 += 2;
                          v1150 = __ROL8__(__ROL8__(v1153, v1147) ^ v1154, v1147);
                          --v1152;
                        }
                        while ( v1152 );
                        v1155 = __ROL8__(v1149 ^ ((char *)v1146 - (char *)v1142), 17) ^ v1149 ^ ((char *)v1146
                                                                                               - (char *)v1142);
                        v4059 = (v1155 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v1147 = ((unsigned __int8)(v4059 ^ v1155) ^ (unsigned __int8)v1147) & 0x3F;
                        if ( !v1147 )
                          LOBYTE(v1147) = 1;
                        --v1151;
                      }
                      while ( v1151 );
                      v1137 = v3836;
                      v1138 = v3837;
                    }
                    v1156 = v1141 & 0x7F;
                    if ( v1156 >= 8 )
                    {
                      v1157 = (unsigned __int64)v1156 >> 3;
                      do
                      {
                        v1150 = __ROL8__(*v1146++ ^ v1150, v1147);
                        v1156 -= 8;
                        --v1157;
                      }
                      while ( v1157 );
                    }
                    for ( ; v1156; --v1156 )
                    {
                      v1158 = *(unsigned __int8 *)v1146;
                      v1146 = (_QWORD *)((char *)v1146 + 1);
                      v1150 = __ROL8__(v1158 ^ v1150, v1147);
                    }
                    for ( i14 = v1150 >> 31; i14; i14 >>= 31 )
                      LODWORD(v1150) = i14 ^ v1150;
                    v1136 = v3833;
                    v930 = (unsigned int)v3834;
                    v1084 = HalExtensionList;
                    v1102 = (unsigned int *)v3849;
                    *(_DWORD *)(v3841 + 8) = v1150 & 0x7FFFFFFF;
                    v1135 = (unsigned int *)v3842;
                  }
LABEL_1594:
                  if ( v1137 < (unsigned int)v930 )
                  {
                    v1161 = (int)Src;
                  }
                  else
                  {
                    v1160 = v1138 <= v1136;
                    v1161 = (int)Src;
                    if ( v1160 && v1102 != v1135 )
                    {
                      v1162 = (unsigned int *)v3840;
                      v1163 = *(_DWORD *)(v3840 + 4);
                      LODWORD(v3836) = v1163;
                      if ( v1163 <= v1136 )
                      {
                        v1164 = (_BYTE *)v3838;
                        while ( v1162 != v1135 )
                        {
                          if ( v1161 )
                          {
                            v1165 = 0x80;
                          }
                          else
                          {
                            v1166 = v1102[1];
                            v1139 = *v1162;
                            if ( *v1162 < (unsigned int)v1166 )
                            {
                              if ( (v1084[612] & 0x200000) == 0 )
                              {
                                v3895[9] = -805294751;
                                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v3843, 6uLL, 0LL);
                              }
                              if ( !v1084[574] )
                              {
                                *((_QWORD *)v1084 + 288) = v1084 - 0x1717F029DB8DD2C6LL;
                                *((_QWORD *)v1084 + 289) = 0LL;
                                v1167 = v3843;
                                *((_QWORD *)v1084 + 290) = 271LL;
                                *((_QWORD *)v1084 + 291) = v1167;
                                v1084[574] = 1;
                                __b8(v1084, 0LL);
                              }
                            }
                            v1168 = (const char *)(v3843 + v1166);
                            v1169 = v1139 - v1166;
                            v1170 = v3843 + v1166 + (unsigned int)(v1139 - v1166);
                            for ( i15 = 0; i15 < 6; ++i15 )
                            {
                              v1172 = v4337[i15];
                              if ( (unsigned __int64)v1168 < v1172 + (unsigned int)v4309[i15] && v1170 > v1172 )
                                goto LABEL_1630;
                            }
                            if ( v1169 < 4 )
                            {
LABEL_1630:
                              v1165 = 0x80;
                              goto LABEL_1631;
                            }
                            v1173 = HalExtensionList;
                            v930 = (ULONG_PTR)v1168;
                            v1174 = v1168;
                            *((_DWORD *)HalExtensionList + 522) += v1169;
                            v1175 = v1173[517];
                            v1176 = *((_QWORD *)v1173 + 259);
                            if ( (unsigned __int64)v1168 < v1170 )
                            {
                              do
                              {
                                _mm_prefetch(v1174, 0);
                                v1174 += 64;
                              }
                              while ( (unsigned __int64)v1174 < v1170 );
                            }
                            v1177 = v1176;
                            v1178 = v1169 >> 7;
                            if ( v1169 >> 7 )
                            {
                              do
                              {
                                v1179 = 8LL;
                                do
                                {
                                  v1180 = v1177 ^ *(_QWORD *)v930;
                                  v1181 = *(_QWORD *)(v930 + 8);
                                  v930 += 16LL;
                                  v1177 = __ROL8__(__ROL8__(v1180, v1175) ^ v1181, v1175);
                                  --v1179;
                                }
                                while ( v1179 );
                                v1182 = __ROL8__(v1176 ^ (v930 - (_QWORD)v1168), 17) ^ v1176 ^ (v930 - (_QWORD)v1168);
                                v4060 = (v1182 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                                v1175 = ((unsigned __int8)(v4060 ^ v1182) ^ (unsigned __int8)v1175) & 0x3F;
                                if ( !v1175 )
                                  LOBYTE(v1175) = 1;
                                --v1178;
                              }
                              while ( v1178 );
                              v1163 = v3836;
                              v1161 = (int)Src;
                            }
                            v1183 = v1169 & 0x7F;
                            if ( v1183 >= 8 )
                            {
                              v1184 = (unsigned __int64)v1183 >> 3;
                              do
                              {
                                v1177 = __ROL8__(*(_QWORD *)v930 ^ v1177, v1175);
                                v930 += 8LL;
                                v1183 -= 8;
                                --v1184;
                              }
                              while ( v1184 );
                            }
                            for ( ; v1183; --v1183 )
                            {
                              v1185 = *(unsigned __int8 *)v930++;
                              v1177 = __ROL8__(v1185 ^ v1177, v1175);
                            }
                            for ( i16 = v1177 >> 7; i16; i16 >>= 7 )
                              LOBYTE(v1177) = i16 ^ v1177;
                            v1162 = (unsigned int *)v3840;
                            v1165 = v1177 & 0x7F;
LABEL_1631:
                            v1102 = (unsigned int *)v3849;
                            v1136 = v3833;
                            v1164 = (_BYTE *)v3838;
                          }
                          *v1164 = v1165;
                          v1102 += 3;
                          v1162 += 3;
                          v1135 = (unsigned int *)v3842;
                          v1164 = (_BYTE *)(v3838 + 1);
                          v3849 = (__int64)v1102;
                          ++v3838;
                          v3840 = (ULONG_PTR)v1162;
                          if ( v1162 != (unsigned int *)v3842 )
                          {
                            v1163 = v1162[1];
                            LODWORD(v3836) = v1163;
                          }
                          if ( v1163 > v1136 )
                            break;
                          v1084 = HalExtensionList;
                        }
                      }
                    }
                  }
                  if ( v1161 || v1139 == v1136 )
                  {
LABEL_1661:
                    v1209 = v3841;
                  }
                  else
                  {
                    v1187 = v3841;
                    v1188 = v3843;
                    *(_DWORD *)(v3841 + 12) = v1139;
                    *(_DWORD *)(v1187 + 16) = v1136;
                    v1189 = *(unsigned int *)(v1187 + 12);
                    v1190 = v1136 - v1189;
                    v1191 = (const char *)(v1189 + v1188);
                    v1192 = (unsigned __int64)&v1191[v1136 - (unsigned int)v1189];
                    for ( i17 = 0; i17 < 6; ++i17 )
                    {
                      v1194 = v4337[i17];
                      if ( (unsigned __int64)v1191 < v1194 + (unsigned int)v4309[i17] && v1192 > v1194 )
                      {
                        v1102 = (unsigned int *)v3849;
                        goto LABEL_1661;
                      }
                    }
                    v1195 = HalExtensionList;
                    v930 = (ULONG_PTR)v1191;
                    *((_DWORD *)HalExtensionList + 522) += v1190;
                    v1196 = v1195[517];
                    v1197 = *((_QWORD *)v1195 + 259);
                    for ( i18 = v1191; (unsigned __int64)i18 < v1192; i18 += 64 )
                      _mm_prefetch(i18, 0);
                    v1199 = v1197;
                    for ( i19 = v1190 >> 7; i19; --i19 )
                    {
                      v1201 = 8LL;
                      do
                      {
                        v1202 = v1199 ^ *(_QWORD *)v930;
                        v1203 = *(_QWORD *)(v930 + 8);
                        v930 += 16LL;
                        v1199 = __ROL8__(__ROL8__(v1202, v1196) ^ v1203, v1196);
                        --v1201;
                      }
                      while ( v1201 );
                      v1204 = __ROL8__(v1197 ^ (v930 - (_QWORD)v1191), 17) ^ v1197 ^ (v930 - (_QWORD)v1191);
                      v4061 = (v1204 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v1196 = ((unsigned __int8)(v4061 ^ v1204) ^ (unsigned __int8)v1196) & 0x3F;
                      if ( !v1196 )
                        LOBYTE(v1196) = 1;
                    }
                    v1205 = v1190 & 0x7F;
                    if ( v1205 >= 8 )
                    {
                      v1206 = (unsigned __int64)v1205 >> 3;
                      do
                      {
                        v1199 = __ROL8__(*(_QWORD *)v930 ^ v1199, v1196);
                        v930 += 8LL;
                        v1205 -= 8;
                        --v1206;
                      }
                      while ( v1206 );
                    }
                    for ( ; v1205; --v1205 )
                    {
                      v1207 = *(unsigned __int8 *)v930++;
                      v1199 = __ROL8__(v1207 ^ v1199, v1196);
                    }
                    for ( i20 = v1199; ; LODWORD(v1199) = i20 ^ v1199 )
                    {
                      i20 >>= 31;
                      if ( !i20 )
                        break;
                    }
                    v1209 = v3841;
                    v1102 = (unsigned int *)v3849;
                    *(_DWORD *)(v3841 + 20) = v1199 & 0x7FFFFFFF;
                  }
                  v934 = v3842;
                  if ( v1102 != (unsigned int *)v3842
                    && *v1102 >= (unsigned int)v3834
                    && v1102[1] <= (unsigned int)v3833 )
                  {
                    v1210 = v3840;
                    if ( v3840 != v3842 )
                    {
                      v1211 = v3838;
                      *(_BYTE *)v3838 = 0x80;
                      v3838 = v1211 + 1;
                      v3840 = v1210 + 12;
                    }
                    v1102 += 3;
                    v3849 = (__int64)v1102;
                  }
                  v1100 = (unsigned int *)(v1209 + 24);
                  v1084 = HalExtensionList;
                  v1106 = (char *)(v3839 + 40);
                  v3841 = (unsigned __int64)v1100;
                  v3839 += 40LL;
                }
                while ( v1100 != v3844 );
                v905 = v4042;
              }
            }
            v4040 = v905;
            v953 = 0;
LABEL_1671:
            v932 = v953;
            goto LABEL_1672;
          }
          v997[8] |= 2u;
          goto LABEL_1351;
        }
      }
LABEL_1685:
      _disable();
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        while ( 1 )
          ;
      }
      _enable();
      v1220 = v4039;
      v1221 = (__int64 (__fastcall *)(void *, char *))*((_QWORD *)v213 + 64);
      HalExtensionList = v4039;
      v4062 = v213;
      v1222 = v1221(v4039, v4310);
      v1223 = v4311;
      v1224 = v4312;
      v3839 = v1222;
      v3893 = v4312;
      v3838 = v4311;
      if ( !v4311 )
        return 0;
      v4263 = 0LL;
      v1225 = 4;
      v1226 = &v4264;
      do
      {
        *(_BYTE *)v1226 = 0;
        v1226 = (int *)((char *)v1226 + 1);
        --v1225;
      }
      while ( v1225 );
      v1227 = 0;
      if ( *((_DWORD *)v213 + 515) )
      {
        v1228 = v4264;
        v1229 = HIDWORD(v4263);
        v1230 = v4263;
        while ( 1 )
        {
          v1231 = v213;
          if ( *((_QWORD *)v213 + 335) )
            v1231 = (_BYTE *)*((_QWORD *)v213 + 335);
          v1232 = 0;
          v1233 = (int *)&v1231[*((unsigned int *)v1231 + 514)];
          if ( v1230 && v1229 <= v1227 )
          {
            v1232 = v1229;
            v1233 = (int *)&v1231[v1228];
          }
          if ( v1232 != v1227 )
            break;
LABEL_1720:
          HIDWORD(v4263) = v1232;
          v1228 = (_DWORD)v1233 - (_DWORD)v1231;
          v1230 = 1;
          v4264 = (_DWORD)v1233 - (_DWORD)v1231;
          v1229 = v1232;
          LODWORD(v4263) = 1;
          v1241 = *v1233;
          if ( (unsigned int)v1241 <= 0x2B )
          {
            v1242 = 0x80000001002LL;
            if ( _bittest64(&v1242, v1241) )
            {
              if ( *((_QWORD *)v1233 + 1) == v3839 && v1233[4] == v1224 )
                goto LABEL_1728;
            }
          }
          if ( (unsigned int)(v1241 - 33) <= 1 && *((_QWORD *)v1233 + 4) == v1223 )
            goto LABEL_1728;
          if ( ++v1227 >= *((_DWORD *)v213 + 515) )
            goto LABEL_1727;
        }
        v1234 = v1227 - v1232;
        v1232 = v1227;
        while ( 2 )
        {
          v1235 = *v1233;
          if ( *v1233 > 12 )
          {
            if ( v1235 == 28 )
            {
              v1240 = *((unsigned __int16 *)v1233 + 20);
              goto LABEL_1717;
            }
            if ( v1235 == 30 )
            {
              v1239 = (((v1233[9] != 0 ? v1233[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                    + 24 * (*((unsigned __int16 *)v1233 + 20) + 2);
              goto LABEL_1718;
            }
            if ( v1235 <= 32 )
              goto LABEL_1714;
            if ( v1235 <= 34 )
            {
              v1239 = 20 * (unsigned int)(((v1233[8] & 0xFFF) + (unsigned __int64)(unsigned int)v1233[10] + 4095) >> 12)
                    + 48;
              goto LABEL_1718;
            }
            if ( v1235 != 43 )
              goto LABEL_1714;
          }
          else if ( v1235 != 12 )
          {
            v1236 = v1235 - 1;
            if ( v1236 )
            {
              v1237 = v1236 - 6;
              if ( !v1237 )
              {
                v1239 = (unsigned int)(24 * (v1233[6] + 2));
                goto LABEL_1718;
              }
              v1238 = v1237 - 1;
              if ( v1238 )
              {
                if ( v1238 == 2 )
                {
                  v1239 = (unsigned int)(16 * (v1233[7] + 3));
                  goto LABEL_1718;
                }
LABEL_1714:
                v1239 = 48LL;
LABEL_1718:
                v1233 = (int *)((char *)v1233 + v1239);
                if ( !--v1234 )
                {
                  v1220 = HalExtensionList;
                  v1223 = v3838;
                  goto LABEL_1720;
                }
                continue;
              }
              v1240 = *((unsigned __int16 *)v1233 + 16);
LABEL_1717:
              v1239 = (v1240 + 55) & 0xFFFFFFF8;
              goto LABEL_1718;
            }
          }
          break;
        }
        v1239 = 4 * (v1233[4] / 0xCu) + 48;
        goto LABEL_1718;
      }
LABEL_1727:
      v1233 = 0LL;
LABEL_1728:
      v4063 = v1233;
      if ( !v1233 )
      {
        v1243 = v3845;
        v1245 = (*((__int64 (__fastcall **)(PVOID))v213 + 85))(v1220);
        LODWORD(Src) = v1245;
        LODWORD(v3834) = v3893;
        if ( (v3845 & 0x10) != 0 )
        {
          if ( (*((_DWORD *)v213 + 613) & 0x400) == 0 )
          {
            v1243 = v3845 & 0xFFFFFFEF;
            v3845 &= ~0x10u;
          }
          if ( (v1243 & 0x10) != 0 && !(unsigned int)pg_unknown9(v213, v1223) )
          {
            v1243 &= ~0x10u;
            v3845 = v1243;
          }
        }
        if ( (*((_DWORD *)v213 + 612) & 0x40000000) != 0 )
        {
          v1246 = pg_unknown13(&v4026, v1223, v1243);
          v213 = v4026;
          goto LABEL_2107;
        }
        v4343 = 0LL;
        v4313[4] = 0;
        LOBYTE(v1244) = 1;
        v1247 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))v213 + 62))(v1223, v1244, 0LL, &v3893);
        v1248 = v1247;
        v4341[1] = v1247;
        LOBYTE(v1248) = 1;
        v3893 &= -(v1247 != 0);
        v1249 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v213 + 62);
        v4313[1] = v3893;
        v1250 = (void *)v1249(v1223, v1248, 12LL, &v3893);
        v1251 = v1250;
        HalExtensionList = v1250;
        v4341[2] = v1250;
        LOBYTE(v1251) = 1;
        v3893 &= -(v1250 != 0LL);
        v1252 = (__int64 (__fastcall *)(ULONG_PTR, void *, __int64, int *))*((_QWORD *)v213 + 62);
        LODWORD(v3833) = v3893;
        v4313[2] = v3893;
        v4342 = v1252(v1223, v1251, 10LL, &v3893);
        v3893 &= -(v4342 != 0);
        v1253 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v213 + 63);
        v4313[3] = v3893;
        v1254 = v1253(v1223);
        if ( !v1254 )
          return 0;
        v1255 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v213 + 147))(v1223, &v4064);
        v1256 = *((unsigned int *)v213 + 585);
        v4344 = v1255;
        v4313[5] = v4064;
        v4313[0] = *(_DWORD *)(v1254 + 84);
        v4341[0] = v1223;
        v1257 = *((unsigned int *)v213 + 505);
        v1258 = v1245 != 0 ? 0xB : 0;
        LODWORD(v3836) = v1258;
        v1259 = v1257 + 288;
        if ( (unsigned int)(v1257 + 288) <= *((_DWORD *)v213 + 647) )
        {
          v1260 = (__int64)v213;
          v3841 = (unsigned __int64)v213;
          *((_DWORD *)v213 + 505) = v1259;
        }
        else
        {
          v1260 = pg_unknown7(v213, v1259, v1256);
          v3841 = v1260;
          if ( !v1260 )
            return 0;
          v1261 = *((_DWORD *)v213 + 612);
          if ( (v1261 & 4) == 0 )
          {
            v1262 = *((_DWORD *)v213 + 505);
            v1263 = *((_QWORD *)v213 + 249);
            v1264 = (v1261 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
            if ( v1262 >= 8 )
            {
              v1265 = (unsigned __int64)v1262 >> 3;
              do
              {
                *(_QWORD *)v213 = 0LL;
                v1262 -= 8;
                v213 += 8;
                --v1265;
              }
              while ( v1265 );
            }
            for ( i21 = 0; v1262; --v1262 )
              *v213++ = 0;
            v1267 = *(_DWORD *)(v1260 + 2340);
            *(_DWORD *)(v1260 + 2340) = v1264;
            if ( v1264 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v1260 + 872))(v1263);
            }
            else
            {
              if ( (*(_DWORD *)(v1260 + 2448) & 0x10000000) == 0 )
                i21 = v1264;
              if ( i21 )
                (*(void (__fastcall **)(__int64, _QWORD))(v1260 + 552))(v1263 - 8, *(_QWORD *)(v1263 - 8));
              else
                (*(void (__fastcall **)(__int64))(v1260 + 256))(v1263);
            }
            *(_DWORD *)(v1260 + 2340) = v1267;
            v1258 = v3836;
          }
          *(_DWORD *)(v1260 + 2448) &= ~4u;
        }
        v1268 = v1260 + v1257;
        v1269 = 6LL;
        *(_DWORD *)(v1260 + 2060) += 6;
        v1270 = v4341;
        v4065 = v1268;
        v4063 = (_DWORD *)v1268;
        v1271 = v4313;
        v3840 = (ULONG_PTR)v4341;
        v3843 = 6LL;
        do
        {
          v1272 = *v1271;
          v1273 = 48;
          v1274 = (_QWORD *)*v1270;
          v1275 = (_QWORD *)v1268;
          do
          {
            *v1275 = 0LL;
            v1273 -= 8;
            ++v1275;
            --v1269;
          }
          while ( v1269 );
          for ( ; v1273; --v1273 )
          {
            *(_BYTE *)v1275 = 0;
            v1275 = (_QWORD *)((char *)v1275 + 1);
          }
          *(_DWORD *)v1268 = v1258;
          *(_QWORD *)(v1268 + 8) = v1274;
          v1276 = v1274;
          *(_DWORD *)(v1268 + 16) = v1272;
          v1277 = (const char *)v1274;
          *(_DWORD *)(v1260 + 2088) += v1272;
          v1278 = *(_DWORD *)(v1260 + 2068);
          v1279 = *(_QWORD *)(v1260 + 2072);
          if ( v1274 < (_QWORD *)((char *)v1274 + v1272) )
          {
            do
            {
              _mm_prefetch(v1277, 0);
              v1277 += 64;
            }
            while ( v1277 < (const char *)v1274 + v1272 );
          }
          v1280 = *(_QWORD *)(v1260 + 2072);
          v1281 = (unsigned int)v1272 >> 7;
          if ( (unsigned int)v1272 >> 7 )
          {
            do
            {
              v1282 = 8LL;
              do
              {
                v1283 = v1280 ^ *v1276;
                v1284 = v1276[1];
                v1276 += 2;
                v1280 = __ROL8__(__ROL8__(v1283, v1278) ^ v1284, v1278);
                --v1282;
              }
              while ( v1282 );
              v1285 = __ROL8__(v1279 ^ ((char *)v1276 - (char *)v1274), 17) ^ v1279 ^ ((char *)v1276 - (char *)v1274);
              v4066 = (v1285 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1278 = ((unsigned __int8)(v4066 ^ v1285) ^ (unsigned __int8)v1278) & 0x3F;
              if ( !v1278 )
                LOBYTE(v1278) = 1;
              --v1281;
            }
            while ( v1281 );
            v1260 = v3841;
            v1270 = (_QWORD *)v3840;
          }
          v1286 = v1272 & 0x7F;
          if ( v1286 >= 8 )
          {
            v1287 = (unsigned __int64)(v1272 & 0x7F) >> 3;
            do
            {
              v1280 = __ROL8__(*v1276++ ^ v1280, v1278);
              v1286 -= 8;
              --v1287;
            }
            while ( v1287 );
            v1260 = v3841;
          }
          for ( ; v1286; --v1286 )
          {
            v1288 = *(unsigned __int8 *)v1276;
            v1276 = (_QWORD *)((char *)v1276 + 1);
            v1280 = __ROL8__(v1288 ^ v1280, v1278);
          }
          for ( i22 = v1280 >> 31; i22; i22 >>= 31 )
            LODWORD(v1280) = i22 ^ v1280;
          v1269 = 6LL;
          *(_DWORD *)(v1268 + 20) = v1280 & 0x7FFFFFFF;
          ++v1270;
          *(_DWORD *)(v1260 + 2088) += v1272;
          ++v1271;
          v1258 = v3836;
          v1268 = v4065 + 48;
          v893 = v3843-- == 1;
          v4065 += 48LL;
          v3840 = (ULONG_PTR)v1270;
        }
        while ( !v893 );
        v1290 = v4063;
        v1291 = v3838;
        v1292 = (int)Src;
        *v4063 = 44;
        *((_QWORD *)v1290 + 3) = v1291;
        v1293 = *(_DWORD *)(v1260 + 2448);
        if ( (v1293 & 0x10000000) != 0 || (v1293 & 0x200000) != 0 )
        {
LABEL_1786:
          if ( !v1292 )
            goto LABEL_1788;
        }
        else if ( !v1292 )
        {
          if ( (*(_DWORD *)(v1260 + 2452) & 0x8000) != 0 )
          {
            v1290[8] |= 1u;
            if ( (unsigned int)pg_unknown9(v1260, v1291) )
            {
              v1290[8] |= 4u;
              goto LABEL_1786;
            }
          }
LABEL_1788:
          v4062 = (_BYTE *)v1260;
          v213 = (_BYTE *)v1260;
          v4026 = (unsigned int *)v1260;
          v1294 = pg_unknown10((unsigned int)&v4062, v3839, v3834, v1291, v1292, v3845, (__int64)v3895, (__int64)&v3894);
          if ( v1294 < 0 )
            goto LABEL_2108;
          v1295 = v4062;
          v1296 = v3894 - v3895[0];
          v1297 = (_QWORD *)(v1291 + v3895[0]);
          v4063 = &v4062[(_QWORD)v4063 - v1260];
          v4026 = (unsigned int *)v4062;
          v1298 = v4063 + 48;
          v1299 = 48;
          v1300 = v4063 + 48;
          v1301 = 6LL;
          do
          {
            *v1300 = 0LL;
            v1299 -= 8;
            ++v1300;
            --v1301;
          }
          while ( v1301 );
          for ( ; v1299; --v1299 )
          {
            *(_BYTE *)v1300 = 0;
            v1300 = (_QWORD *)((char *)v1300 + 1);
          }
          v1302 = v1297;
          *v1298 = v3836;
          v1303 = (const char *)v1297;
          *((_QWORD *)v1298 + 1) = v1297;
          v1298[4] = v1296;
          *((_DWORD *)v1295 + 522) += v1296;
          v1304 = *((_DWORD *)v1295 + 517);
          v1305 = *((_QWORD *)v1295 + 259);
          v1306 = (unsigned __int64)v1297 + v1296;
          if ( (unsigned __int64)v1297 < v1306 )
          {
            do
            {
              _mm_prefetch(v1303, 0);
              v1303 += 64;
            }
            while ( (unsigned __int64)v1303 < v1306 );
          }
          v1307 = *((_QWORD *)v1295 + 259);
          v1308 = v1296 >> 7;
          if ( v1296 >> 7 )
          {
            do
            {
              v1309 = 8LL;
              do
              {
                v1310 = v1307 ^ *v1302;
                v1311 = v1302[1];
                v1302 += 2;
                v1307 = __ROL8__(__ROL8__(v1310, v1304) ^ v1311, v1304);
                --v1309;
              }
              while ( v1309 );
              v1312 = __ROL8__(v1305 ^ ((char *)v1302 - (char *)v1297), 17) ^ v1305 ^ ((char *)v1302 - (char *)v1297);
              v4067 = (v1312 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1304 = ((unsigned __int8)(v4067 ^ v1312) ^ (unsigned __int8)v1304) & 0x3F;
              if ( !v1304 )
                LOBYTE(v1304) = 1;
              --v1308;
            }
            while ( v1308 );
            v1292 = (int)Src;
          }
          v1313 = v1296 & 0x7F;
          if ( (unsigned int)v1313 >= 8 )
          {
            v1314 = (unsigned __int64)(unsigned int)v1313 >> 3;
            do
            {
              v1307 = __ROL8__(*v1302++ ^ v1307, v1304);
              v1313 = (unsigned int)(v1313 - 8);
              --v1314;
            }
            while ( v1314 );
            v1292 = (int)Src;
          }
          if ( (_DWORD)v1313 )
          {
            do
            {
              v1315 = *(unsigned __int8 *)v1302;
              v1302 = (_QWORD *)((char *)v1302 + 1);
              v1307 = __ROL8__(v1315 ^ v1307, v1304);
              v893 = (_DWORD)v1313 == 1;
              v1313 = (unsigned int)(v1313 - 1);
            }
            while ( !v893 );
          }
          v1316 = v1307 >> 31;
          v1317 = 0;
          while ( v1316 )
          {
            LODWORD(v1307) = v1316 ^ v1307;
            v1316 >>= 31;
          }
          v1298[5] = v1307 & 0x7FFFFFFF;
          v1318 = (unsigned __int64)v4063;
          v4063[60] = 48;
          if ( *(_DWORD *)(v1318 + 256) )
          {
            LOBYTE(v1317) = v1292 != 0;
            *(_DWORD *)(v1318 + 264) = *(_DWORD *)(v1318 + 264) & 0xFFFFFFFE | v1317;
          }
          v3845 &= 1u;
          v4026 = (unsigned int *)v1295;
          v4068 = v4063 + 24;
          v1319 = (v1292 != 0) + 13;
          if ( v4063 == (_DWORD *)-96LL )
          {
            v1320 = *((unsigned int *)v1295 + 505);
            v1321 = v1320 + 48;
            if ( (unsigned int)(v1320 + 48) <= *((_DWORD *)v1295 + 647) )
            {
              v213 = v1295;
              *((_DWORD *)v1295 + 505) = v1321;
            }
            else
            {
              v213 = (_BYTE *)pg_unknown7(v1295, v1321, *((unsigned int *)v1295 + 585));
              if ( !v213 )
                return 0;
              v1322 = *((_DWORD *)v1295 + 612);
              if ( (v1322 & 4) == 0 )
              {
                v1323 = *((_DWORD *)v1295 + 505);
                v1324 = *((_QWORD *)v1295 + 249);
                v1325 = (v1322 & 0x20000000) != 0 ? *((_DWORD *)v1295 + 585) : 0;
                if ( v1323 >= 8 )
                {
                  v1326 = (unsigned __int64)v1323 >> 3;
                  do
                  {
                    *(_QWORD *)v1295 = 0LL;
                    v1323 -= 8;
                    v1295 += 8;
                    --v1326;
                  }
                  while ( v1326 );
                }
                for ( i23 = 0; v1323; --v1323 )
                  *v1295++ = 0;
                v1328 = *((_DWORD *)v213 + 585);
                *((_DWORD *)v213 + 585) = v1325;
                if ( v1325 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v213 + 109))(v1324);
                }
                else
                {
                  if ( (*((_DWORD *)v213 + 612) & 0x10000000) == 0 )
                    i23 = v1325;
                  if ( i23 )
                    (*((void (__fastcall **)(__int64, _QWORD))v213 + 69))(v1324 - 8, *(_QWORD *)(v1324 - 8));
                  else
                    (*((void (__fastcall **)(__int64))v213 + 32))(v1324);
                }
                *((_DWORD *)v213 + 585) = v1328;
              }
              *((_DWORD *)v213 + 612) &= ~4u;
            }
            ++*((_DWORD *)v213 + 515);
            v1329 = &v213[v1320];
            v1330 = 48;
            v4069 = &v213[v1320];
            v1331 = &v213[v1320];
            v1332 = 6LL;
            do
            {
              *v1331 = 0LL;
              v1330 -= 8;
              ++v1331;
              --v1332;
            }
            while ( v1332 );
            for ( ; v1330; --v1330 )
            {
              *(_BYTE *)v1331 = 0;
              v1331 = (_QWORD *)((char *)v1331 + 1);
            }
            v1333 = (unsigned int)v3833;
            *(_DWORD *)v1329 = v1319;
            v1334 = (char *)HalExtensionList;
            *((_QWORD *)v1329 + 1) = HalExtensionList;
            v1335 = v1334;
            *((_DWORD *)v1329 + 4) = v1333;
            *((_DWORD *)v213 + 522) += v1333;
            v1313 = *((unsigned int *)v213 + 517);
            v1336 = *((_QWORD *)v213 + 259);
            if ( v1334 < &v1334[v1333] )
            {
              v1337 = v1334;
              do
              {
                _mm_prefetch(v1337, 0);
                v1337 += 64;
              }
              while ( v1337 < &v1334[v1333] );
            }
            v1338 = *((_QWORD *)v213 + 259);
            v1339 = (unsigned int)v1333 >> 7;
            if ( (unsigned int)v1333 >> 7 )
            {
              do
              {
                v1340 = 8LL;
                do
                {
                  v1341 = v1335[1] ^ __ROL8__(*v1335 ^ v1338, v1313);
                  v1335 += 2;
                  v1338 = __ROL8__(v1341, v1313);
                  --v1340;
                }
                while ( v1340 );
                v1342 = (__ROL8__(v1336 ^ ((char *)v1335 - v1334), 17) ^ v1336 ^ (unsigned __int64)((char *)v1335 - v1334))
                      * (unsigned __int128)0x7010008004002001uLL;
                v4070 = *((_QWORD *)&v1342 + 1);
                v1313 = (BYTE8(v1342) ^ (unsigned __int8)(v1342 ^ v1313)) & 0x3F;
                if ( !(_DWORD)v1313 )
                  v1313 = 1LL;
                --v1339;
              }
              while ( v1339 );
              LODWORD(v1333) = v3833;
              v1292 = (int)Src;
            }
            v1318 = v1333 & 0x7F;
            if ( (unsigned int)v1318 >= 8 )
            {
              v1343 = (unsigned __int64)(v1333 & 0x7F) >> 3;
              do
              {
                v1338 = __ROL8__(*v1335++ ^ v1338, v1313);
                v1318 = (unsigned int)(v1318 - 8);
                --v1343;
              }
              while ( v1343 );
            }
            if ( (_DWORD)v1318 )
            {
              do
              {
                v1344 = *(unsigned __int8 *)v1335;
                v1335 = (_QWORD *)((char *)v1335 + 1);
                v1338 = __ROL8__(v1344 ^ v1338, v1313);
                v893 = (_DWORD)v1318 == 1;
                v1318 = (unsigned int)(v1318 - 1);
              }
              while ( !v893 );
            }
            for ( i24 = v1338; ; LODWORD(v1338) = i24 ^ v1338 )
            {
              i24 >>= 31;
              if ( !i24 )
                break;
            }
            *((_DWORD *)v1329 + 5) = v1338 & 0x7FFFFFFF;
            v4068 = v4069;
            *((_DWORD *)v213 + 522) += v1333;
          }
          else
          {
            LODWORD(v1333) = v3833;
            v213 = v1295;
            v4063[24] = v1319;
            v1334 = (char *)HalExtensionList;
          }
          if ( (*((_DWORD *)v213 + 612) & 0x40000000) != 0 && (_DWORD)v1333 )
            pg_unknown12(v213, v1334, (unsigned int)v1333, v4068 + 7);
          v4068[6] = 0;
          if ( v3845 )
            v4068[6] |= 1u;
          v1346 = v4063;
          v1347 = v3838;
          v4063[36] = 35;
          v1346[46] = v1346[46] & 0xFFFFFFFE | (v1292 != 0);
          if ( v1346[40] >= 0x94u )
          {
            v1348 = *((_QWORD *)v1346 + 19);
            v1349 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64))v213 + 63))(v1347, v1318, v1313);
            if ( !v1349 )
              return 0;
            v1350 = *(unsigned int *)(v1349 + 80);
            v1346[46] |= 2u;
            v1351 = v1347 + v1350;
            v1352 = *(_QWORD **)(v1348 + 112);
            if ( (unsigned __int64)v1352 >= v1347 && (unsigned __int64)v1352 < v1351 )
            {
              *((_QWORD *)v1346 + 21) = *v1352;
              v1346[46] |= 4u;
            }
            v1353 = *(_QWORD **)(v1348 + 120);
            if ( (unsigned __int64)v1353 >= v1347 && (unsigned __int64)v1353 < v1351 )
            {
              *((_QWORD *)v1346 + 22) = *v1353;
              v1346[46] |= 8u;
            }
          }
          v893 = (*((_DWORD *)v213 + 612) & 0x400000) == 0;
          v4062 = v213;
          v4026 = (unsigned int *)v213;
          if ( !v893 )
          {
            HalExtensionList = (PVOID)(*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, __int64))v213 + 63))(
                                        v1347,
                                        v1318,
                                        v1313);
            if ( !HalExtensionList )
              goto LABEL_1871;
            v1354 = *((_WORD *)HalExtensionList + 3);
            v3841 = (unsigned int)v3834 / 0xCuLL;
            LOWORD(v3844) = v1354;
            if ( !v1354 )
            {
              if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
              {
                v3895[10] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1347, 0LL, 0LL);
              }
LABEL_1874:
              if ( !*((_DWORD *)v213 + 574) )
              {
LABEL_1875:
                *((_QWORD *)v213 + 288) = v213 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v213 + 289) = 0LL;
                *((_QWORD *)v213 + 290) = 271LL;
                *((_QWORD *)v213 + 291) = v1347;
                *((_DWORD *)v213 + 574) = 1;
                __b8(v213, 0LL);
              }
LABEL_1871:
              v1294 = -1073741701;
LABEL_2108:
              if ( (int)(v1294 + 0x80000000) >= 0 && v1294 != -1073741554 )
                return 0;
              goto LABEL_2110;
            }
            v1355 = (unsigned int *)v3839;
            v1356 = v1354;
            v1357 = (char *)HalExtensionList + *((unsigned __int16 *)HalExtensionList + 10) + 24;
            v3848 = (__int64)v1357;
            LODWORD(v3836) = v1354;
            v3840 = 12LL * ((unsigned int)v3834 / 0xC);
            v3843 = v3839 + v3840;
            LODWORD(v3833) = 0;
            for ( i25 = 0; i25 < v1356; LODWORD(v3833) = i25 )
            {
              v1359 = 5LL * i25;
              v1360 = *(_DWORD *)&v1357[40 * i25 + 16];
              v1361 = *(_DWORD *)&v1357[40 * i25 + 12];
              if ( v1360 <= *(_DWORD *)&v1357[40 * i25 + 8] )
                v1360 = *(_DWORD *)&v1357[40 * i25 + 8];
              v3842 = 5LL * i25;
              v1362 = v1361 + v1360;
              LODWORD(v3837) = v1361;
              if ( i25 )
              {
                if ( v1362 < *(_DWORD *)&v1357[40 * i25 - 28] )
                {
                  if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                  {
                    v3895[11] = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1347, 1uLL, 0LL);
                  }
                  goto LABEL_1874;
                }
                i25 = v3833;
              }
              if ( v1355 != (unsigned int *)v3843 )
              {
                while ( 1 )
                {
                  v1363 = v1355[1];
                  if ( *v1355 >= v1362 || v1363 <= v1361 )
                  {
LABEL_1904:
                    i25 = v3833;
                    v1356 = v3836;
                    goto LABEL_1905;
                  }
                  if ( *v1355 < v1361 || v1363 > v1362 )
                    break;
                  v1364 = v1355[2];
                  if ( (v1364 & 1) != 0 || (*(_BYTE *)(v1364 + v1347) & 0x20) != 0 )
                  {
                    v1365 = *(_DWORD *)&v1357[8 * v1359 + 16];
                    v1366 = *(_DWORD *)&v1357[8 * v1359 + 12];
                    if ( v1365 <= *(_DWORD *)&v1357[8 * v1359 + 8] )
                      v1365 = *(_DWORD *)&v1357[8 * v1359 + 8];
                    v1367 = v1366 + v1365;
                    v1368 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v213 + 131))(
                                              v1355,
                                              v3838);
                    v1369 = v1368;
                    if ( *v1368 < v1366 || v1368[1] > v1367 )
                    {
                      v1370 = v3838;
                      if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                      {
                        v3895[13] = -805294751;
                        KeBugCheckEx(
                          __ROR4__(-805306349, 92),
                          0xAuLL,
                          v3838,
                          ((_DWORD)v1368 - (_DWORD)v3838) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v213 + 574) )
                      {
                        *((_QWORD *)v213 + 288) = v213 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v213 + 289) = 0LL;
                        *((_QWORD *)v213 + 290) = 271LL;
                        *((_QWORD *)v213 + 291) = v1370;
                        *((_DWORD *)v213 + 574) = 1;
                        __b8(v213, 0LL);
                      }
                    }
                    v1371 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v213 + 132))(
                                              v1369,
                                              v3838,
                                              v3838 + *v1369);
                    if ( *v1371 >= v1366 && v1371[1] <= v1367 )
                    {
                      v1347 = v3838;
                    }
                    else
                    {
                      v1347 = v3838;
                      if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                      {
                        v3895[12] = -805294751;
                        KeBugCheckEx(
                          __ROR4__(-805306349, 92),
                          0xAuLL,
                          v3838,
                          ((_DWORD)v1371 - (_DWORD)v3838) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v213 + 574) )
                      {
                        *((_QWORD *)v213 + 288) = v213 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v213 + 289) = 0LL;
                        *((_QWORD *)v213 + 290) = 271LL;
                        *((_QWORD *)v213 + 291) = v1347;
                        *((_DWORD *)v213 + 574) = 1;
                        __b8(v213, 0LL);
                      }
                    }
                    v1359 = v3842;
                    v1361 = v3837;
                    v1357 = (char *)v3848;
                  }
                  v1355 += 3;
                  if ( v1355 == (unsigned int *)v3843 )
                    goto LABEL_1904;
                }
                if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                {
                  v3895[14] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1347, 2uLL, 0LL);
                }
                goto LABEL_1874;
              }
LABEL_1905:
              ++i25;
            }
            v1372 = v3841;
            v1373 = HalExtensionList;
            if ( v1355 != (unsigned int *)v3843 )
            {
              if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
              {
                v3895[15] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1347, 3uLL, 0LL);
              }
              if ( *((_DWORD *)v213 + 574) )
                goto LABEL_1871;
              goto LABEL_1875;
            }
            if ( (_DWORD)v3841 )
              v1374 = (v3841 + 6) & 0xFFFFFFF8;
            else
              v1374 = 0;
            v1375 = *((unsigned int *)v213 + 505);
            v1376 = v1374 + 24 * v1356 + v1375 + 48;
            if ( v1376 <= *((_DWORD *)v213 + 647) )
            {
              v1377 = v213;
              HalExtensionList = v213;
              *((_DWORD *)v213 + 505) = v1376;
            }
            else
            {
              HalExtensionList = (PVOID)pg_unknown7(v213, v1376, *((unsigned int *)v213 + 585));
              v1377 = HalExtensionList;
              if ( !HalExtensionList )
              {
                v1294 = -1073741670;
                goto LABEL_2108;
              }
              v1378 = *((_DWORD *)v213 + 612);
              if ( (v1378 & 4) == 0 )
              {
                v1379 = *((_DWORD *)v213 + 505);
                v1380 = *((_QWORD *)v213 + 249);
                v1381 = (v1378 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
                if ( v1379 >= 8 )
                {
                  v1382 = (unsigned __int64)v1379 >> 3;
                  do
                  {
                    *(_QWORD *)v213 = 0LL;
                    v1379 -= 8;
                    v213 += 8;
                    --v1382;
                  }
                  while ( v1382 );
                }
                for ( i26 = 0; v1379; --v1379 )
                  *v213++ = 0;
                v1384 = v1377[585];
                v1377[585] = v1381;
                if ( v1381 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v1377 + 109))(v1380);
                }
                else
                {
                  if ( (v1377[612] & 0x10000000) == 0 )
                    i26 = v1381;
                  if ( i26 )
                    (*((void (__fastcall **)(__int64, _QWORD))v1377 + 69))(v1380 - 8, *(_QWORD *)(v1380 - 8));
                  else
                    (*((void (__fastcall **)(__int64))v1377 + 32))(v1380);
                }
                v1377 = HalExtensionList;
                v1372 = v3841;
                *((_DWORD *)HalExtensionList + 585) = v1384;
              }
              v1377[612] &= ~4u;
              v1356 = v3836;
            }
            v1385 = (char *)v1377 + v1375;
            ++v1377[515];
            v1386 = (_QWORD *)((char *)v1377 + v1375);
            v4071 = (char *)v1377 + v1375;
            v1387 = 48;
            v1388 = 6LL;
            do
            {
              *v1386 = 0LL;
              v1387 -= 8;
              ++v1386;
              --v1388;
            }
            while ( v1388 );
            for ( ; v1387; --v1387 )
            {
              *(_BYTE *)v1386 = 0;
              v1386 = (_QWORD *)((char *)v1386 + 1);
            }
            v1389 = v3839;
            *(_DWORD *)v1385 = 30;
            *((_QWORD *)v1385 + 1) = v1389;
            *((_DWORD *)v1385 + 4) = 0;
            v1390 = *((_QWORD *)v1377 + 259);
            for ( i27 = v1390; ; LODWORD(v1390) = i27 ^ v1390 )
            {
              i27 >>= 31;
              if ( !i27 )
                break;
            }
            v1392 = v3838;
            *((_DWORD *)v1385 + 5) = v1390 & 0x7FFFFFFF;
            v213 = v1377;
            v4072 = v4071;
            v4062 = v1377;
            *((_QWORD *)v4071 + 3) = v1392;
            *((_DWORD *)v4072 + 8) = v1373[20];
            *((_DWORD *)v4072 + 9) = v3834;
            *((_WORD *)v4072 + 20) = (_WORD)v3844;
            *((_WORD *)v4072 + 21) = *((_WORD *)v4072 + 21) & 0xFFFE | ((_DWORD)Src != 0);
            v3841 = (unsigned __int64)(v4072 + 48);
            if ( v1372 )
              v1393 = (unsigned int *)&v4072[(((unsigned int)(v1372 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
            else
              v1393 = (unsigned int *)(v4072 + 48);
            v1394 = *((unsigned __int16 *)v4072 + 20);
            v3842 = (unsigned __int64)v1393;
            v1395 = &v1393[6 * v1394];
            v893 = v1372 == 0;
            v1396 = (unsigned int *)v3839;
            v1397 = 12LL;
            if ( v893 )
              v1397 = v3840;
            v3849 = (__int64)&v1393[6 * v1394];
            v3840 = v3839 + v1397;
            if ( v1356 )
            {
              v1398 = v1393 + 2;
              v1399 = v1356;
              do
              {
                v1400 = 2LL;
                do
                {
                  *(v1398 - 2) = 0;
                  *(v1398 - 1) = 0;
                  *v1398 = 0x80000000;
                  v1398 += 3;
                  --v1400;
                }
                while ( v1400 );
                --v1399;
              }
              while ( v1399 );
            }
            if ( v1393 != v1395 )
            {
              v1401 = (char *)v3848;
              do
              {
                v1402 = 0;
                if ( (*((_DWORD *)v1401 + 9) & 0x2000000) != 0
                  || (v1403 = *(_DWORD *)v1401, *(_DWORD *)v1401 == 1414090313) && *((_DWORD *)v1401 + 1) == 1195525195
                  || v1403 == 1162297680
                  && ((v1404 = *((_WORD *)v1401 + 2), v1404 == 30839) || v1404 == 29303 || v1404 == 30583)
                  || v1403 == 1095914053 && *((_WORD *)v1401 + 2) == 16724 )
                {
                  v1402 = 1;
                }
                else
                {
                  v1405 = (char *)*((_QWORD *)v1377 + 294);
                  v1406 = (__int64 *)*((_QWORD *)v1377 + 295);
                  v1407 = v1401 - v1405;
                  v1408 = (char *)*((_QWORD *)v1377 + 296);
                  v1409 = (char *)*((_QWORD *)v1377 + 297);
                  v1410 = 7;
                  while ( 1 )
                  {
                    v1411 = (unsigned __int8)v1405[v1407];
                    v1412 = (unsigned __int8)*v1405++;
                    if ( v1411 != v1412 )
                      break;
                    if ( !--v1410 )
                    {
LABEL_1983:
                      v1402 = 1;
                      goto LABEL_1984;
                    }
                  }
                  v1413 = 8;
                  v1414 = (__int64 *)v1401;
                  while ( 1 )
                  {
                    v1415 = *v1414++;
                    v1416 = *v1406++;
                    if ( v1415 != v1416 )
                      break;
                    v1413 -= 8;
                    if ( v1413 < 8 )
                    {
                      if ( !v1413 )
                        goto LABEL_1983;
                      while ( 1 )
                      {
                        v1417 = *(unsigned __int8 *)v1414;
                        v1414 = (__int64 *)((char *)v1414 + 1);
                        v1418 = *(unsigned __int8 *)v1406;
                        v1406 = (__int64 *)((char *)v1406 + 1);
                        if ( v1417 != v1418 )
                          goto LABEL_1976;
                        if ( !--v1413 )
                          goto LABEL_1983;
                      }
                    }
                  }
LABEL_1976:
                  v1419 = 4;
                  v1420 = v1401 - v1408;
                  while ( 1 )
                  {
                    v1421 = (unsigned __int8)v1408[v1420];
                    v1422 = (unsigned __int8)*v1408++;
                    if ( v1421 != v1422 )
                      break;
                    if ( !--v1419 )
                      goto LABEL_1983;
                  }
                  v1423 = 6;
                  v1424 = v1401 - v1409;
                  while ( 1 )
                  {
                    v1425 = (unsigned __int8)v1409[v1424];
                    v1426 = (unsigned __int8)*v1409++;
                    if ( v1425 != v1426 )
                      break;
                    if ( !--v1423 )
                      goto LABEL_1983;
                  }
LABEL_1984:
                  v1396 = (unsigned int *)v3839;
                  v1393 = (unsigned int *)v3842;
                  v1377 = HalExtensionList;
                }
                v1427 = *((_DWORD *)v1401 + 9);
                if ( v1427 < 0 )
                  v1402 = 1;
                LODWORD(Src) = v1402;
                if ( v1402 && *(_DWORD *)v1401 == 1414090313 && *((_DWORD *)v1401 + 1) == 1195525195 )
                {
                  if ( (v1377[613] & 0x2000) != 0 )
                    v1402 = 0;
                  LODWORD(Src) = v1402;
                }
                v1428 = v3838;
                if ( (v1377[613] & 0x4000) != 0
                  && (v1427 & 0x20000000) != 0
                  && (v3838 == *((_QWORD *)v1377 + 189) || v3838 == *((_QWORD *)v1377 + 190)) )
                {
                  v1402 = 1;
                  LODWORD(Src) = 1;
                }
                v1429 = *((_DWORD *)v1401 + 4);
                v1430 = *((_DWORD *)v1401 + 3);
                v1431 = v3843;
                if ( v1429 <= *((_DWORD *)v1401 + 2) )
                  v1429 = *((_DWORD *)v1401 + 2);
                v1432 = v1430 + v1429;
                LODWORD(v3834) = *((_DWORD *)v1401 + 3);
                LODWORD(v3833) = v1432;
                if ( v1396 == (unsigned int *)v3843 )
                {
                  v1433 = 0;
                  v1434 = 0;
                }
                else
                {
                  v1433 = *v1396;
                  v1434 = v1396[1];
                }
                LODWORD(v3837) = v1434;
                v1435 = v1430;
                LODWORD(v3836) = v1433;
                if ( v1396 != (unsigned int *)v3843 && v1433 > v1430 && v1434 <= v1432 && !v1402 )
                {
                  *v1393 = v1430;
                  v1393[1] = v1433;
                  v1435 = v1433;
                  v1436 = *v1393;
                  v1437 = v1433 - v1436;
                  v1438 = (_QWORD *)(v1428 + v1436);
                  v1439 = v1428 + v1436 + v1433 - (unsigned int)v1436;
                  for ( i28 = 0; i28 < 6; ++i28 )
                  {
                    v1441 = v4341[i28];
                    if ( (unsigned __int64)v1438 < v1441 + (unsigned int)v4313[i28] && v1439 > v1441 )
                    {
                      v1432 = v3833;
                      v1431 = v3843;
                      v1396 = (unsigned int *)v3839;
                      goto LABEL_2031;
                    }
                  }
                  v1377[522] += v1437;
                  v1442 = v1438;
                  v1443 = (const char *)v1438;
                  v1444 = v1377[517];
                  v1445 = *((_QWORD *)HalExtensionList + 259);
                  if ( (unsigned __int64)v1438 < v1439 )
                  {
                    do
                    {
                      _mm_prefetch(v1443, 0);
                      v1443 += 64;
                    }
                    while ( (unsigned __int64)v1443 < v1439 );
                  }
                  v1446 = *((_QWORD *)HalExtensionList + 259);
                  v1447 = v1437 >> 7;
                  if ( v1437 >> 7 )
                  {
                    do
                    {
                      v1448 = 8LL;
                      do
                      {
                        v1449 = v1446 ^ *v1442;
                        v1450 = v1442[1];
                        v1442 += 2;
                        v1446 = __ROL8__(__ROL8__(v1449, v1444) ^ v1450, v1444);
                        --v1448;
                      }
                      while ( v1448 );
                      v1451 = __ROL8__(v1445 ^ ((char *)v1442 - (char *)v1438), 17) ^ v1445 ^ ((char *)v1442
                                                                                             - (char *)v1438);
                      v4073 = (v1451 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v1444 = ((unsigned __int8)v4073 ^ (unsigned __int8)(v1451 ^ v1444)) & 0x3F;
                      if ( !v1444 )
                        LOBYTE(v1444) = 1;
                      --v1447;
                    }
                    while ( v1447 );
                    v1433 = v3836;
                    v1434 = v3837;
                  }
                  v1452 = v1437 & 0x7F;
                  if ( v1452 >= 8 )
                  {
                    v1453 = (unsigned __int64)v1452 >> 3;
                    do
                    {
                      v1446 = __ROL8__(*v1442++ ^ v1446, v1444);
                      v1452 -= 8;
                      --v1453;
                    }
                    while ( v1453 );
                  }
                  for ( ; v1452; --v1452 )
                  {
                    v1454 = *(unsigned __int8 *)v1442;
                    v1442 = (_QWORD *)((char *)v1442 + 1);
                    v1446 = __ROL8__(v1454 ^ v1446, v1444);
                  }
                  for ( i29 = v1446 >> 31; i29; i29 >>= 31 )
                    LODWORD(v1446) = i29 ^ v1446;
                  v1432 = v3833;
                  v1430 = v3834;
                  v1377 = HalExtensionList;
                  v1396 = (unsigned int *)v3839;
                  *(_DWORD *)(v3842 + 8) = v1446 & 0x7FFFFFFF;
                  v1431 = v3843;
                }
LABEL_2031:
                if ( v1433 < v1430 )
                {
                  v1456 = (int)Src;
                }
                else
                {
                  v1160 = v1434 <= v1432;
                  v1456 = (int)Src;
                  if ( v1160 && v1396 != (unsigned int *)v1431 )
                  {
                    v1457 = (unsigned int *)v3840;
                    v1458 = *(_DWORD *)(v3840 + 4);
                    LODWORD(v3836) = v1458;
                    if ( v1458 <= v1432 )
                    {
                      v1459 = (_BYTE *)v3841;
                      while ( v1457 != (unsigned int *)v1431 )
                      {
                        if ( v1456 )
                        {
                          v1460 = 0x80;
                        }
                        else
                        {
                          v1461 = v1396[1];
                          v1435 = *v1457;
                          if ( *v1457 < (unsigned int)v1461 )
                          {
                            if ( (v1377[612] & 0x200000) == 0 )
                            {
                              v3895[16] = -805294751;
                              KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v3838, 6uLL, 0LL);
                            }
                            if ( !v1377[574] )
                            {
                              v1462 = v3838;
                              *((_QWORD *)v1377 + 288) = v1377 - 0x1717F029DB8DD2C6LL;
                              *((_QWORD *)v1377 + 289) = 0LL;
                              *((_QWORD *)v1377 + 290) = 271LL;
                              *((_QWORD *)v1377 + 291) = v1462;
                              v1377[574] = 1;
                              __b8(v1377, 0LL);
                            }
                          }
                          v1463 = (_QWORD *)(v3838 + v1461);
                          v1464 = v1435 - v1461;
                          v1465 = v3838 + v1461 + v1435 - (unsigned int)v1461;
                          for ( i30 = 0; i30 < 6; ++i30 )
                          {
                            v1467 = v4341[i30];
                            if ( (unsigned __int64)v1463 < v1467 + (unsigned int)v4313[i30] && v1465 > v1467 )
                              goto LABEL_2067;
                          }
                          if ( v1464 < 4 )
                          {
LABEL_2067:
                            v1460 = 0x80;
                            goto LABEL_2068;
                          }
                          v1468 = HalExtensionList;
                          v1469 = v1463;
                          v1470 = (const char *)v1463;
                          *((_DWORD *)HalExtensionList + 522) += v1464;
                          v1471 = v1468[517];
                          v1472 = *((_QWORD *)v1468 + 259);
                          if ( (unsigned __int64)v1463 < v1465 )
                          {
                            do
                            {
                              _mm_prefetch(v1470, 0);
                              v1470 += 64;
                            }
                            while ( (unsigned __int64)v1470 < v1465 );
                          }
                          v1473 = v1472;
                          v1474 = v1464 >> 7;
                          if ( v1464 >> 7 )
                          {
                            do
                            {
                              v1475 = 8LL;
                              do
                              {
                                v1476 = v1473 ^ *v1469;
                                v1477 = v1469[1];
                                v1469 += 2;
                                v1473 = __ROL8__(__ROL8__(v1476, v1471) ^ v1477, v1471);
                                --v1475;
                              }
                              while ( v1475 );
                              v1478 = __ROL8__(v1472 ^ ((char *)v1469 - (char *)v1463), 17) ^ v1472 ^ ((char *)v1469 - (char *)v1463);
                              v4074 = (v1478 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                              v1471 = ((unsigned __int8)v4074 ^ (unsigned __int8)(v1478 ^ v1471)) & 0x3F;
                              if ( !v1471 )
                                LOBYTE(v1471) = 1;
                              --v1474;
                            }
                            while ( v1474 );
                            v1458 = v3836;
                            v1456 = (int)Src;
                          }
                          v1479 = v1464 & 0x7F;
                          if ( v1479 >= 8 )
                          {
                            v1480 = (unsigned __int64)v1479 >> 3;
                            do
                            {
                              v1473 = __ROL8__(*v1469++ ^ v1473, v1471);
                              v1479 -= 8;
                              --v1480;
                            }
                            while ( v1480 );
                          }
                          for ( ; v1479; --v1479 )
                          {
                            v1481 = *(unsigned __int8 *)v1469;
                            v1469 = (_QWORD *)((char *)v1469 + 1);
                            v1473 = __ROL8__(v1481 ^ v1473, v1471);
                          }
                          for ( i31 = v1473 >> 7; i31; i31 >>= 7 )
                            LOBYTE(v1473) = i31 ^ v1473;
                          v1457 = (unsigned int *)v3840;
                          v1460 = v1473 & 0x7F;
LABEL_2068:
                          v1396 = (unsigned int *)v3839;
                          v1432 = v3833;
                          v1459 = (_BYTE *)v3841;
                        }
                        *v1459 = v1460;
                        v1396 += 3;
                        v1457 += 3;
                        v1431 = v3843;
                        v1459 = (_BYTE *)(v3841 + 1);
                        v3839 = (ULONG_PTR)v1396;
                        ++v3841;
                        v3840 = (ULONG_PTR)v1457;
                        if ( v1457 != (unsigned int *)v3843 )
                        {
                          v1458 = v1457[1];
                          LODWORD(v3836) = v1458;
                        }
                        if ( v1458 > v1432 )
                          break;
                        v1377 = HalExtensionList;
                      }
                    }
                  }
                }
                v1483 = (unsigned int *)v3842;
                if ( !v1456 && v1435 != v1432 )
                {
                  v1484 = v3838;
                  *(_DWORD *)(v3842 + 12) = v1435;
                  v1483[4] = v1432;
                  v1485 = v1483[3];
                  v1486 = v1432 - v1485;
                  v1487 = (_QWORD *)(v1485 + v1484);
                  v1488 = (unsigned __int64)v1487 + v1432 - (unsigned int)v1485;
                  v1489 = 0;
                  while ( 1 )
                  {
                    v1490 = v4341[v1489];
                    if ( (unsigned __int64)v1487 < v1490 + (unsigned int)v4313[v1489] && v1488 > v1490 )
                      break;
                    if ( (unsigned int)++v1489 >= 6 )
                    {
                      v1491 = HalExtensionList;
                      v1492 = v1487;
                      *((_DWORD *)HalExtensionList + 522) += v1486;
                      v1493 = v1491[517];
                      v1494 = *((_QWORD *)v1491 + 259);
                      v1495 = (const char *)v1487;
                      if ( (unsigned __int64)v1487 < v1488 )
                      {
                        do
                        {
                          _mm_prefetch(v1495, 0);
                          v1495 += 64;
                        }
                        while ( (unsigned __int64)v1495 < v1488 );
                      }
                      v1496 = v1494;
                      for ( i32 = v1486 >> 7; i32; --i32 )
                      {
                        v1498 = 8LL;
                        do
                        {
                          v1499 = v1496 ^ *v1492;
                          v1500 = v1492[1];
                          v1492 += 2;
                          v1496 = __ROL8__(__ROL8__(v1499, v1493) ^ v1500, v1493);
                          --v1498;
                        }
                        while ( v1498 );
                        v1501 = (__ROL8__(v1494 ^ ((char *)v1492 - (char *)v1487), 17) ^ v1494 ^ ((char *)v1492
                                                                                                - (char *)v1487))
                              * (unsigned __int128)0x7010008004002001uLL;
                        v4075 = *((_QWORD *)&v1501 + 1);
                        v1493 = (BYTE8(v1501) ^ (unsigned __int8)(v1501 ^ v1493)) & 0x3F;
                        if ( !v1493 )
                          LOBYTE(v1493) = 1;
                      }
                      v1502 = v1486 & 0x7F;
                      if ( v1502 >= 8 )
                      {
                        v1503 = (unsigned __int64)v1502 >> 3;
                        do
                        {
                          v1496 = __ROL8__(*v1492++ ^ v1496, v1493);
                          v1502 -= 8;
                          --v1503;
                        }
                        while ( v1503 );
                      }
                      for ( ; v1502; --v1502 )
                      {
                        v1504 = *(unsigned __int8 *)v1492;
                        v1492 = (_QWORD *)((char *)v1492 + 1);
                        v1496 = __ROL8__(v1504 ^ v1496, v1493);
                      }
                      for ( i33 = v1496; ; LODWORD(v1496) = i33 ^ v1496 )
                      {
                        i33 >>= 31;
                        if ( !i33 )
                          break;
                      }
                      v1483 = (unsigned int *)v3842;
                      *(_DWORD *)(v3842 + 20) = v1496 & 0x7FFFFFFF;
                      break;
                    }
                  }
                  v1396 = (unsigned int *)v3839;
                }
                if ( v1396 != (unsigned int *)v3843 && *v1396 >= (unsigned int)v3834 && v1396[1] <= (unsigned int)v3833 )
                {
                  v1506 = v3840;
                  if ( v3840 != v3843 )
                  {
                    v1507 = v3841;
                    *(_BYTE *)v3841 = 0x80;
                    v3841 = v1507 + 1;
                    v3840 = v1506 + 12;
                  }
                  v1396 += 3;
                  v3839 = (ULONG_PTR)v1396;
                }
                v1393 = v1483 + 6;
                v1377 = HalExtensionList;
                v1401 = (char *)(v3848 + 40);
                v3842 = (unsigned __int64)v1393;
                v3848 += 40LL;
              }
              while ( v1393 != (unsigned int *)v3849 );
              v213 = v4062;
            }
          }
          v4026 = (unsigned int *)v213;
          v1246 = 0;
LABEL_2107:
          v1294 = v1246;
          goto LABEL_2108;
        }
        v1290[8] |= 2u;
        goto LABEL_1788;
      }
LABEL_2110:
      v877 = v3846 + 1;
      LODWORD(v3846) = v877;
      if ( v877 >= 0x11 )
        break;
      v878 = (int)v3851;
    }
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    HalExtensionList = (PVOID)KiGetHalExtensionList();
    v1508 = *(_QWORD *)HalExtensionList;
    v1509 = *(_QWORD *)HalExtensionList == (_QWORD)HalExtensionList;
    while ( 2 )
    {
      v3839 = v1508;
      if ( !v1509 )
      {
        HalExtensionModuleFromLinks = KiGetHalExtensionModuleFromLinks(v1508);
        if ( !HalExtensionModuleFromLinks )
          goto LABEL_2534;
        v1511 = *((_QWORD *)v213 + 234);
        v4076 = v213;
        v1512 = *(_QWORD *)(HalExtensionModuleFromLinks + v1511);
        v1513 = (__int64 (__fastcall *)(ULONG_PTR, char *))*((_QWORD *)v213 + 64);
        v3838 = v1512;
        v1514 = v1513(v1512, v4314);
        v1515 = v4315;
        v1516 = v4316;
        v3841 = v1514;
        v3896 = v4316;
        v3840 = v4315;
        if ( !v4315 )
          goto LABEL_2536;
        v4265 = 0LL;
        v1517 = 4;
        v1518 = &v4266;
        do
        {
          *(_BYTE *)v1518 = 0;
          v1518 = (int *)((char *)v1518 + 1);
          --v1517;
        }
        while ( v1517 );
        v1519 = 0;
        if ( *((_DWORD *)v213 + 515) )
        {
          v1520 = v4266;
          v1521 = HIDWORD(v4265);
          v1522 = v4265;
          while ( 1 )
          {
            v1523 = v213;
            if ( *((_QWORD *)v213 + 335) )
              v1523 = (_BYTE *)*((_QWORD *)v213 + 335);
            v1524 = 0;
            v1525 = (int *)&v1523[*((unsigned int *)v1523 + 514)];
            if ( v1522 && v1521 <= v1519 )
            {
              v1524 = v1521;
              v1525 = (int *)&v1523[v1520];
            }
            if ( v1524 != v1519 )
              break;
LABEL_2152:
            HIDWORD(v4265) = v1524;
            v1520 = (_DWORD)v1525 - (_DWORD)v1523;
            v1522 = 1;
            v4266 = (_DWORD)v1525 - (_DWORD)v1523;
            v1521 = v1524;
            LODWORD(v4265) = 1;
            v1533 = *v1525;
            if ( (unsigned int)v1533 <= 0x2B )
            {
              v1534 = 0x80000001002LL;
              if ( _bittest64(&v1534, v1533) )
              {
                if ( *((_QWORD *)v1525 + 1) == v3841 && v1525[4] == v1516 )
                  goto LABEL_2160;
              }
            }
            if ( (unsigned int)(v1533 - 33) <= 1 && *((_QWORD *)v1525 + 4) == v1515 )
              goto LABEL_2160;
            if ( ++v1519 >= *((_DWORD *)v213 + 515) )
              goto LABEL_2159;
          }
          v1526 = v1519 - v1524;
          v1524 = v1519;
          while ( 2 )
          {
            v1527 = *v1525;
            if ( *v1525 > 12 )
            {
              if ( v1527 == 28 )
              {
                v1532 = *((unsigned __int16 *)v1525 + 20);
                goto LABEL_2149;
              }
              if ( v1527 == 30 )
              {
                v1531 = (((v1525[9] != 0 ? v1525[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                      + 24 * (*((unsigned __int16 *)v1525 + 20) + 2);
                goto LABEL_2150;
              }
              if ( v1527 <= 32 )
                goto LABEL_2146;
              if ( v1527 <= 34 )
              {
                v1531 = 20
                      * (unsigned int)(((v1525[8] & 0xFFF) + (unsigned __int64)(unsigned int)v1525[10] + 4095) >> 12)
                      + 48;
                goto LABEL_2150;
              }
              if ( v1527 != 43 )
                goto LABEL_2146;
            }
            else if ( v1527 != 12 )
            {
              v1528 = v1527 - 1;
              if ( v1528 )
              {
                v1529 = v1528 - 6;
                if ( !v1529 )
                {
                  v1531 = (unsigned int)(24 * (v1525[6] + 2));
                  goto LABEL_2150;
                }
                v1530 = v1529 - 1;
                if ( v1530 )
                {
                  if ( v1530 == 2 )
                  {
                    v1531 = (unsigned int)(16 * (v1525[7] + 3));
                    goto LABEL_2150;
                  }
LABEL_2146:
                  v1531 = 48LL;
LABEL_2150:
                  v1525 = (int *)((char *)v1525 + v1531);
                  if ( !--v1526 )
                  {
                    v1512 = v3838;
                    v1515 = v3840;
                    goto LABEL_2152;
                  }
                  continue;
                }
                v1532 = *((unsigned __int16 *)v1525 + 16);
LABEL_2149:
                v1531 = (v1532 + 55) & 0xFFFFFFF8;
                goto LABEL_2150;
              }
            }
            break;
          }
          v1531 = 4 * (v1525[4] / 0xCu) + 48;
          goto LABEL_2150;
        }
LABEL_2159:
        v1525 = 0LL;
LABEL_2160:
        v4077 = v1525;
        if ( v1525 )
          goto LABEL_2534;
        LODWORD(Src) = (*((__int64 (__fastcall **)(ULONG_PTR))v213 + 85))(v1512);
        v893 = (*((_DWORD *)v213 + 612) & 0x40000000) == 0;
        LODWORD(v3834) = v3896;
        if ( !v893 )
        {
          v1536 = pg_unknown13(&v4026, v1515, 0LL);
          v213 = v4026;
          goto LABEL_2531;
        }
        v4347 = 0LL;
        v4317[4] = 0;
        LOBYTE(v1535) = 1;
        v1537 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, int *))v213 + 62))(v1515, v1535, 0LL, &v3896);
        v1538 = v1537;
        v4345[1] = v1537;
        LOBYTE(v1538) = 1;
        v3896 &= -(v1537 != 0);
        v1539 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, int *))*((_QWORD *)v213 + 62);
        v4317[1] = v3896;
        v1540 = v1539(v1515, v1538, 12LL, &v3896);
        v1541 = v1540;
        v3838 = v1540;
        v4345[2] = v1540;
        LOBYTE(v1541) = 1;
        v3896 &= -(v1540 != 0);
        v1542 = (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64, int *))*((_QWORD *)v213 + 62);
        LODWORD(v3833) = v3896;
        v4317[2] = v3896;
        v4346 = v1542(v1515, v1541, 10LL, &v3896);
        v3896 &= -(v4346 != 0);
        v1543 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v213 + 63);
        v4317[3] = v3896;
        v1544 = v1543(v1515);
        if ( !v1544 )
        {
LABEL_2536:
          v1585 = -1073741701;
          goto LABEL_2539;
        }
        v1545 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v213 + 147))(v1515, &v4078);
        v1546 = *((unsigned int *)v213 + 505);
        v1547 = *((unsigned int *)v213 + 585);
        v4348 = v1545;
        v4317[5] = v4078;
        v4317[0] = *(_DWORD *)(v1544 + 84);
        v4345[0] = v1515;
        v1548 = v1546 + 288;
        v1549 = (_DWORD)Src != 0 ? 0xB : 0;
        LODWORD(v3836) = v1549;
        if ( (unsigned int)(v1546 + 288) <= *((_DWORD *)v213 + 647) )
        {
          v1550 = (__int64)v213;
          v3843 = (ULONG_PTR)v213;
          *((_DWORD *)v213 + 505) = v1548;
        }
        else
        {
          v1550 = pg_unknown7(v213, v1548, v1547);
          v3843 = v1550;
          v1551 = 0LL;
          if ( !v1550 )
            goto LABEL_2535;
          v1552 = *((_DWORD *)v213 + 612);
          if ( (v1552 & 4) == 0 )
          {
            v1553 = *((_DWORD *)v213 + 505);
            v1554 = *((_QWORD *)v213 + 249);
            v1555 = (v1552 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
            if ( v1553 >= 8 )
            {
              v1556 = (unsigned __int64)v1553 >> 3;
              do
              {
                *(_QWORD *)v213 = 0LL;
                v1553 -= 8;
                v213 += 8;
                --v1556;
              }
              while ( v1556 );
            }
            for ( i34 = 0; v1553; --v1553 )
              *v213++ = 0;
            v1558 = *(_DWORD *)(v1550 + 2340);
            *(_DWORD *)(v1550 + 2340) = v1555;
            if ( v1555 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v1550 + 872))(v1554);
            }
            else
            {
              if ( (*(_DWORD *)(v1550 + 2448) & 0x10000000) == 0 )
                i34 = v1555;
              if ( i34 )
                (*(void (__fastcall **)(__int64, _QWORD))(v1550 + 552))(v1554 - 8, *(_QWORD *)(v1554 - 8));
              else
                (*(void (__fastcall **)(__int64))(v1550 + 256))(v1554);
            }
            *(_DWORD *)(v1550 + 2340) = v1558;
            v1549 = v3836;
          }
          *(_DWORD *)(v1550 + 2448) &= ~4u;
        }
        v1559 = v1550 + v1546;
        v1560 = v4345;
        v1561 = 6LL;
        v3848 = (__int64)v4345;
        *(_DWORD *)(v1550 + 2060) += 6;
        v1562 = v4317;
        v4079 = v1559;
        v4077 = (_DWORD *)v1559;
        v3842 = 6LL;
        do
        {
          v1563 = *v1562;
          v1564 = 48;
          v1565 = (_QWORD *)*v1560;
          v1566 = (_QWORD *)v1559;
          do
          {
            *v1566 = 0LL;
            v1564 -= 8;
            ++v1566;
            --v1561;
          }
          while ( v1561 );
          for ( ; v1564; --v1564 )
          {
            *(_BYTE *)v1566 = 0;
            v1566 = (_QWORD *)((char *)v1566 + 1);
          }
          *(_DWORD *)v1559 = v1549;
          *(_QWORD *)(v1559 + 8) = v1565;
          v1567 = v1565;
          *(_DWORD *)(v1559 + 16) = v1563;
          v1568 = (const char *)v1565;
          *(_DWORD *)(v1550 + 2088) += v1563;
          v1569 = *(_DWORD *)(v1550 + 2068);
          v1570 = *(_QWORD *)(v1550 + 2072);
          if ( v1565 < (_QWORD *)((char *)v1565 + v1563) )
          {
            do
            {
              _mm_prefetch(v1568, 0);
              v1568 += 64;
            }
            while ( v1568 < (const char *)v1565 + v1563 );
          }
          v1571 = *(_QWORD *)(v1550 + 2072);
          v1572 = (unsigned int)v1563 >> 7;
          if ( (unsigned int)v1563 >> 7 )
          {
            do
            {
              v1573 = 8LL;
              do
              {
                v1574 = v1571 ^ *v1567;
                v1575 = v1567[1];
                v1567 += 2;
                v1571 = __ROL8__(__ROL8__(v1574, v1569) ^ v1575, v1569);
                --v1573;
              }
              while ( v1573 );
              v1576 = __ROL8__(v1570 ^ ((char *)v1567 - (char *)v1565), 17) ^ v1570 ^ ((char *)v1567 - (char *)v1565);
              v4080 = (v1576 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v1569 = ((unsigned __int8)v4080 ^ (unsigned __int8)(v1576 ^ v1569)) & 0x3F;
              if ( !v1569 )
                LOBYTE(v1569) = 1;
              --v1572;
            }
            while ( v1572 );
            v1550 = v3843;
            v1560 = (_QWORD *)v3848;
          }
          v1577 = v1563 & 0x7F;
          if ( v1577 >= 8 )
          {
            v1578 = (unsigned __int64)(v1563 & 0x7F) >> 3;
            do
            {
              v1571 = __ROL8__(*v1567++ ^ v1571, v1569);
              v1577 -= 8;
              --v1578;
            }
            while ( v1578 );
          }
          for ( ; v1577; --v1577 )
          {
            v1579 = *(unsigned __int8 *)v1567;
            v1567 = (_QWORD *)((char *)v1567 + 1);
            v1571 = __ROL8__(v1579 ^ v1571, v1569);
          }
          for ( i35 = v1571 >> 31; i35; i35 >>= 31 )
            LODWORD(v1571) = i35 ^ v1571;
          *(_DWORD *)(v1559 + 20) = v1571 & 0x7FFFFFFF;
          v1561 = 6LL;
          *(_DWORD *)(v1550 + 2088) += v1563;
          ++v1560;
          v1549 = v3836;
          v1559 = v4079 + 48;
          ++v1562;
          v4079 += 48LL;
          v893 = v3842-- == 1;
          v3848 = (__int64)v1560;
        }
        while ( !v893 );
        v1581 = v4077;
        v1582 = v3840;
        v1583 = (int)Src;
        *v4077 = 44;
        *((_QWORD *)v1581 + 3) = v1582;
        v1584 = *(_DWORD *)(v1550 + 2448);
        if ( (v1584 & 0x10000000) != 0 || (v1584 & 0x200000) != 0 )
        {
LABEL_2211:
          if ( !v1583 )
            goto LABEL_2213;
        }
        else if ( !v1583 )
        {
          if ( (*(_DWORD *)(v1550 + 2452) & 0x8000) != 0 )
          {
            v1581[8] |= 1u;
            if ( (unsigned int)pg_unknown9(v1550, v1582) )
            {
              v1581[8] |= 4u;
              goto LABEL_2211;
            }
          }
LABEL_2213:
          v4076 = (_BYTE *)v1550;
          v213 = (_BYTE *)v1550;
          v4026 = (unsigned int *)v1550;
          v1585 = pg_unknown10((unsigned int)&v4076, v3841, v3834, v1582, v1583, 0, (__int64)v3898, (__int64)&v3897);
          if ( v1585 < 0 )
            goto LABEL_2532;
          v213 = v4076;
          v1586 = &v4076[-v1550];
          v1587 = v3897 - v3898[0];
          v1588 = (const char *)(v1582 + v3898[0]);
          v4077 = (_DWORD *)((char *)v4077 + (_QWORD)v1586);
          v4026 = (unsigned int *)v4076;
          v1589 = v4077 + 48;
          v1590 = 48;
          v1591 = v4077 + 48;
          v1592 = 6LL;
          do
          {
            *v1591 = 0LL;
            v1590 -= 8;
            ++v1591;
            --v1592;
          }
          while ( v1592 );
          for ( ; v1590; --v1590 )
          {
            *(_BYTE *)v1591 = 0;
            v1591 = (_QWORD *)((char *)v1591 + 1);
          }
          v1593 = (unsigned __int64)v1588;
          *v1589 = v3836;
          v1594 = v1588;
          *((_QWORD *)v1589 + 1) = v1588;
          v1589[4] = v1587;
          *((_DWORD *)v213 + 522) += v1587;
          v1595 = *((unsigned int *)v213 + 517);
          v1596 = *((_QWORD *)v213 + 259);
          v1597 = (unsigned __int64)&v1588[v1587];
          if ( (unsigned __int64)v1588 < v1597 )
          {
            do
            {
              _mm_prefetch(v1594, 0);
              v1594 += 64;
            }
            while ( (unsigned __int64)v1594 < v1597 );
          }
          v1598 = *((_QWORD *)v213 + 259);
          v1599 = v1587 >> 7;
          if ( v1587 >> 7 )
          {
            do
            {
              v1600 = 8LL;
              do
              {
                v1601 = *(_QWORD *)(v1593 + 8) ^ __ROL8__(*(_QWORD *)v1593 ^ v1598, v1595);
                v1593 += 16LL;
                v1598 = __ROL8__(v1601, v1595);
                --v1600;
              }
              while ( v1600 );
              v1602 = (__ROL8__(v1596 ^ (v1593 - (_QWORD)v1588), 17) ^ v1596 ^ (v1593 - (unsigned __int64)v1588))
                    * (unsigned __int128)0x7010008004002001uLL;
              v4081 = *((_QWORD *)&v1602 + 1);
              v1595 = (BYTE8(v1602) ^ (unsigned __int8)(v1602 ^ v1595)) & 0x3F;
              if ( !(_DWORD)v1595 )
                v1595 = 1LL;
              --v1599;
            }
            while ( v1599 );
            v1583 = (int)Src;
          }
          v1603 = v1587 & 0x7F;
          if ( v1603 >= 8 )
          {
            v1604 = (unsigned __int64)v1603 >> 3;
            do
            {
              v1598 = __ROL8__(*(_QWORD *)v1593 ^ v1598, v1595);
              v1593 += 8LL;
              v1603 -= 8;
              --v1604;
            }
            while ( v1604 );
          }
          for ( ; v1603; --v1603 )
          {
            v1605 = *(unsigned __int8 *)v1593++;
            v1598 = __ROL8__(v1605 ^ v1598, v1595);
          }
          v1606 = v1598 >> 31;
          v1607 = 0;
          while ( v1606 )
          {
            LODWORD(v1598) = v1606 ^ v1598;
            v1606 >>= 31;
          }
          v1589[5] = v1598 & 0x7FFFFFFF;
          v1608 = (unsigned __int64)v4077;
          v4077[60] = 48;
          if ( *(_DWORD *)(v1608 + 256) )
          {
            LOBYTE(v1607) = v1583 != 0;
            *(_DWORD *)(v1608 + 264) = *(_DWORD *)(v1608 + 264) & 0xFFFFFFFE | v1607;
          }
          v4026 = (unsigned int *)v213;
          v4082 = v4077 + 24;
          v1609 = (v1583 != 0) + 13;
          if ( v4077 == (_DWORD *)-96LL )
          {
            v1610 = *((unsigned int *)v213 + 505);
            v1611 = v1610 + 48;
            if ( (unsigned int)(v1610 + 48) <= *((_DWORD *)v213 + 647) )
            {
              v1612 = (__int64)v213;
              *((_DWORD *)v213 + 505) = v1611;
            }
            else
            {
              v1612 = pg_unknown7(v213, v1611, *((unsigned int *)v213 + 585));
              v1551 = 0LL;
              if ( !v1612 )
                goto LABEL_2535;
              v1613 = *((_DWORD *)v213 + 612);
              if ( (v1613 & 4) == 0 )
              {
                v1614 = *((_DWORD *)v213 + 505);
                v1615 = *((_QWORD *)v213 + 249);
                v1616 = (v1613 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
                if ( v1614 >= 8 )
                {
                  v1617 = (unsigned __int64)v1614 >> 3;
                  do
                  {
                    *(_QWORD *)v213 = 0LL;
                    v1614 -= 8;
                    v213 += 8;
                    --v1617;
                  }
                  while ( v1617 );
                }
                for ( i36 = 0; v1614; --v1614 )
                  *v213++ = 0;
                v1619 = *(_DWORD *)(v1612 + 2340);
                *(_DWORD *)(v1612 + 2340) = v1616;
                if ( v1616 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v1612 + 872))(v1615);
                }
                else
                {
                  if ( (*(_DWORD *)(v1612 + 2448) & 0x10000000) == 0 )
                    i36 = v1616;
                  if ( i36 )
                    (*(void (__fastcall **)(__int64, _QWORD))(v1612 + 552))(v1615 - 8, *(_QWORD *)(v1615 - 8));
                  else
                    (*(void (__fastcall **)(__int64))(v1612 + 256))(v1615);
                }
                *(_DWORD *)(v1612 + 2340) = v1619;
              }
              *(_DWORD *)(v1612 + 2448) &= ~4u;
            }
            v1620 = v1612 + v1610;
            ++*(_DWORD *)(v1612 + 2060);
            v1621 = (_QWORD *)(v1612 + v1610);
            v4083 = (_DWORD *)(v1612 + v1610);
            v1622 = 48;
            v1623 = 6LL;
            do
            {
              *v1621 = 0LL;
              v1622 -= 8;
              ++v1621;
              --v1623;
            }
            while ( v1623 );
            for ( ; v1622; --v1622 )
            {
              *(_BYTE *)v1621 = 0;
              v1621 = (_QWORD *)((char *)v1621 + 1);
            }
            v1624 = v3838;
            *(_DWORD *)v1620 = v1609;
            v1625 = (_QWORD *)v1624;
            v1626 = (unsigned int)v3833;
            *(_QWORD *)(v1620 + 8) = v1624;
            *(_DWORD *)(v1620 + 16) = v1626;
            *(_DWORD *)(v1612 + 2088) += v1626;
            v1595 = *(unsigned int *)(v1612 + 2068);
            v1627 = *(_QWORD *)(v1612 + 2072);
            if ( v1624 < v1626 + v1624 )
            {
              v1628 = (const char *)v1624;
              do
              {
                _mm_prefetch(v1628, 0);
                v1628 += 64;
              }
              while ( (unsigned __int64)v1628 < v1626 + v1624 );
            }
            v1629 = *(_QWORD *)(v1612 + 2072);
            v1593 = (unsigned int)v1626 >> 7;
            if ( (_DWORD)v1593 )
            {
              do
              {
                v1630 = 8LL;
                do
                {
                  v1631 = v1629 ^ *v1625;
                  v1632 = v1625[1];
                  v1625 += 2;
                  v1629 = __ROL8__(__ROL8__(v1631, v1595) ^ v1632, v1595);
                  --v1630;
                }
                while ( v1630 );
                v1633 = __ROL8__(v1627 ^ ((unsigned __int64)v1625 - v1624), 17) ^ v1627 ^ ((unsigned __int64)v1625
                                                                                         - v1624);
                v4084 = (v1633 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v1595 = ((unsigned __int8)(v4084 ^ v1633) ^ (unsigned __int8)v1595) & 0x3F;
                if ( !(_DWORD)v1595 )
                  v1595 = 1LL;
                v893 = (_DWORD)v1593 == 1;
                v1593 = (unsigned int)(v1593 - 1);
              }
              while ( !v893 );
              LODWORD(v1626) = v3833;
            }
            v1608 = v1626 & 0x7F;
            if ( (unsigned int)v1608 >= 8 )
            {
              v1593 = (unsigned __int64)(v1626 & 0x7F) >> 3;
              do
              {
                v1629 = __ROL8__(*v1625++ ^ v1629, v1595);
                v1608 = (unsigned int)(v1608 - 8);
                --v1593;
              }
              while ( v1593 );
            }
            if ( (_DWORD)v1608 )
            {
              do
              {
                v1634 = *(unsigned __int8 *)v1625;
                v1625 = (_QWORD *)((char *)v1625 + 1);
                v1629 = __ROL8__(v1634 ^ v1629, v1595);
                v893 = (_DWORD)v1608 == 1;
                v1608 = (unsigned int)(v1608 - 1);
              }
              while ( !v893 );
            }
            for ( i37 = v1629; ; LODWORD(v1629) = i37 ^ v1629 )
            {
              i37 >>= 31;
              if ( !i37 )
                break;
            }
            v213 = (_BYTE *)v1612;
            *(_DWORD *)(v1620 + 20) = v1629 & 0x7FFFFFFF;
            v4082 = v4083;
            *(_DWORD *)(v1612 + 2088) += v1626;
          }
          else
          {
            v1624 = v3838;
            v4077[24] = v1609;
            LODWORD(v1626) = v3833;
          }
          if ( (*((_DWORD *)v213 + 612) & 0x40000000) != 0 && (_DWORD)v1626 )
            pg_unknown12(v213, v1624, (unsigned int)v1626, v4082 + 7);
          v1636 = v3840;
          v4026 = (unsigned int *)v213;
          v4082[6] = 0;
          v1637 = v4077;
          v1638 = (_DWORD)Src != 0;
          v4077[36] = 35;
          v1637[46] = v1637[46] & 0xFFFFFFFE | v1638;
          if ( v1637[40] >= 0x94u )
          {
            v1639 = *((_QWORD *)v1637 + 19);
            v1551 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, unsigned __int64, __int64))v213 + 63))(
                      v1636,
                      v1608,
                      v1593,
                      v1595);
            if ( !v1551 )
            {
LABEL_2535:
              v4076 = (_BYTE *)v1551;
              v1585 = -1073741670;
              goto LABEL_2539;
            }
            v1640 = *(unsigned int *)(v1551 + 80);
            v1637[46] |= 2u;
            v1641 = v1636 + v1640;
            v1642 = *(_QWORD **)(v1639 + 112);
            if ( (unsigned __int64)v1642 >= v1636 && (unsigned __int64)v1642 < v1641 )
            {
              *((_QWORD *)v1637 + 21) = *v1642;
              v1637[46] |= 4u;
            }
            v1643 = *(_QWORD **)(v1639 + 120);
            if ( (unsigned __int64)v1643 >= v1636 && (unsigned __int64)v1643 < v1641 )
            {
              *((_QWORD *)v1637 + 22) = *v1643;
              v1637[46] |= 8u;
            }
          }
          v893 = (*((_DWORD *)v213 + 612) & 0x400000) == 0;
          v4076 = v213;
          if ( !v893 )
          {
            v3838 = (*((__int64 (__fastcall **)(ULONG_PTR, unsigned __int64, unsigned __int64, __int64))v213 + 63))(
                      v1636,
                      v1608,
                      v1593,
                      v1595);
            if ( !v3838 )
              goto LABEL_2293;
            v1644 = *(_WORD *)(v3838 + 6);
            v3843 = (unsigned int)v3834 / 0xCuLL;
            LOWORD(v3844) = v1644;
            if ( !v1644 )
            {
              if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
              {
                v3898[1] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1636, 0LL, 0LL);
              }
LABEL_2296:
              if ( !*((_DWORD *)v213 + 574) )
              {
LABEL_2297:
                *((_QWORD *)v213 + 288) = v213 - 0x5C5FC0A76E374B18LL;
                *((_QWORD *)v213 + 289) = 0LL;
                *((_QWORD *)v213 + 290) = 271LL;
                *((_QWORD *)v213 + 291) = v1636;
                *((_DWORD *)v213 + 574) = 1;
                __b8(v213, 0LL);
              }
LABEL_2293:
              v1585 = -1073741701;
LABEL_2532:
              if ( (int)(v1585 + 0x80000000) >= 0 && v1585 != -1073741554 )
                goto LABEL_2539;
LABEL_2534:
              v1508 = *(_QWORD *)v3839;
              v1509 = *(_QWORD *)v3839 == (_QWORD)HalExtensionList;
              continue;
            }
            v1645 = (unsigned int *)v3841;
            v1646 = v1644;
            v1647 = v3838 + *(unsigned __int16 *)(v3838 + 20) + 24LL;
            v3849 = v1647;
            LODWORD(v3836) = v1644;
            v3848 = 12LL * ((unsigned int)v3834 / 0xC);
            v3842 = v3841 + v3848;
            LODWORD(v3833) = 0;
            for ( i38 = 0; i38 < v1646; LODWORD(v3833) = i38 )
            {
              v1649 = 5LL * i38;
              v1650 = *(_DWORD *)(v1647 + 40LL * i38 + 16);
              v1651 = *(_DWORD *)(v1647 + 40LL * i38 + 12);
              if ( v1650 <= *(_DWORD *)(v1647 + 40LL * i38 + 8) )
                v1650 = *(_DWORD *)(v1647 + 40LL * i38 + 8);
              v3846 = 5LL * i38;
              v1652 = v1651 + v1650;
              LODWORD(v3837) = v1651;
              if ( i38 )
              {
                if ( v1652 < *(_DWORD *)(v1647 + 40LL * (i38 - 1) + 12) )
                {
                  if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                  {
                    v3898[2] = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1636, 1uLL, 0LL);
                  }
                  goto LABEL_2296;
                }
                i38 = v3833;
              }
              if ( v1645 != (unsigned int *)v3842 )
              {
                while ( 1 )
                {
                  v1653 = v1645[1];
                  if ( *v1645 >= v1652 || v1653 <= v1651 )
                  {
LABEL_2326:
                    i38 = v3833;
                    v1646 = v3836;
                    goto LABEL_2327;
                  }
                  if ( *v1645 < v1651 || v1653 > v1652 )
                    break;
                  v1654 = v1645[2];
                  if ( (v1654 & 1) != 0 || (*(_BYTE *)(v1654 + v1636) & 0x20) != 0 )
                  {
                    v1655 = *(_DWORD *)(v1647 + 8 * v1649 + 16);
                    v1656 = *(_DWORD *)(v1647 + 8 * v1649 + 12);
                    if ( v1655 <= *(_DWORD *)(v1647 + 8 * v1649 + 8) )
                      v1655 = *(_DWORD *)(v1647 + 8 * v1649 + 8);
                    v1657 = v1656 + v1655;
                    v1658 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR))v213 + 131))(
                                              v1645,
                                              v3840);
                    v1659 = v1658;
                    if ( *v1658 < v1656 || v1658[1] > v1657 )
                    {
                      v1660 = v3840;
                      if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                      {
                        v3898[4] = -805294751;
                        KeBugCheckEx(
                          __ROR4__(-805306349, 92),
                          0xAuLL,
                          v3840,
                          ((_DWORD)v1658 - (_DWORD)v3840) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v213 + 574) )
                      {
                        *((_QWORD *)v213 + 288) = v213 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v213 + 289) = 0LL;
                        *((_QWORD *)v213 + 290) = 271LL;
                        *((_QWORD *)v213 + 291) = v1660;
                        *((_DWORD *)v213 + 574) = 1;
                        __b8(v213, 0LL);
                      }
                    }
                    v1661 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v213 + 132))(
                                              v1659,
                                              v3840,
                                              v3840 + *v1659);
                    if ( *v1661 >= v1656 && v1661[1] <= v1657 )
                    {
                      v1636 = v3840;
                    }
                    else
                    {
                      v1636 = v3840;
                      if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                      {
                        v3898[3] = -805294751;
                        KeBugCheckEx(
                          __ROR4__(-805306349, 92),
                          0xAuLL,
                          v3840,
                          ((_DWORD)v1661 - (_DWORD)v3840) | 0x80000000,
                          0LL);
                      }
                      if ( !*((_DWORD *)v213 + 574) )
                      {
                        *((_QWORD *)v213 + 288) = v213 - 0x5C5FC0A76E374B18LL;
                        *((_QWORD *)v213 + 289) = 0LL;
                        *((_QWORD *)v213 + 290) = 271LL;
                        *((_QWORD *)v213 + 291) = v1636;
                        *((_DWORD *)v213 + 574) = 1;
                        __b8(v213, 0LL);
                      }
                    }
                    v1649 = v3846;
                    v1651 = v3837;
                    v1647 = v3849;
                  }
                  v1645 += 3;
                  if ( v1645 == (unsigned int *)v3842 )
                    goto LABEL_2326;
                }
                if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
                {
                  v3898[5] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1636, 2uLL, 0LL);
                }
                goto LABEL_2296;
              }
LABEL_2327:
              ++i38;
            }
            v1662 = v3843;
            v1663 = v3838;
            if ( v1645 != (unsigned int *)v3842 )
            {
              if ( (*((_DWORD *)v213 + 612) & 0x200000) == 0 )
              {
                v3898[6] = -805294751;
                KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v1636, 3uLL, 0LL);
              }
              if ( *((_DWORD *)v213 + 574) )
                goto LABEL_2293;
              goto LABEL_2297;
            }
            if ( (_DWORD)v3843 )
              v1664 = (v3843 + 6) & 0xFFFFFFF8;
            else
              v1664 = 0;
            v1665 = *((unsigned int *)v213 + 505);
            v1666 = v1665 + v1664 + 24 * (v1646 + 2);
            if ( v1666 <= *((_DWORD *)v213 + 647) )
            {
              v1667 = (ULONG_PTR)v213;
              v3838 = (ULONG_PTR)v213;
              *((_DWORD *)v213 + 505) = v1666;
            }
            else
            {
              v3838 = pg_unknown7(v213, v1666, *((unsigned int *)v213 + 585));
              v1667 = v3838;
              if ( !v3838 )
              {
                v1585 = -1073741670;
                goto LABEL_2532;
              }
              v1668 = *((_DWORD *)v213 + 612);
              if ( (v1668 & 4) == 0 )
              {
                v1669 = *((_DWORD *)v213 + 505);
                v1670 = *((_QWORD *)v213 + 249);
                v1671 = (v1668 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
                if ( v1669 >= 8 )
                {
                  v1672 = (unsigned __int64)v1669 >> 3;
                  do
                  {
                    *(_QWORD *)v213 = 0LL;
                    v1669 -= 8;
                    v213 += 8;
                    --v1672;
                  }
                  while ( v1672 );
                }
                for ( i39 = 0; v1669; --v1669 )
                  *v213++ = 0;
                v1674 = *(_DWORD *)(v1667 + 2340);
                *(_DWORD *)(v1667 + 2340) = v1671;
                if ( v1671 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v1667 + 872))(v1670);
                }
                else
                {
                  if ( (*(_DWORD *)(v1667 + 2448) & 0x10000000) == 0 )
                    i39 = v1671;
                  if ( i39 )
                    (*(void (__fastcall **)(__int64, _QWORD))(v1667 + 552))(v1670 - 8, *(_QWORD *)(v1670 - 8));
                  else
                    (*(void (__fastcall **)(__int64))(v1667 + 256))(v1670);
                }
                v1667 = v3838;
                v1662 = v3843;
                *(_DWORD *)(v3838 + 2340) = v1674;
              }
              *(_DWORD *)(v1667 + 2448) &= ~4u;
              v1646 = v3836;
            }
            v1675 = v1667 + v1665;
            ++*(_DWORD *)(v1667 + 2060);
            v1676 = (_QWORD *)(v1667 + v1665);
            v4085 = v1667 + v1665;
            v1677 = 48;
            v1678 = 6LL;
            do
            {
              *v1676 = 0LL;
              v1677 -= 8;
              ++v1676;
              --v1678;
            }
            while ( v1678 );
            for ( ; v1677; --v1677 )
            {
              *(_BYTE *)v1676 = 0;
              v1676 = (_QWORD *)((char *)v1676 + 1);
            }
            v1679 = (unsigned int *)v3841;
            *(_DWORD *)v1675 = 30;
            *(_QWORD *)(v1675 + 8) = v1679;
            *(_DWORD *)(v1675 + 16) = 0;
            v1680 = *(_QWORD *)(v1667 + 2072);
            for ( i40 = v1680; ; LODWORD(v1680) = i40 ^ v1680 )
            {
              i40 >>= 31;
              if ( !i40 )
                break;
            }
            v1682 = v3840;
            *(_DWORD *)(v1675 + 20) = v1680 & 0x7FFFFFFF;
            v213 = (_BYTE *)v1667;
            v4086 = v4085;
            v4076 = (_BYTE *)v1667;
            *(_QWORD *)(v4085 + 24) = v1682;
            *(_DWORD *)(v4086 + 32) = *(_DWORD *)(v1663 + 80);
            *(_DWORD *)(v4086 + 36) = v3834;
            *(_WORD *)(v4086 + 40) = (_WORD)v3844;
            *(_WORD *)(v4086 + 42) = *(_WORD *)(v4086 + 42) & 0xFFFE | ((_DWORD)Src != 0);
            v3843 = v4086 + 48;
            if ( v1662 )
              v1683 = (unsigned int *)(v4086 + 48 + (((unsigned int)(v1662 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
            else
              v1683 = (unsigned int *)(v4086 + 48);
            v1684 = *(unsigned __int16 *)(v4086 + 40);
            v3846 = (ULONG_PTR)v1683;
            v1685 = &v1683[6 * v1684];
            v1686 = 12LL;
            v3851 = v1685;
            if ( !v1662 )
              v1686 = v3848;
            v3848 = (__int64)v1679 + v1686;
            if ( v1646 )
            {
              v1687 = v1683 + 2;
              v1688 = v1646;
              do
              {
                v1689 = 2LL;
                do
                {
                  *(v1687 - 2) = 0;
                  *(v1687 - 1) = 0;
                  *v1687 = 0x80000000;
                  v1687 += 3;
                  --v1689;
                }
                while ( v1689 );
                --v1688;
              }
              while ( v1688 );
            }
            if ( v1683 != v1685 )
            {
              v1690 = (char *)v3849;
              do
              {
                v1691 = 0;
                if ( (*((_DWORD *)v1690 + 9) & 0x2000000) != 0
                  || (v1692 = *(_DWORD *)v1690, *(_DWORD *)v1690 == 1414090313) && *((_DWORD *)v1690 + 1) == 1195525195
                  || v1692 == 1162297680
                  && ((v1693 = *((_WORD *)v1690 + 2), v1693 == 30839) || v1693 == 29303 || v1693 == 30583)
                  || v1692 == 1095914053 && *((_WORD *)v1690 + 2) == 16724 )
                {
                  v1691 = 1;
                }
                else
                {
                  v1694 = *(char **)(v1667 + 2352);
                  v1695 = 7;
                  v1696 = *(__int64 **)(v1667 + 2360);
                  v1697 = v1690 - v1694;
                  v1698 = *(char **)(v3838 + 2368);
                  v1699 = *(char **)(v3838 + 2376);
                  while ( 1 )
                  {
                    v1700 = (unsigned __int8)v1694[v1697];
                    v1701 = (unsigned __int8)*v1694++;
                    if ( v1700 != v1701 )
                      break;
                    if ( !--v1695 )
                    {
LABEL_2405:
                      v1691 = 1;
                      goto LABEL_2406;
                    }
                  }
                  v1702 = 8;
                  v1703 = (__int64 *)v1690;
                  while ( 1 )
                  {
                    v1704 = *v1703++;
                    v1705 = *v1696++;
                    if ( v1704 != v1705 )
                      break;
                    v1702 -= 8;
                    if ( v1702 < 8 )
                    {
                      if ( !v1702 )
                        goto LABEL_2405;
                      while ( 1 )
                      {
                        v1706 = *(unsigned __int8 *)v1703;
                        v1703 = (__int64 *)((char *)v1703 + 1);
                        v1707 = *(unsigned __int8 *)v1696;
                        v1696 = (__int64 *)((char *)v1696 + 1);
                        if ( v1706 != v1707 )
                          goto LABEL_2398;
                        if ( !--v1702 )
                          goto LABEL_2405;
                      }
                    }
                  }
LABEL_2398:
                  v1708 = 4;
                  v1709 = v1690 - v1698;
                  while ( 1 )
                  {
                    v1710 = (unsigned __int8)v1698[v1709];
                    v1711 = (unsigned __int8)*v1698++;
                    if ( v1710 != v1711 )
                      break;
                    if ( !--v1708 )
                      goto LABEL_2405;
                  }
                  v1712 = 6;
                  v1713 = v1690 - v1699;
                  while ( 1 )
                  {
                    v1714 = (unsigned __int8)v1699[v1713];
                    v1715 = (unsigned __int8)*v1699++;
                    if ( v1714 != v1715 )
                      break;
                    if ( !--v1712 )
                      goto LABEL_2405;
                  }
LABEL_2406:
                  v1679 = (unsigned int *)v3841;
                  v1683 = (unsigned int *)v3846;
                  v1667 = v3838;
                }
                v1716 = *((_DWORD *)v1690 + 9);
                if ( v1716 < 0 )
                  v1691 = 1;
                LODWORD(Src) = v1691;
                if ( v1691 && *(_DWORD *)v1690 == 1414090313 && *((_DWORD *)v1690 + 1) == 1195525195 )
                {
                  if ( (*(_DWORD *)(v1667 + 2452) & 0x2000) != 0 )
                    v1691 = 0;
                  LODWORD(Src) = v1691;
                }
                v1717 = v3840;
                if ( (*(_DWORD *)(v1667 + 2452) & 0x4000) != 0
                  && (v1716 & 0x20000000) != 0
                  && (v3840 == *(_QWORD *)(v1667 + 1512) || v3840 == *(_QWORD *)(v1667 + 1520)) )
                {
                  v1691 = 1;
                  LODWORD(Src) = 1;
                }
                v1718 = *((_DWORD *)v1690 + 4);
                v1719 = *((_DWORD *)v1690 + 3);
                v1720 = (unsigned int *)v3842;
                if ( v1718 <= *((_DWORD *)v1690 + 2) )
                  v1718 = *((_DWORD *)v1690 + 2);
                v1721 = v1719 + v1718;
                LODWORD(v3834) = *((_DWORD *)v1690 + 3);
                LODWORD(v3833) = v1721;
                if ( v1679 == (unsigned int *)v3842 )
                {
                  v1722 = 0;
                  v1723 = 0;
                }
                else
                {
                  v1722 = *v1679;
                  v1723 = v1679[1];
                }
                LODWORD(v3837) = v1723;
                v1724 = v1719;
                LODWORD(v3836) = v1722;
                if ( v1679 != (unsigned int *)v3842 && v1722 > v1719 && v1723 <= v1721 && !v1691 )
                {
                  *v1683 = v1719;
                  v1683[1] = v1722;
                  v1724 = v1722;
                  v1725 = *v1683;
                  v1726 = v1722 - v1725;
                  v1727 = (const char *)(v1717 + v1725);
                  v1728 = v1717 + v1725 + v1722 - (unsigned int)v1725;
                  for ( i41 = 0; i41 < 6; ++i41 )
                  {
                    v1730 = v4345[i41];
                    if ( (unsigned __int64)v1727 < v1730 + (unsigned int)v4317[i41] && v1728 > v1730 )
                    {
                      v1721 = v3833;
                      v1720 = (unsigned int *)v3842;
                      v1679 = (unsigned int *)v3841;
                      goto LABEL_2453;
                    }
                  }
                  *(_DWORD *)(v1667 + 2088) += v1726;
                  v1731 = v1727;
                  v1732 = *(_DWORD *)(v1667 + 2068);
                  v1733 = *(_QWORD *)(v1667 + 2072);
                  for ( i42 = v1727; (unsigned __int64)v1731 < v1728; v1731 += 64 )
                    _mm_prefetch(v1731, 0);
                  v1735 = v1733;
                  v1736 = v1726 >> 7;
                  if ( v1726 >> 7 )
                  {
                    do
                    {
                      v1737 = 8LL;
                      do
                      {
                        v1738 = v1735 ^ *(_QWORD *)i42;
                        v1739 = *((_QWORD *)i42 + 1);
                        i42 += 16;
                        v1735 = __ROL8__(__ROL8__(v1738, v1732) ^ v1739, v1732);
                        --v1737;
                      }
                      while ( v1737 );
                      v1740 = __ROL8__(v1733 ^ (i42 - v1727), 17) ^ v1733 ^ (i42 - v1727);
                      v4087 = (v1740 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v1732 = ((unsigned __int8)v4087 ^ (unsigned __int8)(v1740 ^ v1732)) & 0x3F;
                      if ( !v1732 )
                        LOBYTE(v1732) = 1;
                      --v1736;
                    }
                    while ( v1736 );
                    v1722 = v3836;
                    v1723 = v3837;
                  }
                  v1741 = v1726 & 0x7F;
                  if ( v1741 >= 8 )
                  {
                    v1742 = (unsigned __int64)v1741 >> 3;
                    do
                    {
                      v1735 = __ROL8__(*(_QWORD *)i42 ^ v1735, v1732);
                      i42 += 8;
                      v1741 -= 8;
                      --v1742;
                    }
                    while ( v1742 );
                  }
                  for ( ; v1741; --v1741 )
                  {
                    v1743 = *(unsigned __int8 *)i42++;
                    v1735 = __ROL8__(v1743 ^ v1735, v1732);
                  }
                  for ( i43 = v1735 >> 31; i43; i43 >>= 31 )
                    LODWORD(v1735) = i43 ^ v1735;
                  v1721 = v3833;
                  v1667 = v3838;
                  v1719 = v3834;
                  v1679 = (unsigned int *)v3841;
                  *(_DWORD *)(v3846 + 8) = v1735 & 0x7FFFFFFF;
                  v1720 = (unsigned int *)v3842;
                }
LABEL_2453:
                if ( v1722 < v1719 )
                {
                  v1745 = (int)Src;
                }
                else
                {
                  v1160 = v1723 <= v1721;
                  v1745 = (int)Src;
                  if ( v1160 && v1679 != v1720 )
                  {
                    v1746 = (unsigned int *)v3848;
                    v1747 = *(_DWORD *)(v3848 + 4);
                    if ( v1747 <= v1721 )
                    {
                      v1748 = (_BYTE *)v3843;
                      while ( v1746 != v1720 )
                      {
                        if ( v1745 )
                        {
                          v1749 = 0x80;
                        }
                        else
                        {
                          v1750 = v1679[1];
                          v1724 = *v1746;
                          if ( *v1746 < (unsigned int)v1750 )
                          {
                            if ( (*(_DWORD *)(v1667 + 2448) & 0x200000) == 0 )
                            {
                              v3898[7] = -805294751;
                              KeBugCheckEx(__ROR4__(-805306349, 92), 0xAuLL, v3840, 6uLL, 0LL);
                            }
                            if ( !*(_DWORD *)(v1667 + 2296) )
                            {
                              v1751 = v3840;
                              *(_QWORD *)(v1667 + 2304) = v1667 - 0x5C5FC0A76E374B18LL;
                              *(_QWORD *)(v1667 + 2312) = 0LL;
                              *(_QWORD *)(v1667 + 2320) = 271LL;
                              *(_QWORD *)(v1667 + 2328) = v1751;
                              *(_DWORD *)(v1667 + 2296) = 1;
                              __b8(v1667, 0LL);
                            }
                          }
                          v1752 = (_QWORD *)(v3840 + v1750);
                          v1753 = v1724 - v1750;
                          v1754 = v3840 + v1750 + v1724 - (unsigned int)v1750;
                          for ( i44 = 0; i44 < 6; ++i44 )
                          {
                            v1756 = v4345[i44];
                            if ( (unsigned __int64)v1752 < v1756 + (unsigned int)v4317[i44] && v1754 > v1756 )
                              goto LABEL_2489;
                          }
                          if ( v1753 < 4 )
                          {
LABEL_2489:
                            v1749 = 0x80;
                            goto LABEL_2490;
                          }
                          v1757 = v3838;
                          v1758 = v1752;
                          *(_DWORD *)(v3838 + 2088) += v1753;
                          v1759 = *(_DWORD *)(v1757 + 2068);
                          v1760 = *(_QWORD *)(v1757 + 2072);
                          v1761 = (const char *)v1752;
                          if ( (unsigned __int64)v1752 < v1754 )
                          {
                            do
                            {
                              _mm_prefetch(v1761, 0);
                              v1761 += 64;
                            }
                            while ( (unsigned __int64)v1761 < v1754 );
                          }
                          v1762 = v1760;
                          v1763 = v1753 >> 7;
                          if ( v1753 >> 7 )
                          {
                            do
                            {
                              v1764 = 8LL;
                              do
                              {
                                v1765 = v1758[1] ^ __ROL8__(*v1758 ^ v1762, v1759);
                                v1758 += 2;
                                v1762 = __ROL8__(v1765, v1759);
                                --v1764;
                              }
                              while ( v1764 );
                              v1766 = (__ROL8__(v1760 ^ ((char *)v1758 - (char *)v1752), 17) ^ v1760 ^ ((char *)v1758 - (char *)v1752))
                                    * (unsigned __int128)0x7010008004002001uLL;
                              v4088 = *((_QWORD *)&v1766 + 1);
                              v1759 = (BYTE8(v1766) ^ (unsigned __int8)(v1766 ^ v1759)) & 0x3F;
                              if ( !v1759 )
                                LOBYTE(v1759) = 1;
                              --v1763;
                            }
                            while ( v1763 );
                            v1745 = (int)Src;
                          }
                          v1767 = v1753 & 0x7F;
                          if ( v1767 >= 8 )
                          {
                            v1768 = (unsigned __int64)v1767 >> 3;
                            do
                            {
                              v1762 = __ROL8__(*v1758++ ^ v1762, v1759);
                              v1767 -= 8;
                              --v1768;
                            }
                            while ( v1768 );
                          }
                          for ( ; v1767; --v1767 )
                          {
                            v1769 = *(unsigned __int8 *)v1758;
                            v1758 = (_QWORD *)((char *)v1758 + 1);
                            v1762 = __ROL8__(v1769 ^ v1762, v1759);
                          }
                          for ( i45 = v1762 >> 7; i45; i45 >>= 7 )
                            LOBYTE(v1762) = i45 ^ v1762;
                          v1746 = (unsigned int *)v3848;
                          v1749 = v1762 & 0x7F;
LABEL_2490:
                          v1679 = (unsigned int *)v3841;
                          v1721 = v3833;
                          v1748 = (_BYTE *)v3843;
                        }
                        *v1748 = v1749;
                        v1679 += 3;
                        v1746 += 3;
                        v1720 = (unsigned int *)v3842;
                        v1748 = (_BYTE *)(v3843 + 1);
                        v3841 = (unsigned __int64)v1679;
                        ++v3843;
                        v3848 = (__int64)v1746;
                        if ( v1746 != (unsigned int *)v3842 )
                          v1747 = v1746[1];
                        if ( v1747 > v1721 )
                          break;
                        v1667 = v3838;
                      }
                    }
                  }
                }
                if ( v1745 || v1724 == v1721 )
                {
LABEL_2521:
                  v1793 = v3846;
                }
                else
                {
                  v1771 = v3846;
                  v1772 = v3840;
                  *(_DWORD *)(v3846 + 12) = v1724;
                  *(_DWORD *)(v1771 + 16) = v1721;
                  v1773 = *(unsigned int *)(v1771 + 12);
                  v1774 = v1721 - v1773;
                  v1775 = (_QWORD *)(v1773 + v1772);
                  v1776 = (unsigned __int64)v1775 + v1721 - (unsigned int)v1773;
                  LODWORD(Src) = v1721 - v1773;
                  for ( i46 = 0; i46 < 6; ++i46 )
                  {
                    v1778 = v4345[i46];
                    if ( (unsigned __int64)v1775 < v1778 + (unsigned int)v4317[i46] && v1776 > v1778 )
                    {
                      v1679 = (unsigned int *)v3841;
                      goto LABEL_2521;
                    }
                  }
                  v1779 = v3838;
                  v1780 = v1775;
                  *(_DWORD *)(v3838 + 2088) += v1774;
                  v1781 = *(_DWORD *)(v1779 + 2068);
                  v1782 = *(_QWORD *)(v1779 + 2072);
                  v1783 = (const char *)v1775;
                  if ( (unsigned __int64)v1775 < v1776 )
                  {
                    do
                    {
                      _mm_prefetch(v1783, 0);
                      v1783 += 64;
                    }
                    while ( (unsigned __int64)v1783 < v1776 );
                  }
                  v1784 = v1782;
                  v1785 = v1774 >> 7;
                  if ( v1774 >> 7 )
                  {
                    do
                    {
                      v1786 = 8LL;
                      do
                      {
                        v1787 = v1780[1] ^ __ROL8__(*v1780 ^ v1784, v1781);
                        v1780 += 2;
                        v1784 = __ROL8__(v1787, v1781);
                        --v1786;
                      }
                      while ( v1786 );
                      v1788 = (__ROL8__(v1782 ^ ((char *)v1780 - (char *)v1775), 17) ^ v1782 ^ ((char *)v1780
                                                                                              - (char *)v1775))
                            * (unsigned __int128)0x7010008004002001uLL;
                      v4089 = *((_QWORD *)&v1788 + 1);
                      v1781 = (BYTE8(v1788) ^ (unsigned __int8)(v1788 ^ v1781)) & 0x3F;
                      if ( !v1781 )
                        LOBYTE(v1781) = 1;
                      --v1785;
                    }
                    while ( v1785 );
                    LOBYTE(v1774) = (_BYTE)Src;
                  }
                  v1789 = v1774 & 0x7F;
                  if ( v1789 >= 8 )
                  {
                    v1790 = (unsigned __int64)v1789 >> 3;
                    do
                    {
                      v1784 = __ROL8__(*v1780++ ^ v1784, v1781);
                      v1789 -= 8;
                      --v1790;
                    }
                    while ( v1790 );
                  }
                  for ( ; v1789; --v1789 )
                  {
                    v1791 = *(unsigned __int8 *)v1780;
                    v1780 = (_QWORD *)((char *)v1780 + 1);
                    v1784 = __ROL8__(v1791 ^ v1784, v1781);
                  }
                  for ( i47 = v1784; ; LODWORD(v1784) = i47 ^ v1784 )
                  {
                    i47 >>= 31;
                    if ( !i47 )
                      break;
                  }
                  v1793 = v3846;
                  v1679 = (unsigned int *)v3841;
                  *(_DWORD *)(v3846 + 20) = v1784 & 0x7FFFFFFF;
                }
                if ( v1679 != (unsigned int *)v3842 && *v1679 >= (unsigned int)v3834 && v1679[1] <= (unsigned int)v3833 )
                {
                  v1794 = v3848;
                  if ( v3848 != v3842 )
                  {
                    v1795 = v3843;
                    *(_BYTE *)v3843 = 0x80;
                    v3843 = v1795 + 1;
                    v3848 = v1794 + 12;
                  }
                  v1679 += 3;
                  v3841 = (unsigned __int64)v1679;
                }
                v1683 = (unsigned int *)(v1793 + 24);
                v1667 = v3838;
                v1690 = (char *)(v3849 + 40);
                v3846 = (ULONG_PTR)v1683;
                v3849 += 40LL;
              }
              while ( v1683 != v3851 );
              v213 = v4076;
            }
          }
          v4026 = (unsigned int *)v213;
          v1536 = 0;
LABEL_2531:
          v1585 = v1536;
          goto LABEL_2532;
        }
        v1581[8] |= 2u;
        goto LABEL_2213;
      }
      break;
    }
    v1585 = 0;
LABEL_2539:
    if ( v1585 < 0 )
      return 0;
    v1796 = __rdtsc();
    v1797 = (__ROR8__(v1796, 3) ^ v1796) * (unsigned __int128)0x7010008004002001uLL;
    v4090 = *((_QWORD *)&v1797 + 1);
    v1798 = *((_QWORD *)&v1797 + 1) ^ v1797;
    *((_QWORD *)&v1797 + 1) = ((*((_QWORD *)&v1797 + 1) ^ (unsigned __int64)v1797)
                             * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
    if ( v1798 - 100 * ((*((_QWORD *)&v1797 + 1) + ((unsigned __int64)(v1798 - *((_QWORD *)&v1797 + 1)) >> 1)) >> 6) < 2 )
      *((_DWORD *)v213 + 612) |= 0x20000u;
    v1799 = (_DWORD *)*((_QWORD *)v213 + 173);
    v1800 = 32;
    v1801 = *((_DWORD *)v213 + 526);
    v1802 = *((unsigned int *)v213 + 505);
    v1803 = *((unsigned int *)v213 + 585);
    v1804 = *(_QWORD **)v1799;
    v1805 = 4 * v1799[4];
    HalExtensionList = v1799;
    LODWORD(Src) = v1801;
    if ( v1801 != 7 )
      v1800 = 0;
    v1806 = v1802 + 48;
    LODWORD(v3834) = v1800;
    if ( (unsigned int)(v1802 + 48) <= *((_DWORD *)v213 + 647) )
    {
      v1807 = v213;
      *((_DWORD *)v213 + 505) = v1806;
    }
    else
    {
      v1807 = (_BYTE *)pg_unknown7(v213, v1806, v1803);
      if ( !v1807 )
        return 0;
      v1808 = *((_DWORD *)v213 + 612);
      if ( (v1808 & 4) == 0 )
      {
        v1809 = *((_DWORD *)v213 + 505);
        v1810 = *((_QWORD *)v213 + 249);
        v1811 = (v1808 & 0x20000000) != 0 ? *((_DWORD *)v213 + 585) : 0;
        if ( v1809 >= 8 )
        {
          v1812 = (unsigned __int64)v1809 >> 3;
          do
          {
            *(_QWORD *)v213 = 0LL;
            v1809 -= 8;
            v213 += 8;
            --v1812;
          }
          while ( v1812 );
        }
        for ( i48 = 0; v1809; --v1809 )
          *v213++ = 0;
        v1814 = *((_DWORD *)v1807 + 585);
        *((_DWORD *)v1807 + 585) = v1811;
        if ( v1811 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1807 + 109))(v1810);
        }
        else
        {
          if ( (*((_DWORD *)v1807 + 612) & 0x10000000) == 0 )
            i48 = v1811;
          if ( i48 )
            (*((void (__fastcall **)(__int64, _QWORD))v1807 + 69))(v1810 - 8, *(_QWORD *)(v1810 - 8));
          else
            (*((void (__fastcall **)(__int64))v1807 + 32))(v1810);
        }
        v1800 = v3834;
        *((_DWORD *)v1807 + 585) = v1814;
      }
      *((_DWORD *)v1807 + 612) &= ~4u;
      v1801 = (int)Src;
    }
    ++*((_DWORD *)v1807 + 515);
    v1815 = &v1807[v1802];
    v1816 = 48;
    v4091 = &v1807[v1802];
    v1817 = &v1807[v1802];
    v1818 = 6LL;
    do
    {
      *v1817 = 0LL;
      v1816 -= 8;
      ++v1817;
      --v1818;
    }
    while ( v1818 );
    for ( ; v1816; --v1816 )
    {
      *(_BYTE *)v1817 = 0;
      v1817 = (_QWORD *)((char *)v1817 + 1);
    }
    *(_DWORD *)v1815 = v1800;
    *((_QWORD *)v1815 + 1) = v1804;
    if ( v1801 == 7 && v1805 )
      pg_unknown12(v1807, v1804, v1805, v1815 + 24);
    *((_DWORD *)v1815 + 4) = v1805;
    v1819 = v1804;
    *((_DWORD *)v1807 + 522) += v1805;
    v1820 = (const char *)v1804;
    v1821 = *((_DWORD *)v1807 + 517);
    v1822 = *((_QWORD *)v1807 + 259);
    v1823 = (unsigned __int64)v1804 + v1805;
    if ( (unsigned __int64)v1804 < v1823 )
    {
      do
      {
        _mm_prefetch(v1820, 0);
        v1820 += 64;
      }
      while ( (unsigned __int64)v1820 < v1823 );
    }
    v1824 = *((_QWORD *)v1807 + 259);
    for ( i49 = v1805 >> 7; i49; --i49 )
    {
      v1826 = 8LL;
      do
      {
        v1827 = v1824 ^ *v1819;
        v1828 = v1819[1];
        v1819 += 2;
        v1824 = __ROL8__(__ROL8__(v1827, v1821) ^ v1828, v1821);
        --v1826;
      }
      while ( v1826 );
      v1829 = __ROL8__(v1822 ^ ((char *)v1819 - (char *)v1804), 17) ^ v1822 ^ ((char *)v1819 - (char *)v1804);
      v4092 = (v1829 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v1821 = ((unsigned __int8)(v4092 ^ v1829) ^ (unsigned __int8)v1821) & 0x3F;
      if ( !v1821 )
        LOBYTE(v1821) = 1;
    }
    v1830 = v1805 & 0x7F;
    if ( v1830 >= 8 )
    {
      v1831 = (unsigned __int64)(v1805 & 0x7F) >> 3;
      do
      {
        v1824 = __ROL8__(*v1819++ ^ v1824, v1821);
        v1830 -= 8;
        --v1831;
      }
      while ( v1831 );
    }
    for ( ; v1830; --v1830 )
    {
      v1832 = *(unsigned __int8 *)v1819;
      v1819 = (_QWORD *)((char *)v1819 + 1);
      v1824 = __ROL8__(v1832 ^ v1824, v1821);
    }
    for ( i50 = v1824; ; LODWORD(v1824) = i50 ^ v1824 )
    {
      i50 >>= 31;
      if ( !i50 )
        break;
    }
    v4026 = (unsigned int *)v1807;
    v4273[0] = 32;
    *((_DWORD *)v1815 + 5) = v1824 & 0x7FFFFFFF;
    *((_DWORD *)v1807 + 522) += v1805;
    v1834 = 32;
    v1835 = *((_DWORD *)v1807 + 526);
    v1836 = *((unsigned int *)v1807 + 505);
    v1837 = *((unsigned int *)v1807 + 585);
    v4327[0] = &KeServiceDescriptorTable;
    v4327[1] = &xmmword_140E018E0;
    v4327[2] = &KeServiceDescriptorTableShadow;
    v4327[3] = &KeServiceDescriptorTableFilter;
    if ( v1835 != 7 )
      v1834 = 0;
    v4273[1] = 32;
    v1838 = v1836 + 192;
    v4273[2] = 32;
    v4273[3] = 32;
    LODWORD(Src) = 4;
    LODWORD(v3834) = v1835;
    LODWORD(v3833) = v1834;
    if ( (unsigned int)(v1836 + 192) <= *((_DWORD *)v1807 + 647) )
    {
      v1839 = v1807;
      *((_DWORD *)v1807 + 505) = v1838;
      v3839 = (ULONG_PTR)v1807;
    }
    else
    {
      v1839 = (_BYTE *)pg_unknown7(v1807, v1838, v1837);
      v3839 = (ULONG_PTR)v1839;
      if ( !v1839 )
        return 0;
      v1840 = *((_DWORD *)v1807 + 612);
      if ( (v1840 & 4) == 0 )
      {
        v1841 = *((_DWORD *)v1807 + 505);
        v1842 = *((_QWORD *)v1807 + 249);
        v1843 = (v1840 & 0x20000000) != 0 ? *((_DWORD *)v1807 + 585) : 0;
        if ( v1841 >= 8 )
        {
          v1844 = (unsigned __int64)v1841 >> 3;
          do
          {
            *(_QWORD *)v1807 = 0LL;
            v1841 -= 8;
            v1807 += 8;
            --v1844;
          }
          while ( v1844 );
        }
        for ( i51 = 0; v1841; --v1841 )
          *v1807++ = 0;
        v1846 = *((_DWORD *)v1839 + 585);
        *((_DWORD *)v1839 + 585) = v1843;
        if ( v1843 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1839 + 109))(v1842);
        }
        else
        {
          if ( (*((_DWORD *)v1839 + 612) & 0x10000000) == 0 )
            i51 = v1843;
          if ( i51 )
            (*((void (__fastcall **)(__int64, _QWORD))v1839 + 69))(v1842 - 8, *(_QWORD *)(v1842 - 8));
          else
            (*((void (__fastcall **)(__int64))v1839 + 32))(v1842);
        }
        *((_DWORD *)v1839 + 585) = v1846;
      }
      *((_DWORD *)v1839 + 612) &= ~4u;
      v1835 = v3834;
      v1834 = v3833;
    }
    *((_DWORD *)v1839 + 515) += 4;
    v1847 = v4327;
    v1848 = &v1839[v1836];
    v3838 = (ULONG_PTR)v4327;
    v4093 = v1848;
    v1849 = v4273;
    v4094 = v1848;
    v3841 = 4LL;
    do
    {
      v1850 = *v1849;
      v1851 = 48;
      v1852 = (_QWORD *)*v1847;
      v1853 = v1848;
      v1854 = 6LL;
      do
      {
        *v1853 = 0LL;
        v1851 -= 8;
        ++v1853;
        --v1854;
      }
      while ( v1854 );
      for ( ; v1851; --v1851 )
      {
        *(_BYTE *)v1853 = 0;
        v1853 = (_QWORD *)((char *)v1853 + 1);
      }
      *(_DWORD *)v1848 = v1834;
      *((_QWORD *)v1848 + 1) = v1852;
      if ( v1835 == 7 && (_DWORD)v1850 )
        pg_unknown12(v1839, v1852, (unsigned int)v1850, v1848 + 24);
      *((_DWORD *)v1848 + 4) = v1850;
      *((_DWORD *)v1839 + 522) += v1850;
      v1855 = v1852;
      v1856 = *((_DWORD *)v1839 + 517);
      v1857 = (const char *)v1852;
      v1858 = *((_QWORD *)v1839 + 259);
      if ( v1852 < (_QWORD *)((char *)v1852 + v1850) )
      {
        do
        {
          _mm_prefetch(v1857, 0);
          v1857 += 64;
        }
        while ( v1857 < (const char *)v1852 + v1850 );
      }
      v1859 = *((_QWORD *)v1839 + 259);
      v1860 = (unsigned int)v1850 >> 7;
      if ( (unsigned int)v1850 >> 7 )
      {
        do
        {
          v1861 = 8LL;
          do
          {
            v1862 = v1855[1] ^ __ROL8__(*v1855 ^ v1859, v1856);
            v1855 += 2;
            v1859 = __ROL8__(v1862, v1856);
            --v1861;
          }
          while ( v1861 );
          v1863 = (__ROL8__(v1858 ^ ((char *)v1855 - (char *)v1852), 17) ^ v1858 ^ (unsigned __int64)((char *)v1855 - (char *)v1852))
                * (unsigned __int128)0x7010008004002001uLL;
          v4095 = *((_QWORD *)&v1863 + 1);
          v1856 = (BYTE8(v1863) ^ (unsigned __int8)(v1863 ^ v1856)) & 0x3F;
          if ( !v1856 )
            LOBYTE(v1856) = 1;
          --v1860;
        }
        while ( v1860 );
        v1839 = (_BYTE *)v3839;
        v1847 = (_QWORD *)v3838;
      }
      v1864 = v1850 & 0x7F;
      if ( v1864 >= 8 )
      {
        v1865 = (unsigned __int64)(v1850 & 0x7F) >> 3;
        do
        {
          v1859 = __ROL8__(*v1855++ ^ v1859, v1856);
          v1864 -= 8;
          --v1865;
        }
        while ( v1865 );
      }
      for ( ; v1864; --v1864 )
      {
        v1866 = *(unsigned __int8 *)v1855;
        v1855 = (_QWORD *)((char *)v1855 + 1);
        v1859 = __ROL8__(v1866 ^ v1859, v1856);
      }
      for ( i52 = v1859 >> 31; i52; i52 >>= 31 )
        LODWORD(v1859) = i52 ^ v1859;
      v1835 = v3834;
      v1834 = v3833;
      ++v1847;
      *((_DWORD *)v1848 + 5) = v1859 & 0x7FFFFFFF;
      ++v1849;
      *((_DWORD *)v1839 + 522) += v1850;
      v1848 = v4093 + 48;
      v3838 = (ULONG_PTR)v1847;
      v893 = v3841-- == 1;
      v4093 += 48;
    }
    while ( !v893 );
    if ( v1835 == 7 )
    {
      v1868 = v4094;
      v1869 = (int)Src;
      do
      {
        *((_DWORD *)v1868 + 10) |= 1u;
        v1868 = v4094 + 48;
        v4094 += 48;
        --v1869;
      }
      while ( v1869 );
    }
    v1870 = 0;
    v4026 = (unsigned int *)v1839;
    v3839 = *(_QWORD *)HalExtensionList;
    v1871 = 0;
    if ( (*((_DWORD *)v1839 + 612) & 0x40000000) == 0 )
    {
      v1872 = 0;
      if ( *((_DWORD *)HalExtensionList + 4) )
      {
        do
        {
          if ( !(*((__int64 (__fastcall **)(ULONG_PTR, char *, _QWORD))v1839 + 76))(
                  v3839 + ((__int64)*(int *)(v3839 + 4LL * v1872) >> 4),
                  v4096,
                  0LL) )
            ++v1870;
          ++v1872;
        }
        while ( v1872 < *((_DWORD *)HalExtensionList + 4) );
        v1871 = 0;
        if ( v1870 )
        {
          v1873 = *((unsigned int *)v1839 + 505);
          v1874 = v1873 + 16 * v1870 + 48;
          if ( v1874 <= *((_DWORD *)v1839 + 647) )
          {
            v1875 = (__int64)v1839;
            *((_DWORD *)v1839 + 505) = v1874;
            goto LABEL_2659;
          }
          v1875 = pg_unknown7(v1839, v1874, *((unsigned int *)v1839 + 585));
          if ( v1875 )
          {
            v1876 = *((_DWORD *)v1839 + 612);
            if ( (v1876 & 4) == 0 )
            {
              v1877 = *((_DWORD *)v1839 + 505);
              v1878 = *((_QWORD *)v1839 + 249);
              v1879 = (v1876 & 0x20000000) != 0 ? *((_DWORD *)v1839 + 585) : 0;
              if ( v1877 >= 8 )
              {
                v1880 = (unsigned __int64)v1877 >> 3;
                do
                {
                  *(_QWORD *)v1839 = 0LL;
                  v1877 -= 8;
                  v1839 += 8;
                  --v1880;
                }
                while ( v1880 );
              }
              for ( i53 = 0; v1877; --v1877 )
                *v1839++ = 0;
              v1882 = *(_DWORD *)(v1875 + 2340);
              *(_DWORD *)(v1875 + 2340) = v1879;
              if ( v1879 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v1875 + 872))(v1878);
              }
              else
              {
                if ( (*(_DWORD *)(v1875 + 2448) & 0x10000000) == 0 )
                  i53 = v1879;
                if ( i53 )
                  (*(void (__fastcall **)(__int64, _QWORD))(v1875 + 552))(v1878 - 8, *(_QWORD *)(v1878 - 8));
                else
                  (*(void (__fastcall **)(__int64))(v1875 + 256))(v1878);
              }
              *(_DWORD *)(v1875 + 2340) = v1882;
            }
            *(_DWORD *)(v1875 + 2448) &= ~4u;
LABEL_2659:
            ++*(_DWORD *)(v1875 + 2060);
            v1883 = v1875 + v1873;
            v1884 = 48;
            v4097 = v1875 + v1873;
            v1885 = (_QWORD *)(v1875 + v1873);
            v1886 = 6LL;
            do
            {
              *v1885 = 0LL;
              v1884 -= 8;
              ++v1885;
              --v1886;
            }
            while ( v1886 );
            for ( ; v1884; --v1884 )
            {
              *(_BYTE *)v1885 = 0;
              v1885 = (_QWORD *)((char *)v1885 + 1);
            }
            *(_DWORD *)v1883 = 10;
            *(_QWORD *)(v1883 + 8) = 0LL;
            *(_DWORD *)(v1883 + 16) = 0;
            v1887 = *(_QWORD *)(v1875 + 2072);
            for ( i54 = v1887; ; LODWORD(v1887) = i54 ^ v1887 )
            {
              i54 >>= 31;
              if ( !i54 )
                break;
            }
            v1839 = (_BYTE *)v1875;
            *(_DWORD *)(v1883 + 20) = v1887 & 0x7FFFFFFF;
            v4098 = v4097;
            *(_DWORD *)(v4097 + 24) = 0;
            *(_DWORD *)(v4098 + 28) = v1870;
            v1889 = 0;
            v1890 = v4098 + 48;
            if ( *((_DWORD *)HalExtensionList + 4) )
            {
              while ( 1 )
              {
                v1891 = v3839 + ((__int64)*(int *)(v3839 + 4LL * v1889) >> 4);
                if ( !(*(__int64 (__fastcall **)(ULONG_PTR, char *, _QWORD))(v1875 + 608))(v1891, v4096, 0LL) )
                {
                  v1892 = (unsigned __int8 *)v1891;
                  *(_DWORD *)(v1875 + 2088) += 4;
                  v1893 = (const char *)v1891;
                  v1894 = *(_QWORD *)(v1875 + 2072);
                  if ( v1891 < v1891 + 4 )
                  {
                    do
                    {
                      _mm_prefetch(v1893, 0);
                      v1893 += 64;
                    }
                    while ( (unsigned __int64)v1893 < v1891 + 4 );
                  }
                  v1895 = 4;
                  do
                  {
                    v1896 = *v1892++;
                    v1894 = __ROL8__(v1896 ^ v1894, *(_DWORD *)(v1875 + 2068));
                    --v1895;
                  }
                  while ( v1895 );
                  for ( i55 = v1894; ; LODWORD(v1894) = i55 ^ v1894 )
                  {
                    i55 >>= 31;
                    if ( !i55 )
                      break;
                  }
                  *(_DWORD *)v1890 ^= (*(_DWORD *)v1890 ^ v1894) & 0x7FFFFFFF;
                  *(_DWORD *)(v1890 + 4) = 4;
                  *(_QWORD *)(v1890 + 8) = v1891;
                  v1890 += 16LL;
                  if ( !--v1870 )
                    break;
                }
                if ( ++v1889 >= *((_DWORD *)HalExtensionList + 4) )
                  return 0;
              }
              v1871 = 0;
              goto LABEL_2679;
            }
            return 0;
          }
          v1871 = -1073741267;
        }
      }
    }
LABEL_2679:
    v4026 = (unsigned int *)v1839;
    if ( v1871 < 0 )
      return 0;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    _disable();
    _enable();
    v1898 = *((unsigned int *)v1839 + 505);
    v1899 = v1898 + 48;
    if ( (unsigned int)(v1898 + 48) <= *((_DWORD *)v1839 + 647) )
    {
      v1900 = v1839;
      *((_DWORD *)v1839 + 505) = v1899;
    }
    else
    {
      v1900 = (_BYTE *)pg_unknown7(v1839, v1899, *((unsigned int *)v1839 + 585));
      if ( !v1900 )
        return 0;
      v1901 = *((_DWORD *)v1839 + 612);
      if ( (v1901 & 4) == 0 )
      {
        v1902 = *((_DWORD *)v1839 + 505);
        v1903 = *((_QWORD *)v1839 + 249);
        v1904 = (v1901 & 0x20000000) != 0 ? *((_DWORD *)v1839 + 585) : 0;
        if ( v1902 >= 8 )
        {
          v1905 = (unsigned __int64)v1902 >> 3;
          do
          {
            *(_QWORD *)v1839 = 0LL;
            v1902 -= 8;
            v1839 += 8;
            --v1905;
          }
          while ( v1905 );
        }
        for ( i56 = 0; v1902; --v1902 )
          *v1839++ = 0;
        v1907 = *((_DWORD *)v1900 + 585);
        *((_DWORD *)v1900 + 585) = v1904;
        if ( v1904 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1900 + 109))(v1903);
        }
        else
        {
          if ( (*((_DWORD *)v1900 + 612) & 0x10000000) == 0 )
            i56 = v1904;
          if ( i56 )
            (*((void (__fastcall **)(__int64, _QWORD))v1900 + 69))(v1903 - 8, *(_QWORD *)(v1903 - 8));
          else
            (*((void (__fastcall **)(__int64))v1900 + 32))(v1903);
        }
        *((_DWORD *)v1900 + 585) = v1907;
      }
      *((_DWORD *)v1900 + 612) &= ~4u;
    }
    v1908 = &v1900[v1898];
    ++*((_DWORD *)v1900 + 515);
    v1909 = &v1900[v1898];
    v4099 = &v1900[v1898];
    v1910 = 48;
    v1911 = 6LL;
    do
    {
      *v1909 = 0LL;
      v1910 -= 8;
      ++v1909;
      --v1911;
    }
    while ( v1911 );
    for ( ; v1910; --v1910 )
    {
      *(_BYTE *)v1909 = 0;
      v1909 = (_QWORD *)((char *)v1909 + 1);
    }
    *(_DWORD *)v1908 = 36;
    *((_QWORD *)v1908 + 1) = &xmmword_140E00020;
    v1912 = &xmmword_140E00020;
    *((_DWORD *)v1908 + 4) = 24;
    *((_DWORD *)v1900 + 522) += 24;
    v1913 = *((_DWORD *)v1900 + 517);
    v1914 = *((_QWORD *)v1900 + 259);
    _mm_prefetch((const char *)&xmmword_140E00020, 0);
    LODWORD(v1915) = 24;
    v1916 = 3LL;
    do
    {
      v1915 = (unsigned int)(v1915 - 8);
      v1914 = __ROL8__(*v1912++ ^ v1914, v1913);
      --v1916;
    }
    while ( v1916 );
    if ( (_DWORD)v1915 )
    {
      do
      {
        v1917 = *(unsigned __int8 *)v1912;
        v1912 = (ULONG_PTR *)((char *)v1912 + 1);
        v1914 = __ROL8__(v1917 ^ v1914, v1913);
        v893 = (_DWORD)v1915 == 1;
        v1915 = (unsigned int)(v1915 - 1);
      }
      while ( !v893 );
    }
    for ( i57 = v1914; ; v1914 = (unsigned int)i57 ^ (unsigned int)v1914 )
    {
      i57 >>= 31;
      if ( !i57 )
        break;
    }
    LODWORD(v1914) = v1914 & 0x7FFFFFFF;
    v1919 = -1073741275;
    *((_DWORD *)v1908 + 5) = v1914;
    v4100 = v4099;
    *((_DWORD *)v1900 + 522) += 24;
    v1920 = v4100;
    v1921 = PsHalImageBase;
    v1922 = *((_QWORD *)v1900 + 168);
    v1923 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*((void (__fastcall **)(__int64, unsigned __int64, __int64))v1900 + 42))(v1922, v1914, v1915);
    v1924 = (unsigned int *)**((_QWORD **)v1900 + 194);
    v1925 = (unsigned __int64)(v1924 + 4);
    while ( *(_QWORD *)(v1925 + 8) != v1921 )
    {
      v1925 += 24LL;
      if ( v1925 >= (unsigned __int64)&v1924[6 * *v1924 + 4] )
        goto LABEL_2716;
    }
    v1919 = 0;
    *(_OWORD *)(v1920 + 24) = *(_OWORD *)v1925;
    *((_QWORD *)v1920 + 5) = *(_QWORD *)(v1925 + 16);
LABEL_2716:
    (*((void (__fastcall **)(_QWORD))v1900 + 50))(*((_QWORD *)v1900 + 168));
    __writecr8(v1923);
    if ( v1919 < 0 )
    {
      v1926 = 24;
      v1927 = v4100 + 24;
      v1928 = 3LL;
      do
      {
        *v1927 = 0LL;
        v1926 -= 8;
        ++v1927;
        --v1928;
      }
      while ( v1928 );
      for ( ; v1926; --v1926 )
      {
        *(_BYTE *)v1927 = 0;
        v1927 = (_QWORD *)((char *)v1927 + 1);
      }
      *((_QWORD *)v4100 + 3) = 1LL;
    }
    v4026 = (unsigned int *)v1900;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v1929 = *((unsigned int *)v1900 + 505);
    v1930 = v1929 + 48;
    if ( (unsigned int)(v1929 + 48) <= *((_DWORD *)v1900 + 647) )
    {
      v1931 = v1900;
      *((_DWORD *)v1900 + 505) = v1930;
    }
    else
    {
      v1931 = (_BYTE *)pg_unknown7(v1900, v1930, *((unsigned int *)v1900 + 585));
      if ( !v1931 )
        return 0;
      v1932 = *((_DWORD *)v1900 + 612);
      if ( (v1932 & 4) == 0 )
      {
        v1933 = *((_DWORD *)v1900 + 505);
        v1934 = *((_QWORD *)v1900 + 249);
        v1935 = (v1932 & 0x20000000) != 0 ? *((_DWORD *)v1900 + 585) : 0;
        if ( v1933 >= 8 )
        {
          v1936 = (unsigned __int64)v1933 >> 3;
          do
          {
            *(_QWORD *)v1900 = 0LL;
            v1933 -= 8;
            v1900 += 8;
            --v1936;
          }
          while ( v1936 );
        }
        for ( i58 = 0; v1933; --v1933 )
          *v1900++ = 0;
        v1938 = *((_DWORD *)v1931 + 585);
        *((_DWORD *)v1931 + 585) = v1935;
        if ( v1935 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1931 + 109))(v1934);
        }
        else
        {
          if ( (*((_DWORD *)v1931 + 612) & 0x10000000) == 0 )
            i58 = v1935;
          if ( i58 )
            (*((void (__fastcall **)(__int64, _QWORD))v1931 + 69))(v1934 - 8, *(_QWORD *)(v1934 - 8));
          else
            (*((void (__fastcall **)(__int64))v1931 + 32))(v1934);
        }
        *((_DWORD *)v1931 + 585) = v1938;
      }
      *((_DWORD *)v1931 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1931 + 515);
    v1939 = &v1931[v1929];
    v1940 = 48;
    v4101 = &v1931[v1929];
    v1941 = &v1931[v1929];
    v1942 = 6LL;
    do
    {
      *v1941 = 0LL;
      v1940 -= 8;
      ++v1941;
      --v1942;
    }
    while ( v1942 );
    for ( ; v1940; --v1940 )
    {
      *(_BYTE *)v1941 = 0;
      v1941 = (_QWORD *)((char *)v1941 + 1);
    }
    *(_DWORD *)v1939 = 4;
    *((_QWORD *)v1939 + 1) = 0LL;
    *((_DWORD *)v1939 + 4) = 0;
    v1943 = *((_QWORD *)v1931 + 259);
    for ( i59 = v1943; ; LODWORD(v1943) = i59 ^ v1943 )
    {
      i59 >>= 31;
      if ( !i59 )
        break;
    }
    v4026 = (unsigned int *)v1931;
    *((_DWORD *)v1939 + 5) = v1943 & 0x7FFFFFFF;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v1945 = *((unsigned int *)v1931 + 505);
    v1946 = v1945 + 48;
    if ( (unsigned int)(v1945 + 48) <= *((_DWORD *)v1931 + 647) )
    {
      v1947 = v1931;
      *((_DWORD *)v1931 + 505) = v1946;
    }
    else
    {
      v1947 = (_BYTE *)pg_unknown7(v1931, v1946, *((unsigned int *)v1931 + 585));
      if ( !v1947 )
        return 0;
      v1948 = *((_DWORD *)v1931 + 612);
      if ( (v1948 & 4) == 0 )
      {
        v1949 = *((_DWORD *)v1931 + 505);
        v1950 = *((_QWORD *)v1931 + 249);
        v1951 = (v1948 & 0x20000000) != 0 ? *((_DWORD *)v1931 + 585) : 0;
        if ( v1949 >= 8 )
        {
          v1952 = (unsigned __int64)v1949 >> 3;
          do
          {
            *(_QWORD *)v1931 = 0LL;
            v1949 -= 8;
            v1931 += 8;
            --v1952;
          }
          while ( v1952 );
        }
        for ( i60 = 0; v1949; --v1949 )
          *v1931++ = 0;
        v1954 = *((_DWORD *)v1947 + 585);
        *((_DWORD *)v1947 + 585) = v1951;
        if ( v1951 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1947 + 109))(v1950);
        }
        else
        {
          if ( (*((_DWORD *)v1947 + 612) & 0x10000000) == 0 )
            i60 = v1951;
          if ( i60 )
            (*((void (__fastcall **)(__int64, _QWORD))v1947 + 69))(v1950 - 8, *(_QWORD *)(v1950 - 8));
          else
            (*((void (__fastcall **)(__int64))v1947 + 32))(v1950);
        }
        *((_DWORD *)v1947 + 585) = v1954;
      }
      *((_DWORD *)v1947 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1947 + 515);
    v1955 = &v1947[v1945];
    v1956 = 48;
    v4102 = &v1947[v1945];
    v1957 = &v1947[v1945];
    v1958 = 6LL;
    do
    {
      *v1957 = 0LL;
      v1956 -= 8;
      ++v1957;
      --v1958;
    }
    while ( v1958 );
    for ( ; v1956; --v1956 )
    {
      *(_BYTE *)v1957 = 0;
      v1957 = (_QWORD *)((char *)v1957 + 1);
    }
    *(_DWORD *)v1955 = 5;
    *((_QWORD *)v1955 + 1) = 0LL;
    *((_DWORD *)v1955 + 4) = 0;
    v1959 = *((_QWORD *)v1947 + 259);
    for ( i61 = v1959; ; LODWORD(v1959) = i61 ^ v1959 )
    {
      i61 >>= 31;
      if ( !i61 )
        break;
    }
    v4026 = (unsigned int *)v1947;
    *((_DWORD *)v1955 + 5) = v1959 & 0x7FFFFFFF;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v1961 = *((unsigned int *)v1947 + 505);
    v1962 = v1961 + 48;
    if ( (unsigned int)(v1961 + 48) <= *((_DWORD *)v1947 + 647) )
    {
      v1963 = v1947;
      *((_DWORD *)v1947 + 505) = v1962;
    }
    else
    {
      v1963 = (_BYTE *)pg_unknown7(v1947, v1962, *((unsigned int *)v1947 + 585));
      if ( !v1963 )
        return 0;
      v1964 = *((_DWORD *)v1947 + 612);
      if ( (v1964 & 4) == 0 )
      {
        v1965 = *((_DWORD *)v1947 + 505);
        v1966 = *((_QWORD *)v1947 + 249);
        v1967 = (v1964 & 0x20000000) != 0 ? *((_DWORD *)v1947 + 585) : 0;
        if ( v1965 >= 8 )
        {
          v1968 = (unsigned __int64)v1965 >> 3;
          do
          {
            *(_QWORD *)v1947 = 0LL;
            v1965 -= 8;
            v1947 += 8;
            --v1968;
          }
          while ( v1968 );
        }
        for ( i62 = 0; v1965; --v1965 )
          *v1947++ = 0;
        v1970 = *((_DWORD *)v1963 + 585);
        *((_DWORD *)v1963 + 585) = v1967;
        if ( v1967 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1963 + 109))(v1966);
        }
        else
        {
          if ( (*((_DWORD *)v1963 + 612) & 0x10000000) == 0 )
            i62 = v1967;
          if ( i62 )
            (*((void (__fastcall **)(__int64, _QWORD))v1963 + 69))(v1966 - 8, *(_QWORD *)(v1966 - 8));
          else
            (*((void (__fastcall **)(__int64))v1963 + 32))(v1966);
        }
        *((_DWORD *)v1963 + 585) = v1970;
      }
      *((_DWORD *)v1963 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1963 + 515);
    v1971 = &v1963[v1961];
    v1972 = 48;
    v4103 = &v1963[v1961];
    v1973 = &v1963[v1961];
    v1974 = 6LL;
    do
    {
      *v1973 = 0LL;
      v1972 -= 8;
      ++v1973;
      --v1974;
    }
    while ( v1974 );
    for ( ; v1972; --v1972 )
    {
      *(_BYTE *)v1973 = 0;
      v1973 = (_QWORD *)((char *)v1973 + 1);
    }
    *(_DWORD *)v1971 = 25;
    *((_QWORD *)v1971 + 1) = 0LL;
    *((_DWORD *)v1971 + 4) = 0;
    v1975 = *((_QWORD *)v1963 + 259);
    for ( i63 = v1975; ; LODWORD(v1975) = i63 ^ v1975 )
    {
      i63 >>= 31;
      if ( !i63 )
        break;
    }
    v4026 = (unsigned int *)v1963;
    *((_DWORD *)v1971 + 5) = v1975 & 0x7FFFFFFF;
    v1977 = 0;
    if ( ExpInitializeCallback[0] )
    {
      do
        ++v1977;
      while ( ExpInitializeCallback[2 * v1977] );
    }
    v1978 = *((unsigned int *)v1963 + 505);
    v1979 = 16 * v1977;
    v1980 = v1978 + 48;
    if ( (unsigned int)(v1978 + 48) <= *((_DWORD *)v1963 + 647) )
    {
      v1981 = v1963;
      *((_DWORD *)v1963 + 505) = v1980;
    }
    else
    {
      v1981 = (_BYTE *)pg_unknown7(v1963, v1980, *((unsigned int *)v1963 + 585));
      if ( !v1981 )
        return 0;
      v1982 = *((_DWORD *)v1963 + 612);
      if ( (v1982 & 4) == 0 )
      {
        v1983 = *((_DWORD *)v1963 + 505);
        v1984 = *((_QWORD *)v1963 + 249);
        v1985 = (v1982 & 0x20000000) != 0 ? *((_DWORD *)v1963 + 585) : 0;
        if ( v1983 >= 8 )
        {
          v1986 = (unsigned __int64)v1983 >> 3;
          do
          {
            *(_QWORD *)v1963 = 0LL;
            v1983 -= 8;
            v1963 += 8;
            --v1986;
          }
          while ( v1986 );
        }
        for ( i64 = 0; v1983; --v1983 )
          *v1963++ = 0;
        v1988 = *((_DWORD *)v1981 + 585);
        *((_DWORD *)v1981 + 585) = v1985;
        if ( v1985 == 3 )
        {
          (*((void (__fastcall **)(__int64))v1981 + 109))(v1984);
        }
        else
        {
          if ( (*((_DWORD *)v1981 + 612) & 0x10000000) == 0 )
            i64 = v1985;
          if ( i64 )
            (*((void (__fastcall **)(__int64, _QWORD))v1981 + 69))(v1984 - 8, *(_QWORD *)(v1984 - 8));
          else
            (*((void (__fastcall **)(__int64))v1981 + 32))(v1984);
        }
        *((_DWORD *)v1981 + 585) = v1988;
      }
      *((_DWORD *)v1981 + 612) &= ~4u;
    }
    ++*((_DWORD *)v1981 + 515);
    v1989 = &v1981[v1978];
    v1990 = 48;
    HalExtensionList = v1989;
    v4104 = v1989;
    v1991 = v1989;
    v1992 = 6LL;
    do
    {
      *v1991 = 0LL;
      v1990 -= 8;
      ++v1991;
      --v1992;
    }
    while ( v1992 );
    for ( ; v1990; --v1990 )
    {
      *(_BYTE *)v1991 = 0;
      v1991 = (_QWORD *)((char *)v1991 + 1);
    }
    *v1989 = 29;
    v1993 = ExpInitializeCallback;
    *((_QWORD *)v1989 + 1) = ExpInitializeCallback;
    v1994 = (const char *)ExpInitializeCallback;
    v1989[4] = v1979;
    *((_DWORD *)v1981 + 522) += v1979;
    v1995 = *((_DWORD *)v1981 + 517);
    v1996 = *((_QWORD *)v1981 + 259);
    v1997 = &ExpInitializeCallback[v1979 / 8];
    if ( ExpInitializeCallback < v1997 )
    {
      do
      {
        _mm_prefetch(v1994, 0);
        v1994 += 64;
      }
      while ( v1994 < (const char *)v1997 );
    }
    v1998 = *((_QWORD *)v1981 + 259);
    v1999 = v1979 >> 7;
    if ( v1979 >> 7 )
    {
      do
      {
        v2000 = 8LL;
        do
        {
          v2001 = v1993[1] ^ __ROL8__(*v1993 ^ v1998, v1995);
          v1993 += 2;
          v1998 = __ROL8__(v2001, v1995);
          --v2000;
        }
        while ( v2000 );
        v2002 = (__ROL8__(v1996 ^ ((char *)v1993 - (char *)ExpInitializeCallback), 17) ^ v1996 ^ (unsigned __int64)((char *)v1993 - (char *)ExpInitializeCallback))
              * (unsigned __int128)0x7010008004002001uLL;
        v4105 = *((_QWORD *)&v2002 + 1);
        v1995 = (BYTE8(v2002) ^ (unsigned __int8)(v2002 ^ v1995)) & 0x3F;
        if ( !v1995 )
          LOBYTE(v1995) = 1;
        --v1999;
      }
      while ( v1999 );
      v1989 = HalExtensionList;
    }
    v2003 = v1979 & 0x7F;
    if ( v2003 >= 8 )
    {
      v2004 = (unsigned __int64)(v1979 & 0x7F) >> 3;
      do
      {
        v1998 = __ROL8__(*v1993++ ^ v1998, v1995);
        v2003 -= 8;
        --v2004;
      }
      while ( v2004 );
    }
    for ( ; v2003; --v2003 )
    {
      v2005 = *(unsigned __int8 *)v1993;
      v1993 = (__int64 *)((char *)v1993 + 1);
      v1998 = __ROL8__(v2005 ^ v1998, v1995);
    }
    for ( i65 = v1998 >> 31; i65; i65 >>= 31 )
      LODWORD(v1998) = i65 ^ v1998;
    v1989[5] = v1998 & 0x7FFFFFFF;
    v4106 = v4104;
    *((_DWORD *)v1981 + 522) += v1979;
    if ( (*((_DWORD *)v1981 + 612) & 0x40000000) != 0 )
    {
      v2007 = *((unsigned int *)v1981 + 505);
      v2008 = (unsigned int)v4106[4];
      v2009 = (_QWORD *)*((_QWORD *)v4106 + 1);
      v2010 = v2007 + 48;
      if ( (unsigned int)(v2007 + 48) <= *((_DWORD *)v1981 + 647) )
      {
        v2011 = (__int64)v1981;
        *((_DWORD *)v1981 + 505) = v2010;
      }
      else
      {
        v2011 = pg_unknown7(v1981, v2010, *((unsigned int *)v1981 + 585));
        if ( !v2011 )
          return 0;
        v2012 = *((_DWORD *)v1981 + 612);
        if ( (v2012 & 4) == 0 )
        {
          v2013 = *((_DWORD *)v1981 + 505);
          v2014 = *((_QWORD *)v1981 + 249);
          v2015 = (v2012 & 0x20000000) != 0 ? *((_DWORD *)v1981 + 585) : 0;
          if ( v2013 >= 8 )
          {
            v2016 = (unsigned __int64)v2013 >> 3;
            do
            {
              *(_QWORD *)v1981 = 0LL;
              v2013 -= 8;
              v1981 += 8;
              --v2016;
            }
            while ( v2016 );
          }
          for ( i66 = 0; v2013; --v2013 )
            *v1981++ = 0;
          v2018 = *(_DWORD *)(v2011 + 2340);
          *(_DWORD *)(v2011 + 2340) = v2015;
          if ( v2015 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2011 + 872))(v2014);
          }
          else
          {
            if ( (*(_DWORD *)(v2011 + 2448) & 0x10000000) == 0 )
              i66 = v2015;
            if ( i66 )
              (*(void (__fastcall **)(__int64, _QWORD))(v2011 + 552))(v2014 - 8, *(_QWORD *)(v2014 - 8));
            else
              (*(void (__fastcall **)(__int64))(v2011 + 256))(v2014);
          }
          *(_DWORD *)(v2011 + 2340) = v2018;
        }
        *(_DWORD *)(v2011 + 2448) &= ~4u;
      }
      ++*(_DWORD *)(v2011 + 2060);
      v2019 = (_DWORD *)(v2011 + v2007);
      HalExtensionList = v2019;
      v2020 = v2019;
      v2021 = 48;
      v4107 = v2019;
      v2022 = 6LL;
      do
      {
        *v2020 = 0LL;
        v2021 -= 8;
        ++v2020;
        --v2022;
      }
      while ( v2022 );
      for ( ; v2021; --v2021 )
      {
        *(_BYTE *)v2020 = 0;
        v2020 = (_QWORD *)((char *)v2020 + 1);
      }
      *v2019 = 32;
      *((_QWORD *)v2019 + 1) = v2009;
      if ( (_DWORD)v2008 )
        pg_unknown12(v2011, v2009, (unsigned int)v2008, v2019 + 6);
      v2019[4] = v2008;
      *(_DWORD *)(v2011 + 2088) += v2008;
      v2023 = v2009;
      v2024 = *(_DWORD *)(v2011 + 2068);
      v2025 = (const char *)v2009;
      v2026 = *(_QWORD *)(v2011 + 2072);
      if ( v2009 < (_QWORD *)((char *)v2009 + v2008) )
      {
        do
        {
          _mm_prefetch(v2025, 0);
          v2025 += 64;
        }
        while ( v2025 < (const char *)v2009 + v2008 );
      }
      v2027 = *(_QWORD *)(v2011 + 2072);
      v2028 = (unsigned int)v2008 >> 7;
      if ( (unsigned int)v2008 >> 7 )
      {
        do
        {
          v2029 = 8LL;
          do
          {
            v2030 = v2023[1] ^ __ROL8__(*v2023 ^ v2027, v2024);
            v2023 += 2;
            v2027 = __ROL8__(v2030, v2024);
            --v2029;
          }
          while ( v2029 );
          v2031 = (__ROL8__(v2026 ^ ((char *)v2023 - (char *)v2009), 17) ^ v2026 ^ (unsigned __int64)((char *)v2023 - (char *)v2009))
                * (unsigned __int128)0x7010008004002001uLL;
          v4108 = *((_QWORD *)&v2031 + 1);
          v2024 = (BYTE8(v2031) ^ (unsigned __int8)(v2031 ^ v2024)) & 0x3F;
          if ( !v2024 )
            LOBYTE(v2024) = 1;
          --v2028;
        }
        while ( v2028 );
        v2019 = HalExtensionList;
      }
      v2032 = v2008 & 0x7F;
      if ( v2032 >= 8 )
      {
        v2033 = (unsigned __int64)(v2008 & 0x7F) >> 3;
        do
        {
          v2027 = __ROL8__(*v2023++ ^ v2027, v2024);
          v2032 -= 8;
          --v2033;
        }
        while ( v2033 );
      }
      for ( ; v2032; --v2032 )
      {
        v2034 = *(unsigned __int8 *)v2023;
        v2023 = (_QWORD *)((char *)v2023 + 1);
        v2027 = __ROL8__(v2034 ^ v2027, v2024);
      }
      for ( i67 = v2027 >> 31; i67; i67 >>= 31 )
        LODWORD(v2027) = i67 ^ v2027;
      v1981 = (_BYTE *)v2011;
      v2019[5] = v2027 & 0x7FFFFFFF;
      v4109 = v4107;
      *(_DWORD *)(v2011 + 2088) += v2008;
      v4109[10] = 0;
    }
    v4026 = (unsigned int *)v1981;
    if ( !v1981 )
      return 0;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v2036 = *((_QWORD *)v1981 + 221);
    v2037 = 32;
    v2038 = *((_DWORD *)v1981 + 526);
    v2039 = *((unsigned int *)v1981 + 505);
    v2040 = *((unsigned int *)v1981 + 585);
    v2041 = 8 * *(_DWORD *)((char *)&ObpTypeObjectType->Version + v2036);
    LODWORD(Src) = *(_DWORD *)((char *)&ObpTypeObjectType->Version + v2036);
    if ( v2038 != 7 )
      v2037 = 0;
    v2042 = v2039 + 48;
    if ( (unsigned int)(v2039 + 48) <= *((_DWORD *)v1981 + 647) )
    {
      v2043 = v1981;
      *((_DWORD *)v1981 + 505) = v2042;
    }
    else
    {
      v2043 = (_BYTE *)pg_unknown7(v1981, v2042, v2040);
      if ( !v2043 )
        return 0;
      v2044 = *((_DWORD *)v1981 + 612);
      if ( (v2044 & 4) == 0 )
      {
        v2045 = *((_DWORD *)v1981 + 505);
        v2046 = *((_QWORD *)v1981 + 249);
        v2047 = (v2044 & 0x20000000) != 0 ? *((_DWORD *)v1981 + 585) : 0;
        if ( v2045 >= 8 )
        {
          v2048 = (unsigned __int64)v2045 >> 3;
          do
          {
            *(_QWORD *)v1981 = 0LL;
            v2045 -= 8;
            v1981 += 8;
            --v2048;
          }
          while ( v2048 );
        }
        for ( i68 = 0; v2045; --v2045 )
          *v1981++ = 0;
        v2050 = *((_DWORD *)v2043 + 585);
        *((_DWORD *)v2043 + 585) = v2047;
        if ( v2047 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2043 + 109))(v2046);
        }
        else
        {
          if ( (*((_DWORD *)v2043 + 612) & 0x10000000) == 0 )
            i68 = v2047;
          if ( i68 )
            (*((void (__fastcall **)(__int64, _QWORD))v2043 + 69))(v2046 - 8, *(_QWORD *)(v2046 - 8));
          else
            (*((void (__fastcall **)(__int64))v2043 + 32))(v2046);
        }
        *((_DWORD *)v2043 + 585) = v2050;
      }
      *((_DWORD *)v2043 + 612) &= ~4u;
    }
    v2051 = &v2043[v2039];
    ++*((_DWORD *)v2043 + 515);
    v2052 = v2051;
    HalExtensionList = v2051;
    v4110 = v2051;
    v2053 = 48;
    v2054 = 6LL;
    do
    {
      *v2052 = 0LL;
      v2053 -= 8;
      ++v2052;
      --v2054;
    }
    while ( v2054 );
    for ( ; v2053; --v2053 )
    {
      *(_BYTE *)v2052 = 0;
      v2052 = (_QWORD *)((char *)v2052 + 1);
    }
    *v2051 = v2037;
    *((_QWORD *)v2051 + 1) = ObpObjectTypes;
    if ( v2038 == 7 && v2041 )
      pg_unknown12(v2043, ObpObjectTypes, v2041, v2051 + 6);
    v2051[4] = v2041;
    v2055 = ObpObjectTypes;
    *((_DWORD *)v2043 + 522) += v2041;
    v2056 = (const char *)ObpObjectTypes;
    v2057 = *((_DWORD *)v2043 + 517);
    v2058 = *((_QWORD *)v2043 + 259);
    v2059 = &ObpObjectTypes[v2041 / 8];
    if ( ObpObjectTypes < v2059 )
    {
      do
      {
        _mm_prefetch(v2056, 0);
        v2056 += 64;
      }
      while ( v2056 < (const char *)v2059 );
    }
    v2060 = *((_QWORD *)v2043 + 259);
    v2061 = v2041 >> 7;
    if ( v2041 >> 7 )
    {
      do
      {
        v2062 = 8LL;
        do
        {
          v2063 = v2055[1] ^ __ROL8__(*v2055 ^ v2060, v2057);
          v2055 += 2;
          v2060 = __ROL8__(v2063, v2057);
          --v2062;
        }
        while ( v2062 );
        v2064 = (__ROL8__(v2058 ^ ((char *)v2055 - (char *)ObpObjectTypes), 17) ^ v2058 ^ (unsigned __int64)((char *)v2055 - (char *)ObpObjectTypes))
              * (unsigned __int128)0x7010008004002001uLL;
        v4111 = *((_QWORD *)&v2064 + 1);
        v2057 = (BYTE8(v2064) ^ (unsigned __int8)(v2064 ^ v2057)) & 0x3F;
        if ( !v2057 )
          LOBYTE(v2057) = 1;
        --v2061;
      }
      while ( v2061 );
      v2051 = HalExtensionList;
    }
    v2065 = v2041 & 0x7F;
    if ( v2065 >= 8 )
    {
      v2066 = (unsigned __int64)(v2041 & 0x7F) >> 3;
      do
      {
        v2060 = __ROL8__(*v2055++ ^ v2060, v2057);
        v2065 -= 8;
        --v2066;
      }
      while ( v2066 );
    }
    for ( ; v2065; --v2065 )
    {
      v2067 = *(unsigned __int8 *)v2055;
      v2055 = (__int64 *)((char *)v2055 + 1);
      v2060 = __ROL8__(v2067 ^ v2060, v2057);
    }
    for ( i69 = v2060 >> 31; i69; i69 >>= 31 )
      LODWORD(v2060) = i69 ^ v2060;
    LODWORD(v3836) = 0;
    v2051[5] = v2060 & 0x7FFFFFFF;
    *((_DWORD *)v2043 + 522) += v2041;
    v2069 = *((_DWORD *)v2043 + 450);
    v2070 = *((_DWORD *)v2043 + 452);
    LODWORD(v3834) = v2069;
    LODWORD(v3833) = v2070;
    if ( (_DWORD)Src )
    {
      do
      {
        v2071 = ObpObjectTypes[(unsigned int)i69];
        if ( v2071 )
        {
          v2072 = (*(_BYTE *)(v2071 - 48 + 26) & 2) != 0
                ? v2071 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v2071 - 48 + 26) & 3]
                : 0LL;
          if ( v2072 )
          {
            v2073 = *(_WORD *)(v2072 + 8);
            if ( v2073 )
            {
              if ( *(_BYTE *)(v2071 + 40) != v2043[1816] )
              {
                v2074 = *((unsigned int *)v2043 + 505);
                v2075 = *((unsigned int *)v2043 + 585);
                v2076 = (_QWORD *)(v2071 + v2069);
                LODWORD(v3837) = v2073 + 26;
                v2077 = v2074 + ((v2073 + 33) & 0xFFFFFFF8) + 48;
                if ( v2077 <= *((_DWORD *)v2043 + 647) )
                {
                  v2078 = v2043;
                  *((_DWORD *)v2043 + 505) = v2077;
                }
                else
                {
                  v2078 = (_BYTE *)pg_unknown7(v2043, v2077, v2075);
                  if ( !v2078 )
                    return 0;
                  v2079 = *((_DWORD *)v2043 + 612);
                  if ( (v2079 & 4) == 0 )
                  {
                    v2080 = *((_DWORD *)v2043 + 505);
                    v2081 = *((_QWORD *)v2043 + 249);
                    v2082 = (v2079 & 0x20000000) != 0 ? *((_DWORD *)v2043 + 585) : 0;
                    if ( v2080 >= 8 )
                    {
                      v2083 = (unsigned __int64)v2080 >> 3;
                      do
                      {
                        *(_QWORD *)v2043 = 0LL;
                        v2080 -= 8;
                        v2043 += 8;
                        --v2083;
                      }
                      while ( v2083 );
                    }
                    for ( i70 = 0; v2080; --v2080 )
                      *v2043++ = 0;
                    v2085 = *((_DWORD *)v2078 + 585);
                    *((_DWORD *)v2078 + 585) = v2082;
                    if ( v2082 == 3 )
                    {
                      (*((void (__fastcall **)(__int64))v2078 + 109))(v2081);
                    }
                    else
                    {
                      if ( (*((_DWORD *)v2078 + 612) & 0x10000000) == 0 )
                        i70 = v2082;
                      if ( i70 )
                        (*((void (__fastcall **)(__int64, _QWORD))v2078 + 69))(v2081 - 8, *(_QWORD *)(v2081 - 8));
                      else
                        (*((void (__fastcall **)(__int64))v2078 + 32))(v2081);
                    }
                    *((_DWORD *)v2078 + 585) = v2085;
                  }
                  *((_DWORD *)v2078 + 612) &= ~4u;
                  v2070 = v3833;
                }
                v2086 = (ULONG_PTR)&v2078[v2074];
                ++*((_DWORD *)v2078 + 515);
                v2087 = (_QWORD *)v2086;
                v3839 = v2086;
                v4112 = v2086;
                v2088 = 48;
                v2089 = 6LL;
                do
                {
                  *v2087 = 0LL;
                  v2088 -= 8;
                  ++v2087;
                  --v2089;
                }
                while ( v2089 );
                for ( ; v2088; --v2088 )
                {
                  *(_BYTE *)v2087 = 0;
                  v2087 = (_QWORD *)((char *)v2087 + 1);
                }
                *(_DWORD *)v2086 = 8;
                v2090 = v2076;
                *(_QWORD *)(v2086 + 8) = v2076;
                v2091 = (const char *)v2076;
                *(_DWORD *)(v2086 + 16) = v2070;
                *((_DWORD *)v2078 + 522) += v2070;
                v2092 = *((_DWORD *)v2078 + 517);
                v2093 = *((_QWORD *)v2078 + 259);
                v2094 = (unsigned __int64)v2076 + v2070;
                if ( (unsigned __int64)v2076 < v2094 )
                {
                  do
                  {
                    _mm_prefetch(v2091, 0);
                    v2091 += 64;
                  }
                  while ( (unsigned __int64)v2091 < v2094 );
                }
                v2095 = v2070 >> 7;
                v2096 = *((_QWORD *)v2078 + 259);
                if ( v2095 )
                {
                  do
                  {
                    v2097 = 8LL;
                    do
                    {
                      v2098 = v2096 ^ *v2090;
                      v2099 = v2090[1];
                      v2090 += 2;
                      v2096 = __ROL8__(__ROL8__(v2098, v2092) ^ v2099, v2092);
                      --v2097;
                    }
                    while ( v2097 );
                    v2100 = __ROL8__(v2093 ^ ((char *)v2090 - (char *)v2076), 17) ^ v2093 ^ ((char *)v2090
                                                                                           - (char *)v2076);
                    v4113 = (v2100 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v2092 = ((unsigned __int8)(v4113 ^ v2100) ^ (unsigned __int8)v2092) & 0x3F;
                    if ( !v2092 )
                      LOBYTE(v2092) = 1;
                    --v2095;
                  }
                  while ( v2095 );
                  v2086 = v3839;
                }
                v2101 = v3833;
                v2102 = v3833 & 0x7F;
                if ( v2102 >= 8 )
                {
                  v2103 = (unsigned __int64)(v3833 & 0x7F) >> 3;
                  do
                  {
                    v2096 = __ROL8__(*v2090++ ^ v2096, v2092);
                    v2102 -= 8;
                    --v2103;
                  }
                  while ( v2103 );
                }
                for ( ; v2102; --v2102 )
                {
                  v2104 = *(unsigned __int8 *)v2090;
                  v2090 = (_QWORD *)((char *)v2090 + 1);
                  v2096 = __ROL8__(v2104 ^ v2096, v2092);
                }
                for ( i71 = v2096; ; LODWORD(v2096) = i71 ^ v2096 )
                {
                  i71 >>= 31;
                  if ( !i71 )
                    break;
                }
                v2106 = v3837;
                *(_DWORD *)(v2086 + 20) = v2096 & 0x7FFFFFFF;
                v2107 = 26;
                v2043 = v2078;
                v4114 = v4112;
                *((_DWORD *)v2078 + 522) += v2101;
                v2108 = 3LL;
                v2109 = *((_QWORD *)v2078 + 222);
                *(_QWORD *)(v4114 + 24) = v2071;
                *(_WORD *)(v4114 + 32) = v2106;
                *(_WORD *)(v4114 + 34) = *(_WORD *)(v2071 + v2109 + *((_QWORD *)v2078 + 228));
                v2110 = L"\\ObjectTypes\\";
                v2111 = v4114;
                v2112 = (_QWORD *)(v4114 + 48);
                do
                {
                  v2107 -= 8;
                  *v2112 = *(_QWORD *)v2110;
                  v2110 += 4;
                  ++v2112;
                  --v2108;
                }
                while ( v2108 );
                for ( ; v2107; --v2107 )
                {
                  v2113 = *(_BYTE *)v2110;
                  v2110 = (const wchar_t *)((char *)v2110 + 1);
                  *(_BYTE *)v2112 = v2113;
                  v2112 = (_QWORD *)((char *)v2112 + 1);
                }
                v2114 = *(unsigned __int16 *)(v2072 + 8);
                v2115 = (char *)(v2111 + 74);
                v2116 = *(_QWORD **)(v2072 + 16);
                if ( v2114 >= 8 )
                {
                  v2117 = (unsigned __int64)*(unsigned __int16 *)(v2072 + 8) >> 3;
                  do
                  {
                    v2114 -= 8;
                    *(_QWORD *)v2115 = *v2116++;
                    v2115 += 8;
                    --v2117;
                  }
                  while ( v2117 );
                }
                if ( v2114 )
                {
                  v2118 = v2115 - (char *)v2116;
                  do
                  {
                    *((_BYTE *)v2116 + v2118) = *(_BYTE *)v2116;
                    v2116 = (_QWORD *)((char *)v2116 + 1);
                    --v2114;
                  }
                  while ( v2114 );
                }
                if ( (*((_DWORD *)v2078 + 612) & 0x40000000) != 0 )
                {
                  v2119 = *((unsigned int *)v2078 + 505);
                  v2120 = *(unsigned int *)(v4114 + 16);
                  v2121 = *(_QWORD **)(v4114 + 8);
                  v2122 = v2119 + 48;
                  if ( (unsigned int)(v2119 + 48) <= *((_DWORD *)v2078 + 647) )
                  {
                    *((_DWORD *)v2078 + 505) = v2122;
                  }
                  else
                  {
                    v2043 = (_BYTE *)pg_unknown7(v2078, v2122, *((unsigned int *)v2078 + 585));
                    if ( !v2043 )
                      return 0;
                    v2123 = *((_DWORD *)v2078 + 612);
                    if ( (v2123 & 4) == 0 )
                    {
                      v2124 = *((_DWORD *)v2078 + 505);
                      v2125 = *((_QWORD *)v2078 + 249);
                      v2126 = (v2123 & 0x20000000) != 0 ? *((_DWORD *)v2078 + 585) : 0;
                      if ( v2124 >= 8 )
                      {
                        v2127 = (unsigned __int64)v2124 >> 3;
                        do
                        {
                          *(_QWORD *)v2078 = 0LL;
                          v2124 -= 8;
                          v2078 += 8;
                          --v2127;
                        }
                        while ( v2127 );
                      }
                      for ( i72 = 0; v2124; --v2124 )
                        *v2078++ = 0;
                      v2129 = *((_DWORD *)v2043 + 585);
                      *((_DWORD *)v2043 + 585) = v2126;
                      if ( v2126 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2043 + 109))(v2125);
                      }
                      else
                      {
                        if ( (*((_DWORD *)v2043 + 612) & 0x10000000) == 0 )
                          i72 = v2126;
                        if ( i72 )
                          (*((void (__fastcall **)(__int64, _QWORD))v2043 + 69))(v2125 - 8, *(_QWORD *)(v2125 - 8));
                        else
                          (*((void (__fastcall **)(__int64))v2043 + 32))(v2125);
                      }
                      *((_DWORD *)v2043 + 585) = v2129;
                    }
                    *((_DWORD *)v2043 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2043 + 515);
                  v2130 = &v2043[v2119];
                  v2131 = 48;
                  HalExtensionList = v2130;
                  v4115 = v2130;
                  v2132 = v2130;
                  v2133 = 6LL;
                  do
                  {
                    *v2132 = 0LL;
                    v2131 -= 8;
                    ++v2132;
                    --v2133;
                  }
                  while ( v2133 );
                  for ( ; v2131; --v2131 )
                  {
                    *(_BYTE *)v2132 = 0;
                    v2132 = (_QWORD *)((char *)v2132 + 1);
                  }
                  *v2130 = 32;
                  *((_QWORD *)v2130 + 1) = v2121;
                  if ( (_DWORD)v2120 )
                    pg_unknown12(v2043, v2121, (unsigned int)v2120, v2130 + 6);
                  v2130[4] = v2120;
                  *((_DWORD *)v2043 + 522) += v2120;
                  v2134 = v2121;
                  v2135 = *((_DWORD *)v2043 + 517);
                  v2136 = (const char *)v2121;
                  v2137 = *((_QWORD *)v2043 + 259);
                  if ( v2121 < (_QWORD *)((char *)v2121 + v2120) )
                  {
                    do
                    {
                      _mm_prefetch(v2136, 0);
                      v2136 += 64;
                    }
                    while ( v2136 < (const char *)v2121 + v2120 );
                  }
                  v2138 = *((_QWORD *)v2043 + 259);
                  v2139 = (unsigned int)v2120 >> 7;
                  if ( (unsigned int)v2120 >> 7 )
                  {
                    do
                    {
                      v2140 = 8LL;
                      do
                      {
                        v2141 = v2134[1] ^ __ROL8__(*v2134 ^ v2138, v2135);
                        v2134 += 2;
                        v2138 = __ROL8__(v2141, v2135);
                        --v2140;
                      }
                      while ( v2140 );
                      v2142 = __ROL8__(v2137 ^ ((char *)v2134 - (char *)v2121), 17) ^ v2137 ^ ((char *)v2134
                                                                                             - (char *)v2121);
                      v4116 = (v2142 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v2135 = ((unsigned __int8)(v4116 ^ v2142) ^ (unsigned __int8)v2135) & 0x3F;
                      if ( !v2135 )
                        LOBYTE(v2135) = 1;
                      --v2139;
                    }
                    while ( v2139 );
                    v2130 = HalExtensionList;
                  }
                  v2143 = v2120 & 0x7F;
                  if ( v2143 >= 8 )
                  {
                    v2144 = (unsigned __int64)(v2120 & 0x7F) >> 3;
                    do
                    {
                      v2138 = __ROL8__(*v2134++ ^ v2138, v2135);
                      v2143 -= 8;
                      --v2144;
                    }
                    while ( v2144 );
                  }
                  for ( ; v2143; --v2143 )
                  {
                    v2145 = *(unsigned __int8 *)v2134;
                    v2134 = (_QWORD *)((char *)v2134 + 1);
                    v2138 = __ROL8__(v2145 ^ v2138, v2135);
                  }
                  for ( i73 = v2138 >> 31; i73; i73 >>= 31 )
                    LODWORD(v2138) = i73 ^ v2138;
                  v2070 = v3833;
                  v2130[5] = v2138 & 0x7FFFFFFF;
                  v4117 = v4115;
                  *((_DWORD *)v2043 + 522) += v2120;
                  v4117[10] = 0;
                  v4117[10] |= 1u;
                }
                else
                {
                  v2070 = v2101;
                }
                v2069 = v3834;
              }
            }
          }
        }
        LODWORD(i69) = v3836 + 1;
        LODWORD(v3836) = i69;
      }
      while ( (unsigned int)i69 < (unsigned int)Src );
    }
    v4026 = (unsigned int *)v2043;
    v2147 = *((unsigned int *)v2043 + 505);
    v2148 = v2147 + 48;
    if ( (unsigned int)(v2147 + 48) <= *((_DWORD *)v2043 + 647) )
    {
      v2149 = v2043;
      *((_DWORD *)v2043 + 505) = v2148;
    }
    else
    {
      v2149 = (_BYTE *)pg_unknown7(v2043, v2148, *((unsigned int *)v2043 + 585));
      if ( !v2149 )
        return 0;
      v2150 = *((_DWORD *)v2043 + 612);
      if ( (v2150 & 4) == 0 )
      {
        v2151 = *((_DWORD *)v2043 + 505);
        v2152 = *((_QWORD *)v2043 + 249);
        v2153 = (v2150 & 0x20000000) != 0 ? *((_DWORD *)v2043 + 585) : 0;
        if ( v2151 >= 8 )
        {
          v2154 = (unsigned __int64)v2151 >> 3;
          do
          {
            *(_QWORD *)v2043 = 0LL;
            v2151 -= 8;
            v2043 += 8;
            --v2154;
          }
          while ( v2154 );
        }
        for ( i74 = 0; v2151; --v2151 )
          *v2043++ = 0;
        v2156 = *((_DWORD *)v2149 + 585);
        *((_DWORD *)v2149 + 585) = v2153;
        if ( v2153 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2149 + 109))(v2152);
        }
        else
        {
          if ( (*((_DWORD *)v2149 + 612) & 0x10000000) == 0 )
            i74 = v2153;
          if ( i74 )
            (*((void (__fastcall **)(__int64, _QWORD))v2149 + 69))(v2152 - 8, *(_QWORD *)(v2152 - 8));
          else
            (*((void (__fastcall **)(__int64))v2149 + 32))(v2152);
        }
        *((_DWORD *)v2149 + 585) = v2156;
      }
      *((_DWORD *)v2149 + 612) &= ~4u;
    }
    ++*((_DWORD *)v2149 + 515);
    v2157 = &v2149[v2147];
    v2158 = 48;
    v4118 = &v2149[v2147];
    v2159 = &v2149[v2147];
    v2160 = 6LL;
    do
    {
      *v2159 = 0LL;
      v2158 -= 8;
      ++v2159;
      --v2160;
    }
    while ( v2160 );
    for ( ; v2158; --v2158 )
    {
      *(_BYTE *)v2159 = 0;
      v2159 = (_QWORD *)((char *)v2159 + 1);
    }
    *(_DWORD *)v2157 = 39;
    *((_QWORD *)v2157 + 1) = 0LL;
    *((_DWORD *)v2157 + 4) = 0;
    v2161 = *((_QWORD *)v2149 + 259);
    for ( i75 = v2161; ; LODWORD(v2161) = i75 ^ v2161 )
    {
      i75 >>= 31;
      if ( !i75 )
        break;
    }
    v2163 = (unsigned int)Size;
    *((_DWORD *)v2157 + 5) = v2161 & 0x7FFFFFFF;
    v2164 = v3853;
    v4119 = v4118;
    *((_DWORD *)v4118 + 8) = v3853;
    v2165 = &v2149[v2164];
    v2166 = &v2149[v2164 + v2163];
    v2167 = v2165;
    *((_DWORD *)v4119 + 9) = v2163;
    v2168 = v2165;
    *((_DWORD *)v2149 + 522) += v2163;
    v2169 = *((_DWORD *)v2149 + 517);
    v2170 = *((_QWORD *)v2149 + 259);
    if ( v2165 < v2166 )
    {
      do
      {
        _mm_prefetch(v2168, 0);
        v2168 += 64;
      }
      while ( v2168 < v2166 );
    }
    v2171 = *((_QWORD *)v2149 + 259);
    v2172 = (unsigned int)v2163 >> 7;
    if ( (unsigned int)v2163 >> 7 )
    {
      do
      {
        v2173 = 8LL;
        do
        {
          v2174 = v2171 ^ *(_QWORD *)v2167;
          v2175 = *((_QWORD *)v2167 + 1);
          v2167 += 16;
          v2171 = __ROL8__(__ROL8__(v2174, v2169) ^ v2175, v2169);
          --v2173;
        }
        while ( v2173 );
        v2176 = __ROL8__(v2170 ^ (v2167 - v2165), 17) ^ v2170 ^ (v2167 - v2165);
        v4120 = (v2176 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2169 = ((unsigned __int8)(v4120 ^ v2176) ^ (unsigned __int8)v2169) & 0x3F;
        if ( !v2169 )
          LOBYTE(v2169) = 1;
        --v2172;
      }
      while ( v2172 );
      LOBYTE(v2163) = Size;
    }
    v2177 = v2163 & 0x7F;
    if ( v2177 >= 8 )
    {
      v2178 = (unsigned __int64)v2177 >> 3;
      do
      {
        v2171 = __ROL8__(*(_QWORD *)v2167 ^ v2171, v2169);
        v2167 += 8;
        v2177 -= 8;
        --v2178;
      }
      while ( v2178 );
    }
    for ( ; v2177; --v2177 )
    {
      v2179 = *(unsigned __int8 *)v2167++;
      v2171 = __ROL8__(v2179 ^ v2171, v2169);
    }
    v4026 = (unsigned int *)v2149;
    *((_QWORD *)v4119 + 3) = v2171;
    if ( (*((_DWORD *)v2149 + 612) & 0x8000000) == 0 )
    {
      v2180 = *((unsigned int *)v2149 + 505);
      v2181 = *((unsigned int *)v2149 + 585);
      v2182 = 16 * *((_DWORD *)v2149 + 681);
      v2183 = 16 * *((_DWORD *)v2149 + 680) + 8;
      LODWORD(Src) = 16 * *((_DWORD *)v2149 + 680) + 2728;
      v2184 = v2180 + 48;
      if ( (unsigned int)(v2180 + 48) <= *((_DWORD *)v2149 + 647) )
      {
        v2185 = v2149;
        *((_DWORD *)v2149 + 505) = v2184;
      }
      else
      {
        v2185 = (_BYTE *)pg_unknown7(v2149, v2184, v2181);
        if ( !v2185 )
          return 0;
        v2186 = *((_DWORD *)v2149 + 612);
        if ( (v2186 & 4) == 0 )
        {
          v2187 = *((_DWORD *)v2149 + 505);
          v2188 = *((_QWORD *)v2149 + 249);
          v2189 = (v2186 & 0x20000000) != 0 ? *((_DWORD *)v2149 + 585) : 0;
          if ( v2187 >= 8 )
          {
            v2190 = (unsigned __int64)v2187 >> 3;
            do
            {
              *(_QWORD *)v2149 = 0LL;
              v2187 -= 8;
              v2149 += 8;
              --v2190;
            }
            while ( v2190 );
          }
          for ( i76 = 0; v2187; --v2187 )
            *v2149++ = 0;
          v2192 = *((_DWORD *)v2185 + 585);
          *((_DWORD *)v2185 + 585) = v2189;
          if ( v2189 == 3 )
          {
            (*((void (__fastcall **)(__int64))v2185 + 109))(v2188);
          }
          else
          {
            if ( (*((_DWORD *)v2185 + 612) & 0x10000000) == 0 )
              i76 = v2189;
            if ( i76 )
              (*((void (__fastcall **)(__int64, _QWORD))v2185 + 69))(v2188 - 8, *(_QWORD *)(v2188 - 8));
            else
              (*((void (__fastcall **)(__int64))v2185 + 32))(v2188);
          }
          *((_DWORD *)v2185 + 585) = v2192;
        }
        *((_DWORD *)v2185 + 612) &= ~4u;
      }
      ++*((_DWORD *)v2185 + 515);
      v2193 = &v2185[v2180];
      v2194 = 48;
      v4121 = &v2185[v2180];
      v2195 = &v2185[v2180];
      v2196 = 6LL;
      do
      {
        *v2195 = 0LL;
        v2194 -= 8;
        ++v2195;
        --v2196;
      }
      while ( v2196 );
      for ( ; v2194; --v2194 )
      {
        *(_BYTE *)v2195 = 0;
        v2195 = (_QWORD *)((char *)v2195 + 1);
      }
      *(_DWORD *)v2193 = 40;
      *((_QWORD *)v2193 + 1) = 0LL;
      *((_DWORD *)v2193 + 4) = 0;
      v2197 = *((_QWORD *)v2185 + 259);
      for ( i77 = v2197; ; LODWORD(v2197) = i77 ^ v2197 )
      {
        i77 >>= 31;
        if ( !i77 )
          break;
      }
      *((_DWORD *)v2193 + 5) = v2197 & 0x7FFFFFFF;
      v2199 = v2185 + 2720;
      v4122 = v4121;
      v2200 = (unsigned __int64)&v2185[v2183 + 2720];
      *((_DWORD *)v4121 + 8) = 2720;
      *((_DWORD *)v4122 + 9) = v2183;
      v2201 = v2185 + 2720;
      *((_DWORD *)v2185 + 522) += v2183;
      v2202 = *((_DWORD *)v2185 + 517);
      v2203 = *((_QWORD *)v2185 + 259);
      if ( (unsigned __int64)(v2185 + 2720) < v2200 )
      {
        do
        {
          _mm_prefetch(v2201, 0);
          v2201 += 64;
        }
        while ( (unsigned __int64)v2201 < v2200 );
      }
      v2204 = *((_QWORD *)v2185 + 259);
      for ( i78 = v2183 >> 7; i78; --i78 )
      {
        v2206 = 8LL;
        do
        {
          v2207 = v2204 ^ *v2199;
          v2208 = v2199[1];
          v2199 += 2;
          v2204 = __ROL8__(__ROL8__(v2207, v2202) ^ v2208, v2202);
          --v2206;
        }
        while ( v2206 );
        v2209 = __ROL8__(v2203 ^ ((char *)v2199 - (v2185 + 2720)), 17) ^ v2203 ^ ((char *)v2199 - (v2185 + 2720));
        v4123 = ((unsigned __int64)v2209 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2202 = ((unsigned __int8)(v4123 ^ v2209) ^ (unsigned __int8)v2202) & 0x3F;
        if ( !v2202 )
          LOBYTE(v2202) = 1;
      }
      v2210 = v2183 & 0x7F;
      if ( v2210 >= 8 )
      {
        v2211 = (unsigned __int64)v2210 >> 3;
        do
        {
          v2204 = __ROL8__(*v2199++ ^ v2204, v2202);
          v2210 -= 8;
          --v2211;
        }
        while ( v2211 );
      }
      for ( ; v2210; --v2210 )
      {
        v2212 = *(unsigned __int8 *)v2199;
        v2199 = (_QWORD *)((char *)v2199 + 1);
        v2204 = __ROL8__(v2212 ^ v2204, v2202);
      }
      v4026 = (unsigned int *)v2185;
      *((_QWORD *)v4122 + 3) = v2204;
      v2213 = *((unsigned int *)v2185 + 505);
      v2214 = v2213 + 48;
      if ( (unsigned int)(v2213 + 48) <= *((_DWORD *)v2185 + 647) )
      {
        v2215 = (__int64)v2185;
        *((_DWORD *)v2185 + 505) = v2214;
      }
      else
      {
        v2215 = pg_unknown7(v2185, v2214, *((unsigned int *)v2185 + 585));
        if ( !v2215 )
          return 0;
        v2216 = *((_DWORD *)v2185 + 612);
        if ( (v2216 & 4) == 0 )
        {
          v2217 = *((_DWORD *)v2185 + 505);
          v2218 = *((_QWORD *)v2185 + 249);
          v2219 = (v2216 & 0x20000000) != 0 ? *((_DWORD *)v2185 + 585) : 0;
          if ( v2217 >= 8 )
          {
            v2220 = (unsigned __int64)v2217 >> 3;
            do
            {
              *(_QWORD *)v2185 = 0LL;
              v2217 -= 8;
              v2185 += 8;
              --v2220;
            }
            while ( v2220 );
          }
          for ( i79 = 0; v2217; --v2217 )
            *v2185++ = 0;
          v2222 = *(_DWORD *)(v2215 + 2340);
          *(_DWORD *)(v2215 + 2340) = v2219;
          if ( v2219 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2215 + 872))(v2218);
          }
          else
          {
            if ( (*(_DWORD *)(v2215 + 2448) & 0x10000000) == 0 )
              i79 = v2219;
            if ( i79 )
              (*(void (__fastcall **)(__int64, _QWORD))(v2215 + 552))(v2218 - 8, *(_QWORD *)(v2218 - 8));
            else
              (*(void (__fastcall **)(__int64))(v2215 + 256))(v2218);
          }
          *(_DWORD *)(v2215 + 2340) = v2222;
        }
        *(_DWORD *)(v2215 + 2448) &= ~4u;
      }
      ++*(_DWORD *)(v2215 + 2060);
      v2223 = v2215 + v2213;
      v2224 = 48;
      v4124 = v2215 + v2213;
      v2225 = (_QWORD *)(v2215 + v2213);
      v2226 = 6LL;
      do
      {
        *v2225 = 0LL;
        v2224 -= 8;
        ++v2225;
        --v2226;
      }
      while ( v2226 );
      for ( ; v2224; --v2224 )
      {
        *(_BYTE *)v2225 = 0;
        v2225 = (_QWORD *)((char *)v2225 + 1);
      }
      *(_DWORD *)v2223 = 41;
      *(_QWORD *)(v2223 + 8) = 0LL;
      *(_DWORD *)(v2223 + 16) = 0;
      v2227 = *(_QWORD *)(v2215 + 2072);
      for ( i80 = v2227; ; LODWORD(v2227) = i80 ^ v2227 )
      {
        i80 >>= 31;
        if ( !i80 )
          break;
      }
      *(_DWORD *)(v2223 + 20) = v2227 & 0x7FFFFFFF;
      v2229 = (unsigned int)Src;
      v4125 = v4124;
      *(_DWORD *)(v4124 + 32) = (_DWORD)Src;
      v2230 = (_QWORD *)(v2215 + v2229);
      v2231 = v2230;
      v2232 = v2215 + v2229 + v2182;
      *(_DWORD *)(v4125 + 36) = v2182;
      v2233 = (const char *)v2230;
      *(_DWORD *)(v2215 + 2088) += v2182;
      v2234 = *(_DWORD *)(v2215 + 2068);
      v2235 = *(_QWORD *)(v2215 + 2072);
      if ( (unsigned __int64)v2230 < v2232 )
      {
        do
        {
          _mm_prefetch(v2233, 0);
          v2233 += 64;
        }
        while ( (unsigned __int64)v2233 < v2232 );
      }
      v2236 = *(_QWORD *)(v2215 + 2072);
      for ( i81 = v2182 >> 7; i81; --i81 )
      {
        v2238 = 8LL;
        do
        {
          v2239 = v2236 ^ *v2231;
          v2240 = v2231 + 1;
          v2241 = *v2240;
          v2231 = v2240 + 1;
          v2236 = __ROL8__(__ROL8__(v2239, v2234) ^ v2241, v2234);
          --v2238;
        }
        while ( v2238 );
        v2242 = __ROL8__(v2235 ^ ((char *)v2231 - (char *)v2230), 17) ^ v2235 ^ ((char *)v2231 - (char *)v2230);
        v4126 = (v2242 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2234 = ((unsigned __int8)(v4126 ^ v2242) ^ (unsigned __int8)v2234) & 0x3F;
        if ( !v2234 )
          LOBYTE(v2234) = 1;
      }
      v2243 = v2182 & 0x7F;
      if ( v2243 >= 8 )
      {
        v2244 = (unsigned __int64)v2243 >> 3;
        do
        {
          v2236 = __ROL8__(*v2231++ ^ v2236, v2234);
          v2243 -= 8;
          --v2244;
        }
        while ( v2244 );
      }
      for ( ; v2243; --v2243 )
      {
        v2245 = *(unsigned __int8 *)v2231;
        v2231 = (_QWORD *)((char *)v2231 + 1);
        v2236 = __ROL8__(v2245 ^ v2236, v2234);
      }
      v4026 = (unsigned int *)v2215;
      *(_QWORD *)(v4125 + 24) = v2236;
    }
    v2246 = v4026;
    HalExtensionList = v4026;
    v2247 = (unsigned int)(((v4026[612] >> 30) & 1) == 0) + 6;
    if ( ((int (__fastcall *)(__int64, __int64, __int64 *, char *))off_140C00A68[0])(37LL, 16LL, &v4274, v3899) < 0 )
      v4275 = 0LL;
    else
      v2247 = (unsigned int)(v4275 + v2247);
    LODWORD(Src) = v3888 & 6;
    if ( (v3888 & 6) == 0 )
    {
      if ( PspPicoProviderRanges )
        LODWORD(v2247) = *(_DWORD *)(PspPicoProviderRanges + 8) + v2247;
      if ( __29 )
        LODWORD(v2247) = *(_DWORD *)(__29 + 8) + v2247;
      v2247 = (unsigned int)(qword_140C04760 + v2247);
    }
    v2248 = __rdtsc();
    v2249 = (__ROR8__(v2248, 3) ^ v2248) * (unsigned __int128)0x7010008004002001uLL;
    v4127 = *((_QWORD *)&v2249 + 1);
    v2250 = ((unsigned __int64)v2249 ^ *((_QWORD *)&v2249 + 1)) % 0xB;
    if ( (unsigned int)v2250 > 5 )
    {
      v2254 = v2250 - 6;
      if ( v2254 )
      {
        v2255 = v2254 - 1;
        if ( v2255 )
        {
          v2256 = v2255 - 1;
          if ( v2256 )
          {
            if ( v2256 == 1 )
            {
              v3902[4] = -1333354875;
              v2253 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v2257 = __rdtsc();
              v2258 = __ROR8__(v2257, 3);
              v4128 = ((v2258 ^ v2257) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v2259 = v4128 ^ (67117057 * (v2258 ^ v2257));
              v2253 = ((((((v2259 % 0x1A + 97) << 8) | ((v2259 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v2259 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v2259 >> 10) % 0x1A + 97)) << 8) | ((v2259 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            v3902[5] = 1684422978;
            v2253 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          v3902[6] = -2100910376;
          v2253 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        v3902[7] = 1314342514;
        v2253 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v2250 == 5 )
    {
      v3902[3] = 680282605;
      v2253 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v2250 )
    {
      v2251 = v2250 - 1;
      if ( v2251 )
      {
        v2252 = v2251 - 1;
        if ( v2252 )
        {
          if ( v2252 == 1 )
          {
            v3901 = -1474152136;
            v2253 = __ROR4__(-1474152133, 15);
          }
          else
          {
            v3900 = 1728537748;
            v2253 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v3902[37] = -2051698419;
          v2253 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        v3902[1] = -1297272415;
        v2253 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      v3902[2] = -795291432;
      v2253 = __ROR4__(-795291432, 6);
    }
    v2260 = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2247, v2253);
    v3839 = (ULONG_PTR)v2260;
    if ( !v2260 )
      return 0;
    v2261 = __rdtsc();
    v2262 = (__ROR8__(v2261, 3) ^ v2261) * (unsigned __int128)0x7010008004002001uLL;
    v4129 = *((_QWORD *)&v2262 + 1);
    v2263 = ((unsigned __int64)v2262 ^ *((_QWORD *)&v2262 + 1)) % 0xB;
    if ( (unsigned int)v2263 > 5 )
    {
      v2267 = v2263 - 6;
      if ( v2267 )
      {
        v2268 = v2267 - 1;
        if ( v2268 )
        {
          v2269 = v2268 - 1;
          if ( v2269 )
          {
            if ( v2269 == 1 )
            {
              v3902[14] = -1333354875;
              v2266 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v2270 = __rdtsc();
              v2271 = __ROR8__(v2270, 3);
              v4130 = ((v2271 ^ v2270) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v2272 = v4130 ^ (67117057 * (v2271 ^ v2270));
              v2266 = ((((((v2272 % 0x1A + 97) << 8) | ((v2272 >> 5)
                                                      - 26
                                                      * ((unsigned int)((1321528399 * (unsigned __int64)(v2272 >> 5)) >> 32) >> 3)
                                                      + 65)) << 8) | ((v2272 >> 10) % 0x1A + 97)) << 8) | ((v2272 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            v3902[15] = 1684422978;
            v2266 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          v3902[16] = -2100910376;
          v2266 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        v3902[17] = 1314342514;
        v2266 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v2263 == 5 )
    {
      v3902[13] = 680282605;
      v2266 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v2263 )
    {
      v2264 = v2263 - 1;
      if ( v2264 )
      {
        v2265 = v2264 - 1;
        if ( v2265 )
        {
          if ( v2265 == 1 )
          {
            v3902[9] = -1474152136;
            v2266 = __ROR4__(-1474152133, 15);
          }
          else
          {
            v3902[8] = 1728537748;
            v2266 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v3902[10] = -2051698419;
          v2266 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        v3902[11] = -1297272415;
        v2266 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      v3902[12] = -795291432;
      v2266 = __ROR4__(-795291432, 6);
    }
    v2274 = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2247, v2266);
    v3838 = (ULONG_PTR)v2274;
    if ( !v2274 )
    {
      v2275 = v2260;
LABEL_3208:
      ExFreePoolWithTag(v2275, v2273);
      return 0;
    }
    v2276 = dword_140D585C8;
    *v2260 = (unsigned int)dword_140D585C8 - 0x88000000000LL;
    v2277 = 1;
    *v2274 = 4096 - v2276;
    LODWORD(v3834) = v3888 & 2;
    if ( (v3888 & 2) == 0 )
    {
      v2260[1] = &InitSafeBootMode;
      v2277 = 2;
      v2274[1] = 4;
    }
    v2278 = (int)Src;
    v2279 = v2277;
    v2280 = v2277 + 1;
    v2260[v2279] = &RtlpUnwindHistoryTable;
    v2274[v2279] = 216;
    v2260[v2280] = &xmmword_140E00020;
    v2274[v2280] = 24;
    v2281 = (unsigned int)(v2280 + 1);
    LODWORD(v3833) = v2281;
    if ( v2278 )
    {
      v4132 = 0LL;
      v4131 = 0LL;
    }
    else
    {
      MmQueryApiSetSchema(&v4132, &v4131);
      v2278 = (int)Src;
      v2260[v2281] = v4132;
      v2274[v2281] = 8;
      v2282 = (unsigned int)(v2281 + 1);
      v2260[v2282] = v4131;
      v2274[v2282] = 8;
      v2281 = (unsigned int)(v2282 + 1);
      v893 = (v2246[612] & 0x40000000) == 0;
      LODWORD(v3833) = v2281;
      if ( v893 )
      {
        v2260[v2281] = *v4132;
        v2274[v2281] = *v4131;
        v2281 = (unsigned int)(v2281 + 1);
        LODWORD(v3833) = v2281;
      }
    }
    v2283 = 0;
    if ( v4275 )
    {
      v2284 = 0LL;
      do
      {
        v2285 = 2 * v2284;
        ++v2283;
        v2260[v2281] = *(_QWORD *)(v4274 + 8 * v2285);
        v2274[v2281] = *(_DWORD *)(v4274 + 8 * v2285 + 8);
        v2281 = (unsigned int)(v2281 + 1);
        v2284 = v2283;
      }
      while ( v2283 < v4275 );
      LODWORD(v3833) = v2281;
    }
    if ( !v2278 )
    {
      v2286 = (_QWORD *)PspPicoProviderRanges;
      if ( PspPicoProviderRanges )
      {
        v2287 = 0;
        if ( *(_QWORD *)(PspPicoProviderRanges + 8) )
        {
          v2288 = 0LL;
          do
          {
            v2289 = 2 * v2288;
            ++v2287;
            v2260[v2281] = *(_QWORD *)(*v2286 + 8 * v2289);
            v2274[v2281] = *(_DWORD *)(*(_QWORD *)PspPicoProviderRanges + 8 * v2289 + 8);
            v2281 = (unsigned int)(v2281 + 1);
            v2286 = (_QWORD *)PspPicoProviderRanges;
            v2288 = v2287;
          }
          while ( (unsigned __int64)v2287 < *(_QWORD *)(PspPicoProviderRanges + 8) );
          LODWORD(v3833) = v2281;
        }
      }
      v2290 = (_QWORD *)__29;
      if ( __29 )
      {
        v2291 = 0;
        if ( *(_QWORD *)(__29 + 8) )
        {
          v2292 = 0LL;
          do
          {
            v2293 = 2 * v2292;
            ++v2291;
            v2260[v2281] = *(_QWORD *)(*v2290 + 8 * v2293);
            v2274[v2281] = *(_DWORD *)(*(_QWORD *)__29 + 8 * v2293 + 8);
            v2281 = (unsigned int)(v2281 + 1);
            v2290 = (_QWORD *)__29;
            v2292 = v2291;
          }
          while ( (unsigned __int64)v2291 < *(_QWORD *)(__29 + 8) );
          LODWORD(v3833) = v2281;
        }
      }
      v2294 = 0;
      if ( qword_140C04760 )
      {
        v2295 = 0LL;
        do
        {
          v2296 = 2 * v2295;
          ++v2294;
          v2260[v2281] = PspKernelRanges[v2296];
          v2274[v2281] = PspKernelRanges[v2296 + 1];
          v2281 = (unsigned int)(v2281 + 1);
          v2295 = v2294;
        }
        while ( v2294 < (unsigned __int64)qword_140C04760 );
        LODWORD(v3833) = v2281;
      }
    }
    v2297 = v4026;
    if ( (*(_BYTE *)((v4026[599] ^ 0xBC2A27DBLL) - 0x88000000000LL) & 2) != 0 )
      v4026[505] += 4096;
    v2299 = 32;
    v2300 = *((unsigned int *)v2297 + 505);
    v2301 = *((unsigned int *)v2297 + 585);
    LODWORD(v3836) = *((_DWORD *)v2297 + 526);
    v2298 = v3836;
    if ( (_DWORD)v3836 != 7 )
      v2299 = 0;
    v2302 = v2300 + 48 * v2281;
    LODWORD(v3837) = v2299;
    if ( v2302 <= *((_DWORD *)v2297 + 647) )
    {
      v2303 = v2297;
      v3841 = (unsigned __int64)v2297;
      *((_DWORD *)v2297 + 505) = v2302;
      goto LABEL_3257;
    }
    v2303 = (_BYTE *)pg_unknown7(v2297, v2302, v2301);
    v3841 = (unsigned __int64)v2303;
    if ( v2303 )
    {
      v2304 = *((_DWORD *)HalExtensionList + 612);
      if ( (v2304 & 4) == 0 )
      {
        v2305 = *((_DWORD *)v2297 + 505);
        v2306 = *((_QWORD *)v2297 + 249);
        v2307 = (v2304 & 0x20000000) != 0 ? *((_DWORD *)v2297 + 585) : 0;
        if ( v2305 >= 8 )
        {
          v2308 = (unsigned __int64)v2305 >> 3;
          do
          {
            *(_QWORD *)v2297 = 0LL;
            v2305 -= 8;
            v2297 += 8;
            --v2308;
          }
          while ( v2308 );
        }
        for ( i82 = 0; v2305; --v2305 )
          *v2297++ = 0;
        v2310 = *((_DWORD *)v2303 + 585);
        *((_DWORD *)v2303 + 585) = v2307;
        if ( v2307 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2303 + 109))(v2306);
        }
        else
        {
          if ( (*((_DWORD *)v2303 + 612) & 0x10000000) == 0 )
            i82 = v2307;
          if ( i82 )
            (*((void (__fastcall **)(__int64, _QWORD))v2303 + 69))(v2306 - 8, *(_QWORD *)(v2306 - 8));
          else
            (*((void (__fastcall **)(__int64))v2303 + 32))(v2306);
        }
        *((_DWORD *)v2303 + 585) = v2310;
      }
      *((_DWORD *)v2303 + 612) &= ~4u;
      v2299 = v3837;
      v2298 = v3836;
LABEL_3257:
      *((_DWORD *)v2303 + 515) += v2281;
      v2311 = &v2303[v2300];
      v4133 = &v2303[v2300];
      v4134 = &v2303[v2300];
      if ( (_DWORD)v2281 )
      {
        v2312 = v2260;
        v3840 = (unsigned int)v2281;
        v2313 = v2274;
        HalExtensionList = v2274;
        do
        {
          v2314 = (unsigned int)*v2313;
          v2315 = 48;
          v2316 = (_QWORD *)*v2312;
          v2317 = v2311;
          LODWORD(v3846) = *v2313;
          v2318 = 6LL;
          do
          {
            *v2317 = 0LL;
            v2315 -= 8;
            ++v2317;
            --v2318;
          }
          while ( v2318 );
          for ( ; v2315; --v2315 )
          {
            *(_BYTE *)v2317 = 0;
            v2317 = (_QWORD *)((char *)v2317 + 1);
          }
          *(_DWORD *)v2311 = v2299;
          *((_QWORD *)v2311 + 1) = v2316;
          if ( v2298 == 7 && (_DWORD)v2314 )
            pg_unknown12(v2303, v2316, (unsigned int)v2314, v2311 + 24);
          *((_DWORD *)v2311 + 4) = v2314;
          *((_DWORD *)v2303 + 522) += v2314;
          v2319 = v2316;
          v2320 = *((_DWORD *)v2303 + 517);
          v2321 = (const char *)v2316;
          v2322 = *((_QWORD *)v2303 + 259);
          if ( v2316 < (_QWORD *)((char *)v2316 + v2314) )
          {
            do
            {
              _mm_prefetch(v2321, 0);
              v2321 += 64;
            }
            while ( v2321 < (const char *)v2316 + v2314 );
          }
          v2323 = *((_QWORD *)v2303 + 259);
          v2324 = (unsigned int)v2314 >> 7;
          if ( (unsigned int)v2314 >> 7 )
          {
            do
            {
              v2325 = 8LL;
              do
              {
                v2326 = v2323 ^ *v2319;
                v2327 = v2319[1];
                v2319 += 2;
                v2323 = __ROL8__(__ROL8__(v2326, v2320) ^ v2327, v2320);
                --v2325;
              }
              while ( v2325 );
              v2328 = __ROL8__(v2322 ^ ((char *)v2319 - (char *)v2316), 17) ^ v2322 ^ ((char *)v2319 - (char *)v2316);
              v4135 = (v2328 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v2320 = ((unsigned __int8)(v4135 ^ v2328) ^ (unsigned __int8)v2320) & 0x3F;
              if ( !v2320 )
                LOBYTE(v2320) = 1;
              --v2324;
            }
            while ( v2324 );
            v2303 = (_BYTE *)v3841;
            LODWORD(v2314) = v3846;
            v2313 = HalExtensionList;
          }
          LODWORD(v2273) = v2314 & 0x7F;
          if ( (unsigned int)v2273 >= 8 )
          {
            v2329 = (unsigned __int64)(v2314 & 0x7F) >> 3;
            do
            {
              v2323 = __ROL8__(*v2319++ ^ v2323, v2320);
              LODWORD(v2273) = v2273 - 8;
              --v2329;
            }
            while ( v2329 );
            v2313 = HalExtensionList;
          }
          for ( ; (_DWORD)v2273; LODWORD(v2273) = v2273 - 1 )
          {
            v2330 = *(unsigned __int8 *)v2319;
            v2319 = (_QWORD *)((char *)v2319 + 1);
            v2323 = __ROL8__(v2330 ^ v2323, v2320);
          }
          for ( i83 = v2323 >> 31; i83; i83 >>= 31 )
            LODWORD(v2323) = i83 ^ v2323;
          v2299 = v3837;
          v2298 = v3836;
          ++v2313;
          *((_DWORD *)v2311 + 5) = v2323 & 0x7FFFFFFF;
          ++v2312;
          *((_DWORD *)v2303 + 522) += v2314;
          v2311 = v4133 + 48;
          HalExtensionList = v2313;
          v893 = v3840-- == 1;
          v4133 += 48;
        }
        while ( !v893 );
        v2311 = v4134;
        LODWORD(v2281) = v3833;
        v2274 = (_DWORD *)v3838;
        v2260 = (_QWORD *)v3839;
      }
      if ( (_DWORD)v3836 == 7 && (_DWORD)v2281 )
      {
        do
        {
          *((_DWORD *)v2311 + 10) |= 1u;
          v2311 = v4134 + 48;
          v4134 += 48;
          LODWORD(v2281) = v2281 - 1;
        }
        while ( (_DWORD)v2281 );
      }
    }
    else
    {
      v2303 = 0LL;
    }
    v4026 = (unsigned int *)v2303;
    ExFreePoolWithTag(v2274, v2273);
    ExFreePoolWithTag(v2260, v2332);
    if ( !v2303 )
      return 0;
    if ( (*((_DWORD *)v2303 + 612) & 0x40000000) != 0 && v4132 )
    {
      v2333 = 32;
      v2334 = *((_DWORD *)v2303 + 526);
      v2335 = *((unsigned int *)v2303 + 505);
      v2336 = (_QWORD *)*v4132;
      v2337 = (unsigned int)*v4131;
      v2338 = *((unsigned int *)v2303 + 585);
      if ( v2334 != 7 )
        v2333 = 0;
      v2339 = v2335 + 48;
      LODWORD(v3833) = *((_DWORD *)v2303 + 526);
      LODWORD(v3836) = v2333;
      if ( (unsigned int)(v2335 + 48) <= *((_DWORD *)v2303 + 647) )
      {
        v2340 = (__int64)v2303;
        *((_DWORD *)v2303 + 505) = v2339;
      }
      else
      {
        v2340 = pg_unknown7(v2303, v2339, v2338);
        if ( !v2340 )
          return 0;
        v2341 = *((_DWORD *)v2303 + 612);
        if ( (v2341 & 4) == 0 )
        {
          v2342 = *((_DWORD *)v2303 + 505);
          v2343 = *((_QWORD *)v2303 + 249);
          v2344 = (v2341 & 0x20000000) != 0 ? *((_DWORD *)v2303 + 585) : 0;
          if ( v2342 >= 8 )
          {
            v2345 = (unsigned __int64)v2342 >> 3;
            do
            {
              *(_QWORD *)v2303 = 0LL;
              v2342 -= 8;
              v2303 += 8;
              --v2345;
            }
            while ( v2345 );
          }
          for ( i84 = 0; v2342; --v2342 )
            *v2303++ = 0;
          v2347 = *(_DWORD *)(v2340 + 2340);
          *(_DWORD *)(v2340 + 2340) = v2344;
          if ( v2344 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2340 + 872))(v2343);
          }
          else
          {
            if ( (*(_DWORD *)(v2340 + 2448) & 0x10000000) == 0 )
              i84 = v2344;
            if ( i84 )
              (*(void (__fastcall **)(__int64, _QWORD))(v2340 + 552))(v2343 - 8, *(_QWORD *)(v2343 - 8));
            else
              (*(void (__fastcall **)(__int64))(v2340 + 256))(v2343);
          }
          v2333 = v3836;
          *(_DWORD *)(v2340 + 2340) = v2347;
        }
        *(_DWORD *)(v2340 + 2448) &= ~4u;
        v2334 = v3833;
      }
      v2348 = v2340 + v2335;
      ++*(_DWORD *)(v2340 + 2060);
      v2349 = (_QWORD *)v2348;
      v4136 = v2348;
      v2350 = 48;
      v2351 = 6LL;
      do
      {
        *v2349 = 0LL;
        v2350 -= 8;
        ++v2349;
        --v2351;
      }
      while ( v2351 );
      for ( ; v2350; --v2350 )
      {
        *(_BYTE *)v2349 = 0;
        v2349 = (_QWORD *)((char *)v2349 + 1);
      }
      *(_DWORD *)v2348 = v2333;
      *(_QWORD *)(v2348 + 8) = v2336;
      if ( v2334 == 7 && (_DWORD)v2337 )
        pg_unknown12(v2340, v2336, (unsigned int)v2337, v2348 + 24);
      *(_DWORD *)(v2348 + 16) = v2337;
      *(_DWORD *)(v2340 + 2088) += v2337;
      v2352 = v2336;
      v2353 = *(_DWORD *)(v2340 + 2068);
      v2354 = (const char *)v2336;
      v2355 = *(_QWORD *)(v2340 + 2072);
      if ( v2336 < (_QWORD *)((char *)v2336 + v2337) )
      {
        do
        {
          _mm_prefetch(v2354, 0);
          v2354 += 64;
        }
        while ( v2354 < (const char *)v2336 + v2337 );
      }
      v2356 = *(_QWORD *)(v2340 + 2072);
      for ( i85 = (unsigned int)v2337 >> 7; i85; --i85 )
      {
        v2358 = 8LL;
        do
        {
          v2359 = v2356 ^ *v2352;
          v2360 = v2352[1];
          v2352 += 2;
          v2356 = __ROL8__(__ROL8__(v2359, v2353) ^ v2360, v2353);
          --v2358;
        }
        while ( v2358 );
        v2361 = __ROL8__(v2355 ^ ((char *)v2352 - (char *)v2336), 17) ^ v2355 ^ ((char *)v2352 - (char *)v2336);
        v4137 = (v2361 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v2353 = ((unsigned __int8)(v4137 ^ v2361) ^ (unsigned __int8)v2353) & 0x3F;
        if ( !v2353 )
          LOBYTE(v2353) = 1;
      }
      v2362 = v2337 & 0x7F;
      if ( v2362 >= 8 )
      {
        v2363 = (unsigned __int64)(v2337 & 0x7F) >> 3;
        do
        {
          v2356 = __ROL8__(*v2352++ ^ v2356, v2353);
          v2362 -= 8;
          --v2363;
        }
        while ( v2363 );
      }
      for ( ; v2362; --v2362 )
      {
        v2364 = *(unsigned __int8 *)v2352;
        v2352 = (_QWORD *)((char *)v2352 + 1);
        v2356 = __ROL8__(v2364 ^ v2356, v2353);
      }
      for ( i86 = v2356; ; LODWORD(v2356) = i86 ^ v2356 )
      {
        i86 >>= 31;
        if ( !i86 )
          break;
      }
      v4026 = (unsigned int *)v2340;
      *(_DWORD *)(v2348 + 20) = v2356 & 0x7FFFFFFF;
      v2303 = (_BYTE *)v2340;
      *(_DWORD *)(v2340 + 2088) += v2337;
    }
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v4276[0] = 8;
    v4328 = &HvlpHypercallCodeVa;
    LODWORD(v3833) = -1;
    v2366 = 1;
    if ( !HvlpHypercallCodeVa )
    {
      v4329 = HvlpInterruptCallback;
      v2382 = dword_140D585F8;
      goto LABEL_3352;
    }
    if ( *((_DWORD *)v2303 + 526) == 7 || *((int *)v2303 + 612) >= 0 && !(unsigned __int8)HvlIsHypercallOverlayLocked() )
    {
      v4329 = (__int64 (__fastcall **)())HvlpHypercallCodeVa;
      _RAX = 0x40000000LL;
      __asm { cpuid }
      v4277 = _RAX;
      v4278 = __PAIR64__(_RCX, _RBX);
      v4279 = _RDX;
      if ( __PAIR64__(_RCX, _RBX) != *(_QWORD *)"Microsoft Hv" )
        goto LABEL_3349;
      if ( (_DWORD)_RDX != *(_DWORD *)"t Hv" )
        goto LABEL_3349;
      if ( (unsigned int)_RAX < 0x40000002 )
        goto LABEL_3349;
      _RAX = 1073741825LL;
      __asm { cpuid }
      v4277 = _RAX;
      v4278 = __PAIR64__(_RCX, _RBX);
      v4279 = _RDX;
      if ( (_DWORD)_RAX != 824407624 )
        goto LABEL_3349;
      _RAX = 1073741826LL;
      __asm { cpuid }
      v4277 = _RAX;
      v4278 = __PAIR64__(_RCX, _RBX);
      v4279 = _RDX;
      if ( (_RBX & 0xFFFF0000) != 0x60000 )
        goto LABEL_3349;
      if ( (unsigned __int16)_RBX == 1 )
        v2382 = 4;
      else
LABEL_3349:
        v2382 = 4096;
      LODWORD(v3833) = 1;
LABEL_3352:
      v2366 = 2;
      v4276[1] = v2382;
    }
    v2383 = *((_DWORD *)v2303 + 526);
    v2384 = *((unsigned int *)v2303 + 505);
    LODWORD(v2385) = 32;
    v2386 = *((unsigned int *)v2303 + 585);
    v2387 = v2366;
    v2388 = v2366 + 1;
    LODWORD(v3836) = v2388;
    LODWORD(v3837) = v2383;
    (&v4328)[v2387] = (PVOID *)&HvlpVsmVtlCallVa;
    v4276[v2387] = 8;
    if ( v2383 != 7 )
      LODWORD(v2385) = 0;
    v2389 = v2384 + 48 * v2388;
    LODWORD(v3846) = v2385;
    if ( v2389 <= *((_DWORD *)v2303 + 647) )
    {
      v2390 = (unsigned int *)v2303;
      HalExtensionList = v2303;
      *((_DWORD *)v2303 + 505) = v2389;
    }
    else
    {
      v2390 = (unsigned int *)pg_unknown7(v2303, v2389, v2386);
      HalExtensionList = v2390;
      if ( !v2390 )
        return 0;
      v2391 = *((_DWORD *)v2303 + 612);
      if ( (v2391 & 4) == 0 )
      {
        v2392 = *((_DWORD *)v2303 + 505);
        v2393 = *((_QWORD *)v2303 + 249);
        v2394 = (v2391 & 0x20000000) != 0 ? *((_DWORD *)v2303 + 585) : 0;
        if ( v2392 >= 8 )
        {
          v2395 = (unsigned __int64)v2392 >> 3;
          do
          {
            *(_QWORD *)v2303 = 0LL;
            v2392 -= 8;
            v2303 += 8;
            --v2395;
          }
          while ( v2395 );
        }
        for ( i87 = 0; v2392; --v2392 )
          *v2303++ = 0;
        v2397 = v2390[585];
        v2390[585] = v2394;
        if ( v2394 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2390 + 109))(v2393);
        }
        else
        {
          if ( (v2390[612] & 0x10000000) == 0 )
            i87 = v2394;
          if ( i87 )
            (*((void (__fastcall **)(__int64, _QWORD))v2390 + 69))(v2393 - 8, *(_QWORD *)(v2393 - 8));
          else
            (*((void (__fastcall **)(__int64))v2390 + 32))(v2393);
        }
        v2388 = v3836;
        v2390[585] = v2397;
      }
      v2390[612] &= ~4u;
      LODWORD(v2385) = v3846;
      v2383 = v3837;
    }
    v2390[515] += v2388;
    v2398 = &v4328;
    v2399 = (char *)v2390 + v2384;
    v4138 = v2399;
    v2400 = v4276;
    v4139 = v2399;
    v3839 = (ULONG_PTR)&v4328;
    v3838 = v2388;
    do
    {
      v2401 = (unsigned int)*v2400;
      v2402 = 48;
      v2403 = (_QWORD *)*v2398;
      v2404 = v2399;
      LODWORD(Size) = *v2400;
      v2405 = 6LL;
      do
      {
        *v2404 = 0LL;
        v2402 -= 8;
        ++v2404;
        --v2405;
      }
      while ( v2405 );
      for ( ; v2402; --v2402 )
      {
        *(_BYTE *)v2404 = 0;
        v2404 = (_QWORD *)((char *)v2404 + 1);
      }
      *(_DWORD *)v2399 = v2385;
      *((_QWORD *)v2399 + 1) = v2403;
      if ( v2383 == 7 && (_DWORD)v2401 )
      {
        pg_unknown12(v2390, v2403, (unsigned int)v2401, v2399 + 24);
        v2398 = (_QWORD *)v3839;
      }
      *((_DWORD *)v2399 + 4) = v2401;
      v2390[522] += v2401;
      v2406 = v2403;
      v2407 = v2390[517];
      v2408 = (const char *)v2403;
      v2409 = *((_QWORD *)v2390 + 259);
      if ( v2403 < (_QWORD *)((char *)v2403 + v2401) )
      {
        do
        {
          _mm_prefetch(v2408, 0);
          v2408 += 64;
        }
        while ( v2408 < (const char *)v2403 + v2401 );
      }
      v2410 = *((_QWORD *)v2390 + 259);
      v2411 = (unsigned int)v2401 >> 7;
      if ( (unsigned int)v2401 >> 7 )
      {
        do
        {
          v2412 = 8LL;
          do
          {
            v2413 = v2406[1] ^ __ROL8__(*v2406 ^ v2410, v2407);
            v2406 += 2;
            v2410 = __ROL8__(v2413, v2407);
            --v2412;
          }
          while ( v2412 );
          v2414 = __ROL8__(v2409 ^ ((char *)v2406 - (char *)v2403), 17) ^ v2409 ^ ((char *)v2406 - (char *)v2403);
          v4140 = (v2414 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v2407 = ((unsigned __int8)(v4140 ^ v2414) ^ (unsigned __int8)v2407) & 0x3F;
          if ( !(_DWORD)v2407 )
            v2407 = 1LL;
          --v2411;
        }
        while ( v2411 );
        v2390 = (unsigned int *)HalExtensionList;
        LODWORD(v2401) = Size;
        v2398 = (_QWORD *)v3839;
      }
      v2415 = v2401 & 0x7F;
      if ( (unsigned int)v2415 >= 8 )
      {
        v2416 = (unsigned __int64)(v2401 & 0x7F) >> 3;
        do
        {
          v2410 = __ROL8__(*v2406++ ^ v2410, v2407);
          v2415 = (unsigned int)(v2415 - 8);
          --v2416;
        }
        while ( v2416 );
      }
      if ( (_DWORD)v2415 )
      {
        do
        {
          v2417 = *(unsigned __int8 *)v2406;
          v2406 = (_QWORD *)((char *)v2406 + 1);
          v2410 = __ROL8__(v2417 ^ v2410, v2407);
          v893 = (_DWORD)v2415 == 1;
          v2415 = (unsigned int)(v2415 - 1);
        }
        while ( !v893 );
      }
      for ( i88 = v2410 >> 31; i88; i88 >>= 31 )
        LODWORD(v2410) = i88 ^ v2410;
      v2385 = (unsigned int)v3846;
      v2383 = v3837;
      ++v2398;
      *((_DWORD *)v2399 + 5) = v2410 & 0x7FFFFFFF;
      v2390[522] += v2401;
      v2419 = 4;
      ++v2400;
      v2399 = v4138 + 48;
      v3839 = (ULONG_PTR)v2398;
      v893 = v3838-- == 1;
      v4138 += 48;
    }
    while ( !v893 );
    v2420 = v4139;
    v4141 = v4139;
    if ( v2383 == 7 )
    {
      v2421 = v3836;
      do
      {
        *((_DWORD *)v2420 + 10) |= 1u;
        v2420 = v4139 + 48;
        v4139 += 48;
        --v2421;
      }
      while ( v2421 );
      v2420 = v4141;
    }
    if ( (_DWORD)v3833 != -1 )
    {
      v2415 = 6LL * (unsigned int)v3833;
      if ( *(_DWORD *)&v2420[48 * (unsigned int)v3833] == 32 )
        *(_DWORD *)&v2420[48 * (unsigned int)v3833 + 40] |= 4u;
    }
    v4026 = v2390;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    if ( !(_DWORD)v3834 )
    {
      v2422 = 7;
      LODWORD(v3834) = v3888 & 4;
      if ( (v3888 & 4) == 0 )
        v2422 = SeCiStateElementCount + 7;
      v2423 = __rdtsc();
      v2424 = (__ROR8__(v2423, 3) ^ v2423) * (unsigned __int128)0x7010008004002001uLL;
      v4142 = *((_QWORD *)&v2424 + 1);
      v2425 = ((unsigned __int64)v2424 ^ *((_QWORD *)&v2424 + 1)) % 0xB;
      if ( (unsigned int)v2425 > 5 )
      {
        v2429 = v2425 - 6;
        if ( v2429 )
        {
          v2430 = v2429 - 1;
          if ( v2430 )
          {
            v2431 = v2430 - 1;
            if ( v2431 )
            {
              if ( v2431 == 1 )
              {
                v3902[24] = -1333354875;
                v2428 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v2432 = __rdtsc();
                v2433 = __ROR8__(v2432, 3);
                v4143 = ((v2433 ^ v2432) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v2434 = v4143 ^ (67117057 * (v2433 ^ v2432));
                v2428 = ((((((v2434 % 0x1A + 97) << 8) | ((v2434 >> 5)
                                                        - 26
                                                        * ((unsigned int)((1321528399 * (unsigned __int64)(v2434 >> 5)) >> 32) >> 3)
                                                        + 65)) << 8) | ((v2434 >> 10) % 0x1A + 97)) << 8) | ((v2434 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v3902[25] = 1684422978;
              v2428 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v3902[26] = -2100910376;
            v2428 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          v3902[27] = 1314342514;
          v2428 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v2425 == 5 )
      {
        v3902[23] = 680282605;
        v2428 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v2425 )
      {
        v2426 = v2425 - 1;
        if ( v2426 )
        {
          v2427 = v2426 - 1;
          if ( v2427 )
          {
            if ( v2427 == 1 )
            {
              v3902[19] = -1474152136;
              v2428 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v3902[18] = 1728537748;
              v2428 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v3902[20] = -2051698419;
            v2428 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v3902[21] = -1297272415;
          v2428 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v3902[22] = -795291432;
        v2428 = __ROR4__(-795291432, 6);
      }
      v2435 = v2422;
      v2436 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v2422, v2428);
      HalExtensionList = v2436;
      if ( !v2436 )
        return 0;
      v2437 = __rdtsc();
      v2438 = (__ROR8__(v2437, 3) ^ v2437) * (unsigned __int128)0x7010008004002001uLL;
      v4144 = *((_QWORD *)&v2438 + 1);
      v2439 = ((unsigned __int64)v2438 ^ *((_QWORD *)&v2438 + 1)) % 0xB;
      if ( (unsigned int)v2439 > 5 )
      {
        v2443 = v2439 - 6;
        if ( v2443 )
        {
          v2444 = v2443 - 1;
          if ( v2444 )
          {
            v2445 = v2444 - 1;
            if ( v2445 )
            {
              if ( v2445 == 1 )
              {
                v3902[34] = -1333354875;
                v2442 = __ROR4__(-1333354868, 33);
              }
              else
              {
                v2446 = __rdtsc();
                v2447 = __ROR8__(v2446, 3);
                v4145 = ((v2447 ^ v2446) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v2448 = v4145 ^ (67117057 * (v2447 ^ v2446));
                v2442 = ((((((v2448 % 0x1A + 97) << 8) | ((v2448 >> 5)
                                                        - 26
                                                        * ((unsigned int)((1321528399 * (unsigned __int64)(v2448 >> 5)) >> 32) >> 3)
                                                        + 65)) << 8) | ((v2448 >> 10) % 0x1A + 97)) << 8) | ((v2448 >> 15) % 0x1A + 65);
              }
            }
            else
            {
              v3902[35] = 1684422978;
              v2442 = __ROR4__(1684422978, 8);
            }
          }
          else
          {
            v3902[36] = -2100910376;
            v2442 = __ROL4__(-2100910376, 7);
          }
        }
        else
        {
          CompressBufferWorkSpaceSize[8] = 1314342514;
          v2442 = __ROR4__(1314342516, 24);
        }
      }
      else if ( (_DWORD)v2439 == 5 )
      {
        v3902[33] = 680282605;
        v2442 = __ROR4__(680282605, 5);
      }
      else if ( (_DWORD)v2439 )
      {
        v2440 = v2439 - 1;
        if ( v2440 )
        {
          v2441 = v2440 - 1;
          if ( v2441 )
          {
            if ( v2441 == 1 )
            {
              v3902[29] = -1474152136;
              v2442 = __ROR4__(-1474152133, 15);
            }
            else
            {
              v3902[28] = 1728537748;
              v2442 = __ROL4__(1728537748, 4);
            }
          }
          else
          {
            v3902[30] = -2051698419;
            v2442 = __ROR4__(-2051698419, 2);
          }
        }
        else
        {
          v3902[31] = -1297272415;
          v2442 = __ROL4__(-1297272415, 1);
        }
      }
      else
      {
        v3902[32] = -795291432;
        v2442 = __ROR4__(-795291432, 6);
      }
      v2449 = ExAllocatePoolWithTag(NonPagedPoolNx, 4 * v2435, v2442);
      v3839 = (ULONG_PTR)v2449;
      if ( !v2449 )
      {
        v2275 = v2436;
        goto LABEL_3208;
      }
      LODWORD(v3833) = 4;
      *v2436 = &SeCiCallbacks;
      *v2449 = dword_140D585D0;
      v2436[1] = &SeMsMinTCBList;
      v2449[1] = dword_140D58600;
      v2436[2] = RtlProtectedAccess;
      v2449[2] = dword_140D58608;
      v2436[3] = &SeProtectedMapping;
      v2449[3] = dword_140D58610;
      if ( !(_DWORD)v3834 )
      {
        v2436[4] = SeSecureBootPolicyBlobHeader;
        v2449[4] = SeSecureBootPolicyBlobHeaderSize;
        v2436[5] = &SeILSigningPolicy;
        v2449[5] = 1;
        v2436[6] = &SeCiDebugOptions;
        v2449[6] = 4;
        v2450 = 0;
        v2419 = 7;
        LODWORD(v3833) = 7;
        if ( SeCiStateElementCount )
        {
          do
          {
            v2273 = v2419++;
            v2451 = v2450++;
            v2451 *= 2LL;
            v2436[v2273] = *(_QWORD *)(SeCiStateElements + 8 * v2451);
            v2449[v2273] = *(_DWORD *)(SeCiStateElements + 8 * v2451 + 8);
          }
          while ( v2450 < SeCiStateElementCount );
          LODWORD(v3833) = v2419;
        }
      }
      v2452 = v2390[526];
      v2453 = 32;
      v2454 = v2390[505];
      v2455 = v2390[585];
      if ( v2452 != 7 )
        v2453 = 0;
      LODWORD(v3834) = v2390[526];
      LODWORD(v3836) = v2453;
      v2456 = v2454 + 48 * v2419;
      if ( v2456 <= v2390[647] )
      {
        v2457 = (__int64)v2390;
        v3838 = (ULONG_PTR)v2390;
        v2390[505] = v2456;
        goto LABEL_3481;
      }
      v2457 = pg_unknown7(v2390, v2456, v2455);
      v3838 = v2457;
      if ( v2457 )
      {
        v2458 = v2390[612];
        if ( (v2458 & 4) == 0 )
        {
          v2459 = v2390[505];
          v2460 = *((_QWORD *)v2390 + 249);
          v2461 = (v2458 & 0x20000000) != 0 ? v2390[585] : 0;
          if ( v2459 >= 8 )
          {
            v2462 = (unsigned __int64)v2459 >> 3;
            do
            {
              *(_QWORD *)v2390 = 0LL;
              v2459 -= 8;
              v2390 += 2;
              --v2462;
            }
            while ( v2462 );
          }
          for ( i89 = 0; v2459; --v2459 )
          {
            *(_BYTE *)v2390 = 0;
            v2390 = (unsigned int *)((char *)v2390 + 1);
          }
          v2464 = *(_DWORD *)(v2457 + 2340);
          *(_DWORD *)(v2457 + 2340) = v2461;
          if ( v2461 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v2457 + 872))(v2460);
          }
          else
          {
            if ( (*(_DWORD *)(v2457 + 2448) & 0x10000000) == 0 )
              i89 = v2461;
            if ( i89 )
              (*(void (__fastcall **)(__int64, _QWORD))(v2457 + 552))(v2460 - 8, *(_QWORD *)(v2460 - 8));
            else
              (*(void (__fastcall **)(__int64))(v2457 + 256))(v2460);
          }
          v2453 = v3836;
          *(_DWORD *)(v2457 + 2340) = v2464;
        }
        *(_DWORD *)(v2457 + 2448) &= ~4u;
        v2452 = v3834;
LABEL_3481:
        *(_DWORD *)(v2457 + 2060) += v2419;
        v2465 = v2457 + v2454;
        v4146 = v2457 + v2454;
        v4147 = v2457 + v2454;
        if ( v2419 )
        {
          v2466 = HalExtensionList;
          v3840 = v2419;
          v2467 = v2449;
          v3841 = (unsigned __int64)v2449;
          do
          {
            v2468 = (unsigned int)*v2467;
            v2469 = 48;
            v2470 = (_QWORD *)*v2466;
            v2471 = (_QWORD *)v2465;
            LODWORD(v3837) = *v2467;
            v2472 = 6LL;
            do
            {
              *v2471 = 0LL;
              v2469 -= 8;
              ++v2471;
              --v2472;
            }
            while ( v2472 );
            for ( ; v2469; --v2469 )
            {
              *(_BYTE *)v2471 = 0;
              v2471 = (_QWORD *)((char *)v2471 + 1);
            }
            *(_DWORD *)v2465 = v2453;
            *(_QWORD *)(v2465 + 8) = v2470;
            if ( v2452 == 7 && (_DWORD)v2468 )
              pg_unknown12(v2457, v2470, (unsigned int)v2468, v2465 + 24);
            *(_DWORD *)(v2465 + 16) = v2468;
            *(_DWORD *)(v2457 + 2088) += v2468;
            v2473 = v2470;
            v2474 = *(_DWORD *)(v2457 + 2068);
            v2475 = (const char *)v2470;
            v2476 = *(_QWORD *)(v2457 + 2072);
            if ( v2470 < (_QWORD *)((char *)v2470 + v2468) )
            {
              do
              {
                _mm_prefetch(v2475, 0);
                v2475 += 64;
              }
              while ( v2475 < (const char *)v2470 + v2468 );
            }
            v2477 = *(_QWORD *)(v2457 + 2072);
            v2478 = (unsigned int)v2468 >> 7;
            if ( (unsigned int)v2468 >> 7 )
            {
              do
              {
                v2479 = 8LL;
                do
                {
                  v2480 = v2477 ^ *v2473;
                  v2481 = v2473[1];
                  v2473 += 2;
                  v2477 = __ROL8__(__ROL8__(v2480, v2474) ^ v2481, v2474);
                  --v2479;
                }
                while ( v2479 );
                v2482 = __ROL8__(v2476 ^ ((char *)v2473 - (char *)v2470), 17) ^ v2476 ^ ((char *)v2473 - (char *)v2470);
                v4148 = (v2482 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v2474 = ((unsigned __int8)(v4148 ^ v2482) ^ (unsigned __int8)v2474) & 0x3F;
                if ( !v2474 )
                  LOBYTE(v2474) = 1;
                --v2478;
              }
              while ( v2478 );
              v2457 = v3838;
              LODWORD(v2468) = v3837;
              v2467 = (_DWORD *)v3841;
            }
            LODWORD(v2273) = v2468 & 0x7F;
            if ( (unsigned int)v2273 >= 8 )
            {
              v2483 = (unsigned __int64)(v2468 & 0x7F) >> 3;
              do
              {
                v2477 = __ROL8__(*v2473++ ^ v2477, v2474);
                LODWORD(v2273) = v2273 - 8;
                --v2483;
              }
              while ( v2483 );
            }
            for ( ; (_DWORD)v2273; LODWORD(v2273) = v2273 - 1 )
            {
              v2484 = *(unsigned __int8 *)v2473;
              v2473 = (_QWORD *)((char *)v2473 + 1);
              v2477 = __ROL8__(v2484 ^ v2477, v2474);
            }
            for ( i90 = v2477 >> 31; i90; i90 >>= 31 )
              LODWORD(v2477) = i90 ^ v2477;
            v2452 = v3834;
            *(_DWORD *)(v2465 + 20) = v2477 & 0x7FFFFFFF;
            ++v2467;
            *(_DWORD *)(v2457 + 2088) += v2468;
            ++v2466;
            v2453 = v3836;
            v2465 = v4146 + 48;
            v893 = v3840-- == 1;
            v4146 += 48LL;
            v3841 = (unsigned __int64)v2467;
          }
          while ( !v893 );
          v2465 = v4147;
          v2419 = v3833;
          v2449 = (_DWORD *)v3839;
        }
        if ( (_DWORD)v3834 == 7 && v2419 )
          v4147 = 48LL * v2419 + v2465;
        v2390 = (unsigned int *)v2457;
      }
      else
      {
        v2390 = 0LL;
      }
      ExFreePoolWithTag(v2449, v2273);
      ExFreePoolWithTag(HalExtensionList, v2486);
      if ( !v2390 )
        return 0;
      v4026 = v2390;
    }
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    if ( !(_DWORD)Src && !(unsigned int)SeMinTcbLowering(v2420, v2415, v2407, v2385) )
    {
      _disable();
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        while ( 1 )
          ;
      }
      _enable();
      v2487 = v2390[505];
      v2488 = v2487 + 48;
      if ( (int)v2487 + 48 <= v2390[647] )
      {
        v2489 = v2390;
        v2390[505] = v2488;
      }
      else
      {
        v2489 = (_BYTE *)pg_unknown7(v2390, v2488, v2390[585]);
        if ( !v2489 )
          return 0;
        v2490 = v2390[612];
        if ( (v2490 & 4) == 0 )
        {
          v2491 = v2390[505];
          v2492 = *((_QWORD *)v2390 + 249);
          v2493 = (v2490 & 0x20000000) != 0 ? v2390[585] : 0;
          if ( v2491 >= 8 )
          {
            v2494 = (unsigned __int64)v2491 >> 3;
            do
            {
              *(_QWORD *)v2390 = 0LL;
              v2491 -= 8;
              v2390 += 2;
              --v2494;
            }
            while ( v2494 );
          }
          for ( i91 = 0; v2491; --v2491 )
          {
            *(_BYTE *)v2390 = 0;
            v2390 = (unsigned int *)((char *)v2390 + 1);
          }
          v2496 = *((_DWORD *)v2489 + 585);
          *((_DWORD *)v2489 + 585) = v2493;
          if ( v2493 == 3 )
          {
            (*((void (__fastcall **)(__int64))v2489 + 109))(v2492);
          }
          else
          {
            if ( (*((_DWORD *)v2489 + 612) & 0x10000000) == 0 )
              i91 = v2493;
            if ( i91 )
              (*((void (__fastcall **)(__int64, _QWORD))v2489 + 69))(v2492 - 8, *(_QWORD *)(v2492 - 8));
            else
              (*((void (__fastcall **)(__int64))v2489 + 32))(v2492);
          }
          *((_DWORD *)v2489 + 585) = v2496;
        }
        *((_DWORD *)v2489 + 612) &= ~4u;
      }
      ++*((_DWORD *)v2489 + 515);
      v2497 = &v2489[v2487];
      v2498 = 48;
      v4149 = &v2489[v2487];
      v2499 = &v2489[v2487];
      v2500 = 6LL;
      do
      {
        *v2499 = 0LL;
        v2498 -= 8;
        ++v2499;
        --v2500;
      }
      while ( v2500 );
      for ( ; v2498; --v2498 )
      {
        *(_BYTE *)v2499 = 0;
        v2499 = (_QWORD *)((char *)v2499 + 1);
      }
      *(_DWORD *)v2497 = 31;
      *((_QWORD *)v2497 + 1) = 0LL;
      *((_DWORD *)v2497 + 4) = 0;
      v2501 = *((_QWORD *)v2489 + 259);
      for ( i92 = v2501; ; LODWORD(v2501) = i92 ^ v2501 )
      {
        i92 >>= 31;
        if ( !i92 )
          break;
      }
      v4026 = (unsigned int *)v2489;
      *((_DWORD *)v2497 + 5) = v2501 & 0x7FFFFFFF;
      _disable();
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        while ( 1 )
          ;
      }
      _enable();
      v2503 = *((unsigned int *)v2489 + 505);
      v2504 = v2503 + 48;
      if ( (unsigned int)(v2503 + 48) <= *((_DWORD *)v2489 + 647) )
      {
        v2390 = (unsigned int *)v2489;
        *((_DWORD *)v2489 + 505) = v2504;
      }
      else
      {
        v2390 = (unsigned int *)pg_unknown7(v2489, v2504, *((unsigned int *)v2489 + 585));
        if ( !v2390 )
          return 0;
        v2505 = *((_DWORD *)v2489 + 612);
        if ( (v2505 & 4) == 0 )
        {
          v2506 = *((_DWORD *)v2489 + 505);
          v2507 = *((_QWORD *)v2489 + 249);
          v2508 = (v2505 & 0x20000000) != 0 ? *((_DWORD *)v2489 + 585) : 0;
          if ( v2506 >= 8 )
          {
            v2509 = (unsigned __int64)v2506 >> 3;
            do
            {
              *(_QWORD *)v2489 = 0LL;
              v2506 -= 8;
              v2489 += 8;
              --v2509;
            }
            while ( v2509 );
          }
          for ( i93 = 0; v2506; --v2506 )
            *v2489++ = 0;
          v2511 = v2390[585];
          v2390[585] = v2508;
          if ( v2508 == 3 )
          {
            (*((void (__fastcall **)(__int64))v2390 + 109))(v2507);
          }
          else
          {
            if ( (v2390[612] & 0x10000000) == 0 )
              i93 = v2508;
            if ( i93 )
              (*((void (__fastcall **)(__int64, _QWORD))v2390 + 69))(v2507 - 8, *(_QWORD *)(v2507 - 8));
            else
              (*((void (__fastcall **)(__int64))v2390 + 32))(v2507);
          }
          v2390[585] = v2511;
        }
        v2390[612] &= ~4u;
      }
      ++v2390[515];
      v2512 = (char *)v2390 + v2503;
      v2513 = 48;
      v4150 = (char *)v2390 + v2503;
      v2514 = (_QWORD *)((char *)v2390 + v2503);
      v2515 = 6LL;
      do
      {
        *v2514 = 0LL;
        v2513 -= 8;
        ++v2514;
        --v2515;
      }
      while ( v2515 );
      for ( ; v2513; --v2513 )
      {
        *(_BYTE *)v2514 = 0;
        v2514 = (_QWORD *)((char *)v2514 + 1);
      }
      *(_DWORD *)v2512 = 37;
      *((_QWORD *)v2512 + 1) = 0LL;
      *((_DWORD *)v2512 + 4) = 0;
      v2516 = *((_QWORD *)v2390 + 259);
      for ( i94 = v2516; ; LODWORD(v2516) = i94 ^ v2516 )
      {
        i94 >>= 31;
        if ( !i94 )
          break;
      }
      v4026 = v2390;
      *((_DWORD *)v2512 + 5) = v2516 & 0x7FFFFFFF;
    }
    v2518 = v2390[526];
    v2519 = KxUnexpectedInterrupt0;
    v2520 = v2390[505];
    if ( KiKvaShadow )
      v2519 = KiIsrThunkShadow;
    v2521 = v2390[585];
    v2522 = 32;
    HalExtensionList = v2519;
    if ( v2518 != 7 )
      v2522 = 0;
    v2523 = v2520 + 48;
    if ( (int)v2520 + 48 <= v2390[647] )
    {
      v2524 = v2390;
      v2390[505] = v2523;
    }
    else
    {
      v2524 = (_BYTE *)pg_unknown7(v2390, v2523, v2521);
      if ( !v2524 )
      {
LABEL_3595:
        v2524 = 0LL;
        goto LABEL_4203;
      }
      v2525 = v2390[612];
      if ( (v2525 & 4) == 0 )
      {
        v2526 = v2390[505];
        v2527 = *((_QWORD *)v2390 + 249);
        v2528 = (v2525 & 0x20000000) != 0 ? v2390[585] : 0;
        if ( v2526 >= 8 )
        {
          v2529 = (unsigned __int64)v2526 >> 3;
          do
          {
            *(_QWORD *)v2390 = 0LL;
            v2526 -= 8;
            v2390 += 2;
            --v2529;
          }
          while ( v2529 );
        }
        for ( i95 = 0; v2526; --v2526 )
        {
          *(_BYTE *)v2390 = 0;
          v2390 = (unsigned int *)((char *)v2390 + 1);
        }
        v2531 = *((_DWORD *)v2524 + 585);
        *((_DWORD *)v2524 + 585) = v2528;
        if ( v2528 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2524 + 109))(v2527);
        }
        else
        {
          if ( (*((_DWORD *)v2524 + 612) & 0x10000000) == 0 )
            i95 = v2528;
          if ( i95 )
            (*((void (__fastcall **)(__int64, _QWORD))v2524 + 69))(v2527 - 8, *(_QWORD *)(v2527 - 8));
          else
            (*((void (__fastcall **)(__int64))v2524 + 32))(v2527);
        }
        *((_DWORD *)v2524 + 585) = v2531;
      }
      *((_DWORD *)v2524 + 612) &= ~4u;
      v2519 = (__int64 (__fastcall *)())HalExtensionList;
    }
    v2532 = &v2524[v2520];
    ++*((_DWORD *)v2524 + 515);
    v2533 = &v2524[v2520];
    v3839 = (ULONG_PTR)&v2524[v2520];
    v4151 = &v2524[v2520];
    v2534 = 48;
    v2535 = 6LL;
    do
    {
      *v2533 = 0LL;
      v2534 -= 8;
      ++v2533;
      --v2535;
    }
    while ( v2535 );
    for ( ; v2534; --v2534 )
    {
      *(_BYTE *)v2533 = 0;
      v2533 = (_QWORD *)((char *)v2533 + 1);
    }
    *(_DWORD *)v2532 = v2522;
    *((_QWORD *)v2532 + 1) = v2519;
    if ( v2518 == 7 )
    {
      pg_unknown12(v2524, v2519, 2048LL, v2532 + 24);
      v2519 = (__int64 (__fastcall *)())HalExtensionList;
    }
    *((_DWORD *)v2532 + 4) = 2048;
    *((_DWORD *)v2524 + 522) += 2048;
    v2536 = (char *)v2519;
    v2537 = *((_DWORD *)v2524 + 517);
    v2538 = (const char *)v2519;
    for ( i96 = *((_QWORD *)v2524 + 259); v2538 < (const char *)v2519 + 2048; v2538 += 64 )
      _mm_prefetch(v2538, 0);
    v2540 = 16;
    v2541 = *((_QWORD *)v2524 + 259);
    do
    {
      v2542 = 8LL;
      do
      {
        v2543 = *((_QWORD *)v2536 + 1) ^ __ROL8__(*(_QWORD *)v2536 ^ v2541, v2537);
        v2536 += 16;
        v2541 = __ROL8__(v2543, v2537);
        --v2542;
      }
      while ( v2542 );
      v2544 = __ROL8__(i96 ^ (v2536 - (_BYTE *)HalExtensionList), 17) ^ i96 ^ (v2536 - (_BYTE *)HalExtensionList);
      v4152 = ((unsigned __int64)v2544 * (unsigned __int128)0x7010008004002001uLL) >> 64;
      v2537 = ((unsigned __int8)(v4152 ^ v2544) ^ (unsigned __int8)v2537) & 0x3F;
      if ( !v2537 )
        LOBYTE(v2537) = 1;
      --v2540;
    }
    while ( v2540 );
    for ( i97 = v2541 >> 31; i97; i97 >>= 31 )
      LODWORD(v2541) = i97 ^ v2541;
    *(_DWORD *)(v3839 + 20) = v2541 & 0x7FFFFFFF;
    *((_DWORD *)v2524 + 522) += 2048;
    *((_QWORD *)v2524 + 322) = qword_140D58090;
    *((_DWORD *)v2524 + 572) = -1;
    if ( (*((_DWORD *)v2524 + 612) & 0x10000) == 0 )
    {
      Prcb = KeGetPrcb(0LL);
      v2547 = 11LL;
      v2548 = &v4394;
      do
      {
        *((_QWORD *)v2548 - 1) = -1LL;
        *(_QWORD *)v2548 = 0LL;
        v2548 += 24;
        --v2547;
      }
      while ( v2547 );
      _RAX = 2147483649LL;
      v4395[0] = -1073741694;
      __asm { cpuid }
      v4283 = _RDX;
      v2554 = ((unsigned int)_RDX >> 27) & 1;
      v4280 = _RAX;
      v2555 = v4405;
      v4282 = _RCX;
      if ( v2554 )
        v2555 = -1073741565;
      v4396 = -1073741695;
      v2556 = *((_QWORD *)v2524 + 205);
      v2557 = v2554 + 9;
      v4405 = v2555;
      v2558 = v2524[1648];
      v4397 = -1073741693;
      v4398 = 27;
      v4399 = 372;
      v4400 = 373;
      v4401 = 374;
      v4402 = -1073741692;
      v4404 = -1073741696;
      v4403 = -4097LL;
      v4281 = _RBX;
      LODWORD(Src) = v2557;
      if ( *(_BYTE *)(Prcb + v2556) == v2558 )
      {
        v2559 = 3 * v2557;
        v4395[2 * v2559] = 416;
        v4393[v2559 + 16] = 0x400440000LL;
        LODWORD(Src) = v2557 + 1;
      }
      v2560 = 0;
      LODWORD(v3834) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        while ( 2 )
        {
          v2561 = (void (__fastcall *)(_BYTE *))*((_QWORD *)v2524 + 51);
          (*((void (__fastcall **)(_BYTE *, _QWORD))v2524 + 52))(v4284, v2560);
          (*((void (__fastcall **)(_BYTE *, _BYTE *))v2524 + 58))(v4284, v4285);
          KiGetGdtIdt(&v4254, v4253);
          v2562 = v4255;
          v2563 = &dword_14000F68C;
          v2564 = 7LL;
          do
          {
            v2565 = *(unsigned __int8 *)v2563;
            v2566 = *(_DWORD *)((char *)v2562 + v2565 + 4);
            if ( (v2566 & 0x100) == 0 )
              *(_DWORD *)((char *)v2562 + v2565 + 4) = v2566 | 0x100;
            v2563 = (int *)((char *)v2563 + 1);
            --v2564;
          }
          while ( v2564 );
          v2567 = *((_DWORD *)v2562 + 17);
          if ( (v2567 & 0x200) == 0 )
            *((_DWORD *)v2562 + 17) = v2567 | 0x200;
          v2568 = *((unsigned int *)v2524 + 505);
          v2569 = v4255;
          v2570 = v2568 + 48;
          if ( (unsigned int)(v2568 + 48) <= *((_DWORD *)v2524 + 647) )
          {
            v2571 = v2524;
            *((_DWORD *)v2524 + 505) = v2570;
            goto LABEL_3647;
          }
          v2571 = (_BYTE *)pg_unknown7(v2524, v2570, *((unsigned int *)v2524 + 585));
          if ( v2571 )
          {
            v2572 = *((_DWORD *)v2524 + 612);
            if ( (v2572 & 4) == 0 )
            {
              v2573 = *((_DWORD *)v2524 + 505);
              v2574 = *((_QWORD *)v2524 + 249);
              v2575 = (v2572 & 0x20000000) != 0 ? *((_DWORD *)v2524 + 585) : 0;
              if ( v2573 >= 8 )
              {
                v2576 = (unsigned __int64)v2573 >> 3;
                do
                {
                  *(_QWORD *)v2524 = 0LL;
                  v2573 -= 8;
                  v2524 += 8;
                  --v2576;
                }
                while ( v2576 );
              }
              for ( i98 = 0; v2573; --v2573 )
                *v2524++ = 0;
              v2578 = *((_DWORD *)v2571 + 585);
              *((_DWORD *)v2571 + 585) = v2575;
              if ( v2575 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2571 + 109))(v2574);
              }
              else
              {
                if ( (*((_DWORD *)v2571 + 612) & 0x10000000) == 0 )
                  i98 = v2575;
                if ( i98 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2571 + 69))(v2574 - 8, *(_QWORD *)(v2574 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2571 + 32))(v2574);
              }
              *((_DWORD *)v2571 + 585) = v2578;
            }
            *((_DWORD *)v2571 + 612) &= ~4u;
LABEL_3647:
            ++*((_DWORD *)v2571 + 515);
            v2579 = &v2571[v2568];
            v2580 = 48;
            v4153 = &v2571[v2568];
            v2581 = &v2571[v2568];
            v2582 = 6LL;
            do
            {
              *v2581 = 0LL;
              v2580 -= 8;
              ++v2581;
              --v2582;
            }
            while ( v2582 );
            for ( ; v2580; --v2580 )
            {
              *(_BYTE *)v2581 = 0;
              v2581 = (_QWORD *)((char *)v2581 + 1);
            }
            *(_DWORD *)v2579 = 3;
            *((_QWORD *)v2579 + 1) = v2569;
            *((_DWORD *)v2579 + 4) = 80;
            v2583 = (const char *)v2569;
            *((_DWORD *)v2571 + 522) += 80;
            v2584 = *((_DWORD *)v2571 + 517);
            v2585 = *((_QWORD *)v2571 + 259);
            if ( v2569 < v2569 + 10 )
            {
              do
              {
                _mm_prefetch(v2583, 0);
                v2583 += 64;
              }
              while ( v2583 < (const char *)v2569 + 80 );
            }
            v2586 = 80;
            v2587 = 10LL;
            do
            {
              v2585 = __ROL8__(*v2569++ ^ v2585, v2584);
              v2586 -= 8;
              --v2587;
            }
            while ( v2587 );
            for ( ; v2586; --v2586 )
            {
              v2588 = *(unsigned __int8 *)v2569;
              v2569 = (_QWORD *)((char *)v2569 + 1);
              v2585 = __ROL8__(v2588 ^ v2585, v2584);
            }
            for ( i99 = v2585; ; LODWORD(v2585) = i99 ^ v2585 )
            {
              i99 >>= 31;
              if ( !i99 )
                break;
            }
            *((_DWORD *)v2579 + 5) = v2585 & 0x7FFFFFFF;
            v4154 = v4153;
            *((_DWORD *)v2571 + 522) += 80;
          }
          else
          {
            v2571 = 0LL;
          }
          v2561(v4285);
          if ( !v2571 )
          {
            v2524 = 0LL;
            goto LABEL_4203;
          }
          *((_DWORD *)v4154 + 10) = v3834;
          *((_WORD *)v4154 + 22) = v4254;
          v2590 = (PVOID)*((_QWORD *)v2571 + 51);
          v2591 = 0;
          HalExtensionList = v2590;
          (*((void (__fastcall **)(_BYTE *))v2571 + 52))(v4286);
          (*((void (__fastcall **)(_BYTE *, _BYTE *))v2571 + 58))(v4286, v4287);
          KiGetGdtIdt(v4258, &v4256);
          v2592 = *((unsigned int *)v2571 + 505);
          v2593 = v4257;
          v2594 = v2592 + 48;
          if ( (unsigned int)(v2592 + 48) <= *((_DWORD *)v2571 + 647) )
          {
            v2595 = v2571;
            *((_DWORD *)v2571 + 505) = v2594;
            goto LABEL_3681;
          }
          v2595 = (_BYTE *)pg_unknown7(v2571, v2594, *((unsigned int *)v2571 + 585));
          if ( v2595 )
          {
            v2596 = *((_DWORD *)v2571 + 612);
            if ( (v2596 & 4) == 0 )
            {
              v2597 = *((_DWORD *)v2571 + 505);
              v2598 = *((_QWORD *)v2571 + 249);
              v2599 = (v2596 & 0x20000000) != 0 ? *((_DWORD *)v2571 + 585) : 0;
              if ( v2597 >= 8 )
              {
                v2600 = (unsigned __int64)v2597 >> 3;
                do
                {
                  *(_QWORD *)v2571 = 0LL;
                  v2597 -= 8;
                  v2571 += 8;
                  --v2600;
                }
                while ( v2600 );
              }
              for ( i100 = 0; v2597; --v2597 )
                *v2571++ = 0;
              v2602 = *((_DWORD *)v2595 + 585);
              *((_DWORD *)v2595 + 585) = v2599;
              if ( v2599 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2595 + 109))(v2598);
              }
              else
              {
                if ( (*((_DWORD *)v2595 + 612) & 0x10000000) == 0 )
                  i100 = v2599;
                if ( i100 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2595 + 69))(v2598 - 8, *(_QWORD *)(v2598 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2595 + 32))(v2598);
              }
              *((_DWORD *)v2595 + 585) = v2602;
            }
            *((_DWORD *)v2595 + 612) &= ~4u;
LABEL_3681:
            ++*((_DWORD *)v2595 + 515);
            v2603 = &v2595[v2592];
            v2604 = 48;
            v4155 = &v2595[v2592];
            v2605 = &v2595[v2592];
            v2606 = 6;
            v2607 = 6LL;
            do
            {
              *v2605 = 0LL;
              v2604 -= 8;
              ++v2605;
              --v2607;
            }
            while ( v2607 );
            for ( ; v2604; --v2604 )
            {
              *(_BYTE *)v2605 = 0;
              v2605 = (_QWORD *)((char *)v2605 + 1);
            }
            *(_DWORD *)v2603 = 2;
            *((_QWORD *)v2603 + 1) = v2593;
            *((_DWORD *)v2603 + 4) = 848;
            v2608 = v2593;
            *((_DWORD *)v2595 + 522) += 848;
            v2609 = (const char *)v2593;
            v2610 = *((_DWORD *)v2595 + 517);
            v2611 = *((_QWORD *)v2595 + 259);
            if ( v2593 < v2593 + 106 )
            {
              do
              {
                _mm_prefetch(v2609, 0);
                v2609 += 64;
              }
              while ( v2609 < (const char *)v2593 + 848 );
            }
            v2612 = *((_QWORD *)v2595 + 259);
            do
            {
              v2613 = 8LL;
              do
              {
                v2614 = v2608[1] ^ __ROL8__(*v2608 ^ v2612, v2610);
                v2608 += 2;
                v2612 = __ROL8__(v2614, v2610);
                --v2613;
              }
              while ( v2613 );
              v2615 = (__ROL8__(v2611 ^ ((char *)v2608 - (char *)v2593), 17) ^ v2611 ^ (unsigned __int64)((char *)v2608 - (char *)v2593))
                    * (unsigned __int128)0x7010008004002001uLL;
              v4156 = *((_QWORD *)&v2615 + 1);
              v2610 = (BYTE8(v2615) ^ (unsigned __int8)(v2615 ^ v2610)) & 0x3F;
              if ( !v2610 )
                LOBYTE(v2610) = 1;
              --v2606;
            }
            while ( v2606 );
            v2590 = HalExtensionList;
            v2616 = 80;
            v2617 = 10LL;
            do
            {
              v2612 = __ROL8__(*v2608++ ^ v2612, v2610);
              v2616 -= 8;
              --v2617;
            }
            while ( v2617 );
            for ( ; v2616; --v2616 )
            {
              v2618 = *(unsigned __int8 *)v2608;
              v2608 = (_QWORD *)((char *)v2608 + 1);
              v2612 = __ROL8__(v2618 ^ v2612, v2610);
            }
            for ( i101 = v2612; ; LODWORD(v2612) = i101 ^ v2612 )
            {
              i101 >>= 31;
              if ( !i101 )
                break;
            }
            *((_DWORD *)v2603 + 5) = v2612 & 0x7FFFFFFF;
            v4157 = v4155;
            *((_DWORD *)v2595 + 522) += 848;
            v2620 = v4257;
            *((_DWORD *)v2595 + 522) += 16;
            v2621 = v2620 + 450;
            v2622 = *((_DWORD *)v2595 + 517);
            v2623 = (const char *)v2621;
            v2624 = *((_QWORD *)v2595 + 259);
            if ( v2621 < v2621 + 2 )
            {
              do
              {
                _mm_prefetch(v2623, 0);
                v2623 += 64;
              }
              while ( v2623 < (const char *)v2621 + 16 );
            }
            v2625 = 16;
            v2626 = 2LL;
            do
            {
              v2624 = __ROL8__(*v2621++ ^ v2624, v2622);
              v2625 -= 8;
              --v2626;
            }
            while ( v2626 );
            for ( ; v2625; --v2625 )
            {
              v2627 = *(unsigned __int8 *)v2621;
              v2621 = (_QWORD *)((char *)v2621 + 1);
              v2624 = __ROL8__(v2627 ^ v2624, v2622);
            }
            for ( i102 = v2624; ; LODWORD(v2624) = i102 ^ v2624 )
            {
              i102 >>= 31;
              if ( !i102 )
                break;
            }
            v2591 = v2624 & 0x7FFFFFFF;
          }
          else
          {
            v2595 = 0LL;
          }
          ((void (__fastcall *)(_BYTE *))v2590)(v4287);
          if ( !v2595 )
            goto LABEL_3595;
          v2629 = v3834;
          v2630 = (unsigned int)Src;
          *((_QWORD *)v4157 + 3) = v2591;
          *((_DWORD *)v4157 + 10) = v2629;
          *((_WORD *)v4157 + 22) = v4256;
          v2631 = *((unsigned int *)v2595 + 505);
          v2632 = v2631 + 24 * (v2630 + 2);
          if ( v2632 <= *((_DWORD *)v2595 + 647) )
          {
            v2633 = v2595;
            *((_DWORD *)v2595 + 505) = v2632;
          }
          else
          {
            v2633 = (_BYTE *)pg_unknown7(v2595, v2632, *((unsigned int *)v2595 + 585));
            if ( !v2633 )
              goto LABEL_3595;
            v2634 = *((_DWORD *)v2595 + 612);
            if ( (v2634 & 4) == 0 )
            {
              v2635 = *((_DWORD *)v2595 + 505);
              v2636 = *((_QWORD *)v2595 + 249);
              v2637 = (v2634 & 0x20000000) != 0 ? *((_DWORD *)v2595 + 585) : 0;
              if ( v2635 >= 8 )
              {
                v2638 = (unsigned __int64)v2635 >> 3;
                do
                {
                  *(_QWORD *)v2595 = 0LL;
                  v2635 -= 8;
                  v2595 += 8;
                  --v2638;
                }
                while ( v2638 );
              }
              for ( i103 = 0; v2635; --v2635 )
                *v2595++ = 0;
              v2640 = *((_DWORD *)v2633 + 585);
              *((_DWORD *)v2633 + 585) = v2637;
              if ( v2637 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2633 + 109))(v2636);
              }
              else
              {
                if ( (*((_DWORD *)v2633 + 612) & 0x10000000) == 0 )
                  i103 = v2637;
                if ( i103 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2633 + 69))(v2636 - 8, *(_QWORD *)(v2636 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2633 + 32))(v2636);
              }
              *((_DWORD *)v2633 + 585) = v2640;
            }
            *((_DWORD *)v2633 + 612) &= ~4u;
          }
          ++*((_DWORD *)v2633 + 515);
          v2641 = &v2633[v2631];
          v2642 = 48;
          v4158 = &v2633[v2631];
          v2643 = &v2633[v2631];
          v2644 = 6LL;
          do
          {
            *v2643 = 0LL;
            v2642 -= 8;
            ++v2643;
            --v2644;
          }
          while ( v2644 );
          for ( ; v2642; --v2642 )
          {
            *(_BYTE *)v2643 = 0;
            v2643 = (_QWORD *)((char *)v2643 + 1);
          }
          *(_DWORD *)v2641 = 7;
          *((_QWORD *)v2641 + 1) = 0LL;
          *((_DWORD *)v2641 + 4) = 0;
          v2645 = *((_QWORD *)v2633 + 259);
          for ( i104 = v2645; ; LODWORD(v2645) = i104 ^ v2645 )
          {
            i104 >>= 31;
            if ( !i104 )
              break;
          }
          *((_DWORD *)v2641 + 5) = v2645 & 0x7FFFFFFF;
          v4159 = v4158;
          *((_DWORD *)v4158 + 6) = v2630;
          *((_DWORD *)v4159 + 7) = v2629;
          v2647 = v4159 + 48;
          (*((void (__fastcall **)(_BYTE *, _QWORD, _QWORD))v2633 + 52))(v4288, v2629, 0LL);
          (*((void (__fastcall **)(_BYTE *, _BYTE *))v2633 + 58))(v4288, v4289);
          if ( (_DWORD)v2630 )
          {
            v2648 = v2630;
            v2649 = v2647 - (_BYTE *)v4395;
            v2650 = v4395;
            do
            {
              v2651 = *((_QWORD *)v2650 - 2);
              v2652 = *v2650;
              *(_QWORD *)((char *)v2650 + v2649) = v2651;
              *(unsigned int *)((char *)v2650 + v2649 + 16) = v2652;
              if ( (v2633[2171] & 2) != 0 && v2652 == -1073741694 && KeGetPcr()->Prcb.Number == *((_DWORD *)v2633 + 572) )
                v2653 = *((_QWORD *)v2633 + 285);
              else
                v2653 = __readmsr(v2652);
              *(_QWORD *)((char *)v2650 + v2649 + 8) = v2651 & v2653;
              v2650 += 6;
              --v2648;
            }
            while ( v2648 );
          }
          (*((void (__fastcall **)(_BYTE *))v2633 + 51))(v4289);
          v2654 = *((unsigned int *)v2633 + 505);
          v2655 = v2654 + 48;
          if ( (unsigned int)(v2654 + 48) <= *((_DWORD *)v2633 + 647) )
          {
            v2656 = v2633;
            *((_DWORD *)v2633 + 505) = v2655;
          }
          else
          {
            v2656 = (_BYTE *)pg_unknown7(v2633, v2655, *((unsigned int *)v2633 + 585));
            if ( !v2656 )
              goto LABEL_3595;
            v2657 = *((_DWORD *)v2633 + 612);
            if ( (v2657 & 4) == 0 )
            {
              v2658 = *((_DWORD *)v2633 + 505);
              v2659 = *((_QWORD *)v2633 + 249);
              v2660 = (v2657 & 0x20000000) != 0 ? *((_DWORD *)v2633 + 585) : 0;
              if ( v2658 >= 8 )
              {
                v2661 = (unsigned __int64)v2658 >> 3;
                do
                {
                  *(_QWORD *)v2633 = 0LL;
                  v2658 -= 8;
                  v2633 += 8;
                  --v2661;
                }
                while ( v2661 );
              }
              for ( i105 = 0; v2658; --v2658 )
                *v2633++ = 0;
              v2663 = *((_DWORD *)v2656 + 585);
              *((_DWORD *)v2656 + 585) = v2660;
              if ( v2660 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2656 + 109))(v2659);
              }
              else
              {
                if ( (*((_DWORD *)v2656 + 612) & 0x10000000) == 0 )
                  i105 = v2660;
                if ( i105 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2656 + 69))(v2659 - 8, *(_QWORD *)(v2659 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2656 + 32))(v2659);
              }
              *((_DWORD *)v2656 + 585) = v2663;
            }
            *((_DWORD *)v2656 + 612) &= ~4u;
          }
          ++*((_DWORD *)v2656 + 515);
          v2664 = &v2656[v2654];
          v2665 = 48;
          v4160 = &v2656[v2654];
          v2666 = &v2656[v2654];
          v2667 = 6LL;
          do
          {
            *v2666 = 0LL;
            v2665 -= 8;
            ++v2666;
            --v2667;
          }
          while ( v2667 );
          for ( ; v2665; --v2665 )
          {
            *(_BYTE *)v2666 = 0;
            v2666 = (_QWORD *)((char *)v2666 + 1);
          }
          *(_DWORD *)v2664 = 21;
          *((_QWORD *)v2664 + 1) = 0LL;
          *((_DWORD *)v2664 + 4) = 0;
          v2668 = *((_QWORD *)v2656 + 259);
          for ( i106 = v2668 >> 31; i106; i106 >>= 31 )
            LODWORD(v2668) = i106 ^ v2668;
          *((_DWORD *)v2664 + 5) = v2668 & 0x7FFFFFFF;
          v4161 = v4160;
          *((_DWORD *)v4160 + 10) = 0;
          *((_QWORD *)v4161 + 3) = 2147549185LL;
          *((_DWORD *)v4161 + 11) = v2629;
          (*((void (__fastcall **)(_BYTE *, _QWORD))v2656 + 52))(v4290, v2629);
          (*((void (__fastcall **)(_BYTE *, _BYTE *))v2656 + 58))(v4290, v4291);
          v2670 = __readcr0();
          (*((void (__fastcall **)(_BYTE *))v2656 + 51))(v4291);
          *((_QWORD *)v4161 + 4) = v2670;
          *((_QWORD *)v4161 + 4) &= 0x80010001uLL;
          v2671 = *((unsigned int *)v2656 + 505);
          v2672 = v2671 + 48;
          if ( (unsigned int)(v2671 + 48) <= *((_DWORD *)v2656 + 647) )
          {
            v2673 = v2656;
            *((_DWORD *)v2656 + 505) = v2672;
          }
          else
          {
            v2673 = (_BYTE *)pg_unknown7(v2656, v2672, *((unsigned int *)v2656 + 585));
            if ( !v2673 )
              goto LABEL_3595;
            v2674 = *((_DWORD *)v2656 + 612);
            if ( (v2674 & 4) == 0 )
            {
              v2675 = *((_DWORD *)v2656 + 505);
              v2676 = *((_QWORD *)v2656 + 249);
              v2677 = (v2674 & 0x20000000) != 0 ? *((_DWORD *)v2656 + 585) : 0;
              if ( v2675 >= 8 )
              {
                v2678 = (unsigned __int64)v2675 >> 3;
                do
                {
                  *(_QWORD *)v2656 = 0LL;
                  v2675 -= 8;
                  v2656 += 8;
                  --v2678;
                }
                while ( v2678 );
              }
              for ( i107 = 0; v2675; --v2675 )
                *v2656++ = 0;
              v2680 = *((_DWORD *)v2673 + 585);
              *((_DWORD *)v2673 + 585) = v2677;
              if ( v2677 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2673 + 109))(v2676);
              }
              else
              {
                if ( (*((_DWORD *)v2673 + 612) & 0x10000000) == 0 )
                  i107 = v2677;
                if ( i107 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2673 + 69))(v2676 - 8, *(_QWORD *)(v2676 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2673 + 32))(v2676);
              }
              *((_DWORD *)v2673 + 585) = v2680;
            }
            *((_DWORD *)v2673 + 612) &= ~4u;
          }
          ++*((_DWORD *)v2673 + 515);
          v2681 = &v2673[v2671];
          v2682 = 48;
          v4162 = &v2673[v2671];
          v2683 = &v2673[v2671];
          v2684 = 6LL;
          do
          {
            *v2683 = 0LL;
            v2682 -= 8;
            ++v2683;
            --v2684;
          }
          while ( v2684 );
          for ( ; v2682; --v2682 )
          {
            *(_BYTE *)v2683 = 0;
            v2683 = (_QWORD *)((char *)v2683 + 1);
          }
          *(_DWORD *)v2681 = 21;
          *((_QWORD *)v2681 + 1) = 0LL;
          *((_DWORD *)v2681 + 4) = 0;
          v2685 = *((_QWORD *)v2673 + 259);
          for ( i108 = v2685; ; LODWORD(v2685) = i108 ^ v2685 )
          {
            i108 >>= 31;
            if ( !i108 )
              break;
          }
          *((_DWORD *)v2681 + 5) = v2685 & 0x7FFFFFFF;
          v4163 = v4162;
          *((_DWORD *)v4162 + 10) = 4;
          *((_QWORD *)v4163 + 3) = -8641LL;
          *((_DWORD *)v4163 + 11) = v2629;
          (*((void (__fastcall **)(_BYTE *, _QWORD, _QWORD))v2673 + 52))(v4292, v2629, 0LL);
          (*((void (__fastcall **)(_BYTE *, _BYTE *))v2673 + 58))(v4292, v4293);
          v2687 = __readcr4();
          (*((void (__fastcall **)(_BYTE *))v2673 + 51))(v4293);
          *((_QWORD *)v4163 + 4) = v2687;
          *((_QWORD *)v4163 + 4) &= 0xFFFFFFFFFFFFDE3FuLL;
          EnabledExtendedFeatures = RtlGetEnabledExtendedFeatures(0xFFFFFFFFFFFFFFFFuLL);
          v2690 = 0LL;
          if ( EnabledExtendedFeatures )
          {
            v2691 = *((unsigned int *)v2673 + 505);
            v2692 = *((unsigned int *)v2673 + 585);
            v2693 = v2691 + 48;
            if ( (unsigned int)(v2691 + 48) <= *((_DWORD *)v2673 + 647) )
            {
              v2694 = (__int64)v2673;
              *((_DWORD *)v2673 + 505) = v2693;
            }
            else
            {
              v2694 = pg_unknown7(v2673, v2693, v2692);
              if ( !v2694 )
                goto LABEL_3595;
              v2695 = *((_DWORD *)v2673 + 612);
              if ( (v2695 & 4) == 0 )
              {
                v2696 = *((_DWORD *)v2673 + 505);
                v2697 = *((_QWORD *)v2673 + 249);
                v2698 = (v2695 & 0x20000000) != 0 ? *((_DWORD *)v2673 + 585) : 0;
                if ( v2696 >= 8 )
                {
                  v2699 = (unsigned __int64)v2696 >> 3;
                  do
                  {
                    *(_QWORD *)v2673 = 0LL;
                    v2696 -= 8;
                    v2673 += 8;
                    --v2699;
                  }
                  while ( v2699 );
                }
                for ( i109 = 0; v2696; --v2696 )
                  *v2673++ = 0;
                v2701 = *(_DWORD *)(v2694 + 2340);
                *(_DWORD *)(v2694 + 2340) = v2698;
                if ( v2698 == 3 )
                {
                  (*(void (__fastcall **)(__int64))(v2694 + 872))(v2697);
                }
                else
                {
                  if ( (*(_DWORD *)(v2694 + 2448) & 0x10000000) == 0 )
                    i109 = v2698;
                  if ( i109 )
                    (*(void (__fastcall **)(__int64, _QWORD))(v2694 + 552))(v2697 - 8, *(_QWORD *)(v2697 - 8));
                  else
                    (*(void (__fastcall **)(__int64))(v2694 + 256))(v2697);
                }
                *(_DWORD *)(v2694 + 2340) = v2701;
              }
              *(_DWORD *)(v2694 + 2448) &= ~4u;
            }
            ++*(_DWORD *)(v2694 + 2060);
            v2702 = v2694 + v2691;
            v2703 = 48;
            v4164 = v2694 + v2691;
            v2704 = (_QWORD *)(v2694 + v2691);
            v2705 = 6LL;
            do
            {
              *v2704 = 0LL;
              v2703 -= 8;
              ++v2704;
              --v2705;
            }
            while ( v2705 );
            for ( ; v2703; --v2703 )
            {
              *(_BYTE *)v2704 = 0;
              v2704 = (_QWORD *)((char *)v2704 + 1);
            }
            *(_DWORD *)v2702 = 38;
            *(_QWORD *)(v2702 + 8) = 0LL;
            *(_DWORD *)(v2702 + 16) = 0;
            v2706 = *(_QWORD *)(v2694 + 2072);
            for ( i110 = v2706 >> 31; i110; i110 >>= 31 )
              LODWORD(v2706) = i110 ^ v2706;
            *(_DWORD *)(v2702 + 20) = v2706 & 0x7FFFFFFF;
            v4165 = v4164;
            *(_DWORD *)(v4164 + 40) = 0;
            *(_QWORD *)(v4165 + 24) = -1LL;
            *(_DWORD *)(v4165 + 44) = v2629;
            (*(void (__fastcall **)(_BYTE *, _QWORD, __int64, _QWORD))(v2694 + 416))(v4294, v2629, v2692, 0LL);
            v2708 = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(v2694 + 464))(v4294, v4295);
            __asm { xgetbv }
            v2710 = v2708 | (v2709 << 32);
            (*(void (__fastcall **)(_BYTE *))(v2694 + 408))(v4295);
            v2673 = (_BYTE *)v2694;
            *(_QWORD *)(v4165 + 32) = v2710;
          }
          (*((void (__fastcall **)(_BYTE *, _QWORD, __int64, __int64))v2673 + 52))(v4296, v2629, v2689, v2690);
          (*((void (__fastcall **)(_BYTE *, _BYTE *))v2673 + 58))(v4296, v4297);
          v2711 = *((_QWORD *)v2673 + 322);
          if ( v2711 )
          {
            v2712 = *(_DWORD *)(v2711 + 800);
            v2711 = *((_QWORD *)v2673 + 322);
          }
          else
          {
            v2713 = __readmsr(0x832u);
            v2712 = v2713;
          }
          if ( v2711 )
          {
            v2714 = *(_DWORD *)(v2711 + 832);
          }
          else
          {
            v2715 = __readmsr(0x834u);
            v2714 = v2715;
          }
          (*((void (__fastcall **)(_BYTE *))v2673 + 51))(v4297);
          v2716 = *((unsigned int *)v2673 + 505);
          v2717 = v2712 & 0xFFFCEF00;
          v2718 = v2714 & 0xFFFEE800;
          v2719 = v2716 + 48;
          if ( (unsigned int)(v2716 + 48) <= *((_DWORD *)v2673 + 647) )
          {
            v2720 = v2673;
            *((_DWORD *)v2673 + 505) = v2719;
          }
          else
          {
            v2720 = (_BYTE *)pg_unknown7(v2673, v2719, *((unsigned int *)v2673 + 585));
            if ( !v2720 )
              goto LABEL_3595;
            v2721 = *((_DWORD *)v2673 + 612);
            if ( (v2721 & 4) == 0 )
            {
              v2722 = *((_DWORD *)v2673 + 505);
              v2723 = *((_QWORD *)v2673 + 249);
              v2724 = (v2721 & 0x20000000) != 0 ? *((_DWORD *)v2673 + 585) : 0;
              if ( v2722 >= 8 )
              {
                v2725 = (unsigned __int64)v2722 >> 3;
                do
                {
                  *(_QWORD *)v2673 = 0LL;
                  v2722 -= 8;
                  v2673 += 8;
                  --v2725;
                }
                while ( v2725 );
              }
              for ( i111 = 0; v2722; --v2722 )
                *v2673++ = 0;
              v2727 = *((_DWORD *)v2720 + 585);
              *((_DWORD *)v2720 + 585) = v2724;
              if ( v2724 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2720 + 109))(v2723);
              }
              else
              {
                if ( (*((_DWORD *)v2720 + 612) & 0x10000000) == 0 )
                  i111 = v2724;
                if ( i111 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2720 + 69))(v2723 - 8, *(_QWORD *)(v2723 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2720 + 32))(v2723);
              }
              *((_DWORD *)v2720 + 585) = v2727;
            }
            *((_DWORD *)v2720 + 612) &= ~4u;
          }
          ++*((_DWORD *)v2720 + 515);
          v2728 = &v2720[v2716];
          v2729 = 48;
          v4166 = &v2720[v2716];
          v2730 = &v2720[v2716];
          v2731 = 6LL;
          do
          {
            *v2730 = 0LL;
            v2729 -= 8;
            ++v2730;
            --v2731;
          }
          while ( v2731 );
          for ( ; v2729; --v2729 )
          {
            *(_BYTE *)v2730 = 0;
            v2730 = (_QWORD *)((char *)v2730 + 1);
          }
          *(_DWORD *)v2728 = 23;
          *((_QWORD *)v2728 + 1) = 0LL;
          *((_DWORD *)v2728 + 4) = 0;
          v2732 = *((_QWORD *)v2720 + 259);
          for ( i112 = v2732; ; LODWORD(v2732) = i112 ^ v2732 )
          {
            i112 >>= 31;
            if ( !i112 )
              break;
          }
          *((_DWORD *)v2728 + 5) = v2732 & 0x7FFFFFFF;
          v2734 = v3834;
          v2735 = (unsigned int)v3834;
          v4167 = v4166;
          v4166[6] = v2717;
          v4167[7] = -200960;
          v4167[8] = v2718;
          v4167[9] = -71680;
          v4167[10] = v2734;
          v2736 = (char *)(KeGetPrcb(v2735) - 384);
          HalExtensionList = v2736;
          if ( (NtBuildNumber & 0xF0000000) == 0xF0000000 )
            *((_QWORD *)v2736 + 33) = 0LL;
          v2737 = *((_DWORD *)v2720 + 526);
          v2738 = v2736 + 264;
          v2739 = *((unsigned int *)v2720 + 505);
          v2740 = 32;
          if ( v2737 != 7 )
            v2740 = 0;
          v2741 = v2739 + 48;
          if ( (unsigned int)(v2739 + 48) <= *((_DWORD *)v2720 + 647) )
          {
            v2742 = v2720;
            *((_DWORD *)v2720 + 505) = v2741;
          }
          else
          {
            v2742 = (_BYTE *)pg_unknown7(v2720, v2741, *((unsigned int *)v2720 + 585));
            if ( !v2742 )
              goto LABEL_3595;
            v2743 = *((_DWORD *)v2720 + 612);
            if ( (v2743 & 4) == 0 )
            {
              v2744 = *((_DWORD *)v2720 + 505);
              v2745 = *((_QWORD *)v2720 + 249);
              v2746 = (v2743 & 0x20000000) != 0 ? *((_DWORD *)v2720 + 585) : 0;
              if ( v2744 >= 8 )
              {
                v2747 = (unsigned __int64)v2744 >> 3;
                do
                {
                  *(_QWORD *)v2720 = 0LL;
                  v2744 -= 8;
                  v2720 += 8;
                  --v2747;
                }
                while ( v2747 );
              }
              for ( i113 = 0; v2744; --v2744 )
                *v2720++ = 0;
              v2749 = *((_DWORD *)v2742 + 585);
              *((_DWORD *)v2742 + 585) = v2746;
              if ( v2746 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2742 + 109))(v2745);
              }
              else
              {
                if ( (*((_DWORD *)v2742 + 612) & 0x10000000) == 0 )
                  i113 = v2746;
                if ( i113 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2742 + 69))(v2745 - 8, *(_QWORD *)(v2745 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2742 + 32))(v2745);
              }
              *((_DWORD *)v2742 + 585) = v2749;
            }
            *((_DWORD *)v2742 + 612) &= ~4u;
          }
          v2750 = &v2742[v2739];
          ++*((_DWORD *)v2742 + 515);
          v2751 = &v2742[v2739];
          v4168 = &v2742[v2739];
          v2752 = 48;
          v2753 = 6LL;
          do
          {
            *v2751 = 0LL;
            v2752 -= 8;
            ++v2751;
            --v2753;
          }
          while ( v2753 );
          for ( ; v2752; --v2752 )
          {
            *(_BYTE *)v2751 = 0;
            v2751 = (_QWORD *)((char *)v2751 + 1);
          }
          *(_DWORD *)v2750 = v2740;
          *((_QWORD *)v2750 + 1) = v2738;
          if ( v2737 == 7 )
            pg_unknown12(v2742, v2738, 8LL, v2750 + 24);
          *((_DWORD *)v2750 + 4) = 8;
          *((_DWORD *)v2742 + 522) += 8;
          for ( i114 = v2738; i114 < v2738 + 8; i114 += 64 )
            _mm_prefetch(i114, 0);
          v2755 = __ROL8__(*(_QWORD *)v2738 ^ *((_QWORD *)v2742 + 259), *((_DWORD *)v2742 + 517));
          for ( i115 = v2755; ; LODWORD(v2755) = i115 ^ v2755 )
          {
            i115 >>= 31;
            if ( !i115 )
              break;
          }
          v2757 = 32;
          v2758 = (char *)HalExtensionList + 56;
          *((_DWORD *)v2750 + 5) = v2755 & 0x7FFFFFFF;
          *((_DWORD *)v2742 + 522) += 8;
          v2759 = *((unsigned int *)v2742 + 505);
          v2760 = *((_DWORD *)v2742 + 526);
          if ( v2760 != 7 )
            v2757 = 0;
          v2761 = v2759 + 48;
          if ( (unsigned int)(v2759 + 48) <= *((_DWORD *)v2742 + 647) )
          {
            v2762 = v2742;
            *((_DWORD *)v2742 + 505) = v2761;
          }
          else
          {
            v2762 = (_BYTE *)pg_unknown7(v2742, v2761, *((unsigned int *)v2742 + 585));
            if ( !v2762 )
              goto LABEL_3595;
            v2763 = *((_DWORD *)v2742 + 612);
            if ( (v2763 & 4) == 0 )
            {
              v2764 = *((_DWORD *)v2742 + 505);
              v2765 = *((_QWORD *)v2742 + 249);
              v2766 = (v2763 & 0x20000000) != 0 ? *((_DWORD *)v2742 + 585) : 0;
              if ( v2764 >= 8 )
              {
                v2767 = (unsigned __int64)v2764 >> 3;
                do
                {
                  *(_QWORD *)v2742 = 0LL;
                  v2764 -= 8;
                  v2742 += 8;
                  --v2767;
                }
                while ( v2767 );
              }
              for ( i116 = 0; v2764; --v2764 )
                *v2742++ = 0;
              v2769 = *((_DWORD *)v2762 + 585);
              *((_DWORD *)v2762 + 585) = v2766;
              if ( v2766 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2762 + 109))(v2765);
              }
              else
              {
                if ( (*((_DWORD *)v2762 + 612) & 0x10000000) == 0 )
                  i116 = v2766;
                if ( i116 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2762 + 69))(v2765 - 8, *(_QWORD *)(v2765 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2762 + 32))(v2765);
              }
              *((_DWORD *)v2762 + 585) = v2769;
            }
            *((_DWORD *)v2762 + 612) &= ~4u;
          }
          v2770 = &v2762[v2759];
          ++*((_DWORD *)v2762 + 515);
          v2771 = &v2762[v2759];
          v4169 = &v2762[v2759];
          v2772 = 48;
          v2773 = 6LL;
          do
          {
            *v2771 = 0LL;
            v2772 -= 8;
            ++v2771;
            --v2773;
          }
          while ( v2773 );
          for ( ; v2772; --v2772 )
          {
            *(_BYTE *)v2771 = 0;
            v2771 = (_QWORD *)((char *)v2771 + 1);
          }
          *(_DWORD *)v2770 = v2757;
          *((_QWORD *)v2770 + 1) = v2758;
          if ( v2760 == 7 )
            pg_unknown12(v2762, v2758, 8LL, v2770 + 24);
          *((_DWORD *)v2770 + 4) = 8;
          *((_DWORD *)v2762 + 522) += 8;
          for ( i117 = v2758; i117 < v2758 + 8; i117 += 64 )
            _mm_prefetch(i117, 0);
          v2775 = __ROL8__(*(_QWORD *)v2758 ^ *((_QWORD *)v2762 + 259), *((_DWORD *)v2762 + 517));
          for ( i118 = v2775; ; LODWORD(v2775) = i118 ^ v2775 )
          {
            i118 >>= 31;
            if ( !i118 )
              break;
          }
          v2777 = 32;
          *((_DWORD *)v2770 + 5) = v2775 & 0x7FFFFFFF;
          *((_DWORD *)v2762 + 522) += 8;
          v2778 = *((unsigned int *)v2762 + 505);
          v2779 = *((_DWORD *)v2762 + 526);
          if ( v2779 != 7 )
            v2777 = 0;
          v2780 = v2778 + 48;
          if ( (unsigned int)(v2778 + 48) <= *((_DWORD *)v2762 + 647) )
          {
            v2781 = v2762;
            *((_DWORD *)v2762 + 505) = v2780;
          }
          else
          {
            v2781 = (_BYTE *)pg_unknown7(v2762, v2780, *((unsigned int *)v2762 + 585));
            if ( !v2781 )
              goto LABEL_3595;
            v2782 = *((_DWORD *)v2762 + 612);
            if ( (v2782 & 4) == 0 )
            {
              v2783 = *((_DWORD *)v2762 + 505);
              v2784 = *((_QWORD *)v2762 + 249);
              v2785 = (v2782 & 0x20000000) != 0 ? *((_DWORD *)v2762 + 585) : 0;
              if ( v2783 >= 8 )
              {
                v2786 = (unsigned __int64)v2783 >> 3;
                do
                {
                  *(_QWORD *)v2762 = 0LL;
                  v2783 -= 8;
                  v2762 += 8;
                  --v2786;
                }
                while ( v2786 );
              }
              for ( i119 = 0; v2783; --v2783 )
                *v2762++ = 0;
              v2788 = *((_DWORD *)v2781 + 585);
              *((_DWORD *)v2781 + 585) = v2785;
              if ( v2785 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2781 + 109))(v2784);
              }
              else
              {
                if ( (*((_DWORD *)v2781 + 612) & 0x10000000) == 0 )
                  i119 = v2785;
                if ( i119 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2781 + 69))(v2784 - 8, *(_QWORD *)(v2784 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2781 + 32))(v2784);
              }
              *((_DWORD *)v2781 + 585) = v2788;
            }
            *((_DWORD *)v2781 + 612) &= ~4u;
          }
          v2789 = &v2781[v2778];
          ++*((_DWORD *)v2781 + 515);
          v2790 = &v2781[v2778];
          v4170 = &v2781[v2778];
          v2791 = 48;
          v2792 = 6LL;
          do
          {
            *v2790 = 0LL;
            v2791 -= 8;
            ++v2790;
            --v2792;
          }
          while ( v2792 );
          for ( ; v2791; --v2791 )
          {
            *(_BYTE *)v2790 = 0;
            v2790 = (_QWORD *)((char *)v2790 + 1);
          }
          v2793 = (const char *)HalExtensionList;
          *(_DWORD *)v2789 = v2777;
          *((_QWORD *)v2789 + 1) = v2793;
          if ( v2779 == 7 )
            pg_unknown12(v2781, v2793, 8LL, v2789 + 24);
          *((_DWORD *)v2789 + 4) = 8;
          v2794 = v2793 + 8;
          *((_DWORD *)v2781 + 522) += 8;
          v2795 = v2793;
          v2796 = *((_DWORD *)v2781 + 517);
          v2797 = *((_QWORD *)v2781 + 259);
          HalExtensionList = (PVOID)(v2793 + 8);
          if ( v2793 < v2793 + 8 )
          {
            do
            {
              _mm_prefetch(v2795, 0);
              v2795 += 64;
            }
            while ( v2795 < v2794 );
          }
          v2798 = __ROL8__(v2797 ^ *(_QWORD *)v2793, v2796);
          for ( i120 = v2798; ; LODWORD(v2798) = i120 ^ v2798 )
          {
            i120 >>= 31;
            if ( !i120 )
              break;
          }
          v2800 = 32;
          *((_DWORD *)v2789 + 5) = v2798 & 0x7FFFFFFF;
          *((_DWORD *)v2781 + 522) += 8;
          v2801 = *((unsigned int *)v2781 + 505);
          v2802 = *((_DWORD *)v2781 + 526);
          if ( v2802 != 7 )
            v2800 = 0;
          v2803 = v2801 + 48;
          if ( (unsigned int)(v2801 + 48) <= *((_DWORD *)v2781 + 647) )
          {
            v2804 = v2781;
            *((_DWORD *)v2781 + 505) = v2803;
          }
          else
          {
            v2804 = (_BYTE *)pg_unknown7(v2781, v2803, *((unsigned int *)v2781 + 585));
            if ( !v2804 )
              goto LABEL_3595;
            v2805 = *((_DWORD *)v2781 + 612);
            if ( (v2805 & 4) == 0 )
            {
              v2806 = *((_DWORD *)v2781 + 505);
              v2807 = *((_QWORD *)v2781 + 249);
              v2808 = (v2805 & 0x20000000) != 0 ? *((_DWORD *)v2781 + 585) : 0;
              if ( v2806 >= 8 )
              {
                v2809 = (unsigned __int64)v2806 >> 3;
                do
                {
                  *(_QWORD *)v2781 = 0LL;
                  v2806 -= 8;
                  v2781 += 8;
                  --v2809;
                }
                while ( v2809 );
              }
              for ( i121 = 0; v2806; --v2806 )
                *v2781++ = 0;
              v2811 = *((_DWORD *)v2804 + 585);
              *((_DWORD *)v2804 + 585) = v2808;
              if ( v2808 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2804 + 109))(v2807);
              }
              else
              {
                if ( (*((_DWORD *)v2804 + 612) & 0x10000000) == 0 )
                  i121 = v2808;
                if ( i121 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2804 + 69))(v2807 - 8, *(_QWORD *)(v2807 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2804 + 32))(v2807);
              }
              *((_DWORD *)v2804 + 585) = v2811;
            }
            *((_DWORD *)v2804 + 612) &= ~4u;
          }
          v2812 = &v2804[v2801];
          ++*((_DWORD *)v2804 + 515);
          v2813 = &v2804[v2801];
          v4171 = &v2804[v2801];
          v2814 = 48;
          v2815 = 6LL;
          do
          {
            *v2813 = 0LL;
            v2814 -= 8;
            ++v2813;
            --v2815;
          }
          while ( v2815 );
          for ( ; v2814; --v2814 )
          {
            *(_BYTE *)v2813 = 0;
            v2813 = (_QWORD *)((char *)v2813 + 1);
          }
          *(_DWORD *)v2812 = v2800;
          *((_QWORD *)v2812 + 1) = v2794;
          if ( v2802 == 7 )
            pg_unknown12(v2804, v2794, 8LL, v2812 + 24);
          *((_DWORD *)v2812 + 4) = 8;
          *((_DWORD *)v2804 + 522) += 8;
          for ( i122 = v2794; i122 < v2794 + 8; i122 += 64 )
            _mm_prefetch(i122, 0);
          v2817 = __ROL8__(*((_QWORD *)v2804 + 259) ^ *(_QWORD *)v2794, *((_DWORD *)v2804 + 517));
          for ( i123 = v2817; ; LODWORD(v2817) = i123 ^ v2817 )
          {
            i123 >>= 31;
            if ( !i123 )
              break;
          }
          *((_DWORD *)v2812 + 5) = v2817 & 0x7FFFFFFF;
          *((_DWORD *)v2804 + 522) += 8;
          v893 = (v2804[2171] & 8) == 0;
          v2819 = *((_DWORD *)v2804 + 526);
          v2820 = *(_QWORD **)v2794;
          v2821 = *((unsigned int *)v2804 + 585);
          LODWORD(v3833) = v2819;
          if ( !v893 )
          {
            v2822 = *((unsigned int *)v2804 + 505);
            v2823 = 32;
            if ( v2819 != 7 )
              v2823 = 0;
            v2824 = v2822 + 48;
            if ( (unsigned int)(v2822 + 48) <= *((_DWORD *)v2804 + 647) )
            {
              v2524 = v2804;
              *((_DWORD *)v2804 + 505) = v2824;
              goto LABEL_4000;
            }
            v2524 = (_BYTE *)pg_unknown7(v2804, v2824, v2821);
            if ( v2524 )
            {
              v2825 = *((_DWORD *)v2804 + 612);
              if ( (v2825 & 4) == 0 )
              {
                v2826 = *((_DWORD *)v2804 + 505);
                v2827 = *((_QWORD *)v2804 + 249);
                v2828 = (v2825 & 0x20000000) != 0 ? *((_DWORD *)v2804 + 585) : 0;
                if ( v2826 >= 8 )
                {
                  v2829 = (unsigned __int64)v2826 >> 3;
                  do
                  {
                    *(_QWORD *)v2804 = 0LL;
                    v2826 -= 8;
                    v2804 += 8;
                    --v2829;
                  }
                  while ( v2829 );
                }
                for ( i124 = 0; v2826; --v2826 )
                  *v2804++ = 0;
                v2831 = *((_DWORD *)v2524 + 585);
                *((_DWORD *)v2524 + 585) = v2828;
                if ( v2828 == 3 )
                {
                  (*((void (__fastcall **)(__int64))v2524 + 109))(v2827);
                }
                else
                {
                  if ( (*((_DWORD *)v2524 + 612) & 0x10000000) == 0 )
                    i124 = v2828;
                  if ( i124 )
                    (*((void (__fastcall **)(__int64, _QWORD))v2524 + 69))(v2827 - 8, *(_QWORD *)(v2827 - 8));
                  else
                    (*((void (__fastcall **)(__int64))v2524 + 32))(v2827);
                }
                *((_DWORD *)v2524 + 585) = v2831;
              }
              *((_DWORD *)v2524 + 612) &= ~4u;
              v2819 = v3833;
LABEL_4000:
              ++*((_DWORD *)v2524 + 515);
              v2832 = &v2524[v2822];
              v4172 = v2832;
              v2833 = v2832;
              v2834 = 48;
              v2835 = 6LL;
              do
              {
                *v2833 = 0LL;
                v2834 -= 8;
                ++v2833;
                --v2835;
              }
              while ( v2835 );
              for ( ; v2834; --v2834 )
              {
                *(_BYTE *)v2833 = 0;
                v2833 = (_QWORD *)((char *)v2833 + 1);
              }
              *(_DWORD *)v2832 = v2823;
              *((_QWORD *)v2832 + 1) = v2820;
              if ( v2819 == 7 )
                pg_unknown12(v2524, v2820, 104LL, v2832 + 24);
              *((_DWORD *)v2832 + 4) = 104;
              v2836 = (const char *)v2820;
              *((_DWORD *)v2524 + 522) += 104;
              v2837 = *((_DWORD *)v2524 + 517);
              v2838 = *((_QWORD *)v2524 + 259);
              if ( v2820 < v2820 + 13 )
              {
                do
                {
                  _mm_prefetch(v2836, 0);
                  v2836 += 64;
                }
                while ( v2836 < (const char *)v2820 + 104 );
              }
              v2839 = 104;
              v2840 = 13LL;
              do
              {
                v2838 = __ROL8__(*v2820++ ^ v2838, v2837);
                v2839 -= 8;
                --v2840;
              }
              while ( v2840 );
              for ( ; v2839; --v2839 )
              {
                v2841 = *(unsigned __int8 *)v2820;
                v2820 = (_QWORD *)((char *)v2820 + 1);
                v2838 = __ROL8__(v2841 ^ v2838, v2837);
              }
              for ( i125 = v2838; ; LODWORD(v2838) = i125 ^ v2838 )
              {
                i125 >>= 31;
                if ( !i125 )
                  break;
              }
              *((_DWORD *)v2832 + 5) = v2838 & 0x7FFFFFFF;
              *((_DWORD *)v2524 + 522) += 104;
            }
            else
            {
              v2524 = 0LL;
            }
LABEL_4054:
            if ( !v2524 )
              goto LABEL_3595;
            if ( (v2524[2171] & 8) != 0 )
            {
              v2865 = 1;
              LODWORD(v3833) = 1;
              do
              {
                v2866 = *(_QWORD **)(*(_QWORD *)v2794 + 8LL * v2865 + 28);
                if ( v2866 )
                {
                  v2867 = *((_DWORD *)v2524 + 526);
                  v2868 = 32;
                  v2869 = *((unsigned int *)v2524 + 505);
                  if ( v2867 != 7 )
                    v2868 = 0;
                  v2870 = v2869 + 48;
                  if ( (unsigned int)(v2869 + 48) <= *((_DWORD *)v2524 + 647) )
                  {
                    v2871 = v2524;
                    *((_DWORD *)v2524 + 505) = v2870;
                  }
                  else
                  {
                    v2871 = (_BYTE *)pg_unknown7(v2524, v2870, *((unsigned int *)v2524 + 585));
                    if ( !v2871 )
                      goto LABEL_3595;
                    v2872 = *((_DWORD *)v2524 + 612);
                    if ( (v2872 & 4) == 0 )
                    {
                      v2873 = *((_DWORD *)v2524 + 505);
                      v2874 = *((_QWORD *)v2524 + 249);
                      v2875 = (v2872 & 0x20000000) != 0 ? *((_DWORD *)v2524 + 585) : 0;
                      if ( v2873 >= 8 )
                      {
                        v2876 = (unsigned __int64)v2873 >> 3;
                        do
                        {
                          *(_QWORD *)v2524 = 0LL;
                          v2873 -= 8;
                          v2524 += 8;
                          --v2876;
                        }
                        while ( v2876 );
                      }
                      for ( i126 = 0; v2873; --v2873 )
                        *v2524++ = 0;
                      v2878 = *((_DWORD *)v2871 + 585);
                      *((_DWORD *)v2871 + 585) = v2875;
                      if ( v2875 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2871 + 109))(v2874);
                      }
                      else
                      {
                        if ( (*((_DWORD *)v2871 + 612) & 0x10000000) == 0 )
                          i126 = v2875;
                        if ( i126 )
                          (*((void (__fastcall **)(__int64, _QWORD))v2871 + 69))(v2874 - 8, *(_QWORD *)(v2874 - 8));
                        else
                          (*((void (__fastcall **)(__int64))v2871 + 32))(v2874);
                      }
                      *((_DWORD *)v2871 + 585) = v2878;
                    }
                    *((_DWORD *)v2871 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2871 + 515);
                  v2879 = &v2871[v2869];
                  v2880 = 48;
                  v4174 = v2879;
                  v2881 = v2879;
                  v2882 = 6LL;
                  do
                  {
                    *v2881 = 0LL;
                    v2880 -= 8;
                    ++v2881;
                    --v2882;
                  }
                  while ( v2882 );
                  for ( ; v2880; --v2880 )
                  {
                    *(_BYTE *)v2881 = 0;
                    v2881 = (_QWORD *)((char *)v2881 + 1);
                  }
                  *(_DWORD *)v2879 = v2868;
                  *((_QWORD *)v2879 + 1) = v2866;
                  if ( v2867 == 7 )
                    pg_unknown12(v2871, v2866, 16LL, v2879 + 24);
                  *((_DWORD *)v2879 + 4) = 16;
                  *((_DWORD *)v2871 + 522) += 16;
                  v2883 = v2866;
                  v2884 = *((_DWORD *)v2871 + 517);
                  v2885 = (const char *)v2866;
                  v2886 = *((_QWORD *)v2871 + 259);
                  if ( v2866 < v2866 + 2 )
                  {
                    do
                    {
                      _mm_prefetch(v2885, 0);
                      v2885 += 64;
                    }
                    while ( v2885 < (const char *)v2866 + 16 );
                  }
                  v2887 = 16;
                  v2888 = 2LL;
                  do
                  {
                    v2886 = __ROL8__(*v2883++ ^ v2886, v2884);
                    v2887 -= 8;
                    --v2888;
                  }
                  while ( v2888 );
                  for ( ; v2887; --v2887 )
                  {
                    v2889 = *(unsigned __int8 *)v2883;
                    v2883 = (_QWORD *)((char *)v2883 + 1);
                    v2886 = __ROL8__(v2889 ^ v2886, v2884);
                  }
                  for ( i127 = v2886 >> 31; i127; i127 >>= 31 )
                    LODWORD(v2886) = i127 ^ v2886;
                  v2891 = 32;
                  *((_DWORD *)v2879 + 5) = v2886 & 0x7FFFFFFF;
                  *((_DWORD *)v2871 + 522) += 16;
                  v2892 = (const char *)v2866[1];
                  v2893 = *((unsigned int *)v2871 + 505);
                  v2894 = *((_DWORD *)v2871 + 526);
                  if ( v2894 != 7 )
                    v2891 = 0;
                  v2895 = v2893 + 48;
                  if ( (unsigned int)(v2893 + 48) <= *((_DWORD *)v2871 + 647) )
                  {
                    v2524 = v2871;
                    *((_DWORD *)v2871 + 505) = v2895;
                  }
                  else
                  {
                    v2524 = (_BYTE *)pg_unknown7(v2871, v2895, *((unsigned int *)v2871 + 585));
                    if ( !v2524 )
                      goto LABEL_3595;
                    v2896 = *((_DWORD *)v2871 + 612);
                    if ( (v2896 & 4) == 0 )
                    {
                      v2897 = *((_DWORD *)v2871 + 505);
                      v2898 = *((_QWORD *)v2871 + 249);
                      v2899 = (v2896 & 0x20000000) != 0 ? *((_DWORD *)v2871 + 585) : 0;
                      if ( v2897 >= 8 )
                      {
                        v2900 = (unsigned __int64)v2897 >> 3;
                        do
                        {
                          *(_QWORD *)v2871 = 0LL;
                          v2897 -= 8;
                          v2871 += 8;
                          --v2900;
                        }
                        while ( v2900 );
                      }
                      for ( i128 = 0; v2897; --v2897 )
                        *v2871++ = 0;
                      v2902 = *((_DWORD *)v2524 + 585);
                      *((_DWORD *)v2524 + 585) = v2899;
                      if ( v2899 == 3 )
                      {
                        (*((void (__fastcall **)(__int64))v2524 + 109))(v2898);
                      }
                      else
                      {
                        if ( (*((_DWORD *)v2524 + 612) & 0x10000000) == 0 )
                          i128 = v2899;
                        if ( i128 )
                          (*((void (__fastcall **)(__int64, _QWORD))v2524 + 69))(v2898 - 8, *(_QWORD *)(v2898 - 8));
                        else
                          (*((void (__fastcall **)(__int64))v2524 + 32))(v2898);
                      }
                      *((_DWORD *)v2524 + 585) = v2902;
                    }
                    *((_DWORD *)v2524 + 612) &= ~4u;
                  }
                  ++*((_DWORD *)v2524 + 515);
                  v2903 = &v2524[v2893];
                  v2904 = 48;
                  v4175 = &v2524[v2893];
                  v2905 = &v2524[v2893];
                  v2906 = 6LL;
                  do
                  {
                    *v2905 = 0LL;
                    v2904 -= 8;
                    ++v2905;
                    --v2906;
                  }
                  while ( v2906 );
                  for ( ; v2904; --v2904 )
                  {
                    *(_BYTE *)v2905 = 0;
                    v2905 = (_QWORD *)((char *)v2905 + 1);
                  }
                  *(_DWORD *)v2903 = v2891;
                  *((_QWORD *)v2903 + 1) = v2892;
                  if ( v2894 == 7 )
                    pg_unknown12(v2524, v2892, 8LL, v2903 + 24);
                  *((_DWORD *)v2903 + 4) = 8;
                  *((_DWORD *)v2524 + 522) += 8;
                  for ( i129 = v2892; i129 < v2892 + 8; i129 += 64 )
                    _mm_prefetch(i129, 0);
                  v2908 = __ROL8__(*((_QWORD *)v2524 + 259) ^ *(_QWORD *)v2892, *((_DWORD *)v2524 + 517));
                  for ( i130 = v2908; ; LODWORD(v2908) = i130 ^ v2908 )
                  {
                    i130 >>= 31;
                    if ( !i130 )
                      break;
                  }
                  v2794 = (const char *)HalExtensionList;
                  *((_DWORD *)v2903 + 5) = v2908 & 0x7FFFFFFF;
                  *((_DWORD *)v2524 + 522) += 8;
                }
                v2865 = v3833 + 1;
                LODWORD(v3833) = v2865;
              }
              while ( v2865 < 8 );
            }
            v2910 = (char *)qword_140D58080;
            if ( qword_140D58080 )
            {
              v2911 = *((_DWORD *)v2524 + 526);
              v2912 = 32;
              v2913 = *((unsigned int *)v2524 + 505);
              if ( v2911 != 7 )
                v2912 = 0;
              v2914 = v2913 + 48;
              if ( (unsigned int)(v2913 + 48) <= *((_DWORD *)v2524 + 647) )
              {
                v2915 = v2524;
                *((_DWORD *)v2524 + 505) = v2914;
              }
              else
              {
                v2915 = (_BYTE *)pg_unknown7(v2524, v2914, *((unsigned int *)v2524 + 585));
                if ( !v2915 )
                  goto LABEL_3595;
                v2916 = *((_DWORD *)v2524 + 612);
                if ( (v2916 & 4) == 0 )
                {
                  v2917 = *((_DWORD *)v2524 + 505);
                  v2918 = *((_QWORD *)v2524 + 249);
                  v2919 = (v2916 & 0x20000000) != 0 ? *((_DWORD *)v2524 + 585) : 0;
                  if ( v2917 >= 8 )
                  {
                    v2920 = (unsigned __int64)v2917 >> 3;
                    do
                    {
                      *(_QWORD *)v2524 = 0LL;
                      v2917 -= 8;
                      v2524 += 8;
                      --v2920;
                    }
                    while ( v2920 );
                  }
                  for ( i131 = 0; v2917; --v2917 )
                    *v2524++ = 0;
                  v2922 = *((_DWORD *)v2915 + 585);
                  *((_DWORD *)v2915 + 585) = v2919;
                  if ( v2919 == 3 )
                  {
                    (*((void (__fastcall **)(__int64))v2915 + 109))(v2918);
                  }
                  else
                  {
                    if ( (*((_DWORD *)v2915 + 612) & 0x10000000) == 0 )
                      i131 = v2919;
                    if ( i131 )
                      (*((void (__fastcall **)(__int64, _QWORD))v2915 + 69))(v2918 - 8, *(_QWORD *)(v2918 - 8));
                    else
                      (*((void (__fastcall **)(__int64))v2915 + 32))(v2918);
                  }
                  *((_DWORD *)v2915 + 585) = v2922;
                }
                *((_DWORD *)v2915 + 612) &= ~4u;
              }
              v2923 = (int *)&v2915[v2913];
              ++*((_DWORD *)v2915 + 515);
              v2924 = v2923;
              HalExtensionList = v2923;
              v4176 = v2923;
              v2925 = 48;
              v2926 = 6LL;
              do
              {
                *(_QWORD *)v2924 = 0LL;
                v2925 -= 8;
                v2924 += 2;
                --v2926;
              }
              while ( v2926 );
              for ( ; v2925; --v2925 )
              {
                *(_BYTE *)v2924 = 0;
                v2924 = (int *)((char *)v2924 + 1);
              }
              *v2923 = v2912;
              *((_QWORD *)v2923 + 1) = v2910;
              if ( v2911 == 7 )
                pg_unknown12(v2915, v2910, 512LL, v2923 + 6);
              v2923[4] = 512;
              *((_DWORD *)v2915 + 522) += 512;
              v2927 = v2910;
              v2928 = *((_DWORD *)v2915 + 517);
              v2929 = v2910;
              for ( i132 = *((_QWORD *)v2915 + 259); v2929 < v2910 + 512; v2929 += 64 )
                _mm_prefetch(v2929, 0);
              v2931 = 4;
              v2932 = *((_QWORD *)v2915 + 259);
              do
              {
                v2933 = 8LL;
                do
                {
                  v2934 = *((_QWORD *)v2927 + 1) ^ __ROL8__(*(_QWORD *)v2927 ^ v2932, v2928);
                  v2927 += 16;
                  v2932 = __ROL8__(v2934, v2928);
                  --v2933;
                }
                while ( v2933 );
                v2935 = (__ROL8__(i132 ^ (v2927 - v2910), 17) ^ i132 ^ (unsigned __int64)(v2927 - v2910))
                      * (unsigned __int128)0x7010008004002001uLL;
                v4177 = *((_QWORD *)&v2935 + 1);
                v2928 = (BYTE8(v2935) ^ (unsigned __int8)(v2935 ^ v2928)) & 0x3F;
                if ( !v2928 )
                  LOBYTE(v2928) = 1;
                --v2931;
              }
              while ( v2931 );
              for ( i133 = v2932 >> 31; i133; i133 >>= 31 )
                LODWORD(v2932) = i133 ^ v2932;
              v2937 = 32;
              *((_DWORD *)HalExtensionList + 5) = v2932 & 0x7FFFFFFF;
              *((_DWORD *)v2915 + 522) += 512;
              v2938 = *((unsigned int *)v2915 + 505);
              v2939 = (char *)qword_140D58080 + 512;
              v2940 = *((_DWORD *)v2915 + 526);
              if ( v2940 != 7 )
                v2937 = 0;
              v2941 = v2938 + 48;
              if ( (unsigned int)(v2938 + 48) <= *((_DWORD *)v2915 + 647) )
              {
                v2524 = v2915;
                *((_DWORD *)v2915 + 505) = v2941;
              }
              else
              {
                v2524 = (_BYTE *)pg_unknown7(v2915, v2941, *((unsigned int *)v2915 + 585));
                if ( !v2524 )
                  goto LABEL_3595;
                v2942 = *((_DWORD *)v2915 + 612);
                if ( (v2942 & 4) == 0 )
                {
                  v2943 = *((_DWORD *)v2915 + 505);
                  v2944 = *((_QWORD *)v2915 + 249);
                  v2945 = (v2942 & 0x20000000) != 0 ? *((_DWORD *)v2915 + 585) : 0;
                  if ( v2943 >= 8 )
                  {
                    v2946 = (unsigned __int64)v2943 >> 3;
                    do
                    {
                      *(_QWORD *)v2915 = 0LL;
                      v2943 -= 8;
                      v2915 += 8;
                      --v2946;
                    }
                    while ( v2946 );
                  }
                  for ( i134 = 0; v2943; --v2943 )
                    *v2915++ = 0;
                  v2948 = *((_DWORD *)v2524 + 585);
                  *((_DWORD *)v2524 + 585) = v2945;
                  if ( v2945 == 3 )
                  {
                    (*((void (__fastcall **)(__int64))v2524 + 109))(v2944);
                  }
                  else
                  {
                    if ( (*((_DWORD *)v2524 + 612) & 0x10000000) == 0 )
                      i134 = v2945;
                    if ( i134 )
                      (*((void (__fastcall **)(__int64, _QWORD))v2524 + 69))(v2944 - 8, *(_QWORD *)(v2944 - 8));
                    else
                      (*((void (__fastcall **)(__int64))v2524 + 32))(v2944);
                  }
                  *((_DWORD *)v2524 + 585) = v2948;
                }
                *((_DWORD *)v2524 + 612) &= ~4u;
              }
              ++*((_DWORD *)v2524 + 515);
              v2949 = (int *)&v2524[v2938];
              HalExtensionList = v2949;
              v2950 = v2949;
              v4178 = v2949;
              v2951 = 48;
              v2952 = 6LL;
              do
              {
                *(_QWORD *)v2950 = 0LL;
                v2951 -= 8;
                v2950 += 2;
                --v2952;
              }
              while ( v2952 );
              for ( ; v2951; --v2951 )
              {
                *(_BYTE *)v2950 = 0;
                v2950 = (int *)((char *)v2950 + 1);
              }
              *v2949 = v2937;
              *((_QWORD *)v2949 + 1) = v2939;
              if ( v2940 == 7 )
                pg_unknown12(v2524, v2939, 512LL, v2949 + 6);
              v2949[4] = 512;
              *((_DWORD *)v2524 + 522) += 512;
              v2953 = v2939;
              v2954 = *((_DWORD *)v2524 + 517);
              v2955 = v2939;
              for ( i135 = *((_QWORD *)v2524 + 259); v2955 < v2939 + 512; v2955 += 64 )
                _mm_prefetch(v2955, 0);
              v2957 = 4;
              v2958 = *((_QWORD *)v2524 + 259);
              do
              {
                v2959 = 8LL;
                do
                {
                  v2960 = *((_QWORD *)v2953 + 1) ^ __ROL8__(*(_QWORD *)v2953 ^ v2958, v2954);
                  v2953 += 16;
                  v2958 = __ROL8__(v2960, v2954);
                  --v2959;
                }
                while ( v2959 );
                v2961 = (__ROL8__(i135 ^ (v2953 - v2939), 17) ^ i135 ^ (unsigned __int64)(v2953 - v2939))
                      * (unsigned __int128)0x7010008004002001uLL;
                v4179 = *((_QWORD *)&v2961 + 1);
                v2954 = (BYTE8(v2961) ^ (unsigned __int8)(v2961 ^ v2954)) & 0x3F;
                if ( !v2954 )
                  LOBYTE(v2954) = 1;
                --v2957;
              }
              while ( v2957 );
              for ( i136 = v2958; ; LODWORD(v2958) = i136 ^ v2958 )
              {
                i136 >>= 31;
                if ( !i136 )
                  break;
              }
              *((_DWORD *)HalExtensionList + 5) = v2958 & 0x7FFFFFFF;
              *((_DWORD *)v2524 + 522) += 512;
            }
            v2560 = v3834 + 1;
            LODWORD(v3834) = v2560;
            if ( v2560 >= (unsigned int)KeNumberProcessors_0 )
              goto LABEL_4203;
            continue;
          }
          break;
        }
        v2843 = *((unsigned int *)v2804 + 505);
        v2844 = (_QWORD *)((char *)v2820 + 12);
        v2845 = 32;
        if ( v2819 != 7 )
          v2845 = 0;
        v2846 = v2843 + 48;
        if ( (unsigned int)(v2843 + 48) > *((_DWORD *)v2804 + 647) )
        {
          v2524 = (_BYTE *)pg_unknown7(v2804, v2846, v2821);
          if ( v2524 )
          {
            v2847 = *((_DWORD *)v2804 + 612);
            if ( (v2847 & 4) == 0 )
            {
              v2848 = *((_DWORD *)v2804 + 505);
              v2849 = *((_QWORD *)v2804 + 249);
              v2850 = (v2847 & 0x20000000) != 0 ? *((_DWORD *)v2804 + 585) : 0;
              if ( v2848 >= 8 )
              {
                v2851 = (unsigned __int64)v2848 >> 3;
                do
                {
                  *(_QWORD *)v2804 = 0LL;
                  v2848 -= 8;
                  v2804 += 8;
                  --v2851;
                }
                while ( v2851 );
              }
              for ( i137 = 0; v2848; --v2848 )
                *v2804++ = 0;
              v2853 = *((_DWORD *)v2524 + 585);
              *((_DWORD *)v2524 + 585) = v2850;
              if ( v2850 == 3 )
              {
                (*((void (__fastcall **)(__int64))v2524 + 109))(v2849);
              }
              else
              {
                if ( (*((_DWORD *)v2524 + 612) & 0x10000000) == 0 )
                  i137 = v2850;
                if ( i137 )
                  (*((void (__fastcall **)(__int64, _QWORD))v2524 + 69))(v2849 - 8, *(_QWORD *)(v2849 - 8));
                else
                  (*((void (__fastcall **)(__int64))v2524 + 32))(v2849);
              }
              *((_DWORD *)v2524 + 585) = v2853;
            }
            *((_DWORD *)v2524 + 612) &= ~4u;
            v2819 = v3833;
LABEL_4037:
            ++*((_DWORD *)v2524 + 515);
            v2854 = &v2524[v2843];
            v4173 = v2854;
            v2855 = v2854;
            v2856 = 48;
            v2857 = 6LL;
            do
            {
              *v2855 = 0LL;
              v2856 -= 8;
              ++v2855;
              --v2857;
            }
            while ( v2857 );
            for ( ; v2856; --v2856 )
            {
              *(_BYTE *)v2855 = 0;
              v2855 = (_QWORD *)((char *)v2855 + 1);
            }
            *(_DWORD *)v2854 = v2845;
            *((_QWORD *)v2854 + 1) = v2844;
            if ( v2819 == 7 )
              pg_unknown12(v2524, (char *)v2820 + 12, 92LL, v2854 + 24);
            *((_DWORD *)v2854 + 4) = 92;
            v2858 = (char *)v2820 + 12;
            *((_DWORD *)v2524 + 522) += 92;
            v2859 = *((_DWORD *)v2524 + 517);
            v2860 = *((_QWORD *)v2524 + 259);
            if ( v2844 < v2820 + 13 )
            {
              do
              {
                _mm_prefetch(v2858, 0);
                v2858 += 64;
              }
              while ( v2858 < (const char *)v2820 + 104 );
            }
            v2861 = 92;
            v2862 = 11LL;
            do
            {
              v2860 = __ROL8__(*v2844++ ^ v2860, v2859);
              v2861 -= 8;
              --v2862;
            }
            while ( v2862 );
            for ( ; v2861; --v2861 )
            {
              v2863 = *(unsigned __int8 *)v2844;
              v2844 = (_QWORD *)((char *)v2844 + 1);
              v2860 = __ROL8__(v2863 ^ v2860, v2859);
            }
            for ( i138 = v2860; ; LODWORD(v2860) = i138 ^ v2860 )
            {
              i138 >>= 31;
              if ( !i138 )
                break;
            }
            *((_DWORD *)v2854 + 5) = v2860 & 0x7FFFFFFF;
            *((_DWORD *)v2524 + 522) += 92;
          }
          else
          {
            v2524 = 0LL;
          }
          v2794 = (const char *)HalExtensionList;
          goto LABEL_4054;
        }
        v2524 = v2804;
        *((_DWORD *)v2804 + 505) = v2846;
        goto LABEL_4037;
      }
    }
LABEL_4203:
    v4026 = (unsigned int *)v2524;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    if ( !v2524 )
      return 0;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v2963 = *((unsigned int *)v2524 + 505);
    v2964 = v2963 + 48;
    if ( (unsigned int)(v2963 + 48) <= *((_DWORD *)v2524 + 647) )
    {
      v2965 = v2524;
      *((_DWORD *)v2524 + 505) = v2964;
    }
    else
    {
      v2965 = (_BYTE *)pg_unknown7(v2524, v2964, *((unsigned int *)v2524 + 585));
      if ( !v2965 )
        return 0;
      v2966 = *((_DWORD *)v2524 + 612);
      if ( (v2966 & 4) == 0 )
      {
        v2967 = *((_DWORD *)v2524 + 505);
        v2968 = *((_QWORD *)v2524 + 249);
        v2969 = (v2966 & 0x20000000) != 0 ? *((_DWORD *)v2524 + 585) : 0;
        if ( v2967 >= 8 )
        {
          v2970 = (unsigned __int64)v2967 >> 3;
          do
          {
            *(_QWORD *)v2524 = 0LL;
            v2967 -= 8;
            v2524 += 8;
            --v2970;
          }
          while ( v2970 );
        }
        for ( i139 = 0; v2967; --v2967 )
          *v2524++ = 0;
        v2972 = *((_DWORD *)v2965 + 585);
        *((_DWORD *)v2965 + 585) = v2969;
        if ( v2969 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2965 + 109))(v2968);
        }
        else
        {
          if ( (*((_DWORD *)v2965 + 612) & 0x10000000) == 0 )
            i139 = v2969;
          if ( i139 )
            (*((void (__fastcall **)(__int64, _QWORD))v2965 + 69))(v2968 - 8, *(_QWORD *)(v2968 - 8));
          else
            (*((void (__fastcall **)(__int64))v2965 + 32))(v2968);
        }
        *((_DWORD *)v2965 + 585) = v2972;
      }
      *((_DWORD *)v2965 + 612) &= ~4u;
    }
    ++*((_DWORD *)v2965 + 515);
    v2973 = &v2965[v2963];
    v2974 = 48;
    v4180 = &v2965[v2963];
    v2975 = &v2965[v2963];
    v2976 = 6LL;
    do
    {
      *v2975 = 0LL;
      v2974 -= 8;
      ++v2975;
      --v2976;
    }
    while ( v2976 );
    for ( ; v2974; --v2974 )
    {
      *(_BYTE *)v2975 = 0;
      v2975 = (_QWORD *)((char *)v2975 + 1);
    }
    *(_DWORD *)v2973 = 26;
    *((_QWORD *)v2973 + 1) = 0LL;
    *((_DWORD *)v2973 + 4) = 0;
    v2977 = *((_QWORD *)v2965 + 259);
    for ( i140 = v2977; ; LODWORD(v2977) = i140 ^ v2977 )
    {
      i140 >>= 31;
      if ( !i140 )
        break;
    }
    v4026 = (unsigned int *)v2965;
    *((_DWORD *)v2973 + 5) = v2977 & 0x7FFFFFFF;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v2979 = *((unsigned int *)v2965 + 505);
    v2980 = v2979 + 48;
    if ( (unsigned int)(v2979 + 48) <= *((_DWORD *)v2965 + 647) )
    {
      v2981 = v2965;
      *((_DWORD *)v2965 + 505) = v2980;
    }
    else
    {
      v2981 = (_BYTE *)pg_unknown7(v2965, v2980, *((unsigned int *)v2965 + 585));
      if ( !v2981 )
        return 0;
      v2982 = *((_DWORD *)v2965 + 612);
      if ( (v2982 & 4) == 0 )
      {
        v2983 = *((_DWORD *)v2965 + 505);
        v2984 = *((_QWORD *)v2965 + 249);
        v2985 = (v2982 & 0x20000000) != 0 ? *((_DWORD *)v2965 + 585) : 0;
        if ( v2983 >= 8 )
        {
          v2986 = (unsigned __int64)v2983 >> 3;
          do
          {
            *(_QWORD *)v2965 = 0LL;
            v2983 -= 8;
            v2965 += 8;
            --v2986;
          }
          while ( v2986 );
        }
        for ( i141 = 0; v2983; --v2983 )
          *v2965++ = 0;
        v2988 = *((_DWORD *)v2981 + 585);
        *((_DWORD *)v2981 + 585) = v2985;
        if ( v2985 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2981 + 109))(v2984);
        }
        else
        {
          if ( (*((_DWORD *)v2981 + 612) & 0x10000000) == 0 )
            i141 = v2985;
          if ( i141 )
            (*((void (__fastcall **)(__int64, _QWORD))v2981 + 69))(v2984 - 8, *(_QWORD *)(v2984 - 8));
          else
            (*((void (__fastcall **)(__int64))v2981 + 32))(v2984);
        }
        *((_DWORD *)v2981 + 585) = v2988;
      }
      *((_DWORD *)v2981 + 612) &= ~4u;
    }
    ++*((_DWORD *)v2981 + 515);
    v2989 = &v2981[v2979];
    v4181 = &v2981[v2979];
    v2990 = &v2981[v2979];
    v2991 = 48;
    v2992 = 6LL;
    do
    {
      *v2990 = 0LL;
      v2991 -= 8;
      ++v2990;
      --v2992;
    }
    while ( v2992 );
    for ( ; v2991; --v2991 )
    {
      *(_BYTE *)v2990 = 0;
      v2990 = (_QWORD *)((char *)v2990 + 1);
    }
    *(_DWORD *)v2989 = 27;
    *((_QWORD *)v2989 + 1) = 0LL;
    *((_DWORD *)v2989 + 4) = 0;
    v2993 = *((_QWORD *)v2981 + 259);
    for ( i142 = v2993 >> 31; i142; i142 >>= 31 )
      LODWORD(v2993) = i142 ^ v2993;
    v4026 = (unsigned int *)v2981;
    *((_DWORD *)v2989 + 5) = v2993 & 0x7FFFFFFF;
    v2995 = 32;
    v2996 = *((unsigned int *)v2981 + 505);
    v2997 = *((_DWORD *)v2981 + 526);
    if ( v2997 != 7 )
      v2995 = 0;
    v2998 = v2996 + 48;
    if ( (unsigned int)(v2996 + 48) <= *((_DWORD *)v2981 + 647) )
    {
      v2999 = v2981;
      *((_DWORD *)v2981 + 505) = v2998;
    }
    else
    {
      v2999 = (_BYTE *)pg_unknown7(v2981, v2998, *((unsigned int *)v2981 + 585));
      if ( !v2999 )
        return 0;
      v3000 = *((_DWORD *)v2981 + 612);
      if ( (v3000 & 4) == 0 )
      {
        v3001 = *((_DWORD *)v2981 + 505);
        v3002 = *((_QWORD *)v2981 + 249);
        v3003 = (v3000 & 0x20000000) != 0 ? *((_DWORD *)v2981 + 585) : 0;
        if ( v3001 >= 8 )
        {
          v3004 = (unsigned __int64)v3001 >> 3;
          do
          {
            *(_QWORD *)v2981 = 0LL;
            v3001 -= 8;
            v2981 += 8;
            --v3004;
          }
          while ( v3004 );
        }
        for ( ; v3001; --v3001 )
          *v2981++ = 0;
        v3005 = *((_DWORD *)v2999 + 585);
        *((_DWORD *)v2999 + 585) = v3003;
        if ( v3003 == 3 )
        {
          (*((void (__fastcall **)(__int64))v2999 + 109))(v3002);
        }
        else
        {
          v3006 = 0;
          if ( (*((_DWORD *)v2999 + 612) & 0x10000000) == 0 )
            v3006 = v3003;
          if ( v3006 )
            (*((void (__fastcall **)(__int64, _QWORD))v2999 + 69))(v3002 - 8, *(_QWORD *)(v3002 - 8));
          else
            (*((void (__fastcall **)(__int64))v2999 + 32))(v3002);
        }
        *((_DWORD *)v2999 + 585) = v3005;
      }
      *((_DWORD *)v2999 + 612) &= ~4u;
    }
    ++*((_DWORD *)v2999 + 515);
    v3007 = &v2999[v2996];
    v3008 = 48;
    v4182 = &v2999[v2996];
    v3009 = &v2999[v2996];
    v3010 = 6LL;
    do
    {
      *v3009 = 0LL;
      v3008 -= 8;
      ++v3009;
      --v3010;
    }
    while ( v3010 );
    for ( ; v3008; --v3008 )
    {
      *(_BYTE *)v3009 = 0;
      v3009 = (_QWORD *)((char *)v3009 + 1);
    }
    *(_DWORD *)v3007 = v2995;
    *((_QWORD *)v3007 + 1) = &KiKvaShadow;
    if ( v2997 == 7 )
      pg_unknown12(v2999, &KiKvaShadow, 1LL, v3007 + 24);
    *((_DWORD *)v3007 + 4) = 1;
    ++*((_DWORD *)v2999 + 522);
    v3011 = *((_DWORD *)v2999 + 517);
    _mm_prefetch(&KiKvaShadow, 0);
    v3012 = __ROL8__(*((_QWORD *)v2999 + 259) ^ (unsigned __int8)KiKvaShadow, v3011);
    for ( i143 = v3012; ; LODWORD(v3012) = i143 ^ v3012 )
    {
      i143 >>= 31;
      if ( !i143 )
        break;
    }
    v4026 = (unsigned int *)v2999;
    *((_DWORD *)v3007 + 5) = v3012 & 0x7FFFFFFF;
    ++*((_DWORD *)v2999 + 522);
    if ( (v2999[2171] & 8) != 0 )
    {
      _disable();
      if ( !(_BYTE)KdDebuggerNotPresent )
      {
        while ( 1 )
          ;
      }
      _enable();
      v3014 = *((unsigned int *)v2999 + 505);
      v3015 = v3014 + 48;
      if ( (unsigned int)(v3014 + 48) <= *((_DWORD *)v2999 + 647) )
      {
        v3016 = (__int64)v2999;
        *((_DWORD *)v2999 + 505) = v3015;
      }
      else
      {
        v3016 = pg_unknown7(v2999, v3015, *((unsigned int *)v2999 + 585));
        if ( !v3016 )
          return 0;
        v3017 = *((_DWORD *)v2999 + 612);
        if ( (v3017 & 4) == 0 )
        {
          v3018 = *((_DWORD *)v2999 + 505);
          v3019 = *((_QWORD *)v2999 + 249);
          v3020 = (v3017 & 0x20000000) != 0 ? *((_DWORD *)v2999 + 585) : 0;
          if ( v3018 >= 8 )
          {
            v3021 = (unsigned __int64)v3018 >> 3;
            do
            {
              *(_QWORD *)v2999 = 0LL;
              v3018 -= 8;
              v2999 += 8;
              --v3021;
            }
            while ( v3021 );
          }
          for ( ; v3018; --v3018 )
            *v2999++ = 0;
          v3022 = *(_DWORD *)(v3016 + 2340);
          *(_DWORD *)(v3016 + 2340) = v3020;
          if ( v3020 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v3016 + 872))(v3019);
          }
          else
          {
            v3023 = 0;
            if ( (*(_DWORD *)(v3016 + 2448) & 0x10000000) == 0 )
              v3023 = v3020;
            if ( v3023 )
              (*(void (__fastcall **)(__int64, _QWORD))(v3016 + 552))(v3019 - 8, *(_QWORD *)(v3019 - 8));
            else
              (*(void (__fastcall **)(__int64))(v3016 + 256))(v3019);
          }
          *(_DWORD *)(v3016 + 2340) = v3022;
        }
        *(_DWORD *)(v3016 + 2448) &= ~4u;
      }
      ++*(_DWORD *)(v3016 + 2060);
      v3024 = v3016 + v3014;
      v3025 = 48;
      v4183 = v3016 + v3014;
      v3026 = (_QWORD *)(v3016 + v3014);
      v3027 = 6LL;
      do
      {
        *v3026 = 0LL;
        v3025 -= 8;
        ++v3026;
        --v3027;
      }
      while ( v3027 );
      for ( ; v3025; --v3025 )
      {
        *(_BYTE *)v3026 = 0;
        v3026 = (_QWORD *)((char *)v3026 + 1);
      }
      *(_DWORD *)v3024 = 47;
      *(_QWORD *)(v3024 + 8) = 0LL;
      *(_DWORD *)(v3024 + 16) = 0;
      v3028 = *(_QWORD *)(v3016 + 2072);
      for ( i144 = v3028; ; LODWORD(v3028) = i144 ^ v3028 )
      {
        i144 >>= 31;
        if ( !i144 )
          break;
      }
      v2999 = (_BYTE *)v3016;
      *(_DWORD *)(v3024 + 20) = v3028 & 0x7FFFFFFF;
      v4026 = (unsigned int *)v3016;
    }
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v3030 = *((unsigned int *)v2999 + 505);
    v3031 = v3030 + 48;
    if ( (unsigned int)(v3030 + 48) <= *((_DWORD *)v2999 + 647) )
    {
      v3032 = v2999;
      *((_DWORD *)v2999 + 505) = v3031;
    }
    else
    {
      v3032 = (_BYTE *)pg_unknown7(v2999, v3031, *((unsigned int *)v2999 + 585));
      if ( !v3032 )
        return 0;
      v3033 = *((_DWORD *)v2999 + 612);
      if ( (v3033 & 4) == 0 )
      {
        v3034 = *((_DWORD *)v2999 + 505);
        v3035 = *((_QWORD *)v2999 + 249);
        v3036 = (v3033 & 0x20000000) != 0 ? *((_DWORD *)v2999 + 585) : 0;
        if ( v3034 >= 8 )
        {
          v3037 = (unsigned __int64)v3034 >> 3;
          do
          {
            *(_QWORD *)v2999 = 0LL;
            v3034 -= 8;
            v2999 += 8;
            --v3037;
          }
          while ( v3037 );
        }
        for ( ; v3034; --v3034 )
          *v2999++ = 0;
        v3038 = *((_DWORD *)v3032 + 585);
        *((_DWORD *)v3032 + 585) = v3036;
        if ( v3036 == 3 )
        {
          (*((void (__fastcall **)(__int64))v3032 + 109))(v3035);
        }
        else
        {
          v3039 = 0;
          if ( (*((_DWORD *)v3032 + 612) & 0x10000000) == 0 )
            v3039 = v3036;
          if ( v3039 )
            (*((void (__fastcall **)(__int64, _QWORD))v3032 + 69))(v3035 - 8, *(_QWORD *)(v3035 - 8));
          else
            (*((void (__fastcall **)(__int64))v3032 + 32))(v3035);
        }
        *((_DWORD *)v3032 + 585) = v3038;
      }
      *((_DWORD *)v3032 + 612) &= ~4u;
    }
    ++*((_DWORD *)v3032 + 515);
    v3040 = &v3032[v3030];
    v3041 = 48;
    v4184 = &v3032[v3030];
    v3042 = &v3032[v3030];
    v3043 = 6LL;
    do
    {
      *v3042 = 0LL;
      v3041 -= 8;
      ++v3042;
      --v3043;
    }
    while ( v3043 );
    for ( ; v3041; --v3041 )
    {
      *(_BYTE *)v3042 = 0;
      v3042 = (_QWORD *)((char *)v3042 + 1);
    }
    *(_DWORD *)v3040 = 46;
    *((_QWORD *)v3040 + 1) = 0LL;
    *((_DWORD *)v3040 + 4) = 0;
    v3044 = *((_QWORD *)v3032 + 259);
    for ( i145 = v3044; ; LODWORD(v3044) = i145 ^ v3044 )
    {
      i145 >>= 31;
      if ( !i145 )
        break;
    }
    v4026 = (unsigned int *)v3032;
    *((_DWORD *)v3040 + 5) = v3044 & 0x7FFFFFFF;
    if ( (__2b & 2) != 0 )
    {
      v3046 = 32;
      *(_QWORD *)(*((_QWORD *)v3032 + 248) + *((_QWORD *)v3032 + 198)) = 0LL;
      v3047 = (const char *)(*((_QWORD *)v3032 + 198) + *((_QWORD *)v3032 + 248));
      v3048 = *((unsigned int *)v3032 + 505);
      v3049 = *((_DWORD *)v3032 + 526);
      if ( v3049 != 7 )
        v3046 = 0;
      v3050 = v3048 + 48;
      if ( (unsigned int)(v3048 + 48) <= *((_DWORD *)v3032 + 647) )
      {
        v3051 = (__int64)v3032;
        *((_DWORD *)v3032 + 505) = v3050;
      }
      else
      {
        v3051 = pg_unknown7(v3032, v3050, *((unsigned int *)v3032 + 585));
        if ( !v3051 )
          return 0;
        v3052 = *((_DWORD *)v3032 + 612);
        if ( (v3052 & 4) == 0 )
        {
          v3053 = *((_DWORD *)v3032 + 505);
          v3054 = *((_QWORD *)v3032 + 249);
          v3055 = (v3052 & 0x20000000) != 0 ? *((_DWORD *)v3032 + 585) : 0;
          if ( v3053 >= 8 )
          {
            v3056 = (unsigned __int64)v3053 >> 3;
            do
            {
              *(_QWORD *)v3032 = 0LL;
              v3053 -= 8;
              v3032 += 8;
              --v3056;
            }
            while ( v3056 );
          }
          for ( ; v3053; --v3053 )
            *v3032++ = 0;
          v3057 = *(_DWORD *)(v3051 + 2340);
          *(_DWORD *)(v3051 + 2340) = v3055;
          if ( v3055 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v3051 + 872))(v3054);
          }
          else
          {
            v3058 = 0;
            if ( (*(_DWORD *)(v3051 + 2448) & 0x10000000) == 0 )
              v3058 = v3055;
            if ( v3058 )
              (*(void (__fastcall **)(__int64, _QWORD))(v3051 + 552))(v3054 - 8, *(_QWORD *)(v3054 - 8));
            else
              (*(void (__fastcall **)(__int64))(v3051 + 256))(v3054);
          }
          *(_DWORD *)(v3051 + 2340) = v3057;
        }
        *(_DWORD *)(v3051 + 2448) &= ~4u;
      }
      v3059 = v3051 + v3048;
      ++*(_DWORD *)(v3051 + 2060);
      v3060 = (_QWORD *)(v3051 + v3048);
      v4185 = v3051 + v3048;
      v3061 = 48;
      v3062 = 6LL;
      do
      {
        *v3060 = 0LL;
        v3061 -= 8;
        ++v3060;
        --v3062;
      }
      while ( v3062 );
      for ( ; v3061; --v3061 )
      {
        *(_BYTE *)v3060 = 0;
        v3060 = (_QWORD *)((char *)v3060 + 1);
      }
      *(_DWORD *)v3059 = v3046;
      *(_QWORD *)(v3059 + 8) = v3047;
      if ( v3049 == 7 )
        pg_unknown12(v3051, v3047, 8LL, v3059 + 24);
      *(_DWORD *)(v3059 + 16) = 8;
      *(_DWORD *)(v3051 + 2088) += 8;
      for ( i146 = v3047; i146 < v3047 + 8; i146 += 64 )
        _mm_prefetch(i146, 0);
      v3064 = __ROL8__(*(_QWORD *)(v3051 + 2072) ^ *(_QWORD *)v3047, *(_DWORD *)(v3051 + 2068));
      for ( i147 = v3064; ; LODWORD(v3064) = i147 ^ v3064 )
      {
        i147 >>= 31;
        if ( !i147 )
          break;
      }
      v4026 = (unsigned int *)v3051;
      *(_DWORD *)(v3059 + 20) = v3064 & 0x7FFFFFFF;
      v3032 = (_BYTE *)v3051;
      *(_DWORD *)(v3051 + 2088) += 8;
    }
    if ( (__2b & 4) != 0 )
    {
      v3066 = 32;
      *(_QWORD *)(*((_QWORD *)v3032 + 248) + 128LL) = 0LL;
      v3067 = *((unsigned int *)v3032 + 505);
      v3068 = (const char *)(*((_QWORD *)v3032 + 248) + 128LL);
      v3069 = *((_DWORD *)v3032 + 526);
      if ( v3069 != 7 )
        v3066 = 0;
      v3070 = v3067 + 48;
      if ( (unsigned int)(v3067 + 48) <= *((_DWORD *)v3032 + 647) )
      {
        v3071 = (__int64)v3032;
        *((_DWORD *)v3032 + 505) = v3070;
      }
      else
      {
        v3071 = pg_unknown7(v3032, v3070, *((unsigned int *)v3032 + 585));
        if ( !v3071 )
          return 0;
        v3072 = *((_DWORD *)v3032 + 612);
        if ( (v3072 & 4) == 0 )
        {
          v3073 = *((_DWORD *)v3032 + 505);
          v3074 = *((_QWORD *)v3032 + 249);
          v3075 = (v3072 & 0x20000000) != 0 ? *((_DWORD *)v3032 + 585) : 0;
          if ( v3073 >= 8 )
          {
            v3076 = (unsigned __int64)v3073 >> 3;
            do
            {
              *(_QWORD *)v3032 = 0LL;
              v3073 -= 8;
              v3032 += 8;
              --v3076;
            }
            while ( v3076 );
          }
          for ( ; v3073; --v3073 )
            *v3032++ = 0;
          v3077 = *(_DWORD *)(v3071 + 2340);
          *(_DWORD *)(v3071 + 2340) = v3075;
          if ( v3075 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v3071 + 872))(v3074);
          }
          else
          {
            v3078 = 0;
            if ( (*(_DWORD *)(v3071 + 2448) & 0x10000000) == 0 )
              v3078 = v3075;
            if ( v3078 )
              (*(void (__fastcall **)(__int64, _QWORD))(v3071 + 552))(v3074 - 8, *(_QWORD *)(v3074 - 8));
            else
              (*(void (__fastcall **)(__int64))(v3071 + 256))(v3074);
          }
          *(_DWORD *)(v3071 + 2340) = v3077;
        }
        *(_DWORD *)(v3071 + 2448) &= ~4u;
      }
      v3079 = v3071 + v3067;
      ++*(_DWORD *)(v3071 + 2060);
      v3080 = (_QWORD *)(v3071 + v3067);
      v4186 = v3071 + v3067;
      v3081 = 48;
      v3082 = 6LL;
      do
      {
        *v3080 = 0LL;
        v3081 -= 8;
        ++v3080;
        --v3082;
      }
      while ( v3082 );
      for ( ; v3081; --v3081 )
      {
        *(_BYTE *)v3080 = 0;
        v3080 = (_QWORD *)((char *)v3080 + 1);
      }
      *(_DWORD *)v3079 = v3066;
      *(_QWORD *)(v3079 + 8) = v3068;
      if ( v3069 == 7 )
        pg_unknown12(v3071, v3068, 8LL, v3079 + 24);
      *(_DWORD *)(v3079 + 16) = 8;
      *(_DWORD *)(v3071 + 2088) += 8;
      for ( i148 = v3068; i148 < v3068 + 8; i148 += 64 )
        _mm_prefetch(i148, 0);
      v3084 = __ROL8__(*(_QWORD *)v3068 ^ *(_QWORD *)(v3071 + 2072), *(_DWORD *)(v3071 + 2068));
      for ( i149 = v3084; ; LODWORD(v3084) = i149 ^ v3084 )
      {
        i149 >>= 31;
        if ( !i149 )
          break;
      }
      v4026 = (unsigned int *)v3071;
      *(_DWORD *)(v3079 + 20) = v3084 & 0x7FFFFFFF;
      v3032 = (_BYTE *)v3071;
      *(_DWORD *)(v3071 + 2088) += 8;
    }
    v3086 = *((unsigned int *)v3032 + 505);
    v3087 = 32;
    v3088 = *((_DWORD *)v3032 + 526);
    if ( v3088 != 7 )
      v3087 = 0;
    v3089 = v3086 + 48;
    if ( (unsigned int)(v3086 + 48) <= *((_DWORD *)v3032 + 647) )
    {
      v3090 = v3032;
      *((_DWORD *)v3032 + 505) = v3089;
    }
    else
    {
      v3090 = (_BYTE *)pg_unknown7(v3032, v3089, *((unsigned int *)v3032 + 585));
      if ( !v3090 )
        return 0;
      v3091 = *((_DWORD *)v3032 + 612);
      if ( (v3091 & 4) == 0 )
      {
        v3092 = *((_DWORD *)v3032 + 505);
        v3093 = *((_QWORD *)v3032 + 249);
        v3094 = (v3091 & 0x20000000) != 0 ? *((_DWORD *)v3032 + 585) : 0;
        if ( v3092 >= 8 )
        {
          v3095 = (unsigned __int64)v3092 >> 3;
          do
          {
            *(_QWORD *)v3032 = 0LL;
            v3092 -= 8;
            v3032 += 8;
            --v3095;
          }
          while ( v3095 );
        }
        for ( ; v3092; --v3092 )
          *v3032++ = 0;
        v3096 = *((_DWORD *)v3090 + 585);
        *((_DWORD *)v3090 + 585) = v3094;
        if ( v3094 == 3 )
        {
          (*((void (__fastcall **)(__int64))v3090 + 109))(v3093);
        }
        else
        {
          v3097 = 0;
          if ( (*((_DWORD *)v3090 + 612) & 0x10000000) == 0 )
            v3097 = v3094;
          if ( v3097 )
            (*((void (__fastcall **)(__int64, _QWORD))v3090 + 69))(v3093 - 8, *(_QWORD *)(v3093 - 8));
          else
            (*((void (__fastcall **)(__int64))v3090 + 32))(v3093);
        }
        *((_DWORD *)v3090 + 585) = v3096;
      }
      *((_DWORD *)v3090 + 612) &= ~4u;
    }
    ++*((_DWORD *)v3090 + 515);
    v3098 = &v3090[v3086];
    v4187 = v3098;
    v3099 = v3098;
    v3100 = 48;
    v3101 = 6LL;
    do
    {
      *v3099 = 0LL;
      v3100 -= 8;
      ++v3099;
      --v3101;
    }
    while ( v3101 );
    for ( ; v3100; --v3100 )
    {
      *(_BYTE *)v3099 = 0;
      v3099 = (_QWORD *)((char *)v3099 + 1);
    }
    *(_DWORD *)v3098 = v3087;
    *((_QWORD *)v3098 + 1) = &_ti_a;
    if ( v3088 == 7 )
      pg_unknown12(v3090, &_ti_a, 320LL, v3098 + 24);
    *((_DWORD *)v3098 + 4) = 320;
    v3102 = (unsigned __int64)&_ti_a;
    *((_DWORD *)v3090 + 522) += 320;
    v3103 = (const char *)&_ti_a;
    v3104 = *((_DWORD *)v3090 + 517);
    v3105 = *((_QWORD *)v3090 + 259);
    do
    {
      _mm_prefetch(v3103, 0);
      v3103 += 64;
    }
    while ( v3103 < (const char *)L"VerifierExt.sys" );
    v3106 = 2;
    v3107 = *((_QWORD *)v3090 + 259);
    do
    {
      v3108 = 8LL;
      do
      {
        v3109 = *(_QWORD *)(v3102 + 8) ^ __ROL8__(*(_QWORD *)v3102 ^ v3107, v3104);
        v3102 += 16LL;
        v3107 = __ROL8__(v3109, v3104);
        --v3108;
      }
      while ( v3108 );
      v3110 = (__ROL8__(v3105 ^ (v3102 - (_QWORD)&_ti_a), 17) ^ v3105 ^ (v3102 - (unsigned __int64)&_ti_a))
            * (unsigned __int128)0x7010008004002001uLL;
      v4188 = *((_QWORD *)&v3110 + 1);
      v3104 = (BYTE8(v3110) ^ (unsigned __int8)(v3110 ^ v3104)) & 0x3F;
      if ( !v3104 )
        LOBYTE(v3104) = 1;
      --v3106;
    }
    while ( v3106 );
    DWORD2(v3111) = 64;
    *(_QWORD *)&v3111 = 8LL;
    do
    {
      v3107 = __ROL8__(*(_QWORD *)v3102 ^ v3107, v3104);
      v3102 += 8LL;
      *((_QWORD *)&v3111 + 1) = (unsigned int)(DWORD2(v3111) - 8);
      *(_QWORD *)&v3111 = v3111 - 1;
    }
    while ( (_QWORD)v3111 );
    if ( DWORD2(v3111) )
    {
      do
      {
        *(_QWORD *)&v3111 = *(unsigned __int8 *)v3102++;
        v3107 = __ROL8__(v3111 ^ v3107, v3104);
        v893 = DWORD2(v3111) == 1;
        *((_QWORD *)&v3111 + 1) = (unsigned int)(DWORD2(v3111) - 1);
      }
      while ( !v893 );
    }
    for ( i150 = v3107; ; LODWORD(v3107) = i150 ^ v3107 )
    {
      i150 >>= 31;
      if ( !i150 )
        break;
    }
    v4026 = (unsigned int *)v3090;
    *((_DWORD *)v3098 + 5) = v3107 & 0x7FFFFFFF;
    *((_DWORD *)v3090 + 522) += 320;
    v893 = (*((_DWORD *)v3090 + 612) & 0x40000000) == 0;
    LODWORD(Src) = 0;
    LODWORD(v3834) = 0;
    if ( v893 )
    {
      v3113 = *((unsigned int *)v3090 + 505);
      v3114 = v3850;
      v3115 = *((unsigned int *)v3090 + 585);
      v3116 = *((_DWORD *)v3090 + 505) - v3850;
      LODWORD(Src) = v3113;
      v3117 = v3113 + 48;
      LODWORD(v3834) = v3116;
      if ( (unsigned int)(v3113 + 48) <= *((_DWORD *)v3090 + 647) )
      {
        v3118 = (__int64)v3090;
        *((_DWORD *)v3090 + 505) = v3117;
      }
      else
      {
        v3118 = pg_unknown7(v3090, v3117, v3115);
        if ( !v3118 )
          return 0;
        v3119 = *((_DWORD *)v3090 + 612);
        if ( (v3119 & 4) == 0 )
        {
          v3120 = *((_DWORD *)v3090 + 505);
          v3121 = *((_QWORD *)v3090 + 249);
          v3122 = (v3119 & 0x20000000) != 0 ? *((_DWORD *)v3090 + 585) : 0;
          if ( v3120 >= 8 )
          {
            v3123 = (unsigned __int64)v3120 >> 3;
            do
            {
              *(_QWORD *)v3090 = 0LL;
              v3120 -= 8;
              v3090 += 8;
              --v3123;
            }
            while ( v3123 );
          }
          for ( ; v3120; --v3120 )
            *v3090++ = 0;
          v3124 = *(_DWORD *)(v3118 + 2340);
          *(_DWORD *)(v3118 + 2340) = v3122;
          if ( v3122 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v3118 + 872))(v3121);
          }
          else
          {
            v3125 = 0;
            if ( (*(_DWORD *)(v3118 + 2448) & 0x10000000) == 0 )
              v3125 = v3122;
            if ( v3125 )
              (*(void (__fastcall **)(__int64, _QWORD))(v3118 + 552))(v3121 - 8, *(_QWORD *)(v3121 - 8));
            else
              (*(void (__fastcall **)(__int64))(v3118 + 256))(v3121);
          }
          *(_DWORD *)(v3118 + 2340) = v3124;
        }
        *(_DWORD *)(v3118 + 2448) &= ~4u;
        v3114 = v3850;
      }
      ++*(_DWORD *)(v3118 + 2060);
      *((_QWORD *)&v3111 + 1) = v3118 + v3113;
      v3126 = 48;
      v4189 = v3118 + v3113;
      *(_QWORD *)&v3111 = v3118 + v3113;
      v3127 = 6LL;
      do
      {
        *(_QWORD *)v3111 = 0LL;
        v3126 -= 8;
        *(_QWORD *)&v3111 = v3111 + 8;
        --v3127;
      }
      while ( v3127 );
      for ( ; v3126; --v3126 )
      {
        *(_BYTE *)v3111 = 0;
        *(_QWORD *)&v3111 = v3111 + 1;
      }
      **((_DWORD **)&v3111 + 1) = 42;
      *(_QWORD *)(*((_QWORD *)&v3111 + 1) + 8LL) = 0LL;
      *(_DWORD *)(*((_QWORD *)&v3111 + 1) + 16LL) = 0;
      v3128 = *(_QWORD *)(v3118 + 2072);
      for ( i151 = v3128; ; LODWORD(v3128) = i151 ^ v3128 )
      {
        i151 >>= 31;
        if ( !i151 )
          break;
      }
      *(_DWORD *)(*((_QWORD *)&v3111 + 1) + 20LL) = v3128 & 0x7FFFFFFF;
      v3130 = (const char *)(v3118 + v3114);
      v3102 = (unsigned __int64)v3130;
      v4190 = v4189;
      v3131 = (unsigned __int64)&v3130[v3116];
      *(_DWORD *)(v4189 + 32) = v3114;
      *(_DWORD *)(v4190 + 36) = v3116;
      v3132 = v3130;
      *(_DWORD *)(v3118 + 2088) += v3116;
      v3133 = *(_DWORD *)(v3118 + 2068);
      v3134 = *(_QWORD *)(v3118 + 2072);
      if ( (unsigned __int64)v3130 < v3131 )
      {
        do
        {
          _mm_prefetch(v3132, 0);
          v3132 += 64;
        }
        while ( (unsigned __int64)v3132 < v3131 );
      }
      v3135 = *(_QWORD *)(v3118 + 2072);
      v3136 = v3116 >> 7;
      if ( v3116 >> 7 )
      {
        do
        {
          v3137 = 8LL;
          do
          {
            v3138 = *(_QWORD *)(v3102 + 8) ^ __ROL8__(*(_QWORD *)v3102 ^ v3135, v3133);
            v3102 += 16LL;
            v3135 = __ROL8__(v3138, v3133);
            --v3137;
          }
          while ( v3137 );
          v3111 = (__ROL8__(v3134 ^ (v3102 - (_QWORD)v3130), 17) ^ v3134 ^ (v3102 - (unsigned __int64)v3130))
                * (unsigned __int128)0x7010008004002001uLL;
          v4191 = *((_QWORD *)&v3111 + 1);
          v3133 = (BYTE8(v3111) ^ (unsigned __int8)(v3111 ^ v3133)) & 0x3F;
          if ( !v3133 )
            LOBYTE(v3133) = 1;
          --v3136;
        }
        while ( v3136 );
        LOBYTE(v3116) = v3834;
      }
      v3139 = v3116 & 0x7F;
      if ( v3139 >= 8 )
      {
        v3140 = (unsigned __int64)v3139 >> 3;
        do
        {
          v3135 = __ROL8__(*(_QWORD *)v3102 ^ v3135, v3133);
          v3102 += 8LL;
          v3139 -= 8;
          --v3140;
        }
        while ( v3140 );
      }
      for ( ; v3139; --v3139 )
      {
        v3141 = *(unsigned __int8 *)v3102++;
        v3135 = __ROL8__(v3141 ^ v3135, v3133);
      }
      *(_QWORD *)(v4190 + 24) = v3135;
      v3090 = (_BYTE *)v3118;
      v3142 = *(_DWORD *)(v3118 + 2020);
      v4026 = (unsigned int *)v3118;
      LODWORD(v3834) = v3142;
    }
    for ( i152 = 0; i152 < 2; ++i152 )
    {
      v3144 = 0LL;
      _disable();
      v3145 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v3090 + 201));
      _enable();
      (*((void (__fastcall **)(__int64, _QWORD, unsigned __int64))v3090 + 45))(v3145, *((_QWORD *)&v3111 + 1), v3102);
      LOBYTE(v3146) = 1;
      (*((void (__fastcall **)(_QWORD, __int64))v3090 + 29))(*((_QWORD *)v3090 + 167), v3146);
      v3147 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList != &PsLoadedModuleList )
      {
        while ( 1 )
        {
          v3148 = (char *)v3147 - *((_QWORD *)v3090 + 233);
          if ( RtlEqualUnicodeString(
                 (PCUNICODE_STRING)&unk_140C00288 + i152,
                 (PCUNICODE_STRING)&v3148[*((_QWORD *)v3090 + 236)],
                 1u) )
          {
            break;
          }
          v3147 = (PVOID *)*v3147;
          if ( v3147 == &PsLoadedModuleList )
            goto LABEL_4500;
        }
        v3144 = *(_QWORD *)&v3148[*((_QWORD *)v3090 + 234)];
      }
LABEL_4500:
      (*((void (__fastcall **)(_QWORD))v3090 + 35))(*((_QWORD *)v3090 + 167));
      (*((void (**)(void))v3090 + 46))();
      if ( v3144 )
      {
        v3149 = *((unsigned int *)v3090 + 505);
        v3102 = *((unsigned int *)v3090 + 585);
        v3150 = &asc_140C002A8[8 * i152];
        v3151 = v3149 + ((*v3150 + 7) & 0xFFFFFFF8) + 48;
        if ( v3151 <= *((_DWORD *)v3090 + 647) )
        {
          v3152 = (__int64)v3090;
          *((_DWORD *)v3090 + 505) = v3151;
        }
        else
        {
          v3152 = pg_unknown7(v3090, v3151, v3102);
          if ( !v3152 )
            return 0;
          v3153 = *((_DWORD *)v3090 + 612);
          if ( (v3153 & 4) == 0 )
          {
            v3154 = *((_DWORD *)v3090 + 505);
            v3155 = *((_QWORD *)v3090 + 249);
            v3156 = (v3153 & 0x20000000) != 0 ? *((_DWORD *)v3090 + 585) : 0;
            if ( v3154 >= 8 )
            {
              v3157 = (unsigned __int64)v3154 >> 3;
              do
              {
                *(_QWORD *)v3090 = 0LL;
                v3154 -= 8;
                v3090 += 8;
                --v3157;
              }
              while ( v3157 );
            }
            for ( ; v3154; --v3154 )
              *v3090++ = 0;
            v3158 = *(_DWORD *)(v3152 + 2340);
            *(_DWORD *)(v3152 + 2340) = v3156;
            if ( v3156 == 3 )
            {
              (*(void (__fastcall **)(__int64))(v3152 + 872))(v3155);
            }
            else
            {
              v3159 = 0;
              if ( (*(_DWORD *)(v3152 + 2448) & 0x10000000) == 0 )
                v3159 = v3156;
              if ( v3159 )
                (*(void (__fastcall **)(__int64, _QWORD))(v3152 + 552))(v3155 - 8, *(_QWORD *)(v3155 - 8));
              else
                (*(void (__fastcall **)(__int64))(v3152 + 256))(v3155);
            }
            *(_DWORD *)(v3152 + 2340) = v3158;
          }
          *(_DWORD *)(v3152 + 2448) &= ~4u;
        }
        v3160 = v3152 + v3149;
        ++*(_DWORD *)(v3152 + 2060);
        v3161 = (_QWORD *)(v3152 + v3149);
        v4192 = v3152 + v3149;
        v3162 = 48;
        v3163 = 6LL;
        do
        {
          *v3161 = 0LL;
          v3162 -= 8;
          ++v3161;
          --v3163;
        }
        while ( v3163 );
        for ( ; v3162; --v3162 )
        {
          *(_BYTE *)v3161 = 0;
          v3161 = (_QWORD *)((char *)v3161 + 1);
        }
        *(_DWORD *)v3160 = 28;
        *(_QWORD *)(v3160 + 8) = 0LL;
        *(_DWORD *)(v3160 + 16) = 0;
        v3164 = *(_QWORD *)(v3152 + 2072);
        for ( i153 = v3164; ; LODWORD(v3164) = i153 ^ v3164 )
        {
          i153 >>= 31;
          if ( !i153 )
            break;
        }
        *(_DWORD *)(v3160 + 20) = v3164 & 0x7FFFFFFF;
        v4193 = v4192;
        *(_QWORD *)(v4192 + 24) = v3144;
        *(_WORD *)(v4193 + 40) = *v3150;
        *((_QWORD *)&v3111 + 1) = *v3150;
        v3166 = (_QWORD *)*((_QWORD *)v3150 + 1);
        v3167 = (char *)(v4193 + 48);
        if ( DWORD2(v3111) >= 8 )
        {
          v3102 = (unsigned __int64)*v3150 >> 3;
          do
          {
            *((_QWORD *)&v3111 + 1) = (unsigned int)(DWORD2(v3111) - 8);
            *(_QWORD *)v3167 = *v3166++;
            v3167 += 8;
            --v3102;
          }
          while ( v3102 );
        }
        if ( DWORD2(v3111) )
        {
          v3168 = v3167 - (char *)v3166;
          do
          {
            *((_BYTE *)v3166 + v3168) = *(_BYTE *)v3166;
            v3166 = (_QWORD *)((char *)v3166 + 1);
            v893 = DWORD2(v3111) == 1;
            *((_QWORD *)&v3111 + 1) = (unsigned int)(DWORD2(v3111) - 1);
          }
          while ( !v893 );
        }
        v3090 = (_BYTE *)v3152;
      }
    }
    v4026 = (unsigned int *)v3090;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v3169 = *((unsigned int *)v3090 + 505);
    v3170 = v3169 + 48;
    if ( (unsigned int)(v3169 + 48) <= *((_DWORD *)v3090 + 647) )
    {
      v3171 = v3090;
      *((_DWORD *)v3090 + 505) = v3170;
    }
    else
    {
      v3171 = (_BYTE *)pg_unknown7(v3090, v3170, *((unsigned int *)v3090 + 585));
      if ( !v3171 )
        return 0;
      v3172 = *((_DWORD *)v3090 + 612);
      if ( (v3172 & 4) == 0 )
      {
        v3173 = *((_DWORD *)v3090 + 505);
        v3174 = *((_QWORD *)v3090 + 249);
        v3175 = (v3172 & 0x20000000) != 0 ? *((_DWORD *)v3090 + 585) : 0;
        if ( v3173 >= 8 )
        {
          v3176 = (unsigned __int64)v3173 >> 3;
          do
          {
            *(_QWORD *)v3090 = 0LL;
            v3173 -= 8;
            v3090 += 8;
            --v3176;
          }
          while ( v3176 );
        }
        for ( ; v3173; --v3173 )
          *v3090++ = 0;
        v3177 = *((_DWORD *)v3171 + 585);
        *((_DWORD *)v3171 + 585) = v3175;
        if ( v3175 == 3 )
        {
          (*((void (__fastcall **)(__int64))v3171 + 109))(v3174);
        }
        else
        {
          v3178 = 0;
          if ( (*((_DWORD *)v3171 + 612) & 0x10000000) == 0 )
            v3178 = v3175;
          if ( v3178 )
            (*((void (__fastcall **)(__int64, _QWORD))v3171 + 69))(v3174 - 8, *(_QWORD *)(v3174 - 8));
          else
            (*((void (__fastcall **)(__int64))v3171 + 32))(v3174);
        }
        *((_DWORD *)v3171 + 585) = v3177;
      }
      *((_DWORD *)v3171 + 612) &= ~4u;
    }
    ++*((_DWORD *)v3171 + 515);
    v3179 = &v3171[v3169];
    v3180 = 48;
    v4194 = &v3171[v3169];
    v3181 = &v3171[v3169];
    v3182 = 6LL;
    do
    {
      *v3181 = 0LL;
      v3180 -= 8;
      ++v3181;
      --v3182;
    }
    while ( v3182 );
    for ( ; v3180; --v3180 )
    {
      *(_BYTE *)v3181 = 0;
      v3181 = (_QWORD *)((char *)v3181 + 1);
    }
    *(_DWORD *)v3179 = 24;
    *((_QWORD *)v3179 + 1) = 0LL;
    *((_DWORD *)v3179 + 4) = 0;
    v3183 = *((_QWORD *)v3171 + 259);
    for ( i154 = v3183; ; LODWORD(v3183) = i154 ^ v3183 )
    {
      i154 >>= 31;
      if ( !i154 )
        break;
    }
    v4026 = (unsigned int *)v3171;
    *((_DWORD *)v3179 + 5) = v3183 & 0x7FFFFFFF;
    _disable();
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      while ( 1 )
        ;
    }
    _enable();
    v3185 = *((unsigned int *)v3171 + 505);
    v3186 = v3185 + 48;
    if ( (unsigned int)(v3185 + 48) <= *((_DWORD *)v3171 + 647) )
    {
      v3187 = v3171;
      *((_DWORD *)v3171 + 505) = v3186;
    }
    else
    {
      v3187 = (_BYTE *)pg_unknown7(v3171, v3186, *((unsigned int *)v3171 + 585));
      if ( !v3187 )
        return 0;
      v3188 = *((_DWORD *)v3171 + 612);
      if ( (v3188 & 4) == 0 )
      {
        v3189 = *((_DWORD *)v3171 + 505);
        v3190 = *((_QWORD *)v3171 + 249);
        v3191 = (v3188 & 0x20000000) != 0 ? *((_DWORD *)v3171 + 585) : 0;
        if ( v3189 >= 8 )
        {
          v3192 = (unsigned __int64)v3189 >> 3;
          do
          {
            *(_QWORD *)v3171 = 0LL;
            v3189 -= 8;
            v3171 += 8;
            --v3192;
          }
          while ( v3192 );
        }
        for ( ; v3189; --v3189 )
          *v3171++ = 0;
        v3193 = *((_DWORD *)v3187 + 585);
        *((_DWORD *)v3187 + 585) = v3191;
        if ( v3191 == 3 )
        {
          (*((void (__fastcall **)(__int64))v3187 + 109))(v3190);
        }
        else
        {
          v3194 = 0;
          if ( (*((_DWORD *)v3187 + 612) & 0x10000000) == 0 )
            v3194 = v3191;
          if ( v3194 )
            (*((void (__fastcall **)(__int64, _QWORD))v3187 + 69))(v3190 - 8, *(_QWORD *)(v3190 - 8));
          else
            (*((void (__fastcall **)(__int64))v3187 + 32))(v3190);
        }
        *((_DWORD *)v3187 + 585) = v3193;
      }
      *((_DWORD *)v3187 + 612) &= ~4u;
    }
    ++*((_DWORD *)v3187 + 515);
    v3195 = &v3187[v3185];
    v3196 = 48;
    v4195 = &v3187[v3185];
    v3197 = &v3187[v3185];
    v3198 = 6LL;
    do
    {
      *v3197 = 0LL;
      v3196 -= 8;
      ++v3197;
      --v3198;
    }
    while ( v3198 );
    for ( ; v3196; --v3196 )
    {
      *(_BYTE *)v3197 = 0;
      v3197 = (_QWORD *)((char *)v3197 + 1);
    }
    *(_DWORD *)v3195 = 15;
    *((_QWORD *)v3195 + 1) = 0LL;
    *((_DWORD *)v3195 + 4) = 0;
    v3199 = *((_QWORD *)v3187 + 259);
    for ( i155 = v3199; ; LODWORD(v3199) = i155 ^ v3199 )
    {
      i155 >>= 31;
      if ( !i155 )
        break;
    }
    v4026 = (unsigned int *)v3187;
    *((_DWORD *)v3195 + 5) = v3199 & 0x7FFFFFFF;
    if ( (*((_DWORD *)v3187 + 612) & 0x40000000) == 0 && (*((_DWORD *)v3187 + 613) & 0x80u) != 0 )
    {
      v3201 = *((unsigned int *)v3187 + 505);
      v3202 = (unsigned int)Src;
      v3203 = v3834 - (_DWORD)Src;
      v3204 = v3201 + 48;
      if ( (unsigned int)(v3201 + 48) <= *((_DWORD *)v3187 + 647) )
      {
        v3205 = (__int64)v3187;
        *((_DWORD *)v3187 + 505) = v3204;
      }
      else
      {
        v3205 = pg_unknown7(v3187, v3204, *((unsigned int *)v3187 + 585));
        if ( !v3205 )
          return 0;
        v3206 = *((_DWORD *)v3187 + 612);
        if ( (v3206 & 4) == 0 )
        {
          v3207 = *((_DWORD *)v3187 + 505);
          v3208 = *((_QWORD *)v3187 + 249);
          v3209 = (v3206 & 0x20000000) != 0 ? *((_DWORD *)v3187 + 585) : 0;
          if ( v3207 >= 8 )
          {
            v3210 = (unsigned __int64)v3207 >> 3;
            do
            {
              *(_QWORD *)v3187 = 0LL;
              v3207 -= 8;
              v3187 += 8;
              --v3210;
            }
            while ( v3210 );
          }
          for ( ; v3207; --v3207 )
            *v3187++ = 0;
          v3211 = *(_DWORD *)(v3205 + 2340);
          *(_DWORD *)(v3205 + 2340) = v3209;
          if ( v3209 == 3 )
          {
            (*(void (__fastcall **)(__int64))(v3205 + 872))(v3208);
          }
          else
          {
            v3212 = 0;
            if ( (*(_DWORD *)(v3205 + 2448) & 0x10000000) == 0 )
              v3212 = v3209;
            if ( v3212 )
              (*(void (__fastcall **)(__int64, _QWORD))(v3205 + 552))(v3208 - 8, *(_QWORD *)(v3208 - 8));
            else
              (*(void (__fastcall **)(__int64))(v3205 + 256))(v3208);
          }
          *(_DWORD *)(v3205 + 2340) = v3211;
        }
        *(_DWORD *)(v3205 + 2448) &= ~4u;
        v3202 = (unsigned int)Src;
      }
      ++*(_DWORD *)(v3205 + 2060);
      v3213 = v3205 + v3201;
      v3214 = 48;
      v4196 = v3205 + v3201;
      v3215 = (_QWORD *)(v3205 + v3201);
      v3216 = 6LL;
      do
      {
        *v3215 = 0LL;
        v3214 -= 8;
        ++v3215;
        --v3216;
      }
      while ( v3216 );
      for ( ; v3214; --v3214 )
      {
        *(_BYTE *)v3215 = 0;
        v3215 = (_QWORD *)((char *)v3215 + 1);
      }
      *(_DWORD *)v3213 = 42;
      *(_QWORD *)(v3213 + 8) = 0LL;
      *(_DWORD *)(v3213 + 16) = 0;
      v3217 = *(_QWORD *)(v3205 + 2072);
      for ( i156 = v3217; ; LODWORD(v3217) = i156 ^ v3217 )
      {
        i156 >>= 31;
        if ( !i156 )
          break;
      }
      *(_DWORD *)(v3213 + 20) = v3217 & 0x7FFFFFFF;
      v3219 = (_QWORD *)(v3205 + v3202);
      v3220 = v3219;
      v4197 = v4196;
      v3221 = (unsigned __int64)v3219 + v3203;
      *(_DWORD *)(v4196 + 32) = v3202;
      *(_DWORD *)(v4197 + 36) = v3203;
      v3222 = (const char *)v3219;
      *(_DWORD *)(v3205 + 2088) += v3203;
      v3223 = *(_DWORD *)(v3205 + 2068);
      v3224 = *(_QWORD *)(v3205 + 2072);
      if ( (unsigned __int64)v3219 < v3221 )
      {
        do
        {
          _mm_prefetch(v3222, 0);
          v3222 += 64;
        }
        while ( (unsigned __int64)v3222 < v3221 );
      }
      v3225 = *(_QWORD *)(v3205 + 2072);
      for ( i157 = v3203 >> 7; i157; --i157 )
      {
        v3227 = 8LL;
        do
        {
          v3228 = v3225 ^ *v3220;
          v3229 = v3220[1];
          v3220 += 2;
          v3225 = __ROL8__(__ROL8__(v3228, v3223) ^ v3229, v3223);
          --v3227;
        }
        while ( v3227 );
        v3230 = __ROL8__(v3224 ^ ((char *)v3220 - (char *)v3219), 17) ^ v3224 ^ ((char *)v3220 - (char *)v3219);
        v4198 = (v3230 * (unsigned __int128)0x7010008004002001uLL) >> 64;
        v3223 = ((unsigned __int8)(v4198 ^ v3230) ^ (unsigned __int8)v3223) & 0x3F;
        if ( !v3223 )
          LOBYTE(v3223) = 1;
      }
      v3231 = v3203 & 0x7F;
      if ( v3231 >= 8 )
      {
        v3232 = (unsigned __int64)v3231 >> 3;
        do
        {
          v3225 = __ROL8__(*v3220++ ^ v3225, v3223);
          v3231 -= 8;
          --v3232;
        }
        while ( v3232 );
      }
      for ( ; v3231; --v3231 )
      {
        v3233 = *(unsigned __int8 *)v3220;
        v3220 = (_QWORD *)((char *)v3220 + 1);
        v3225 = __ROL8__(v3233 ^ v3225, v3223);
      }
      v3187 = (_BYTE *)v3205;
      v4026 = (unsigned int *)v3205;
      *(_QWORD *)(v4197 + 24) = v3225;
    }
    if ( v4473 > 1 )
    {
      v3234 = __rdtsc();
      v3235 = (__ROR8__(v3234, 3) ^ v3234) * (unsigned __int128)0x7010008004002001uLL;
      v3236 = *((unsigned int *)v3187 + 515);
      v4199 = *((_QWORD *)&v3235 + 1);
      *((_DWORD *)v3187 + 520) = (*((_QWORD *)&v3235 + 1) ^ (unsigned __int64)v3235) % v3236;
    }
    if ( (*((_DWORD *)v3187 + 612) & 0x10000000) != 0 )
    {
      v3237 = __rdtsc();
      v3238 = (__ROR8__(v3237, 3) ^ v3237) * (unsigned __int128)0x7010008004002001uLL;
      v4200 = *((_QWORD *)&v3238 + 1);
      *((_QWORD *)v3187 + 251) = *((_QWORD *)v3187 + 186) + 16LL * (((unsigned __int8)v3238 ^ BYTE8(v3238)) & 0xF);
      goto LABEL_4766;
    }
    v3239 = a1;
    v3240 = a1 == 5;
    if ( a1 <= 5 )
      goto LABEL_4709;
    while ( 2 )
    {
      switch ( v3239 )
      {
        case 6u:
          v3303 = IopTimerDispatch;
          break;
        case 7u:
          v3303 = IopIrpStackProfilerDpcRoutine;
          v3308 = 1073771576;
          goto LABEL_4763;
        case 8u:
          v3303 = KiBalanceSetManagerDeferredRoutine;
          v3308 = -469734756;
          goto LABEL_4763;
        case 9u:
          v3303 = PopThermalZoneDpc;
          v3308 = -2147454856;
          goto LABEL_4763;
        default:
          v3241 = __rdtsc();
          v3242 = (__ROR8__(v3241, 3) ^ v3241) * (unsigned __int128)0x7010008004002001uLL;
          v4201 = *((_QWORD *)&v3242 + 1);
          v3243 = ((unsigned __int64)v3242 ^ *((_QWORD *)&v3242 + 1)) % 0xA < 8;
          v3244 = *((_DWORD *)v3187 + 526);
          v3245 = v3244 - 3;
          if ( !v3243 )
          {
            if ( (v3245 & 0xFFFFFFFA) == 0 && v3244 != 8 )
              goto LABEL_4707;
            v3309 = 0;
            v3310 = *((_DWORD *)v3187 + 612) & 0x10000000;
            if ( !v3310 )
              v3309 = *((_DWORD *)v3187 + 585);
            v3311 = *((_DWORD *)v3187 + 516);
            v3312 = __rdtsc();
            v3313 = __ROR8__(v3312, 3);
            v4210 = ((v3313 ^ v3312) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v3314 = ((unsigned __int16)v4210 ^ (unsigned __int16)(8193 * (v3313 ^ v3312))) & 0x7FF;
            v3315 = __rdtsc();
            v3316 = __ROR8__(v3315, 3) ^ v3315;
            v4211 = (v3316 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v3317 = (v4211 ^ (0x7010008004002001LL * v3316)) % (unsigned int)(v3314 + 1);
            if ( v3309 )
            {
              v3318 = __rdtsc();
              v3319 = __ROR8__(v3318, 3);
              v4212 = ((v3319 ^ v3318) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v3314 += ((((unsigned int)v4212 ^ (67117057 * ((unsigned int)v3319 ^ (unsigned int)v3318))) & 1) << 12)
                     + 4096;
              v3320 = (*((__int64 (__fastcall **)(__int64, __int64))v3187 + 68))(
                        (unsigned int)(v3314 + 272) + 8LL,
                        0xFFFFFFFFLL);
              v3321 = (_QWORD *)v3320;
              if ( !v3320 )
                goto LABEL_4692;
              if ( !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v3187 + 70))(
                      v3320,
                      (v3314 + 4367) & 0xFFFFF000,
                      64LL) )
              {
                v3283 = (unsigned int)(v3314 + 272);
                v3284 = v3321;
LABEL_4681:
                (*((void (__fastcall **)(_QWORD *, __int64))v3187 + 69))(v3284, v3283);
                goto LABEL_4692;
              }
              *v3321 = (unsigned int)(v3314 + 272) + 8LL;
              v3322 = (__int64)(v3321 + 1);
            }
            else
            {
              v3322 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v3187 + 31))(
                        v3310 != 0 ? 0x200 : 0,
                        (unsigned int)(v3314 + 272),
                        v3311,
                        (unsigned int)-v3310);
            }
            if ( !v3322 )
              goto LABEL_4692;
            v3323 = v3317;
            v3324 = (_QWORD *)v3322;
            if ( (unsigned int)v3317 >= 8 )
            {
              v3325 = (unsigned __int64)(unsigned int)v3317 >> 3;
              do
              {
                v3323 -= 8;
                v3326 = __rdtsc();
                v3327 = (__ROR8__(v3326, 3) ^ v3326) * (unsigned __int128)0x7010008004002001uLL;
                v4213 = *((_QWORD *)&v3327 + 1);
                *v3324++ = v3327 ^ *((_QWORD *)&v3327 + 1);
                --v3325;
              }
              while ( v3325 );
            }
            if ( v3323 )
            {
              v3328 = __rdtsc();
              v3329 = (__ROR8__(v3328, 3) ^ v3328) * (unsigned __int128)0x7010008004002001uLL;
              v4214 = *((_QWORD *)&v3329 + 1);
              v3330 = v3329 ^ *((_QWORD *)&v3329 + 1);
              do
              {
                *(_BYTE *)v3324 = v3330;
                v3324 = (_QWORD *)((char *)v3324 + 1);
                v3330 >>= 8;
                --v3323;
              }
              while ( v3323 );
            }
            v3331 = v3314 - v3317;
            v3332 = (unsigned int)v3317 + v3322;
            v3333 = (_QWORD *)(v3332 + 272);
            if ( v3331 >= 8 )
            {
              v3334 = (unsigned __int64)v3331 >> 3;
              do
              {
                v3331 -= 8;
                v3335 = __rdtsc();
                v3336 = (__ROR8__(v3335, 3) ^ v3335) * (unsigned __int128)0x7010008004002001uLL;
                v4215 = *((_QWORD *)&v3336 + 1);
                *v3333++ = v3336 ^ *((_QWORD *)&v3336 + 1);
                --v3334;
              }
              while ( v3334 );
            }
            if ( v3331 )
            {
              v3337 = __rdtsc();
              v3338 = (__ROR8__(v3337, 3) ^ v3337) * (unsigned __int128)0x7010008004002001uLL;
              v4216 = *((_QWORD *)&v3338 + 1);
              v3339 = v3338 ^ *((_QWORD *)&v3338 + 1);
              do
              {
                *(_BYTE *)v3333 = v3339;
                v3333 = (_QWORD *)((char *)v3333 + 1);
                v3339 >>= 8;
                --v3331;
              }
              while ( v3331 );
            }
            if ( !v3332 )
              goto LABEL_4707;
            v3303 = (void *)(v3332 + 72);
            v3340 = 200;
            v3341 = (_QWORD *)(v3332 + 72);
            v3342 = KiDpcDispatch;
            v3343 = 25LL;
            do
            {
              v3340 -= 8;
              *v3341 = *(_QWORD *)v3342;
              v3342 = (__int64 (__fastcall *)(PVOID, PVOID))((char *)v3342 + 8);
              ++v3341;
              --v3343;
            }
            while ( v3343 );
            for ( ; v3340; --v3340 )
            {
              v3344 = *(_BYTE *)v3342;
              v3342 = (__int64 (__fastcall *)(PVOID, PVOID))((char *)v3342 + 1);
              *(_BYTE *)v3341 = v3344;
              v3341 = (_QWORD *)((char *)v3341 + 1);
            }
            *(_BYTE *)v3332 = 19;
            *(_BYTE *)(v3332 + 1) = 1;
            *(_WORD *)(v3332 + 2) = 0;
            *(_QWORD *)(v3332 + 24) = v3303;
            *(_QWORD *)(v3332 + 32) = 0LL;
            *(_QWORD *)(v3332 + 56) = 0LL;
            *(_QWORD *)(v3332 + 16) = 0LL;
            if ( v3332 == -72 )
              goto LABEL_4707;
            *((_DWORD *)v3187 + 612) |= 0x100u;
            goto LABEL_4745;
          }
          if ( (v3245 & 0xFFFFFFFA) == 0 && v3244 != 8 )
            goto LABEL_4707;
          v3246 = -1LL;
          v3247 = 0LL;
          v4384 = RtlLookupFunctionTable(KiTimerDispatch, &v4386, v3903);
          v3249 = v4384;
          if ( v4384 )
          {
            v4389 = 0LL;
            if ( v4300 == v4386 )
            {
              v3250 = (_DWORD *)v4301;
              v4389 = v4301;
              v4390 = 0LL;
              v4391 = v4302;
              v4392 = 0;
              v3251 = RtlLookupFunctionEntry(KiTimerDispatch, &v4386, 0LL);
              v4385 = v3251;
              if ( v3251 )
              {
                v3252 = v3251 - v4386;
                v3253 = 0;
                v3254 = *v3250 - 1;
                if ( v3254 >= 0 )
                {
                  do
                  {
                    v3255 = (v3254 + v3253) >> 1;
                    v3248 = (unsigned __int64)&v3250[2 * v3255 + 2];
                    if ( v3252 - *(_DWORD *)v3248 >= 0 )
                    {
                      if ( v3252 - *(_DWORD *)v3248 <= 0 )
                        break;
                      v3253 = v3255 + 1;
                    }
                    else
                    {
                      if ( !v3255 )
                        goto LABEL_4654;
                      v3254 = v3255 - 1;
                    }
                  }
                  while ( v3254 >= v3253 );
                  v3256 = (_DWORD *)v4390;
                  if ( v3254 >= v3253 )
                    v3256 = &v3250[2 * v3255 + 2];
                  v4390 = (__int64)v3256;
                }
              }
LABEL_4654:
              v3249 = v4384;
            }
            v3257 = (__int64 *)&v4202;
            v4388 = &v4202;
            v3903[0] /= 0xCu;
            v3258 = v4386;
            HalExtensionList = (PVOID)v4386;
            v4387 = v3249 + 12LL * v3903[0];
            v4383 = KiTimerDispatch;
            goto LABEL_4658;
          }
          v3258 = (ULONG_PTR)HalExtensionList;
          while ( 2 )
          {
            v3257 = (__int64 *)v4388;
LABEL_4658:
            v3259 = v3247;
            v3260 = v3246;
            if ( v3249 && v3249 != v4387 )
            {
              if ( v4389 )
              {
                if ( !v4385 )
                  break;
                if ( !v4390 )
                {
                  *v3257 = v4385;
                  v4385 = 0LL;
LABEL_4684:
                  v3249 = v4384;
                  v3246 = v3258 + *v4202;
                  v3247 = v3258 + v4202[1];
                  if ( v3260 <= v3246 )
                    v3246 = v3260;
                  if ( v3259 >= v3247 )
                    v3247 = v3259;
                  continue;
                }
                v3261 = *(_DWORD *)(v4390 + 4);
                if ( (v3261 & 1) != 0 )
                {
                  *v3257 = v4386 + (v3261 & 0xFFFFFFFE);
                  v4390 = 0LL;
                  goto LABEL_4684;
                }
                v3262 = (unsigned int)(v4392 + v3261);
                v3263 = (unsigned int)v3262;
                v3264 = v3262 + 4;
                if ( v3264 < v3263 || v3264 > v4391 )
                {
                  v3903[1] = -805294751;
                  KeBugCheckEx(__ROR4__(-805306349, 92), 0x12uLL, v4389, v4386, v3263);
                }
                v3248 = (unsigned int)(v4392 + 4);
                v3265 = *(_DWORD *)(v4389 + v3263);
                v4392 += 4;
                v4390 &= -(__int64)((v3265 & 1) != 0);
                if ( (v3265 & 1) != 0 )
                  v3265 &= ~1u;
                *v3257 = v4386 + v3265;
              }
              else
              {
                while ( 1 )
                {
                  v3266 = v3249;
                  v3267 = RtlpConvertFunctionEntry(v3249, v4386, v3248);
                  v3268 = RtlpSameFunction(v3267, v4386, v4383);
                  v3249 = v4384 + 12;
                  v4384 += 12LL;
                  if ( v3268 )
                    break;
                  if ( v3249 == v4387 )
                    goto LABEL_4673;
                }
                v3259 = v3247;
                *v4388 = (unsigned int *)v3266;
              }
              v3258 = (ULONG_PTR)HalExtensionList;
              goto LABEL_4684;
            }
            break;
          }
LABEL_4673:
          if ( v3247 )
          {
            v3269 = v3247 - v3246;
            if ( v3269 <= 0x1000 )
            {
              v3270 = 0;
              v3271 = *((_DWORD *)v3187 + 612) & 0x10000000;
              if ( !v3271 )
                v3270 = *((_DWORD *)v3187 + 585);
              v3272 = *((_DWORD *)v3187 + 516);
              v3273 = __rdtsc();
              v3274 = __ROR8__(v3273, 3);
              v4203 = ((v3274 ^ v3273) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v3275 = ((unsigned __int16)v4203 ^ (unsigned __int16)(8193 * (v3274 ^ v3273))) & 0x7FF;
              v3276 = __rdtsc();
              v3277 = (__ROR8__(v3276, 3) ^ v3276) * (unsigned __int128)0x7010008004002001uLL;
              v4204 = *((_QWORD *)&v3277 + 1);
              v3839 = (*((_QWORD *)&v3277 + 1) ^ (unsigned __int64)v3277) % (unsigned int)(v3275 + 1);
              if ( !v3270 )
              {
                v3285 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))v3187 + 31))(
                          v3271 != 0 ? 0x200 : 0,
                          (unsigned int)(v3275 + v3269),
                          v3272,
                          (unsigned int)-v3271);
                goto LABEL_4691;
              }
              v3278 = __rdtsc();
              v3279 = __ROR8__(v3278, 3);
              v4205 = ((v3279 ^ v3278) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v3275 += ((((unsigned __int8)v4205 ^ (unsigned __int8)(v3279 ^ v3278)) & 1) << 12) + 4096;
              v3280 = (unsigned int)(v3275 + v3269);
              v3281 = (*((__int64 (__fastcall **)(__int64, __int64))v3187 + 68))(v3280 + 8, 0xFFFFFFFFLL);
              v3282 = (_QWORD *)v3281;
              if ( !v3281 )
                goto LABEL_4692;
              if ( !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v3187 + 70))(
                      v3281,
                      ((_DWORD)v3280 + 4095) & 0xFFFFF000,
                      64LL) )
              {
                v3283 = (unsigned int)v3280;
                v3284 = v3282;
                goto LABEL_4681;
              }
              *v3282 = v3280 + 8;
              v3285 = (__int64)(v3282 + 1);
LABEL_4691:
              if ( !v3285 )
              {
LABEL_4692:
                ++*((_DWORD *)v3187 + 646);
                goto LABEL_4707;
              }
              v3286 = v3839;
              v3287 = (_QWORD *)v3285;
              v3288 = v3839;
              if ( (unsigned int)v3839 >= 8 )
              {
                v3289 = (unsigned __int64)(unsigned int)v3839 >> 3;
                do
                {
                  v3288 -= 8;
                  v3290 = __rdtsc();
                  v3291 = (__ROR8__(v3290, 3) ^ v3290) * (unsigned __int128)0x7010008004002001uLL;
                  v4206 = *((_QWORD *)&v3291 + 1);
                  *v3287++ = v3291 ^ *((_QWORD *)&v3291 + 1);
                  --v3289;
                }
                while ( v3289 );
                v3286 = v3839;
              }
              if ( v3288 )
              {
                v3292 = __rdtsc();
                v3293 = (__ROR8__(v3292, 3) ^ v3292) * (unsigned __int128)0x7010008004002001uLL;
                v4207 = *((_QWORD *)&v3293 + 1);
                v3294 = v3293 ^ *((_QWORD *)&v3293 + 1);
                do
                {
                  *(_BYTE *)v3287 = v3294;
                  v3287 = (_QWORD *)((char *)v3287 + 1);
                  v3294 >>= 8;
                  --v3288;
                }
                while ( v3288 );
              }
              v3295 = v3275 - v3286;
              v3296 = (_QWORD *)(v3286 + v3285 + (unsigned int)v3269);
              if ( v3295 >= 8 )
              {
                v3297 = (unsigned __int64)v3295 >> 3;
                do
                {
                  v3295 -= 8;
                  v3298 = __rdtsc();
                  v3299 = (__ROR8__(v3298, 3) ^ v3298) * (unsigned __int128)0x7010008004002001uLL;
                  v4208 = *((_QWORD *)&v3299 + 1);
                  *v3296++ = v3299 ^ *((_QWORD *)&v3299 + 1);
                  --v3297;
                }
                while ( v3297 );
              }
              if ( v3295 )
              {
                v3300 = __rdtsc();
                v3301 = (__ROR8__(v3300, 3) ^ v3300) * (unsigned __int128)0x7010008004002001uLL;
                v4209 = *((_QWORD *)&v3301 + 1);
                v3302 = v3301 ^ *((_QWORD *)&v3301 + 1);
                do
                {
                  *(_BYTE *)v3296 = v3302;
                  v3296 = (_QWORD *)((char *)v3296 + 1);
                  v3302 >>= 8;
                  --v3295;
                }
                while ( v3295 );
              }
              v3303 = (void *)(v3285 + v3286);
              if ( v3303 )
              {
                v3345 = (_QWORD *)(v3285 + v3286);
                if ( (unsigned int)v3269 >= 8 )
                {
                  v3346 = (unsigned __int64)(unsigned int)v3269 >> 3;
                  do
                  {
                    LODWORD(v3269) = v3269 - 8;
                    *v3345 = *(_QWORD *)v3246;
                    v3246 += 8LL;
                    ++v3345;
                    --v3346;
                  }
                  while ( v3346 );
                }
                if ( (_DWORD)v3269 )
                {
                  v3347 = (char *)v3345 - v3246;
                  do
                  {
                    v3347[v3246] = *(_BYTE *)v3246;
                    ++v3246;
                    LODWORD(v3269) = v3269 - 1;
                  }
                  while ( (_DWORD)v3269 );
                }
                *((_DWORD *)v3187 + 612) |= 0x200u;
LABEL_4745:
                v3308 = 0;
                goto LABEL_4763;
              }
            }
          }
LABEL_4707:
          v3304 = __rdtsc();
          v3305 = (__ROR8__(v3304, 3) ^ v3304) * (unsigned __int128)0x7010008004002001uLL;
          v4217 = *((_QWORD *)&v3305 + 1);
          v3239 = ((unsigned __int64)v3305 ^ *((_QWORD *)&v3305 + 1)) % 0xA;
          if ( v3239 > 5 )
            continue;
          v3240 = v3239 == 5;
LABEL_4709:
          if ( !v3240 )
          {
            if ( v3239 )
            {
              v3306 = v3239 - 1;
              if ( v3306 )
              {
                v3307 = v3306 - 1;
                if ( v3307 )
                {
                  if ( v3307 == 1 )
                  {
                    v3303 = ExpTimeZoneDpcRoutine;
                    v3308 = -150967937;
                  }
                  else
                  {
                    v3303 = ExpCenturyDpcRoutine;
                    v3308 = -83859133;
                  }
                }
                else
                {
                  v3303 = ExpTimeRefreshDpcRoutine;
                  v3308 = -268408344;
                }
              }
              else
              {
                v3303 = CmpLazyFlushDpcRoutine;
                v3308 = -805278776;
              }
            }
            else
            {
              v3303 = CmpEnableLazyFlushDpcRoutine;
              v3308 = -1342149208;
            }
LABEL_4763:
            if ( !*((_DWORD *)v3187 + 597) )
              *((_DWORD *)v3187 + 597) = v3308;
            *((_QWORD *)v3187 + 251) = v3303;
LABEL_4766:
            *((_QWORD *)v3187 + 301) = **((_QWORD **)v3187 + 300);
            *((_DWORD *)v3187 + 604) = -1;
            *((_DWORD *)v3187 + 605) = 0;
            *((_QWORD *)v3187 + 303) = 0LL;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v3348 = __rdtsc();
            v3349 = __ROR8__(v3348, 3) ^ v3348;
            v4218 = (v3349 * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v893 = v3882 == 3;
            *((_DWORD *)v3187 + 599) = v4218 ^ (67117057 * v3349);
            if ( v893 )
            {
              HalExtensionList = (PVOID)pg_unknown18(v3187, v4474);
              if ( !HalExtensionList )
                return 0;
            }
            else
            {
              HalExtensionList = 0LL;
            }
            v3350 = *((unsigned int *)v3187 + 585);
            *((_DWORD *)v3187 + 647) = 0;
            v3351 = *((_DWORD *)v3187 + 505);
            v3352 = v3351 + 4095;
            if ( *((_DWORD *)v3187 + 526) != 7 )
              v3352 = v3351;
            v3839 = pg_unknown7(v3187, v3352, v3350);
            v3354 = v3839;
            if ( !v3839 )
              return 0;
            v3355 = *((_DWORD *)v3187 + 612);
            if ( (v3355 & 4) == 0 )
            {
              v3356 = *((_DWORD *)v3187 + 505);
              v3357 = *((_QWORD *)v3187 + 249);
              v3358 = (v3355 & 0x20000000) != 0 ? *((_DWORD *)v3187 + 585) : 0;
              if ( v3356 >= 8 )
              {
                v3359 = (unsigned __int64)v3356 >> 3;
                do
                {
                  *(_QWORD *)v3187 = 0LL;
                  v3356 -= 8;
                  v3187 += 8;
                  --v3359;
                }
                while ( v3359 );
              }
              for ( ; v3356; --v3356 )
                *v3187++ = 0;
              v3360 = *(_DWORD *)(v3354 + 2340);
              *(_DWORD *)(v3354 + 2340) = v3358;
              if ( v3358 == 3 )
              {
                (*(void (__fastcall **)(__int64))(v3354 + 872))(v3357);
              }
              else
              {
                v3361 = 0;
                if ( (*(_DWORD *)(v3354 + 2448) & 0x10000000) == 0 )
                  v3361 = v3358;
                if ( v3361 )
                  (*(void (__fastcall **)(__int64, _QWORD))(v3354 + 552))(v3357 - 8, *(_QWORD *)(v3357 - 8));
                else
                  (*(void (__fastcall **)(__int64))(v3354 + 256))(v3357);
              }
              *(_DWORD *)(v3354 + 2340) = v3360;
            }
            *(_DWORD *)(v3354 + 2448) &= ~4u;
            v3838 = *(_QWORD *)(v3354 + 2696);
            *(_QWORD *)(v3354 + 2696) = 0LL;
            v3362 = *(unsigned int *)(v3354 + 2600);
            if ( (_DWORD)v3362 )
            {
              v3363 = (int *)(v3354 + v3362);
              v3364 = *(_QWORD **)(v3354 + v3362 + 8);
              v3841 = v3354 + v3362;
              if ( v3364 )
              {
                v3365 = (unsigned int)v3363[4];
                v3366 = v3364;
                *(_DWORD *)(v3354 + 2088) += v3365;
                v3367 = (const char *)v3364;
                v3368 = *(unsigned int *)(v3354 + 2068);
                v3369 = *(_QWORD *)(v3354 + 2072);
                if ( v3364 < (_QWORD *)((char *)v3364 + v3365) )
                {
                  do
                  {
                    _mm_prefetch(v3367, 0);
                    v3367 += 64;
                  }
                  while ( v3367 < (const char *)v3364 + v3365 );
                }
                v3370 = *(_QWORD *)(v3354 + 2072);
                v3371 = (unsigned int)v3365 >> 7;
                if ( (unsigned int)v3365 >> 7 )
                {
                  do
                  {
                    v3372 = 8LL;
                    do
                    {
                      v3373 = v3370 ^ *v3366;
                      v3374 = v3366[1];
                      v3366 += 2;
                      v3370 = __ROL8__(__ROL8__(v3373, v3368) ^ v3374, v3368);
                      --v3372;
                    }
                    while ( v3372 );
                    v3375 = __ROL8__(v3369 ^ ((char *)v3366 - (char *)v3364), 17) ^ v3369 ^ ((char *)v3366
                                                                                           - (char *)v3364);
                    v3353 = (v3375 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                    v4219 = v3353;
                    v3368 = ((unsigned __int8)(v3353 ^ v3375) ^ (unsigned __int8)v3368) & 0x3F;
                    if ( !(_DWORD)v3368 )
                      v3368 = 1LL;
                    --v3371;
                  }
                  while ( v3371 );
                  v3354 = v3839;
                }
                v3376 = v3365 & 0x7F;
                if ( v3376 >= 8 )
                {
                  v3353 = (unsigned __int64)v3376 >> 3;
                  do
                  {
                    v3370 = __ROL8__(*v3366++ ^ v3370, v3368);
                    v3376 -= 8;
                    --v3353;
                  }
                  while ( v3353 );
                }
                for ( ; v3376; --v3376 )
                {
                  v3377 = *(unsigned __int8 *)v3366;
                  v3366 = (_QWORD *)((char *)v3366 + 1);
                  v3370 = __ROL8__(v3377 ^ v3370, v3368);
                }
                for ( i158 = v3370 >> 31; i158; i158 >>= 31 )
                  LODWORD(v3370) = i158 ^ v3370;
                v3379 = v3370 & 0x7FFFFFFF;
                v3380 = 0;
                if ( v3379 != v3363[5] )
                {
                  if ( !*v3363 )
                    v3380 = v3363[6] != 0;
                  v3381 = (unsigned int)v3363[4];
                  v3353 = *((_QWORD *)v3363 + 1);
                  if ( v3363[4] && (*(_DWORD *)(v3354 + 2452) & 0x40) != 0 )
                  {
                    v3382 = KeGetCurrentIrql();
                    __writecr8(2uLL);
                    v3383 = v3353 & 0xFFFFFFFFFFFFF000uLL;
                    v4474 = (v3353 + v3381 - 1) | 0xFFF;
                    v3840 = (v3353 & 0xFFFFFFFFFFFFF000uLL) - 1;
                    while ( 2 )
                    {
                      v3384 = v3382;
                      while ( 1 )
                      {
                        v3385 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, __int64))(v3354 + 1128))(
                                  v3383,
                                  0LL,
                                  v3366,
                                  v3368);
                        if ( v3385 != -1073741267 )
                          break;
                        if ( v3380 )
                          goto LABEL_4822;
                        if ( v3382 > 1u )
                          goto LABEL_4820;
                        v3384 = v3382;
                        __writecr8(v3382);
                        KeGetCurrentIrql();
                        __writecr8(2uLL);
                      }
                      if ( v3385 < 0 )
                      {
LABEL_4822:
                        __writecr8(v3384);
                        v3363 = (int *)v3841;
                        goto LABEL_4823;
                      }
LABEL_4820:
                      v3383 += 4096LL;
                      v3840 += 4096LL;
                      if ( v3840 != v4474 )
                        continue;
                      break;
                    }
                    __writecr8(v3384);
                    v3363 = (int *)v3841;
                  }
                  else
                  {
LABEL_4823:
                    v3386 = *(_DWORD *)(v3354 + 2296);
                    if ( !v3386 )
                    {
                      *(_QWORD *)(*(_QWORD *)(v3354 + 1424) + 24LL) = v3379 ^ (unsigned __int64)(unsigned int)v3363[5];
                      v3386 = *(_DWORD *)(v3354 + 2296);
                    }
                    v3387 = *((_QWORD *)v3363 + 1);
                    if ( !v3386 )
                    {
                      *(_QWORD *)(v3354 + 2304) = v3354 - 0x5C5FC0A76E374B18LL;
                      *(_QWORD *)(v3354 + 2312) = (char *)v3363 - 0x4C48B4211BBACBEBLL;
                      *(_QWORD *)(v3354 + 2320) = *v3363;
                      *(_QWORD *)(v3354 + 2328) = v3387;
                      *(_DWORD *)(v3354 + 2296) = 1;
                      __b8(v3354, 0LL);
                    }
                  }
                }
                (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(v3354 + 256))(
                  *((_QWORD *)v3363 + 3),
                  v3353,
                  v3366,
                  v3368);
                *((_QWORD *)v3363 + 1) = 0LL;
                v3363[4] = 0;
                v3388 = *(_QWORD *)(v3354 + 2072);
                for ( i159 = v3388; ; LODWORD(v3388) = i159 ^ v3388 )
                {
                  i159 >>= 31;
                  if ( !i159 )
                    break;
                }
                v3363[5] = v3388 & 0x7FFFFFFF;
              }
              v3390 = __rdtsc();
              v3391 = (__ROR8__(v3390, 3) ^ v3390) * (unsigned __int128)0x7010008004002001uLL;
              v4220 = *((_QWORD *)&v3391 + 1);
              if ( ((unsigned __int64)v3391 ^ *((_QWORD *)&v3391 + 1)) == 3
                                                                        * (((unsigned __int64)v3391 ^ *((_QWORD *)&v3391 + 1))
                                                                         / 3) )
              {
                v3392 = *(unsigned int *)(v3354 + 2064);
                v3393 = (__int64 *)(v3363 + 6);
                v3394 = __rdtsc();
                v3395 = __ROR8__(v3394, 3);
                v4221 = ((v3395 ^ v3394) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3396 = ((unsigned __int16)v4221 ^ (unsigned __int16)(8193 * (v3395 ^ v3394))) & 0x7FF;
                v3397 = __rdtsc();
                v3398 = (__ROR8__(v3397, 3) ^ v3397) * (unsigned __int128)0x7010008004002001uLL;
                v4222 = *((_QWORD *)&v3398 + 1);
                v3399 = (*((_QWORD *)&v3398 + 1) ^ (unsigned __int64)v3398) % (unsigned int)(v3396 + 1);
                v3400 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(v3354 + 248))(
                          (*(_DWORD *)(v3354 + 2448) >> 19) & 0x200,
                          (unsigned int)(v3396 + 2720),
                          v3392);
                v3401 = v3400;
                if ( !v3400 )
                {
                  ++*(_DWORD *)(v3354 + 2584);
                  goto LABEL_4923;
                }
                v3402 = v3399;
                v3403 = (_QWORD *)v3400;
                if ( (unsigned int)v3399 >= 8 )
                {
                  v3404 = (unsigned __int64)(unsigned int)v3399 >> 3;
                  do
                  {
                    v3402 -= 8;
                    v3405 = __rdtsc();
                    v3406 = (__ROR8__(v3405, 3) ^ v3405) * (unsigned __int128)0x7010008004002001uLL;
                    v4223 = *((_QWORD *)&v3406 + 1);
                    *v3403++ = v3406 ^ *((_QWORD *)&v3406 + 1);
                    --v3404;
                  }
                  while ( v3404 );
                  v3354 = v3839;
                }
                if ( v3402 )
                {
                  v3407 = __rdtsc();
                  v3408 = __ROR8__(v3407, 3) ^ v3407;
                  v4224 = (v3408 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v3409 = (0x7010008004002001LL * v3408) ^ v4224;
                  do
                  {
                    *(_BYTE *)v3403 = v3409;
                    v3403 = (_QWORD *)((char *)v3403 + 1);
                    v3409 >>= 8;
                    --v3402;
                  }
                  while ( v3402 );
                }
                v3410 = v3396 - v3399;
                v3411 = v3401 + (unsigned int)v3399;
                v3412 = (_QWORD *)(v3411 + 2720);
                if ( v3410 >= 8 )
                {
                  v3413 = (unsigned __int64)v3410 >> 3;
                  do
                  {
                    v3410 -= 8;
                    v3414 = __rdtsc();
                    v3415 = (__ROR8__(v3414, 3) ^ v3414) * (unsigned __int128)0x7010008004002001uLL;
                    v4225 = *((_QWORD *)&v3415 + 1);
                    *v3412++ = v3415 ^ *((_QWORD *)&v3415 + 1);
                    --v3413;
                  }
                  while ( v3413 );
                }
                if ( v3410 )
                {
                  v3416 = __rdtsc();
                  v3417 = __ROR8__(v3416, 3) ^ v3416;
                  v4226 = (v3417 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v3418 = (0x7010008004002001LL * v3417) ^ v4226;
                  do
                  {
                    *(_BYTE *)v3412 = v3418;
                    v3412 = (_QWORD *)((char *)v3412 + 1);
                    v3418 >>= 8;
                    --v3410;
                  }
                  while ( v3410 );
                }
                if ( v3393 )
                  *v3393 = v3401;
                if ( v3411 )
                {
                  v3419 = v3841;
                  v3420 = 2720;
                  v3421 = (char *)v3354;
                  v3422 = (_QWORD *)(v3401 + (unsigned int)v3399);
                  v3423 = 340LL;
                  *(_QWORD *)(v3841 + 8) = v3411;
                  *(_DWORD *)(v3419 + 16) = 2720;
                  do
                  {
                    v3420 -= 8;
                    *v3422 = *(_QWORD *)v3421;
                    v3421 += 8;
                    ++v3422;
                    --v3423;
                  }
                  while ( v3423 );
                  for ( ; v3420; --v3420 )
                  {
                    v3424 = *v3421++;
                    *(_BYTE *)v3422 = v3424;
                    v3422 = (_QWORD *)((char *)v3422 + 1);
                  }
                  *(_DWORD *)(v3411 + 2448) |= 0x80000u;
                  *(_DWORD *)(v3411 + 2020) = 2720;
                  *(_DWORD *)(v3411 + 2056) = 2720;
                  *(_DWORD *)(v3411 + 2448) &= ~2u;
                  v3425 = *(_DWORD *)(v3411 + 2020);
                  *(_DWORD *)(v3411 + 2604) = v3425;
                  LODWORD(v4474) = *(_DWORD *)(v3411 + 2388);
                  LODWORD(Src) = *(_DWORD *)(v3411 + 2448);
                  v3840 = *(_QWORD *)(v3411 + 1256);
                  v3843 = *(_QWORD *)(v3411 + 1472);
                  LODWORD(v3834) = (unsigned int)(v3425 - 200) >> 3;
                  *(_DWORD *)(v3411 + 196) = v3834;
                  do
                  {
                    v3426 = __rdtsc();
                    v3427 = (__ROR8__(v3426, 3) ^ v3426) * (unsigned __int128)0x7010008004002001uLL;
                    v4227 = *((_QWORD *)&v3427 + 1);
                    v3428 = v3427 ^ *((_QWORD *)&v3427 + 1);
                  }
                  while ( (unsigned __int64)v3427 == *((_QWORD *)&v3427 + 1) );
                  v3429 = (_QWORD *)(v3411 + 1944);
                  v3430 = 32;
                  v3848 = *(_QWORD *)(v3411 + 1976);
                  v3431 = v4330;
                  LODWORD(v3833) = *(_DWORD *)(v3411 + 2088);
                  v3432 = (char *)(v3411 + 1944);
                  v3433 = 4LL;
                  do
                  {
                    v3430 -= 8;
                    *(_QWORD *)v3431 = *(_QWORD *)v3432;
                    v3432 += 8;
                    v3431 += 8;
                    --v3433;
                  }
                  while ( v3433 );
                  for ( ; v3430; --v3430 )
                  {
                    v3434 = *v3432++;
                    *v3431++ = v3434;
                  }
                  *(_QWORD *)(v3411 + 1976) = 0LL;
                  v3435 = 32;
                  *(_DWORD *)(v3411 + 2088) = 0;
                  v3436 = (_QWORD *)(v3411 + 1944);
                  v3437 = 4LL;
                  do
                  {
                    *v3436 = 0LL;
                    v3435 -= 8;
                    ++v3436;
                    --v3437;
                  }
                  while ( v3437 );
                  for ( ; v3435; --v3435 )
                  {
                    *(_BYTE *)v3436 = 0;
                    v3436 = (_QWORD *)((char *)v3436 + 1);
                  }
                  v3438 = (_QWORD *)v3411;
                  *(_DWORD *)(v3411 + 2088) += *(_DWORD *)(v3411 + 2020);
                  v3439 = (const char *)v3411;
                  v3440 = *(unsigned int *)(v3411 + 2020);
                  v3441 = *(_DWORD *)(v3411 + 2068);
                  v3442 = *(_QWORD *)(v3411 + 2072);
                  if ( v3411 < v3411 + v3440 )
                  {
                    do
                    {
                      _mm_prefetch(v3439, 0);
                      v3439 += 64;
                    }
                    while ( (unsigned __int64)v3439 < v3411 + v3440 );
                  }
                  v3443 = *(_QWORD *)(v3411 + 2072);
                  v3444 = (unsigned int)v3440 >> 7;
                  if ( (unsigned int)v3440 >> 7 )
                  {
                    do
                    {
                      v3445 = 8LL;
                      do
                      {
                        v3446 = v3443 ^ *v3438;
                        v3447 = v3438[1];
                        v3438 += 2;
                        v3443 = __ROL8__(__ROL8__(v3446, v3441) ^ v3447, v3441);
                        --v3445;
                      }
                      while ( v3445 );
                      v3448 = __ROL8__(v3442 ^ ((unsigned __int64)v3438 - v3411), 17) ^ v3442 ^ ((unsigned __int64)v3438
                                                                                               - v3411);
                      v4228 = (v3448 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v3441 = ((unsigned __int8)(v4228 ^ v3448) ^ (unsigned __int8)v3441) & 0x3F;
                      if ( !v3441 )
                        LOBYTE(v3441) = 1;
                      --v3444;
                    }
                    while ( v3444 );
                    v3354 = v3839;
                    v3429 = (_QWORD *)(v3411 + 1944);
                  }
                  v3449 = v3440 & 0x7F;
                  if ( v3449 >= 8 )
                  {
                    v3450 = (unsigned __int64)v3449 >> 3;
                    do
                    {
                      v3443 = __ROL8__(*v3438++ ^ v3443, v3441);
                      v3449 -= 8;
                      --v3450;
                    }
                    while ( v3450 );
                  }
                  for ( ; v3449; --v3449 )
                  {
                    v3451 = *(unsigned __int8 *)v3438;
                    v3438 = (_QWORD *)((char *)v3438 + 1);
                    v3443 = __ROL8__(v3451 ^ v3443, v3441);
                  }
                  v3452 = v4330;
                  *(_QWORD *)(v3411 + 1976) = v3848;
                  v3453 = 32;
                  *(_DWORD *)(v3411 + 2088) += v3833;
                  v3454 = 4LL;
                  do
                  {
                    v3453 -= 8;
                    *v3429 = *(_QWORD *)v3452;
                    v3452 += 8;
                    ++v3429;
                    --v3454;
                  }
                  while ( v3454 );
                  for ( ; v3453; --v3453 )
                  {
                    v3455 = *v3452++;
                    *(_BYTE *)v3429 = v3455;
                    v3429 = (_QWORD *)((char *)v3429 + 1);
                  }
                  *(_QWORD *)(v3411 + 1976) = v3443;
                  if ( (*(_DWORD *)(v3411 + 2448) & 0x40000000) == 0 )
                  {
                    v3456 = (_QWORD *)v3411;
                    for ( i160 = 0; i160 < 0x19; ++i160 )
                      *v3456++ ^= v3428;
                    v4229[0] = v3428;
                    v3458 = v3834;
                    if ( (_DWORD)v3834 )
                    {
                      v3459 = &v3456[(unsigned int)v3834 - 1];
                      while ( 1 )
                      {
                        *v3459-- ^= v3428;
                        v4229[0] = __ROR8__(v3428, v3458);
                        _bittestandcomplement64(v4229, v4229[0] & 0x3F);
                        if ( !--v3458 )
                          break;
                        v3428 = v4229[0];
                      }
                    }
                    if ( ((unsigned int)Src & 0x80000) != 0 )
                    {
                      v3460 = __rdtsc();
                      v3461 = (__ROR8__(v3460, 3) ^ v3460) * (unsigned __int128)0x7010008004002001uLL;
                      v4229[1] = *((_QWORD *)&v3461 + 1);
                      if ( (*((_QWORD *)&v3461 + 1) ^ (unsigned __int64)v3461) != 3
                                                                                * ((*((_QWORD *)&v3461 + 1) ^ (unsigned __int64)v3461)
                                                                                 / 3) )
                        goto LABEL_4905;
                    }
                    else if ( ((unsigned __int16)Src & 0x100) != 0 )
                    {
                      goto LABEL_4905;
                    }
                    v3462 = (unsigned int)v4474;
                    v3463 = (int)Src;
                    v3464 = v3843;
                    v3465 = __ROR8__(v3411, v3411);
                    v4298[0] = 0;
                    v4298[6] = 4;
                    v3466 = 25;
                    v4298[3] = 1;
                    v3467 = (ULONG_PTR *)v3411;
                    v4298[5] = 2;
                    v3468 = 0;
                    v3469 = 16;
                    v4298[8] = 3;
                    v4298[9] = 5;
                    v4298[12] = 6;
                    v4298[7] = 7;
                    v4298[13] = 8;
                    v4298[10] = 9;
                    v4298[14] = 10;
                    v4298[4] = 11;
                    v4298[1] = 12;
                    v4298[15] = 13;
                    v4298[11] = 14;
                    v4298[2] = 15;
                    do
                    {
                      v3470 = *v3467;
                      v3471 = v3469;
                      do
                      {
                        v3470 = __ROR8__(
                                  (unsigned __int8)v4298[*(_BYTE *)v3467 & 0xF] | v3470 & 0xFFFFFFFFFFFFFFF0uLL,
                                  4);
                        *v3467 = v3470;
                        --v3471;
                      }
                      while ( v3471 );
                      v3472 = v3834;
                      *v3467 -= v3411 + v3468;
                      v3473 = *v3467;
                      if ( (v3463 & 0x200) != 0 )
                        v3474 = v3465 ^ v3473;
                      else
                        v3474 = v3464 ^ __ROR8__(v3465 ^ _byteswap_uint64(v3473 ^ v3840), v3464);
                      *v3467++ = v3474;
                      v3465 = v3462 ^ (v3411
                                     + __ROL8__(
                                         __ROR8__(v3468 ^ (unsigned __int64)(200 - v3468), ~(_BYTE)v3474) ^ v3465,
                                         ~(_BYTE)v3474));
                      if ( ++v3468 == 25 )
                      {
                        v3475 = 0;
                        v3469 = 1;
                        if ( (v3463 & 0x80000) == 0 )
                          v3475 = v3472;
                        v3466 += v3475;
                      }
                    }
                    while ( v3468 < v3466 );
                    v3354 = v3839;
                  }
LABEL_4905:
                  v3476 = v3841;
                  v3477 = *(_QWORD **)(v3841 + 8);
                  v3478 = *(unsigned int *)(v3841 + 16);
                  v3479 = v3477;
                  *(_DWORD *)(v3354 + 2088) += v3478;
                  v3480 = (const char *)v3477;
                  v3481 = *(_DWORD *)(v3354 + 2068);
                  v3482 = *(_QWORD *)(v3354 + 2072);
                  if ( v3477 < (_QWORD *)((char *)v3477 + v3478) )
                  {
                    do
                    {
                      _mm_prefetch(v3480, 0);
                      v3480 += 64;
                    }
                    while ( v3480 < (const char *)v3477 + v3478 );
                  }
                  v3483 = *(_QWORD *)(v3354 + 2072);
                  v3484 = (unsigned int)v3478 >> 7;
                  if ( (unsigned int)v3478 >> 7 )
                  {
                    do
                    {
                      v3485 = 8LL;
                      do
                      {
                        v3486 = v3483 ^ *v3479;
                        v3487 = v3479[1];
                        v3479 += 2;
                        v3483 = __ROL8__(__ROL8__(v3486, v3481) ^ v3487, v3481);
                        --v3485;
                      }
                      while ( v3485 );
                      v3488 = __ROL8__(v3482 ^ ((char *)v3479 - (char *)v3477), 17) ^ v3482 ^ ((char *)v3479
                                                                                             - (char *)v3477);
                      v4230 = (v3488 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                      v3481 = ((unsigned __int8)(v4230 ^ v3488) ^ (unsigned __int8)v3481) & 0x3F;
                      if ( !v3481 )
                        LOBYTE(v3481) = 1;
                      --v3484;
                    }
                    while ( v3484 );
                    v3476 = v3841;
                  }
                  v3489 = v3478 & 0x7F;
                  if ( v3489 >= 8 )
                  {
                    v3490 = (unsigned __int64)v3489 >> 3;
                    do
                    {
                      v3483 = __ROL8__(*v3479++ ^ v3483, v3481);
                      v3489 -= 8;
                      --v3490;
                    }
                    while ( v3490 );
                  }
                  for ( ; v3489; --v3489 )
                  {
                    v3491 = *(unsigned __int8 *)v3479;
                    v3479 = (_QWORD *)((char *)v3479 + 1);
                    v3483 = __ROL8__(v3491 ^ v3483, v3481);
                  }
                  for ( i161 = v3483 >> 31; i161; i161 >>= 31 )
                    LODWORD(v3483) = i161 ^ v3483;
                  *(_DWORD *)(v3476 + 20) = v3483 & 0x7FFFFFFF;
                }
              }
            }
LABEL_4923:
            *(_DWORD *)(v3354 + 2448) |= 0x200000u;
            v3493 = *(_DWORD *)(v3354 + 196);
            v3494 = (_QWORD *)v3354;
            *(_DWORD *)(v3354 + 196) = 0;
            *(_DWORD *)(v3354 + 2088) += 1568;
            v3495 = *(_DWORD *)(v3354 + 2068);
            v3496 = *(_QWORD *)(v3354 + 2072);
            if ( v3354 < v3354 + 1568 )
            {
              v3497 = (const char *)v3354;
              do
              {
                _mm_prefetch(v3497, 0);
                v3497 += 64;
              }
              while ( (unsigned __int64)v3497 < v3354 + 1568 );
            }
            v3498 = *(_QWORD *)(v3354 + 2072);
            v3499 = 12;
            do
            {
              v3500 = 8LL;
              do
              {
                v3501 = v3498 ^ *v3494;
                v3502 = v3494[1];
                v3494 += 2;
                v3498 = __ROL8__(__ROL8__(v3501, v3495) ^ v3502, v3495);
                --v3500;
              }
              while ( v3500 );
              v3503 = __ROL8__(v3496 ^ ((unsigned __int64)v3494 - v3354), 17) ^ v3496 ^ ((unsigned __int64)v3494 - v3354);
              v4231 = (v3503 * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v3495 = ((unsigned __int8)(v4231 ^ v3503) ^ (unsigned __int8)v3495) & 0x3F;
              if ( !v3495 )
                LOBYTE(v3495) = 1;
              --v3499;
            }
            while ( v3499 );
            v3504 = 32;
            v3505 = 4LL;
            do
            {
              v3498 = __ROL8__(*v3494++ ^ v3498, v3495);
              v3504 -= 8;
              --v3505;
            }
            while ( v3505 );
            for ( ; v3504; --v3504 )
            {
              v3506 = *(unsigned __int8 *)v3494;
              v3494 = (_QWORD *)((char *)v3494 + 1);
              v3498 = __ROL8__(v3506 ^ v3498, v3495);
            }
            *(_DWORD *)(v3354 + 196) = v3493;
            *(_QWORD *)(v3354 + 2592) = v3498;
            *(_DWORD *)(v3354 + 2088) = 0;
            *(_DWORD *)(v3354 + 2584) = 0;
            v3841 = *(_QWORD *)(v3354 + 1992);
            memmove(v4443, (const void *)v3354, 0xAA0uLL);
            __b8(v3354, 1LL);
            v3507 = *(_DWORD *)(v3354 + 2604);
            LODWORD(v4474) = *(_DWORD *)(v3354 + 2388);
            v3508 = (unsigned int)(v3507 - 200) >> 3;
            LODWORD(Src) = *(_DWORD *)(v3354 + 2448);
            v3840 = *(_QWORD *)(v3354 + 1256);
            v3509 = *(_QWORD *)(v3354 + 1472);
            *(_DWORD *)(v3354 + 196) = v3508;
            LODWORD(v3834) = v3508;
            v3843 = v3509;
            do
            {
              v3510 = __rdtsc();
              v3511 = (__ROR8__(v3510, 3) ^ v3510) * (unsigned __int128)0x7010008004002001uLL;
              v4232 = *((_QWORD *)&v3511 + 1);
              v3512 = v3511 ^ *((_QWORD *)&v3511 + 1);
            }
            while ( (unsigned __int64)v3511 == *((_QWORD *)&v3511 + 1) );
            v3513 = (_QWORD *)(v3354 + 1944);
            v3514 = v3834;
            v3515 = v4331;
            v3516 = 32;
            v3848 = *(_QWORD *)(v3354 + 1976);
            v3517 = (char *)(v3354 + 1944);
            LODWORD(v3833) = *(_DWORD *)(v3354 + 2088);
            v3518 = 4LL;
            do
            {
              v3516 -= 8;
              *(_QWORD *)v3515 = *(_QWORD *)v3517;
              v3517 += 8;
              v3515 += 8;
              --v3518;
            }
            while ( v3518 );
            for ( ; v3516; --v3516 )
            {
              v3519 = *v3517++;
              *v3515++ = v3519;
            }
            *(_QWORD *)(v3354 + 1976) = 0LL;
            v3520 = 32;
            *(_DWORD *)(v3354 + 2088) = 0;
            v3521 = (_QWORD *)(v3354 + 1944);
            v3522 = 4LL;
            do
            {
              *v3521 = 0LL;
              v3520 -= 8;
              ++v3521;
              --v3522;
            }
            while ( v3522 );
            for ( ; v3520; --v3520 )
            {
              *(_BYTE *)v3521 = 0;
              v3521 = (_QWORD *)((char *)v3521 + 1);
            }
            v3523 = (_QWORD *)v3354;
            *(_DWORD *)(v3354 + 2088) += *(_DWORD *)(v3354 + 2020);
            v3524 = *(unsigned int *)(v3354 + 2020);
            v3525 = *(_DWORD *)(v3354 + 2068);
            v3526 = *(_QWORD *)(v3354 + 2072);
            if ( v3354 < v3354 + v3524 )
            {
              v3527 = (const char *)v3354;
              do
              {
                _mm_prefetch(v3527, 0);
                v3527 += 64;
              }
              while ( (unsigned __int64)v3527 < v3354 + v3524 );
            }
            v3528 = *(_QWORD *)(v3354 + 2072);
            v3529 = (unsigned int)v3524 >> 7;
            if ( (unsigned int)v3524 >> 7 )
            {
              do
              {
                v3530 = 8LL;
                do
                {
                  v3531 = v3528 ^ *v3523;
                  v3532 = v3523[1];
                  v3523 += 2;
                  v3528 = __ROL8__(__ROL8__(v3531, v3525) ^ v3532, v3525);
                  --v3530;
                }
                while ( v3530 );
                v3354 = v3839;
                v3533 = __ROL8__(v3526 ^ ((unsigned __int64)v3523 - v3839), 17) ^ v3526 ^ ((unsigned __int64)v3523
                                                                                         - v3839);
                v4233 = (v3533 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3525 = ((unsigned __int8)(v4233 ^ v3533) ^ (unsigned __int8)v3525) & 0x3F;
                if ( !v3525 )
                  LOBYTE(v3525) = 1;
                --v3529;
              }
              while ( v3529 );
              v3514 = v3834;
            }
            v3534 = v3524 & 0x7F;
            if ( v3534 >= 8 )
            {
              v3535 = (unsigned __int64)v3534 >> 3;
              do
              {
                v3528 = __ROL8__(*v3523++ ^ v3528, v3525);
                v3534 -= 8;
                --v3535;
              }
              while ( v3535 );
            }
            for ( ; v3534; --v3534 )
            {
              v3536 = *(unsigned __int8 *)v3523;
              v3523 = (_QWORD *)((char *)v3523 + 1);
              v3528 = __ROL8__(v3536 ^ v3528, v3525);
            }
            v3537 = v4331;
            *(_QWORD *)(v3354 + 1976) = v3848;
            v3538 = 32;
            *(_DWORD *)(v3354 + 2088) += v3833;
            v3539 = 4LL;
            do
            {
              v3538 -= 8;
              *v3513 = *(_QWORD *)v3537;
              v3537 += 8;
              ++v3513;
              --v3539;
            }
            while ( v3539 );
            for ( ; v3538; --v3538 )
            {
              v3540 = *v3537++;
              *(_BYTE *)v3513 = v3540;
              v3513 = (_QWORD *)((char *)v3513 + 1);
            }
            *(_QWORD *)(v3354 + 1976) = v3528;
            if ( (*(_DWORD *)(v3354 + 2448) & 0x40000000) == 0 )
            {
              v3541 = (_QWORD *)v3354;
              for ( i162 = 0; i162 < 0x19; ++i162 )
                *v3541++ ^= v3512;
              v4234[0] = v3512;
              v3543 = v3514;
              if ( v3514 )
              {
                v3544 = &v3541[v3514 - 1];
                while ( 1 )
                {
                  *v3544-- ^= v3512;
                  v4234[0] = __ROR8__(v3512, v3543);
                  _bittestandcomplement64(v4234, v4234[0] & 0x3F);
                  if ( !--v3543 )
                    break;
                  v3512 = v4234[0];
                }
              }
              if ( ((unsigned int)Src & 0x80000) != 0 )
              {
                v3545 = __rdtsc();
                v3546 = (__ROR8__(v3545, 3) ^ v3545) * (unsigned __int128)0x7010008004002001uLL;
                v4234[1] = *((_QWORD *)&v3546 + 1);
                if ( ((unsigned __int64)v3546 ^ *((_QWORD *)&v3546 + 1)) != 3
                                                                          * (((unsigned __int64)v3546 ^ *((_QWORD *)&v3546 + 1))
                                                                           / 3) )
                  goto LABEL_4987;
              }
              else if ( ((unsigned __int16)Src & 0x100) != 0 )
              {
                goto LABEL_4987;
              }
              v3547 = v3843;
              v4299[3] = 1;
              v3548 = 25;
              v4299[0] = 0;
              v3549 = 0;
              v4299[6] = 4;
              v3550 = (unsigned int)v4474;
              v3551 = (ULONG_PTR *)v3354;
              v4299[5] = 2;
              v3552 = 16;
              v4299[8] = 3;
              v4299[9] = 5;
              v4299[12] = 6;
              v4299[7] = 7;
              v4299[13] = 8;
              v4299[10] = 9;
              v4299[14] = 10;
              v4299[4] = 11;
              v4299[1] = 12;
              v4299[15] = 13;
              v4299[11] = 14;
              v4299[2] = 15;
              v3553 = __ROR8__(v3354, v3354);
              do
              {
                v3554 = *v3551;
                v3555 = v3552;
                do
                {
                  v3554 = __ROR8__((unsigned __int8)v4299[*(_BYTE *)v3551 & 0xF] | v3554 & 0xFFFFFFFFFFFFFFF0uLL, 4);
                  *v3551 = v3554;
                  --v3555;
                }
                while ( v3555 );
                v3556 = (int)Src;
                v3557 = *v3551 - v3549 - v3354;
                *v3551 = v3557;
                if ( (v3556 & 0x200) != 0 )
                  v3558 = v3553 ^ v3557;
                else
                  v3558 = v3547 ^ __ROR8__(v3553 ^ _byteswap_uint64(v3840 ^ v3557), v3547);
                *v3551++ = v3558;
                v3553 = v3550 ^ (v3354
                               + __ROL8__(
                                   __ROR8__(v3549 ^ (unsigned __int64)(200 - v3549), ~(_BYTE)v3558) ^ v3553,
                                   ~(_BYTE)v3558));
                if ( ++v3549 == 25 )
                {
                  v3559 = 0;
                  v3552 = 1;
                  if ( (v3556 & 0x80000) == 0 )
                    v3559 = v3514;
                  v3548 += v3559;
                }
              }
              while ( v3549 < v3548 );
            }
LABEL_4987:
            KeInitializeTimer(Timer);
            _disable();
            v3560 = 0LL;
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            if ( v3882 == 7 )
            {
              v3561 = 32;
              if ( (*(_DWORD *)(v3354 + 2448) & 0x10000000) != 0 )
                v3561 = 2;
              if ( *(_DWORD *)(v3354 + 2340) )
              {
                MmSetPageProtection(*(_QWORD *)(v3354 + 1992) - 8LL, **(_QWORD **)(v3354 + 1992), v3561);
              }
              else
              {
                v3562 = *(void **)(v3354 + 1992);
                v3563 = ExQueryPoolBlockSize(v3562, &QuotaCharged);
                ExProtectPool(v3562, v3563, v3561);
              }
              for ( i163 = 0; i163 < 0x10; ++i163 )
              {
                v3565 = __rdtsc();
                v3566 = (__ROR8__(v3565, 3) ^ v3565) * (unsigned __int128)0x7010008004002001uLL;
                v4234[2] = *((_QWORD *)&v3566 + 1);
                v3567 = ((unsigned __int64)v3566 ^ *((_QWORD *)&v3566 + 1)) % 0xB;
                if ( (unsigned int)v3567 > 5 )
                {
                  v3571 = v3567 - 6;
                  if ( v3571 )
                  {
                    v3572 = v3571 - 1;
                    if ( v3572 )
                    {
                      v3573 = v3572 - 1;
                      if ( v3573 )
                      {
                        if ( v3573 == 1 )
                        {
                          v3903[8] = -1333354875;
                          v3570 = __ROR4__(-1333354868, 33);
                        }
                        else
                        {
                          v3574 = __rdtsc();
                          v3575 = __ROR8__(v3574, 3);
                          v4235 = ((v3575 ^ v3574) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                          v3576 = v4235 ^ (67117057 * (v3575 ^ v3574));
                          v3570 = ((((((v3576 % 0x1A + 97) << 8) | ((v3576 >> 5)
                                                                  - 26
                                                                  * ((unsigned int)((1321528399
                                                                                   * (unsigned __int64)(v3576 >> 5)) >> 32) >> 3)
                                                                  + 65)) << 8) | ((v3576 >> 10) % 0x1A + 97)) << 8) | ((v3576 >> 15) % 0x1A + 65);
                        }
                      }
                      else
                      {
                        v3903[9] = 1684422978;
                        v3570 = __ROR4__(1684422978, 8);
                      }
                    }
                    else
                    {
                      v3903[10] = -2100910376;
                      v3570 = __ROL4__(-2100910376, 7);
                    }
                  }
                  else
                  {
                    v3903[11] = 1314342514;
                    v3570 = __ROR4__(1314342516, 24);
                  }
                }
                else if ( (_DWORD)v3567 == 5 )
                {
                  v3903[7] = 680282605;
                  v3570 = __ROR4__(680282605, 5);
                }
                else if ( (_DWORD)v3567 )
                {
                  v3568 = v3567 - 1;
                  if ( v3568 )
                  {
                    v3569 = v3568 - 1;
                    if ( v3569 )
                    {
                      if ( v3569 == 1 )
                      {
                        v3903[3] = -1474152136;
                        v3570 = __ROR4__(-1474152133, 15);
                      }
                      else
                      {
                        v3903[2] = 1728537748;
                        v3570 = __ROL4__(1728537748, 4);
                      }
                    }
                    else
                    {
                      v3903[4] = -2051698419;
                      v3570 = __ROR4__(-2051698419, 2);
                    }
                  }
                  else
                  {
                    v3903[5] = -1297272415;
                    v3570 = __ROL4__(-1297272415, 1);
                  }
                }
                else
                {
                  v3903[6] = -795291432;
                  v3570 = __ROR4__(-795291432, 6);
                }
                v3577 = i163;
                dword_140C12FA0[v3577] = v3570;
              }
              v3354 = v3839;
              v3578 = (_QWORD *)v3839;
              v3579 = *(unsigned int *)(v3839 + 2020);
              v3580 = *(unsigned int *)(v3839 + 2068);
              v3581 = *(_QWORD *)(v3839 + 2072);
              if ( v3839 < v3839 + v3579 )
              {
                v3582 = (const char *)v3839;
                do
                {
                  _mm_prefetch(v3582, 0);
                  v3582 += 64;
                }
                while ( (unsigned __int64)v3582 < v3839 + v3579 );
              }
              v3583 = *(_QWORD *)(v3839 + 2072);
              for ( i164 = (unsigned int)v3579 >> 7; i164; --i164 )
              {
                v3585 = 8LL;
                do
                {
                  v3586 = v3583 ^ *v3578;
                  v3587 = v3578[1];
                  v3578 += 2;
                  v3583 = __ROL8__(__ROL8__(v3586, v3580) ^ v3587, v3580);
                  --v3585;
                }
                while ( v3585 );
                v3588 = __ROL8__(v3581 ^ ((unsigned __int64)v3578 - v3839), 17) ^ v3581 ^ ((unsigned __int64)v3578
                                                                                         - v3839);
                v4236 = (v3588 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3580 = ((unsigned __int8)(v4236 ^ v3588) ^ (unsigned __int8)v3580) & 0x3F;
                if ( !(_DWORD)v3580 )
                  v3580 = 1LL;
              }
              v3589 = v3579 & 0x7F;
              if ( v3589 >= 8 )
              {
                v3590 = (unsigned __int64)v3589 >> 3;
                do
                {
                  v3583 = __ROL8__(*v3578++ ^ v3583, v3580);
                  v3589 -= 8;
                  --v3590;
                }
                while ( v3590 );
              }
              for ( ; v3589; --v3589 )
              {
                v3591 = *(unsigned __int8 *)v3578;
                v3578 = (_QWORD *)((char *)v3578 + 1);
                v3583 = __ROL8__(v3591 ^ v3583, v3580);
              }
              v3592 = 4;
              qword_140CFC3D0 = v3583;
              v3593 = 4;
              LODWORD(v4474) = 4;
              v4267 = 0LL;
              v3594 = v4268;
              do
              {
                *v3594++ = 0;
                --v3592;
              }
              while ( v3592 );
              v3595 = 0;
              if ( *(_DWORD *)(v3354 + 2060) )
              {
                LODWORD(v3580) = v4268[0];
                v3596 = HIDWORD(v4267);
                v3597 = v4267;
                while ( 1 )
                {
                  v3598 = v3354;
                  v3599 = 0;
                  if ( *(_QWORD *)(v3354 + 2680) )
                    v3598 = *(_QWORD *)(v3354 + 2680);
                  v4474 = v3598;
                  v3600 = (int *)(v3598 + *(unsigned int *)(v3598 + 2056));
                  if ( v3597 && v3596 <= v3595 )
                  {
                    v3599 = v3596;
                    v3600 = (int *)(v3598 + (unsigned int)v3580);
                  }
                  if ( v3599 != v3595 )
                  {
                    v3601 = v3595 - v3599;
                    v3599 = v3595;
                    while ( 1 )
                    {
                      v3602 = *v3600;
                      if ( *v3600 > 12 )
                        break;
                      if ( v3602 == 12 )
                        goto LABEL_5057;
                      v3603 = v3602 - 1;
                      if ( !v3603 )
                        goto LABEL_5057;
                      v3604 = v3603 - 6;
                      if ( v3604 )
                      {
                        v3605 = v3604 - 1;
                        if ( !v3605 )
                        {
                          v3607 = *((unsigned __int16 *)v3600 + 16);
LABEL_5062:
                          v3606 = (v3607 + 55) & 0xFFFFFFF8;
                          goto LABEL_5063;
                        }
                        if ( v3605 != 2 )
                          goto LABEL_5059;
                        v3606 = (unsigned int)(16 * (v3600[7] + 3));
                      }
                      else
                      {
                        v3606 = (unsigned int)(24 * (v3600[6] + 2));
                      }
LABEL_5063:
                      v3600 = (int *)((char *)v3600 + v3606);
                      if ( !--v3601 )
                      {
                        v3354 = v3839;
                        LODWORD(v3598) = v4474;
                        goto LABEL_5065;
                      }
                    }
                    if ( v3602 == 28 )
                    {
                      v3607 = *((unsigned __int16 *)v3600 + 20);
                      goto LABEL_5062;
                    }
                    if ( v3602 == 30 )
                    {
                      v3606 = (((v3600[9] != 0 ? v3600[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                            + 24 * (*((unsigned __int16 *)v3600 + 20) + 2);
                      goto LABEL_5063;
                    }
                    if ( v3602 <= 32 )
                    {
LABEL_5059:
                      v3606 = 48LL;
                      goto LABEL_5063;
                    }
                    if ( v3602 <= 34 )
                    {
                      v3606 = 20
                            * (unsigned int)(((v3600[8] & 0xFFF) + (unsigned __int64)(unsigned int)v3600[10] + 4095) >> 12)
                            + 48;
                      goto LABEL_5063;
                    }
                    if ( v3602 != 43 )
                      goto LABEL_5059;
LABEL_5057:
                    v3606 = 4 * (v3600[4] / 0xCu) + 48;
                    goto LABEL_5063;
                  }
LABEL_5065:
                  LODWORD(v4267) = 1;
                  v3580 = (unsigned int)((_DWORD)v3600 - v3598);
                  HIDWORD(v4267) = v3599;
                  v4268[0] = (_DWORD)v3600 - v3598;
                  v3597 = 1;
                  v3608 = *v3600;
                  v3596 = v3599;
                  if ( (unsigned int)v3608 > 0x26 )
                    break;
                  v3609 = 0x400020020CLL;
                  if ( !_bittest64(&v3609, v3608) )
                    break;
                  ++v3593;
                  if ( (_DWORD)v3608 == 2 )
                    goto LABEL_5072;
LABEL_5081:
                  if ( ++v3595 >= *(_DWORD *)(v3354 + 2060) )
                  {
                    LODWORD(v4474) = v3593;
                    goto LABEL_5083;
                  }
                }
                if ( (_DWORD)v3608 != 32 || (v3610 = v3600[10], (v3610 & 2) != 0) || (v3610 & 1) == 0 )
                {
                  if ( (_DWORD)v3608 == 7 )
                  {
                    v3593 += v3600[6];
                  }
                  else if ( (_DWORD)v3608 == 33 )
                  {
                    v3611 = (unsigned int)(((*((_QWORD *)v3600 + 4) & 0xFFFLL)
                                          + 4095
                                          + (unsigned __int64)(unsigned int)v3600[10]) >> 12);
                    v3612 = v3600 + 12;
                    v3613 = &v3612[5 * v3611];
                    while ( v3612 != v3613 )
                    {
                      v3614 = v3593++;
                      if ( *((char *)v3612 + 15) < 0 )
                        v3593 = v3614;
                      v3612 += 5;
                    }
                  }
                  goto LABEL_5081;
                }
LABEL_5072:
                ++v3593;
                goto LABEL_5081;
              }
LABEL_5083:
              v3615 = __rdtsc();
              v3616 = (__ROR8__(v3615, 3) ^ v3615) * (unsigned __int128)0x7010008004002001uLL;
              v4237 = *((_QWORD *)&v3616 + 1);
              v3617 = ((unsigned __int64)v3616 ^ *((_QWORD *)&v3616 + 1)) % 0xB;
              if ( (unsigned int)v3617 > 5 )
              {
                v3621 = v3617 - 6;
                if ( v3621 )
                {
                  v3622 = v3621 - 1;
                  if ( v3622 )
                  {
                    v3623 = v3622 - 1;
                    if ( v3623 )
                    {
                      if ( v3623 == 1 )
                      {
                        v3903[18] = -1333354875;
                        v3620 = __ROR4__(-1333354868, 33);
                      }
                      else
                      {
                        v3624 = __rdtsc();
                        v3625 = __ROR8__(v3624, 3);
                        v4238 = ((v3625 ^ v3624) * (unsigned __int128)0x7010008004002001uLL) >> 64;
                        v3626 = v4238 ^ (67117057 * (v3625 ^ v3624));
                        v3620 = ((((((v3626 % 0x1A + 97) << 8) | ((v3626 >> 5)
                                                                - 26
                                                                * ((unsigned int)((1321528399
                                                                                 * (unsigned __int64)(v3626 >> 5)) >> 32) >> 3)
                                                                + 65)) << 8) | ((v3626 >> 10) % 0x1A + 97)) << 8) | ((v3626 >> 15) % 0x1A + 65);
                      }
                    }
                    else
                    {
                      v3903[19] = 1684422978;
                      v3620 = __ROR4__(1684422978, 8);
                    }
                  }
                  else
                  {
                    v3903[20] = -2100910376;
                    v3620 = __ROL4__(-2100910376, 7);
                  }
                }
                else
                {
                  v3903[21] = 1314342514;
                  v3620 = __ROR4__(1314342516, 24);
                }
              }
              else if ( (_DWORD)v3617 == 5 )
              {
                v3903[17] = 680282605;
                v3620 = __ROR4__(680282605, 5);
              }
              else if ( (_DWORD)v3617 )
              {
                v3618 = v3617 - 1;
                if ( v3618 )
                {
                  v3619 = v3618 - 1;
                  if ( v3619 )
                  {
                    if ( v3619 == 1 )
                    {
                      v3903[13] = -1474152136;
                      v3620 = __ROR4__(-1474152133, 15);
                    }
                    else
                    {
                      v3903[12] = 1728537748;
                      v3620 = __ROL4__(1728537748, 4);
                    }
                  }
                  else
                  {
                    v3903[14] = -2051698419;
                    v3620 = __ROR4__(-2051698419, 2);
                  }
                }
                else
                {
                  v3903[15] = -1297272415;
                  v3620 = __ROL4__(-1297272415, 1);
                }
              }
              else
              {
                v3903[16] = -795291432;
                v3620 = __ROR4__(-795291432, 6);
              }
              v3627 = *(__int64 (__fastcall **)(__int64, ULONG_PTR, _QWORD, __int64))(v3354 + 248);
              v3840 = (unsigned __int64)v3593 << 6;
              v3628 = (_QWORD *)v3627(512LL, v3840, v3620, v3580);
              v3629 = v3628;
              if ( !v3628 )
                return 0;
              memset(v3628, 0, (unsigned __int64)v3593 << 6);
              v3630 = __rdtsc();
              v3631 = (__ROR8__(v3630, 3) ^ v3630) * (unsigned __int128)0x7010008004002001uLL;
              v4239 = *((_QWORD *)&v3631 + 1);
              v4240[0] = v3631 ^ *((_QWORD *)&v3631 + 1) ^ (unsigned int)ExGenRandom(0LL);
              v3632 = __rdtsc();
              v3633 = (__ROR8__(v3632, 3) ^ v3632) * (unsigned __int128)0x7010008004002001uLL;
              v4240[1] = *((_QWORD *)&v3633 + 1);
              v3634 = (ULONG_PTR)(v3629 + 1);
              v3843 = (ULONG_PTR)(v3629 + 1);
              v3903[22] = ((unsigned __int64)v3633 ^ *((_QWORD *)&v3633 + 1) ^ (unsigned int)ExGenRandom(0LL)) % 0x3F
                        + 1;
              v3629[1] = 0LL;
              v3629[2] = 0LL;
              *((_WORD *)v3629 + 12) = 4096;
              v3629[4] = v4240[0];
              *((_DWORD *)v3629 + 10) = v3903[22];
              *((_DWORD *)v3629 + 11) = 0;
              if ( (unsigned int)MmStrongCodeGuaranteesEnforced() && (unsigned int)pg_unknown16(v3635, 0LL) )
                *((_DWORD *)v3629 + 11) |= 1u;
              v3636 = 1;
              v4267 = 0LL;
              v3637 = v4268;
              v3638 = 4;
              do
              {
                *v3637++ = 0;
                --v3638;
              }
              while ( v3638 );
              v3904 = 0;
              i165 = 0LL;
              v3640 = 0LL;
              v3848 = 0LL;
              v3641 = 0;
              Timer = 0LL;
              LODWORD(Src) = 0;
              LODWORD(v3834) = 0;
              if ( *(_DWORD *)(v3354 + 2060) )
              {
                while ( 1 )
                {
                  v3642 = v3354;
                  v3643 = 0;
                  if ( *(_QWORD *)(v3354 + 2680) )
                    v3642 = *(_QWORD *)(v3354 + 2680);
                  v3644 = v3642 + *(unsigned int *)(v3642 + 2056);
                  if ( (_DWORD)v4267 && HIDWORD(v4267) <= v3641 )
                  {
                    v3643 = HIDWORD(v4267);
                    v3644 = v3642 + v4268[0];
                  }
                  if ( v3643 != v3641 )
                  {
                    v3645 = v3641 - v3643;
                    v3643 = v3641;
                    while ( 1 )
                    {
                      v3646 = *(_DWORD *)v3644;
                      if ( *(int *)v3644 > 12 )
                        break;
                      if ( v3646 == 12 )
                        goto LABEL_5132;
                      v3647 = v3646 - 1;
                      if ( !v3647 )
                        goto LABEL_5132;
                      v3648 = v3647 - 6;
                      if ( v3648 )
                      {
                        v3649 = v3648 - 1;
                        if ( !v3649 )
                        {
                          v3651 = *(unsigned __int16 *)(v3644 + 32);
LABEL_5137:
                          v3650 = (v3651 + 55) & 0xFFFFFFF8;
                          goto LABEL_5138;
                        }
                        if ( v3649 != 2 )
                          goto LABEL_5134;
                        v3650 = (unsigned int)(16 * (*(_DWORD *)(v3644 + 28) + 3));
                      }
                      else
                      {
                        v3650 = (unsigned int)(24 * (*(_DWORD *)(v3644 + 24) + 2));
                      }
LABEL_5138:
                      v3644 += v3650;
                      if ( !--v3645 )
                      {
                        v3354 = v3839;
                        i165 = v3848;
                        goto LABEL_5140;
                      }
                    }
                    if ( v3646 == 28 )
                    {
                      v3651 = *(unsigned __int16 *)(v3644 + 40);
                      goto LABEL_5137;
                    }
                    if ( v3646 == 30 )
                    {
                      v3650 = (((*(_DWORD *)(v3644 + 36) != 0 ? *(_DWORD *)(v3644 + 36) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
                            + 24 * (*(unsigned __int16 *)(v3644 + 40) + 2);
                      goto LABEL_5138;
                    }
                    if ( v3646 <= 32 )
                    {
LABEL_5134:
                      v3650 = 48LL;
                      goto LABEL_5138;
                    }
                    if ( v3646 <= 34 )
                    {
                      v3650 = 20
                            * (unsigned int)(((*(_DWORD *)(v3644 + 32) & 0xFFF)
                                            + (unsigned __int64)*(unsigned int *)(v3644 + 40)
                                            + 4095) >> 12)
                            + 48;
                      goto LABEL_5138;
                    }
                    if ( v3646 != 43 )
                      goto LABEL_5134;
LABEL_5132:
                    v3650 = 4 * (*(_DWORD *)(v3644 + 16) / 0xCu) + 48;
                    goto LABEL_5138;
                  }
LABEL_5140:
                  LODWORD(v4267) = 1;
                  HIDWORD(v4267) = v3643;
                  v4268[0] = v3644 - v3642;
                  v3652 = *(_DWORD *)v3644;
                  if ( (unsigned int)(*(_DWORD *)v3644 - 2) <= 1 )
                  {
                    v3706 = (unsigned __int64)v3636 << 6;
                    *(_QWORD *)((char *)v3629 + v3706 + 8) = *(_QWORD *)(v3644 + 8);
                    *(_QWORD *)((char *)v3629 + v3706 + 16) = *(unsigned int *)(v3644 + 16);
                    *(_WORD *)((char *)v3629 + v3706 + 24) = 4101 - (*(_DWORD *)v3644 != 3);
                    *(_DWORD *)((char *)v3629 + v3706 + 48) = *(_DWORD *)(v3644 + 40);
                    *(_WORD *)((char *)v3629 + v3706 + 52) = *(_WORD *)(v3644 + 44);
                    pg_unknown12(
                      v3354,
                      *(_QWORD *)((char *)v3629 + v3706 + 8),
                      *(unsigned int *)((char *)v3629 + v3706 + 16),
                      (char *)v3629 + v3706 + 32);
                    v3640 = Timer;
                    ++v3636;
                    if ( *(_DWORD *)v3644 == 2 )
                    {
                      v3707 = (unsigned __int64)v3636++ << 6;
                      *(_QWORD *)((char *)v3629 + v3707 + 8) = 0LL;
                      *(_QWORD *)((char *)v3629 + v3707 + 16) = 0LL;
                      *(_WORD *)((char *)v3629 + v3707 + 24) = 4107;
                      *(_DWORD *)((char *)v3629 + v3707 + 32) = *(_DWORD *)(v3644 + 40);
                    }
                    goto LABEL_5218;
                  }
                  if ( v3652 == 9 )
                  {
                    v3653 = (unsigned __int64)v3636 << 6;
                    *(_QWORD *)((char *)v3629 + v3653 + 8) = *(_QWORD *)(v3644 + 8);
                    *(_QWORD *)((char *)v3629 + v3653 + 16) = *(unsigned int *)(v3644 + 16);
                    *(_WORD *)((char *)v3629 + v3653 + 24) = 4097;
                    pg_unknown12(
                      v3354,
                      *(_QWORD *)((char *)v3629 + v3653 + 8),
                      *(unsigned int *)((char *)v3629 + v3653 + 16),
                      (char *)v3629 + v3653 + 32);
                    ++v3636;
LABEL_5217:
                    v3640 = Timer;
                    goto LABEL_5218;
                  }
                  if ( v3652 == 32 )
                  {
                    v3654 = *(_DWORD *)(v3644 + 40);
                    v3655 = 2LL;
                    if ( (v3654 & 2) == 0 && (v3654 & 1) != 0 )
                      break;
                  }
                  switch ( v3652 )
                  {
                    case 7:
                      v3667 = (_QWORD *)(v3644 + 48);
                      v3668 = 0;
                      if ( *(_DWORD *)(v3644 + 24) )
                      {
                        do
                        {
                          v3669 = (unsigned __int64)v3636++ << 6;
                          ++v3668;
                          *(_QWORD *)((char *)v3629 + v3669 + 8) = 0LL;
                          *(_QWORD *)((char *)v3629 + v3669 + 16) = 0LL;
                          *(_WORD *)((char *)v3629 + v3669 + 24) = 4099;
                          *(_DWORD *)((char *)v3629 + v3669 + 52) = *(_DWORD *)(v3644 + 28);
                          v3670 = *v3667;
                          v3667 += 3;
                          *(_QWORD *)((char *)v3629 + v3669 + 32) = v3670;
                          *(_QWORD *)((char *)v3629 + v3669 + 40) = *(v3667 - 2);
                          *(_DWORD *)((char *)v3629 + v3669 + 48) = *((_DWORD *)v3667 - 2);
                        }
                        while ( v3668 < *(_DWORD *)(v3644 + 24) );
                        v3354 = v3839;
                      }
                      break;
                    case 21:
                    case 38:
                      v3704 = 4108;
                      v3705 = (unsigned __int64)v3636 << 6;
                      *(_QWORD *)((char *)v3629 + v3705 + 8) = 0LL;
                      *(_QWORD *)((char *)v3629 + v3705 + 16) = 0LL;
                      if ( *(_DWORD *)v3644 != 38 )
                        v3704 = 4102;
                      *(_WORD *)((char *)v3629 + v3705 + 24) = v3704;
                      *(_DWORD *)((char *)v3629 + v3705 + 52) = *(_DWORD *)(v3644 + 44);
                      *(_QWORD *)((char *)v3629 + v3705 + 32) = *(_QWORD *)(v3644 + 24);
                      *(_QWORD *)((char *)v3629 + v3705 + 40) = *(_QWORD *)(v3644 + 32);
                      *(_DWORD *)((char *)v3629 + v3705 + 48) = *(_DWORD *)(v3644 + 40);
                      goto LABEL_5168;
                    case 33:
                      i165 = *(_QWORD *)(v3644 + 32);
                      v3671 = *(unsigned int *)(v3644 + 40);
                      v3848 = i165;
                      v3842 = ((i165 & 0xFFF) + 4095 + v3671) >> 12;
                      v3849 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(v3354 + 504))(i165, 0LL);
                      v3672 = *(unsigned int *)(v3644 + 40);
                      v3673 = 0;
                      v3833 = 0LL;
                      Timer = (PKTIMER)(i165 + v3672);
                      _disable();
                      v3674 = *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr + *(_QWORD *)(v3354 + 1608));
                      _enable();
                      (*(void (__fastcall **)(__int64))(v3354 + 360))(v3674);
                      LOBYTE(v3675) = 1;
                      (*(void (__fastcall **)(_QWORD, __int64))(v3354 + 232))(*(_QWORD *)(v3354 + 1336), v3675);
                      v3677 = (PVOID *)PsLoadedModuleList;
                      if ( PsLoadedModuleList != &PsLoadedModuleList )
                      {
                        v3678 = *(_QWORD *)(v3354 + 1864);
                        while ( 1 )
                        {
                          v3679 = (char *)v3677 - v3678;
                          v3680 = *(unsigned __int64 *)((char *)v3677 + *(_QWORD *)(v3354 + 1872) - v3678);
                          v3676 = v3680 + *(unsigned int *)((char *)v3677 + *(_QWORD *)(v3354 + 1880) - v3678);
                          if ( i165 >= v3680 && i165 < v3676 )
                            break;
                          v3677 = (PVOID *)*v3677;
                          if ( v3677 == &PsLoadedModuleList )
                            goto LABEL_5189;
                        }
                        v3681 = v3905;
                        v3673 = 1;
                        v3682 = 4;
                        do
                        {
                          *v3681++ = 0;
                          --v3682;
                        }
                        while ( v3682 );
                        v3683 = *(_QWORD *)(v3354 + 1888);
                        v3684 = 0;
                        do
                        {
                          if ( v3684 >= *(unsigned __int16 *)&v3679[v3683] >> 1 )
                            break;
                          v3685 = v3684++;
                          v3905[v3685] = *(_BYTE *)(*(_QWORD *)&v3679[v3683 + 8] + 2 * v3685);
                        }
                        while ( v3684 < 4 );
                        LODWORD(v3676) = 4;
                        v3686 = 0LL;
                        do
                        {
                          v3905[v3686 - 4] = v3905[v3686];
                          ++v3686;
                          v893 = (_DWORD)v3676 == 1;
                          v3676 = (unsigned int)(v3676 - 1);
                        }
                        while ( !v893 );
                      }
LABEL_5189:
                      (*(void (__fastcall **)(_QWORD, unsigned __int64))(v3354 + 280))(*(_QWORD *)(v3354 + 1336), v3676);
                      (*(void (**)(void))(v3354 + 368))();
                      v3243 = v3673 != 0;
                      v3687 = v3644 + 48;
                      v3904 = v3243 ? v3904 : 0;
                      v3688 = v3644 + 48 + 20LL * (unsigned int)v3842;
                      v3842 = v3688;
                      if ( v3644 + 48 != v3688 )
                      {
                        v3689 = v3833;
                        v3690 = -(__int64)i165;
                        v3836 = i165;
                        v3691 = i165;
                        do
                        {
                          if ( *(char *)(v3687 + 15) >= 0 )
                          {
                            if ( *(int *)(v3687 + 16) < 0 )
                              WORD1(v3629[8 * (unsigned __int64)v3636 + 3]) |= 1u;
                            v3692 = (unsigned __int64)v3636 << 6;
                            v3693 = 16;
                            v3694 = (__int64)v3629 + v3692;
                            *(_QWORD *)(v3694 + 8) = v3691;
                            v3695 = (_QWORD *)((char *)v3629 + v3692 + 32);
                            *(_QWORD *)(v3694 + 16) = 4096LL;
                            v3696 = 2LL;
                            *(_WORD *)(v3694 + 24) = 4098;
                            *(_QWORD *)(v3694 + 48) = i165;
                            v3697 = (char *)v3687;
                            *(_DWORD *)(v3694 + 56) = (__int64)(v3691 + v3690) / 4096;
                            do
                            {
                              v3693 -= 8;
                              *v3695 = *(_QWORD *)v3697;
                              v3697 += 8;
                              ++v3695;
                              --v3696;
                            }
                            while ( v3696 );
                            for ( i165 = v3848; v3693; --v3693 )
                            {
                              v3698 = *v3697++;
                              *(_BYTE *)v3695 = v3698;
                              v3695 = (_QWORD *)((char *)v3695 + 1);
                            }
                            v3699 = 4;
                            v3700 = &v3904;
                            do
                            {
                              *((_BYTE *)v3629 + v3692 - (_QWORD)&v3904 + (_QWORD)v3700 + 60) = *(_BYTE *)v3700;
                              v3700 = (int *)((char *)v3700 + 1);
                              --v3699;
                            }
                            while ( v3699 );
                            v3701 = (unsigned int)(*(_DWORD *)(v3694 + 56) << 12);
                            if ( !v3689 || (unsigned int)v3701 >= (unsigned int)Src )
                            {
                              v3702 = RtlSectionTableFromVirtualAddress(v3849, i165, v3701);
                              v3691 = v3836;
                              v3689 = v3702;
                              if ( v3702 )
                                v3703 = *(_DWORD *)(v3702 + 8) + *(_DWORD *)(v3702 + 12);
                              else
                                v3703 = *(_DWORD *)(*(unsigned __int16 *)(v3849 + 20) + v3849 + 36);
                              LODWORD(Src) = v3703;
                            }
                            *(_BYTE *)(v3694 + 47) &= ~0x80u;
                            if ( v3689 && (*(_DWORD *)(v3689 + 36) & 0x20000000) != 0 )
                              *(_BYTE *)(v3694 + 47) |= 0x80u;
                            v3688 = v3842;
                            ++v3636;
                          }
                          v3691 += 4096LL;
                          v3687 += 20LL;
                          v3836 = v3691;
                        }
                        while ( v3687 != v3688 );
                        v3354 = v3839;
                        v3848 = i165;
                      }
                      goto LABEL_5217;
                  }
LABEL_5218:
                  v3641 = v3834 + 1;
                  LODWORD(v3834) = v3641;
                  if ( v3641 >= *(_DWORD *)(v3354 + 2060) )
                  {
                    v3593 = v4474;
                    v3634 = (ULONG_PTR)(v3629 + 1);
                    goto LABEL_5220;
                  }
                }
                LODWORD(v3656) = 16;
                v3657 = (unsigned __int64)v3636 << 6;
                v3658 = (char *)(v3644 + 24);
                v3659 = (_QWORD *)((char *)v3629 + v3657 + 32);
                *(_QWORD *)((char *)v3629 + v3657 + 8) = *(_QWORD *)(v3644 + 8);
                *(_QWORD *)((char *)v3629 + v3657 + 16) = *(unsigned int *)(v3644 + 16);
                *(_WORD *)((char *)v3629 + v3657 + 24) = 4097;
                do
                {
                  v3656 = (unsigned int)(v3656 - 8);
                  *v3659 = *(_QWORD *)v3658;
                  v3658 += 8;
                  ++v3659;
                  --v3655;
                }
                while ( v3655 );
                if ( (_DWORD)v3656 )
                {
                  do
                  {
                    v3660 = *v3658++;
                    *(_BYTE *)v3659 = v3660;
                    v3659 = (_QWORD *)((char *)v3659 + 1);
                    v893 = (_DWORD)v3656 == 1;
                    v3656 = (unsigned int)(v3656 - 1);
                  }
                  while ( !v893 );
                }
                v3661 = *(_QWORD *)(v3644 + 8);
                if ( v3661 )
                {
                  if ( v3661 < i165 || v3661 >= (unsigned __int64)v3640 )
                  {
                    v3662 = (*(__int64 (__fastcall **)(unsigned __int64, char *, __int64))(v3354 + 520))(
                              v3661,
                              v4241,
                              v3656);
                    v3640 = Timer;
                    i165 = v3662;
                  }
                }
                else
                {
                  i165 = 0LL;
                }
                if ( (*(_DWORD *)(v3644 + 40) & 4) != 0 )
                {
                  *(_WORD *)((char *)v3629 + v3657 + 24) = 4106;
                  *(_QWORD *)((char *)v3629 + v3657 + 48) = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(v3644 + 8)).QuadPart >> 12;
                }
                else
                {
                  if ( i165 )
                  {
                    v3663 = (struct _KTIMER *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD *, __int64))(v3354 + 504))(
                                                i165,
                                                v3659,
                                                v3656);
                    v3664 = (unsigned int)(*(_DWORD *)(v3644 + 8) - i165);
                    Timer = v3663;
                    v3665 = RtlSectionTableFromVirtualAddress(v3663, i165, v3664);
                    if ( v3665 && (*(_DWORD *)(v3665 + 36) & 0x20000000) != 0 )
                      *((_BYTE *)v3629 + v3657 + 47) |= 0x80u;
                    v3848 = i165;
                    v3640 = (struct _KTIMER *)(i165 + LODWORD(Timer[1].Header.WaitListHead.Blink));
                    Timer = v3640;
                    goto LABEL_5168;
                  }
                  if ( (unsigned __int64)(*(_QWORD *)(v3644 + 8) + 0x88000000000LL) <= 0xFFF
                    || (v3666 = *(_DWORD *)(v3644 + 16)) == 0 )
                  {
LABEL_5167:
                    i165 = v3848;
LABEL_5168:
                    ++v3636;
                    goto LABEL_5218;
                  }
                  if ( v3666 > 0x1000 )
                  {
                    v3823 = *(unsigned int *)(v3644 + 16);
                    v3824 = *(_QWORD *)(v3644 + 8);
                    v3906 = -805294751;
                    KeBugCheckEx(__ROR4__(-805306349, 92), 0xDuLL, v3354, v3824, v3823);
                  }
                  *(_WORD *)((char *)v3629 + v3657 + 24) = 4105;
                  *(_QWORD *)((char *)v3629 + v3657 + 48) = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(v3644 + 8)).QuadPart >> 12;
                  *(_QWORD *)((char *)v3629 + v3657 + 56) = (unsigned __int64)MmGetPhysicalAddress((PVOID)(*(_QWORD *)(v3644 + 8) + (unsigned int)(*(_DWORD *)(v3644 + 16) - 1))).QuadPart >> 12;
                }
                v3640 = Timer;
                goto LABEL_5167;
              }
LABEL_5220:
              _InterlockedOr(v3831, 0);
              *(_QWORD *)&MaxDataSize = v3354;
              v3708 = (unsigned __int64)v3636 << 6;
              *(_QWORD *)((char *)v3629 + v3708 + 8) = &MaxDataSize;
              *(_QWORD *)((char *)v3629 + v3708 + 16) = 8LL;
              *(_WORD *)((char *)v3629 + v3708 + 24) = 4097;
              pg_unknown12(
                v3354,
                *(_QWORD *)((char *)v3629 + v3708 + 8),
                *(unsigned int *)((char *)v3629 + v3708 + 16),
                (char *)v3629 + v3708 + 32);
              v3709 = v3636 + 1;
              v3710 = (unsigned __int64)v3709 << 6;
              *(_QWORD *)((char *)v3629 + v3710 + 8) = *(_QWORD *)&MaxDataSize;
              *(_QWORD *)((char *)v3629 + v3710 + 16) = *(_DWORD *)(v3354 + 2020) & 0xFFFFF000;
              *(_WORD *)((char *)v3629 + v3710 + 24) = 4097;
              pg_unknown12(
                v3354,
                *(_QWORD *)((char *)v3629 + v3710 + 8),
                *(unsigned int *)((char *)v3629 + v3710 + 16),
                (char *)v3629 + v3710 + 32);
              v3711 = (unsigned __int64)(v3709 + 1) << 6;
              *(_QWORD *)((char *)v3629 + v3711 + 8) = &qword_140CFC3D0;
              *(_QWORD *)((char *)v3629 + v3711 + 16) = 8LL;
              *(_WORD *)((char *)v3629 + v3711 + 24) = 4097;
              pg_unknown12(
                v3354,
                *(_QWORD *)((char *)v3629 + v3711 + 8),
                *(unsigned int *)((char *)v3629 + v3711 + 16),
                (char *)v3629 + v3711 + 32);
              if ( v3593 )
              {
                v3713 = v3593;
                do
                {
                  v3714 = *(const char **)v3634;
                  v3715 = *(unsigned int *)(v3634 + 8);
                  v3716 = *(const char **)v3634;
                  v3717 = *(_QWORD *)v3634 + v3715;
                  if ( *(_QWORD *)v3634 < v3717 )
                  {
                    do
                    {
                      _mm_prefetch(v3716, 0);
                      v3716 += 64;
                    }
                    while ( (unsigned __int64)v3716 < v3717 );
                  }
                  v3718 = v4240[0];
                  do
                  {
                    v3712 = ((unsigned int)v3714 & 0xFFFFF000) + 4096 - (_DWORD)v3714;
                    if ( (unsigned int)v3715 < v3712 )
                      v3712 = v3715;
                    LODWORD(v3715) = v3715 - v3712;
                    if ( v3712 >= 8 )
                    {
                      v3719 = (unsigned __int64)v3712 >> 3;
                      do
                      {
                        v3712 -= 8;
                        v3718 = __ROR8__(*(_QWORD *)v3714 ^ v3718, v3903[22]);
                        v3714 += 8;
                        --v3719;
                      }
                      while ( v3719 );
                    }
                    for ( ; v3712; --v3712 )
                    {
                      v3720 = *(unsigned __int8 *)v3714++;
                      v3718 = __ROR8__(v3720 ^ v3718, v3903[22]);
                    }
                  }
                  while ( (_DWORD)v3715 );
                  v3721 = v3843;
                  *(_QWORD *)(v3843 - 8) = v3718;
                  v3634 = v3721 + 64;
                  v3843 = v3721 + 64;
                  --v3713;
                }
                while ( v3713 );
                v3354 = v3839;
              }
              if ( (v3888 & 8) != 0 )
              {
                ExFreePoolWithTag(v3629, v3712);
                v3560 = 0LL;
              }
              else
              {
                v3722 = KiConnectSwInterrupt(v3629, v3593);
                memset(v3629, 0, v3840);
                memset(v4240, 0, 8uLL);
                memset(&v3903[22], 0, sizeof(_DWORD));
                ExFreePoolWithTag(v3629, v3723);
                v3560 = 0LL;
                if ( v3722 < 0 )
                  return 0;
              }
            }
            if ( v3838 )
            {
              v4444(v3838);
              v3560 = 0LL;
            }
            v3724 = v4456;
            v3725 = __rdtsc();
            v3726 = __ROR8__(v3725, 3) ^ v3725;
            v3727 = v3726 * (unsigned __int128)0x7010008004002001uLL;
            v4242 = *((_QWORD *)&v3727 + 1);
            v3728 = *((_QWORD *)&v3727 + 1) ^ (0x7010008004002001LL * v3726);
            if ( (v4465 & 0x10000000) != 0 )
            {
              v3729 = __rdtsc();
              v3730 = (__ROR8__(v3729, 3) ^ v3729) * (unsigned __int128)0x7010008004002001uLL;
              v4243 = *((_QWORD *)&v3730 + 1);
              v3724 = (_DWORD *)(v4450 + 16 * ((v3730 ^ *((_QWORD *)&v3730 + 1)) & 0xF));
            }
            v3731 = 40;
            v3732 = &v4458;
            v3733 = &v4332;
            v3734 = 5LL;
            do
            {
              v3731 -= 8;
              *(_QWORD *)v3733 = *(_QWORD *)v3732;
              v3732 += 2;
              v3733 += 2;
              --v3734;
            }
            while ( v3734 );
            for ( ; v3731; --v3731 )
            {
              v3735 = *(_BYTE *)v3732;
              v3732 = (int *)((char *)v3732 + 1);
              *(_BYTE *)v3733 = v3735;
              v3733 = (int *)((char *)v3733 + 1);
            }
            if ( (v4465 & 0x8000) != 0 || !v4458 )
            {
              if ( (v4465 & 0x40000000) != 0 )
                goto LABEL_5323;
              v3736 = v3354 ^ v3728;
              v3737 = (unsigned __int8)(v4463 - 1);
              v3738 = __rdtsc();
              v3739 = (__ROR8__(v3738, 3) ^ v3738) * (unsigned __int128)0x7010008004002001uLL;
              v4244 = *((_QWORD *)&v3739 + 1);
              v3740 = v3737 + (*((_QWORD *)&v3739 + 1) ^ (unsigned __int64)v3739) % (unsigned int)(63 - v3737);
              do
              {
                v3741 = __rdtsc();
                v3742 = __ROR8__(v3741, 3) ^ v3741;
                v4245 = (v3742 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3743 = v3737 + (v4245 ^ (0x7010008004002001LL * v3742)) % (unsigned int)(63 - v3737);
              }
              while ( v3743 == v3740 );
              v3744 = v4453;
              v3560 = 0LL;
              v3745 = v3740;
              i166 = v4454;
              v3747 = (v3736 | (1LL << v3745)) & ~(1LL << v3743);
              v4474 = (__int64)v4454;
              if ( v4464 == 3 && (v3748 = v3841) != 0 )
              {
                v3749 = v4448;
                *v4454 = 19;
                i166[1] = 1;
                *((_WORD *)i166 + 1) = 0;
                *((_QWORD *)i166 + 3) = v3749;
                *((_QWORD *)i166 + 4) = v3748;
                *((_QWORD *)i166 + 7) = 0LL;
                *((_QWORD *)i166 + 2) = 0LL;
                *((_QWORD *)i166 + 5) = v3747;
                v4447(*(_QWORD *)(v3748 + 8), *(unsigned int *)(v3748 + 16), *(_QWORD *)v3748);
                v3750 = *(_QWORD *)v3748;
                v3751 = v3748 ^ __ROL8__(v3748, 17);
                v4246 = (v3751 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3752 = v3751 ^ v4246;
                v3753 = (_QWORD *)(v3748 + 24);
                v3754 = (0x7010008004002001LL * v3751) ^ v4246;
                v3560 = 0LL;
                v3755 = 4;
                do
                {
                  *v3753 ^= v3754;
                  v3754 = __ROL8__(v3754, v3755);
                  --v3753;
                  --v3755;
                }
                while ( v3755 );
                if ( (v3752 & 0xFu) < 7 )
                {
                  v3756 = 6;
                  v3757 = v3750 ^ __ROL8__(v3750, 17);
                  v4247 = ((unsigned __int64)v3757 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v3758 = ((0x7010008004002001LL * v3757) ^ v4247) + v3754;
                  v3759 = (_QWORD *)(v3750 + 40);
                  v3760 = (unsigned int)*(__int16 *)(v3750 + 8);
                  do
                  {
                    *v3759 ^= v3758;
                    v3758 = __ROL8__(v3758, v3756);
                    --v3759;
                    --v3756;
                  }
                  while ( v3756 );
                  v3761 = (unsigned __int64)(v3760 - 48) >> 3;
                  if ( (_DWORD)v3761 )
                  {
                    v3762 = (_QWORD *)(v3750 + 8 * ((int)v3761 + 5LL));
                    do
                    {
                      *v3762 ^= v3758;
                      v3758 = __ROL8__(v3758, v3761);
                      --v3762;
                      LODWORD(v3761) = v3761 - 1;
                    }
                    while ( (_DWORD)v3761 );
                  }
                }
              }
              else
              {
                *v4454 = 19;
                i166[1] = 1;
                *((_WORD *)i166 + 1) = 0;
                *((_QWORD *)i166 + 3) = v3724;
                *((_QWORD *)i166 + 4) = v3747;
                *((_QWORD *)i166 + 7) = 0LL;
                *((_QWORD *)i166 + 2) = 0LL;
              }
              *((_QWORD *)i166 + 8) = v3728;
              if ( (v4465 & 0x100) != 0 )
              {
                v3763 = (unsigned __int64)(v3724 - 18);
                *((_QWORD *)v3724 - 1) = i166;
                v3764 = 25LL;
                v3765 = __rdtsc();
                v3766 = __ROR8__(v3765, 3) ^ v3765;
                v4248 = (v3766 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                v3767 = (0x7010008004002001LL * v3766) ^ v4248;
                v3768 = v3724;
                do
                {
                  *v3768++ ^= v3767;
                  --v3764;
                }
                while ( v3764 );
                *v3724 = 1213280584;
                *(_QWORD *)(v3763 + 32) = v3767;
              }
              else
              {
                v3763 = (unsigned __int64)i166;
              }
              if ( v4470 )
              {
                v3769 = *(_QWORD *)(v4470 + 32);
                v3770 = v4449 ^ ((v3769 ^ ((v3769 ^ 0xE0E20100uLL) >> 4)) >> 4);
                v3771 = v3770;
                v3772 = (v4449 ^ ((v3769 ^ ((v3769 ^ 0xE0E20100uLL) >> 4)) >> 4)) & 0xF;
                if ( !v3772 )
                  v3772 = 1;
                do
                {
                  v3773 = (unsigned __int64 *)(v3769 + (v3770 & 0xF));
                  v3769 = *v3773;
                  v3770 ^= (*v3773 ^ ((*v3773 ^ 0x1DFE00) >> 4)) >> 4;
                  --v3772;
                }
                while ( v3772 );
                v3774 = v3771 & 0x1000;
                v3775 = v3771 ^ v3763;
                v3560 = 0LL;
                if ( !v3774 )
                  v3775 = v3763;
                *v3773 = v3775;
                v3763 = v4470;
              }
              _InterlockedOr(v3831, 0);
              if ( v4457 )
              {
                switch ( v4457 )
                {
                  case 1:
                    *(_QWORD *)(v4451 + v4455) = v3763;
                    break;
                  case 2:
                    *(_QWORD *)(v4455 + 128) = v3763;
                    break;
                  case 3:
                    v3788 = v4466;
                    if ( *(_QWORD *)(v4452 + v4466) )
                    {
                      if ( !v4458 )
                      {
                        v4462 = *(_QWORD *)(v4452 + v4466);
                        v4460 = 0LL;
                        v4461 = 260LL;
                        v4459 = &v3831[0xE8E80FD6247233B2uLL];
                        v4458 = 1;
                        __b8(v4443, 0LL);
                        v3560 = 0LL;
                      }
                      v3789 = 5LL;
                      v3790 = &v4458;
                      v3791 = &v4332;
                      v3792 = 40;
                      do
                      {
                        v3792 -= 8;
                        *(_QWORD *)v3791 = *(_QWORD *)v3790;
                        v3790 += 2;
                        v3791 += 2;
                        --v3789;
                      }
                      while ( v3789 );
                      for ( i166 = (_BYTE *)v4474; v3792; --v3792 )
                      {
                        v3793 = *(_BYTE *)v3790;
                        v3790 = (int *)((char *)v3790 + 1);
                        *(_BYTE *)v3791 = v3793;
                        v3791 = (int *)((char *)v3791 + 1);
                      }
                    }
                    _InterlockedOr(v3831, 0);
                    *(_QWORD *)(v4452 + v3788) = i166;
                    break;
                  case 4:
                    v3779 = v4469;
                    v3780 = v4468;
                    v3781 = v4467;
                    v3782 = v4466;
                    *v4467 = 18;
                    v3781[2] = 88;
                    v3781[80] = 0;
                    *((_QWORD *)v3781 + 1) = v3782;
                    *((_QWORD *)v3781 + 4) = v3780;
                    *((_QWORD *)v3781 + 5) = 0LL;
                    *((_QWORD *)v3781 + 6) = v3779;
                    v3781[81] = 0;
                    *((_QWORD *)v3781 + 7) = 0LL;
                    v3781[82] = 0;
                    v3783 = v4446(v4467, i166, 0LL, 0LL);
                    v3560 = 0LL;
                    if ( !v3783 )
                    {
                      if ( !v4458 )
                      {
                        v4460 = 0LL;
                        v4461 = 260LL;
                        v4462 = v3782;
                        v4459 = &v3831[0xE8E80FD6247233B2uLL];
                        v4458 = 1;
                        __b8(v4443, 0LL);
                        v3560 = 0LL;
                      }
                      v3784 = &v4458;
                      v3785 = 40;
                      v3786 = &v4332;
                      do
                      {
                        v3785 -= 8;
                        *(_QWORD *)v3786 = *(_QWORD *)v3784;
                        v3784 += 2;
                        v3786 += 2;
                        --v4041;
                      }
                      while ( v4041 );
                      for ( ; v3785; --v3785 )
                      {
                        v3787 = *(_BYTE *)v3784;
                        v3784 = (int *)((char *)v3784 + 1);
                        *(_BYTE *)v3786 = v3787;
                        v3786 = (int *)((char *)v3786 + 1);
                      }
                    }
                    break;
                  default:
                    v3776 = (_DWORD *)v4466;
                    *(_QWORD *)(v4466 + 72) = v3763;
                    _InterlockedOr(v3831, 0);
                    v3777 = __rdtsc();
                    v3778 = (__ROR8__(v3777, 3) ^ v3777) * (unsigned __int128)0x7010008004002001uLL;
                    v4249 = *((_QWORD *)&v3778 + 1);
                    *v3776 = (__int64)(((unsigned __int64)v3778 ^ *((_QWORD *)&v3778 + 1)) % 0x5F5E100 + 1200000000)
                           / 10000000;
                    break;
                }
              }
              else
              {
                v3794 = __rdtsc();
                v3795 = (__ROR8__(v3794, 3) ^ v3794) * (unsigned __int128)0x7010008004002001uLL;
                v4250 = *((_QWORD *)&v3795 + 1);
                v3796 = -1200000000LL - ((unsigned __int64)v3795 ^ *((_QWORD *)&v3795 + 1)) % 0x5F5E100;
                *(_QWORD *)&v3795 = __rdtsc();
                v3797 = (__ROR8__(v3795, 3) ^ (unsigned __int64)v3795) * (unsigned __int128)0x7010008004002001uLL;
                v4251 = *((_QWORD *)&v3797 + 1);
                v4445(v3744, v3796, 0LL, ((unsigned __int64)v3797 ^ *((_QWORD *)&v3797 + 1)) % 0x2710, v3763);
                v3560 = 0LL;
              }
            }
            if ( v4332 && (v4465 & 0x8000) == 0 )
            {
              v3798 = v4335;
              v3799 = (int)v4336;
              v3800 = v4334;
              v4474 = v4335;
              HalExtensionList = v4336;
              v3839 = v4334;
              v3838 = v4333;
              v4252 = v4443;
              if ( KeGetCurrentIrql() < 2u )
              {
                KeGetCurrentIrql();
                __writecr8(2uLL);
              }
              CurrentPrcb = KeGetCurrentPrcb();
              v3802 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *((_QWORD *)v4252 + 199));
              v3803 = *(_QWORD *)((char *)&CurrentPrcb->MxCsr + *((_QWORD *)v4252 + 201));
              if ( !*((_BYTE *)&CurrentPrcb->MxCsr + *((_QWORD *)v4252 + 200))
                || (unsigned __int64)&v4252 > v3802
                || (unsigned __int64)&v4252 < v3802 - 24576 )
              {
                v3802 = *(_QWORD *)(v3803 + *((_QWORD *)v4252 + 207));
              }
              v3804 = v4252;
              if ( (*((_DWORD *)v4252 + 612) & 0x8000000) == 0 )
              {
                v3805 = __readcr0();
                __writecr0(v3805 & 0xFFFFFFFFFFFEFFFFuLL);
                v3806 = v4252 + 2728;
                v3807 = (unsigned __int64)&v4252[16 * *((unsigned int *)v4252 + 680) + 2728];
                v3808 = 0;
                v3809 = (_QWORD *)v3807;
                if ( *((_DWORD *)v4252 + 681) )
                {
                  do
                  {
                    *(_QWORD *)*v3809 = v3809[1];
                    v3810 = __readcr4();
                    if ( (v3810 & 0x20080) != 0 )
                    {
                      __writecr4(v3810 ^ 0x80);
                      __writecr4(v3810);
                    }
                    else
                    {
                      v3811 = __readcr3();
                      __writecr3(v3811);
                    }
                    v3809 += 2;
                    ++v3808;
                  }
                  while ( v3808 < *((_DWORD *)v3804 + 681) );
                }
                if ( (unsigned __int64)v3806 < v3807 )
                {
                  do
                  {
                    v3812 = *((unsigned int *)v3806 + 2);
                    v3813 = v3809;
                    v3814 = *(char **)v3806;
                    v3815 = v3812;
                    if ( (unsigned int)v3812 >= 8 )
                    {
                      v3560 = (unsigned __int64)(unsigned int)v3812 >> 3;
                      do
                      {
                        v3815 -= 8;
                        *(_QWORD *)v3814 = *v3813++;
                        v3814 += 8;
                        --v3560;
                      }
                      while ( v3560 );
                    }
                    if ( v3815 )
                    {
                      v3816 = v3814 - (char *)v3813;
                      do
                      {
                        *((_BYTE *)v3813 + v3816) = *(_BYTE *)v3813;
                        v3813 = (_QWORD *)((char *)v3813 + 1);
                        --v3815;
                      }
                      while ( v3815 );
                    }
                    v3809 = (_QWORD *)((char *)v3809 + v3812);
                    v3806 += 16;
                  }
                  while ( (unsigned __int64)v3806 < v3807 );
                  v3798 = v4474;
                }
                **((_BYTE **)v3804 + 67) = -61;
                __writecr0(v3805);
                v3799 = (int)HalExtensionList;
                v3800 = v3839;
              }
              v3825 = *((_DWORD *)v4252 + 586);
              if ( v3825 )
              {
                if ( KeGetCurrentIrql() < 2u )
                {
                  KeGetCurrentIrql();
                  __writecr8(2uLL);
                  v3825 = *((_DWORD *)v4252 + 586);
                }
                if ( v3825 )
                {
                  v3826 = v3825 - 1;
                  if ( v3826 )
                  {
                    v3827 = v3826 - 1;
                    if ( v3827 )
                    {
                      v3828 = v3827 - 1;
                      if ( v3828 )
                      {
                        v3829 = v3828 - 1;
                        if ( v3829 )
                        {
                          if ( v3829 == 1 )
                            _interlockedbittestandset(
                              *(volatile signed __int32 **)((char *)&KeGetCurrentPrcb()->MxCsr + *((_QWORD *)v4252 + 201)),
                              (*((_DWORD *)v4252 + 612) >> 10) & 0x1F);
                          else
                            _InterlockedOr64((volatile signed __int64 *)(*((_QWORD *)v4252 + 183) + 832LL), 1uLL);
                        }
                        else
                        {
                          _interlockedbittestandset(
                            *(volatile signed __int32 **)(*((_QWORD *)v4252 + 213)
                                                        + *(_QWORD *)((char *)&KeGetCurrentPrcb()->MxCsr
                                                                    + *((_QWORD *)v4252 + 201))
                                                        + *((_QWORD *)v4252 + 209)),
                            (*((_DWORD *)v4252 + 612) >> 10) & 0x1F);
                        }
                        goto LABEL_5391;
                      }
                      v3830 = (volatile signed __int32 *)*((_QWORD *)v4252 + 172);
                    }
                    else
                    {
                      v3830 = (volatile signed __int32 *)*((_QWORD *)v4252 + 171);
                    }
                  }
                  else
                  {
                    v3830 = (volatile signed __int32 *)*((_QWORD *)v4252 + 169);
                  }
                  _interlockedbittestandset64(v3830, 0LL);
                }
              }
LABEL_5391:
              *(_QWORD *)(v3803 + *((_QWORD *)v4252 + 210)) = v3560;
              *(_QWORD *)(v3803 + *((_QWORD *)v4252 + 212)) = v3560;
              SdbpCheckDll(265, v3838, v3800, v3799, v3798, *((_QWORD *)v4252 + 43), v3802);
              __debugbreak();
            }
LABEL_5323:
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            v3817 = (struct _KEVENT *)HalExtensionList;
            if ( HalExtensionList )
            {
              *((_QWORD *)HalExtensionList + 2) = v3908;
              _InterlockedOr(v3831, 0);
              KeSetEvent(v3817 + 1, 1, 0);
            }
            v3818 = v4443;
            v3819 = 340LL;
            v3820 = 2720;
            do
            {
              *(_QWORD *)v3818 = 0LL;
              v3820 -= 8;
              v3818 += 8;
              --v3819;
            }
            while ( v3819 );
            for ( ; v3820; --v3820 )
              *v3818++ = 0;
            _disable();
            if ( !(_BYTE)KdDebuggerNotPresent )
            {
              while ( 1 )
                ;
            }
            _enable();
            return 1;
          }
          v3303 = ExpTimerDpcRoutine;
          break;
      }
      break;
    }
    v3308 = 30712;
    goto LABEL_4763;
  }
  for ( i167 = 0; i167 < 0x10; ++i167 )
  {
    v510 = __rdtsc();
    v511 = (__ROR8__(v510, 3) ^ v510) * (unsigned __int128)0x7010008004002001uLL;
    v3970[4] = *((_QWORD *)&v511 + 1);
    v512 = ((unsigned __int64)v511 ^ *((_QWORD *)&v511 + 1)) % 0xB;
    if ( (unsigned int)v512 > 5 )
    {
      v516 = v512 - 6;
      if ( v516 )
      {
        v517 = v516 - 1;
        if ( v517 )
        {
          v518 = v517 - 1;
          if ( v518 )
          {
            if ( v518 == 1 )
            {
              v3886[7] = -1333354875;
              v515 = __ROR4__(-1333354868, 33);
            }
            else
            {
              v519 = __rdtsc();
              v520 = __ROR8__(v519, 3);
              v3971 = ((v520 ^ v519) * (unsigned __int128)0x7010008004002001uLL) >> 64;
              v521 = v3971 ^ (67117057 * (v520 ^ v519));
              v515 = ((((((v521 % 0x1A + 97) << 8) | ((v521 >> 5)
                                                    - 26
                                                    * ((unsigned int)((1321528399 * (unsigned __int64)(v521 >> 5)) >> 32) >> 3)
                                                    + 65)) << 8) | ((v521 >> 10) % 0x1A + 97)) << 8) | ((v521 >> 15) % 0x1A + 65);
            }
          }
          else
          {
            v3886[8] = 1684422978;
            v515 = __ROR4__(1684422978, 8);
          }
        }
        else
        {
          v3886[9] = -2100910376;
          v515 = __ROL4__(-2100910376, 7);
        }
      }
      else
      {
        v3886[10] = 1314342514;
        v515 = __ROR4__(1314342516, 24);
      }
    }
    else if ( (_DWORD)v512 == 5 )
    {
      v3886[6] = 680282605;
      v515 = __ROR4__(680282605, 5);
    }
    else if ( (_DWORD)v512 )
    {
      v513 = v512 - 1;
      if ( v513 )
      {
        v514 = v513 - 1;
        if ( v514 )
        {
          if ( v514 == 1 )
          {
            v3886[2] = -1474152136;
            v515 = __ROR4__(-1474152133, 15);
          }
          else
          {
            v3886[1] = 1728537748;
            v515 = __ROL4__(1728537748, 4);
          }
        }
        else
        {
          v3886[3] = -2051698419;
          v515 = __ROR4__(-2051698419, 2);
        }
      }
      else
      {
        v3886[4] = -1297272415;
        v515 = __ROL4__(-1297272415, 1);
      }
    }
    else
    {
      v3886[5] = -795291432;
      v515 = __ROR4__(-795291432, 6);
    }
    v522 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, v515);
    v4393[i167] = v522;
    if ( !v522 )
      return 0;
  }
  v523 = __rdtsc();
  v524 = 15;
  v525 = __ROR8__(v523, 3);
  v3972 = ((v525 ^ v523) * (unsigned __int128)0x7010008004002001uLL) >> 64;
  v526 = ((67117057 * ((unsigned int)v525 ^ (unsigned int)v523)) ^ (unsigned int)v3972) & 0xF;
  v527 = &v4393[v526];
  v528 = *v527;
  memmove(v527, &v4393[(unsigned int)(v526 + 1)], 8LL * (unsigned int)(15 - v526));
  v529 = (unsigned __int64)&qword_140C12F48 ^ ((v528 ^ ((v528 ^ 0xE0E20100uLL) >> 4)) >> 4);
  v530 = v529 & 0xF;
  if ( (v529 & 0xF) == 0 )
    v530 = 1;
  v531 = v528;
  if ( v530 )
  {
    do
    {
      v532 = (_QWORD *)(v531 + (v529 & 0xF));
      v533 = __rdtsc();
      v534 = (__ROR8__(v533, 3) ^ v533) * (unsigned __int128)0x7010008004002001uLL;
      v535 = v524--;
      v3973 = *((_QWORD *)&v534 + 1);
      DWORD2(v534) = (*((_QWORD *)&v534 + 1) ^ (unsigned __int64)v534) % v535;
      v536 = &v4393[DWORD2(v534)];
      v531 = *v536;
      memmove(v536, &v4393[DWORD2(v534) + 1], 8LL * (v524 - DWORD2(v534)));
      *v532 = v531;
      v529 ^= (v531 ^ ((v531 ^ 0x1DFE00uLL) >> 4)) >> 4;
      --v530;
    }
    while ( v530 );
    v213 = (_BYTE *)v3842;
  }
  v537 = __rdtsc();
  v538 = (__ROR8__(v537, 3) ^ v537) * (unsigned __int128)0x7010008004002001uLL;
  v3974 = *((_QWORD *)&v538 + 1);
  v539 = ((unsigned __int64)v538 ^ *((_QWORD *)&v538 + 1)) % 0xB;
  if ( (unsigned int)v539 > 5 )
  {
    v543 = v539 - 6;
    if ( v543 )
    {
      v544 = v543 - 1;
      if ( v544 )
      {
        v545 = v544 - 1;
        if ( v545 )
        {
          if ( v545 == 1 )
          {
            v3886[17] = -1333354875;
            v542 = __ROR4__(-1333354868, 33);
          }
          else
          {
            v546 = __rdtsc();
            v547 = __ROR8__(v546, 3);
            v3975 = ((v547 ^ v546) * (unsigned __int128)0x7010008004002001uLL) >> 64;
            v548 = v3975 ^ (67117057 * (v547 ^ v546));
            v542 = ((((((v548 % 0x1A + 97) << 8) | ((v548 >> 5)
                                                  - 26
                                                  * ((unsigned int)((1321528399 * (unsigned __int64)(v548 >> 5)) >> 32) >> 3)
                                                  + 65)) << 8) | ((v548 >> 10) % 0x1A + 97)) << 8) | ((v548 >> 15) % 0x1A + 65);
          }
        }
        else
        {
          v3886[18] = 1684422978;
          v542 = __ROR4__(1684422978, 8);
        }
      }
      else
      {
        v3886[19] = -2100910376;
        v542 = __ROL4__(-2100910376, 7);
      }
    }
    else
    {
      v3886[20] = 1314342514;
      v542 = __ROR4__(1314342516, 24);
    }
  }
  else if ( (_DWORD)v539 == 5 )
  {
    v3886[16] = 680282605;
    v542 = __ROR4__(680282605, 5);
  }
  else if ( (_DWORD)v539 )
  {
    v540 = v539 - 1;
    if ( v540 )
    {
      v541 = v540 - 1;
      if ( v541 )
      {
        if ( v541 == 1 )
        {
          v3886[12] = -1474152136;
          v542 = __ROR4__(-1474152133, 15);
        }
        else
        {
          v3889[2] = 1728537748;
          v542 = __ROL4__(1728537748, 4);
        }
      }
      else
      {
        v3886[13] = -2051698419;
        v542 = __ROR4__(-2051698419, 2);
      }
    }
    else
    {
      v3886[14] = -1297272415;
      v542 = __ROL4__(-1297272415, 1);
    }
  }
  else
  {
    v3886[15] = -795291432;
    v542 = __ROR4__(-795291432, 6);
  }
  v549 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, v542);
  if ( v549 )
  {
    *v549 = 19;
    v549[1] = 1;
    *((_WORD *)v549 + 1) = 0;
    *((_QWORD *)v549 + 3) = pg_unknown22;
    *((_QWORD *)v549 + 4) = v528;
    *((_QWORD *)v549 + 7) = 0LL;
    *((_QWORD *)v549 + 2) = 0LL;
    *((_QWORD *)v213 + 339) = v549;
    goto LABEL_767;
  }
  return 0;
}