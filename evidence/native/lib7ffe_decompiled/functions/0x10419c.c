// rea decompile_all
// name: FUN_0010419c
// address: 0x10419c
// body: available
// range: 0x10419c-0x104293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0010419c(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  char local_1;
  
  local_1 = '\x01';
  local_c = 0;
  local_10 = 0;
  local_8 = 0xffffffff;
  local_8 = FUN_00105e98(param_1,0,0);
  if (local_8 < 0) {
    local_1 = '\0';
    local_c = 0x30;
  }
  if (local_1 != '\0') {
    local_1 = FUN_0010405c(local_8,param_2,&local_c,&local_10);
  }
  if (-1 < local_8) {
    FUN_00105e3c(0x39,(long)local_8,0,0,0,0,0);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_c;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_10;
  }
  return local_1;
}

