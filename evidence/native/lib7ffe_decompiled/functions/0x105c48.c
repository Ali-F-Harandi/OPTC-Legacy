// rea decompile_all
// name: FUN_00105c48
// address: 0x105c48
// body: available
// range: 0x105c48-0x105e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_00105c48(char *param_1,long param_2,long param_3,long *param_4,undefined1 *param_5)

{
  int iVar1;
  char *local_38;
  undefined4 local_28;
  char local_21;
  ulong local_20;
  undefined1 local_11;
  char *local_10;
  long local_8;
  
  local_8 = *param_4;
  local_10 = (char *)(param_3 + local_8);
  if (*local_10 == '\0') {
    local_38 = (char *)0x0;
  }
  else {
    local_11 = 1;
    local_28 = 0xa0d;
    local_38 = param_1;
    for (local_20 = 0; local_20 < param_2 - 1U; local_20 = local_20 + 1) {
      local_21 = '\0';
      iVar1 = FUN_00104828(local_10,&local_28,2);
      if (iVar1 == 0) {
        local_8 = local_8 + 2;
        local_21 = '\x01';
      }
      else if (*local_10 == '\r') {
        local_8 = local_8 + 1;
        local_21 = '\x01';
      }
      else if (*local_10 == '\n') {
        local_8 = local_8 + 1;
        local_21 = '\x01';
      }
      else if (*local_10 == '\0') {
        local_21 = '\x01';
      }
      if (local_21 != '\0') {
        local_11 = 0;
        break;
      }
      *local_38 = *local_10;
      local_8 = local_8 + 1;
      local_38 = local_38 + 1;
      local_10 = local_10 + 1;
    }
    *local_38 = '\0';
    *param_4 = local_8;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = local_11;
    }
  }
  return local_38;
}

