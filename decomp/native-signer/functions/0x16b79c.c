// rea decompile_all
// name: FUN_0016b79c
// address: 0x16b79c
// body: available
// range: 0x16b79c-0x16c647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16c644 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0016b79c(int *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long *unaff_x25;
  long local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  long *local_70;
  long local_68;
  
  local_78 = param_3;
  local_a0 = tpidr_el0;
  local_68 = *(long *)(local_a0 + 0x28);
  plVar2 = &local_a0;
  puVar5 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (puVar4 = puVar5, plVar1 = local_70, puVar5 = puVar4,
                    0xfb13253120e52d4 < (long)puVar4) {
                if ((long)puVar4 < 0x3b36a7a007b21166) {
                  if ((long)puVar4 < 0x2ce2edddaf334d81) {
                    if ((long)puVar4 < 0x1cba5f82f77e481f) {
                      puVar5 = (undefined1 *)0x52cde6c2dea1be4;
                      if ((puVar4 != (undefined1 *)0xfb13253120e52d5) &&
                         (puVar5 = puVar4, puVar4 == (undefined1 *)0x125dd2cc844aecb4)) {
                        puVar5 = &DAT_f615808441b1dafc;
                      }
                    }
                    else {
                      puVar5 = (undefined1 *)0x3b36a7a007b21166;
                      if (((puVar4 != (undefined1 *)0x1cba5f82f77e481f) &&
                          (puVar5 = (undefined1 *)0xf63b36e7a9d9f670,
                          puVar4 != (undefined1 *)0x22f3f9cf91cbb9a6)) &&
                         (puVar5 = puVar4, puVar4 == (undefined1 *)0x29ff0ff794febe2e)) {
                        puVar5 = (undefined1 *)0x22f3f9cf91cbb9a6;
                        if (DAT_0021f7db == '\0') {
                          puVar5 = (undefined1 *)0xaa46adf0a78af8c7;
                        }
                      }
                    }
                  }
                  else if ((long)puVar4 < 0x34ee749c3dc3cf5c) {
                    if (puVar4 == (undefined1 *)0x2ce2edddaf334d81) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f7cc);
                      puVar5 = (undefined1 *)0x29ff0ff794febe2e;
                      if (iVar3 != 0) {
                        puVar5 = (undefined1 *)0xd222672a639a1d2e;
                      }
                    }
                    else if (puVar4 == (undefined1 *)0x3007aa9d32d99be8) {
                      puVar5 = (undefined1 *)0xfb13253120e52d5;
                      if (DAT_0021f7dd == '\0') {
                        puVar5 = (undefined1 *)0xc89737e2f8768a05;
                      }
                    }
                    else if (puVar4 == (undefined1 *)0x312910f1547c7c77) {
                      puVar5 = (undefined1 *)0x3b36a7a007b21166;
                    }
                  }
                  else {
                    puVar5 = (undefined1 *)0x6b5051bf1aed633d;
                    if (puVar4 != (undefined1 *)0x34ee749c3dc3cf5c) {
                      if (puVar4 == (undefined1 *)0x353e7cd16df664a2) {
                        DAT_0021f7d0 = 0;
                        puVar5 = (undefined1 *)0x2ce2edddaf334d81;
                      }
                      else {
                        puVar5 = puVar4;
                        if (puVar4 == (undefined1 *)0x36f07785a64d7584) {
                          puVar5 = &DAT_c45038db124ae016;
                        }
                      }
                    }
                  }
                }
                else if ((long)puVar4 < 0x696b554ab6b2c8c5) {
                  if ((long)puVar4 < 0x5039187a35dab08d) {
                    if (puVar4 == (undefined1 *)0x3b36a7a007b21166) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f7d4);
                      puVar5 = (undefined1 *)0x3007aa9d32d99be8;
                      if (iVar3 != 0) {
                        puVar5 = (undefined1 *)0x312910f1547c7c77;
                      }
                    }
                    else {
                      puVar5 = (undefined1 *)0x960858df0b0de441;
                      if ((puVar4 != (undefined1 *)0x418b7d3c908df894) &&
                         (puVar5 = puVar4, puVar4 == (undefined1 *)0x49b9b00eeff4c15a)) {
                        puVar5 = (undefined1 *)0xba8fbc7d3623138d;
                      }
                    }
                  }
                  else {
                    puVar5 = (undefined1 *)0xba8fbc7d3623138d;
                    if (((puVar4 != (undefined1 *)0x5039187a35dab08d) &&
                        (puVar4 != (undefined1 *)0x58b842c6f86d5804)) &&
                       (puVar5 = puVar4, puVar4 == (undefined1 *)0x5ece82223eee3411)) {
                      FUN_0017cf34(param_1,param_2,*unaff_x25,1);
                      puVar5 = (undefined1 *)0x7e713fa43f38c582;
                      if (*param_1 != 0) {
                        puVar5 = (undefined1 *)0x58b842c6f86d5804;
                      }
                    }
                  }
                }
                else if ((long)puVar4 < 0x77f0428eaa711148) {
                  if (puVar4 == (undefined1 *)0x696b554ab6b2c8c5) {
                    _DAT_0021d7f0 = _DAT_0021d7f0 ^ 0x6a6a6a6a6a6a6a6a;
                    uRam000000000021d7f8 = uRam000000000021d7f8 ^ 0x6a6a6a6a6a6a6a6a;
                    DAT_0021f7dc = '\x01';
                    puVar5 = (undefined1 *)0x353e7cd16df664a2;
                  }
                  else if (puVar4 == (undefined1 *)0x6b5051bf1aed633d) {
                    DAT_0021f7c8 = 0;
                    unaff_x25 = (long *)((long)plVar2 + -0x10);
                    local_70 = (long *)((long)plVar2 + -0x20);
                    local_90 = (undefined1 *)((long)plVar2 + -0x30);
                    puVar5 = (undefined1 *)((long)plVar2 + -0x40);
                    *(undefined8 *)((long)plVar2 + -0x10) = 0;
                    *(undefined8 *)((long)plVar2 + -0x20) = 0;
                    *(char **)((long)plVar2 + -0x30) = "SHA-256";
                    *(uint *)((long)plVar2 + -0x40) = _DAT_0021d7d8;
                    *(byte *)((long)plVar2 + -0x3c) = DAT_0021d7dc;
                    local_98 = puVar5;
                    FUN_0017e4ac(param_1,param_2,&DAT_0021d7e0,&DAT_0021d7f0,local_78);
                    plVar2 = (long *)puVar5;
                    puVar5 = (undefined1 *)0x1cba5f82f77e481f;
                    if (*param_1 != 0) {
                      puVar5 = (undefined1 *)0xbf711ec4fafe862e;
                    }
                  }
                  else if (puVar4 == (undefined1 *)0x75df443d79079721) {
                    puVar5 = (undefined1 *)0xba8fbc7d3623138d;
                  }
                }
                else {
                  puVar5 = (undefined1 *)0xba8fbc7d3623138d;
                  if (puVar4 != (undefined1 *)0x77f0428eaa711148) {
                    if (puVar4 == (undefined1 *)0x7d8bf94548220fb8) {
                      FUN_0017f8f0(param_1,param_2,*local_78,*local_70);
                      puVar5 = (undefined1 *)0xba8fbc7d3623138d;
                    }
                    else {
                      puVar5 = puVar4;
                      if (puVar4 == (undefined1 *)0x7e713fa43f38c582) {
                        FUN_0017b6a4(param_1,param_2,*unaff_x25,1,local_90);
                        puVar5 = (undefined1 *)0xa865ab623572e331;
                        if (*param_1 != 0) {
                          puVar5 = (undefined1 *)0x75df443d79079721;
                        }
                      }
                    }
                  }
                }
              }
              if (-0x378643ce451a44ed < (long)puVar4) break;
              if ((long)puVar4 < -0x55b9520f58750739) {
                if ((long)puVar4 < -0x6bf42222db0ad31d) {
                  puVar5 = (undefined1 *)0xe7622641fcb090c6;
                  if (puVar4 != (undefined1 *)0x8500be9b057d300e) {
                    if (puVar4 == (undefined1 *)0x87b1ff2df68e38ae) {
                      puVar5 = (undefined1 *)0x34ee749c3dc3cf5c;
                      if (DAT_0021f7da == '\0') {
                        puVar5 = (undefined1 *)0xf6c71d76f8b48eb9;
                      }
                    }
                    else {
                      puVar5 = puVar4;
                      if (puVar4 == (undefined1 *)0x8e3a3d610d847caf) {
                        (**(code **)(*param_2 + 0xb8))(param_2,local_80);
                        puVar5 = (undefined1 *)0x960858df0b0de441;
                      }
                    }
                  }
                }
                else {
                  puVar5 = (undefined1 *)0x353e7cd16df664a2;
                  if (puVar4 != (undefined1 *)0x940bdddd24f52ce3) {
                    if (puVar4 == (undefined1 *)0x960858df0b0de441) {
                      *unaff_x25 = 0;
                      local_88 = *plVar1;
                      puVar5 = (undefined1 *)0xc879bc31bae5bb14;
                      if (*plVar1 == 0 || param_2 == (long *)0x0) {
                        puVar5 = (undefined1 *)0x36f07785a64d7584;
                      }
                    }
                    else {
                      puVar5 = puVar4;
                      if (puVar4 == (undefined1 *)0xa865ab623572e331) {
                        FUN_0017a9a4(param_1,param_2,*unaff_x25,5,local_98);
                        puVar5 = (undefined1 *)0xedbefc38c6cf9bfe;
                        if (*param_1 != 0) {
                          puVar5 = (undefined1 *)0x5039187a35dab08d;
                        }
                      }
                    }
                  }
                }
              }
              else if ((long)puVar4 < -0x3f0aedafd881a303) {
                if (puVar4 == (undefined1 *)0xaa46adf0a78af8c7) {
                  DAT_0021d7e0 = DAT_0021d7e0 ^ 0x27;
                  DAT_0021d7e1 = DAT_0021d7e1 ^ 0x27;
                  DAT_0021d7e2 = DAT_0021d7e2 ^ 0x27;
                  DAT_0021d7e3 = DAT_0021d7e3 ^ 0x27;
                  DAT_0021f7db = '\x01';
                  puVar5 = (undefined1 *)0xf63b36e7a9d9f670;
                }
                else if (puVar4 == (undefined1 *)0xba8fbc7d3623138d) {
                  local_80 = *unaff_x25;
                  puVar5 = (undefined1 *)0x8e3a3d610d847caf;
                  if (*unaff_x25 == 0 || param_2 == (long *)0x0) {
                    puVar5 = (undefined1 *)0x418b7d3c908df894;
                  }
                }
                else if (puVar4 == (undefined1 *)0xbf711ec4fafe862e) {
                  puVar5 = (undefined1 *)0xba8fbc7d3623138d;
                }
              }
              else if (puVar4 == (undefined1 *)0xc0f51250277e5cfd) {
                *local_78 = 0;
                puVar5 = (undefined1 *)0xe7622641fcb090c6;
              }
              else {
                puVar5 = (undefined1 *)0xf54c5df74fcabc41;
                if ((puVar4 != (undefined1 *)0xc23f84056fd30bd6) &&
                   (puVar5 = puVar4, puVar4 == &DAT_c45038db124ae016)) {
                  puVar5 = (undefined1 *)0x8500be9b057d300e;
                  if (*param_1 != 0) {
                    puVar5 = (undefined1 *)0xc0f51250277e5cfd;
                  }
                }
              }
            }
            if ((long)puVar4 < -0xab3a208b03543bf) break;
            if ((long)puVar4 < -0x938e289074b7147) {
              if (puVar4 == (undefined1 *)0xf54c5df74fcabc41) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f7c8);
                puVar5 = (undefined1 *)0x87b1ff2df68e38ae;
                if (iVar3 != 0) {
                  puVar5 = (undefined1 *)0xc23f84056fd30bd6;
                }
              }
              else if (puVar4 == &DAT_f615808441b1dafc) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f7d0);
                puVar5 = (undefined1 *)0xe48eaf6f29f5caa2;
                if (iVar3 != 0) {
                  puVar5 = (undefined1 *)0x125dd2cc844aecb4;
                }
              }
              else if (puVar4 == (undefined1 *)0xf63b36e7a9d9f670) {
                DAT_0021f7cc = 0;
                puVar5 = (undefined1 *)0xf54c5df74fcabc41;
              }
            }
            else if (puVar4 == (undefined1 *)0xf6c71d76f8b48eb9) {
              DAT_0021d7dc = DAT_0021d7dc ^ 0x90;
              _DAT_0021d7d8 = _DAT_0021d7d8 ^ 0x90909090;
              DAT_0021f7da = '\x01';
              puVar5 = (undefined1 *)0x6b5051bf1aed633d;
            }
            else if (puVar4 == (undefined1 *)0x52cde6c2dea1be4) {
              DAT_0021f7d4 = 0;
              FUN_00178dc8(param_1,param_2,&DAT_0021d800,0xc,unaff_x25);
              puVar5 = (undefined1 *)0x5ece82223eee3411;
              if (*param_1 != 0) {
                puVar5 = (undefined1 *)0x49b9b00eeff4c15a;
              }
            }
            else if (puVar4 == (undefined1 *)0x887e73b2c28c6a1) {
              puVar5 = &DAT_f615808441b1dafc;
            }
          }
          if (-0x1b715090d60a355f < (long)puVar4) break;
          if (puVar4 == (undefined1 *)0xc879bc31bae5bb14) {
            (**(code **)(*param_2 + 0xb8))(param_2,local_88);
            puVar5 = &DAT_c45038db124ae016;
          }
          else if (puVar4 == (undefined1 *)0xc89737e2f8768a05) {
            _DAT_0021d800 = _DAT_0021d800 ^ 0xb6b6b6b6b6b6b6b6;
            uRam000000000021d808 = uRam000000000021d808 ^ 0xb6b6b6b6b6b6b6b6;
            _DAT_0021d810 = _DAT_0021d810 ^ 0xb6b6b6b6b6b6b6b6;
            uRam000000000021d818 = uRam000000000021d818 ^ 0xb6b6b6b6b6b6b6b6;
            DAT_0021d840 = DAT_0021d840 ^ 0xb6;
            _DAT_0021d820 = _DAT_0021d820 ^ 0xb6b6b6b6b6b6b6b6;
            uRam000000000021d828 = uRam000000000021d828 ^ 0xb6b6b6b6b6b6b6b6;
            _DAT_0021d830 = _DAT_0021d830 ^ 0xb6b6b6b6b6b6b6b6;
            uRam000000000021d838 = uRam000000000021d838 ^ 0xb6b6b6b6b6b6b6b6;
            DAT_0021f7dd = '\x01';
            puVar5 = (undefined1 *)0x52cde6c2dea1be4;
          }
          else if (puVar4 == (undefined1 *)0xd222672a639a1d2e) {
            puVar5 = (undefined1 *)0x2ce2edddaf334d81;
          }
        }
        if (puVar4 != (undefined1 *)0xe48eaf6f29f5caa2) break;
        puVar5 = (undefined1 *)0x940bdddd24f52ce3;
        if (DAT_0021f7dc == '\0') {
          puVar5 = (undefined1 *)0x696b554ab6b2c8c5;
        }
      }
      if (puVar4 != (undefined1 *)0xedbefc38c6cf9bfe) break;
      FUN_00179e44(param_1,param_2,*unaff_x25,local_70);
      puVar5 = (undefined1 *)0x7d8bf94548220fb8;
      if (*param_1 != 0) {
        puVar5 = (undefined1 *)0x77f0428eaa711148;
      }
    }
  } while (puVar4 != (undefined1 *)0xe7622641fcb090c6);
  if (*(long *)(local_a0 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

