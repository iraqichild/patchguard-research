/* XREFS 
Up	o	KiFilterFiberContext+1C4	lea     rcx, pg_initialize; Callout
Up	o	KiFilterFiberContext+2E4	lea     rcx, pg_initialize; Callout
Up	o	KiFilterFiberContext+35F	lea     rcx, pg_initialize; Callout
Down	o	KiVerifyXcpt15+5FD5D	lea     rcx, pg_initialize; Callout
*/

void __fastcall pg_initialize(PVOID Parameter)
{
  *((_BYTE *)Parameter + 28) = pg_main(
                                 *(_DWORD *)Parameter,
                                 *((_DWORD *)Parameter + 1),
                                 *((_DWORD *)Parameter + 2),
                                 *((_QWORD *)Parameter + 2),
                                 *((_DWORD *)Parameter + 6));
}