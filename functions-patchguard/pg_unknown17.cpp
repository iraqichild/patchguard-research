/* XREFS
Up	o	pg_main+577F	lea     rdx, pg_unknown17
*/

__int64 __fastcall pg_unknown17(__int64 a1, void *a2, __int64 a3)
{
  if ( !*(_QWORD *)(a3 + 2456)
    && (void (__fastcall __noreturn *)())PsQueryThreadStartAddress(a2, 0LL) == PopIrpWorkerControl )
  {
    ObfReferenceObject(a2);
    *(_QWORD *)(a3 + 2456) = a2;
  }
  return 0LL;
}