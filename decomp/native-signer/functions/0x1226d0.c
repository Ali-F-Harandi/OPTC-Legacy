// rea decompile_all
// name: FUN_001226d0
// address: 0x1226d0
// body: available
// range: 0x1226d0-0x123c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x123c94 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001226d0(short *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined1 *local_90;
  long local_88;
  
  local_98 = tpidr_el0;
  local_88 = *(long *)(local_98 + 0x28);
  puVar2 = auStack_a0;
  lVar1 = -0x4689100bf65fd0ad;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while (lVar5 = lVar1, lVar1 = lVar5, 0x12e1be5f2b72ca6e < lVar5) {
                  if (lVar5 < 0x4df7063ff4f72d9f) {
                    if (lVar5 < 0x2eb2cb94985f61db) {
                      if (lVar5 < 0x1de6a73eeda120cb) {
                        if (lVar5 < 0x13021144eb62c0db) {
                          if (lVar5 == 0x12e1be5f2b72ca6f) {
                            DAT_0021f234 = 0;
                            uVar4 = FUN_001b208c(&DAT_0021c350);
                            lVar1 = 0x366faf7c9bd6c7be;
                            if ((uVar4 & 1) == 0) {
                              lVar1 = 0x21827f7327203db;
                            }
                          }
                          else if (lVar5 == 0x12f97563fe86189d) {
                            lVar1 = -0x65ea49716c78db2d;
                          }
                        }
                        else if (lVar5 == 0x13021144eb62c0db) {
                          DAT_0021c2d0 = DAT_0021c2d0 ^ 0x32;
                          DAT_0021c2d2 = DAT_0021c2d2 ^ 0x32;
                          DAT_0021c2d1 = DAT_0021c2d1 ^ 0x32;
                          _DAT_0021c2c0 = _DAT_0021c2c0 ^ 0x3232323232323232;
                          uRam000000000021c2c8 = uRam000000000021c2c8 ^ 0x3232323232323232;
                          DAT_0021f641 = '\x01';
                          lVar1 = -0x51134ff119c1308f;
                        }
                        else if (lVar5 == 0x14e8afddeb5ba2d8) {
                          DAT_0021c328 = DAT_0021c328 ^ 0xdb;
                          DAT_0021c329 = DAT_0021c329 ^ 0xdb;
                          DAT_0021c32a = DAT_0021c32a ^ 0xdb;
                          DAT_0021c32b = DAT_0021c32b ^ 0xdb;
                          DAT_0021c32c = DAT_0021c32c ^ 0xdb;
                          DAT_0021c32d = DAT_0021c32d ^ 0xdb;
                          _DAT_0021c310 = _DAT_0021c310 ^ 0xdbdbdbdbdbdbdbdb;
                          uRam000000000021c318 = uRam000000000021c318 ^ 0xdbdbdbdbdbdbdbdb;
                          DAT_0021c320 = DAT_0021c320 ^ 0xdbdbdbdbdbdbdbdb;
                          DAT_0021f644 = '\x01';
                          lVar1 = 0x5b9133fd3f5b97f2;
                        }
                      }
                      else if (lVar5 < 0x24c67f5d9b83fa28) {
                        lVar1 = 0x3d520d52a04eb0a3;
                        if ((lVar5 != 0x1de6a73eeda120cb) &&
                           (lVar1 = lVar5, lVar5 == 0x23fbc284d6daefc6)) {
                          lVar1 = -0x21c0c6636b2aee0b;
                          if (DAT_0021f641 == '\0') {
                            lVar1 = 0x13021144eb62c0db;
                          }
                        }
                      }
                      else if (lVar5 == 0x24c67f5d9b83fa28) {
                        *param_1 = *param_1 + 1;
                        lVar1 = -0x28e14ecfb2aa8ff2;
                      }
                      else if (lVar5 == 0x2e5d2c580e521a46) {
                        iVar3 = FUN_00212730(0,1,&DAT_0021f22c);
                        lVar1 = -0x707c1fafe32329c8;
                        if (iVar3 != 0) {
                          lVar1 = 0x67e75d17e2cdd7d4;
                        }
                      }
                    }
                    else if (lVar5 < 0x4943753bf51688fc) {
                      if (lVar5 < 0x3a9f795766717164) {
                        lVar1 = 0x6902adc5eda669f4;
                        if ((lVar5 != 0x2eb2cb94985f61db) &&
                           (lVar1 = lVar5, lVar5 == 0x366faf7c9bd6c7be)) {
                          *param_1 = *param_1 + 1;
                          lVar1 = 0xe418c3fe6fa7e30;
                        }
                      }
                      else if (lVar5 == 0x3a9f795766717164) {
                        DAT_0021f238 = 0;
                        uVar4 = FUN_001b208c(&DAT_0021c370);
                        lVar1 = -0x14860daff890785c;
                        if ((uVar4 & 1) == 0) {
                          lVar1 = 0x581147dc809bae3d;
                        }
                      }
                      else if (lVar5 == 0x3d520d52a04eb0a3) {
                        DAT_0021f23c = 0;
                        uVar4 = FUN_001b208c(&DAT_0021c390);
                        lVar1 = 0x24c67f5d9b83fa28;
                        if ((uVar4 & 1) == 0) {
                          lVar1 = -0x1579c5d94e757e2d;
                        }
                      }
                    }
                    else if (lVar5 < 0x4aec30ca31276d55) {
                      lVar1 = -0x26779b83f38bb8da;
                      if ((lVar5 != 0x4943753bf51688fc) &&
                         (lVar1 = lVar5, lVar5 == 0x4969e3b2df5c1737)) {
                        iVar3 = FUN_00212730(0,1,&DAT_0021f238);
                        lVar1 = -0x702101e1bc06872a;
                        if (iVar3 != 0) {
                          lVar1 = -0x3726a832e592db74;
                        }
                      }
                    }
                    else if (lVar5 == 0x4aec30ca31276d55) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f220);
                      lVar1 = 0x23fbc284d6daefc6;
                      if (iVar3 != 0) {
                        lVar1 = -0xcdc5aee104269e7;
                      }
                    }
                    else if (lVar5 == 0x4d6661f53ed8cd69) {
                      lVar1 = -0xde1e96acf5ef97a;
                      if (DAT_0021f646 == '\0') {
                        lVar1 = 0x4f11b5a35da5d5cb;
                      }
                    }
                  }
                  else if (lVar5 < 0x5f42b99ecf1d09fd) {
                    if (lVar5 < 0x5a7966877bb5e856) {
                      if (lVar5 < 0x4f11b5a35da5d5cb) {
                        if (lVar5 == 0x4df7063ff4f72d9f) {
                          *param_1 = *param_1 + 1;
                          lVar1 = -0x6acaf52c4f368fc7;
                        }
                        else if (lVar5 == 0x4ec987089f77069e) {
                          iVar3 = FUN_00212730(0,1,&DAT_0021f23c);
                          lVar1 = -0x14cc1a46edce974e;
                          if (iVar3 != 0) {
                            lVar1 = -0x601688af67ee5367;
                          }
                        }
                      }
                      else if (lVar5 == 0x4f11b5a35da5d5cb) {
                        DAT_0021c360 = DAT_0021c360 ^ 0xd6;
                        _DAT_0021c350 = _DAT_0021c350 ^ 0xd6d6d6d6d6d6d6d6;
                        uRam000000000021c358 = uRam000000000021c358 ^ 0xd6d6d6d6d6d6d6d6;
                        DAT_0021f646 = '\x01';
                        lVar1 = 0x12e1be5f2b72ca6f;
                      }
                      else if (lVar5 == 0x581147dc809bae3d) {
                        lVar1 = -0x6e115ec668cd4595;
                      }
                    }
                    else if (lVar5 < 0x5c464faf1c134413) {
                      if (lVar5 == 0x5a7966877bb5e856) {
                        DAT_0021c2e0 = DAT_0021c2e0 ^ 0xdd;
                        DAT_0021c2e1 = DAT_0021c2e1 ^ 0xdd;
                        DAT_0021c2d8 = DAT_0021c2d8 ^ 0xdddddddddddddddd;
                        DAT_0021f642 = '\x01';
                        lVar1 = 0x36080c4ea4d3b15;
                      }
                      else if (lVar5 == 0x5b9133fd3f5b97f2) {
                        DAT_0021f22c = 0;
                        uVar4 = FUN_001b208c(&DAT_0021c310);
                        lVar1 = 0x750b035df70dfd6b;
                        if ((uVar4 & 1) == 0) {
                          lVar1 = -0x5370ef828278883b;
                        }
                      }
                    }
                    else {
                      lVar1 = -0x6acaf52c4f368fc7;
                      if ((lVar5 != 0x5c464faf1c134413) &&
                         (lVar1 = lVar5, lVar5 == 0x5d165584104b931b)) {
                        lVar1 = -0x47fe715cf647cc47;
                        if (DAT_0021f642 == '\0') {
                          lVar1 = 0x5a7966877bb5e856;
                        }
                      }
                    }
                  }
                  else if (lVar5 < 0x6ba687d86db6deec) {
                    if (lVar5 < 0x6902adc5eda669f4) {
                      lVar1 = -0x52d8f6b8a3da3d9e;
                      if ((lVar5 != 0x5f42b99ecf1d09fd) &&
                         (lVar1 = lVar5, lVar5 == 0x67e75d17e2cdd7d4)) {
                        lVar1 = 0x2e5d2c580e521a46;
                      }
                    }
                    else if (lVar5 == 0x6902adc5eda669f4) {
                      DAT_0021f228 = 0;
                      lVar1 = -0x65ea49716c78db2d;
                    }
                    else if (lVar5 == 0x69eee68980841545) {
                      lVar1 = 0x5b9133fd3f5b97f2;
                    }
                  }
                  else if (lVar5 < 0x6fec28429a53861a) {
                    if (lVar5 == 0x6ba687d86db6deec) {
                      *param_1 = *param_1 + 1;
                      lVar1 = -0x6df3a92de1c09228;
                    }
                    else if (lVar5 == 0x6e6e1c8720089005) {
                      lVar1 = 0x7823e529026ef05b;
                    }
                  }
                  else if (lVar5 == 0x6fec28429a53861a) {
                    iVar3 = FUN_00212730(0,1,&DAT_0021f230);
                    lVar1 = -0x1f2e54b4da8689dd;
                    if (iVar3 != 0) {
                      lVar1 = -0x13304e214eb4a6b2;
                    }
                  }
                  else if (lVar5 == 0x750b035df70dfd6b) {
                    *param_1 = *param_1 + 1;
                    lVar1 = -0x6531ea49607ac328;
                  }
                  else if (lVar5 == 0x7823e529026ef05b) {
                    iVar3 = FUN_00212730(0,1,&DAT_0021f234);
                    lVar1 = 0x4d6661f53ed8cd69;
                    if (iVar3 != 0) {
                      lVar1 = 0x6e6e1c8720089005;
                    }
                  }
                }
                if (-0x2b8072ef26bb75e1 < lVar5) break;
                if (lVar5 < -0x5370ef828278883b) {
                  if (lVar5 < -0x6acaf52c4f368fc7) {
                    if (lVar5 < -0x6e115ec668cd4595) {
                      if (lVar5 == -0x707c1fafe32329c8) {
                        lVar1 = 0x69eee68980841545;
                        if (DAT_0021f644 == '\0') {
                          lVar1 = 0x14e8afddeb5ba2d8;
                        }
                      }
                      else if (lVar5 == -0x702101e1bc06872a) {
                        lVar1 = -0x2b8072ef26bb75e0;
                        if (DAT_0021f647 == '\0') {
                          lVar1 = -0x2f3336ee1624771d;
                        }
                      }
                    }
                    else {
                      lVar1 = 0x4ec987089f77069e;
                      if ((lVar5 != -0x6e115ec668cd4595) &&
                         (lVar1 = lVar5, lVar5 == -0x6df3a92de1c09228)) {
                        lVar1 = 0x7823e529026ef05b;
                      }
                    }
                  }
                  else if (lVar5 < -0x6531ea49607ac328) {
                    lVar1 = 0x2e5d2c580e521a46;
                    if ((lVar5 != -0x6acaf52c4f368fc7) &&
                       (lVar1 = lVar5, lVar5 == -0x65ea49716c78db2d)) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f224);
                      lVar1 = 0x5d165584104b931b;
                      if (iVar3 != 0) {
                        lVar1 = 0x12f97563fe86189d;
                      }
                    }
                  }
                  else {
                    lVar1 = 0x6fec28429a53861a;
                    if ((lVar5 != -0x6531ea49607ac328) &&
                       (lVar1 = lVar5, lVar5 == -0x601688af67ee5367)) {
                      lVar1 = 0x4ec987089f77069e;
                    }
                  }
                }
                else if (lVar5 < -0x4689100bf65fd0ad) {
                  if (lVar5 < -0x51134ff119c1308f) {
                    lVar1 = -0x6531ea49607ac328;
                    if ((lVar5 != -0x5370ef828278883b) &&
                       (lVar1 = lVar5, lVar5 == -0x52d8f6b8a3da3d9e)) {
                      DAT_0021f230 = 0;
                      uVar4 = FUN_001b208c(&DAT_0021c330);
                      lVar1 = 0x6ba687d86db6deec;
                      if ((uVar4 & 1) == 0) {
                        lVar1 = -0x1aa196cea8a824ec;
                      }
                    }
                  }
                  else if (lVar5 == -0x51134ff119c1308f) {
                    DAT_0021f220 = 0;
                    puVar6 = puVar2 + -0x100;
                    *(undefined **)(puVar2 + -0x100) = &DAT_0021c2c0;
                    *(ulong **)(puVar2 + -0xf8) = &DAT_0021c2d8;
                    *(undefined4 *)(puVar2 + -0x58) = 3;
                    *(undefined8 *)(puVar2 + -8) = 1;
                    local_90 = puVar6;
                    uVar4 = FUN_001b208c(&DAT_0021c2f0);
                    puVar2 = puVar6;
                    lVar1 = 0x4df7063ff4f72d9f;
                    if ((uVar4 & 1) == 0) {
                      lVar1 = 0x5c464faf1c134413;
                    }
                  }
                  else if (lVar5 == -0x47fe715cf647cc47) {
                    lVar1 = 0x36080c4ea4d3b15;
                  }
                }
                else if (lVar5 < -0x33cadcbd9157ba94) {
                  lVar1 = -0x26779b83f38bb8da;
                  if ((lVar5 != -0x4689100bf65fd0ad) &&
                     (lVar1 = lVar5, lVar5 == -0x3726a832e592db74)) {
                    lVar1 = 0x4969e3b2df5c1737;
                  }
                }
                else if (lVar5 == -0x33cadcbd9157ba94) {
                  DAT_0021c3a8 = DAT_0021c3a8 ^ 0xf0;
                  _DAT_0021c390 = _DAT_0021c390 ^ 0xf0f0f0f0f0f0f0f0;
                  uRam000000000021c398 = uRam000000000021c398 ^ 0xf0f0f0f0f0f0f0f0;
                  DAT_0021c3a0 = DAT_0021c3a0 ^ 0xf0f0f0f0f0f0f0f0;
                  DAT_0021f648 = '\x01';
                  lVar1 = 0x3d520d52a04eb0a3;
                }
                else if (lVar5 == -0x2f3336ee1624771d) {
                  DAT_0021c388 = DAT_0021c388 ^ 0xb;
                  _DAT_0021c370 = _DAT_0021c370 ^ 0xb0b0b0b0b0b0b0b;
                  uRam000000000021c378 = uRam000000000021c378 ^ 0xb0b0b0b0b0b0b0b;
                  DAT_0021c380 = DAT_0021c380 ^ 0xb0b0b0b0b0b0b0b;
                  DAT_0021f647 = '\x01';
                  lVar1 = 0x3a9f795766717164;
                }
                else if (lVar5 == -0x2cc49f4395b2f43b) {
                  lVar1 = 0x2eb2cb94985f61db;
                  if (DAT_0021f643 == '\0') {
                    lVar1 = -0x21d3b6805e25ceaa;
                  }
                }
              }
              if (lVar5 < -0x14cc1a46edce974e) break;
              if (lVar5 < -0xcdc5aee104269e7) {
                if (lVar5 < -0x13304e214eb4a6b2) {
                  if (lVar5 == -0x14cc1a46edce974e) {
                    lVar1 = 0x1de6a73eeda120cb;
                    if (DAT_0021f648 == '\0') {
                      lVar1 = -0x33cadcbd9157ba94;
                    }
                  }
                  else if (lVar5 == -0x14860daff890785c) {
                    *param_1 = *param_1 + 1;
                    lVar1 = -0x6e115ec668cd4595;
                  }
                }
                else {
                  lVar1 = 0x6fec28429a53861a;
                  if ((lVar5 != -0x13304e214eb4a6b2) && (lVar1 = lVar5, lVar5 == -0xde1e96acf5ef97a)
                     ) {
                    lVar1 = 0x12e1be5f2b72ca6f;
                  }
                }
              }
              else if (lVar5 < 0x36080c4ea4d3b15) {
                lVar1 = 0x4aec30ca31276d55;
                if ((lVar5 != -0xcdc5aee104269e7) && (lVar1 = lVar5, lVar5 == 0x21827f7327203db)) {
                  lVar1 = 0xe418c3fe6fa7e30;
                }
              }
              else if (lVar5 == 0x36080c4ea4d3b15) {
                DAT_0021f224 = 0;
                lVar1 = 0x4aec30ca31276d55;
              }
              else if (lVar5 == 0xe418c3fe6fa7e30) {
                lVar1 = 0x4969e3b2df5c1737;
              }
            }
            if (lVar5 < -0x20ffead854ca6e4e) break;
            if (lVar5 < -0x1aa196cea8a824ec) {
              if (lVar5 == -0x20ffead854ca6e4e) {
                DAT_0021c340 = DAT_0021c340 ^ 0x5a;
                DAT_0021c341 = DAT_0021c341 ^ 0x5a;
                _DAT_0021c330 = _DAT_0021c330 ^ 0x5a5a5a5a5a5a5a5a;
                uRam000000000021c338 = uRam000000000021c338 ^ 0x5a5a5a5a5a5a5a5a;
                DAT_0021f645 = '\x01';
                lVar1 = -0x52d8f6b8a3da3d9e;
              }
              else if (lVar5 == -0x1f2e54b4da8689dd) {
                lVar1 = 0x5f42b99ecf1d09fd;
                if (DAT_0021f645 == '\0') {
                  lVar1 = -0x20ffead854ca6e4e;
                }
              }
            }
            else {
              lVar1 = -0x6df3a92de1c09228;
              if ((lVar5 != -0x1aa196cea8a824ec) && (lVar1 = lVar5, lVar5 == -0x1579c5d94e757e2d)) {
                lVar1 = -0x28e14ecfb2aa8ff2;
              }
            }
          }
          if (lVar5 < -0x21d3b6805e25ceaa) break;
          if (lVar5 == -0x21d3b6805e25ceaa) {
            DAT_0021c300 = DAT_0021c300 ^ 0x5c;
            DAT_0021c301 = DAT_0021c301 ^ 0x5c;
            DAT_0021c302 = DAT_0021c302 ^ 0x5c;
            DAT_0021c303 = DAT_0021c303 ^ 0x5c;
            DAT_0021c305 = DAT_0021c305 ^ 0x5c;
            DAT_0021c304 = DAT_0021c304 ^ 0x5c;
            DAT_0021c306 = DAT_0021c306 ^ 0x5c;
            _DAT_0021c2f0 = _DAT_0021c2f0 ^ 0x5c5c5c5c5c5c5c5c;
            uRam000000000021c2f8 = uRam000000000021c2f8 ^ 0x5c5c5c5c5c5c5c5c;
            DAT_0021f643 = '\x01';
            lVar1 = 0x6902adc5eda669f4;
          }
          else if (lVar5 == -0x21c0c6636b2aee0b) {
            lVar1 = -0x51134ff119c1308f;
          }
        }
        lVar1 = 0x3a9f795766717164;
      } while (lVar5 == -0x2b8072ef26bb75e0);
      if (lVar5 != -0x26779b83f38bb8da) break;
      iVar3 = FUN_00212730(0,1,&DAT_0021f228);
      lVar1 = -0x2cc49f4395b2f43b;
      if (iVar3 != 0) {
        lVar1 = 0x4943753bf51688fc;
      }
    }
    lVar1 = lVar5;
  } while (lVar5 != -0x28e14ecfb2aa8ff2);
  FUN_00123c98(local_90,1,param_1);
  if (*(long *)(local_98 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

