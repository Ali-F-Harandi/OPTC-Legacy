// rea decompile_all
// name: FUN_000094d4
// address: 0x94d4
// body: available
// range: 0x94d4-0x979f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000094d4(long param_1)

{
  int iVar1;
  undefined8 local_f0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
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
    local_60 = 0x647494dc;
    local_5c = 0x84d4;
    local_10 = FUN_0000dafc(&local_60,8);
    local_68 = 0x54c494dc;
    local_64 = 0x5c7c6c;
    local_18 = FUN_0000dafc(&local_68,8);
    local_70 = 0x1c5494dc;
    local_6c = 0x94;
    local_20 = FUN_0000dafc(&local_70,8);
    local_78 = 0x84d494dc;
    local_74 = 0xc45c84;
    local_28 = FUN_0000dafc(&local_78,8);
    local_80 = 0xc4e494dc;
    local_7c = 0x64dc;
    local_30 = FUN_0000dafc(&local_80,8);
    local_88 = 0x4c3c94dc;
    local_84 = 0x8c34;
    local_38 = FUN_0000dafc(&local_88,8);
    local_98 = 0x9cf494dc;
    local_94 = 0xdc5ccc5c;
    local_90 = 0x64f4cc5c;
    local_8c = 0x5cd4bc;
    local_40 = FUN_0000dafc(&local_98,0x10);
    local_b0 = 0x3cf494dc;
    local_ac = 0x74a43c8c;
    local_a8 = 0x9cbcfcdc;
    local_a4 = 0xbcf4d48c;
    local_a0 = 0x24ccac3c;
    local_9c = 0;
    local_48 = FUN_0000dafc(&local_b0,0x18);
    local_f0[0] = local_10;
    local_f0[1] = local_18;
    local_f0[2] = local_20;
    local_f0[3] = local_28;
    local_d0 = local_30;
    local_c8 = local_38;
    local_c0 = local_40;
    local_b8 = local_48;
    local_4c = 8;
    for (local_8 = 0; local_8 < local_4c; local_8 = local_8 + 1) {
      local_58 = local_f0[local_8];
      iVar1 = FUN_0000c554(local_58,param_1);
      local_1 = iVar1 == 0;
      if (iVar1 == 0) break;
    }
    FUN_0000dbc0(local_10);
    FUN_0000dbc0(local_18);
    FUN_0000dbc0(local_20);
    FUN_0000dbc0(local_28);
    FUN_0000dbc0(local_30);
    FUN_0000dbc0(local_38);
    FUN_0000dbc0(local_40);
    FUN_0000dbc0(local_48);
  }
  return local_1;
}

