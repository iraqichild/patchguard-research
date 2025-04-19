/* XREFS 
Up	p	IopInitializeBootDrivers+146	call    PsNotifyCoreDriversInitialized
*/

__int64 PsNotifyCoreDriversInitialized()
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  if ( !qword_140CFC7A0 )
  {
    LODWORD(v3) = 8;
    if ( (int)SeCodeIntegrityQueryInformation(&v3, 8LL, &v2) < 0 || (v3 & 0xA200000000LL) == 0 )
      qword_140CFC7A0 = 1LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  KeLeaveCriticalRegionThread(KeGetCurrentThread());
  PspPicoRegistrationDisabled = 1;
  qword_140C01640 = (__int64)off_140C00A68;
  qword_140C01648 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0x140uLL);
  *(_OWORD *)&PspKernelRanges = 0LL;
  return VslConnectSwInterrupt(0LL, 0LL);
}