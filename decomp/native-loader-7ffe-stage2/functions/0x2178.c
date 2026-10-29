// rea decompile_all
// name: FUN_00002178
// address: 0x2178
// body: available
// range: 0x2178-0x2383 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00002178(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  char local_2;
  char local_1;
  
  local_1 = '\x01';
  local_28 = *param_2;
  local_2c = *param_3;
  local_2 = 0;
  local_2 = FUN_00003128();
  if (local_2 != '\0') {
    if (local_1 != '\0') {
      local_48 = 0x4c245c86;
      local_44 = 0x6e84cc5c;
      local_40 = 0x36dcac9c;
      local_3c = 0x54e47e5e;
      local_38 = 0x6e4e4694;
      local_34 = 0xe48c;
      local_10 = FUN_0000dafc(&local_48,0x18);
      local_1 = FUN_00001f64(local_10,param_1,&local_28,&local_2c);
      FUN_0000dbc0(local_10);
    }
    if (local_1 != '\0') {
      local_60 = 0x4c245c86;
      local_5c = 0x6e84cc5c;
      local_58 = 0x36dcac9c;
      local_54 = 0x54e47e5e;
      local_50 = 0x4e4694;
      local_18 = FUN_0000dafc(&local_60,0x14);
      local_1 = FUN_00001f64(local_18,param_1,&local_28,&local_2c);
      FUN_0000dbc0(local_18);
    }
  }
  if (local_1 != '\0') {
    local_70 = 0x4c245c86;
    local_6c = 0x6e84cc5c;
    local_68 = 0x36dcac9c;
    local_64 = 0x5e;
    local_20 = FUN_0000dafc(&local_70,0x10);
    local_1 = FUN_00001f64(local_20,param_1,&local_28,&local_2c);
    FUN_0000dbc0(local_20);
  }
  *param_2 = local_28;
  *param_3 = local_2c;
  return local_1;
}

