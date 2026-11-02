// rea decompile_all
// name: FUN_00104a30
// address: 0x104a30
// body: available
// range: 0x104a30-0x104b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00104a30(byte *param_1,byte *param_2,ulong param_3)

{
  byte *local_30;
  byte *local_28;
  byte local_12;
  byte local_11;
  ulong local_10;
  
  local_10 = 0;
  local_30 = param_2;
  local_28 = param_1;
  while( true ) {
    if (param_3 <= local_10) {
      return 0;
    }
    local_11 = *local_28;
    local_12 = *local_30;
    if ((0x60 < local_11) && (local_11 < 0x7b)) {
      local_11 = local_11 - 0x20;
    }
    if ((0x60 < local_12) && (local_12 < 0x7b)) {
      local_12 = local_12 - 0x20;
    }
    if ((uint)local_11 - (uint)local_12 != 0) {
      return (uint)local_11 - (uint)local_12;
    }
    if (*local_28 == 0) {
      return 0;
    }
    if (*local_30 == 0) break;
    local_10 = local_10 + 1;
    local_28 = local_28 + 1;
    local_30 = local_30 + 1;
  }
  return 0;
}

