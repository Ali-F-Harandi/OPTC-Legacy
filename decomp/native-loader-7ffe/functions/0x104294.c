// rea decompile_all
// name: FUN_00104294
// address: 0x104294
// body: available
// range: 0x104294-0x10449f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00104294(int param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined1 auStack_1028 [4104];
  long lStack_20;
  long local_18;
  undefined4 local_c;
  undefined4 local_8;
  char local_1;
  
  local_1 = '\x01';
  local_8 = 0;
  local_c = 0;
  local_18 = 0;
  while (local_1 != '\0') {
    lStack_20 = FUN_00105e3c(0x3f,(long)param_1,auStack_1028,0x1000,0,0,0);
    if (lStack_20 < 0) {
      local_1 = '\0';
      local_8 = 0x4e;
      local_c = (undefined4)local_18;
    }
    if (lStack_20 == 0) break;
    local_18 = local_18 + lStack_20;
  }
  if ((local_1 != '\0') && (lVar1 = FUN_00105e3c(0x3e,(long)param_1,0,0,0,0,0), lVar1 < 0)) {
    local_1 = '\0';
    local_8 = 0x55;
    local_c = (undefined4)local_18;
  }
  if ((local_1 != '\0') && (param_2 != (long *)0x0)) {
    *param_2 = local_18;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_8;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_c;
  }
  return local_1;
}

