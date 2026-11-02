// rea decompile_all
// name: FUN_001a8dec
// address: 0x1a8dec
// body: available
// range: 0x1a8dec-0x1a95ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a95a8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001a8dec(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined8 unaff_x20;
  long lVar11;
  void *unaff_x27;
  void *unaff_x28;
  double dVar12;
  double dVar13;
  void *local_340;
  int local_32c;
  timespec local_328;
  undefined4 local_314;
  double local_310;
  undefined1 auStack_308 [4];
  int local_304;
  long local_300;
  undefined8 local_2f8;
  undefined1 auStack_2f0 [544];
  undefined1 auStack_d0 [48];
  void *local_a0;
  void *local_98;
  void *local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  lVar11 = *param_1;
  lVar10 = *(long *)param_1[3];
  iVar2 = *(int *)param_1[4];
  lVar7 = *(long *)param_1[1];
  lVar8 = *(long *)param_1[2];
  puVar1 = (undefined1 *)0x1cba5f82f77e481f;
  if ((((0 < iVar2 && lVar10 != 0) && lVar8 != 0) && lVar7 != 0) && lVar11 != 0) {
    puVar1 = (undefined1 *)0x3b36a7a007b21166;
  }
  local_32c = 0;
  puVar4 = (undefined1 *)0xbf711ec4fafe862e;
  do {
    while( true ) {
      while (puVar9 = puVar4, puVar4 = puVar9, (long)puVar9 < 0x312910f1547c7c77) {
        if ((long)puVar9 < -0x3bafc724edb51fea) {
          if ((long)puVar9 < -0x579a549dca8d1ccf) {
            if (puVar9 == (undefined1 *)0x8e3a3d610d847caf) {
              free(unaff_x27);
              local_98 = (void *)0x0;
              puVar4 = (undefined1 *)0x960858df0b0de441;
            }
            else if (puVar9 == (undefined1 *)0x960858df0b0de441) {
              puVar4 = (undefined1 *)0x36f07785a64d7584;
              unaff_x28 = local_88;
              if (local_88 != (void *)0x0) {
                puVar4 = (undefined1 *)0xc879bc31bae5bb14;
              }
            }
            else if (puVar9 == (undefined1 *)0x8500be9b057d300e) {
              if (*(long *)(lVar3 + 0x28) == local_80) {
                return unaff_x20;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
          else {
            puVar4 = (undefined1 *)0xedbefc38c6cf9bfe;
            if (puVar9 != (undefined1 *)0xa865ab623572e331) {
              if (puVar9 == (undefined1 *)0xba8fbc7d3623138d) {
                puVar4 = (undefined1 *)0x418b7d3c908df894;
                unaff_x27 = local_98;
                if (local_98 != (void *)0x0) {
                  puVar4 = (undefined1 *)0x8e3a3d610d847caf;
                }
              }
              else {
                puVar4 = puVar9;
                if (puVar9 == (undefined1 *)0xbf711ec4fafe862e) {
                  puVar4 = puVar1;
                }
              }
            }
          }
        }
        else if ((long)puVar9 < -0x124103c739306402) {
          if (puVar9 == &DAT_c45038db124ae016) {
            puVar4 = (undefined1 *)0x8500be9b057d300e;
            unaff_x20 = local_2f8;
          }
          else if (puVar9 == (undefined1 *)0xc879bc31bae5bb14) {
            free(unaff_x28);
            puVar4 = &DAT_c45038db124ae016;
          }
          else if (puVar9 == (undefined1 *)0xc89737e2f8768a05) {
            dVar12 = (double)local_328.tv_nsec;
            dVar13 = (double)local_328.tv_sec;
            memset(auStack_308,0,0x288);
            local_310 = dVar12 / 1000000.0 + dVar13 * 1000.0;
            local_304 = iVar2;
            local_300 = lVar8;
            FUN_00207adc(auStack_2f0);
            FUN_001e38f8(auStack_d0,0,0x28);
            FUN_001b06f4(iVar2);
            FUN_00110ac8(&local_32c,lVar11,lVar7,&local_310);
            puVar4 = (undefined1 *)0x52cde6c2dea1be4;
            if (local_32c != 0) {
              puVar4 = (undefined1 *)0x49b9b00eeff4c15a;
            }
          }
        }
        else if (puVar9 == (undefined1 *)0xedbefc38c6cf9bfe) {
          local_340 = local_a0;
          puVar4 = (undefined1 *)0x77f0428eaa711148;
          if (local_a0 != (void *)0x0) {
            puVar4 = (undefined1 *)0x7d8bf94548220fb8;
          }
        }
        else {
          puVar4 = (undefined1 *)0x5ece82223eee3411;
          if ((puVar9 != (undefined1 *)0x52cde6c2dea1be4) &&
             (puVar4 = puVar9, puVar9 == (undefined1 *)0x1cba5f82f77e481f)) goto LAB_001a8f2c;
        }
      }
      if (0x58b842c6f86d5803 < (long)puVar9) break;
      if ((long)puVar9 < 0x418b7d3c908df894) {
        if (puVar9 == (undefined1 *)0x312910f1547c7c77) {
LAB_001a8f2c:
          unaff_x20 = 0;
          puVar4 = (undefined1 *)0x8500be9b057d300e;
        }
        else {
          puVar4 = &DAT_c45038db124ae016;
          if ((puVar9 != (undefined1 *)0x36f07785a64d7584) &&
             (puVar4 = puVar9, puVar9 == (undefined1 *)0x3b36a7a007b21166)) {
            iVar5 = clock_gettime(0,&local_328);
            puVar4 = (undefined1 *)0xc89737e2f8768a05;
            if (iVar5 != 0) {
              puVar4 = (undefined1 *)0x312910f1547c7c77;
            }
          }
        }
      }
      else {
        puVar4 = (undefined1 *)0x960858df0b0de441;
        if (puVar9 != (undefined1 *)0x418b7d3c908df894) {
          if (puVar9 == (undefined1 *)0x49b9b00eeff4c15a) {
            local_32c = 0;
            puVar4 = (undefined1 *)0x5ece82223eee3411;
          }
          else {
            puVar4 = puVar9;
            if (puVar9 == (undefined1 *)0x5039187a35dab08d) {
              local_32c = 0;
              puVar4 = (undefined1 *)0xedbefc38c6cf9bfe;
            }
          }
        }
      }
    }
    if ((long)puVar9 < 0x77f0428eaa711148) {
      puVar4 = (undefined1 *)0x75df443d79079721;
      if (puVar9 != (undefined1 *)0x58b842c6f86d5804) {
        if (puVar9 == (undefined1 *)0x5ece82223eee3411) {
          local_314 = 0;
          FUN_00116d24(&local_310);
          uVar6 = FUN_00111024(lVar11,&local_314,lVar7,&local_310);
          puVar4 = (undefined1 *)0x58b842c6f86d5804;
          if ((uVar6 & 1) == 0) {
            puVar4 = (undefined1 *)0x7e713fa43f38c582;
          }
        }
        else {
          puVar4 = puVar9;
          if (puVar9 == (undefined1 *)0x75df443d79079721) {
            FUN_0016db64(&local_314,lVar11,&local_310);
            FUN_001a8ab8(lVar11,lVar7,lVar10,&local_310);
            FUN_00118b6c(&local_310);
            FUN_001b15e8(&local_310);
            FUN_00110f08(&local_310);
            uVar6 = FUN_001de958(lVar11,&local_32c,&local_310);
            puVar4 = (undefined1 *)0xa865ab623572e331;
            if ((uVar6 & 1) == 0) {
              puVar4 = (undefined1 *)0x5039187a35dab08d;
            }
          }
        }
      }
    }
    else {
      puVar4 = (undefined1 *)0xba8fbc7d3623138d;
      if (puVar9 != (undefined1 *)0x77f0428eaa711148) {
        if (puVar9 == (undefined1 *)0x7d8bf94548220fb8) {
          free(local_340);
          local_a0 = (void *)0x0;
          puVar4 = (undefined1 *)0xba8fbc7d3623138d;
        }
        else {
          puVar4 = puVar9;
          if (puVar9 == (undefined1 *)0x7e713fa43f38c582) {
            FUN_00116c90(&local_310);
            local_314 = 0;
            puVar4 = (undefined1 *)0x75df443d79079721;
          }
        }
      }
    }
  } while( true );
}

