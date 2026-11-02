// rea decompile_all
// name: FUN_001027dc
// address: 0x1027dc
// body: available
// range: 0x1027dc-0x10284f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_001027dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_8;
  
  if (param_1 == 0) {
    uStack_8 = 0;
  }
  else {
    uVar1 = FUN_00105a88(param_1,0x1000,1);
    uStack_8 = FUN_00105e3c(0xde,0,uVar1,3,0x22,0xffffffffffffffff,0);
    if (uStack_8 == -1) {
      uStack_8 = 0;
    }
  }
  return uStack_8;
}

