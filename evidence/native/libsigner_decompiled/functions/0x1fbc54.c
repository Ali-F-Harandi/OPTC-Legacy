// rea decompile_all
// name: FUN_001fbc54
// address: 0x1fbc54
// body: available
// range: 0x1fbc54-0x1fc4af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fc4ac to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fbc54(int *param_1,long param_2,uint param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong unaff_x23;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined8 local_74;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  local_74 = 0;
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              puVar4 = puVar2;
              puVar2 = puVar4;
              if ((long)puVar4 < 0x1cba5f82f77e481f) break;
              if ((long)puVar4 < 0x5039187a35dab08d) {
                if ((long)puVar4 < 0x353e7cd16df664a2) {
                  if (puVar4 == (undefined1 *)0x1cba5f82f77e481f) {
                    uVar3 = FUN_001f4fdc(param_1,param_2 + 0x24,4,1,param_4);
                    puVar2 = (undefined1 *)0x312910f1547c7c77;
                    if ((uVar3 & 1) == 0) {
                      puVar2 = (undefined1 *)0x3b36a7a007b21166;
                    }
                  }
                  else {
                    puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
                    if ((puVar4 != (undefined1 *)0x2ce2edddaf334d81) &&
                       (puVar2 = puVar4, puVar4 == (undefined1 *)0x312910f1547c7c77)) {
                      uVar3 = FUN_001f4fdc(param_1,&local_74,4,1,param_4);
                      puVar2 = (undefined1 *)0x52cde6c2dea1be4;
                      if ((uVar3 & 1) == 0) {
                        puVar2 = (undefined1 *)0xc89737e2f8768a05;
                      }
                    }
                  }
                }
                else if (puVar4 == (undefined1 *)0x353e7cd16df664a2) {
                  FUN_001f5c3c(param_1,param_2,local_7c,param_4);
                  puVar2 = (undefined1 *)0xd222672a639a1d2e;
                  if (*param_1 != 0) {
                    puVar2 = (undefined1 *)0x2ce2edddaf334d81;
                  }
                }
                else {
                  puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
                  if ((puVar4 != (undefined1 *)0x3b36a7a007b21166) &&
                     (puVar2 = puVar4, puVar4 == (undefined1 *)0x49b9b00eeff4c15a)) {
                    puVar2 = (undefined1 *)0x5039187a35dab08d;
                  }
                }
              }
              else if ((long)puVar4 < 0x696b554ab6b2c8c5) {
                if (puVar4 == (undefined1 *)0x5039187a35dab08d) {
                  *param_1 = 8;
                  puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
                }
                else {
                  puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
                  if ((puVar4 != (undefined1 *)0x58b842c6f86d5804) &&
                     (puVar2 = puVar4, puVar4 == (undefined1 *)0x5ece82223eee3411)) {
                    FUN_001f70d0(param_1,param_2 + 0x28,unaff_x23 & 0xffffffff,param_4);
                    puVar2 = (undefined1 *)0x7e713fa43f38c582;
                    if (*param_1 != 0) {
                      puVar2 = (undefined1 *)0x58b842c6f86d5804;
                    }
                  }
                }
              }
              else if ((long)puVar4 < 0x75df443d79079721) {
                puVar2 = (undefined1 *)0x5039187a35dab08d;
                if ((puVar4 != (undefined1 *)0x696b554ab6b2c8c5) &&
                   (puVar2 = puVar4, puVar4 == (undefined1 *)0x6b5051bf1aed633d)) {
                  local_84 = local_74._4_4_;
                  uVar3 = FUN_001f4fdc(param_1,param_2 + 0x20,4,1,param_4);
                  puVar2 = (undefined1 *)0x1cba5f82f77e481f;
                  if ((uVar3 & 1) == 0) {
                    puVar2 = (undefined1 *)0xbf711ec4fafe862e;
                  }
                }
              }
              else {
                puVar2 = (undefined1 *)0x5039187a35dab08d;
                if ((puVar4 != (undefined1 *)0x75df443d79079721) &&
                   (puVar2 = puVar4, puVar4 == (undefined1 *)0x7e713fa43f38c582)) {
                  puVar2 = (undefined1 *)0xa865ab623572e331;
                  if ((int)local_74 + local_88 != param_3) {
                    puVar2 = (undefined1 *)0x75df443d79079721;
                  }
                }
              }
            }
            if ((long)puVar4 < -0xab3a208b03543bf) break;
            if ((long)puVar4 < -0x938e289074b7147) {
              puVar2 = (undefined1 *)0x5039187a35dab08d;
              if (((puVar4 != (undefined1 *)0xf54c5df74fcabc41) &&
                  (puVar2 = (undefined1 *)0xedbefc38c6cf9bfe, puVar4 != &DAT_f615808441b1dafc)) &&
                 (puVar2 = puVar4, puVar4 == (undefined1 *)0xf63b36e7a9d9f670)) {
                local_80 = local_74._4_4_;
                puVar2 = (undefined1 *)0xf54c5df74fcabc41;
                if (local_78 + local_74._4_4_ + 8U <= param_3) {
                  puVar2 = (undefined1 *)0xc23f84056fd30bd6;
                }
              }
            }
            else if ((long)puVar4 < 0x887e73b2c28c6a1) {
              puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
              if ((puVar4 != (undefined1 *)0xf6c71d76f8b48eb9) &&
                 (puVar2 = puVar4, puVar4 == (undefined1 *)0x52cde6c2dea1be4)) {
                unaff_x23 = local_74 & 0xffffffff;
                local_88 = local_78 + local_84 + 0x14;
                puVar2 = (undefined1 *)0x49b9b00eeff4c15a;
                if ((uint)((int)local_74 + local_88) <= param_3) {
                  puVar2 = (undefined1 *)0x5ece82223eee3411;
                }
              }
            }
            else if (puVar4 == (undefined1 *)0x887e73b2c28c6a1) {
              uVar3 = FUN_001f4fdc(param_1,&local_6c,4,1,param_4);
              puVar2 = (undefined1 *)0x125dd2cc844aecb4;
              if ((uVar3 & 1) == 0) {
                puVar2 = &DAT_f615808441b1dafc;
              }
            }
            else if (puVar4 == (undefined1 *)0x125dd2cc844aecb4) {
              local_7c = local_6c;
              puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
              if (local_6c + 4U <= param_3) {
                puVar2 = (undefined1 *)0x353e7cd16df664a2;
              }
            }
          }
          if (-0x3dc07bfa902cf42b < (long)puVar4) break;
          puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
          if (((puVar4 != (undefined1 *)0xa865ab623572e331) &&
              (puVar4 != (undefined1 *)0xaa46adf0a78af8c7)) &&
             (puVar2 = puVar4, puVar4 == (undefined1 *)0xbf711ec4fafe862e)) {
            puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
          }
        }
        if (-0x2ddd98d59c65e2d3 < (long)puVar4) break;
        if (puVar4 == (undefined1 *)0xc23f84056fd30bd6) {
          FUN_001f6454(param_1,param_2 + 0x10,local_80,param_4);
          puVar2 = (undefined1 *)0x6b5051bf1aed633d;
          if (*param_1 != 0) {
            puVar2 = (undefined1 *)0xf6c71d76f8b48eb9;
          }
        }
        else if (puVar4 == (undefined1 *)0xc89737e2f8768a05) {
          puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
        }
      }
      if (puVar4 != (undefined1 *)0xd222672a639a1d2e) break;
      local_78 = local_6c;
      uVar3 = FUN_001f4fdc(param_1,(long)&local_74 + 4,4,1,param_4);
      puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
      if ((uVar3 & 1) == 0) {
        puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
      }
    }
  } while (puVar4 != (undefined1 *)0xedbefc38c6cf9bfe);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

