// rea decompile_all
// name: FUN_0019428c
// address: 0x19428c
// body: available
// range: 0x19428c-0x194f2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019428c(int *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long unaff_x28;
  long local_90;
  int local_84;
  int local_74;
  
  lVar3 = 0x1bc5f58ba55ef325;
LAB_0019437c:
  lVar2 = lVar3;
  lVar3 = lVar2;
  if (-0x20dab432455fb61 < lVar2) {
    if (lVar2 < 0x311c935e01830eb3) {
      if (lVar2 < 0x1bc5f58ba55ef325) {
        if (lVar2 < 0x7db06d330e62225) {
          lVar3 = 0x5f93a196c4a67887;
          if ((lVar2 != -0x20dab432455fb60) && (lVar3 = lVar2, lVar2 == 0x3cc08657015b0ae)) {
            lVar3 = 0x35bee2b0222d28d1;
            if (unaff_x28 != 0) {
              lVar3 = -0x44a8830066c7000c;
            }
          }
        }
        else {
          lVar3 = 0x1c2e148a57fb0a73;
          if (lVar2 != 0x7db06d330e62225) {
            if (lVar2 == 0x10352d19fadd5089) {
              (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
              lVar3 = -0x20dab432455fb60;
              if (*param_1 != 0) {
                lVar3 = 0x2b5c96d5328e4b29;
              }
            }
            else {
              lVar3 = lVar2;
              if (lVar2 == 0x1965ef5d6c03c45a) {
                iVar1 = FUN_00212730(0,1,&DAT_0021f820);
                lVar3 = -0x384af7dcda25fa59;
                if (iVar1 != 0) {
                  lVar3 = -0x7a26aa04f63c2e3c;
                }
              }
            }
          }
        }
      }
      else if (lVar2 < 0x1f4f73e6d09f50f7) {
        lVar3 = -0x68d260166e73e49d;
        if ((lVar2 != 0x1bc5f58ba55ef325) && (lVar3 = lVar2, lVar2 == 0x1c2e148a57fb0a73)) {
          DAT_0021f81c = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_0021d9b4,&DAT_0021d9bc);
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x6b5dd7f8495e7441;
          if (lVar2 != 0) {
            lVar3 = -0x4acc02d50d17df27;
          }
        }
      }
      else if (lVar2 == 0x1f4f73e6d09f50f7) {
        DAT_0021d9b4 = DAT_0021d9b4 ^ 0x4e;
        DAT_0021d9b5 = DAT_0021d9b5 ^ 0x4e;
        DAT_0021d9b6 = DAT_0021d9b6 ^ 0x4e;
        DAT_0021d9b8 = DAT_0021d9b8 ^ 0x4e;
        DAT_0021d9b9 = DAT_0021d9b9 ^ 0x4e;
        DAT_0021d9ba = DAT_0021d9ba ^ 0x4e;
        DAT_0021d9b7 = DAT_0021d9b7 ^ 0x4e;
        DAT_0021f9d0 = '\x01';
        lVar3 = 0x1c2e148a57fb0a73;
      }
      else {
        lVar3 = 0x10352d19fadd5089;
        if ((lVar2 != 0x2aef154f79a0da70) && (lVar3 = lVar2, lVar2 == 0x2b5c96d5328e4b29)) {
          lVar3 = 0x311c935e01830eb3;
        }
      }
    }
    else {
      if (0x49a32c3f71935a85 < lVar2) {
        if (lVar2 < 0x583e6f07c6e46e67) {
          if (lVar2 == 0x49a32c3f71935a86) {
            lVar3 = 0x7db06d330e62225;
            if (DAT_0021f9d0 == '\0') {
              lVar3 = 0x1f4f73e6d09f50f7;
            }
          }
          else if (lVar2 == 0x4bd1aab37954523c) {
            DAT_0021f820 = 0;
            lVar3 = -0x4267b177b81111b4;
          }
        }
        else {
          if (lVar2 == 0x583e6f07c6e46e67) {
            local_84 = 0x1c;
            goto LAB_00194e0c;
          }
          if (lVar2 == 0x6b5dd7f8495e7441) {
            lVar3 = 0x452e8a0210942c23;
            if (local_90 != 0) {
              lVar3 = -0x556a9424a95c29d0;
            }
          }
          else if (lVar2 == 0x5f93a196c4a67887) {
            return;
          }
        }
        goto LAB_0019437c;
      }
      if (0x35bee2b0222d28d0 < lVar2) {
        if (lVar2 == 0x35bee2b0222d28d1) {
          lVar3 = 0x311c935e01830eb3;
        }
        else {
          if (lVar2 != 0x35f9e8fad92c7a8e) {
            if (lVar2 == 0x452e8a0210942c23) {
              local_74 = 0x11;
              goto LAB_00194368;
            }
            goto LAB_0019437c;
          }
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          lVar3 = -0x7e2d819d150dad44;
          if (unaff_x28 != 0) {
            lVar3 = 0x2aef154f79a0da70;
          }
        }
        *param_1 = 0x11;
        goto LAB_0019437c;
      }
      if (lVar2 == 0x311c935e01830eb3) {
        *param_3 = 0;
        lVar3 = 0x5f93a196c4a67887;
      }
      else if (lVar2 == 0x3263abe88ca5f0db) {
        lVar3 = -0x4267b177b81111b4;
      }
    }
    goto LAB_0019437c;
  }
  if (lVar2 < -0x44a8830066c7000c) {
    if (-0x556a9424a95c29d1 < lVar2) {
      if (lVar2 < -0x4f30f2c889a63f0a) {
        if (lVar2 == -0x556a9424a95c29d0) {
          lVar3 = (**(code **)(*param_2 + 0xe0))(param_2,unaff_x28,local_90);
          *param_3 = lVar3;
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x4f30f2c889a63f0a;
          if (lVar2 != 0) {
            lVar3 = 0x583e6f07c6e46e67;
          }
        }
        else if (lVar2 == -0x5509d9bf942c454a) {
          DAT_0021f924 = 0;
          unaff_x28 = (**(code **)(*param_2 + 0x30))(param_2,&DAT_0021e230);
          lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = 0x3cc08657015b0ae;
          if (lVar2 != 0) {
            lVar3 = 0x35f9e8fad92c7a8e;
          }
        }
      }
      else if (lVar2 == -0x4f30f2c889a63f0a) {
        lVar3 = -0x59a2bb59ae1ea724;
        if (*param_3 != 0) {
          lVar3 = -0x5a6cdb8e37c54ff7;
        }
      }
      else if (lVar2 == -0x4acc02d50d17df27) {
        local_84 = 0x11;
LAB_00194e0c:
        lVar3 = -0xe660101af902837;
      }
      else if (lVar2 == -0x452873ac1dc4f1ee) {
        DAT_0021e248 = DAT_0021e248 ^ 0x2e;
        DAT_0021e249 = DAT_0021e249 ^ 0x2e;
        DAT_0021e24a = DAT_0021e24a ^ 0x2e;
        DAT_0021e24b = DAT_0021e24b ^ 0x2e;
        _DAT_0021e230 = _DAT_0021e230 ^ 0x2e2e2e2e2e2e2e2e;
        uRam000000000021e238 = uRam000000000021e238 ^ 0x2e2e2e2e2e2e2e2e;
        DAT_0021e240 = DAT_0021e240 ^ 0x2e2e2e2e2e2e2e2e;
        DAT_0021fa10 = '\x01';
        lVar3 = -0x5509d9bf942c454a;
      }
      goto LAB_0019437c;
    }
    if (lVar2 < -0x68d260166e73e49d) {
      lVar3 = 0x311c935e01830eb3;
      if ((lVar2 != -0x7e2d819d150dad44) && (lVar3 = lVar2, lVar2 == -0x7a26aa04f63c2e3c)) {
        lVar3 = 0x1965ef5d6c03c45a;
      }
      goto LAB_0019437c;
    }
    if (lVar2 == -0x68d260166e73e49d) {
      iVar1 = FUN_00212730(0,1,&DAT_0021f924);
      lVar3 = -0x3ecf4ae5526b2773;
      if (iVar1 != 0) {
        lVar3 = -0x21fb391dfbb68eb6;
      }
      goto LAB_0019437c;
    }
    lVar3 = 0x10352d19fadd5089;
    if ((lVar2 == -0x5a6cdb8e37c54ff7) || (lVar3 = lVar2, lVar2 != -0x59a2bb59ae1ea724))
    goto LAB_0019437c;
    local_74 = 0x1c;
  }
  else {
    if (lVar2 < -0x29b381ad01d298ca) {
      if (lVar2 < -0x3ecf4ae5526b2773) {
        lVar3 = 0x1965ef5d6c03c45a;
        if ((lVar2 != -0x44a8830066c7000c) && (lVar3 = lVar2, lVar2 == -0x4267b177b81111b4)) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f81c);
          lVar3 = 0x49a32c3f71935a86;
          if (iVar1 != 0) {
            lVar3 = 0x3263abe88ca5f0db;
          }
        }
      }
      else if (lVar2 == -0x3ecf4ae5526b2773) {
        lVar3 = -0xb03dbd8ad309b99;
        if (DAT_0021fa10 == '\0') {
          lVar3 = -0x452873ac1dc4f1ee;
        }
      }
      else if (lVar2 == -0x384af7dcda25fa59) {
        lVar3 = -0x34c4a5597dc3532b;
        if (DAT_0021f9d1 == '\0') {
          lVar3 = -0x1da0928e3de4f30b;
        }
      }
      else if (lVar2 == -0x34c4a5597dc3532b) {
        lVar3 = 0x4bd1aab37954523c;
      }
      goto LAB_0019437c;
    }
    if (lVar2 < -0x1da0928e3de4f30b) {
      if (lVar2 == -0x29b381ad01d298ca) {
        *param_1 = local_74;
        lVar3 = 0x10352d19fadd5089;
      }
      else if (lVar2 == -0x21fb391dfbb68eb6) {
        lVar3 = -0x68d260166e73e49d;
      }
      goto LAB_0019437c;
    }
    if (lVar2 == -0x1da0928e3de4f30b) {
      DAT_0021d9bc = DAT_0021d9bc ^ 0xa4;
      DAT_0021d9bd = DAT_0021d9bd ^ 0xa4;
      DAT_0021d9be = DAT_0021d9be ^ 0xa4;
      DAT_0021d9bf = DAT_0021d9bf ^ 0xa4;
      DAT_0021f9d1 = '\x01';
      lVar3 = 0x4bd1aab37954523c;
      goto LAB_0019437c;
    }
    if (lVar2 != -0xe660101af902837) {
      if (lVar2 == -0xb03dbd8ad309b99) {
        lVar3 = -0x5509d9bf942c454a;
      }
      goto LAB_0019437c;
    }
    (**(code **)(*param_2 + 0x80))(param_2);
    (**(code **)(*param_2 + 0x88))(param_2);
    local_74 = local_84;
  }
LAB_00194368:
  lVar3 = -0x29b381ad01d298ca;
  goto LAB_0019437c;
}

