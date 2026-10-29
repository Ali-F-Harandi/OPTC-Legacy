// rea decompile_all
// name: FUN_0000bcd8
// address: 0xbcd8
// body: available
// range: 0xbcd8-0xbe17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_0000bcd8(int param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 local_18;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_1;
  
  local_8 = 0;
  local_18 = 0;
  lVar1 = FUN_0001013c(0x3e,(long)param_1,0,2,0,0,0);
  if (lVar1 < 0) {
    local_8 = 0x13;
  }
  local_1 = lVar1 >= 0;
  if (local_1) {
    local_18 = lVar1;
  }
  local_c = 0;
  if ((local_1) && (lVar1 = FUN_0001013c(0x3e,(long)param_1,0,0,0,0,0), lVar1 < 0)) {
    local_1 = false;
    local_8 = 0x1a;
    local_c = (undefined4)local_18;
  }
  if ((local_1 != false) && (param_2 != (long *)0x0)) {
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

