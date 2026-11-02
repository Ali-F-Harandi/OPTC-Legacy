// rea decompile_all
// name: FUN_0020540c
// address: 0x20540c
// body: available
// range: 0x20540c-0x205ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x205ddc to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0020540c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  __pid_t _Var4;
  int iVar5;
  long lVar6;
  undefined1 *puVar7;
  FILE *unaff_x19;
  char *unaff_x20;
  char *unaff_x21;
  undefined1 auStack_7c [20];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  lVar6 = FUN_001e16c4(&DAT_001030a0);
  puVar1 = &DAT_f615808441b1dafc;
  if (lVar6 != 0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar7 = puVar3, puVar3 = puVar7, (long)puVar7 < 0x1cba5f82f77e481f) {
            if ((long)puVar7 < -0x124103c739306402) {
              if ((long)puVar7 < -0x408ee13b050179d2) {
                if (puVar7 == (undefined1 *)0xa865ab623572e331) {
                  puVar3 = (undefined1 *)0x5039187a35dab08d;
                  if (DAT_0021fb55 == '\0') {
                    puVar3 = (undefined1 *)0xf54c5df74fcabc41;
                  }
                }
                else if (puVar7 == (undefined1 *)0xaa46adf0a78af8c7) {
                  iVar5 = FUN_00212730(0,1,&DAT_0021fb4c);
                  puVar3 = (undefined1 *)0xa865ab623572e331;
                  if (iVar5 != 0) {
                    puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
                  }
                }
                else if (puVar7 == (undefined1 *)0xba8fbc7d3623138d) {
                  puVar3 = (undefined1 *)0xc89737e2f8768a05;
                }
              }
              else if ((long)puVar7 < -0x3768c81d078975fb) {
                puVar3 = (undefined1 *)0x1cba5f82f77e481f;
                if ((puVar7 != (undefined1 *)0xbf711ec4fafe862e) &&
                   (puVar3 = puVar7, puVar7 == (undefined1 *)0xc23f84056fd30bd6)) {
                  DAT_0021fb4c = 0;
                  _Var4 = getpid();
                  FUN_001e0fd8(auStack_7c,0x14,&DAT_0021eff8,(long)_Var4);
                  unaff_x21 = (char *)FUN_001ffec0(&DAT_001030a0,&DAT_0021effc,auStack_7c);
                  puVar3 = (undefined1 *)0xf6c71d76f8b48eb9;
                  if (unaff_x21 != (char *)0x0) {
                    puVar3 = (undefined1 *)0xbf711ec4fafe862e;
                  }
                }
              }
              else if (puVar7 == (undefined1 *)0xc89737e2f8768a05) {
                DAT_0021fb54 = 0;
                unaff_x19 = fopen(unaff_x21,(char *)&DAT_0021f004);
                free(unaff_x21);
                puVar3 = (undefined1 *)0x52cde6c2dea1be4;
                if (unaff_x19 != (FILE *)0x0) {
                  puVar3 = (undefined1 *)0x49b9b00eeff4c15a;
                }
              }
              else if (puVar7 == (undefined1 *)0xd222672a639a1d2e) {
                DAT_0021fb50 = 0;
                puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
              }
            }
            else if ((long)puVar7 < -0x938e289074b7147) {
              if ((long)puVar7 < -0x9ea7f7bbe4e2504) {
                if (puVar7 == (undefined1 *)0xedbefc38c6cf9bfe) {
                  puVar3 = (undefined1 *)0x77f0428eaa711148;
                  if (DAT_0021fb56 == '\0') {
                    puVar3 = (undefined1 *)0x2ce2edddaf334d81;
                  }
                }
                else if (puVar7 == (undefined1 *)0xf54c5df74fcabc41) {
                  DAT_0021eff8 = DAT_0021eff8 ^ 0x49;
                  DAT_0021eff9 = DAT_0021eff9 ^ 0x49;
                  DAT_0021effa = DAT_0021effa ^ 0x49;
                  DAT_0021effb = DAT_0021effb ^ 0x49;
                  DAT_0021fb55 = '\x01';
                  puVar3 = (undefined1 *)0xc23f84056fd30bd6;
                }
              }
              else {
                puVar3 = (undefined1 *)0x6b5051bf1aed633d;
                if ((puVar7 != &DAT_f615808441b1dafc) &&
                   (puVar3 = puVar7, puVar7 == (undefined1 *)0xf63b36e7a9d9f670)) {
                  puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
                }
              }
            }
            else if ((long)puVar7 < 0x887e73b2c28c6a1) {
              puVar3 = (undefined1 *)0x6b5051bf1aed633d;
              if ((puVar7 != (undefined1 *)0xf6c71d76f8b48eb9) &&
                 (puVar3 = puVar7, puVar7 == (undefined1 *)0x52cde6c2dea1be4)) {
                puVar3 = (undefined1 *)0x75df443d79079721;
              }
            }
            else {
              puVar3 = puVar1;
              if ((puVar7 != (undefined1 *)0x887e73b2c28c6a1) &&
                 (puVar3 = puVar7, puVar7 == (undefined1 *)0x125dd2cc844aecb4)) {
                puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
              }
            }
          }
          if (0x58b842c6f86d5803 < (long)puVar7) break;
          if ((long)puVar7 < 0x353e7cd16df664a2) {
            if (puVar7 == (undefined1 *)0x1cba5f82f77e481f) {
              iVar5 = FUN_00212730(0,1,&DAT_0021fb54);
              puVar3 = (undefined1 *)0x7d8bf94548220fb8;
              if (iVar5 != 0) {
                puVar3 = (undefined1 *)0x3b36a7a007b21166;
              }
            }
            else if (puVar7 == (undefined1 *)0x2ce2edddaf334d81) {
              DAT_0021effc = DAT_0021effc ^ 0xd6;
              DAT_0021effd = DAT_0021effd ^ 0xd6;
              DAT_0021effe = DAT_0021effe ^ 0xd6;
              DAT_0021efff = DAT_0021efff ^ 0xd6;
              DAT_0021f000 = DAT_0021f000 ^ 0xd6;
              DAT_0021f001 = DAT_0021f001 ^ 0xd6;
              DAT_0021fb56 = '\x01';
              puVar3 = (undefined1 *)0xd222672a639a1d2e;
            }
            else if (puVar7 == (undefined1 *)0x312910f1547c7c77) {
              DAT_0021f004 = DAT_0021f004 ^ 0xcb;
              DAT_0021f006 = DAT_0021f006 ^ 0xcb;
              DAT_0021f005 = DAT_0021f005 ^ 0xcb;
              DAT_0021fb57 = '\x01';
              puVar3 = (undefined1 *)0xc89737e2f8768a05;
            }
          }
          else if ((long)puVar7 < 0x49b9b00eeff4c15a) {
            puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
            if ((puVar7 != (undefined1 *)0x353e7cd16df664a2) &&
               (puVar3 = puVar7, puVar7 == (undefined1 *)0x3b36a7a007b21166)) {
              puVar3 = (undefined1 *)0x1cba5f82f77e481f;
            }
          }
          else if (puVar7 == (undefined1 *)0x49b9b00eeff4c15a) {
            unaff_x20 = (char *)FUN_002047c0(param_1,param_2,param_3,param_4);
            puVar3 = (undefined1 *)0x5ece82223eee3411;
            if (unaff_x20 != (char *)0x0) {
              puVar3 = (undefined1 *)0x58b842c6f86d5804;
            }
          }
          else if (puVar7 == (undefined1 *)0x5039187a35dab08d) {
            puVar3 = (undefined1 *)0xc23f84056fd30bd6;
          }
        }
        if (0x75df443d79079720 < (long)puVar7) break;
        if ((long)puVar7 < 0x696b554ab6b2c8c5) {
          if (puVar7 == (undefined1 *)0x58b842c6f86d5804) {
            fputs(unaff_x20,unaff_x19);
            free(unaff_x20);
            puVar3 = (undefined1 *)0x7e713fa43f38c582;
          }
          else if (puVar7 == (undefined1 *)0x5ece82223eee3411) {
            puVar3 = (undefined1 *)0x7e713fa43f38c582;
          }
        }
        else if (puVar7 == (undefined1 *)0x696b554ab6b2c8c5) {
          iVar5 = FUN_00212730(0,1,&DAT_0021fb50);
          puVar3 = (undefined1 *)0xedbefc38c6cf9bfe;
          if (iVar5 != 0) {
            puVar3 = (undefined1 *)0x353e7cd16df664a2;
          }
        }
        else if (puVar7 == (undefined1 *)0x6b5051bf1aed633d) {
          puVar3 = (undefined1 *)0x75df443d79079721;
        }
      }
      if ((long)puVar7 < 0x7d8bf94548220fb8) break;
      if (puVar7 == (undefined1 *)0x7d8bf94548220fb8) {
        puVar3 = (undefined1 *)0xba8fbc7d3623138d;
        if (DAT_0021fb57 == '\0') {
          puVar3 = (undefined1 *)0x312910f1547c7c77;
        }
      }
      else if (puVar7 == (undefined1 *)0x7e713fa43f38c582) {
        fclose(unaff_x19);
        puVar3 = (undefined1 *)0x75df443d79079721;
      }
    }
    puVar3 = (undefined1 *)0xd222672a639a1d2e;
  } while ((puVar7 == (undefined1 *)0x77f0428eaa711148) ||
          (puVar3 = puVar7, puVar7 != (undefined1 *)0x75df443d79079721));
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

