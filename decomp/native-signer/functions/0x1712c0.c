// rea decompile_all
// name: FUN_001712c0
// address: 0x1712c0
// body: available
// range: 0x1712c0-0x1713e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001712c0(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = -0x55c949af59ae76f;
  if (param_3 == 0 || param_2 == 0) {
    lVar1 = -0x28b93f8217cb5d73;
  }
  lVar2 = 0x332dfd522f05c93c;
  while( true ) {
    while (-0x55c949af59ae770 < lVar2) {
      if (lVar2 == -0x55c949af59ae76f) {
        (**(code **)(*param_1 + 0x600))(param_1,param_2,param_3,0);
        lVar2 = -0x342c529d4277a1df;
      }
      else if (lVar2 == 0x332dfd522f05c93c) {
        lVar2 = lVar1;
      }
    }
    if (lVar2 == -0x342c529d4277a1df) break;
    if (lVar2 == -0x28b93f8217cb5d73) {
      lVar2 = -0x342c529d4277a1df;
    }
  }
  return;
}

