// rea decompile_all
// name: FUN_00102a50
// address: 0x102a50
// body: available
// range: 0x102a50-0x102c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00102a50(ulong param_1,long param_2,long param_3,ulong *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_498 [40];
  ulong local_470 [134];
  char local_39;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  ulong *local_20;
  undefined1 *local_18;
  ulong local_10;
  char local_1;
  
  local_1 = 1;
  local_18 = auStack_498;
  local_1 = FUN_001038d0(local_18);
  local_10 = 0;
  do {
    if (local_1 == '\0') goto LAB_00102c00;
    local_20 = local_470;
    if (local_1 != '\0') {
      local_39 = '\0';
      local_1 = FUN_00102c90(&local_39,local_20,local_18);
      if (local_39 != '\0') {
        uVar1 = FUN_00104054();
        local_1 = FUN_00105f34(0,0,uVar1,3,0x6f,1,2,0,0,0);
        goto LAB_00102c00;
      }
    }
  } while (((local_1 == '\0') || (param_1 < *local_20)) || (*local_20 + local_20[1] <= param_1));
  local_28 = FUN_001047cc((long)local_20 + 0x2c);
  local_30 = param_3 - 1;
  local_38 = local_30;
  if (local_28 < local_30) {
    local_38 = local_28;
  }
  FUN_00104e1c(param_2,(long)local_20 + 0x2c,local_38);
  local_10 = local_20[2];
  *(undefined1 *)(param_2 + local_38) = 0;
LAB_00102c00:
  FUN_0010394c(local_18);
  if (param_4 != (ulong *)0x0) {
    *param_4 = local_10;
  }
  return local_1;
}

