// rea decompile_all
// name: FUN_001b20b4
// address: 0x1b20b4
// body: available
// range: 0x1b20b4-0x1b2863 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b2860 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001b20b4(undefined4 *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  void *unaff_x25;
  undefined8 *unaff_x26;
  undefined1 *unaff_x27;
  FILE *unaff_x28;
  undefined8 local_c0 [4];
  undefined1 auStack_a0 [8];
  long local_98;
  undefined4 *local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  long local_78;
  
  local_90 = param_1;
  local_88 = param_2;
  local_98 = tpidr_el0;
  local_78 = *(long *)(local_98 + 0x28);
  puVar2 = auStack_a0;
  puVar1 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (puVar5 = puVar1, puVar1 = puVar5, (long)puVar5 < 0x125dd2cc844aecb4) {
              if ((long)puVar5 < -0xab3a208b03543bf) {
                if ((long)puVar5 < -0x3dc07bfa902cf42a) {
                  puVar1 = (undefined1 *)0xbf711ec4fafe862e;
                  if (puVar5 != (undefined1 *)0xa865ab623572e331) {
                    if (puVar5 == (undefined1 *)0xaa46adf0a78af8c7) {
                      lVar4 = FUN_001b19e4(unaff_x26,unaff_x27,unaff_x28);
                      local_80 = (uint)(lVar4 != -1);
                      puVar1 = (undefined1 *)0xf54c5df74fcabc41;
                      if (lVar4 == -1) {
                        puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
                      }
                    }
                    else {
                      puVar1 = puVar5;
                      if (puVar5 == (undefined1 *)0xbf711ec4fafe862e) {
                        DAT_0021fabc = 0;
                        lVar4 = FUN_001ef4b4(*unaff_x26,&DAT_0021e838);
                        puVar1 = (undefined1 *)0x1cba5f82f77e481f;
                        if (lVar4 != 0) {
                          puVar1 = (undefined1 *)0x3b36a7a007b21166;
                        }
                      }
                    }
                  }
                }
                else if (puVar5 == (undefined1 *)0xc23f84056fd30bd6) {
                  iVar3 = FUN_00212730(0,1,&DAT_0021fabc);
                  puVar1 = (undefined1 *)0x75df443d79079721;
                  if (iVar3 != 0) {
                    puVar1 = (undefined1 *)0xf6c71d76f8b48eb9;
                  }
                }
                else {
                  puVar1 = (undefined1 *)0x49b9b00eeff4c15a;
                  if ((puVar5 != (undefined1 *)0xc89737e2f8768a05) &&
                     (puVar1 = puVar5, puVar5 == (undefined1 *)0xd222672a639a1d2e)) {
                    local_7c = 0;
                    *local_90 = 8;
                    puVar1 = (undefined1 *)0x5ece82223eee3411;
                  }
                }
              }
              else if ((long)puVar5 < -0x938e289074b7147) {
                puVar1 = (undefined1 *)0xc23f84056fd30bd6;
                if (puVar5 != (undefined1 *)0xf54c5df74fcabc41) {
                  if (puVar5 == &DAT_f615808441b1dafc) {
                    iVar3 = FUN_00212730(0,1,&DAT_0021fab8);
                    puVar1 = (undefined1 *)0x58b842c6f86d5804;
                    if (iVar3 != 0) {
                      puVar1 = (undefined1 *)0x125dd2cc844aecb4;
                    }
                  }
                  else {
                    puVar1 = puVar5;
                    if (puVar5 == (undefined1 *)0xf63b36e7a9d9f670) {
                      puVar1 = (undefined1 *)0x312910f1547c7c77;
                    }
                  }
                }
              }
              else {
                puVar1 = (undefined1 *)0xc23f84056fd30bd6;
                if (puVar5 != (undefined1 *)0xf6c71d76f8b48eb9) {
                  if (puVar5 == (undefined1 *)0x52cde6c2dea1be4) {
                    free(unaff_x25);
                    *unaff_x26 = 0;
                    puVar1 = (undefined1 *)0x49b9b00eeff4c15a;
                  }
                  else {
                    puVar1 = puVar5;
                    if (puVar5 == (undefined1 *)0x887e73b2c28c6a1) {
                      puVar1 = &DAT_f615808441b1dafc;
                    }
                  }
                }
              }
            }
            if (0x49b9b00eeff4c159 < (long)puVar5) break;
            if ((long)puVar5 < 0x312910f1547c7c77) {
              puVar1 = &DAT_f615808441b1dafc;
              if (((puVar5 != (undefined1 *)0x125dd2cc844aecb4) &&
                  (puVar1 = (undefined1 *)0xaa46adf0a78af8c7,
                  puVar5 != (undefined1 *)0x1cba5f82f77e481f)) &&
                 (puVar1 = puVar5, puVar5 == (undefined1 *)0x2ce2edddaf334d81)) {
                puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
              }
            }
            else if (puVar5 == (undefined1 *)0x312910f1547c7c77) {
              unaff_x25 = (void *)*unaff_x26;
              puVar1 = (undefined1 *)0xc89737e2f8768a05;
              if (unaff_x25 != (void *)0x0) {
                puVar1 = (undefined1 *)0x52cde6c2dea1be4;
              }
            }
            else if (puVar5 == (undefined1 *)0x353e7cd16df664a2) {
              DAT_0021fab8 = 0;
              unaff_x26 = (undefined8 *)(puVar2 + -0x10);
              unaff_x27 = puVar2 + -0x20;
              *(undefined8 *)(puVar2 + -0x10) = 0;
              *(undefined8 *)(puVar2 + -0x20) = 0;
              unaff_x28 = (FILE *)FUN_001f3978(local_88,&DAT_0021e830);
              puVar2 = unaff_x27;
              puVar1 = (undefined1 *)0xd222672a639a1d2e;
              if (unaff_x28 != (FILE *)0x0) {
                puVar1 = (undefined1 *)0x2ce2edddaf334d81;
              }
            }
            else if (puVar5 == (undefined1 *)0x3b36a7a007b21166) {
              puVar1 = (undefined1 *)0x312910f1547c7c77;
            }
          }
          if ((long)puVar5 < 0x6b5051bf1aed633d) break;
          if (puVar5 == (undefined1 *)0x6b5051bf1aed633d) {
            DAT_0021e840 = DAT_0021e840 ^ 0x62;
            DAT_0021e841 = DAT_0021e841 ^ 0x62;
            DAT_0021e842 = DAT_0021e842 ^ 0x62;
            DAT_0021e843 = DAT_0021e843 ^ 0x62;
            DAT_0021e838 = DAT_0021e838 ^ 0x6262626262626262;
            DAT_0021faea = '\x01';
            puVar1 = (undefined1 *)0xbf711ec4fafe862e;
          }
          else if (puVar5 == (undefined1 *)0x75df443d79079721) {
            puVar1 = (undefined1 *)0xa865ab623572e331;
            if (DAT_0021faea == '\0') {
              puVar1 = (undefined1 *)0x6b5051bf1aed633d;
            }
          }
          else if (puVar5 == (undefined1 *)0x7e713fa43f38c582) {
            puVar1 = (undefined1 *)0x353e7cd16df664a2;
          }
        }
        if (0x5ece82223eee3410 < (long)puVar5) break;
        if (puVar5 == (undefined1 *)0x49b9b00eeff4c15a) {
          fclose(unaff_x28);
          local_7c = local_80;
          puVar1 = (undefined1 *)0x5ece82223eee3411;
        }
        else if (puVar5 == (undefined1 *)0x58b842c6f86d5804) {
          puVar1 = (undefined1 *)0x7e713fa43f38c582;
          if (DAT_0021fae9 == '\0') {
            puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
          }
        }
      }
      if (puVar5 != (undefined1 *)0x696b554ab6b2c8c5) break;
      DAT_0021e830 = DAT_0021e830 ^ 6;
      DAT_0021e831 = DAT_0021e831 ^ 6;
      DAT_0021fae9 = '\x01';
      puVar1 = (undefined1 *)0x353e7cd16df664a2;
    }
  } while (puVar5 != (undefined1 *)0x5ece82223eee3411);
  if (*(long *)(local_98 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7c & 1;
}

