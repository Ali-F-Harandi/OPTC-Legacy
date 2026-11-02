// rea decompile_all
// name: FUN_0000318c
// address: 0x318c
// body: available
// range: 0x318c-0x329f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_0000318c(undefined8 param_1)

{
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  char local_12;
  undefined1 local_11;
  long local_10;
  long local_8;
  
  local_11 = 1;
  local_8 = 0;
  local_10 = 0;
  local_12 = '\x01';
  local_48 = 0x4cdcfc05;
  local_44 = 0x4454fc64;
  local_40 = 0x4c64f4;
  local_20 = FUN_0000dafc(&local_48,0xc);
  local_28 = FUN_00008bac(param_1,local_20);
  local_8 = local_28;
  FUN_0000dbc0(local_20);
  if (local_12 != '\0') {
    local_50 = 0xdccccc05;
    local_4c = 0xec5c;
    local_30 = FUN_0000dafc(&local_50,8);
    local_38 = FUN_00008bac(param_1,local_30);
    local_10 = local_38;
    FUN_0000dbc0(local_30);
  }
  if (local_12 != '\0') {
    FUN_0000c214(local_8,0,local_10 - local_8);
  }
  return local_11;
}

