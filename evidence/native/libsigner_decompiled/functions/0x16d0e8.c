// rea decompile_all
// name: FUN_0016d0e8
// address: 0x16d0e8
// body: available
// range: 0x16d0e8-0x16db63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16db60 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016d0e8(int *param_1,long *param_2,long param_3,undefined8 param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x21;
  byte unaff_w24;
  byte local_b0;
  byte local_ac;
  long local_a8;
  long local_a0;
  long local_80;
  char local_74 [4];
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar1 = -0x76ca62710947274b;
  if (param_3 != 0) {
    lVar1 = 0x62ccc994e2cb7da3;
  }
  local_80 = 0;
  local_70 = 0;
  local_74[0] = '\0';
  lVar5 = -0x7dbc322ed98e3afb;
LAB_0016d1f4:
  do {
    while (lVar6 = lVar5, lVar5 = lVar6, -0x144ad6ddee249a63 < lVar6) {
      if (lVar6 < 0x361985fb5d496b76) {
        if (lVar6 < 0xf111d00f6a8edda) {
          if (lVar6 < -0x17196cb747ef8c5) {
            if (lVar6 == -0x144ad6ddee249a62) {
              DAT_0021f7d8 = 0;
              FUN_00174464(param_1,param_2,local_70,&DAT_0021d850,local_74);
              lVar5 = -0x5587caf0ffc9f6c4;
              if (*param_1 != 0) {
                lVar5 = 0x11389729d7590b94;
              }
            }
            else if (lVar6 == -0x12bc87502b2af86e) {
              (**(code **)(*param_2 + 0xb8))(param_2,unaff_x21);
LAB_0016d954:
              unaff_w24 = 1;
              lVar5 = -0x2701f7b957916a96;
            }
          }
          else {
            lVar5 = -0x361936ecac8b8986;
            if ((lVar6 != -0x17196cb747ef8c5) && (lVar5 = lVar6, lVar6 == 0xbccd62a0fc32d)) {
              DAT_0021d870 = DAT_0021d870 ^ 0x83;
              DAT_0021d871 = DAT_0021d871 ^ 0x83;
              DAT_0021d872 = DAT_0021d872 ^ 0x83;
              DAT_0021d873 = DAT_0021d873 ^ 0x83;
              DAT_0021d874 = DAT_0021d874 ^ 0x83;
              DAT_0021d875 = DAT_0021d875 ^ 0x83;
              _DAT_0021d850 = _DAT_0021d850 ^ 0x8383838383838383;
              uRam000000000021d858 = uRam000000000021d858 ^ 0x8383838383838383;
              _DAT_0021d860 = _DAT_0021d860 ^ 0x8383838383838383;
              uRam000000000021d868 = uRam000000000021d868 ^ 0x8383838383838383;
              DAT_0021f7d9 = '\x01';
              lVar5 = -0x144ad6ddee249a62;
            }
          }
        }
        else if (lVar6 < 0x1b4ac2f1f22e2589) {
          lVar5 = -0x12bc87502b2af86e;
          if ((lVar6 != 0xf111d00f6a8edda) && (lVar5 = lVar6, lVar6 == 0x11389729d7590b94)) {
            lVar5 = -0x12bc87502b2af86e;
          }
        }
        else {
          lVar5 = 0x7ffb850a0e6ed38d;
          if ((lVar6 != 0x1b4ac2f1f22e2589) && (lVar5 = lVar6, lVar6 == 0x24e5eef263e81b7c)) {
            FUN_001713e4(param_1,param_2,unaff_x21,&local_70);
            lVar5 = 0x3cd27908c3b8e652;
            if (*param_1 != 0) {
              lVar5 = -0x400e37f3caa97ab4;
            }
          }
        }
      }
      else if (lVar6 < 0x61d9685814f9d681) {
        if (lVar6 < 0x4b73c4e968047988) {
          if (lVar6 == 0x361985fb5d496b76) {
            FUN_001989ac(param_1,param_2,local_70,&local_80);
            lVar5 = -0x429b7b8ddead7976;
            if (*param_1 != 0) {
              lVar5 = 0x4b73c4e968047988;
            }
          }
          else if (lVar6 == 0x3cd27908c3b8e652) {
            lVar5 = -0x361936ecac8b8986;
          }
        }
        else {
          lVar5 = -0x12bc87502b2af86e;
          if ((lVar6 != 0x4b73c4e968047988) && (lVar5 = lVar6, lVar6 == 0x5ad71f292518d033)) {
            lVar5 = -0x2d23be9e4092ee55;
            if (*param_1 != 0) {
              lVar5 = -0x21c44217ce61bec8;
            }
          }
        }
      }
      else if (lVar6 < 0x6bbc6b8cc56478f1) {
        if (lVar6 == 0x61d9685814f9d681) {
          lVar5 = -0x5eedd7c897c0ed2a;
          if (DAT_0021f7d9 == '\0') {
            lVar5 = 0xbccd62a0fc32d;
          }
        }
        else if (lVar6 == 0x62ccc994e2cb7da3) {
          unaff_x21 = (**(code **)(*param_2 + 0x568))(param_2,param_4,(int)param_3 + -1);
          uVar4 = FUN_0016de70(param_2);
          local_b0 = unaff_x21 == 0;
          lVar5 = -0x65a31e6327338728;
          if ((uVar4 & 1) == 0 && !(bool)local_b0) {
            lVar5 = 0x24e5eef263e81b7c;
          }
        }
      }
      else {
        lVar5 = 0x5ad71f292518d033;
        if ((lVar6 != 0x6bbc6b8cc56478f1) && (lVar5 = lVar6, lVar6 == 0x7ffb850a0e6ed38d)) {
          local_a8 = local_80;
          local_70 = 0;
          lVar5 = -0x3180ec1dafce7d52;
          if ((local_ac & local_80 != 0) == 0) {
            lVar5 = 0x6bbc6b8cc56478f1;
          }
        }
      }
    }
    if (lVar6 < -0x429b7b8ddead7976) {
      if (-0x5f20efb5b92e6f75 < lVar6) {
        if (lVar6 < -0x5587caf0ffc9f6c4) {
          if (lVar6 == -0x5f20efb5b92e6f74) goto LAB_0016d954;
          if (lVar6 == -0x5eedd7c897c0ed2a) {
            lVar5 = -0x144ad6ddee249a62;
          }
        }
        else if (lVar6 == -0x5587caf0ffc9f6c4) {
          lVar5 = -0x6e4a13fb3d707c87;
          if (local_74[0] != '\0') {
            lVar5 = 0x361985fb5d496b76;
          }
        }
        else if (lVar6 == -0x4c94198a9ad36397) {
          if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        goto LAB_0016d1f4;
      }
      if (lVar6 < -0x6e4a13fb3d707c87) {
        lVar5 = lVar1;
        if ((lVar6 == -0x7dbc322ed98e3afb) || (lVar5 = lVar6, lVar6 != -0x76ca62710947274b))
        goto LAB_0016d1f4;
        lVar5 = -0x2701f7b957916a96;
        unaff_w24 = param_2 != (long *)0x0;
      }
      else if (lVar6 == -0x6e4a13fb3d707c87) {
        lVar5 = -0x12bc87502b2af86e;
      }
      else {
        if (lVar6 != -0x65a31e6327338728) goto LAB_0016d1f4;
        lVar5 = -0x5f20efb5b92e6f74;
        if ((local_b0 & 1) == 0) {
          lVar5 = 0xf111d00f6a8edda;
        }
      }
      *param_1 = 0x1b;
      goto LAB_0016d1f4;
    }
    if (lVar6 < -0x2d23be9e4092ee55) {
      if (lVar6 < -0x361936ecac8b8986) {
        if (lVar6 == -0x429b7b8ddead7976) {
          FUN_0016cae0(param_1,param_2,local_80,param_5,param_6);
          lVar5 = -0x12bc87502b2af86e;
        }
        else if (lVar6 == -0x400e37f3caa97ab4) {
          lVar5 = -0x12bc87502b2af86e;
        }
      }
      else if (lVar6 == -0x361936ecac8b8986) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f7d8);
        lVar5 = 0x61d9685814f9d681;
        if (iVar3 != 0) {
          lVar5 = -0x17196cb747ef8c5;
        }
      }
      else if (lVar6 == -0x3180ec1dafce7d52) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
        lVar5 = 0x5ad71f292518d033;
      }
    }
    else if (lVar6 < -0x21c44217ce61bec8) {
      lVar5 = -0x4c94198a9ad36397;
      if ((lVar6 != -0x2d23be9e4092ee55) && (lVar5 = lVar6, lVar6 == -0x2701f7b957916a96)) {
        local_a0 = local_70;
        lVar5 = -0x1f81af14a263eaa3;
        local_ac = unaff_w24;
        if ((unaff_w24 & local_70 != 0) == 0) {
          lVar5 = 0x1b4ac2f1f22e2589;
        }
      }
    }
    else if (lVar6 == -0x21c44217ce61bec8) {
      *param_5 = 0;
      *param_6 = 0;
      lVar5 = -0x4c94198a9ad36397;
    }
    else if (lVar6 == -0x1f81af14a263eaa3) {
      (**(code **)(*param_2 + 0xb8))(param_2,local_a0);
      lVar5 = 0x7ffb850a0e6ed38d;
    }
  } while( true );
}

