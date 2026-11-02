// rea decompile_all
// name: FUN_00104828
// address: 0x104828
// body: available
// range: 0x104828-0x1048d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00104828(byte *param_1,byte *param_2,ulong param_3)

{
  byte *local_20;
  byte *local_18;
  ulong local_8;
  
  local_8 = 0;
  local_20 = param_2;
  local_18 = param_1;
  while( true ) {
    if (param_3 <= local_8) {
      return 0;
    }
    if ((uint)*local_18 - (uint)*local_20 != 0) {
      return (uint)*local_18 - (uint)*local_20;
    }
    if (*local_18 == 0) {
      return 0;
    }
    if (*local_20 == 0) break;
    local_8 = local_8 + 1;
    local_18 = local_18 + 1;
    local_20 = local_20 + 1;
  }
  return 0;
}

