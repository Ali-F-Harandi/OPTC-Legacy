// rea decompile_all
// name: FUN_0016f5c4
// address: 0x16f5c4
// body: available
// range: 0x16f5c4-0x17014b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016f5c4(int *param_1,long *param_2,long param_3,long *param_4)

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
  
  lVar1 = 0xbccd62a0fc32d;
  if (param_3 != 0) {
    lVar1 = -0x144ad6ddee249a62;
  }
  lVar3 = -0x17196cb747ef8c5;
LAB_0016f6e0:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < -0x17196cb747ef8c5) {
      if (lVar4 < -0x429b7b8ddead7976) {
        if (lVar4 < -0x65a31e6327338728) {
          if (lVar4 < -0x7440f7630005660c) {
            lVar3 = -0x2701f7b957916a96;
            if ((lVar4 != -0x7e369e6589ba78e7) && (lVar3 = lVar4, lVar4 == -0x797daf6592e4222d)) {
              (**(code **)(*param_2 + 0xb8))(param_2,unaff_x27);
              lVar3 = -0x3ea1661ac6a1c4db;
              if (*param_1 != 0) {
                lVar3 = 0x727aabeac1ff5013;
              }
            }
          }
          else {
            lVar3 = -0x65a31e6327338728;
            if ((lVar4 != -0x7440f7630005660c) && (lVar3 = lVar4, lVar4 == -0x6e4a13fb3d707c87)) {
              lVar3 = 0x361985fb5d496b76;
            }
          }
        }
        else if (lVar4 < -0x5eedd7c897c0ed2a) {
          if (lVar4 == -0x65a31e6327338728) {
            DAT_0021f7f4 = 0;
            lVar3 = 0xf111d00f6a8edda;
          }
          else if (lVar4 == -0x5f20efb5b92e6f74) {
            lVar3 = 0xf111d00f6a8edda;
          }
        }
        else {
          lVar3 = 0x57cabee7967ab664;
          if (lVar4 != -0x5eedd7c897c0ed2a) {
            if (lVar4 == -0x5587caf0ffc9f6c4) {
              local_84 = 0x11;
LAB_0016fe54:
              lVar3 = 0x3485297baf428faf;
            }
            else {
              lVar3 = lVar4;
              if (lVar4 == -0x4c94198a9ad36397) {
                (**(code **)(*param_2 + 0x80))(param_2);
                (**(code **)(*param_2 + 0x88))(param_2);
                lVar3 = -0x5eedd7c897c0ed2a;
                if (unaff_x27 != 0) {
                  lVar3 = 0x61d9685814f9d681;
                }
                *param_1 = 0x11;
              }
            }
          }
        }
      }
      else if (lVar4 < -0x2701f7b957916a96) {
        if (lVar4 < -0x3180ec1dafce7d52) {
          if (lVar4 == -0x429b7b8ddead7976) {
            DAT_0021d8c4 = DAT_0021d8c4 ^ 0x9c;
            DAT_0021d8c5 = DAT_0021d8c5 ^ 0x9c;
            DAT_0021d8c6 = DAT_0021d8c6 ^ 0x9c;
            DAT_0021d8c7 = DAT_0021d8c7 ^ 0x9c;
            DAT_0021d8c8 = DAT_0021d8c8 ^ 0x9c;
            DAT_0021f9c6 = '\x01';
            lVar3 = -0x65a31e6327338728;
          }
          else if (lVar4 == -0x3ea1661ac6a1c4db) {
            lVar3 = 0x6230bf87be098d5d;
          }
        }
        else if (lVar4 == -0x3180ec1dafce7d52) {
          local_88 = 0x1b;
LAB_00170110:
          lVar3 = 0x5ebfca74eead21cf;
        }
        else if (lVar4 == -0x2d23be9e4092ee55) {
          lVar3 = -0x797daf6592e4222d;
        }
      }
      else if (lVar4 < -0x1f81af14a263eaa3) {
        if (lVar4 == -0x2701f7b957916a96) {
          DAT_0021f7f0 = 0;
          local_90 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x27,&DAT_0021d8b8,&DAT_0021d8c4);
          lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
          lVar3 = -0x1f81af14a263eaa3;
          if (lVar4 != 0) {
            lVar3 = 0x1b4ac2f1f22e2589;
          }
        }
        else if (lVar4 == -0x21c44217ce61bec8) {
          local_74 = 0x1b;
          goto LAB_0016f6cc;
        }
      }
      else if (lVar4 == -0x1f81af14a263eaa3) {
        lVar3 = 0x7ffb850a0e6ed38d;
        if (local_90 != 0) {
          lVar3 = 0x6bbc6b8cc56478f1;
        }
      }
      else if (lVar4 == -0x144ad6ddee249a62) {
        unaff_x27 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x11389729d7590b94;
        if (lVar4 != 0) {
          lVar3 = -0x4c94198a9ad36397;
        }
      }
      else if (lVar4 == -0x12bc87502b2af86e) {
        DAT_0021d8c0 = DAT_0021d8c0 ^ 0xd5;
        DAT_0021d8c1 = DAT_0021d8c1 ^ 0xd5;
        DAT_0021d8c2 = DAT_0021d8c2 ^ 0xd5;
        DAT_0021d8c3 = DAT_0021d8c3 ^ 0xd5;
        DAT_0021d8b8 = DAT_0021d8b8 ^ 0xd5d5d5d5d5d5d5d5;
        DAT_0021f9c5 = '\x01';
        lVar3 = -0x2701f7b957916a96;
      }
    }
    if (lVar4 < 0x57cabee7967ab664) {
      if (lVar4 < 0x1b4ac2f1f22e2589) {
        if (lVar4 < 0xf111d00f6a8edda) {
          lVar3 = lVar1;
          if ((lVar4 != -0x17196cb747ef8c5) && (lVar3 = lVar4, lVar4 == 0xbccd62a0fc32d)) {
            local_84 = 3;
            goto LAB_0016fe54;
          }
        }
        else if (lVar4 == 0xf111d00f6a8edda) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f7f0);
          lVar3 = 0x7bca060775e09e1e;
          if (iVar2 != 0) {
            lVar3 = -0x5f20efb5b92e6f74;
          }
        }
        else if (lVar4 == 0x11389729d7590b94) {
          lVar3 = -0x5587caf0ffc9f6c4;
          if (unaff_x27 != 0) {
            lVar3 = -0x6e4a13fb3d707c87;
          }
        }
      }
      else if (lVar4 < 0x361985fb5d496b76) {
        if (lVar4 == 0x1b4ac2f1f22e2589) {
          local_88 = 0x11;
          goto LAB_00170110;
        }
        if (lVar4 == 0x3485297baf428faf) {
          *param_1 = local_84;
          lVar3 = 0x57cabee7967ab664;
        }
      }
      else if (lVar4 == 0x361985fb5d496b76) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f7f4);
        lVar3 = 0x39a16bddf8dc82a2;
        if (iVar2 != 0) {
          lVar3 = 0x4b73c4e968047988;
        }
      }
      else if (lVar4 == 0x39a16bddf8dc82a2) {
        lVar3 = -0x7440f7630005660c;
        if (DAT_0021f9c6 == '\0') {
          lVar3 = -0x429b7b8ddead7976;
        }
      }
      else if (lVar4 == 0x4b73c4e968047988) {
        lVar3 = 0x361985fb5d496b76;
      }
      goto LAB_0016f6e0;
    }
    if (lVar4 < 0x6bbc6b8cc56478f1) {
      if (lVar4 < 0x5ebfca74eead21cf) {
        if (lVar4 == 0x57cabee7967ab664) {
          *param_4 = 0;
          lVar3 = 0x6230bf87be098d5d;
        }
        else if (lVar4 == 0x5ad71f292518d033) {
          lVar3 = -0x21c44217ce61bec8;
          if (*param_4 != 0) {
            lVar3 = -0x2d23be9e4092ee55;
          }
        }
      }
      else {
        if (lVar4 == 0x5ebfca74eead21cf) {
          (**(code **)(*param_2 + 0x80))(param_2);
          (**(code **)(*param_2 + 0x88))(param_2);
          local_74 = local_88;
          goto LAB_0016f6cc;
        }
        lVar3 = -0x797daf6592e4222d;
        if ((lVar4 != 0x61d9685814f9d681) && (lVar3 = lVar4, lVar4 == 0x6230bf87be098d5d)) {
          return;
        }
      }
    }
    else if (lVar4 < 0x78ac43fddd7c64db) {
      if (lVar4 == 0x6bbc6b8cc56478f1) {
        lVar3 = (**(code **)(*param_2 + 0x110))(param_2,param_3,local_90);
        *param_4 = lVar3;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = 0x5ad71f292518d033;
        if (lVar4 != 0) {
          lVar3 = -0x3180ec1dafce7d52;
        }
      }
      else if (lVar4 == 0x727aabeac1ff5013) {
        lVar3 = 0x57cabee7967ab664;
      }
    }
    else if (lVar4 == 0x78ac43fddd7c64db) {
      *param_1 = local_74;
      lVar3 = -0x797daf6592e4222d;
    }
    else if (lVar4 == 0x7bca060775e09e1e) {
      lVar3 = -0x7e369e6589ba78e7;
      if (DAT_0021f9c5 == '\0') {
        lVar3 = -0x12bc87502b2af86e;
      }
    }
    else if (lVar4 == 0x7ffb850a0e6ed38d) {
      local_74 = 0x11;
LAB_0016f6cc:
      lVar3 = 0x78ac43fddd7c64db;
    }
  } while( true );
}

