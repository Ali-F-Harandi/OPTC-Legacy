// rea decompile_all
// name: FUN_0000adf4
// address: 0xadf4
// body: available
// range: 0xadf4-0xb427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: c5f0e0fed76fa8cf080f0ccef9f9bf11e40d0cb2265d3a81d2ade38c725196d0
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0000adf4(char *param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_30e8 [16];
  uint local_30d8;
  char acStack_3069 [4097];
  char local_2068 [4096];
  char local_1068 [4096];
  undefined1 local_68;
  undefined1 local_67;
  ulong local_58;
  long local_50;
  undefined1 *local_48;
  int local_40;
  int local_3c;
  long local_38;
  char *local_30;
  long local_28;
  long local_20;
  long local_18;
  char *local_10;
  char local_1;
  
  local_1 = '\x01';
  if (param_2 == 0) {
    local_1 = '\0';
  }
  else if (param_3 == 0) {
    local_1 = '\0';
  }
  else {
    local_68 = 0x2f;
    local_67 = 0;
    iVar1 = FUN_0000c554(param_1,&local_68);
    if (iVar1 == 0) {
      FUN_0000ca14(param_2,&local_68);
    }
    else {
      if (local_1 != '\0') {
        if (*param_1 == '/') {
          uVar2 = FUN_0000c448(param_1);
          if (0x1000 < uVar2) {
            local_1 = '\0';
          }
          if (local_1 != '\0') {
            FUN_0000ca14(acStack_3069 + 1,param_1);
          }
        }
        else {
          if ((local_1 != '\0') &&
             (local_20 = FUN_0001013c(0x11,acStack_3069 + 1,0x1000,0,0,0,0), local_20 == 0)) {
            local_1 = '\0';
          }
          if (local_1 != '\0') {
            local_28 = FUN_0000c448(acStack_3069 + 1);
            if ((local_28 != 0) && (acStack_3069[local_28] != '/')) {
              FUN_0000cb1c(acStack_3069 + 1,&local_68);
            }
            FUN_0000cb1c(acStack_3069 + 1,param_1);
          }
        }
      }
      if (local_1 != '\0') {
        local_1 = FUN_0000d7c4(acStack_3069 + 1,0x1000);
      }
      if (local_1 != '\0') {
        local_10 = acStack_3069 + 1;
        FUN_0000c214(local_2068,0,0x1000);
        local_30 = local_2068;
        for (; *local_10 != '\0'; local_10 = local_10 + 1) {
          local_18 = 0;
          local_38 = FUN_0000c830(local_10,0x2f);
          if (local_38 == 0) {
            local_18 = FUN_0000c448(local_10);
          }
          else {
            local_18 = local_38 - (long)local_10;
          }
          if (local_18 != 0) {
            FUN_0000cb1c(local_30,&local_68);
            FUN_0000cb64(local_30,local_10,local_18);
            if (local_1 != '\0') {
              if ((local_1 != '\0') &&
                 (local_3c = FUN_0001013c(0x4f,0xffffffffffffff9c,local_30,auStack_30e8,0x100,0,0),
                 local_3c != 0)) {
                local_1 = '\0';
              }
              if ((local_1 != '\0') && ((local_30d8 & 0xf000) == 0xa000)) {
                local_40 = FUN_0001013c(0x4e,0xffffffffffffff9c,local_30,local_1068,0x1000,0,0);
                if (-1 < local_40) {
                  local_1068[local_40] = '\0';
                }
                if (local_40 < 0) {
                  local_1 = '\0';
                  break;
                }
                if (local_1 != '\0') {
                  if (local_1068[0] == '/') {
                    FUN_0000ca14(local_30,local_1068);
                  }
                  else {
                    local_48 = (undefined1 *)FUN_0000c8c0(local_30,0x2f);
                    if (local_48 != (undefined1 *)0x0) {
                      *local_48 = 0;
                    }
                    FUN_0000cb1c(local_30,&local_68);
                    FUN_0000cb1c(local_30,local_1068);
                    local_1 = FUN_0000d7c4(local_30,0x1000);
                  }
                  local_50 = FUN_0000c448(local_30);
                  if ((local_50 != 0) && (local_30[local_50 + -1] == '/')) {
                    local_30[local_50 + -1] = '\0';
                  }
                }
              }
            }
          }
          local_10 = local_10 + local_18;
          if (*local_10 == '\0') break;
        }
        if (*local_30 == '\0') {
          FUN_0000ca14(local_30,&local_68);
        }
        if (local_1 != '\0') {
          FUN_0000ca14(acStack_3069 + 1,local_30);
        }
      }
      if ((local_1 != '\0') && (local_58 = FUN_0000c448(acStack_3069 + 1), param_3 < local_58)) {
        local_1 = '\0';
      }
      if (local_1 != '\0') {
        FUN_0000ca14(param_2,acStack_3069 + 1);
      }
    }
  }
  return local_1;
}

