// rea decompile_all
// name: FUN_0016df9c
// address: 0x16df9c
// body: available
// range: 0x16df9c-0x16e5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016df9c(int *param_1,long *param_2,long param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  int unaff_w26;
  
  lVar1 = 0x3b36a7a007b21166;
  if (param_3 != 0) {
    lVar1 = 0x312910f1547c7c77;
  }
  lVar3 = 0x1cba5f82f77e481f;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar4 = lVar3, lVar3 = lVar4, 0x3b36a7a007b21165 < lVar4) {
              if (lVar4 < 0x5ece82223eee3411) {
                if (lVar4 < 0x49b9b00eeff4c15a) {
                  if (lVar4 == 0x3b36a7a007b21166) {
                    unaff_w26 = 3;
                    lVar3 = 0x58b842c6f86d5804;
                  }
                  else if (lVar4 == 0x418b7d3c908df894) {
                    lVar3 = -0x69f7a720f4f21bbf;
                    if (*param_1 != 0) {
                      lVar3 = -0x71c5c29ef27b8351;
                    }
                  }
                }
                else {
                  lVar3 = 0x7e713fa43f38c582;
                  if (lVar4 != 0x49b9b00eeff4c15a) {
                    if (lVar4 == 0x5039187a35dab08d) {
                      lVar3 = (**(code **)(*param_2 + 0x548))(param_2,param_3,0);
                      *param_4 = lVar3;
                      lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
                      lVar3 = 0x77f0428eaa711148;
                      if (lVar4 != 0) {
                        lVar3 = -0x124103c739306402;
                      }
                    }
                    else {
                      lVar3 = lVar4;
                      if (lVar4 == 0x58b842c6f86d5804) {
                        *param_1 = unaff_w26;
                        lVar3 = 0x7e713fa43f38c582;
                      }
                    }
                  }
                }
              }
              else if (lVar4 < 0x77f0428eaa711148) {
                lVar3 = 0x5039187a35dab08d;
                if ((lVar4 != 0x5ece82223eee3411) && (lVar3 = lVar4, lVar4 == 0x75df443d79079721)) {
                  lVar3 = 0x36f07785a64d7584;
                }
              }
              else if (lVar4 == 0x77f0428eaa711148) {
                lVar3 = 0x7d8bf94548220fb8;
                if (*param_4 != 0) {
                  lVar3 = 0x418b7d3c908df894;
                }
              }
              else {
                lVar3 = -0x45704382c9dcec73;
                if ((lVar4 != 0x7d8bf94548220fb8) && (lVar3 = lVar4, lVar4 == 0x7e713fa43f38c582)) {
                  *param_5 = 0;
                  lVar3 = -0x579a549dca8d1ccf;
                  if (*param_1 != 0) {
                    lVar3 = 0x75df443d79079721;
                  }
                }
              }
            }
            if (lVar4 < -0x124103c739306402) break;
            if (lVar4 < 0x1cba5f82f77e481f) {
              if (lVar4 == -0x124103c739306402) {
                (**(code **)(*param_2 + 0x80))(param_2);
                (**(code **)(*param_2 + 0x88))(param_2);
                lVar3 = -0x45704382c9dcec73;
              }
              else if (lVar4 == 0x52cde6c2dea1be4) {
                lVar3 = 0x5ece82223eee3411;
                if (*param_1 != 0) {
                  lVar3 = 0x49b9b00eeff4c15a;
                }
              }
            }
            else {
              lVar3 = lVar1;
              if (lVar4 != 0x1cba5f82f77e481f) {
                if (lVar4 == 0x312910f1547c7c77) {
                  iVar2 = (**(code **)(*param_2 + 0x540))(param_2,param_3);
                  pcVar5 = *(code **)(*param_2 + 0x78);
                  *param_5 = (long)iVar2;
                  lVar4 = (*pcVar5)(param_2);
                  lVar3 = 0x52cde6c2dea1be4;
                  if (lVar4 != 0) {
                    lVar3 = -0x3768c81d078975fb;
                  }
                }
                else {
                  lVar3 = lVar4;
                  if (lVar4 == 0x36f07785a64d7584) {
                    *param_4 = 0;
                    *param_5 = 0;
                    lVar3 = -0x378643ce451a44ec;
                  }
                }
              }
            }
          }
          if (-0x45704382c9dcec74 < lVar4) break;
          lVar3 = 0x36f07785a64d7584;
          if (((lVar4 != -0x71c5c29ef27b8351) &&
              (lVar3 = -0x378643ce451a44ec, lVar4 != -0x69f7a720f4f21bbf)) &&
             (lVar3 = lVar4, lVar4 == -0x579a549dca8d1ccf)) {
            lVar3 = 0x5039187a35dab08d;
          }
        }
        if (lVar4 != -0x45704382c9dcec73) break;
        *param_1 = 0x1b;
        lVar3 = 0x36f07785a64d7584;
      }
      if (lVar4 != -0x3768c81d078975fb) break;
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      unaff_w26 = 0x1b;
      lVar3 = 0x58b842c6f86d5804;
    }
  } while (lVar4 != -0x378643ce451a44ec);
  return;
}

