// rea decompile_all
// name: FUN_00000f38
// address: 0xf38
// body: available
// range: 0xf38-0x1393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00000f38(long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 long param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_f8 [23];
  char local_99;
  ulong local_98;
  long local_90;
  undefined8 local_88 [2];
  int *local_78;
  code *local_70;
  uint local_64;
  code *local_60;
  uint local_54;
  undefined4 *local_50;
  ulong local_48;
  long local_40;
  undefined4 local_34;
  long local_30;
  undefined1 local_21;
  uint local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  uint local_10;
  int local_c;
  int local_8;
  char local_1;
  
  local_1 = '\x01';
  local_10 = param_2 - 1;
  if (0xe1 < local_10) {
    FUN_0000fff4(local_10,param_6,0);
  }
  local_88[0] = 0;
  if (local_1 != '\0') {
    local_1 = FUN_000019c4(param_2,param_3,param_4,local_88);
  }
  if (local_1 != '\0') {
    local_8 = 0;
    while( true ) {
      local_18 = local_f8;
      if (local_1 != '\0') {
        local_1 = FUN_00001bc8(local_88[0],local_8,local_18);
      }
      local_1c = *local_18;
      local_20 = local_18[1];
      local_90 = 0;
      local_98 = 0;
      if (local_1 != '\0') {
        if ((local_20 & 2) == 0) {
          local_21 = 1;
          local_34 = 4;
          local_30 = param_1;
          local_1 = FUN_0000165c(1,*(undefined8 *)(param_1 + 0x10),local_18,param_3,param_4,
                                 &local_90,&local_98,4);
        }
        else {
          local_90 = param_3 + (ulong)(uint)local_18[2];
          local_98 = (ulong)(uint)local_18[3];
        }
      }
      if (local_1 != '\0') {
        local_1 = FUN_0000fee0(param_6,local_1c,local_90,local_98,local_20);
      }
      if ((local_1 != '\0') && ((local_20 & 0x100) == 0)) {
        local_40 = local_90;
        local_48 = local_98;
        local_50 = local_18 + 6;
        if ((local_1 != '\0') &&
           ((local_54 = local_18[8], local_54 != 0 &&
            (local_60 = (code *)(local_90 + (ulong)local_54), local_1 != '\0')))) {
          local_1 = (*local_60)(param_6);
        }
        if (((local_1 != '\0') && (local_64 = local_50[1], local_64 != 0)) &&
           (local_70 = (code *)(local_40 + (ulong)local_64), local_1 != '\0')) {
          local_99 = '\0';
          local_1 = (*local_70)(param_1,local_1c,local_40,local_48,0,&local_99);
          if (local_99 != '\0') {
            FUN_0000fff4(local_1c,param_6,0);
          }
        }
      }
      FUN_0000c214(local_18,0,0x5c);
      if (local_1 != '\x01') break;
      local_8 = local_8 + 1;
    }
  }
  if (local_1 != '\x01') {
    for (local_c = 0; local_c < 0x100; local_c = local_c + 1) {
      local_78 = (int *)(param_6 + (long)local_c * 0x18);
      if ((*local_78 != 0) && (iVar1 = *local_78, iVar2 = FUN_00001394(), iVar1 != iVar2)) {
        FUN_0000fff4(*local_78,param_6,1);
      }
    }
    FUN_00009f8c(param_6,0x1800);
  }
  if (local_1 != '\x01') {
    FUN_0001013c(0x5d,0,0,0,0,0,0);
  }
  if (local_1 != '\x01') {
    _Reset = 0;
  }
  return local_1;
}

