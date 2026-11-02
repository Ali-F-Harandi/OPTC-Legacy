// rea decompile_all
// name: FUN_00104598
// address: 0x104598
// body: available
// range: 0x104598-0x1046bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00104598(undefined4 *param_1,undefined1 param_2,ulong param_3)

{
  ulong local_20;
  undefined4 *local_18;
  ulong local_10;
  undefined4 *local_8;
  
  local_8 = param_1;
  for (local_10 = 0; local_10 != param_3 >> 2; local_10 = local_10 + 1) {
    *local_8 = CONCAT13(param_2,CONCAT12(param_2,CONCAT11(param_2,param_2)));
    local_8 = local_8 + 1;
  }
  local_18 = local_8;
  for (local_20 = 0; local_20 != (param_3 & 3); local_20 = local_20 + 1) {
    *(undefined1 *)local_18 = param_2;
    local_18 = (undefined4 *)((long)local_18 + 1);
  }
  return param_1;
}

