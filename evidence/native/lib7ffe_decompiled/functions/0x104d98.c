// rea decompile_all
// name: FUN_00104d98
// address: 0x104d98
// body: available
// range: 0x104d98-0x104e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_00104d98(long param_1,long param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if (param_2 == 0) {
    lVar1 = FUN_001047cc(param_1);
    param_1 = param_1 + lVar1;
  }
  else {
    lVar1 = FUN_001047cc(param_2);
    param_1 = FUN_001046bc(param_1,param_2,lVar1 + 1);
    param_1 = param_1 + -1;
  }
  return param_1;
}

