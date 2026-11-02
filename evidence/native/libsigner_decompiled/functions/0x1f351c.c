// rea decompile_all
// name: FUN_001f351c
// address: 0x1f351c
// body: available
// range: 0x1f351c-0x1f3977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f3974 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f351c(char *param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong unaff_x21;
  uint *unaff_x23;
  uint unaff_w24;
  uint *in_stack_ffffffffffffff70;
  undefined1 *local_88;
  
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x28);
  uVar6 = access(param_1,4);
  uVar7 = (ulong)uVar6;
  uVar3 = param_2 >> 6 & 1;
  if (((param_2 ^ 0xffffffff) & 0x404000) == 0) {
    uVar3 = 1;
  }
  puVar1 = (undefined1 *)0x353e7cd16df664a2;
  if (uVar3 == 0) {
    puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
  }
  puVar2 = (undefined1 *)0x125dd2cc844aecb4;
  if (uVar6 != 0) {
    puVar2 = &DAT_f615808441b1dafc;
  }
  puVar5 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            puVar9 = puVar5;
            puVar5 = puVar9;
            if (-0x938e289074b7148 < (long)puVar9) break;
            if ((long)puVar9 < -0xab3a208b03543bf) {
              puVar5 = (undefined1 *)0xf54c5df74fcabc41;
              if (puVar9 != (undefined1 *)0xaa46adf0a78af8c7) {
                if (puVar9 == (undefined1 *)0xc23f84056fd30bd6) {
                  unaff_x21 = (ulong)*unaff_x23;
                  puVar5 = (undefined1 *)0xf6c71d76f8b48eb9;
                }
                else {
                  puVar5 = puVar9;
                  if ((puVar9 == (undefined1 *)0xd222672a639a1d2e) &&
                     (puVar5 = (undefined1 *)0xf63b36e7a9d9f670, 0xfffffff8 < unaff_w24)) {
                    puVar5 = (undefined1 *)0xaa46adf0a78af8c7;
                  }
                }
              }
            }
            else if (puVar9 == (undefined1 *)0xf54c5df74fcabc41) {
              puVar5 = (undefined1 *)0xc23f84056fd30bd6;
              unaff_x23 = in_stack_ffffffffffffff70;
              in_stack_ffffffffffffff70 = in_stack_ffffffffffffff70 + 2;
            }
            else if (puVar9 == &DAT_f615808441b1dafc) {
              uVar7 = 0xffffffff;
              puVar5 = (undefined1 *)0x6b5051bf1aed633d;
            }
            else if (puVar9 == (undefined1 *)0xf63b36e7a9d9f670) {
              puVar5 = (undefined1 *)0xc23f84056fd30bd6;
              unaff_x23 = (uint *)(local_88 + (int)unaff_w24);
            }
          }
          if (0x2ce2edddaf334d80 < (long)puVar9) break;
          if (puVar9 == (undefined1 *)0xf6c71d76f8b48eb9) {
            uVar7 = syscall(0x38,0xffffff9c,param_1,(ulong)param_2,unaff_x21 & 0xffffffff);
            puVar5 = (undefined1 *)0x6b5051bf1aed633d;
          }
          else {
            puVar5 = puVar2;
            if ((puVar9 != (undefined1 *)0x887e73b2c28c6a1) &&
               (puVar5 = puVar9, puVar9 == (undefined1 *)0x125dd2cc844aecb4)) {
              puVar5 = puVar1;
            }
          }
        }
        if (0x696b554ab6b2c8c4 < (long)puVar9) break;
        puVar5 = (undefined1 *)0xf54c5df74fcabc41;
        if ((puVar9 != (undefined1 *)0x2ce2edddaf334d81) &&
           (puVar5 = puVar9, puVar9 == (undefined1 *)0x353e7cd16df664a2)) {
          unaff_w24 = 0xffffffd0;
          puVar5 = (undefined1 *)0xd222672a639a1d2e;
          in_stack_ffffffffffffff70 = (uint *)register0x00000008;
          local_88 = &stack0xffffffffffffff70;
        }
      }
      if (puVar9 != (undefined1 *)0x696b554ab6b2c8c5) break;
      unaff_x21 = 0;
      puVar5 = (undefined1 *)0xf6c71d76f8b48eb9;
    }
  } while (puVar9 != (undefined1 *)0x6b5051bf1aed633d);
  if (*(long *)(lVar4 + 0x28) == lVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}

