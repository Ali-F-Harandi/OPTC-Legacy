// rea decompile_all
// name: FUN_000097a0
// address: 0x97a0
// body: available
// range: 0x97a0-0x98ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000097a0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_50 [2];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  bool local_1;
  
  local_1 = false;
  local_38 = 0x4cdcfc05;
  local_34 = 0x4454fc64;
  local_30 = 0x4c64f4;
  local_10 = FUN_0000dafc(&local_38,0xc);
  local_40 = 0xdccccc05;
  local_3c = 0xec5c;
  local_18 = FUN_0000dafc(&local_40,8);
  local_50[0] = local_10;
  local_50[1] = local_18;
  local_1c = 2;
  for (local_8 = 0; local_8 < local_1c; local_8 = local_8 + 1) {
    local_28 = local_50[local_8];
    iVar1 = FUN_0000c554(local_28,param_1);
    local_1 = iVar1 == 0;
    if (iVar1 == 0) break;
  }
  FUN_0000dbc0(local_10);
  FUN_0000dbc0(local_18);
  return local_1;
}

