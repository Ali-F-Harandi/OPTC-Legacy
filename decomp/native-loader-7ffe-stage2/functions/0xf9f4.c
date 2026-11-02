// rea decompile_all
// name: FUN_0000f9f4
// address: 0xf9f4
// body: available
// range: 0xf9f4-0xfe23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0000f9f4(long *param_1,long *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_b0 [8];
  int local_a8;
  int local_a4;
  int local_a0;
  uint local_98;
  uint local_94;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  int local_54;
  long local_50;
  long local_48;
  int local_3c;
  undefined1 *local_38;
  undefined1 *local_30;
  int local_24;
  undefined1 *local_20;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *local_8;
  
  local_48 = *param_1;
  local_50 = *param_2;
  local_8 = (undefined1 *)*param_3;
  local_54 = (int)param_2[1];
  local_58 = *(int *)(param_3 + 1);
  if (local_48 == 0) {
    uVar4 = 0;
  }
  else if (local_50 == 0) {
    uVar4 = 0;
  }
  else if (local_8 == (undefined1 *)0x0) {
    uVar4 = 0;
  }
  else if (local_54 == 0) {
    uVar4 = 0;
  }
  else if (local_58 == 0) {
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_0000f730(auStack_b0,local_50,local_54);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      local_10 = 0;
      local_14 = 0;
      for (local_c = 0; local_c < local_58; local_c = local_c + local_10) {
        if (local_a8 <= local_a4) {
          return 0;
        }
        uVar3 = FUN_0000f878(auStack_b0,local_48);
        uVar1 = local_14;
        local_60 = uVar3 & 0x300;
        local_5c = uVar3 & 0xff;
        if (local_60 == 0) {
          local_10 = 1;
          *local_8 = (char)uVar3;
        }
        else if (local_60 == 0x100) {
          local_10 = 0;
          if (0xff < (int)local_14) {
            return 0;
          }
          uVar1 = local_5c;
          if (local_14 != 0) {
            uVar1 = local_14 << 8 | local_5c;
          }
        }
        else if (local_60 == 0x200) {
          local_18 = local_14;
          local_14 = 0;
          if (uVar1 == 0) {
            local_18 = 1;
          }
          local_10 = local_5c * local_18;
          if (local_58 < (int)(local_c + local_10)) {
            return 0;
          }
          if (local_5c == 1) {
            local_20 = local_8;
            local_70 = local_8 + -1;
            for (local_24 = 0; local_24 < (int)local_18; local_24 = local_24 + 1) {
              *local_20 = *local_70;
              local_20 = local_20 + 1;
            }
          }
          local_64 = local_5c;
          if (local_5c == 2) {
            local_78 = local_8;
            local_80 = local_8 + -2;
            FUN_0000f608(local_8,local_80,local_18);
          }
          uVar1 = local_14;
          if (local_64 == 4) {
            local_88 = local_8;
            local_90 = local_8 + -4;
            FUN_0000f684(local_8,local_90,local_18);
            uVar1 = local_14;
          }
        }
        else if (local_60 == 0x300) {
          local_98 = local_14;
          local_14 = 0;
          if (local_58 < (int)(local_c + local_5c)) {
            return 0;
          }
          if (local_c < (int)(uVar1 + local_5c)) {
            return 0;
          }
          local_30 = local_8;
          local_38 = local_8 + -(long)(int)(uVar1 + local_5c);
          for (local_3c = 0; local_94 = local_5c, uVar1 = local_14, local_10 = local_5c,
              local_3c < (int)local_5c; local_3c = local_3c + 1) {
            *local_30 = *local_38;
            local_38 = local_38 + 1;
            local_30 = local_30 + 1;
          }
        }
        local_14 = uVar1;
        local_8 = local_8 + (int)local_10;
      }
      if (local_a4 + (uint)(local_a0 != 0) == local_a8) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

