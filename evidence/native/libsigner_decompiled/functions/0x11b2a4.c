// rea decompile_all
// name: FUN_0011b2a4
// address: 0x11b2a4
// body: available
// range: 0x11b2a4-0x11bdb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11bdb0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011b2a4(int *param_1,long *param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  long unaff_x28;
  long local_b0;
  long local_a8;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_90 = 0;
  lVar6 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
  uVar7 = FUN_0016de70(param_2);
  puVar1 = (undefined1 *)0xbfa497f00132becf;
  if (lVar6 != 0) {
    puVar1 = (undefined1 *)0x5eda44100212fa2c;
  }
  puVar2 = (undefined1 *)0x8e3a3d610d847caf;
  if ((uVar7 & 1) == 0 && lVar6 != 0) {
    puVar2 = (undefined1 *)0x960858df0b0de441;
  }
  puVar3 = (undefined1 *)0x418b7d3c908df894;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar9 = puVar3, puVar3 = puVar9, -0x111819a4994f0fb < (long)puVar9) {
            if ((long)puVar9 < 0x32f4713bcaf93571) {
              if ((long)puVar9 < 0x22f3f9cf91cbb9a6) {
                if ((long)puVar9 < 0xfb13253120e52d5) {
                  if (puVar9 == (undefined1 *)0xfeee7e65b66b0f06) {
                    puVar3 = (undefined1 *)0x3b16db62a3c2f4fb;
                    if (local_70 != 0) {
                      puVar3 = (undefined1 *)0x3ace195dd3930386;
                    }
                    local_78 = 0;
                    unaff_x28 = local_70;
                  }
                  else if (puVar9 == (undefined1 *)0xc7bf249d1db72b2) {
                    puVar3 = (undefined1 *)0xfeee7e65b66b0f06;
                  }
                }
                else if (puVar9 == (undefined1 *)0xfb13253120e52d5) {
                  *param_1 = 2;
                  puVar3 = (undefined1 *)0xfda5c16090bb3af4;
                }
                else if (puVar9 == (undefined1 *)0x1db468c64d6a7ed0) {
                  puVar3 = (undefined1 *)0xc33cd820d1133e3a;
                  if (DAT_0021f1b5 == '\0') {
                    puVar3 = (undefined1 *)0x87b1ff2df68e38ae;
                  }
                }
              }
              else if ((long)puVar9 < 0x29ff0ff794febe2e) {
                if (puVar9 == (undefined1 *)0x22f3f9cf91cbb9a6) {
                  FUN_0016df9c(param_1,param_2,local_80,&local_88,&local_90);
                  puVar3 = (undefined1 *)0x940bdddd24f52ce3;
                  if (*param_1 != 0) {
                    puVar3 = (undefined1 *)0xe48eaf6f29f5caa2;
                  }
                }
                else if (puVar9 == (undefined1 *)0x27963d1423e000f6) {
                  (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
                  puVar3 = (undefined1 *)0xfeee7e65b66b0f06;
                }
              }
              else {
                puVar3 = (undefined1 *)0x31b9d74c89a90fe3;
                if (((puVar9 != (undefined1 *)0x29ff0ff794febe2e) &&
                    (puVar3 = (undefined1 *)0xfda5c16090bb3af4,
                    puVar9 != (undefined1 *)0x3007aa9d32d99be8)) &&
                   (puVar3 = puVar9, puVar9 == (undefined1 *)0x31b9d74c89a90fe3)) {
                  local_a8 = local_80;
                  puVar3 = (undefined1 *)0x32f4713bcaf93571;
                  if (local_80 != 0) {
                    puVar3 = (undefined1 *)0xce95d05271a8da34;
                  }
                }
              }
            }
            else if ((long)puVar9 < 0x3b16db62a3c2f4fb) {
              if ((long)puVar9 < 0x36f07785a64d7584) {
                puVar3 = (undefined1 *)0x65536dc2a8308acd;
                if ((puVar9 != (undefined1 *)0x32f4713bcaf93571) &&
                   (puVar3 = puVar9, puVar9 == (undefined1 *)0x34ee749c3dc3cf5c)) {
                  DAT_0021f1b4 = 0;
                  FUN_0018f460(param_1,param_2,local_78,&DAT_0021c060,&local_80);
                  puVar3 = (undefined1 *)0x22f3f9cf91cbb9a6;
                  if (*param_1 != 0) {
                    puVar3 = (undefined1 *)0x29ff0ff794febe2e;
                  }
                }
              }
              else {
                puVar3 = (undefined1 *)0x31b9d74c89a90fe3;
                if ((puVar9 != (undefined1 *)0x36f07785a64d7584) &&
                   (puVar3 = puVar9, puVar9 == (undefined1 *)0x3ace195dd3930386)) {
                  (**(code **)(*param_2 + 0xb8))(param_2,unaff_x28);
                  puVar3 = (undefined1 *)0xed1f071ea6fe1ede;
                }
              }
            }
            else if ((long)puVar9 < 0x483dcbc36ada42c4) {
              puVar3 = (undefined1 *)0xed1f071ea6fe1ede;
              if ((puVar9 != (undefined1 *)0x3b16db62a3c2f4fb) &&
                 (puVar3 = puVar9, puVar9 == (undefined1 *)0x418b7d3c908df894)) {
                puVar3 = puVar2;
              }
            }
            else if (puVar9 == (undefined1 *)0x483dcbc36ada42c4) {
              *param_5 = 0;
              puVar3 = (undefined1 *)0xd6afb11c30d2a9cd;
            }
            else if (puVar9 == (undefined1 *)0x5eda44100212fa2c) {
              (**(code **)(*param_2 + 0xb8))(param_2,lVar6);
              puVar3 = (undefined1 *)0xd108a90e38b691a1;
            }
            else if (puVar9 == (undefined1 *)0x65536dc2a8308acd) {
              local_b0 = local_78;
              local_80 = 0;
              puVar3 = (undefined1 *)0xc7bf249d1db72b2;
              if (local_78 != 0) {
                puVar3 = (undefined1 *)0x27963d1423e000f6;
              }
            }
          }
          if (-0x378643ce451a44ed < (long)puVar9) break;
          if ((long)puVar9 < -0x69f7a720f4f21bbf) {
            if ((long)puVar9 < -0x71c5c29ef27b8351) {
              puVar3 = (undefined1 *)0xc0f51250277e5cfd;
              if ((puVar9 != (undefined1 *)0x8500be9b057d300e) &&
                 (puVar3 = puVar9, puVar9 == (undefined1 *)0x87b1ff2df68e38ae)) {
                _DAT_0021c060 = _DAT_0021c060 ^ 0xf7f7f7f7f7f7f7f7;
                uRam000000000021c068 = uRam000000000021c068 ^ 0xf7f7f7f7f7f7f7f7;
                DAT_0021f1b5 = '\x01';
                puVar3 = (undefined1 *)0x34ee749c3dc3cf5c;
              }
            }
            else if (puVar9 == (undefined1 *)0x8e3a3d610d847caf) {
              *param_1 = 0x21;
              puVar3 = (undefined1 *)0x31b9d74c89a90fe3;
            }
            else if (puVar9 == (undefined1 *)0x940bdddd24f52ce3) {
              lVar8 = FUN_001e53f4(local_88,local_90);
              puVar3 = (undefined1 *)0xfb13253120e52d5;
              if (lVar8 != 0) {
                puVar3 = (undefined1 *)0x3007aa9d32d99be8;
              }
              *param_5 = lVar8;
            }
          }
          else if ((long)puVar9 < -0x3f0aedafd881a303) {
            if (puVar9 == (undefined1 *)0x960858df0b0de441) {
              FUN_001909bc(param_1,param_2,param_3,&local_70);
              puVar3 = (undefined1 *)0xc879bc31bae5bb14;
              if (*param_1 != 0) {
                puVar3 = (undefined1 *)0x36f07785a64d7584;
              }
            }
            else if (puVar9 == (undefined1 *)0xbfa497f00132becf) {
              puVar3 = (undefined1 *)0xd108a90e38b691a1;
            }
          }
          else if (puVar9 == (undefined1 *)0xc0f51250277e5cfd) {
            iVar5 = FUN_00212730(0,1,&DAT_0021f1b4);
            puVar3 = (undefined1 *)0x1db468c64d6a7ed0;
            if (iVar5 != 0) {
              puVar3 = (undefined1 *)0xe7622641fcb090c6;
            }
          }
          else {
            puVar3 = (undefined1 *)0x34ee749c3dc3cf5c;
            if ((puVar9 != (undefined1 *)0xc33cd820d1133e3a) &&
               (puVar3 = puVar9, puVar9 == &DAT_c45038db124ae016)) {
              puVar3 = (undefined1 *)0x31b9d74c89a90fe3;
            }
          }
        }
        if (-0x29504ee3cf2d5634 < (long)puVar9) break;
        if ((long)puVar9 < -0x316a2fad8e5725cc) {
          if (puVar9 == (undefined1 *)0xc879bc31bae5bb14) {
            FUN_001965d4(param_1,param_2,local_70,lVar6,0,&local_78);
            puVar3 = (undefined1 *)0x8500be9b057d300e;
            if (*param_1 != 0) {
              puVar3 = &DAT_c45038db124ae016;
            }
          }
          else if (puVar9 == (undefined1 *)0xcb31a60e6206eed1) {
            puVar3 = (undefined1 *)0xd6afb11c30d2a9cd;
          }
        }
        else if (puVar9 == (undefined1 *)0xce95d05271a8da34) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
          puVar3 = (undefined1 *)0x65536dc2a8308acd;
        }
        else if (puVar9 == (undefined1 *)0xd108a90e38b691a1) {
          puVar3 = (undefined1 *)0xcb31a60e6206eed1;
          if (*param_1 != 0) {
            puVar3 = (undefined1 *)0x483dcbc36ada42c4;
          }
        }
      }
      if ((long)puVar9 < -0x12e0f8e15901e122) break;
      if (puVar9 == (undefined1 *)0xed1f071ea6fe1ede) {
        local_70 = 0;
        puVar3 = puVar1;
      }
      else if (puVar9 == (undefined1 *)0xfda5c16090bb3af4) {
        FUN_001706d8(param_2,local_80,local_88);
        puVar3 = (undefined1 *)0x31b9d74c89a90fe3;
      }
    }
    puVar3 = (undefined1 *)0x31b9d74c89a90fe3;
  } while (((puVar9 == (undefined1 *)0xe48eaf6f29f5caa2) ||
           (puVar3 = (undefined1 *)0xc0f51250277e5cfd, puVar9 == (undefined1 *)0xe7622641fcb090c6))
          || (puVar3 = puVar9, puVar9 != (undefined1 *)0xd6afb11c30d2a9cd));
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

