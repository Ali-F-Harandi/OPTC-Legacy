// rea decompile_all
// name: FUN_0000c4a4
// address: 0xc4a4
// body: available
// range: 0xc4a4-0xc553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0000c4a4(byte *param_1,byte *param_2,ulong param_3)

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

