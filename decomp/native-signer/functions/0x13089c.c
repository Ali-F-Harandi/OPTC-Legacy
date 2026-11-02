// rea decompile_all
// name: FUN_0013089c
// address: 0x13089c
// body: available
// range: 0x13089c-0x1318f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1318f0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013089c(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  short local_5b0 [8];
  undefined *local_5a0;
  undefined8 *puStack_598;
  undefined1 auStack_590 [152];
  undefined4 local_4f8;
  undefined8 local_4a8;
  undefined *puStack_4a0;
  undefined8 *local_498;
  undefined4 local_3f8;
  undefined8 local_3a8;
  undefined *puStack_3a0;
  undefined1 *local_398;
  undefined4 local_2f8;
  undefined8 local_2a8;
  undefined *local_2a0;
  undefined1 *local_298;
  undefined4 local_1f8;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 *puStack_198;
  undefined4 local_f8;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  
  local_a0 = tpidr_el0;
  local_98 = *(long *)(local_a0 + 0x28);
  lVar1 = -0x598331bf06e0ad66;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (lVar3 = lVar1, lVar1 = lVar3, lVar3 < 0x22d8bcef66424733) {
                if (lVar3 < -0x2fdf6e14af7d1f57) {
                  if (lVar3 < -0x574e33d6adcd557b) {
                    if (lVar3 < -0x6f1859aed5d5db79) {
                      if (lVar3 == -0x7c92ae6775274418) {
                        lVar1 = 0x2053934bfffd78f8;
                        if (DAT_0021f689 == '\0') {
                          lVar1 = 0x4e9708d9b1211181;
                        }
                      }
                      else if (lVar3 == -0x7ad18e343577d80f) {
                        DAT_0021c890 = DAT_0021c890 ^ 0x4e;
                        DAT_0021c891 = DAT_0021c891 ^ 0x4e;
                        DAT_0021c892 = DAT_0021c892 ^ 0x4e;
                        DAT_0021c893 = DAT_0021c893 ^ 0x4e;
                        DAT_0021c894 = DAT_0021c894 ^ 0x4e;
                        DAT_0021c895 = DAT_0021c895 ^ 0x4e;
                        DAT_0021c888 = DAT_0021c888 ^ 0x4e4e4e4e4e4e4e4e;
                        DAT_0021f68b = '\x01';
                        lVar1 = -0x46c40784048341fd;
                      }
                      else if (lVar3 == -0x7748a8a00cd5eea9) {
                        lVar1 = 0x35bc48ce23f250b0;
                        if (DAT_0021f68b == '\0') {
                          lVar1 = -0x7ad18e343577d80f;
                        }
                      }
                    }
                    else if (lVar3 == -0x6f1859aed5d5db79) {
                      DAT_0021c848 = DAT_0021c848 ^ 0x49;
                      DAT_0021c849 = DAT_0021c849 ^ 0x49;
                      DAT_0021c84a = DAT_0021c84a ^ 0x49;
                      DAT_0021c84c = DAT_0021c84c ^ 0x49;
                      DAT_0021c84d = DAT_0021c84d ^ 0x49;
                      DAT_0021c84e = DAT_0021c84e ^ 0x49;
                      DAT_0021c84b = DAT_0021c84b ^ 0x49;
                      DAT_0021f688 = '\x01';
                      lVar1 = -0x44e70c81378142a3;
                    }
                    else if (lVar3 == -0x6763db3e2ea176d8) {
                      lVar1 = 0x4316227b7067ef1f;
                      if (DAT_0021f687 == '\0') {
                        lVar1 = 0x48c00295fb226477;
                      }
                    }
                    else if (lVar3 == -0x598331bf06e0ad66) {
                      lVar1 = 0x6167bbbd335f77c5;
                    }
                  }
                  else if (lVar3 < -0x44e70c81378142a3) {
                    lVar1 = 0x55290297b11f33a9;
                    if (lVar3 != -0x574e33d6adcd557b) {
                      if (lVar3 == -0x502da4f328fa2600) {
                        DAT_0021f334 = 0;
                        lVar1 = -0xf8453a542c0d832;
                      }
                      else {
                        lVar1 = lVar3;
                        if (lVar3 == -0x46c40784048341fd) {
                          DAT_0021f348 = 0;
                          lVar1 = -0x12304b603010a5f9;
                        }
                      }
                    }
                  }
                  else if (lVar3 == -0x44e70c81378142a3) {
                    DAT_0021f33c = 0;
                    lVar1 = 0x5e53549747c29df6;
                  }
                  else {
                    lVar1 = -0x44e70c81378142a3;
                    if ((lVar3 != -0x3d44d286f8370b4f) &&
                       (lVar1 = lVar3, lVar3 == -0x35380c7bf1e1ed41)) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f33c);
                      lVar1 = 0x762884b5f74eb27d;
                      if (iVar2 != 0) {
                        lVar1 = 0x2af3230df703dacc;
                      }
                    }
                  }
                }
                else if (lVar3 < -0x8aacdcc030e8d47) {
                  if (lVar3 < -0x19ec43b8647740b5) {
                    if (lVar3 == -0x2fdf6e14af7d1f57) {
                      lVar1 = 0x57a4f0b367ebdc4f;
                      if (DAT_0021f669 == '\0') {
                        lVar1 = 0x14afd6ec7e418da5;
                      }
                    }
                    else if (lVar3 == -0x2a3317f0a8fe9f59) {
                      lVar1 = 0x534d7d043b582d7e;
                      if (DAT_0021f68a == '\0') {
                        lVar1 = -0x5705b1dfd4b0e91;
                      }
                    }
                    else if (lVar3 == -0x1ffba508328a2b79) {
                      DAT_0021c838 = DAT_0021c838 ^ 0x90;
                      DAT_0021c839 = DAT_0021c839 ^ 0x90;
                      DAT_0021c83a = DAT_0021c83a ^ 0x90;
                      DAT_0021c83b = DAT_0021c83b ^ 0x90;
                      DAT_0021c83c = DAT_0021c83c ^ 0x90;
                      DAT_0021c83d = DAT_0021c83d ^ 0x90;
                      DAT_0021c83e = DAT_0021c83e ^ 0x90;
                      _DAT_0021c820 = _DAT_0021c820 ^ 0x9090909090909090;
                      uRam000000000021c828 = uRam000000000021c828 ^ 0x9090909090909090;
                      DAT_0021c830 = DAT_0021c830 ^ 0x9090909090909090;
                      DAT_0021f686 = '\x01';
                      lVar1 = -0x502da4f328fa2600;
                    }
                  }
                  else {
                    lVar1 = -0x502da4f328fa2600;
                    if (lVar3 != -0x19ec43b8647740b5) {
                      if (lVar3 == -0x12304b603010a5f9) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f344);
                        lVar1 = -0x2a3317f0a8fe9f59;
                        if (iVar2 != 0) {
                          lVar1 = 0x31006c95f99e94c8;
                        }
                      }
                      else {
                        lVar1 = lVar3;
                        if (lVar3 == -0xf8453a542c0d832) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f2c0);
                          lVar1 = -0x2fdf6e14af7d1f57;
                          if (iVar2 != 0) {
                            lVar1 = 0x2b10750ad46b654a;
                          }
                        }
                      }
                    }
                  }
                }
                else if (lVar3 < -0x3f7e7518b1205) {
                  if (lVar3 == -0x8aacdcc030e8d47) {
                    DAT_0021f344 = 0;
                    lVar1 = -0x3f7e7518b1205;
                  }
                  else if (lVar3 == -0x5705b1dfd4b0e91) {
                    DAT_0021c880 = ~DAT_0021c880;
                    DAT_0021c881 = ~DAT_0021c881;
                    DAT_0021c882 = ~DAT_0021c882;
                    DAT_0021c883 = ~DAT_0021c883;
                    _DAT_0021c870 =
                         CONCAT17(~(byte)((ulong)_DAT_0021c870 >> 0x38),
                                  CONCAT16(~(byte)((ulong)_DAT_0021c870 >> 0x30),
                                           CONCAT15(~(byte)((ulong)_DAT_0021c870 >> 0x28),
                                                    CONCAT14(~(byte)((ulong)_DAT_0021c870 >> 0x20),
                                                             CONCAT13(~(byte)((ulong)_DAT_0021c870
                                                                             >> 0x18),
                                                                      CONCAT12(~(byte)((ulong)
                                                  _DAT_0021c870 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)_DAT_0021c870 >> 8),
                                                           ~(byte)_DAT_0021c870)))))));
                    uRam000000000021c878 =
                         CONCAT17(~(byte)((ulong)uRam000000000021c878 >> 0x38),
                                  CONCAT16(~(byte)((ulong)uRam000000000021c878 >> 0x30),
                                           CONCAT15(~(byte)((ulong)uRam000000000021c878 >> 0x28),
                                                    CONCAT14(~(byte)((ulong)uRam000000000021c878 >>
                                                                    0x20),
                                                             CONCAT13(~(byte)((ulong)
                                                  uRam000000000021c878 >> 0x18),
                                                  CONCAT12(~(byte)((ulong)uRam000000000021c878 >>
                                                                  0x10),
                                                           CONCAT11(~(byte)((ulong)
                                                  uRam000000000021c878 >> 8),
                                                  ~(byte)uRam000000000021c878)))))));
                    DAT_0021f68a = '\x01';
                    lVar1 = -0x8aacdcc030e8d47;
                  }
                  else if (lVar3 == -0x112579f8e96ea56) {
                    lVar1 = -0x19ec43b8647740b5;
                    if (DAT_0021f686 == '\0') {
                      lVar1 = -0x1ffba508328a2b79;
                    }
                  }
                }
                else if (lVar3 == -0x3f7e7518b1205) {
                  iVar2 = FUN_00212730(0,1,&DAT_0021f340);
                  lVar1 = -0x7c92ae6775274418;
                  if (iVar2 != 0) {
                    lVar1 = 0x3c0c64a76fc823b0;
                  }
                }
                else if (lVar3 == 0x14afd6ec7e418da5) {
                  DAT_0021c630 = DAT_0021c630 ^ 0x87;
                  _DAT_0021c620 = _DAT_0021c620 ^ 0x8787878787878787;
                  uRam000000000021c628 = uRam000000000021c628 ^ 0x8787878787878787;
                  DAT_0021f669 = '\x01';
                  lVar1 = 0x26ff0c5da822245d;
                }
                else if (lVar3 == 0x2053934bfffd78f8) {
                  lVar1 = 0x2be22635bfed5631;
                }
              }
              if (lVar3 < 0x48c00295fb226477) break;
              if (lVar3 < 0x57a4f0b367ebdc4f) {
                if (lVar3 < 0x534d7d043b582d7e) {
                  if (lVar3 == 0x48c00295fb226477) {
                    DAT_0021c840 = DAT_0021c840 ^ 0xf0f0f0f0f0f0f0f0;
                    DAT_0021f687 = '\x01';
                    lVar1 = 0x5711a8be885f4d21;
                  }
                  else if (lVar3 == 0x4e9708d9b1211181) {
                    _DAT_0021c850 = _DAT_0021c850 ^ 0x9b9b9b9b9b9b9b9b;
                    uRam000000000021c858 = uRam000000000021c858 ^ 0x9b9b9b9b9b9b9b9b;
                    DAT_0021c860 = DAT_0021c860 ^ 0x9b9b9b9b9b9b9b9b;
                    DAT_0021f689 = '\x01';
                    lVar1 = 0x2be22635bfed5631;
                  }
                  else if (lVar3 == 0x52324571d47816f1) {
                    lVar1 = 0x4822d03e68b76669;
                    if (DAT_0021f667 == '\0') {
                      lVar1 = 0x6cd4c14d880fd3d8;
                    }
                  }
                }
                else {
                  lVar1 = -0x8aacdcc030e8d47;
                  if (lVar3 != 0x534d7d043b582d7e) {
                    if (lVar3 == 0x55290297b11f33a9) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f2b8);
                      lVar1 = 0x52324571d47816f1;
                      if (iVar2 != 0) {
                        lVar1 = -0x574e33d6adcd557b;
                      }
                    }
                    else {
                      lVar1 = lVar3;
                      if (lVar3 == 0x5711a8be885f4d21) {
                        DAT_0021f338 = 0;
                        lVar1 = 0x3fdc5df7fe0401e3;
                      }
                    }
                  }
                }
              }
              else if (lVar3 < 0x6cd4c14d880fd3d8) {
                lVar1 = 0x26ff0c5da822245d;
                if (lVar3 != 0x57a4f0b367ebdc4f) {
                  if (lVar3 == 0x5e53549747c29df6) {
                    iVar2 = FUN_00212730(0,1,&DAT_0021f338);
                    lVar1 = -0x6763db3e2ea176d8;
                    if (iVar2 != 0) {
                      lVar1 = 0x6e3b3f84a866f0c0;
                    }
                  }
                  else {
                    lVar1 = lVar3;
                    if (lVar3 == 0x6167bbbd335f77c5) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f348);
                      lVar1 = -0x7748a8a00cd5eea9;
                      if (iVar2 != 0) {
                        lVar1 = 0x2dbf6a57261a6094;
                      }
                    }
                  }
                }
              }
              else if (lVar3 == 0x6cd4c14d880fd3d8) {
                _DAT_0021c600 = _DAT_0021c600 ^ 0x1c1c1c1c1c1c1c1c;
                uRam000000000021c608 = uRam000000000021c608 ^ 0x1c1c1c1c1c1c1c1c;
                DAT_0021c610 = DAT_0021c610 ^ 0x1c1c1c1c1c1c1c1c;
                DAT_0021f667 = '\x01';
                lVar1 = 0x22d8bcef66424733;
              }
              else {
                lVar1 = 0x5e53549747c29df6;
                if ((lVar3 != 0x6e3b3f84a866f0c0) && (lVar1 = lVar3, lVar3 == 0x762884b5f74eb27d)) {
                  lVar1 = -0x3d44d286f8370b4f;
                  if (DAT_0021f688 == '\0') {
                    lVar1 = -0x6f1859aed5d5db79;
                  }
                }
              }
            }
            if (lVar3 < 0x35bc48ce23f250b0) break;
            if (lVar3 < 0x4316227b7067ef1f) {
              lVar1 = -0x46c40784048341fd;
              if (((lVar3 != 0x35bc48ce23f250b0) &&
                  (lVar1 = -0x3f7e7518b1205, lVar3 != 0x3c0c64a76fc823b0)) &&
                 (lVar1 = lVar3, lVar3 == 0x3fdc5df7fe0401e3)) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f334);
                lVar1 = -0x112579f8e96ea56;
                if (iVar2 != 0) {
                  lVar1 = 0x44ed524dbdd15363;
                }
              }
            }
            else {
              lVar1 = 0x5711a8be885f4d21;
              if (((lVar3 != 0x4316227b7067ef1f) &&
                  (lVar1 = 0x3fdc5df7fe0401e3, lVar3 != 0x44ed524dbdd15363)) &&
                 (lVar1 = lVar3, lVar3 == 0x4822d03e68b76669)) {
                lVar1 = 0x22d8bcef66424733;
              }
            }
          }
          if (lVar3 < 0x2be22635bfed5631) break;
          if (lVar3 == 0x2be22635bfed5631) {
            DAT_0021f340 = 0;
            lVar1 = -0x35380c7bf1e1ed41;
          }
          else {
            lVar1 = 0x6167bbbd335f77c5;
            if ((lVar3 != 0x2dbf6a57261a6094) && (lVar1 = lVar3, lVar3 == 0x31006c95f99e94c8)) {
              lVar1 = -0x12304b603010a5f9;
            }
          }
        }
        if (lVar3 < 0x2af3230df703dacc) break;
        lVar1 = -0x35380c7bf1e1ed41;
        if ((lVar3 != 0x2af3230df703dacc) && (lVar1 = lVar3, lVar3 == 0x2b10750ad46b654a)) {
          lVar1 = -0xf8453a542c0d832;
        }
      }
      if (lVar3 != 0x26ff0c5da822245d) break;
      DAT_0021f2c0 = 0;
      lVar1 = 0x55290297b11f33a9;
    }
  } while (lVar3 != 0x22d8bcef66424733);
  DAT_0021f2b8 = 0;
  memset(auStack_590,0,0x4e8);
  local_498 = &DAT_0021c840;
  local_5a0 = &DAT_0021c600;
  puStack_598 = &DAT_0021c840;
  local_4f8 = 3;
  local_4a8 = 1;
  puStack_4a0 = &DAT_0021c820;
  local_3a8 = 1;
  puStack_3a0 = &DAT_0021c620;
  local_3f8 = 3;
  local_398 = &DAT_0021c848;
  local_2f8 = 3;
  local_2a0 = &DAT_0021c850;
  local_2a8 = 1;
  local_298 = &DAT_0021c848;
  local_1f8 = 3;
  local_1a8 = 1;
  local_1a0 = &DAT_0021c870;
  puStack_198 = &DAT_0021c888;
  local_f8 = 3;
  local_a8 = 1;
  local_5b0[0] = 0;
  FUN_00125518(&local_5a0,5,local_5b0);
  if (*(long *)(local_a0 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_5b0[0] != 0);
  }
  return;
}

