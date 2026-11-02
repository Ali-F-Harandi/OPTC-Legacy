// rea decompile_all
// name: FUN_001f8350
// address: 0x1f8350
// body: available
// range: 0x1f8350-0x1f87eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f87e8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f8350(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong unaff_x19;
  ulong unaff_x21;
  ulong uVar9;
  ulong uVar10;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  uVar2 = 0xdbad924ea5a61493;
  if (param_3 != 0) {
    uVar2 = 0x766c039d1f7e793a;
  }
  local_68 = *(long *)(lVar3 + 0x28);
  local_6c = 0;
  uVar6 = param_2;
  uVar7 = uVar2;
  uVar8 = 0x8b5f027c68a44d63;
LAB_001f842c:
  do {
    while( true ) {
      uVar5 = uVar8;
      uVar10 = uVar7 & 0xffffffff;
      uVar9 = uVar6 & 0xffffffff;
      uVar6 = uVar9;
      uVar8 = uVar5;
      if ((long)uVar5 < -0x24526db15a59eb6d) break;
      if ((long)uVar5 < 0x65123e08886f988e) {
        if (uVar5 == 0xdbad924ea5a61493) {
          uVar7 = 0;
          uVar8 = 0xa10e393b52cbf917;
        }
        else if (uVar5 == 0xea3eaef375108ea1) {
          uVar1 = (int)unaff_x19 + local_6c + 4;
          unaff_x21 = (ulong)uVar1;
          uVar7 = uVar10;
          uVar8 = 0x985a0271c94b744c;
          if (param_3 <= uVar1) {
            uVar8 = 0x821c8b1c7fb52216;
          }
        }
        else {
          uVar7 = uVar10;
          if (uVar5 == 0x7c7b2e9101238be) {
            FUN_001f7dac(param_1,param_2,local_6c,param_4);
            bVar4 = *param_1 == 0;
            uVar8 = 0xea3eaef375108ea1;
            uVar5 = 0xae3c1f38c62f5e66;
LAB_001f8700:
            uVar7 = uVar10;
            if (!bVar4) {
              uVar8 = uVar5;
            }
          }
        }
      }
      else if ((long)uVar5 < 0x722ff175841bf512) {
        if (uVar5 == 0x65123e08886f988e) {
          *param_1 = 8;
          uVar7 = uVar10;
          uVar8 = 0x93b191de03cef628;
        }
        else {
          uVar7 = uVar10;
          if (uVar5 == 0x6d0a3d5f63139421) {
LAB_001f8580:
            uVar7 = uVar10;
            uVar8 = 0x93b191de03cef628;
          }
        }
      }
      else if (uVar5 == 0x722ff175841bf512) {
        uVar5 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
        uVar7 = uVar10;
        uVar8 = 0x7c7b2e9101238be;
        unaff_x19 = uVar9;
        if ((uVar5 & 1) == 0) {
          uVar8 = 0xad7de85437cef473;
        }
      }
      else {
        uVar7 = uVar10;
        if (uVar5 == 0x766c039d1f7e793a) {
          uVar6 = 0;
          uVar8 = 0x722ff175841bf512;
        }
      }
    }
    if ((long)uVar5 < -0x5ef1c6c4ad3406e9) {
      if ((long)uVar5 < -0x6c4e6e21fc3109d8) {
        uVar7 = unaff_x21 & 0xffffffff;
        uVar8 = 0xa10e393b52cbf917;
        if ((uVar5 != 0x821c8b1c7fb52216) &&
           (uVar7 = uVar10, uVar8 = uVar5, uVar5 == 0x8b5f027c68a44d63)) {
          uVar8 = uVar2;
        }
      }
      else {
        uVar6 = unaff_x21 & 0xffffffff;
        uVar7 = uVar10;
        uVar8 = 0x722ff175841bf512;
        if ((uVar5 != 0x985a0271c94b744c) &&
           (uVar6 = uVar9, uVar8 = uVar5, uVar5 == 0x93b191de03cef628)) {
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      goto LAB_001f842c;
    }
    if (uVar5 == 0xa10e393b52cbf917) {
      uVar5 = 0x65123e08886f988e;
      uVar8 = 0x6d0a3d5f63139421;
      bVar4 = (uint)uVar7 == param_3;
      goto LAB_001f8700;
    }
    uVar7 = uVar10;
    uVar8 = 0x93b191de03cef628;
    if ((uVar5 != 0xad7de85437cef473) && (uVar8 = uVar5, uVar5 == 0xae3c1f38c62f5e66))
    goto LAB_001f8580;
  } while( true );
}

