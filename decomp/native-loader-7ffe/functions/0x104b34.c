// rea decompile_all
// name: FUN_00104b34
// address: 0x104b34
// body: available
// range: 0x104b34-0x104bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_00104b34(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = FUN_001047cc(param_1);
  uVar2 = FUN_001047cc(param_2);
  if (uVar1 < uVar2) {
    uVar1 = (ulong)(uint)((int)uVar1 - (int)uVar2);
  }
  else {
    uVar1 = FUN_001048d8(param_1 + (uVar1 - uVar2),param_2);
  }
  return uVar1;
}

