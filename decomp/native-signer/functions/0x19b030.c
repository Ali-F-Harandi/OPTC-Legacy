// rea decompile_all
// name: FUN_0019b030
// address: 0x19b030
// body: available
// range: 0x19b030-0x19bb7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019b030(int *param_1,long *param_2,long param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long unaff_x27;
  long local_90;
  int local_88;
  int local_84;
  int local_74;
  
  lVar1 = -0x2df588f0e78fb9d0;
  if (param_3 != 0) {
    lVar1 = 0x1930bd59f5c5006;
  }
  lVar3 = -0x6136e70a5583634b;
LAB_0019b134:
  while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x65dfca2b27b3e8b) {
    if (lVar4 < -0x3a4d9f57c2c35a06) {
      if (lVar4 < -0x65a16f35d9b4bc35) {
        if (lVar4 < -0x6ebe55d317f42c39) {
          if (lVar4 == -0x7e9fb96f7264edcc) {
            DAT_0021da70 = DAT_0021da70 ^ 0x38;
            DAT_0021da71 = DAT_0021da71 ^ 0x38;
            DAT_0021da72 = DAT_0021da72 ^ 0x38;
            DAT_0021da73 = DAT_0021da73 ^ 0x38;
            DAT_0021da74 = DAT_0021da74 ^ 0x38;
            _DAT_0021da60 = _DAT_0021da60 ^ 0x3838383838383838;
            uRam000000000021da68 = uRam000000000021da68 ^ 0x3838383838383838;
            DAT_0021f9d7 = '\x01';
            lVar3 = 0x33791bb6a7b3e54e;
          }
          else if (lVar4 == -0x7b0836634360dd49) {
            lVar3 = 0x1ec95b13cd9877cd;
            if (local_90 != 0) {
              lVar3 = -0x65a16f35d9b4bc35;
            }
          }
        }
        else {
          lVar3 = 0x7e75e27b18f6ce17;
          if (((lVar4 != -0x6cf0e1f85219066f) &&
              (lVar3 = 0x33791bb6a7b3e54e, lVar4 != -0x6b6767c613170e43)) &&
             (lVar3 = lVar4, lVar4 == -0x6ebe55d317f42c39)) {
            return;
          }
        }
      }
      else if (lVar4 < -0x4afefde29e9fdaa8) {
        if (lVar4 == -0x65a16f35d9b4bc35) {
          lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
          *param_4 = lVar3;
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x3d0c6a4b16b08afb;
          if (lVar4 != 0) {
            lVar3 = -0x43f5ac3d0297344d;
          }
        }
        else if (lVar4 == -0x6136e70a5583634b) {
          lVar3 = lVar1;
        }
      }
      else if (lVar4 == -0x4afefde29e9fdaa8) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f838);
        lVar3 = 0x464eba2f39f7f0b2;
        if (iVar2 != 0) {
          lVar3 = 0x251737c6e7f43d74;
        }
      }
      else if (lVar4 == -0x49a064a695766e65) {
        *param_1 = local_84;
        lVar3 = 0x64d8d5c3a12586ab;
      }
      else if (lVar4 == -0x43f5ac3d0297344d) {
        local_88 = 0x1b;
        goto LAB_0019b9f4;
      }
    }
    else if (lVar4 < -0x171cc8548f589699) {
      if (lVar4 < -0x2df588f0e78fb9d0) {
        if (lVar4 == -0x3a4d9f57c2c35a06) {
          lVar3 = 0xc8111e814a0e067;
          if (unaff_x27 != 0) {
            lVar3 = 0x65dfca2b27b3e8b;
          }
        }
        else if (lVar4 == -0x34a629dd58525f30) {
          lVar3 = -0x5f46c5760953fe9;
        }
      }
      else if (lVar4 == -0x2df588f0e78fb9d0) {
        local_84 = 3;
LAB_0019bb44:
        lVar3 = -0x49a064a695766e65;
      }
      else if (lVar4 == -0x21872a524d552a7f) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar3 = 0x439ee8b95422dc9d;
        if (unaff_x27 != 0) {
          lVar3 = -0x60c563096a6c011;
        }
        *param_1 = 0x11;
      }
    }
    else if (lVar4 < -0x60c563096a6c011) {
      if (lVar4 == -0x171cc8548f589699) {
        *param_1 = local_74;
        lVar3 = 0x72247866f6bafb10;
      }
      else if (lVar4 == -0x13c8e1371760ca3c) {
        DAT_0021e478 = DAT_0021e478 ^ 0x9595959595959595;
        DAT_0021fa22 = '\x01';
        lVar3 = 0x7e75e27b18f6ce17;
      }
    }
    else {
      lVar3 = 0x72247866f6bafb10;
      if (lVar4 != -0x60c563096a6c011) {
        if (lVar4 == -0x5f46c5760953fe9) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f96c);
          lVar3 = 0xb004c0b537c953c;
          if (iVar2 != 0) {
            lVar3 = -0x34a629dd58525f30;
          }
        }
        else {
          lVar3 = lVar4;
          if (lVar4 == 0x1930bd59f5c5006) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar3 = -0x3a4d9f57c2c35a06;
            if (lVar4 != 0) {
              lVar3 = -0x21872a524d552a7f;
            }
          }
        }
      }
    }
  }
  if (lVar4 < 0x439ee8b95422dc9d) {
    if (0x251737c6e7f43d73 < lVar4) {
      if (lVar4 < 0x39a88526a3976260) {
        lVar3 = -0x4afefde29e9fdaa8;
        if ((lVar4 != 0x251737c6e7f43d74) && (lVar3 = lVar4, lVar4 == 0x33791bb6a7b3e54e)) {
          DAT_0021f838 = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021e478,&DAT_0021da60);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x7b0836634360dd49;
          if (lVar4 != 0) {
            lVar3 = 0x7d4ab20834d0cf78;
          }
        }
      }
      else {
        lVar3 = 0x64d8d5c3a12586ab;
        if (lVar4 != 0x39a88526a3976260) {
          if (lVar4 == 0x3d0c6a4b16b08afb) {
            lVar3 = 0x4cdb0353d1b20c47;
            if (*param_4 != 0) {
              lVar3 = 0x77c0b3434a9a3b75;
            }
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x3eaca1abd0e6cb81) {
              lVar3 = -0x6ebe55d317f42c39;
            }
          }
        }
      }
      goto LAB_0019b134;
    }
    if (lVar4 < 0xc8111e814a0e067) {
      lVar3 = -0x5f46c5760953fe9;
      if ((lVar4 != 0x65dfca2b27b3e8b) && (lVar3 = lVar4, lVar4 == 0xb004c0b537c953c)) {
        lVar3 = -0x6cf0e1f85219066f;
        if (DAT_0021fa22 == '\0') {
          lVar3 = -0x13c8e1371760ca3c;
        }
      }
      goto LAB_0019b134;
    }
    if (lVar4 == 0xc8111e814a0e067) {
      local_84 = 0x11;
      goto LAB_0019bb44;
    }
    if (lVar4 != 0x1ec95b13cd9877cd) goto LAB_0019b134;
    local_74 = 0x11;
  }
  else {
    if (0x64d8d5c3a12586aa < lVar4) {
      if (lVar4 < 0x77c0b3434a9a3b75) {
        if (lVar4 == 0x64d8d5c3a12586ab) {
          *param_4 = 0;
          lVar3 = -0x6ebe55d317f42c39;
        }
        else if (lVar4 == 0x72247866f6bafb10) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar3 = 0x3eaca1abd0e6cb81;
          if (*param_1 != 0) {
            lVar3 = 0x39a88526a3976260;
          }
        }
      }
      else {
        lVar3 = 0x72247866f6bafb10;
        if (lVar4 != 0x77c0b3434a9a3b75) {
          if (lVar4 == 0x7d4ab20834d0cf78) {
            local_88 = 0x11;
LAB_0019b9f4:
            lVar3 = 0x576305ef78ae3d7a;
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x7e75e27b18f6ce17) {
              DAT_0021f96c = 0;
              lVar3 = -0x4afefde29e9fdaa8;
            }
          }
        }
      }
      goto LAB_0019b134;
    }
    if (lVar4 < 0x4cdb0353d1b20c47) {
      lVar3 = 0x64d8d5c3a12586ab;
      if ((lVar4 != 0x439ee8b95422dc9d) && (lVar3 = lVar4, lVar4 == 0x464eba2f39f7f0b2)) {
        lVar3 = -0x6b6767c613170e43;
        if (DAT_0021f9d7 == '\0') {
          lVar3 = -0x7e9fb96f7264edcc;
        }
      }
      goto LAB_0019b134;
    }
    if (lVar4 == 0x4cdb0353d1b20c47) {
      local_74 = 0x1b;
    }
    else {
      if (lVar4 != 0x576305ef78ae3d7a) goto LAB_0019b134;
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      local_74 = local_88;
    }
  }
  lVar3 = -0x171cc8548f589699;
  goto LAB_0019b134;
}

