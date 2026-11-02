// rea decompile_all
// name: FUN_000098ac
// address: 0x98ac
// body: available
// range: 0x98ac-0x9bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_000098ac(undefined8 param_1)

{
  int iVar1;
  undefined8 local_f8 [4];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
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
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  int local_8;
  bool local_1;
  
  local_1 = true;
  local_50 = 0x54c4fc05;
  local_4c = 0x74846c;
  local_10 = FUN_0000dafc(&local_50,8);
  local_68 = 0x1c54fc05;
  local_64 = 0x7cc45464;
  local_60 = 0x6c5c7405;
  local_5c = 0x445ccc7c;
  local_58 = 0xbcb4fc34;
  local_54 = 0x5c;
  local_18 = FUN_0000dafc(&local_68,0x18);
  local_80 = 0x74e4fc05;
  local_7c = 0x9c7464dc;
  local_78 = 0x6c8cfcdc;
  local_74 = 0x4ce4fcc4;
  local_70 = 0x445ccc64;
  local_6c = 0;
  local_20 = FUN_0000dafc(&local_80,0x18);
  local_98 = 0x74e4fc05;
  local_94 = 0x9c7464dc;
  local_90 = 0x6c8cfcdc;
  local_8c = 0x546cfcc4;
  local_88 = 0x4c84b4;
  local_28 = FUN_0000dafc(&local_98,0x14);
  local_b0 = 0x74e4fc05;
  local_ac = 0x9c7464dc;
  local_a8 = 0x6c8cfcdc;
  local_a4 = 0x643cfcc4;
  local_a0 = 0x447cac6c;
  local_9c = 0;
  local_30 = FUN_0000dafc(&local_b0,0x18);
  local_c8 = 0x74e4fc05;
  local_c4 = 0x9c7464dc;
  local_c0 = 0x6c8cfcdc;
  local_bc = 0x5434fcc4;
  local_b8 = 0xc454b4;
  local_38 = FUN_0000dafc(&local_c8,0x14);
  local_f8[0] = local_10;
  local_f8[1] = local_18;
  local_f8[2] = local_20;
  local_f8[3] = local_28;
  local_d8 = local_30;
  local_d0 = local_38;
  local_3c = 6;
  for (local_8 = 0; local_8 < local_3c; local_8 = local_8 + 1) {
    local_48 = local_f8[local_8];
    iVar1 = FUN_0000c554(local_48,param_1);
    local_1 = iVar1 == 0;
    if (iVar1 == 0) break;
  }
  FUN_0000dbc0(local_10);
  FUN_0000dbc0(local_18);
  FUN_0000dbc0(local_20);
  FUN_0000dbc0(local_28);
  FUN_0000dbc0(local_30);
  FUN_0000dbc0(local_38);
  return local_1;
}

