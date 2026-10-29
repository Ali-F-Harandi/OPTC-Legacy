// rea decompile_all
// name: FUN_001fd388
// address: 0x1fd388
// body: available
// range: 0x1fd388-0x1fda8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fda8c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fd388(int *param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong unaff_x19;
  uint unaff_w20;
  ulong uVar8;
  ulong unaff_x25;
  int local_80;
  uint local_70;
  int local_6c;
  ulong local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(ulong *)(lVar2 + 0x28);
  local_70 = 0;
  uVar4 = local_68;
  lVar7 = 0x4b73c4e968047988;
LAB_001fd470:
  lVar6 = lVar7;
  uVar8 = uVar4 & 0xffffffff;
  lVar7 = lVar6;
  if (lVar6 < -0x12bc87502b2af86e) {
    if (lVar6 < -0x3ea1661ac6a1c4db) {
      if (lVar6 < -0x5eedd7c897c0ed2a) {
        if (lVar6 == -0x797daf6592e4222d) {
          uVar4 = uVar8;
          lVar7 = 0x727aabeac1ff5013;
          if (local_70 + 4 != param_3) {
            lVar7 = -0x3ea1661ac6a1c4db;
          }
        }
        else if (lVar6 == -0x65a31e6327338728) {
          uVar4 = uVar8;
          lVar7 = 0xf111d00f6a8edda;
          unaff_w20 = local_70;
          if (local_70 + 4 <= param_3) {
            lVar7 = -0x5f20efb5b92e6f74;
          }
        }
        else {
          uVar4 = uVar8;
          if (lVar6 == -0x5f20efb5b92e6f74) {
            local_6c = 0;
            lVar7 = -0x2701f7b957916a96;
            if (unaff_w20 != 0) {
              lVar7 = -0x12bc87502b2af86e;
            }
          }
        }
      }
      else if ((lVar6 == -0x5eedd7c897c0ed2a) ||
              ((uVar4 = uVar8, lVar7 = 0x5ebfca74eead21cf, lVar6 != -0x4c94198a9ad36397 &&
               (lVar7 = lVar6, lVar6 == -0x429b7b8ddead7976)))) {
        uVar4 = uVar8;
        lVar7 = 0x3485297baf428faf;
      }
      goto LAB_001fd470;
    }
    if (lVar6 < -0x2701f7b957916a96) {
      if (lVar6 == -0x3ea1661ac6a1c4db) {
LAB_001fd880:
        lVar7 = 0x3485297baf428faf;
LAB_001fda4c:
        *param_1 = 8;
        uVar4 = uVar8;
      }
      else if (lVar6 == -0x3180ec1dafce7d52) {
        uVar1 = local_80 + local_6c + 4;
        unaff_x25 = (ulong)uVar1;
        uVar4 = uVar8;
        lVar7 = -0x2d23be9e4092ee55;
        if (unaff_w20 <= uVar1) {
          lVar7 = 0x5ad71f292518d033;
        }
      }
      else {
        uVar4 = uVar8;
        if (lVar6 == -0x2d23be9e4092ee55) {
          unaff_x19 = unaff_x25 & 0xffffffff;
LAB_001fd89c:
          uVar4 = uVar8;
          lVar7 = 0x1b4ac2f1f22e2589;
        }
      }
      goto LAB_001fd470;
    }
    if (lVar6 == -0x2701f7b957916a96) {
      uVar4 = 0;
      lVar7 = -0x21c44217ce61bec8;
      goto LAB_001fd470;
    }
    if (lVar6 != -0x21c44217ce61bec8) {
      uVar4 = uVar8;
      if (lVar6 == -0x1f81af14a263eaa3) {
        lVar7 = 0x5ebfca74eead21cf;
      }
      goto LAB_001fd470;
    }
    lVar7 = -0x4c94198a9ad36397;
    lVar6 = 0x61d9685814f9d681;
    bVar3 = (uint)uVar4 == unaff_w20;
  }
  else {
    if (lVar6 < 0x5ebfca74eead21cf) {
      if (lVar6 < 0x3485297baf428faf) {
        if (lVar6 == -0x12bc87502b2af86e) {
          unaff_x19 = 0;
          goto LAB_001fd89c;
        }
        if (lVar6 == 0xf111d00f6a8edda) goto LAB_001fd880;
        uVar4 = uVar8;
        if (lVar6 == 0x1b4ac2f1f22e2589) {
          uVar4 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
          lVar7 = 0x7ffb850a0e6ed38d;
          if ((uVar4 & 1) == 0) {
            lVar7 = -0x1f81af14a263eaa3;
          }
          local_80 = (int)unaff_x19;
          uVar4 = uVar8;
        }
      }
      else if (lVar6 == 0x4b73c4e968047988) {
        uVar5 = FUN_001f4fdc(param_1,&local_70,4,1,param_4);
        uVar4 = uVar8;
        lVar7 = -0x65a31e6327338728;
        if ((uVar5 & 1) == 0) {
          lVar7 = -0x429b7b8ddead7976;
        }
      }
      else {
        uVar4 = unaff_x25 & 0xffffffff;
        lVar7 = -0x21c44217ce61bec8;
        if ((lVar6 != 0x5ad71f292518d033) &&
           (uVar4 = uVar8, lVar7 = lVar6, lVar6 == 0x3485297baf428faf)) {
          if (*(ulong *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      goto LAB_001fd470;
    }
    if (0x727aabeac1ff5012 < lVar6) {
      uVar4 = uVar8;
      lVar7 = 0x3485297baf428faf;
      if (((lVar6 != 0x727aabeac1ff5013) && (lVar6 != 0x78ac43fddd7c64db)) &&
         (lVar7 = lVar6, lVar6 == 0x7ffb850a0e6ed38d)) {
        FUN_001fc4b0(param_1,param_2,local_6c,param_4);
        bVar3 = *param_1 == 0;
        lVar7 = -0x3180ec1dafce7d52;
        lVar6 = 0x6bbc6b8cc56478f1;
        goto LAB_001fda2c;
      }
      goto LAB_001fd470;
    }
    if (lVar6 != 0x5ebfca74eead21cf) {
      if (lVar6 == 0x61d9685814f9d681) {
        lVar7 = -0x5eedd7c897c0ed2a;
        goto LAB_001fda4c;
      }
      uVar4 = uVar8;
      if (lVar6 == 0x6bbc6b8cc56478f1) {
        lVar7 = -0x5eedd7c897c0ed2a;
      }
      goto LAB_001fd470;
    }
    bVar3 = *param_1 == 0;
    lVar6 = 0x78ac43fddd7c64db;
    lVar7 = -0x797daf6592e4222d;
  }
LAB_001fda2c:
  uVar4 = uVar8;
  if (!bVar3) {
    lVar7 = lVar6;
  }
  goto LAB_001fd470;
}

