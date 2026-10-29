// rea decompile_all
// name: FUN_001f5c3c
// address: 0x1f5c3c
// body: available
// range: 0x1f5c3c-0x1f60af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f60ac to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f5c3c(int *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong unaff_x20;
  ulong unaff_x21;
  ulong unaff_x24;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  lVar2 = 0x34ee749c3dc3cf5c;
  if (param_3 != 0) {
    lVar2 = -0x784e00d20971c752;
  }
  local_68 = *(long *)(lVar3 + 0x28);
  local_6c = 0;
  uVar6 = param_2;
  lVar8 = -0x189dd9be034f6f3a;
LAB_001f5d3c:
  do {
    while (lVar7 = lVar8, uVar9 = uVar6 & 0xffffffff, uVar6 = uVar9, lVar8 = lVar7,
          lVar7 < 0x22f3f9cf91cbb9a6) {
      if (lVar7 < -0x1b715090d60a355e) {
        if (lVar7 == -0x784e00d20971c752) {
          uVar6 = 0;
          lVar8 = 0x29ff0ff794febe2e;
        }
        else {
          lVar8 = 0x65536dc2a8308acd;
          if ((lVar7 != -0x6bf42222db0ad31d) && (lVar8 = lVar7, lVar7 == -0x316a2fad8e5725cc)) {
            *param_1 = 8;
            lVar8 = 0x65536dc2a8308acd;
          }
        }
      }
      else if (lVar7 < -0x25a3e9f6f44c50c) {
        if (lVar7 == -0x1b715090d60a355e) {
          FUN_001f56b0(param_1,param_2,local_6c,param_4);
          bVar4 = *param_1 == 0;
          lVar8 = 0x3007aa9d32d99be8;
          lVar7 = -0x6bf42222db0ad31d;
LAB_001f5d34:
          if (!bVar4) {
            lVar8 = lVar7;
          }
        }
        else if (lVar7 == -0x189dd9be034f6f3a) {
          lVar8 = lVar2;
        }
      }
      else {
        uVar6 = unaff_x21 & 0xffffffff;
        lVar8 = 0x29ff0ff794febe2e;
        if ((lVar7 != -0x25a3e9f6f44c50c) &&
           (uVar6 = uVar9, lVar8 = lVar7, lVar7 == 0xfb13253120e52d5)) {
          unaff_x24 = unaff_x21 & 0xffffffff;
          lVar8 = 0x31b9d74c89a90fe3;
        }
      }
    }
    if (lVar7 < 0x31b9d74c89a90fe3) {
      lVar8 = 0x65536dc2a8308acd;
      if (lVar7 != 0x22f3f9cf91cbb9a6) {
        if (lVar7 == 0x29ff0ff794febe2e) {
          uVar5 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
          lVar8 = -0x1b715090d60a355e;
          unaff_x20 = uVar9;
          if ((uVar5 & 1) == 0) {
            lVar8 = 0x22f3f9cf91cbb9a6;
          }
        }
        else {
          lVar8 = lVar7;
          if (lVar7 == 0x3007aa9d32d99be8) {
            uVar1 = (int)unaff_x20 + local_6c + 4;
            unaff_x21 = (ulong)uVar1;
            lVar8 = -0x25a3e9f6f44c50c;
            if (param_3 <= uVar1) {
              lVar8 = 0xfb13253120e52d5;
            }
          }
        }
      }
      goto LAB_001f5d3c;
    }
    if (lVar7 < 0x34ee749c3dc3cf5c) {
      if (lVar7 == 0x31b9d74c89a90fe3) {
        bVar4 = (uint)unaff_x24 == param_3;
        lVar8 = 0x32f4713bcaf93571;
        lVar7 = -0x316a2fad8e5725cc;
        goto LAB_001f5d34;
      }
      if (lVar7 == 0x32f4713bcaf93571) {
        lVar8 = 0x65536dc2a8308acd;
      }
    }
    else if (lVar7 == 0x34ee749c3dc3cf5c) {
      unaff_x24 = 0;
      lVar8 = 0x31b9d74c89a90fe3;
    }
    else if (lVar7 == 0x65536dc2a8308acd) {
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}

