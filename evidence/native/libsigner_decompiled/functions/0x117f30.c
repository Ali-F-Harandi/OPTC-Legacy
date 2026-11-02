// rea decompile_all
// name: FUN_00117f30
// address: 0x117f30
// body: available
// range: 0x117f30-0x1184ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1184fc to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00117f30(undefined8 param_1,undefined8 param_2,double *param_3)

{
  long lVar1;
  long lVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  double unaff_x22;
  void *unaff_x23;
  double unaff_d8;
  undefined8 local_a0;
  void *local_98;
  int local_8c;
  long local_88;
  long local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_8c = 0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  lVar2 = -0x34d4ad3abedffff4;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar5 = lVar2, lVar2 = lVar5, lVar5 < -0x95c7fb9615b298a) {
              if (lVar5 < -0x34d4ad3abedffff4) {
                if (lVar5 < -0x44281625c09c414c) {
                  if (lVar5 == -0x4e9c5a5e47d18ad6) {
                    unaff_x22 = param_3[0x47];
                    lVar2 = -0x231afa1b7f11a7da;
                  }
                  else if (lVar5 == -0x4a4edde3b19d8a04) {
                    lVar2 = -0x3ffb44e85fa27eaf;
                  }
                }
                else if (lVar5 == -0x44281625c09c414c) {
                  FUN_002083ac(param_3 + 4,0x32);
                  unaff_x22 = (double)((ulong)param_3[0x47] | 1);
                  lVar2 = -0x231afa1b7f11a7da;
                }
                else if (lVar5 == -0x3ffb44e85fa27eaf) {
                  *param_3 = unaff_d8;
                  lVar2 = -0x231adb85a81a7f15;
                }
              }
              else if (lVar5 < -0x231afa1b7f11a7da) {
                if (lVar5 == -0x34d4ad3abedffff4) {
                  uVar4 = FUN_00139a4c(&local_8c,param_1,param_2,&local_98,&local_a0);
                  lVar2 = 0x40b17a06f7ed6277;
                  if ((uVar4 & 1) == 0) {
                    lVar2 = 0x686abeca53c867f;
                  }
                }
                else if (lVar5 == -0x33b97250fb962322) {
                  FUN_002083ac(param_3 + 4,4);
                  param_3[0x47] = (double)((ulong)param_3[0x47] | 1);
                  lVar2 = 0x319faf94648beb71;
                }
              }
              else if (lVar5 == -0x231afa1b7f11a7da) {
                param_3[0x47] = (double)((ulong)unaff_x22 | 0x4000000000010);
                lVar2 = -0x95c7fb9615b298a;
                unaff_x23 = local_98;
                if (local_98 != (void *)0x0) {
                  lVar2 = 0x2c812424ce32f415;
                }
              }
              else if (lVar5 == -0x231adb85a81a7f15) {
                lVar2 = -0x4e9c5a5e47d18ad6;
                if (local_8c != 0) {
                  lVar2 = -0x44281625c09c414c;
                }
              }
              else if (lVar5 == -0x11f4cf8d2c00c35b) {
                local_88 = 0;
                local_80 = 0;
                FUN_001f3abc(0,&local_88);
                unaff_d8 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
                lVar2 = 0x2ac8f962b85f1348;
                if (unaff_d8 - *param_3 <= 15000.0) {
                  lVar2 = -0x4a4edde3b19d8a04;
                }
              }
            }
            if (0x2ac8f962b85f1347 < lVar5) break;
            if (lVar5 < 0x21f89fb6280e1198) {
              lVar2 = 0x4834b9277651b0ab;
              if ((lVar5 != -0x95c7fb9615b298a) && (lVar2 = lVar5, lVar5 == 0x686abeca53c867f)) {
                lVar2 = -0x231adb85a81a7f15;
              }
            }
            else {
              lVar2 = 0x319faf94648beb71;
              if ((lVar5 != 0x21f89fb6280e1198) && (lVar2 = lVar5, lVar5 == 0x24e310e2985a3222)) {
                lVar2 = -0x231adb85a81a7f15;
              }
            }
          }
          if (0x319faf94648beb70 < lVar5) break;
          if (lVar5 == 0x2ac8f962b85f1348) {
            *(undefined1 *)(param_3 + 1) = 1;
            lVar2 = -0x3ffb44e85fa27eaf;
          }
          else if (lVar5 == 0x2c812424ce32f415) {
            free(unaff_x23);
            lVar2 = 0x4834b9277651b0ab;
          }
        }
        if (lVar5 != 0x319faf94648beb71) break;
        lVar2 = -0x11f4cf8d2c00c35b;
        if (*(char *)(param_3 + 1) != '\0') {
          lVar2 = 0x24e310e2985a3222;
        }
      }
      if (lVar5 != 0x40b17a06f7ed6277) break;
      sVar3 = FUN_00139440(param_1,param_2,local_98,local_a0);
      lVar2 = 0x21f89fb6280e1198;
      if (sVar3 != 0) {
        lVar2 = -0x33b97250fb962322;
      }
    }
  } while (lVar5 != 0x4834b9277651b0ab);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8c == 0);
}

