// rea decompile_all
// name: FUN_001706d8
// address: 0x1706d8
// body: available
// range: 0x1706d8-0x1707f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001706d8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = -0x1d6a050721dd3e21;
  if (param_3 == 0 || param_2 == 0) {
    lVar1 = 0x41a203875b031c3;
  }
  lVar2 = -0x1600a62692a3eebb;
  while( true ) {
    while (lVar3 = lVar2, -0x1600a62692a3eebc < lVar3) {
      lVar2 = lVar1;
      if ((lVar3 != -0x1600a62692a3eebb) && (lVar2 = lVar3, lVar3 == 0x41a203875b031c3)) {
        lVar2 = -0x56bb61885886ae54;
      }
    }
    if (lVar3 == -0x56bb61885886ae54) break;
    lVar2 = lVar3;
    if (lVar3 == -0x1d6a050721dd3e21) {
      (**(code **)(*param_1 + 0x550))(param_1,param_2,param_3);
      lVar2 = -0x56bb61885886ae54;
    }
  }
  return;
}

