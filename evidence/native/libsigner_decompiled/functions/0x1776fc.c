// rea decompile_all
// name: FUN_001776fc
// address: 0x1776fc
// body: available
// range: 0x1776fc-0x17826f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001776fc(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = -0x1a8475fc33e49a53;
  if (param_3 != 0) {
    lVar1 = -0x428a0360f09cf896;
  }
  lVar4 = 0x458dd5089ea47cbf;
LAB_00177800:
  do {
    while (lVar3 = lVar4, lVar4 = lVar3, 0x7ad01f4ce7fcfcf < lVar3) {
      if (lVar3 < 0x4226403d663a6810) {
        if (lVar3 < 0x1c1c310a228ac2a9) {
          if (lVar3 < 0x10b777a2e53bf464) {
            lVar4 = 0x63bbcc091317fb15;
            if ((lVar3 != 0x7ad01f4ce7fcfd0) && (lVar4 = lVar3, lVar3 == 0xb3b33d71d8d6f20)) {
              lVar4 = -0x29c67e336c47e1dc;
            }
          }
          else {
            lVar4 = 0x1c1c310a228ac2a9;
            if ((lVar3 != 0x10b777a2e53bf464) && (lVar4 = lVar3, lVar3 == 0x127621f9d64210bf)) {
              lVar4 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
              *param_4 = lVar4;
              lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
              lVar4 = -0x688f0c6a303d33c9;
              if (lVar3 != 0) {
                lVar4 = -0x1fb42f4afc2a4561;
              }
            }
          }
        }
        else if (lVar3 < 0x2a8e14484c7eb6ff) {
          if (lVar3 == 0x1c1c310a228ac2a9) {
            *param_4 = 0;
            lVar4 = -0x509477aabdb8c18b;
          }
          else if (lVar3 == 0x1ed7d5e602d25831) {
            lVar4 = -0x49aaab148acb89d3;
          }
        }
        else if (lVar3 == 0x2a8e14484c7eb6ff) {
          (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
          lVar4 = -0x23d4600e691b72ff;
          if (*param_1 != 0) {
            lVar4 = 0x791c5ebca78797be;
          }
        }
        else if (lVar3 == 0x2b4cb855a4e2ca81) {
          *param_1 = local_84;
          lVar4 = 0x1c1c310a228ac2a9;
        }
        else if (lVar3 == 0x2d2505df37d70c06) {
          *param_1 = local_74;
          lVar4 = 0x2a8e14484c7eb6ff;
        }
      }
      else if (lVar3 < 0x4a846006da9a83ad) {
        if (lVar3 < 0x458dd5089ea47cbf) {
          if (lVar3 == 0x4226403d663a6810) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            local_74 = local_88;
LAB_001777ec:
            lVar4 = 0x2d2505df37d70c06;
          }
          else if (lVar3 == 0x42d35ffe0640f9e7) {
            lVar4 = -0x6d88891aa2376f3c;
          }
        }
        else {
          lVar4 = lVar1;
          if ((lVar3 != 0x458dd5089ea47cbf) && (lVar4 = lVar3, lVar3 == 0x475137ed6151bf62)) {
            local_84 = 0x11;
LAB_00178080:
            lVar4 = 0x2b4cb855a4e2ca81;
          }
        }
      }
      else if (lVar3 < 0x6948821d17121736) {
        if (lVar3 == 0x4a846006da9a83ad) {
          lVar4 = 0x7ad01f4ce7fcfd0;
          if (DAT_0021f9d7 == '\0') {
            lVar4 = -0x3d74c5be586ed41;
          }
        }
        else if (lVar3 == 0x63bbcc091317fb15) {
          DAT_0021f838 = 0;
          lVar4 = -0x29c67e336c47e1dc;
        }
      }
      else if (lVar3 == 0x6948821d17121736) {
        lVar4 = 0x475137ed6151bf62;
        if (unaff_x27 != 0) {
          lVar4 = 0x42d35ffe0640f9e7;
        }
      }
      else if (lVar3 == 0x6972f83ab6de3be2) {
        local_88 = 0x11;
LAB_001781b4:
        lVar4 = 0x4226403d663a6810;
      }
      else if (lVar3 == 0x791c5ebca78797be) {
        lVar4 = 0x1c1c310a228ac2a9;
      }
    }
    if (-0x428a0360f09cf897 < lVar3) {
      if (lVar3 < -0x1fb42f4afc2a4561) {
        if (lVar3 < -0x250717f80b2e0d24) {
          if (lVar3 == -0x428a0360f09cf896) {
            unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
            lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
            lVar4 = 0x6948821d17121736;
            if (lVar3 != 0) {
              lVar4 = -0x4fb630b9d3e5e263;
            }
          }
          else if (lVar3 == -0x29c67e336c47e1dc) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f834);
            lVar4 = -0x77727add0cfc4ea3;
            if (iVar2 != 0) {
              lVar4 = 0xb3b33d71d8d6f20;
            }
          }
        }
        else {
          if (lVar3 == -0x250717f80b2e0d24) {
            local_74 = 0x11;
            goto LAB_001777ec;
          }
          if (lVar3 == -0x23d4600e691b72ff) {
            lVar4 = -0x509477aabdb8c18b;
          }
        }
      }
      else if (lVar3 < -0x1a8475fc33e49a53) {
        if (lVar3 == -0x1fb42f4afc2a4561) {
          local_88 = 0x1b;
          goto LAB_001781b4;
        }
        if (lVar3 == -0x1aae3d37372759c8) {
          lVar4 = 0x2a8e14484c7eb6ff;
        }
      }
      else {
        if (lVar3 == -0x1a8475fc33e49a53) {
          local_84 = 3;
          goto LAB_00178080;
        }
        lVar4 = -0x6d88891aa2376f3c;
        if ((lVar3 != -0x3e1b758c85bc171) && (lVar4 = lVar3, lVar3 == -0x3d74c5be586ed41)) {
          DAT_0021da70 = DAT_0021da70 ^ 0x38;
          DAT_0021da71 = DAT_0021da71 ^ 0x38;
          DAT_0021da72 = DAT_0021da72 ^ 0x38;
          DAT_0021da73 = DAT_0021da73 ^ 0x38;
          DAT_0021da74 = DAT_0021da74 ^ 0x38;
          _DAT_0021da60 = _DAT_0021da60 ^ 0x3838383838383838;
          uRam000000000021da68 = uRam000000000021da68 ^ 0x3838383838383838;
          DAT_0021f9d7 = '\x01';
          lVar4 = 0x63bbcc091317fb15;
        }
      }
      goto LAB_00177800;
    }
    if (lVar3 < -0x51299b355fbf8ed8) {
      if (lVar3 < -0x6d88891aa2376f3c) {
        if (lVar3 == -0x78b1e6d77f15432a) {
          DAT_0021da50 = DAT_0021da50 ^ 0x8b;
          DAT_0021da48 = DAT_0021da48 ^ 0x8b8b8b8b8b8b8b8b;
          DAT_0021f9d6 = '\x01';
          lVar4 = -0x49aaab148acb89d3;
        }
        else if (lVar3 == -0x77727add0cfc4ea3) {
          lVar4 = 0x1ed7d5e602d25831;
          if (DAT_0021f9d6 == '\0') {
            lVar4 = -0x78b1e6d77f15432a;
          }
        }
      }
      else if (lVar3 == -0x6d88891aa2376f3c) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f838);
        lVar4 = 0x4a846006da9a83ad;
        if (iVar2 != 0) {
          lVar4 = -0x3e1b758c85bc171;
        }
      }
      else if (lVar3 == -0x688f0c6a303d33c9) {
        lVar4 = -0x51299b355fbf8ed8;
        if (*param_4 != 0) {
          lVar4 = -0x1aae3d37372759c8;
        }
      }
      else if (lVar3 == -0x584a77e86318ca40) {
        lVar4 = 0x2a8e14484c7eb6ff;
      }
    }
    else if (lVar3 < -0x4bcf27f8b1692c9f) {
      if (lVar3 == -0x51299b355fbf8ed8) {
        local_74 = 0x1b;
        goto LAB_001777ec;
      }
      if (lVar3 == -0x4fb630b9d3e5e263) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar4 = 0x10b777a2e53bf464;
        if (unaff_x27 != 0) {
          lVar4 = -0x584a77e86318ca40;
        }
        *param_1 = 0x11;
      }
      else if (lVar3 == -0x509477aabdb8c18b) {
        return;
      }
    }
    else if (lVar3 == -0x4bcf27f8b1692c9f) {
      lVar4 = -0x250717f80b2e0d24;
      if (local_90 != 0) {
        lVar4 = 0x127621f9d64210bf;
      }
    }
    else if (lVar3 == -0x49aaab148acb89d3) {
      DAT_0021f834 = 0;
      local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021da48,&DAT_0021da60);
      lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
      lVar4 = -0x4bcf27f8b1692c9f;
      if (lVar3 != 0) {
        lVar4 = 0x6972f83ab6de3be2;
      }
    }
  } while( true );
}

