// rea decompile_all
// name: FUN_001de688
// address: 0x1de688
// body: available
// range: 0x1de688-0x1de957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1de954 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001de7e4) */

void FUN_001de688(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x23;
  undefined8 uVar6;
  size_t unaff_x24;
  ulong unaff_x28;
  size_t local_78;
  undefined8 local_70;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  local_70 = 0;
  FUN_0016df9c();
  lVar1 = 0x65536dc2a8308acd;
  if (*param_1 != 0) {
    lVar1 = -0x316a2fad8e5725cc;
  }
  lVar3 = 0x32f4713bcaf93571;
  do {
    while( true ) {
      while (uVar6 = unaff_x23, lVar5 = lVar3, unaff_x23 = uVar6, 0x32f4713bcaf93570 < lVar5) {
        if (lVar5 < 0x3b16db62a3c2f4fb) {
          lVar3 = lVar1;
          if ((lVar5 != 0x32f4713bcaf93571) && (lVar3 = lVar5, lVar5 == 0x3ace195dd3930386)) {
            FUN_001706d8(param_2,param_4,uVar6);
            lVar3 = -0x12e0f8e15901e122;
          }
        }
        else {
          lVar3 = -0x12e0f8e15901e122;
          if ((lVar5 != 0x3b16db62a3c2f4fb) && (lVar3 = lVar5, lVar5 == 0x65536dc2a8308acd)) {
            unaff_x28 = param_5[1];
            lVar3 = 0xc7bf249d1db72b2;
            unaff_x24 = local_78;
            if (unaff_x28 <= *param_5) {
              lVar3 = 0x27963d1423e000f6;
            }
          }
        }
      }
      if (lVar5 < 0xc7bf249d1db72b2) break;
      if (lVar5 == 0xc7bf249d1db72b2) {
        *param_1 = 1;
        lVar3 = -0x111819a4994f0fa;
      }
      else {
        lVar3 = lVar5;
        if (lVar5 == 0x27963d1423e000f6) {
          memcpy((void *)(param_5[2] + unaff_x28),(void *)0x0,unaff_x24);
          param_5[1] = param_5[1];
          lVar3 = -0x111819a4994f0fa;
        }
      }
    }
    lVar3 = -0x111819a4994f0fa;
  } while (((lVar5 == -0x316a2fad8e5725cc) ||
           (lVar3 = 0x3b16db62a3c2f4fb, unaff_x23 = local_70, lVar5 == -0x111819a4994f0fa)) ||
          (lVar3 = lVar5, unaff_x23 = uVar6, lVar5 != -0x12e0f8e15901e122));
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

