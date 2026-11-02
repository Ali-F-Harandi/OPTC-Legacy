// rea decompile_all
// name: FUN_00009bd4
// address: 0x9bd4
// body: available
// range: 0x9bd4-0x9e73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00009bd4(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_b0 [4];
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char local_39;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  bool local_1;
  
  local_1 = false;
  if (param_1 == 0) {
    local_1 = false;
  }
  else {
    local_1 = (bool)FUN_000094d4(param_1);
    if (local_1 != true) {
      local_1 = (bool)FUN_000097a0(param_1);
    }
    if (local_1 != true) {
      local_50 = 0x44e4d405;
      local_4c = 0x4454fcf4;
      local_48 = 0xec4c64f4;
      local_44 = 5;
      local_10 = FUN_0000dafc(&local_50,0x10);
      local_60 = 0x44e4d405;
      local_5c = 0x74c4fcf4;
      local_58 = 0xf4fcdc;
      local_18 = FUN_0000dafc(&local_60,0xc);
      local_70 = 0xdc4cecdc;
      local_6c = 0xdc4c5c05;
      local_68 = 0x546c;
      local_20 = FUN_0000dafc(&local_70,0xc);
      local_80 = 0xdc4cecdc;
      local_7c = 0xc47ccc05;
      local_78 = 0;
      local_28 = FUN_0000dafc(&local_80,0xc);
      local_b0[0] = local_10;
      local_b0[1] = local_18;
      local_b0[2] = local_20;
      local_b0[3] = local_28;
      local_2c = 4;
      for (local_8 = 0; local_8 < local_2c; local_8 = local_8 + 1) {
        local_38 = local_b0[local_8];
        iVar1 = FUN_0000c554(local_38,param_1);
        local_1 = iVar1 == 0;
        if (iVar1 == 0) break;
      }
      FUN_0000dbc0(local_10);
      FUN_0000dbc0(local_18);
      FUN_0000dbc0(local_20);
      FUN_0000dbc0(local_28);
    }
    if ((local_1 != true) && (local_39 = FUN_000098ac(param_1), local_39 != '\x01')) {
      local_90 = 0x5f;
      local_8f = 0x5f;
      local_8e = 0;
      uVar2 = FUN_0000c448(&local_90);
      iVar1 = FUN_0000c4a4(param_1,&local_90,uVar2);
      local_1 = iVar1 == 0;
    }
  }
  return local_1;
}

