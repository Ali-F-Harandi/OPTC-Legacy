// rea decompile_all
// name: FUN_00104940
// address: 0x104940
// body: available
// range: 0x104940-0x104a2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00104940(byte *param_1,byte *param_2)

{
  byte *local_20;
  byte *local_18;
  byte local_a;
  byte local_9;
  
  local_20 = param_2;
  local_18 = param_1;
  while( true ) {
    local_9 = *local_18;
    local_a = *local_20;
    if ((0x60 < local_9) && (local_9 < 0x7b)) {
      local_9 = local_9 - 0x20;
    }
    if ((0x60 < local_a) && (local_a < 0x7b)) {
      local_a = local_a - 0x20;
    }
    if ((((uint)local_9 - (uint)local_a != 0) || (*local_18 == 0)) || (*local_20 == 0)) break;
    local_18 = local_18 + 1;
    local_20 = local_20 + 1;
  }
  return (uint)local_9 - (uint)local_a;
}

