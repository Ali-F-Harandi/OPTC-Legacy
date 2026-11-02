// rea decompile_all
// name: FUN_00004c60
// address: 0x4c60
// body: available
// range: 0x4c60-0x4e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00004c60(void)

{
  long lVar1;
  undefined1 auStack_f0 [128];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  char local_1;
  
  local_1 = '\0';
  local_40 = 0xbc6cec86;
  local_3c = 0x6cd47e3c;
  local_38 = 0x74e48694;
  local_34 = 0x9c7464dc;
  local_30 = 0x3c5c86dc;
  local_2c = 0x7ca4548c;
  local_28 = 0x7ed4;
  local_58 = 0x4c245c86;
  local_54 = 0x6e84cc5c;
  local_50 = 0x6edcac9c;
  local_4c = 0xc4dcac9c;
  local_48 = 0x4c7e8c4c;
  local_44 = 0x84;
  local_70 = 0x4c245c86;
  local_6c = 0x6e84cc5c;
  local_68 = 0x6edcac9c;
  local_64 = 0xdcdcac9c;
  local_60 = 0x4c7e546c;
  local_5c = 0x84;
  local_10 = FUN_0000dafc(&local_70,0x18);
  local_18 = FUN_0000dafc(&local_40,0x1c);
  local_20 = FUN_0000dafc(&local_58,0x18);
  if (local_1 != '\x01') {
    lVar1 = FUN_0001013c(0x4f,0xffffffffffffff9c,local_18,auStack_f0,0,0,0);
    local_1 = lVar1 == 0;
  }
  if (local_1 != '\x01') {
    lVar1 = FUN_0001013c(0x4f,0xffffffffffffff9c,local_20,auStack_f0,0,0,0);
    local_1 = lVar1 != 0;
    if ((bool)local_1) {
      lVar1 = FUN_0001013c(0x4f,0xffffffffffffff9c,&local_70,auStack_f0,0,0,0);
      local_1 = lVar1 == 0;
    }
  }
  FUN_0000dbc0(local_10);
  FUN_0000dbc0(local_20);
  FUN_0000dbc0(local_18);
  return local_1;
}

