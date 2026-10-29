// rea decompile_all
// name: FUN_0011bdb4
// address: 0x11bdb4
// body: available
// range: 0x11bdb4-0x11cc57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11cc54 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011bdb4(FILE *param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  FILE *unaff_x23;
  char *unaff_x25;
  long local_b0;
  undefined8 local_a8;
  FILE *local_a0;
  char **local_98;
  long *local_90;
  FILE *local_88;
  char *local_80;
  long local_78;
  
  plVar2 = &local_b0;
  local_b0 = tpidr_el0;
  local_78 = *(long *)(local_b0 + 0x28);
  lVar1 = 0x54c2b837d86711b8;
  local_a8 = param_2;
  local_a0 = param_1;
  local_90 = param_3;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (lVar5 = lVar1, lVar1 = lVar5, -0x144ad6ddee249a63 < lVar5) {
                if (lVar5 < 0x4b73c4e968047988) {
                  if (lVar5 < 0x11389729d7590b94) {
                    if (lVar5 < -0x17196cb747ef8c5) {
                      if (lVar5 == -0x144ad6ddee249a62) {
                        DAT_0021c0b0 = DAT_0021c0b0 ^ 0x7a;
                        DAT_0021c0b1 = DAT_0021c0b1 ^ 0x7a;
                        DAT_0021c0b2 = DAT_0021c0b2 ^ 0x7a;
                        DAT_0021c0b3 = DAT_0021c0b3 ^ 0x7a;
                        DAT_0021f62c = '\x01';
                        lVar1 = 0x11389729d7590b94;
                      }
                      else if (lVar5 == -0x12bc87502b2af86e) {
                        param_1 = (FILE *)fgets(local_80,0x1080,local_88);
                        lVar1 = 0x1b4ac2f1f22e2589;
                        if (param_1 != (FILE *)0x0) {
                          lVar1 = -0x2701f7b957916a96;
                        }
                      }
                      else if (lVar5 == -0x428109008685f48) {
                        _DAT_0021c070 = _DAT_0021c070 ^ 0x9999999999999999;
                        uRam000000000021c078 = uRam000000000021c078 ^ 0x9999999999999999;
                        DAT_0021f628 = '\x01';
                        lVar1 = -0x244c08061ede3ca6;
                      }
                    }
                    else if (lVar5 == -0x17196cb747ef8c5) {
                      param_1 = (FILE *)FUN_00212730(0,1,&DAT_0021f1c8);
                      lVar1 = 0x5ebfca74eead21cf;
                      if ((int)param_1 != 0) {
                        lVar1 = 0xbccd62a0fc32d;
                      }
                    }
                    else {
                      lVar1 = -0x17196cb747ef8c5;
                      if ((lVar5 != 0xbccd62a0fc32d) && (lVar1 = lVar5, lVar5 == 0xf111d00f6a8edda))
                      {
                        param_1 = (FILE *)strdup(unaff_x25);
                        *(FILE **)unaff_x23 = param_1;
                        lVar1 = -0x1f81af14a263eaa3;
                        if (param_1 != (FILE *)0x0) {
                          lVar1 = -0x5f20efb5b92e6f74;
                        }
                      }
                    }
                  }
                  else if (lVar5 < 0x361985fb5d496b76) {
                    if (lVar5 == 0x11389729d7590b94) {
                      DAT_0021f1c8 = 0;
                      FUN_001e0784(unaff_x25);
                      uVar4 = FUN_001b19ac();
                      param_1 = (FILE *)FUN_001e17a8(uVar4,&DAT_0021c0b0);
                      lVar1 = -0x6e4a13fb3d707c87;
                      if ((int)param_1 != 0) {
                        lVar1 = -0x5587caf0ffc9f6c4;
                      }
                    }
                    else {
                      lVar1 = 0x6bbc6b8cc56478f1;
                      if ((lVar5 != 0x1b4ac2f1f22e2589) &&
                         (lVar1 = lVar5, lVar5 == 0x24e5eef263e81b7c)) {
                        lVar1 = -0x12bc87502b2af86e;
                      }
                    }
                  }
                  else {
                    lVar1 = 0x7ffb850a0e6ed38d;
                    if (((lVar5 != 0x361985fb5d496b76) &&
                        (lVar1 = -0x12bc87502b2af86e, lVar5 != 0x3cd27908c3b8e652)) &&
                       (lVar1 = lVar5, lVar5 == 0x4101bf80446bdc20)) {
                      param_1 = (FILE *)fgets(local_80,0x1080,local_88);
                      lVar1 = -0x59bab4f8732095e2;
                      if (param_1 != (FILE *)0x0) {
                        lVar1 = 0x54cc8c62117e2258;
                      }
                    }
                  }
                }
                else if (lVar5 < 0x5ebfca74eead21cf) {
                  if (lVar5 < 0x54cc8c62117e2258) {
                    if (lVar5 == 0x4b73c4e968047988) {
                      lVar5 = *local_90;
                      local_98 = &unaff_x23->_IO_read_ptr;
                      *local_98 = (char *)0x0;
                      lVar1 = -0x429b7b8ddead7976;
                      if (lVar5 != 0) {
                        lVar1 = -0x65a31e6327338728;
                      }
                    }
                    else {
                      lVar1 = -0x56ad058abb7434bf;
                      if ((lVar5 != 0x53e14c28908eeeeb) &&
                         (lVar1 = lVar5, lVar5 == 0x54c2b837d86711b8)) {
                        lVar1 = -0x2eb8ff3123f5eabc;
                      }
                    }
                  }
                  else {
                    lVar1 = -0x50e54cd80f265318;
                    if (((lVar5 != 0x54cc8c62117e2258) &&
                        (lVar1 = -0x2eb8ff3123f5eabc, lVar5 != 0x55dcd19dee737a1a)) &&
                       (lVar1 = lVar5, lVar5 == 0x5ad71f292518d033)) {
                      lVar1 = -0x2d23be9e4092ee55;
                      if (DAT_0021f628 == '\0') {
                        lVar1 = -0x428109008685f48;
                      }
                    }
                  }
                }
                else if (lVar5 < 0x6bbc6b8cc56478f1) {
                  if (lVar5 == 0x5ebfca74eead21cf) {
                    lVar1 = 0x78ac43fddd7c64db;
                    if (DAT_0021f62c == '\0') {
                      lVar1 = -0x144ad6ddee249a62;
                    }
                  }
                  else if (lVar5 == 0x61d9685814f9d681) {
                    lVar1 = -0x5eedd7c897c0ed2a;
                    if (DAT_0021f62b == '\0') {
                      lVar1 = -0x76ca62710947274b;
                    }
                  }
                  else if (lVar5 == 0x62ccc994e2cb7da3) {
                    DAT_0021f1c4 = 0;
                    uVar3 = sscanf(local_80,&DAT_0021c090,unaff_x25);
                    param_1 = (FILE *)(ulong)uVar3;
                    lVar1 = -0x400e37f3caa97ab4;
                    if (uVar3 != 1) {
                      lVar1 = 0x24e5eef263e81b7c;
                    }
                  }
                }
                else if (lVar5 == 0x6bbc6b8cc56478f1) {
                  uVar3 = fclose(local_88);
                  param_1 = (FILE *)(ulong)uVar3;
                  lVar1 = -0x3180ec1dafce7d52;
                }
                else {
                  lVar1 = 0x11389729d7590b94;
                  if ((lVar5 != 0x78ac43fddd7c64db) && (lVar1 = lVar5, lVar5 == 0x7ffb850a0e6ed38d))
                  {
                    local_a0->_flags = 2;
                    lVar1 = 0x6bbc6b8cc56478f1;
                  }
                }
              }
              if (-0x4c94198a9ad36398 < lVar5) break;
              if (lVar5 < -0x5eedd7c897c0ed2a) {
                if (lVar5 < -0x6e4a13fb3d707c87) {
                  lVar1 = -0x359d4e10b3bbbc3c;
                  if (lVar5 != -0x7dbc322ed98e3afb) {
                    if (lVar5 == -0x76ca62710947274b) {
                      DAT_0021c0a8 = DAT_0021c0a8 ^ 0x12;
                      DAT_0021c0a9 = DAT_0021c0a9 ^ 0x12;
                      DAT_0021c0aa = DAT_0021c0aa ^ 0x12;
                      DAT_0021c0ab = DAT_0021c0ab ^ 0x12;
                      DAT_0021c0ac = DAT_0021c0ac ^ 0x12;
                      DAT_0021c0ad = DAT_0021c0ad ^ 0x12;
                      DAT_0021c0ae = DAT_0021c0ae ^ 0x12;
                      _DAT_0021c090 = _DAT_0021c090 ^ 0x1212121212121212;
                      uRam000000000021c098 = uRam000000000021c098 ^ 0x1212121212121212;
                      DAT_0021c0a0 = DAT_0021c0a0 ^ 0x1212121212121212;
                      DAT_0021f62b = '\x01';
                      lVar1 = 0x62ccc994e2cb7da3;
                    }
                    else {
                      lVar1 = lVar5;
                      if (lVar5 == -0x7447e788f4d32ac9) {
                        local_a0->_flags = 8;
                        lVar1 = -0x3180ec1dafce7d52;
                      }
                    }
                  }
                }
                else if (lVar5 == -0x6e4a13fb3d707c87) {
                  param_1 = calloc(1,0x10);
                  lVar1 = 0x361985fb5d496b76;
                  unaff_x23 = param_1;
                  if (param_1 != (FILE *)0x0) {
                    lVar1 = 0x4b73c4e968047988;
                  }
                }
                else if (lVar5 == -0x65a31e6327338728) {
                  *(FILE **)local_90[1] = unaff_x23;
                  local_90[1] = (long)local_98;
                  lVar1 = 0xf111d00f6a8edda;
                }
                else if (lVar5 == -0x5f20efb5b92e6f74) {
                  lVar1 = -0x12bc87502b2af86e;
                }
              }
              else if (lVar5 < -0x5587caf0ffc9f6c4) {
                lVar1 = 0x62ccc994e2cb7da3;
                if (((lVar5 != -0x5eedd7c897c0ed2a) &&
                    (lVar1 = 0x6bbc6b8cc56478f1, lVar5 != -0x59bab4f8732095e2)) &&
                   (lVar1 = lVar5, lVar5 == -0x56ad058abb7434bf)) {
                  param_1 = (FILE *)FUN_00212730(0,1,&DAT_0021f1b8);
                  lVar1 = 0x5ad71f292518d033;
                  if ((int)param_1 != 0) {
                    lVar1 = 0x53e14c28908eeeeb;
                  }
                }
              }
              else {
                lVar1 = -0x12bc87502b2af86e;
                if (lVar5 != -0x5587caf0ffc9f6c4) {
                  if (lVar5 == -0x5412c5352f1dc37a) {
                    DAT_0021c080 = DAT_0021c080 ^ 0x77;
                    DAT_0021c081 = DAT_0021c081 ^ 0x77;
                    DAT_0021f62a = '\x01';
                    lVar1 = -0x2e5d71d46d443370;
                  }
                  else {
                    lVar1 = lVar5;
                    if (lVar5 == -0x50e54cd80f265318) {
                      lVar1 = -0x359d4e10b3bbbc3c;
                    }
                  }
                }
              }
            }
            if (lVar5 < -0x2e5d71d46d443370) break;
            if (lVar5 < -0x244c08061ede3ca6) {
              if (lVar5 == -0x2e5d71d46d443370) {
                DAT_0021f1c0 = 0;
                lVar1 = -0x56ad058abb7434bf;
              }
              else {
                lVar1 = -0x244c08061ede3ca6;
                if ((lVar5 != -0x2d23be9e4092ee55) && (lVar1 = lVar5, lVar5 == -0x2701f7b957916a96))
                {
                  lVar1 = -0x50e54cd80f265318;
                }
              }
            }
            else if (lVar5 == -0x244c08061ede3ca6) {
              DAT_0021f1b8 = 0;
              local_80 = (char *)((long)plVar2 + -0x1080);
              plVar2 = (long *)((long)plVar2 + -0x2100);
              param_1 = (FILE *)FUN_001f3978(&DAT_0021c070,&DAT_0021c080);
              lVar1 = -0x7447e788f4d32ac9;
              unaff_x25 = (char *)plVar2;
              local_88 = param_1;
              if (param_1 != (FILE *)0x0) {
                lVar1 = 0x4101bf80446bdc20;
              }
            }
            else if (lVar5 == -0x21c44217ce61bec8) {
              lVar1 = -0x4c94198a9ad36397;
              if (DAT_0021f62a == '\0') {
                lVar1 = -0x5412c5352f1dc37a;
              }
            }
            else if (lVar5 == -0x1f81af14a263eaa3) {
              lVar1 = 0x7ffb850a0e6ed38d;
            }
          }
          if (-0x361936ecac8b8987 < lVar5) break;
          lVar1 = -0x2e5d71d46d443370;
          if (lVar5 != -0x4c94198a9ad36397) {
            if (lVar5 == -0x429b7b8ddead7976) {
              *local_90 = (long)unaff_x23;
              local_90[1] = (long)local_98;
              lVar1 = 0xf111d00f6a8edda;
            }
            else {
              lVar1 = lVar5;
              if (lVar5 == -0x400e37f3caa97ab4) {
                param_1 = (FILE *)FUN_001ef4b4(unaff_x25,local_a8);
                lVar1 = 0x3cd27908c3b8e652;
                if (param_1 != (FILE *)0x0) {
                  lVar1 = -0x361936ecac8b8986;
                }
              }
            }
          }
        }
        if (-0x3180ec1dafce7d53 < lVar5) break;
        lVar1 = -0x17196cb747ef8c5;
        if ((lVar5 != -0x361936ecac8b8986) && (lVar1 = lVar5, lVar5 == -0x359d4e10b3bbbc3c)) {
          param_1 = (FILE *)FUN_00212730(0,1,&DAT_0021f1c4);
          lVar1 = 0x61d9685814f9d681;
          if ((int)param_1 != 0) {
            lVar1 = -0x7dbc322ed98e3afb;
          }
        }
      }
      if (lVar5 != -0x2eb8ff3123f5eabc) break;
      param_1 = (FILE *)FUN_00212730(0,1,&DAT_0021f1c0);
      lVar1 = -0x21c44217ce61bec8;
      if ((int)param_1 != 0) {
        lVar1 = 0x55dcd19dee737a1a;
      }
    }
  } while (lVar5 != -0x3180ec1dafce7d52);
  if (*(long *)(local_b0 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}

