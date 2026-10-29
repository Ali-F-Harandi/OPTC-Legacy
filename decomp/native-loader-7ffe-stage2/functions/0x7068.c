// rea decompile_all
// name: FUN_00007068
// address: 0x7068
// body: available
// range: 0x7068-0x7143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00007068(long param_1)

{
  char local_31 [9];
  ulong local_28;
  undefined8 local_20;
  undefined4 local_14;
  char local_d;
  int local_c;
  undefined8 local_8;
  
  local_d = '\x01';
  local_8 = 0;
  local_31[0] = '\x01';
  local_14 = 6;
  local_20 = FUN_000067ac(param_1,6,local_31,0);
  if (local_31[0] != '\0') {
    local_8 = FUN_00008278(param_1,local_20);
  }
  local_c = 0;
  if (local_d != '\0') {
    local_28 = FUN_000068f4(param_1,0);
    local_31[1] = '\x18';
    local_31[2] = '\0';
    local_31[3] = '\0';
    local_31[4] = '\0';
    local_31[5] = '\0';
    local_31[6] = '\0';
    local_31[7] = '\0';
    local_31[8] = '\0';
    local_c = FUN_0000d964(local_28 & 0xffffffff,0x18);
  }
  if (local_d != '\0') {
    *(undefined8 *)(param_1 + 0xa8) = local_8;
    *(long *)(param_1 + 0xb0) = (long)local_c;
  }
  return local_d;
}

