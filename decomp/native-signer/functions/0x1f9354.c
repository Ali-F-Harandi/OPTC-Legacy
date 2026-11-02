// rea decompile_all
// name: FUN_001f9354
// address: 0x1f9354
// body: available
// range: 0x1f9354-0x1f9f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f9f20 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f9354(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint unaff_w24;
  ulong unaff_x25;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  uint local_70;
  int local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  local_78 = 0;
  uVar6 = param_2;
  uVar3 = param_2 + 0x10;
  lVar8 = 0x7b12ba36dfe3331c;
LAB_001f941c:
  lVar7 = lVar8;
  uVar5 = uVar3;
  uVar9 = uVar5 & 0xffffffff;
  uVar11 = uVar6 & 0xffffffff;
  lVar8 = lVar7;
  uVar3 = uVar9;
  if (-0xbbaf2345e37dd61 < lVar7) {
    if (lVar7 < 0x2f24479933703a4a) {
      if (lVar7 < 0x15af5640957b8c3e) {
        if (lVar7 < 0xa93d39c1f756203) {
          if (lVar7 == -0xbbaf2345e37dd60) {
            bVar4 = (uint)uVar5 == unaff_w24;
            lVar7 = -0x32f7034afe95e1a8;
            lVar8 = 0x6beeef139d94bec;
            goto LAB_001f9410;
          }
          uVar6 = uVar11;
          uVar3 = uVar5 & 0xffffffff;
          if (lVar7 != 0x6beeef139d94bec) goto LAB_001f941c;
        }
        else {
          if (lVar7 == 0xa93d39c1f756203) {
            uVar6 = 0;
            uVar3 = uVar5 & 0xffffffff;
            lVar8 = 0x38dcd2690fefd83c;
            goto LAB_001f941c;
          }
          uVar6 = uVar11;
          uVar3 = uVar5 & 0xffffffff;
          if (lVar7 != 0x14996c4a2edcd7b8) goto LAB_001f941c;
        }
        uVar6 = uVar11;
        uVar3 = uVar9;
        lVar8 = -0x689f306bde299b82;
        goto LAB_001f941c;
      }
      if (lVar7 < 0x1c039adc9c242f08) {
        if (lVar7 != 0x15af5640957b8c3e) {
          uVar6 = uVar11;
          if (lVar7 == 0x16719e03f6bac21d) goto LAB_001f9b7c;
          goto LAB_001f941c;
        }
      }
      else {
        if (lVar7 == 0x1c039adc9c242f08) {
LAB_001f9b7c:
          lVar8 = 0x7bc8e480be254667;
          goto LAB_001f9e1c;
        }
        if (lVar7 == 0x25b4e6ec9cd2ecdc) {
          local_80 = (int)local_78 + local_8c;
          uVar6 = uVar11;
          lVar8 = 0x33d65f6cdac5d180;
          if (param_3 <= local_80) {
            lVar8 = 0x2f24479933703a4a;
          }
          goto LAB_001f941c;
        }
        uVar6 = uVar11;
        if (lVar7 != 0x2ceb08fc97843c55) goto LAB_001f941c;
      }
    }
    else {
      iVar10 = (int)uVar6;
      if (0x553ff0e638d8b04b < lVar7) {
        if (lVar7 < 0x675e05399f995d8e) {
          uVar6 = uVar11;
          lVar8 = 0x15af5640957b8c3e;
          if ((lVar7 != 0x553ff0e638d8b04c) && (lVar8 = lVar7, lVar7 == 0x5d0df0c4d56662f1)) {
            local_88 = local_78._4_4_;
            uVar5 = FUN_001f4fdc(param_1,&local_78,4,1,param_4);
            lVar8 = -0x6ac927218151fec6;
            lVar7 = 0x2ceb08fc97843c55;
LAB_001f9a4c:
            uVar6 = uVar11;
            uVar3 = uVar9;
            if ((uVar5 & 1) == 0) {
              lVar8 = lVar7;
            }
          }
        }
        else {
          uVar6 = uVar11;
          uVar3 = unaff_x25 & 0xffffffff;
          lVar8 = -0xbbaf2345e37dd60;
          if (lVar7 != 0x675e05399f995d8e) {
            if (lVar7 == 0x7b12ba36dfe3331c) {
              uVar5 = FUN_001f4fdc(param_1,&local_70,4,1,param_4);
              lVar8 = -0x7e466004dbd092fa;
              lVar7 = -0x5e1fdf78776f0eed;
              goto LAB_001f9a4c;
            }
            uVar3 = uVar9;
            lVar8 = lVar7;
            if (lVar7 == 0x7bc8e480be254667) {
              if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
          }
        }
        goto LAB_001f941c;
      }
      if (lVar7 < 0x38dcd2690fefd83c) {
        if (lVar7 == 0x2f24479933703a4a) {
          uVar6 = uVar11;
          lVar8 = -0x1131d0135a6d3962;
          if (local_80 != param_3) {
            lVar8 = -0x1038528dd04cc9b8;
          }
        }
        else {
          uVar6 = uVar11;
          if (lVar7 == 0x33d65f6cdac5d180) {
            FUN_001f50ec(param_1,param_4,param_3 - local_80,1);
            goto LAB_001f9b98;
          }
        }
        goto LAB_001f941c;
      }
      if (lVar7 == 0x38dcd2690fefd83c) {
        uVar5 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
        uVar6 = uVar11;
        lVar8 = -0x24a6c1aed81e45b8;
        local_94 = iVar10;
        if ((uVar5 & 1) == 0) {
          lVar8 = 0x14996c4a2edcd7b8;
        }
        goto LAB_001f941c;
      }
      if (lVar7 == 0x40e2e377ff801f0f) {
        FUN_001f6454(param_1,param_2 + 0x10,local_84,param_4);
        bVar4 = *param_1 == 0;
        lVar8 = 0x5d0df0c4d56662f1;
        lVar7 = 0x4750cf34c56940e3;
        goto LAB_001f9410;
      }
      uVar6 = uVar11;
      if (lVar7 != 0x4750cf34c56940e3) goto LAB_001f941c;
    }
LAB_001f9b98:
    uVar6 = uVar11;
    uVar3 = uVar5 & 0xffffffff;
    lVar8 = 0x7bc8e480be254667;
    goto LAB_001f941c;
  }
  if (lVar7 < -0x51cf875a70e06525) {
    if (lVar7 < -0x689f306bde299b82) {
      if (lVar7 < -0x76001134909e88fc) {
        if (lVar7 == -0x7e466004dbd092fa) {
          uVar1 = local_70 + 4;
          lVar8 = 0x1c039adc9c242f08;
          lVar7 = -0x7b309891b0cee327;
          unaff_w24 = local_70;
LAB_001f9ccc:
          uVar6 = uVar11;
          uVar3 = uVar9;
          if (uVar1 <= param_3) {
            lVar8 = lVar7;
          }
        }
        else {
          uVar6 = uVar11;
          if (lVar7 == -0x7b309891b0cee327) {
            lVar8 = -0x16f1e5fa5f3754a5;
            if (unaff_w24 != 0) {
              lVar8 = 0xa93d39c1f756203;
            }
            local_6c = 0;
          }
        }
      }
      else {
        if (lVar7 == -0x76001134909e88fc) goto LAB_001f9b7c;
        uVar6 = uVar11;
        if (lVar7 == -0x6ac927218151fec6) {
          local_90 = (int)local_78;
          local_8c = local_7c + local_88 + 0xc;
          lVar8 = -0x76001134909e88fc;
          if ((uint)((int)local_78 + local_8c) <= param_3) {
            lVar8 = -0x43d8d42d8bbf5814;
          }
        }
      }
    }
    else if (lVar7 < -0x5e1fdf78776f0eed) {
      if (lVar7 == -0x689f306bde299b82) {
        bVar4 = *param_1 == 0;
        lVar8 = -0x61a21996f647e3aa;
        lVar7 = -0x554301dbdde0ca2c;
LAB_001f9410:
        uVar6 = uVar11;
        if (!bVar4) {
          lVar8 = lVar7;
        }
      }
      else {
        uVar6 = uVar11;
        if (lVar7 == -0x61a21996f647e3aa) {
          local_7c = local_70;
          uVar5 = FUN_001f4fdc(param_1,(long)&local_78 + 4,4,1,param_4);
          lVar8 = -0xbd76994df8af996;
          if ((uVar5 & 1) == 0) {
            lVar8 = -0x29d5f6a10f86b08c;
          }
        }
      }
    }
    else {
      uVar6 = uVar11;
      lVar8 = 0x7bc8e480be254667;
      if (lVar7 != -0x5e1fdf78776f0eed) {
        if (lVar7 == -0x5c0b05f8eb36e4c6) {
          uVar1 = local_94 + local_6c + 4;
          unaff_x25 = (ulong)uVar1;
          lVar8 = -0x3cf562eeeb01cc12;
          if (unaff_w24 <= uVar1) {
            lVar8 = 0x675e05399f995d8e;
          }
        }
        else {
          lVar8 = lVar7;
          if (lVar7 == -0x554301dbdde0ca2c) goto LAB_001f9b98;
        }
      }
    }
    goto LAB_001f941c;
  }
  if (lVar7 < -0x24a6c1aed81e45b8) {
    if (lVar7 < -0x3cf562eeeb01cc12) {
      uVar6 = uVar11;
      lVar8 = 0x7bc8e480be254667;
      if ((lVar7 != -0x51cf875a70e06525) && (lVar8 = lVar7, lVar7 == -0x43d8d42d8bbf5814)) {
        FUN_001f70d0(param_1,param_2 + 0x20,local_90,param_4);
        bVar4 = *param_1 == 0;
        lVar8 = 0x25b4e6ec9cd2ecdc;
        lVar7 = -0x51cf875a70e06525;
        goto LAB_001f9410;
      }
      goto LAB_001f941c;
    }
    uVar6 = unaff_x25 & 0xffffffff;
    lVar8 = 0x38dcd2690fefd83c;
    if (lVar7 == -0x3cf562eeeb01cc12) goto LAB_001f941c;
    if (lVar7 != -0x32f7034afe95e1a8) {
      uVar6 = uVar11;
      lVar8 = lVar7;
      if (lVar7 == -0x29d5f6a10f86b08c) goto LAB_001f9b98;
      goto LAB_001f941c;
    }
    lVar8 = 0x15af5640957b8c3e;
  }
  else {
    if (lVar7 < -0x1131d0135a6d3962) {
      if (lVar7 == -0x24a6c1aed81e45b8) {
        FUN_001f56b0(param_1,param_2,local_6c,param_4);
        uVar6 = uVar11;
        lVar8 = -0x5c0b05f8eb36e4c6;
        if (*param_1 != 0) {
          lVar8 = 0x553ff0e638d8b04c;
        }
      }
      else {
        uVar6 = uVar11;
        if (lVar7 == -0x16f1e5fa5f3754a5) {
          uVar3 = 0;
          lVar8 = -0xbbaf2345e37dd60;
        }
      }
      goto LAB_001f941c;
    }
    lVar8 = 0x7bc8e480be254667;
    uVar6 = uVar11;
    uVar3 = uVar5 & 0xffffffff;
    if (lVar7 == -0x1131d0135a6d3962) goto LAB_001f941c;
    if (lVar7 != -0x1038528dd04cc9b8) {
      uVar3 = uVar9;
      lVar8 = lVar7;
      if (lVar7 == -0xbd76994df8af996) {
        local_84 = local_78._4_4_;
        uVar1 = local_7c + local_78._4_4_ + 8;
        lVar8 = 0x16719e03f6bac21d;
        lVar7 = 0x40e2e377ff801f0f;
        goto LAB_001f9ccc;
      }
      goto LAB_001f941c;
    }
  }
LAB_001f9e1c:
  *param_1 = 8;
  uVar6 = uVar11;
  uVar3 = uVar5 & 0xffffffff;
  goto LAB_001f941c;
}

