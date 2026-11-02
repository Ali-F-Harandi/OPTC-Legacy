// rea decompile_all
// name: FUN_00105848
// address: 0x105848
// body: available
// range: 0x105848-0x1059bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_00105848(uint param_1,uint param_2,uint *param_3)

{
  ulong uVar1;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  if (param_2 == 0) {
    local_8 = 0;
  }
  else if (param_2 == 1) {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    local_8 = (ulong)param_1;
  }
  else if (param_1 == param_2) {
    if (param_3 != (uint *)0x0) {
      *param_3 = 0;
    }
    local_8 = 1;
  }
  else if (param_1 < param_2) {
    if (param_3 != (uint *)0x0) {
      *param_3 = param_1;
    }
    local_8 = 0;
  }
  else {
    local_10 = (ulong)param_1;
    local_8 = 0;
    for (local_18 = 0x80000000; local_18 != 0; local_18 = local_18 >> 1) {
      uVar1 = param_2 * local_18;
      if (uVar1 < local_10 || uVar1 - local_10 == 0) {
        local_10 = local_10 - param_2 * local_18;
        local_8 = local_8 + local_18;
      }
      if (local_10 == 0) break;
    }
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)local_10;
    }
  }
  return local_8;
}

