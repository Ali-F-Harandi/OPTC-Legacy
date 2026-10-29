// rea decompile_all
// name: FUN_00110ac8
// address: 0x110ac8
// body: available
// range: 0x110ac8-0x110ef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x110ef4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00110ac8(int *param_1,undefined8 param_2,undefined8 param_3,double *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double *unaff_x22;
  double *unaff_x23;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double unaff_d8;
  undefined8 local_98;
  double *local_90;
  long local_88;
  long local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = 0x40e2e377ff801f0f;
  if (*(char *)(param_4 + 1) != '\0') {
    lVar1 = 0x16719e03f6bac21d;
  }
  local_98 = 0;
  local_90 = (double *)0x0;
  lVar3 = -0xbd76994df8af996;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < 0x25b4e6ec9cd2ecdc) {
            if (lVar4 < -0x43d8d42d8bbf5814) {
              if (lVar4 == -0x76001134909e88fc) {
                dVar5 = *local_90;
                dVar7 = local_90[3];
                dVar6 = local_90[2];
                uVar9 = *(undefined8 *)((long)local_90 + 0x21);
                uVar8 = *(undefined8 *)((long)local_90 + 0x19);
                param_4[0x49] = local_90[1];
                param_4[0x48] = dVar5;
                param_4[0x4b] = dVar7;
                param_4[0x4a] = dVar6;
                *(undefined8 *)((long)param_4 + 0x261) = uVar9;
                *(undefined8 *)((long)param_4 + 0x259) = uVar8;
                lVar3 = -0x51cf875a70e06525;
                unaff_x23 = local_90;
              }
              else if (lVar4 == -0x6ac927218151fec6) {
                FUN_0011daec(param_1,param_2,param_3,*(undefined4 *)((long)param_4 + 0xc),&local_90,
                             &local_98);
                lVar3 = -0x76001134909e88fc;
                if (*param_1 != 0) {
                  lVar3 = -0x43d8d42d8bbf5814;
                }
              }
              else if (lVar4 == -0x51cf875a70e06525) {
                lVar3 = 0x25b4e6ec9cd2ecdc;
                unaff_x22 = unaff_x23;
                if (unaff_x23 != (double *)0x0) {
                  lVar3 = 0x33d65f6cdac5d180;
                }
              }
            }
            else if (lVar4 == -0x43d8d42d8bbf5814) {
              lVar3 = -0x51cf875a70e06525;
              unaff_x23 = local_90;
            }
            else {
              lVar3 = lVar1;
              if ((lVar4 != -0xbd76994df8af996) && (lVar3 = lVar4, lVar4 == 0x16719e03f6bac21d)) {
                lVar3 = -0x6ac927218151fec6;
              }
            }
          }
          if (lVar4 < 0x40e2e377ff801f0f) break;
          if (lVar4 == 0x40e2e377ff801f0f) {
            local_88 = 0;
            local_80 = 0;
            FUN_001f3abc(0,&local_88);
            unaff_d8 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
            lVar3 = 0x5d0df0c4d56662f1;
            if (unaff_d8 - *param_4 <= 15000.0) {
              lVar3 = 0x4750cf34c56940e3;
            }
          }
          else {
            lVar3 = 0x2ceb08fc97843c55;
            if ((lVar4 != 0x4750cf34c56940e3) && (lVar3 = lVar4, lVar4 == 0x5d0df0c4d56662f1)) {
              *(undefined1 *)(param_4 + 1) = 1;
              lVar3 = 0x2ceb08fc97843c55;
            }
          }
        }
        if (0x2f24479933703a49 < lVar4) break;
        lVar3 = 0x2f24479933703a4a;
        if ((lVar4 != 0x25b4e6ec9cd2ecdc) && (lVar3 = lVar4, lVar4 == 0x2ceb08fc97843c55)) {
          *param_4 = unaff_d8;
          lVar3 = -0x6ac927218151fec6;
        }
      }
      if (lVar4 != 0x33d65f6cdac5d180) break;
      free(unaff_x22);
      lVar3 = 0x2f24479933703a4a;
    }
  } while (lVar4 != 0x2f24479933703a4a);
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

