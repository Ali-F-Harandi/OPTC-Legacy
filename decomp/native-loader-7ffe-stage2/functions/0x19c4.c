// rea decompile_all
// name: FUN_000019c4
// address: 0x19c4
// body: available
// range: 0x19c4-0x1bc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_000019c4(uint param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined1 auStack_50 [8];
  uint local_48;
  uint local_44;
  uint *local_40;
  undefined1 *local_38;
  int local_30;
  int local_2c;
  uint local_28;
  char local_21;
  ulong local_20;
  uint local_14;
  long local_10;
  int local_4;
  
  local_21 = '\x01';
  local_28 = param_1 * -0x62cdc329;
  local_2c = (local_28 >> (ulong)(param_1 & 7)) + 0x5e727d74;
  local_30 = (local_28 << (ulong)(param_1 & 0xb)) + -0x8e1cffb;
  local_4 = local_2c + local_30;
  local_10 = 0;
  local_38 = auStack_50;
  FUN_0000c338(local_38,param_2,8);
  local_10 = local_10 + 8;
  if (local_21 != '\0') {
    local_14 = 0xcbf0c1d8;
    for (local_20 = 0; local_20 < 8; local_20 = local_20 + 4) {
      local_40 = (uint *)(local_38 + local_20);
      local_48 = *local_40;
      local_44 = local_48 + local_14;
      local_44 = FUN_00001d40(local_44);
      local_44 = local_44 ^ ((int)local_20 + 1) * -0x1417e246 + local_4;
      local_14 = local_48;
      *local_40 = local_44;
    }
  }
  if ((local_21 != '\0') &&
     (DAT_0002591c = *(int *)(local_38 + 4) + local_4, param_4 != (long *)0x0)) {
    *param_4 = param_2 + local_10;
  }
  FUN_0000c214(local_38,0,8);
  return local_21;
}

