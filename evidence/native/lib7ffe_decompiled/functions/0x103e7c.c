// rea decompile_all
// name: FUN_00103e7c
// address: 0x103e7c
// body: available
// range: 0x103e7c-0x104053 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00103e7c(undefined8 param_1,long param_2,long *param_3,long *param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  long local_28;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  long local_10;
  char local_1;
  
  local_1 = '\x01';
  local_18 = 0;
  local_1c = 0;
  local_10 = 0;
  local_14 = 0xffffffff;
  local_14 = FUN_00105e98(param_1,0,0);
  if (local_14 < 0) {
    local_1 = '\0';
    local_18 = 0x86;
  }
  local_28 = 0;
  if (local_1 != '\0') {
    local_1 = FUN_00104294(local_14,&local_28,&local_18,&local_1c);
  }
  if (local_28 != 0) {
    if (local_1 != '\0') {
      local_28 = local_28 - param_2;
      local_10 = FUN_001027dc(local_28);
      if (local_10 == 0) {
        local_1 = '\0';
        local_18 = 0x91;
        local_1c = (undefined4)local_28;
      }
    }
    if (local_1 != '\0') {
      local_1 = FUN_00103a58(local_14,param_2,local_10,local_28,&local_18,&local_1c);
    }
  }
  if (local_1 != '\0') {
    if (param_3 != (long *)0x0) {
      *param_3 = local_10;
    }
    if (param_4 != (long *)0x0) {
      *param_4 = local_28;
    }
  }
  if (-1 < local_14) {
    FUN_00105e3c(0x39,(long)local_14,0,0,0,0,0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_18;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_1c;
  }
  return local_1;
}

