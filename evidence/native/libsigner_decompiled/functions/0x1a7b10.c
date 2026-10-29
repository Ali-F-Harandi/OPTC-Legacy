// rea decompile_all
// name: FUN_001a7b10
// address: 0x1a7b10
// body: available
// range: 0x1a7b10-0x1a8943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a8940 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001a7b10(long *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x26;
  uint unaff_w28;
  undefined1 auStack_c0 [8];
  long local_b8;
  uint local_ac;
  undefined8 local_a8;
  undefined8 *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  long *local_70;
  long local_68;
  
  local_a8 = param_3;
  local_a0 = param_4;
  local_b8 = tpidr_el0;
  local_68 = *(long *)(local_b8 + 0x28);
  puVar3 = (undefined8 *)auStack_c0;
  lVar1 = 0x1b4ac2f1f22e2589;
LAB_001a7bc8:
  lVar5 = lVar1;
  plVar2 = local_70;
  lVar1 = lVar5;
  if (lVar5 < 0xdc8188db88ec11b) {
    if (lVar5 < -0x2d23be9e4092ee55) {
      if (-0x56bb61885886ae55 < lVar5) {
        if (lVar5 < -0x3ea1661ac6a1c4db) {
          lVar1 = 0x78ac43fddd7c64db;
          if (lVar5 != -0x56bb61885886ae54) {
            if (lVar5 == -0x503101e48cc58732) {
              local_ac = unaff_w28;
              local_80 = *unaff_x19;
              lVar1 = -0x73716f9563fa402;
              if (*unaff_x19 == 0 || param_1 == (long *)0x0) {
                lVar1 = 0x1b91058c21da9ca7;
              }
            }
            else {
              lVar1 = lVar5;
              if (lVar5 == -0x4c94198a9ad36397) {
                lVar1 = 0x61d9685814f9d681;
              }
            }
          }
        }
        else {
          if (lVar5 == -0x3ea1661ac6a1c4db) goto LAB_001a7bb4;
          lVar1 = -0xf8d0ba03b2e0b85;
          if ((lVar5 != -0x38b0832f7743f2b8) && (lVar1 = lVar5, lVar5 == -0x3180ec1dafce7d52)) {
            DAT_0021fa3c = 0;
            unaff_x19 = puVar3 + -2;
            local_70 = puVar3 + -4;
            unaff_x26 = puVar3 + -6;
            unaff_x20 = puVar3 + -8;
            puVar6 = puVar3 + -10;
            puVar3[-2] = 0;
            puVar3[-4] = 0;
            puVar3[-6] = 0;
            puVar3[-8] = 0;
            puVar3[-10] = 0;
            local_78 = puVar6;
            FUN_0018117c(param_2,param_1,&DAT_0021e6d0,unaff_x19);
            puVar3 = puVar6;
            lVar1 = -0x2d23be9e4092ee55;
            if (*param_2 != 0) {
              lVar1 = 0x5ad71f292518d033;
            }
          }
        }
        goto LAB_001a7bc8;
      }
      if (lVar5 < -0x797daf6592e4222d) {
        if (lVar5 == -0x7e369e6589ba78e7) {
          DAT_0021fa44 = 0;
          FUN_00171f80(param_2,param_1,&DAT_0021e6f0,unaff_x20);
          lVar1 = -0x7440f7630005660c;
          if (*param_2 != 0) {
            lVar1 = 0x39a16bddf8dc82a2;
          }
        }
        else if (lVar5 == -0x7ad67c16664e25fa) {
          FUN_00173900(param_2,param_1,*unaff_x20,local_a8,local_78);
          lVar1 = 0x1552bb494d897f7e;
          if (*param_2 != 0) {
            lVar1 = -0x23395a9e9c848352;
          }
        }
        goto LAB_001a7bc8;
      }
      if (lVar5 != -0x797daf6592e4222d) {
        if (lVar5 == -0x7440f7630005660c) {
          FUN_00172ef4(param_2,param_1,*unaff_x20,2,*unaff_x26);
          lVar1 = -0x7ad67c16664e25fa;
          if (*param_2 != 0) {
            lVar1 = 0x4d5d50fcdd4992d2;
          }
        }
        else if (lVar5 == -0x5eedd7c897c0ed2a) {
          lVar1 = 0x61d9685814f9d681;
        }
        goto LAB_001a7bc8;
      }
    }
    else {
      if (-0x1d6a050721dd3e22 < lVar5) {
        if (lVar5 < -0x73716f9563fa402) {
          if (lVar5 == -0x1d6a050721dd3e21) {
            lVar1 = -0x56bb61885886ae54;
            if (DAT_0021fa52 == '\0') {
              lVar1 = 0x5ebfca74eead21cf;
            }
          }
          else if (lVar5 == -0x1600a62692a3eebb) {
            lVar1 = 0x41a203875b031c3;
            if (DAT_0021fa51 == '\0') {
              lVar1 = 0x6bbc6b8cc56478f1;
            }
          }
          else if (lVar5 == -0xf8d0ba03b2e0b85) {
            lVar5 = *unaff_x20;
            *unaff_x26 = 0;
            local_98 = lVar5;
            lVar1 = 0x5f1d0a7f6212d984;
            if (lVar5 == 0 || param_1 == (long *)0x0) {
              lVar1 = 0x719dbab015af25c6;
            }
          }
        }
        else if (lVar5 == -0x73716f9563fa402) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_80);
          lVar1 = 0x2352f2d6b10786ab;
        }
        else {
          lVar1 = -0x3180ec1dafce7d52;
          if ((lVar5 != 0x41a203875b031c3) && (lVar1 = lVar5, lVar5 == 0x2ea5ec9aa4903e5)) {
            if (*(long *)(local_b8 + 0x28) == local_68) {
              return local_ac & 1;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        goto LAB_001a7bc8;
      }
      if (lVar5 < -0x220211bfb882d8f5) {
        if (lVar5 == -0x2d23be9e4092ee55) {
          FUN_001821f0(param_2,param_1,*unaff_x19,0);
          lVar1 = -0x4c94198a9ad36397;
          if (*param_2 != 0) {
            lVar1 = -0x21c44217ce61bec8;
          }
        }
        else {
          if (lVar5 == -0x23395a9e9c848352) goto LAB_001a7bb4;
          if (lVar5 == -0x22526e95d736601f) {
            lVar1 = 0x5127e420c2beb41f;
          }
        }
        goto LAB_001a7bc8;
      }
      lVar1 = -0x7e369e6589ba78e7;
      if (lVar5 == -0x220211bfb882d8f5) goto LAB_001a7bc8;
      if (lVar5 != -0x21c44217ce61bec8) {
        lVar1 = lVar5;
        if (lVar5 == -0x1f81af14a263eaa3) {
          iVar4 = FUN_00212730(0,1,&DAT_0021fa3c);
          lVar1 = -0x1600a62692a3eebb;
          if (iVar4 != 0) {
            lVar1 = 0x7ffb850a0e6ed38d;
          }
        }
        goto LAB_001a7bc8;
      }
    }
  }
  else if (lVar5 < 0x57cabee7967ab664) {
    if (lVar5 < 0x2352f2d6b10786ab) {
      if (lVar5 < 0x1552bb494d897f7e) {
        if (lVar5 == 0xdc8188db88ec11b) {
          lVar1 = -0x220211bfb882d8f5;
          if (DAT_0021fa53 == '\0') {
            lVar1 = 0x7bca060775e09e1e;
          }
        }
        else if (lVar5 == 0xf8f9546f45fbb47) {
          (**(code **)(*param_1 + 0xb8))(param_1,local_88);
          lVar1 = 0x5127e420c2beb41f;
        }
      }
      else if (lVar5 == 0x1552bb494d897f7e) {
        unaff_w28 = 1;
        *local_a0 = *local_78;
        lVar1 = -0x503101e48cc58732;
      }
      else {
        lVar1 = -0x1f81af14a263eaa3;
        if ((lVar5 != 0x1b4ac2f1f22e2589) && (lVar1 = lVar5, lVar5 == 0x1b91058c21da9ca7)) {
          lVar1 = 0x2352f2d6b10786ab;
        }
      }
      goto LAB_001a7bc8;
    }
    if (lVar5 < 0x3c2595d6266c5998) {
      if (lVar5 == 0x2352f2d6b10786ab) {
        *unaff_x19 = 0;
        local_88 = *plVar2;
        lVar1 = 0xf8f9546f45fbb47;
        if (*plVar2 == 0 || param_1 == (long *)0x0) {
          lVar1 = -0x22526e95d736601f;
        }
        goto LAB_001a7bc8;
      }
      lVar1 = 0x57cabee7967ab664;
      if ((lVar5 == 0x3485297baf428faf) || (lVar1 = lVar5, lVar5 != 0x39a16bddf8dc82a2))
      goto LAB_001a7bc8;
    }
    else {
      if (lVar5 == 0x3c2595d6266c5998) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_90);
        lVar1 = -0xf8d0ba03b2e0b85;
        goto LAB_001a7bc8;
      }
      if (lVar5 != 0x4d5d50fcdd4992d2) {
        if (lVar5 == 0x5127e420c2beb41f) {
          local_90 = *unaff_x26;
          lVar1 = 0x3c2595d6266c5998;
          if (*unaff_x26 == 0 || param_1 == (long *)0x0) {
            lVar1 = -0x38b0832f7743f2b8;
          }
          *local_70 = 0;
        }
        goto LAB_001a7bc8;
      }
    }
  }
  else {
    if (0x6bbc6b8cc56478f0 < lVar5) {
      if (lVar5 < 0x78ac43fddd7c64db) {
        if (lVar5 == 0x6bbc6b8cc56478f1) {
          _DAT_0021e6d0 = _DAT_0021e6d0 ^ 0xa9a9a9a9a9a9a9a9;
          uRam000000000021e6d8 = uRam000000000021e6d8 ^ 0xa9a9a9a9a9a9a9a9;
          DAT_0021fa51 = '\x01';
          lVar1 = -0x3180ec1dafce7d52;
        }
        else {
          lVar1 = 0x2ea5ec9aa4903e5;
          if ((lVar5 != 0x719dbab015af25c6) && (lVar1 = lVar5, lVar5 == 0x727aabeac1ff5013)) {
            FUN_001848fc(param_2,param_1,*local_70,unaff_x26);
            lVar1 = 0x3485297baf428faf;
            if (*param_2 != 0) {
              lVar1 = -0x3ea1661ac6a1c4db;
            }
          }
        }
      }
      else if (lVar5 == 0x78ac43fddd7c64db) {
        DAT_0021fa40 = 0;
        FUN_00182c44(param_2,param_1,*unaff_x19,&DAT_0021e6e0,0,local_70);
        lVar1 = 0x727aabeac1ff5013;
        if (*param_2 != 0) {
          lVar1 = -0x797daf6592e4222d;
        }
      }
      else if (lVar5 == 0x7bca060775e09e1e) {
        DAT_0021e700 = DAT_0021e700 ^ 0x7d;
        DAT_0021e701 = DAT_0021e701 ^ 0x7d;
        DAT_0021e702 = DAT_0021e702 ^ 0x7d;
        DAT_0021e703 = DAT_0021e703 ^ 0x7d;
        DAT_0021e704 = DAT_0021e704 ^ 0x7d;
        _DAT_0021e6f0 = _DAT_0021e6f0 ^ 0x7d7d7d7d7d7d7d7d;
        uRam000000000021e6f8 = uRam000000000021e6f8 ^ 0x7d7d7d7d7d7d7d7d;
        DAT_0021fa53 = '\x01';
        lVar1 = -0x7e369e6589ba78e7;
      }
      else if (lVar5 == 0x7ffb850a0e6ed38d) {
        lVar1 = -0x1f81af14a263eaa3;
      }
      goto LAB_001a7bc8;
    }
    if (0x5f1d0a7f6212d983 < lVar5) {
      if (lVar5 == 0x5f1d0a7f6212d984) {
        (**(code **)(*param_1 + 0xb8))(param_1,local_98);
        lVar1 = 0x2ea5ec9aa4903e5;
      }
      else if (lVar5 == 0x61d9685814f9d681) {
        iVar4 = FUN_00212730(0,1,&DAT_0021fa40);
        lVar1 = -0x1d6a050721dd3e21;
        if (iVar4 != 0) {
          lVar1 = -0x5eedd7c897c0ed2a;
        }
      }
      else if (lVar5 == 0x6230bf87be098d5d) {
        lVar1 = 0x57cabee7967ab664;
      }
      goto LAB_001a7bc8;
    }
    if (lVar5 == 0x57cabee7967ab664) {
      iVar4 = FUN_00212730(0,1,&DAT_0021fa44);
      lVar1 = 0xdc8188db88ec11b;
      if (iVar4 != 0) {
        lVar1 = 0x6230bf87be098d5d;
      }
      goto LAB_001a7bc8;
    }
    if (lVar5 != 0x5ad71f292518d033) {
      if (lVar5 == 0x5ebfca74eead21cf) {
        DAT_0021e6e0 = DAT_0021e6e0 ^ 0x26;
        DAT_0021e6e1 = DAT_0021e6e1 ^ 0x26;
        DAT_0021e6e2 = DAT_0021e6e2 ^ 0x26;
        DAT_0021e6e3 = DAT_0021e6e3 ^ 0x26;
        DAT_0021e6e4 = DAT_0021e6e4 ^ 0x26;
        DAT_0021fa52 = '\x01';
        lVar1 = 0x78ac43fddd7c64db;
      }
      goto LAB_001a7bc8;
    }
  }
LAB_001a7bb4:
  unaff_w28 = 0;
  lVar1 = -0x503101e48cc58732;
  goto LAB_001a7bc8;
}

