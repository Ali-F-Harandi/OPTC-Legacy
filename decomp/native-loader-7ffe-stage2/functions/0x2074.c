// rea decompile_all
// name: FUN_00002074
// address: 0x2074
// body: available
// range: 0x2074-0x2177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00002074(undefined1 *param_1)

{
  int iVar1;
  undefined1 *local_428;
  undefined1 auStack_420 [1024];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  int local_8;
  undefined1 local_1;
  
  local_8 = FUN_0000c448(param_1);
  local_428 = param_1;
  if ((0 < local_8) && (param_1[(long)local_8 + -1] == '/')) {
    FUN_0000ca14(auStack_420,param_1);
    auStack_420[local_8 + -1] = 0;
    local_428 = auStack_420;
  }
  local_1 = 0;
  local_20 = 0x4c245c86;
  local_1c = 0x6e84cc5c;
  local_18 = 0x36dcac9c;
  local_14 = 0x5e;
  local_10 = FUN_0000dafc(&local_20,0x10);
  iVar1 = FUN_0000c554(local_428,local_10);
  if (iVar1 == 0) {
    local_1 = 1;
  }
  FUN_0000dbc0(local_10);
  return local_1;
}

