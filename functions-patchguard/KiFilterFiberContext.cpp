/* XREFS
Down	o	KiFilterFiberContext+21	lea     rcx, KiFilterFiberContext
Down	p	KeInitAmd64SpecificState+1F37B	call    KiFilterFiberContext
*/

_BOOL8 __fastcall KiFilterFiberContext(__int64 a1)
{
  NTSTATUS v2; // r12d
  unsigned __int64 v3; // rax
  unsigned __int128 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int128 v7; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int128 v10; // rax
  unsigned __int64 v11; // r15
  NTSTATUS v12; // eax
  ULONG v13; // edx
  char v14; // di
  unsigned __int64 v15; // rax
  unsigned __int128 v16; // rax
  int v17; // r8d
  unsigned __int64 v18; // rax
  unsigned __int128 v19; // rax
  NTSTATUS v20; // eax
  char v21; // cl
  int v22; // eax
  int v23; // edx
  NTSTATUS v24; // eax
  char v25; // cl
  int v26; // ecx
  __int64 *v27; // rax
  __int64 v28; // rdx
  _DWORD Parameter[4]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v31; // [rsp+50h] [rbp-79h]
  int v32; // [rsp+58h] [rbp-71h]
  char v33; // [rsp+5Ch] [rbp-6Dh]
  _DWORD v34[4]; // [rsp+60h] [rbp-69h] BYREF
  __int64 v35; // [rsp+70h] [rbp-59h]
  int v36; // [rsp+78h] [rbp-51h]
  char v37; // [rsp+7Ch] [rbp-4Dh]
  _DWORD v38[4]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v39; // [rsp+90h] [rbp-39h]
  int v40; // [rsp+98h] [rbp-31h]
  char v41; // [rsp+9Ch] [rbp-2Dh]
  __int64 v42; // [rsp+A0h] [rbp-29h]
  __int64 v43; // [rsp+A8h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+130h] [rbp+67h] BYREF
  __int64 v46; // [rsp+138h] [rbp+6Fh]
  __int64 v47; // [rsp+140h] [rbp+77h]
  __int64 v48; // [rsp+148h] [rbp+7Fh]

  v2 = KdDisableDebugger();
  KeKeepData(KiFilterFiberContext);
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  v3 = __rdtsc();
  v4 = (__ROR8__(v3, 3) ^ v3) * (unsigned __int128)0x7010008004002001uLL;
  v46 = *((_QWORD *)&v4 + 1);
  v5 = ((unsigned __int64)v4 ^ *((_QWORD *)&v4 + 1)) % 0xA;
  if ( !*(_QWORD *)&MaxDataSize && !a1 && !__32 )
  {
    if ( PsIntegrityCheckEnabled )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)L"TV";
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0) >= 0 )
      {
        ExNotifyCallback(CallbackObject, pg_unknown6, &__29);
        HalPutDmaAdapter((PADAPTER_OBJECT)CallbackObject);
        if ( __29 )
          __32 = 1;
        ExInitializeNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&Lookaside, 0LL, 0LL, 0x200u, 0xAF0uLL, 0x746E494Bu, 0);
      }
    }
  }
  v6 = __rdtsc();
  v7 = (__ROR8__(v6, 3) ^ v6) * (unsigned __int128)0x7010008004002001uLL;
  v47 = *((_QWORD *)&v7 + 1);
  v8 = v7;
  *(_QWORD *)&v7 = __rdtsc();
  v9 = v8 ^ *((_QWORD *)&v7 + 1);
  Parameter[2] = (v5 < 6) + 1;
  v31 = a1;
  v32 = 1;
  v33 = 0;
  v10 = (__ROR8__(v7, 3) ^ (unsigned __int64)v7) * (unsigned __int128)0x7010008004002001uLL;
  v48 = *((_QWORD *)&v10 + 1);
  v11 = ((unsigned __int64)v10 ^ *((_QWORD *)&v10 + 1)) % 6;
  Parameter[1] = v11;
  Parameter[0] = v9 % 0xD;
  v12 = KeExpandKernelStackAndCallout(pg_initialize, Parameter, 0xC000uLL);
  v14 = v33;
  if ( v12 < 0 )
    v14 = 0;
  v33 = v14;
  if ( v14 )
  {
    if ( v5 < 6 )
    {
      v15 = __rdtsc();
      v16 = (__ROR8__(v15, 3) ^ v15) * (unsigned __int128)0x7010008004002001uLL;
      v42 = *((_QWORD *)&v16 + 1);
      v17 = ((unsigned __int64)v16 ^ *((_QWORD *)&v16 + 1)) % 0xD;
      do
      {
        v18 = __rdtsc();
        v19 = (__ROR8__(v18, 3) ^ v18) * (unsigned __int128)0x7010008004002001uLL;
        v43 = *((_QWORD *)&v19 + 1);
      }
      while ( (_DWORD)v11 && ((unsigned __int64)v19 ^ *((_QWORD *)&v19 + 1)) % 6 == (_DWORD)v11 );
      v34[0] = v17;
      v34[1] = ((unsigned __int64)v19 ^ *((_QWORD *)&v19 + 1)) % 6;
      v34[2] = (v5 < 6) + 1;
      v35 = a1;
      v36 = 0;
      v37 = 0;
      v20 = KeExpandKernelStackAndCallout(pg_initialize, v34, 0xC000uLL);
      v21 = v37;
      if ( v20 < 0 )
        v21 = 0;
      v37 = v21;
      v14 = v21;
    }
    if ( v14 )
    {
      if ( !*(_QWORD *)&MaxDataSize && !a1 && ((int)KiSwInterruptPresent() >= 0 || __32) )
      {
        v38[0] = 0;
        v38[1] = 7;
        v38[2] = 1;
        v39 = 0LL;
        v22 = KiSwInterruptPresent();
        v41 = 0;
        v23 = 8;
        if ( v22 >= 0 )
          v23 = 0;
        v40 = v23;
        v24 = KeExpandKernelStackAndCallout(pg_initialize, v38, 0xC000uLL);
        v25 = v41;
        if ( v24 < 0 )
          v25 = 0;
        v41 = v25;
        v14 = v25;
      }
      if ( v14 && !a1 )
      {
        if ( qword_140D58650 )
          ExFreePoolWithTag(qword_140D58650, v13);
        v26 = 24;
        v27 = &__2a;
        v28 = 3LL;
        do
        {
          *v27 = 0LL;
          v26 -= 8;
          ++v27;
          --v28;
        }
        while ( v28 );
        for ( ; v26; --v26 )
        {
          *(_BYTE *)v27 = 0;
          v27 = (__int64 *)((char *)v27 + 1);
        }
        __20 = 0;
        __2b = 0;
        __2c = 0LL;
        dword_140C12F40 = 0;
        qword_140D58080 = 0LL;
      }
    }
  }
  _disable();
  if ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
      ;
  }
  _enable();
  _disable();
  _enable();
  if ( v2 >= 0 )
    KdEnableDebugger();
  return v14 != 0;
}