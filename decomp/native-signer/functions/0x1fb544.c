// rea decompile_all
// name: FUN_001fb544
// address: 0x1fb544
// body: available
// range: 0x1fb544-0x1fbc53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fbc50 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fb544(int *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong unaff_x19;
  ulong unaff_x20;
  uint unaff_w28;
  int local_80;
  uint local_70;
  int local_6c;
  ulong local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(ulong *)(lVar2 + 0x28);
  local_70 = 0;
  uVar4 = local_68;
  lVar8 = 0x61612b56ba58e895;
LAB_001fb624:
  while( true ) {
    lVar7 = lVar8;
    uVar6 = uVar4;
    lVar8 = lVar7;
    if (lVar7 < 0x2e5d2c580e521a46) break;
    if (lVar7 < 0x5c464faf1c134413) {
      if (lVar7 < 0x4aec30ca31276d55) {
        if (lVar7 == 0x2e5d2c580e521a46) {
LAB_001fb77c:
          lVar8 = 0x67e75d17e2cdd7d4;
LAB_001fbb60:
          *param_1 = 8;
          uVar4 = uVar6 & 0xffffffff;
        }
        else if (lVar7 == 0x472980666c6a03ea) {
          lVar8 = -0x58b7102d8e8f33c;
          if (local_70 + 4 <= param_3) {
            lVar8 = 0x7c1ab6a8596fe588;
          }
          uVar4 = uVar6 & 0xffffffff;
          unaff_w28 = local_70;
        }
        else {
          uVar4 = uVar6 & 0xffffffff;
          if (lVar7 == 0x4943753bf51688fc) {
            uVar4 = uVar6 & 0xffffffff;
            lVar8 = -0x51134ff119c1308f;
          }
        }
      }
      else {
        uVar4 = uVar6 & 0xffffffff;
        lVar8 = -0x51134ff119c1308f;
        if (lVar7 != 0x4aec30ca31276d55) {
          if (lVar7 == 0x4df7063ff4f72d9f) {
            bVar3 = local_70 + 4 == param_3;
            lVar8 = -0x6acaf52c4f368fc7;
            lVar7 = 0x2e5d2c580e521a46;
LAB_001fbbf0:
            if (!bVar3) {
              lVar8 = lVar7;
            }
            uVar4 = uVar6 & 0xffffffff;
          }
          else {
            uVar4 = uVar6 & 0xffffffff;
            lVar8 = lVar7;
            if (lVar7 == 0x5a7966877bb5e856) {
              unaff_x19 = unaff_x20 & 0xffffffff;
LAB_001fba78:
              uVar4 = uVar6 & 0xffffffff;
              lVar8 = -0x26779b83f38bb8da;
            }
          }
        }
      }
    }
    else if (lVar7 < 0x6902adc5eda669f4) {
      uVar4 = uVar6 & 0xffffffff;
      lVar8 = 0x67e75d17e2cdd7d4;
      if (lVar7 != 0x5c464faf1c134413) {
        if (lVar7 == 0x61612b56ba58e895) {
          uVar5 = FUN_001f4fdc(param_1,&local_70,4,1,param_4);
          uVar4 = uVar6 & 0xffffffff;
          lVar8 = 0x472980666c6a03ea;
          if ((uVar5 & 1) == 0) {
            lVar8 = -0x5aa64ba1dacf22c5;
          }
        }
        else {
          uVar4 = uVar6 & 0xffffffff;
          lVar8 = lVar7;
          if (lVar7 == 0x67e75d17e2cdd7d4) {
            if (*(ulong *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
      }
    }
    else {
      uVar4 = uVar6 & 0xffffffff;
      lVar8 = 0x13021144eb62c0db;
      if (lVar7 != 0x6902adc5eda669f4) {
        if (lVar7 == 0x78c4c1a5edb48036) {
          unaff_x19 = 0;
          goto LAB_001fba78;
        }
        uVar4 = uVar6 & 0xffffffff;
        lVar8 = lVar7;
        if (lVar7 == 0x7c1ab6a8596fe588) {
          local_6c = 0;
          lVar8 = -0x4689100bf65fd0ad;
          if (unaff_w28 != 0) {
            lVar8 = 0x78c4c1a5edb48036;
          }
          uVar4 = uVar6 & 0xffffffff;
        }
      }
    }
  }
  if (lVar7 < -0x21d3b6805e25ceaa) {
    if (-0x51134ff119c13090 < lVar7) {
      if (lVar7 == -0x51134ff119c1308f) {
        bVar3 = *param_1 == 0;
        lVar8 = 0x4df7063ff4f72d9f;
        lVar7 = 0x5c464faf1c134413;
LAB_001fb61c:
        uVar4 = uVar6 & 0xffffffff;
        if (!bVar3) {
          lVar8 = lVar7;
        }
      }
      else if (lVar7 == -0x4689100bf65fd0ad) {
        uVar4 = 0;
        lVar8 = 0x36080c4ea4d3b15;
      }
      else {
        uVar4 = uVar6 & 0xffffffff;
        if (lVar7 == -0x26779b83f38bb8da) {
          uVar4 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
          lVar8 = -0x21d3b6805e25ceaa;
          if ((uVar4 & 1) == 0) {
            lVar8 = 0x4943753bf51688fc;
          }
          local_80 = (int)unaff_x19;
          uVar4 = uVar6 & 0xffffffff;
        }
      }
      goto LAB_001fb624;
    }
    uVar4 = uVar6 & 0xffffffff;
    lVar8 = 0x67e75d17e2cdd7d4;
    if (lVar7 == -0x6acaf52c4f368fc7) goto LAB_001fb624;
    if (lVar7 == -0x65ea49716c78db2d) {
      uVar1 = local_80 + local_6c + 4;
      unaff_x20 = (ulong)uVar1;
      lVar8 = 0x5a7966877bb5e856;
      if (unaff_w28 <= uVar1) {
        lVar8 = 0x12f97563fe86189d;
      }
      uVar4 = uVar6 & 0xffffffff;
      goto LAB_001fb624;
    }
    uVar4 = uVar6 & 0xffffffff;
    lVar8 = lVar7;
    if (lVar7 != -0x5aa64ba1dacf22c5) goto LAB_001fb624;
  }
  else {
    if (lVar7 < 0x36080c4ea4d3b15) {
      if (lVar7 == -0x21d3b6805e25ceaa) {
        FUN_001fa174(param_1,param_2,local_6c,param_4);
        bVar3 = *param_1 == 0;
        lVar8 = -0x65ea49716c78db2d;
        lVar7 = 0x6902adc5eda669f4;
        goto LAB_001fbbf0;
      }
      if (lVar7 == -0xcdc5aee104269e7) {
        lVar8 = 0x13021144eb62c0db;
        goto LAB_001fbb60;
      }
      uVar4 = uVar6 & 0xffffffff;
      if (lVar7 == -0x58b7102d8e8f33c) goto LAB_001fb77c;
      goto LAB_001fb624;
    }
    if (lVar7 == 0x36080c4ea4d3b15) {
      lVar7 = -0xcdc5aee104269e7;
      lVar8 = 0x4aec30ca31276d55;
      bVar3 = (uint)uVar6 == unaff_w28;
      goto LAB_001fb61c;
    }
    uVar4 = unaff_x20 & 0xffffffff;
    lVar8 = 0x36080c4ea4d3b15;
    if ((lVar7 == 0x12f97563fe86189d) ||
       (uVar4 = uVar6 & 0xffffffff, lVar8 = lVar7, lVar7 != 0x13021144eb62c0db)) goto LAB_001fb624;
  }
  uVar4 = uVar6 & 0xffffffff;
  lVar8 = 0x67e75d17e2cdd7d4;
  goto LAB_001fb624;
}

