// rea decompile_all
// name: FUN_0011a918
// address: 0x11a918
// body: available
// range: 0x11a918-0x11adb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11adb4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011a918(int *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x22;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_0018fe0c();
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (*param_1 != 0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar5 = puVar3, puVar3 = puVar5, (long)puVar5 < -0x938e289074b7147) {
            if ((long)puVar5 < -0x2ddd98d59c65e2d2) {
              if (puVar5 == (undefined1 *)0xaa46adf0a78af8c7) {
                FUN_001706d8(param_2,local_70,local_78);
                puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
              }
              else if (puVar5 == (undefined1 *)0xbf711ec4fafe862e) {
                *param_4 = 0;
                puVar3 = (undefined1 *)0x1cba5f82f77e481f;
              }
              else if (puVar5 == (undefined1 *)0xc23f84056fd30bd6) {
                (**(code **)(*param_2 + 0xb8))(param_2,unaff_x22);
                puVar3 = (undefined1 *)0xf6c71d76f8b48eb9;
              }
            }
            else if ((long)puVar5 < -0x9ea7f7bbe4e2504) {
              if (puVar5 == (undefined1 *)0xd222672a639a1d2e) {
                *param_1 = 2;
                puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
              }
              else if (puVar5 == (undefined1 *)0xf54c5df74fcabc41) {
                puVar3 = (undefined1 *)0xf6c71d76f8b48eb9;
              }
            }
            else {
              puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
              if ((puVar5 != &DAT_f615808441b1dafc) &&
                 (puVar3 = puVar5, puVar5 == (undefined1 *)0xf63b36e7a9d9f670)) {
                puVar3 = (undefined1 *)0xc23f84056fd30bd6;
                unaff_x22 = local_70;
                if (local_70 == 0 || param_2 == (long *)0x0) {
                  puVar3 = (undefined1 *)0xf54c5df74fcabc41;
                }
              }
            }
          }
          if ((long)puVar5 < 0x2ce2edddaf334d81) break;
          if ((long)puVar5 < 0x696b554ab6b2c8c5) {
            puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
            if ((puVar5 != (undefined1 *)0x2ce2edddaf334d81) &&
               (puVar3 = puVar5, puVar5 == (undefined1 *)0x353e7cd16df664a2)) {
              lVar4 = FUN_001e53f4(local_78,local_80);
              *param_4 = lVar4;
              puVar3 = (undefined1 *)0xd222672a639a1d2e;
              if (lVar4 != 0) {
                puVar3 = (undefined1 *)0x2ce2edddaf334d81;
              }
            }
          }
          else {
            puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
            if ((puVar5 != (undefined1 *)0x696b554ab6b2c8c5) &&
               (puVar3 = puVar5, puVar5 == (undefined1 *)0x6b5051bf1aed633d)) {
              puVar3 = (undefined1 *)0x1cba5f82f77e481f;
            }
          }
        }
        if (0x125dd2cc844aecb3 < (long)puVar5) break;
        if (puVar5 == (undefined1 *)0xf6c71d76f8b48eb9) {
          puVar3 = (undefined1 *)0x6b5051bf1aed633d;
          if (*param_1 != 0) {
            puVar3 = (undefined1 *)0xbf711ec4fafe862e;
          }
        }
        else if (puVar5 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar3 = puVar1;
        }
      }
      if (puVar5 != (undefined1 *)0x125dd2cc844aecb4) break;
      FUN_0016df9c(param_1,param_2,local_70,&local_78,&local_80);
      puVar3 = (undefined1 *)0x353e7cd16df664a2;
      if (*param_1 != 0) {
        puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
      }
    }
  } while (puVar5 != (undefined1 *)0x1cba5f82f77e481f);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

