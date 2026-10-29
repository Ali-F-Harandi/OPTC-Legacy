// rea decompile_all
// name: FUN_0011e7e0
// address: 0x11e7e0
// body: available
// range: 0x11e7e0-0x11f367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011e7e0(short *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0x14437797ebdb3d1c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while (lVar4 = lVar1, lVar1 = lVar4, lVar4 < 0x7c7b2e9101238be) {
                if (lVar4 < -0x51c3e0c739d0a19a) {
                  if (lVar4 < -0x68f444208277a4db) {
                    if (lVar4 < -0x72e7d823e5b593c3) {
                      if (lVar4 == -0x7de374e3804addea) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f1bc);
                        lVar1 = -0x68f444208277a4db;
                        if (iVar2 != 0) {
                          lVar1 = -0x67a5fd8e36b48bb4;
                        }
                      }
                      else if (lVar4 == -0x74a0fd83975bb29d) {
                        lVar1 = 0x766c039d1f7e793a;
                      }
                    }
                    else {
                      lVar1 = 0x6d0a3d5f63139421;
                      if ((lVar4 != -0x72e7d823e5b593c3) &&
                         (lVar1 = lVar4, lVar4 == -0x6c4e6e21fc3109d8)) {
                        *param_1 = *param_1 + 1;
                        lVar1 = 0x141117e41a694bd2;
                      }
                    }
                  }
                  else if (lVar4 < -0x5efdaaaa05774414) {
                    if (lVar4 == -0x68f444208277a4db) {
                      lVar1 = -0x72e7d823e5b593c3;
                      if (DAT_0021f629 == '\0') {
                        lVar1 = -0x5ef1c6c4ad3406e9;
                      }
                    }
                    else if (lVar4 == -0x67a5fd8e36b48bb4) {
                      lVar1 = -0x7de374e3804addea;
                    }
                  }
                  else {
                    lVar1 = -0x4d54a68c57c6c7d7;
                    if (lVar4 != -0x5efdaaaa05774414) {
                      if (lVar4 == -0x5ef1c6c4ad3406e9) {
                        DAT_0021c100 = DAT_0021c100 ^ 0xc0;
                        DAT_0021c101 = DAT_0021c101 ^ 0xc0;
                        _DAT_0021c0f0 = _DAT_0021c0f0 ^ 0xc0c0c0c0c0c0c0c0;
                        uRam000000000021c0f8 = uRam000000000021c0f8 ^ 0xc0c0c0c0c0c0c0c0;
                        DAT_0021f629 = '\x01';
                        lVar1 = 0x6d0a3d5f63139421;
                      }
                      else {
                        lVar1 = lVar4;
                        if (lVar4 == -0x528217abc8310b8d) {
                          DAT_0021f1d4 = 0;
                          uVar3 = FUN_001b208c(&DAT_0021c0d8);
                          lVar1 = -0x51c3e0c739d0a19a;
                          if ((uVar3 & 1) == 0) {
                            lVar1 = 0x7c7b2e9101238be;
                          }
                        }
                      }
                    }
                  }
                }
                else if (lVar4 < -0x2ad17e01cf2bd6a8) {
                  if (lVar4 < -0x3827f0da3b71cf9b) {
                    if (lVar4 == -0x51c3e0c739d0a19a) {
                      *param_1 = *param_1 + 1;
                      lVar1 = -0x15c1510c8aef715f;
                    }
                    else if (lVar4 == -0x4d54a68c57c6c7d7) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f1d0);
                      lVar1 = 0xc18376c52d7997c;
                      if (iVar2 != 0) {
                        lVar1 = -0x5efdaaaa05774414;
                      }
                    }
                  }
                  else {
                    lVar1 = 0x1908e88881fd4b8;
                    if ((lVar4 != -0x3827f0da3b71cf9b) &&
                       (lVar1 = lVar4, lVar4 == -0x3494da7ac01903fa)) {
                      DAT_0021c0d0 = DAT_0021c0d0 ^ 0xe3;
                      DAT_0021c0d1 = DAT_0021c0d1 ^ 0xe3;
                      _DAT_0021c0c0 = _DAT_0021c0c0 ^ 0xe3e3e3e3e3e3e3e3;
                      uRam000000000021c0c8 = uRam000000000021c0c8 ^ 0xe3e3e3e3e3e3e3e3;
                      DAT_0021f62d = '\x01';
                      lVar1 = 0x13c4fd347c136e7f;
                    }
                  }
                }
                else if (lVar4 < -0x24526db15a59eb6d) {
                  if (lVar4 == -0x2ad17e01cf2bd6a8) {
                    DAT_0021c128 = DAT_0021c128 ^ 0x47;
                    DAT_0021c129 = DAT_0021c129 ^ 0x47;
                    DAT_0021c12a = DAT_0021c12a ^ 0x47;
                    _DAT_0021c110 = _DAT_0021c110 ^ 0x4747474747474747;
                    uRam000000000021c118 = uRam000000000021c118 ^ 0x4747474747474747;
                    DAT_0021c120 = DAT_0021c120 ^ 0x4747474747474747;
                    DAT_0021f62f = '\x01';
                    lVar1 = 0x1908e88881fd4b8;
                  }
                  else if (lVar4 == -0x2941a20700173ffc) {
                    lVar1 = 0x13c4fd347c136e7f;
                  }
                }
                else {
                  lVar1 = 0x766c039d1f7e793a;
                  if (((lVar4 != -0x24526db15a59eb6d) &&
                      (lVar1 = -0x7de374e3804addea, lVar4 != -0x15c1510c8aef715f)) &&
                     (lVar1 = lVar4, lVar4 == 0x1908e88881fd4b8)) {
                    DAT_0021f1d8 = 0;
                    uVar3 = FUN_001b208c(&DAT_0021c110);
                    lVar1 = 0x27a5ffe384dbadcc;
                    if ((uVar3 & 1) == 0) {
                      lVar1 = 0x83143bad6ce781d;
                    }
                  }
                }
              }
              if (0x3ad7c4eff58bcc66 < lVar4) break;
              if (lVar4 < 0x141117e41a694bd2) {
                if (lVar4 < 0xc18376c52d7997c) {
                  lVar1 = -0x15c1510c8aef715f;
                  if ((lVar4 != 0x7c7b2e9101238be) && (lVar1 = lVar4, lVar4 == 0x83143bad6ce781d)) {
                    lVar1 = 0x7fd4f688afe2e0bc;
                  }
                }
                else if (lVar4 == 0xc18376c52d7997c) {
                  lVar1 = -0x2941a20700173ffc;
                  if (DAT_0021f62d == '\0') {
                    lVar1 = -0x3494da7ac01903fa;
                  }
                }
                else if (lVar4 == 0x13c4fd347c136e7f) {
                  DAT_0021f1d0 = 0;
                  uVar3 = FUN_001b208c(&DAT_0021c0c0);
                  lVar1 = 0x3ad7c4eff58bcc67;
                  if ((uVar3 & 1) == 0) {
                    lVar1 = 0x548fc1c84959d43b;
                  }
                }
              }
              else if (lVar4 < 0x25b6416ea5aab4b6) {
                lVar1 = 0x7f50ebff22c297c5;
                if ((lVar4 != 0x141117e41a694bd2) && (lVar1 = lVar4, lVar4 == 0x14437797ebdb3d1c)) {
                  lVar1 = -0x4d54a68c57c6c7d7;
                }
              }
              else {
                lVar1 = 0x7f50ebff22c297c5;
                if (lVar4 != 0x25b6416ea5aab4b6) {
                  if (lVar4 == 0x27a5ffe384dbadcc) {
                    *param_1 = *param_1 + 1;
                    lVar1 = 0x7fd4f688afe2e0bc;
                  }
                  else {
                    lVar1 = lVar4;
                    if (lVar4 == 0x39af1ae683ec7d89) {
                      lVar1 = -0x528217abc8310b8d;
                    }
                  }
                }
              }
            }
            if (0x71a1b60c2d3020c2 < lVar4) break;
            if (lVar4 < 0x5cda4d8cdcc78c0e) {
              if (lVar4 == 0x3ad7c4eff58bcc67) {
                *param_1 = *param_1 + 1;
                lVar1 = -0x74a0fd83975bb29d;
              }
              else if (lVar4 == 0x548fc1c84959d43b) {
                lVar1 = -0x74a0fd83975bb29d;
              }
            }
            else if (lVar4 == 0x5cda4d8cdcc78c0e) {
              lVar1 = 0x39af1ae683ec7d89;
              if (DAT_0021f62e == '\0') {
                lVar1 = 0x722ff175841bf512;
              }
            }
            else {
              lVar1 = 0x141117e41a694bd2;
              if ((lVar4 != 0x65123e08886f988e) && (lVar1 = lVar4, lVar4 == 0x6d0a3d5f63139421)) {
                DAT_0021f1bc = 0;
                uVar3 = FUN_001b208c(&DAT_0021c0f0);
                lVar1 = -0x6c4e6e21fc3109d8;
                if ((uVar3 & 1) == 0) {
                  lVar1 = 0x65123e08886f988e;
                }
              }
            }
          }
          if (0x766c039d1f7e7939 < lVar4) break;
          if (lVar4 == 0x71a1b60c2d3020c3) {
            lVar1 = -0x3827f0da3b71cf9b;
            if (DAT_0021f62f == '\0') {
              lVar1 = -0x2ad17e01cf2bd6a8;
            }
          }
          else if (lVar4 == 0x722ff175841bf512) {
            DAT_0021c0e0 = DAT_0021c0e0 ^ 0x9f;
            DAT_0021c0e1 = DAT_0021c0e1 ^ 0x9f;
            DAT_0021c0e2 = DAT_0021c0e2 ^ 0x9f;
            DAT_0021c0e4 = DAT_0021c0e4 ^ 0x9f;
            DAT_0021c0e5 = DAT_0021c0e5 ^ 0x9f;
            DAT_0021c0e3 = DAT_0021c0e3 ^ 0x9f;
            DAT_0021c0e6 = DAT_0021c0e6 ^ 0x9f;
            DAT_0021c0d8 = DAT_0021c0d8 ^ 0x9f9f9f9f9f9f9f9f;
            DAT_0021f62e = '\x01';
            lVar1 = -0x528217abc8310b8d;
          }
        }
        if (lVar4 != 0x766c039d1f7e793a) break;
        iVar2 = FUN_00212730(0,1,&DAT_0021f1d4);
        lVar1 = 0x5cda4d8cdcc78c0e;
        if (iVar2 != 0) {
          lVar1 = -0x24526db15a59eb6d;
        }
      }
      if (lVar4 != 0x7f50ebff22c297c5) break;
      iVar2 = FUN_00212730(0,1,&DAT_0021f1d8);
      lVar1 = 0x71a1b60c2d3020c3;
      if (iVar2 != 0) {
        lVar1 = 0x25b6416ea5aab4b6;
      }
    }
  } while (lVar4 != 0x7fd4f688afe2e0bc);
  return;
}

