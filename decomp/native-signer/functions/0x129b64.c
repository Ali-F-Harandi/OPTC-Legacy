// rea decompile_all
// name: FUN_00129b64
// address: 0x129b64
// body: available
// range: 0x129b64-0x130193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x130190 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00129b64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *local_1cc0;
  undefined8 local_1cb8;
  undefined4 local_1c18;
  undefined8 local_1bc8;
  undefined *local_1bc0;
  undefined8 local_1bb8;
  undefined4 local_1b18;
  undefined8 local_1ac8;
  undefined *local_1ac0;
  undefined8 local_1ab8;
  undefined4 local_1a18;
  undefined8 local_19c8;
  undefined *local_19c0;
  undefined8 local_19b8;
  undefined4 local_1918;
  undefined8 local_18c8;
  undefined *local_18c0;
  undefined8 local_18b8;
  undefined4 local_1818;
  undefined8 local_17c8;
  undefined *local_17c0;
  undefined8 local_17b8;
  undefined4 local_1718;
  undefined8 local_16c8;
  undefined *local_16c0;
  undefined8 local_16b8;
  undefined4 local_1618;
  undefined8 local_15c8;
  undefined *local_15c0;
  undefined8 *local_15b8;
  undefined4 local_1518;
  undefined8 local_14c8;
  undefined8 *local_14c0;
  undefined8 *local_14b8;
  undefined1 *local_14b0;
  undefined1 *local_14a8;
  undefined1 *local_14a0;
  undefined8 uStack_1418;
  undefined8 uStack_1410;
  undefined8 local_13c8;
  undefined8 *local_13c0;
  undefined1 *local_13b8;
  undefined1 *local_13b0;
  undefined8 local_1318;
  undefined8 local_12c8;
  undefined8 *local_12c0;
  undefined8 *local_12b8;
  undefined1 *local_12b0;
  undefined8 local_1218;
  undefined8 local_11c8;
  undefined8 *local_11c0;
  undefined8 *local_11b8;
  undefined4 local_1118;
  undefined8 local_10c8;
  undefined *local_10c0;
  undefined1 *local_10b8;
  undefined4 local_1018;
  undefined8 local_fc8;
  undefined *local_fc0;
  undefined1 *local_fb8;
  undefined8 *local_fb0;
  undefined8 *local_fa8;
  undefined8 *local_fa0;
  undefined8 local_f18;
  undefined8 uStack_f10;
  undefined8 local_ec8;
  undefined *local_ec0;
  undefined8 *local_eb8;
  undefined1 *local_eb0;
  undefined8 local_e18;
  undefined8 local_dc8;
  undefined *local_dc0;
  undefined8 *local_db8;
  undefined1 *local_db0;
  undefined1 *local_da8;
  undefined1 *local_da0;
  undefined8 local_d18;
  undefined8 uStack_d10;
  undefined8 local_cc8;
  undefined *local_cc0;
  undefined1 *local_cb8;
  undefined8 *local_cb0;
  undefined *local_ca8;
  undefined8 *local_ca0;
  undefined8 local_c18;
  undefined8 uStack_c10;
  undefined8 local_bc8;
  undefined *local_bc0;
  undefined1 *local_bb8;
  undefined8 *local_bb0;
  undefined8 *local_ba8;
  undefined8 local_b18;
  undefined4 local_b10;
  undefined8 local_ac8;
  undefined *local_ac0;
  undefined8 *local_ab8;
  undefined4 local_a18;
  undefined8 local_9c8;
  undefined *local_9c0;
  undefined8 *local_9b8;
  undefined4 local_918;
  undefined8 local_8c8;
  undefined8 *local_8c0;
  undefined1 *local_8b8;
  undefined4 local_818;
  undefined8 local_7c8;
  undefined *local_7c0;
  undefined8 *local_7b8;
  undefined4 local_718;
  undefined8 local_6c8;
  undefined8 *local_6c0;
  undefined8 *local_6b8;
  undefined4 local_618;
  undefined8 local_5c8;
  undefined8 *local_5c0;
  undefined8 *local_5b8;
  undefined4 local_518;
  undefined8 local_4c8;
  undefined *local_4c0;
  undefined8 *local_4b8;
  undefined4 local_418;
  undefined8 local_3c8;
  undefined8 *local_3c0;
  undefined1 *local_3b8;
  undefined4 local_318;
  undefined8 local_2c8;
  undefined8 *local_2c0;
  undefined8 *local_2b8;
  undefined4 local_218;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 *puStack_1b8;
  undefined4 local_118;
  undefined8 local_c8;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  
  local_b0 = tpidr_el0;
  local_a8 = *(long *)(local_b0 + 0x28);
  lVar1 = -0x89aa9ef4ac76973;
  local_b8 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while( true ) {
                  while( true ) {
                    while (lVar3 = lVar1, lVar1 = lVar3, lVar3 < 0xa20615309cffb23) {
                      if (lVar3 < -0x360879df266284cb) {
                        if (lVar3 < -0x5b78005c8ed5b86a) {
                          if (lVar3 < -0x692480724dd609ae) {
                            if (lVar3 < -0x70a23fb5a0725721) {
                              if (lVar3 < -0x7a1ec83f99c8d67f) {
                                if (lVar3 < -0x7f2486022ae05162) {
                                  if (lVar3 == -0x7f8996eb0ce6b4fc) {
                                    DAT_0021f31c = 0;
                                    lVar1 = 0x5bd2bf8a7f474658;
                                  }
                                  else if (lVar3 == -0x7f65f90fe7a5b994) {
                                    lVar1 = 0x110e2f5113b4f2ea;
                                  }
                                }
                                else {
                                  lVar1 = 0x7a372565a97c8dc0;
                                  if ((lVar3 != -0x7f2486022ae05162) &&
                                     (lVar1 = lVar3, lVar3 == -0x7badd5647b20e843)) {
                                    DAT_0021f288 = 0;
                                    lVar1 = 0x579cfa6b70cd4f84;
                                  }
                                }
                              }
                              else if (lVar3 < -0x754284874b1dca1c) {
                                lVar1 = 0x49ac3a6a4504c820;
                                if ((lVar3 != -0x7a1ec83f99c8d67f) &&
                                   (lVar1 = lVar3, lVar3 == -0x77155227c6519bec)) {
                                  lVar1 = -0x43dcc99072c58151;
                                  if (DAT_0021f681 == '\0') {
                                    lVar1 = -0x2c5f1c337757982d;
                                  }
                                }
                              }
                              else if (lVar3 == -0x754284874b1dca1c) {
                                DAT_0021c7a8 = DAT_0021c7a8 ^ 0xce;
                                DAT_0021c7a9 = DAT_0021c7a9 ^ 0xce;
                                DAT_0021c7a0 = DAT_0021c7a0 ^ 0xcececececececece;
                                DAT_0021f67f = '\x01';
                                lVar1 = 0x181a50fb70e21de9;
                              }
                              else if (lVar3 == -0x75258739fc8d4bd6) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f270);
                                lVar1 = 0x646b53d029c41f15;
                                if (iVar2 != 0) {
                                  lVar1 = 0x85ae5a0f26fdf1c;
                                }
                              }
                              else if (lVar3 == -0x72c3888b87c8758a) {
                                lVar1 = 0x260dc1bce5e4c97f;
                                if (DAT_0021f660 == '\0') {
                                  lVar1 = 0x54a3aeab5af66f56;
                                }
                              }
                            }
                            else if (lVar3 < -0x6d488e375e46e850) {
                              if (lVar3 < -0x6fe1488765930f2c) {
                                if (lVar3 == -0x70a23fb5a0725721) {
                                  DAT_0021f2b4 = 0;
                                  lVar1 = 0x47fe4156e210931d;
                                }
                                else if (lVar3 == -0x70849a05dd3fb1b1) {
                                  DAT_0021f284 = 0;
                                  lVar1 = 0x10146ef07cbd8c0b;
                                }
                              }
                              else if (lVar3 == -0x6fe1488765930f2c) {
                                lVar1 = 0x7456b4e08246b4be;
                                if (DAT_0021f667 == '\0') {
                                  lVar1 = 0x764654ed26e32a74;
                                }
                              }
                              else if (lVar3 == -0x6f9fda3975f3d903) {
                                lVar1 = -0x415a678fa8d7e72f;
                                if (DAT_0021f67e == '\0') {
                                  lVar1 = -0x85ccf70df60aaa2;
                                }
                              }
                              else if (lVar3 == -0x6f94c64abcaf757e) {
                                lVar1 = -0x5d5cb27c61202e55;
                                if (DAT_0021f659 == '\0') {
                                  lVar1 = -0x62b5556008739667;
                                }
                              }
                            }
                            else if (lVar3 < -0x6b52f809cfa2162d) {
                              if (lVar3 == -0x6d488e375e46e850) {
                                lVar1 = -0x5c6e1ac561874dd;
                                if (DAT_0021f652 == '\0') {
                                  lVar1 = 0x50f0df46b7b58366;
                                }
                              }
                              else if (lVar3 == -0x6c061ec308f77f51) {
                                lVar1 = -0x3e6fd36519f64289;
                              }
                            }
                            else if (lVar3 == -0x6b52f809cfa2162d) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f310);
                              lVar1 = 0x3de593aa00af5ee6;
                              if (iVar2 != 0) {
                                lVar1 = -0x4eaa2dffa68633e5;
                              }
                            }
                            else if (lVar3 == -0x6a4959fcb8b4c2d8) {
                              lVar1 = 0x1b95a2df10099eeb;
                              if (DAT_0021f67f == '\0') {
                                lVar1 = -0x754284874b1dca1c;
                              }
                            }
                            else if (lVar3 == -0x69c6745f582f292f) {
                              DAT_0021c6ac = DAT_0021c6ac ^ 0xe3;
                              DAT_0021c6ad = DAT_0021c6ad ^ 0xe3;
                              DAT_0021c6ae = DAT_0021c6ae ^ 0xe3;
                              DAT_0021c6b0 = DAT_0021c6b0 ^ 0xe3;
                              DAT_0021c6af = DAT_0021c6af ^ 0xe3;
                              DAT_0021c6b2 = DAT_0021c6b2 ^ 0xe3;
                              DAT_0021c6b1 = DAT_0021c6b1 ^ 0xe3;
                              DAT_0021f672 = '\x01';
                              lVar1 = 0x7aa16fa1319352fb;
                            }
                          }
                          else if (lVar3 < -0x62b5556008739667) {
                            if (lVar3 < -0x670b0e9ad2dc905b) {
                              if (lVar3 < -0x67a37e469c840bd7) {
                                lVar1 = -0xb0a342a0a30b8d5;
                                if ((lVar3 != -0x692480724dd609ae) &&
                                   (lVar1 = lVar3, lVar3 == -0x68fd099714d73b0f)) {
                                  iVar2 = FUN_00212730(0,1,&DAT_0021f2a0);
                                  lVar1 = -0xe0bc73c99a6bea6;
                                  if (iVar2 != 0) {
                                    lVar1 = 0x303158640ab3d4cb;
                                  }
                                }
                              }
                              else {
                                lVar1 = -0x2e86f8262ad304e4;
                                if ((lVar3 != -0x67a37e469c840bd7) &&
                                   (lVar1 = lVar3, lVar3 == -0x6723f046c01d6d6c)) {
                                  iVar2 = FUN_00212730(0,1,&DAT_0021f28c);
                                  lVar1 = 0x5808b3f2945da450;
                                  if (iVar2 != 0) {
                                    lVar1 = 0x2bdebd7966b0772c;
                                  }
                                }
                              }
                            }
                            else if (lVar3 < -0x64a1acccc4343965) {
                              lVar1 = -0x26a752ef496f019f;
                              if ((lVar3 != -0x670b0e9ad2dc905b) &&
                                 (lVar1 = lVar3, lVar3 == -0x652449358ac69ca6)) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f2e8);
                                lVar1 = 0x447b529094ff9c42;
                                if (iVar2 != 0) {
                                  lVar1 = 0x7b2dd2934db1ef30;
                                }
                              }
                            }
                            else {
                              lVar1 = -0x70849a05dd3fb1b1;
                              if (lVar3 != -0x64a1acccc4343965) {
                                if (lVar3 == -0x6405e0626941147d) {
                                  lVar1 = 0x24a50899c1ddce34;
                                  if (DAT_0021f66a == '\0') {
                                    lVar1 = 0x247512c793575b34;
                                  }
                                }
                                else {
                                  lVar1 = lVar3;
                                  if (lVar3 == -0x63f1b003a0bb72ee) {
                                    lVar1 = 0x6290766201bb019a;
                                    if (DAT_0021f675 == '\0') {
                                      lVar1 = 0x57c7abc3240175e8;
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else if (lVar3 < -0x5d5cb27c61202e55) {
                            if (lVar3 < -0x61e9cf887c48ca5e) {
                              if (lVar3 == -0x62b5556008739667) {
                                _DAT_0021c530 = _DAT_0021c530 ^ 0x3333333333333333;
                                uRam000000000021c538 = uRam000000000021c538 ^ 0x3333333333333333;
                                DAT_0021c540 = DAT_0021c540 ^ 0x3333333333333333;
                                DAT_0021f659 = '\x01';
                                lVar1 = 0x369ba09d5d0a62b2;
                              }
                              else if (lVar3 == -0x627a3f591b358cec) {
                                lVar1 = 0x26edcd1f6fff8715;
                                if (DAT_0021f670 == '\0') {
                                  lVar1 = 0x39907d73a374a63;
                                }
                              }
                            }
                            else if (lVar3 == -0x61e9cf887c48ca5e) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f2ec);
                              lVar1 = -0x2bb8e79082b089f3;
                              if (iVar2 != 0) {
                                lVar1 = -0x3086b63447e9b432;
                              }
                            }
                            else {
                              lVar1 = 0x57baa8288e3b571;
                              if ((lVar3 != -0x612be10389bc53aa) &&
                                 (lVar1 = lVar3, lVar3 == -0x60d25ac82ad98865)) {
                                lVar1 = -0x2111fd8668cabe65;
                              }
                            }
                          }
                          else if (lVar3 < -0x5c0c11588661d249) {
                            lVar1 = 0x369ba09d5d0a62b2;
                            if ((lVar3 != -0x5d5cb27c61202e55) &&
                               (lVar1 = lVar3, lVar3 == -0x5c705efcf08c8797)) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f30c);
                              lVar1 = -0x415f7ef565a27a0e;
                              if (iVar2 != 0) {
                                lVar1 = -0x27824d6000b4ed03;
                              }
                            }
                          }
                          else if (lVar3 == -0x5c0c11588661d249) {
                            DAT_0021c630 = DAT_0021c630 ^ 0x87;
                            _DAT_0021c620 = _DAT_0021c620 ^ 0x8787878787878787;
                            uRam000000000021c628 = uRam000000000021c628 ^ 0x8787878787878787;
                            DAT_0021f669 = '\x01';
                            lVar1 = 0x6cc07a61ed36bcff;
                          }
                          else {
                            lVar1 = 0x3700d863e1ecac53;
                            if ((lVar3 != -0x5bcc0fb99f955b02) &&
                               (lVar1 = lVar3, lVar3 == -0x5b9dc9d29b3f84e1)) {
                              DAT_0021c4e0 = DAT_0021c4e0 ^ 0xe0;
                              _DAT_0021c4d0 = _DAT_0021c4d0 ^ 0xe0e0e0e0e0e0e0e0;
                              uRam000000000021c4d8 = uRam000000000021c4d8 ^ 0xe0e0e0e0e0e0e0e0;
                              DAT_0021f656 = '\x01';
                              lVar1 = -0x4d3eb90b44b5c4e;
                            }
                          }
                        }
                        else if (lVar3 < -0x4c6d05ef267c9b72) {
                          if (lVar3 < -0x5480fe589d508df0) {
                            if (lVar3 < -0x58fa3929d0f15b5a) {
                              if (lVar3 < -0x5a86496479c514ee) {
                                if (lVar3 == -0x5b78005c8ed5b86a) {
                                  lVar1 = 0x5f6e8304fb56eb37;
                                  if (DAT_0021f67a == '\0') {
                                    lVar1 = -0x109acc223444f06;
                                  }
                                }
                                else if (lVar3 == -0x5af27be32d8cb758) {
                                  lVar1 = -0x3af1ab24feb2133a;
                                  if (DAT_0021f669 == '\0') {
                                    lVar1 = -0x5c0c11588661d249;
                                  }
                                }
                              }
                              else {
                                lVar1 = 0x7b799c101741d414;
                                if ((lVar3 != -0x5a86496479c514ee) &&
                                   (lVar1 = lVar3, lVar3 == -0x5964a74c68451110)) {
                                  DAT_0021f2b8 = 0;
                                  lVar1 = 0x691fd7f9e13e9c08;
                                }
                              }
                            }
                            else if (lVar3 < -0x56878dbe0525fc4a) {
                              if (lVar3 == -0x58fa3929d0f15b5a) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f2b8);
                                lVar1 = -0x6fe1488765930f2c;
                                if (iVar2 != 0) {
                                  lVar1 = -0x22dcfaa1db405ca6;
                                }
                              }
                              else if (lVar3 == -0x57d79804f455e507) {
                                lVar1 = 0x3cc2b002c31debd9;
                              }
                            }
                            else if (lVar3 == -0x56878dbe0525fc4a) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f2cc);
                              lVar1 = 0x2b65c233f1ca04ee;
                              if (iVar2 != 0) {
                                lVar1 = 0x43a6abb0150d99f6;
                              }
                            }
                            else if (lVar3 == -0x557f2d8ac002ee5b) {
                              DAT_0021f2e0 = 0;
                              lVar1 = -0x25720dbae0493687;
                            }
                            else if (lVar3 == -0x54ce595ec8d9b919) {
                              DAT_0021c460 = DAT_0021c460 ^ 0xd8;
                              DAT_0021c458 = DAT_0021c458 ^ 0xd8d8d8d8d8d8d8d8;
                              DAT_0021f650 = '\x01';
                              lVar1 = 0x562880e9cfa347ff;
                            }
                          }
                          else if (lVar3 < -0x50186e19765a8581) {
                            if (lVar3 < -0x52c695b63541a536) {
                              if (lVar3 == -0x5480fe589d508df0) {
                                DAT_0021f2c4 = 0;
                                lVar1 = 0x7bbf3290a3bc5a2f;
                              }
                              else if (lVar3 == -0x536c8c3d617b5f6d) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f2f8);
                                lVar1 = -0x387382a71ceb0689;
                                if (iVar2 != 0) {
                                  lVar1 = -0x22e0cca1d78b5b33;
                                }
                              }
                            }
                            else if (lVar3 == -0x52c695b63541a536) {
                              DAT_0021c788 = DAT_0021c788 ^ 99;
                              DAT_0021c789 = DAT_0021c789 ^ 99;
                              DAT_0021c780 = DAT_0021c780 ^ 0x6363636363636363;
                              DAT_0021f67d = '\x01';
                              lVar1 = 0x7338f0dc0f0da651;
                            }
                            else {
                              lVar1 = -0x7badd5647b20e843;
                              if ((lVar3 != -0x520b46a94cb5dced) &&
                                 (lVar1 = lVar3, lVar3 == -0x51f060a20b57c52e)) {
                                DAT_0021c5d0 = DAT_0021c5d0 ^ 0x80;
                                DAT_0021c5d1 = DAT_0021c5d1 ^ 0x80;
                                DAT_0021c5d2 = DAT_0021c5d2 ^ 0x80;
                                DAT_0021c5d3 = DAT_0021c5d3 ^ 0x80;
                                DAT_0021c5d4 = DAT_0021c5d4 ^ 0x80;
                                DAT_0021c5d5 = DAT_0021c5d5 ^ 0x80;
                                DAT_0021f663 = '\x01';
                                lVar1 = 0x72955fd62f07f398;
                              }
                            }
                          }
                          else if (lVar3 < -0x4e99759cdcbeb179) {
                            lVar1 = -0x2db74f82ca284b0f;
                            if ((lVar3 != -0x50186e19765a8581) &&
                               (lVar1 = lVar3, lVar3 == -0x4eaa2dffa68633e5)) {
                              lVar1 = -0x6b52f809cfa2162d;
                            }
                          }
                          else if (lVar3 == -0x4e99759cdcbeb179) {
                            lVar1 = 0x4fb67da29d99498;
                            if (DAT_0021f683 == '\0') {
                              lVar1 = 0x1abeea6c781d215c;
                            }
                          }
                          else {
                            lVar1 = 0x59297a35bbd835d1;
                            if ((lVar3 != -0x4daedf960cb0556c) &&
                               (lVar1 = lVar3, lVar3 == -0x4da0b14374d11173)) {
                              DAT_0021c4a8 = DAT_0021c4a8 ^ 0xdc;
                              DAT_0021c4a9 = DAT_0021c4a9 ^ 0xdc;
                              DAT_0021c4aa = DAT_0021c4aa ^ 0xdc;
                              DAT_0021c4ab = DAT_0021c4ab ^ 0xdc;
                              DAT_0021c4ad = DAT_0021c4ad ^ 0xdc;
                              DAT_0021c4ac = DAT_0021c4ac ^ 0xdc;
                              DAT_0021c4ae = DAT_0021c4ae ^ 0xdc;
                              DAT_0021c4a0 = DAT_0021c4a0 ^ 0xdcdcdcdcdcdcdcdc;
                              DAT_0021f654 = '\x01';
                              lVar1 = 0x358a77dfff6b8627;
                            }
                          }
                        }
                        else if (lVar3 < -0x415a678fa8d7e72f) {
                          if (lVar3 < -0x477d0e89efc4e7a7) {
                            if (lVar3 < -0x4b8d90a9e74b16c3) {
                              if (lVar3 == -0x4c6d05ef267c9b72) {
                                DAT_0021f314 = 0;
                                lVar1 = -0x6b52f809cfa2162d;
                              }
                              else if (lVar3 == -0x4bcd0d339289515d) {
                                lVar1 = 0x370651321b939f85;
                              }
                            }
                            else if (lVar3 == -0x4b8d90a9e74b16c3) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f2d4);
                              lVar1 = -0x1d249770f6c543e6;
                              if (iVar2 != 0) {
                                lVar1 = -0x2e24d05a79008641;
                              }
                            }
                            else if (lVar3 == -0x480adf0aa46d36d7) {
                              lVar1 = 0x5ab159c7a48faee4;
                              if (DAT_0021f654 == '\0') {
                                lVar1 = -0x4da0b14374d11173;
                              }
                            }
                          }
                          else if (lVar3 < -0x43dcc99072c58151) {
                            lVar1 = -0xefd732dabacd85f;
                            if ((lVar3 != -0x477d0e89efc4e7a7) &&
                               (lVar1 = lVar3, lVar3 == -0x45a8ebae877bf4a9)) {
                              lVar1 = 0x2ff59f659a6b122a;
                            }
                          }
                          else {
                            lVar1 = -0x3ef82a2f333d7c7;
                            if (((lVar3 != -0x43dcc99072c58151) &&
                                (lVar1 = -0x3837e77210006d6, lVar3 != -0x42a7ee31d751e849)) &&
                               (lVar1 = lVar3, lVar3 == -0x415f7ef565a27a0e)) {
                              lVar1 = -0x670b0e9ad2dc905b;
                              if (DAT_0021f67c == '\0') {
                                lVar1 = -0x1dfcbefb1c4629d;
                              }
                            }
                          }
                        }
                        else if (lVar3 < -0x3b4a46ae7fe063db) {
                          if (lVar3 < -0x3e6fd36519f64289) {
                            lVar1 = -0x4c6d05ef267c9b72;
                            if ((lVar3 != -0x415a678fa8d7e72f) &&
                               (lVar1 = lVar3, lVar3 == -0x3f1d3768cf06784d)) {
                              DAT_0021c5c8 = DAT_0021c5c8 ^ 0x1d;
                              DAT_0021c5c9 = DAT_0021c5c9 ^ 0x1d;
                              DAT_0021c5ca = DAT_0021c5ca ^ 0x1d;
                              DAT_0021c5cc = DAT_0021c5cc ^ 0x1d;
                              DAT_0021c5cb = DAT_0021c5cb ^ 0x1d;
                              DAT_0021c5ce = DAT_0021c5ce ^ 0x1d;
                              DAT_0021c5cd = DAT_0021c5cd ^ 0x1d;
                              DAT_0021f662 = '\x01';
                              lVar1 = -0x2e86f8262ad304e4;
                            }
                          }
                          else if (lVar3 == -0x3e6fd36519f64289) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f2e4);
                            lVar1 = -0x33e83a6509a2b06b;
                            if (iVar2 != 0) {
                              lVar1 = -0x6c061ec308f77f51;
                            }
                          }
                          else if (lVar3 == -0x3d00e7c1a98d544d) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f2a8);
                            lVar1 = 0x7fbe7ed0b2220834;
                            if (iVar2 != 0) {
                              lVar1 = 0x14abf41aa72e58d3;
                            }
                          }
                          else if (lVar3 == -0x3c821466fea7a33a) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f304);
                            lVar1 = -0x5b78005c8ed5b86a;
                            if (iVar2 != 0) {
                              lVar1 = 0xad7aef6c6ca3f7e;
                            }
                          }
                        }
                        else if (lVar3 < -0x3af1ab24feb2133a) {
                          lVar1 = 0x12307e9c3b7f1fe2;
                          if ((lVar3 != -0x3b4a46ae7fe063db) &&
                             (lVar1 = lVar3, lVar3 == -0x3af1e26935450716)) {
                            lVar1 = -0x45a8ebae877bf4a9;
                            if (DAT_0021f668 == '\0') {
                              lVar1 = -0x2d142fbed4e63f1e;
                            }
                          }
                        }
                        else {
                          lVar1 = 0x6cc07a61ed36bcff;
                          if (lVar3 != -0x3af1ab24feb2133a) {
                            if (lVar3 == -0x387382a71ceb0689) {
                              lVar1 = 0x6f14cee41c8c1fb6;
                              if (DAT_0021f677 == '\0') {
                                lVar1 = 0x2dbc4040678434c0;
                              }
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == -0x3835ab6d39fb68c0) {
                                lVar1 = 0x6e6a2ebf85da81dd;
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 < -0xefd732dabacd85f) {
                        if (lVar3 < -0x22ea30f1a32f3c73) {
                          if (lVar3 < -0x2e24d05a79008641) {
                            if (lVar3 < -0x318d4506729b2d57) {
                              if (lVar3 < -0x34dc70f496529431) {
                                if (lVar3 == -0x360879df266284cb) {
                                  DAT_0021c740 = DAT_0021c740 ^ 0xa1;
                                  DAT_0021c741 = DAT_0021c741 ^ 0xa1;
                                  DAT_0021c743 = DAT_0021c743 ^ 0xa1;
                                  DAT_0021c744 = DAT_0021c744 ^ 0xa1;
                                  DAT_0021c742 = DAT_0021c742 ^ 0xa1;
                                  _DAT_0021c730 = _DAT_0021c730 ^ 0xa1a1a1a1a1a1a1a1;
                                  uRam000000000021c738 = uRam000000000021c738 ^ 0xa1a1a1a1a1a1a1a1;
                                  DAT_0021f679 = '\x01';
                                  lVar1 = -0x1cd7edc4156ccd1b;
                                }
                                else if (lVar3 == -0x3548597888a00189) {
                                  lVar1 = -0x557f2d8ac002ee5b;
                                }
                              }
                              else if (lVar3 == -0x34dc70f496529431) {
                                DAT_0021f308 = 0;
                                lVar1 = -0x3c821466fea7a33a;
                              }
                              else if (lVar3 == -0x33e83a6509a2b06b) {
                                lVar1 = 0x1aa368795a7677d0;
                                if (DAT_0021f672 == '\0') {
                                  lVar1 = -0x69c6745f582f292f;
                                }
                              }
                            }
                            else if (lVar3 < -0x3086b63447e9b432) {
                              lVar1 = -0x1a74c2b48399993;
                              if ((lVar3 != -0x318d4506729b2d57) &&
                                 (lVar1 = lVar3, lVar3 == -0x316b119d7dea7f62)) {
                                DAT_0021c5e0 = DAT_0021c5e0 ^ 0x3b;
                                DAT_0021c5e1 = DAT_0021c5e1 ^ 0x3b;
                                DAT_0021c5e3 = DAT_0021c5e3 ^ 0x3b;
                                DAT_0021c5e2 = DAT_0021c5e2 ^ 0x3b;
                                DAT_0021c5e4 = DAT_0021c5e4 ^ 0x3b;
                                DAT_0021c5e5 = DAT_0021c5e5 ^ 0x3b;
                                DAT_0021c5d8 = DAT_0021c5d8 ^ 0x3b3b3b3b3b3b3b3b;
                                DAT_0021f664 = '\x01';
                                lVar1 = 0x7a372565a97c8dc0;
                              }
                            }
                            else {
                              lVar1 = -0x61e9cf887c48ca5e;
                              if (((lVar3 != -0x3086b63447e9b432) &&
                                  (lVar1 = 0x7bbf3290a3bc5a2f, lVar3 != -0x2f39b43f64b97746)) &&
                                 (lVar1 = lVar3, lVar3 == -0x2e86f8262ad304e4)) {
                                DAT_0021f2a4 = 0;
                                lVar1 = -0x68fd099714d73b0f;
                              }
                            }
                          }
                          else if (lVar3 < -0x27824d6000b4ed03) {
                            if (lVar3 < -0x2d142fbed4e63f1e) {
                              lVar1 = -0x4b8d90a9e74b16c3;
                              if ((lVar3 != -0x2e24d05a79008641) &&
                                 (lVar1 = lVar3, lVar3 == -0x2db74f82ca284b0f)) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f2bc);
                                lVar1 = -0x3af1e26935450716;
                                if (iVar2 != 0) {
                                  lVar1 = -0x50186e19765a8581;
                                }
                              }
                            }
                            else if (lVar3 == -0x2d142fbed4e63f1e) {
                              DAT_0021c618 = DAT_0021c618 ^ 0x8a;
                              DAT_0021c619 = DAT_0021c619 ^ 0x8a;
                              DAT_0021c61a = DAT_0021c61a ^ 0x8a;
                              DAT_0021c61c = DAT_0021c61c ^ 0x8a;
                              DAT_0021c61b = DAT_0021c61b ^ 0x8a;
                              DAT_0021c61e = DAT_0021c61e ^ 0x8a;
                              DAT_0021c61d = DAT_0021c61d ^ 0x8a;
                              DAT_0021f668 = '\x01';
                              lVar1 = 0x2ff59f659a6b122a;
                            }
                            else if (lVar3 == -0x2c5f1c337757982d) {
                              DAT_0021c7d8 = DAT_0021c7d8 ^ 0x66;
                              DAT_0021c7d9 = DAT_0021c7d9 ^ 0x66;
                              DAT_0021c7d0 = DAT_0021c7d0 ^ 0x6666666666666666;
                              DAT_0021f681 = '\x01';
                              lVar1 = -0x3ef82a2f333d7c7;
                            }
                            else if (lVar3 == -0x2bb8e79082b089f3) {
                              lVar1 = 0x2603f539d2f00865;
                              if (DAT_0021f674 == '\0') {
                                lVar1 = -0x1591e3279f7c32c1;
                              }
                            }
                          }
                          else if (lVar3 < -0x25720dbae0493687) {
                            lVar1 = -0x5c705efcf08c8797;
                            if ((lVar3 != -0x27824d6000b4ed03) &&
                               (lVar1 = lVar3, lVar3 == -0x26a752ef496f019f)) {
                              DAT_0021f30c = 0;
                              lVar1 = 0x463e75a9121552c7;
                            }
                          }
                          else if (lVar3 == -0x25720dbae0493687) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f2dc);
                            lVar1 = -0x627a3f591b358cec;
                            if (iVar2 != 0) {
                              lVar1 = 0x441d9a5d50b75e9;
                            }
                          }
                          else {
                            lVar1 = -0x1117fc2bb64012c4;
                            if ((lVar3 != -0x2466dc5cb7a7144e) &&
                               (lVar1 = lVar3, lVar3 == -0x244ece57301c7926)) {
                              lVar1 = -0x7f8996eb0ce6b4fc;
                            }
                          }
                        }
                        else if (lVar3 < -0x1d249770f6c543e6) {
                          if (lVar3 < -0x2111fd8668cabe65) {
                            if (lVar3 < -0x22dcfaa1db405ca6) {
                              lVar1 = 0x16b83d185a0215ae;
                              if ((lVar3 != -0x22ea30f1a32f3c73) &&
                                 (lVar1 = lVar3, lVar3 == -0x22e0cca1d78b5b33)) {
                                lVar1 = -0x536c8c3d617b5f6d;
                              }
                            }
                            else {
                              lVar1 = -0x58fa3929d0f15b5a;
                              if ((lVar3 != -0x22dcfaa1db405ca6) &&
                                 (lVar1 = lVar3, lVar3 == -0x21ae77b745f40c1d)) {
                                DAT_0021c520 = DAT_0021c520 ^ 0xf2;
                                DAT_0021c521 = DAT_0021c521 ^ 0xf2;
                                DAT_0021c523 = DAT_0021c523 ^ 0xf2;
                                DAT_0021c522 = DAT_0021c522 ^ 0xf2;
                                _DAT_0021c510 = _DAT_0021c510 ^ 0xf2f2f2f2f2f2f2f2;
                                uRam000000000021c518 = uRam000000000021c518 ^ 0xf2f2f2f2f2f2f2f2;
                                DAT_0021f658 = '\x01';
                                lVar1 = 0x4d125807a33a4c80;
                              }
                            }
                          }
                          else if (lVar3 < -0x1fa65aa0c38f1ce6) {
                            if (lVar3 == -0x2111fd8668cabe65) {
                              DAT_0021f2a0 = 0;
                              lVar1 = -0x14d28ede0695770a;
                            }
                            else if (lVar3 == -0x20aa75f4364a88ff) {
                              lVar1 = 0x5709b4f82956ae67;
                            }
                          }
                          else {
                            lVar1 = 0x2a5cd955cec1984e;
                            if (lVar3 != -0x1fa65aa0c38f1ce6) {
                              if (lVar3 == -0x1f99dc14788c094a) {
                                lVar1 = -0xbd3ec96aa326155;
                                if (DAT_0021f650 == '\0') {
                                  lVar1 = -0x54ce595ec8d9b919;
                                }
                              }
                              else {
                                lVar1 = lVar3;
                                if (lVar3 == -0x1de63f4c41c3910d) {
                                  DAT_0021f2f0 = 0;
                                  lVar1 = -0x61e9cf887c48ca5e;
                                }
                              }
                            }
                          }
                        }
                        else if (lVar3 < -0x169e5de8b5b34eaa) {
                          if (lVar3 < -0x1be3bb16c74d18a7) {
                            if (lVar3 == -0x1d249770f6c543e6) {
                              lVar1 = -0x3835ab6d39fb68c0;
                              if (DAT_0021f66e == '\0') {
                                lVar1 = 0x5ae53e00920b7bff;
                              }
                            }
                            else if (lVar3 == -0x1cd7edc4156ccd1b) {
                              DAT_0021f300 = 0;
                              lVar1 = 0x7686cf23951b1170;
                            }
                          }
                          else if (lVar3 == -0x1be3bb16c74d18a7) {
                            DAT_0021c5a0 = DAT_0021c5a0 ^ 200;
                            DAT_0021c5a1 = DAT_0021c5a1 ^ 200;
                            DAT_0021c5a3 = DAT_0021c5a3 ^ 200;
                            DAT_0021c5a2 = DAT_0021c5a2 ^ 200;
                            DAT_0021c598 = DAT_0021c598 ^ 0xc8c8c8c8c8c8c8c8;
                            DAT_0021f65d = '\x01';
                            lVar1 = 0x73e14054b040d534;
                          }
                          else {
                            lVar1 = 0xa20615309cffb23;
                            if ((lVar3 != -0x19d0964c94255740) &&
                               (lVar1 = lVar3, lVar3 == -0x18e861f5c93196cb)) {
                              DAT_0021c688 = DAT_0021c688 ^ 0xe5e5e5e5e5e5e5e5;
                              DAT_0021f66f = '\x01';
                              lVar1 = 0xcbe129d977a9c9b;
                            }
                          }
                        }
                        else if (lVar3 < -0x14d28ede0695770a) {
                          if (lVar3 == -0x169e5de8b5b34eaa) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f278);
                            lVar1 = 0x3a2dde023315a29f;
                            if (iVar2 != 0) {
                              lVar1 = 0x4b39b2c3428d9a46;
                            }
                          }
                          else if (lVar3 == -0x1591e3279f7c32c1) {
                            DAT_0021c6d0 = DAT_0021c6d0 ^ 0xbe;
                            _DAT_0021c6c0 = _DAT_0021c6c0 ^ 0xbebebebebebebebe;
                            uRam000000000021c6c8 = uRam000000000021c6c8 ^ 0xbebebebebebebebe;
                            DAT_0021f674 = '\x01';
                            lVar1 = -0xd22d2ce2116ed27;
                          }
                        }
                        else if (lVar3 == -0x14d28ede0695770a) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f29c);
                          lVar1 = -0x72c3888b87c8758a;
                          if (iVar2 != 0) {
                            lVar1 = -0x7faf6ff04766bbe;
                          }
                        }
                        else {
                          lVar1 = 0x2077d8723f4314a0;
                          if ((lVar3 != -0x148fef7dd3f3ba45) &&
                             (lVar1 = lVar3, lVar3 == -0x1117fc2bb64012c4)) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f314);
                            lVar1 = -0x6f9fda3975f3d903;
                            if (iVar2 != 0) {
                              lVar1 = -0x2466dc5cb7a7144e;
                            }
                          }
                        }
                      }
                      else if (lVar3 < -0x3e0f6839649389f) {
                        if (lVar3 < -0x89aa9ef4ac76973) {
                          if (lVar3 < -0xd22d2ce2116ed27) {
                            if (lVar3 < -0xe0bc73c99a6bea6) {
                              if (lVar3 == -0xefd732dabacd85f) {
                                DAT_0021f2e8 = 0;
                                lVar1 = -0x3e6fd36519f64289;
                              }
                              else if (lVar3 == -0xe6608d400fabd55) {
                                lVar1 = 0x6f6c4a39061350c1;
                              }
                            }
                            else if (lVar3 == -0xe0bc73c99a6bea6) {
                              lVar1 = -0x60d25ac82ad98865;
                              if (DAT_0021f661 == '\0') {
                                lVar1 = 0x2838a2ef0a868f0e;
                              }
                            }
                            else if (lVar3 == -0xdf58548c4283e8b) {
                              lVar1 = 0x7338f0dc0f0da651;
                            }
                          }
                          else if (lVar3 < -0xbd3ec96aa326155) {
                            if (lVar3 == -0xd22d2ce2116ed27) {
                              DAT_0021f2ec = 0;
                              lVar1 = -0x652449358ac69ca6;
                            }
                            else if (lVar3 == -0xd09624d72293f80) {
                              DAT_0021c6a4 = DAT_0021c6a4 ^ 0x67;
                              DAT_0021c6a5 = DAT_0021c6a5 ^ 0x67;
                              DAT_0021c6a7 = DAT_0021c6a7 ^ 0x67;
                              DAT_0021c6a6 = DAT_0021c6a6 ^ 0x67;
                              DAT_0021c6a8 = DAT_0021c6a8 ^ 0x67;
                              DAT_0021f671 = '\x01';
                              lVar1 = -0x557f2d8ac002ee5b;
                            }
                          }
                          else {
                            lVar1 = 0x562880e9cfa347ff;
                            if (lVar3 != -0xbd3ec96aa326155) {
                              if (lVar3 == -0xb0a342a0a30b8d5) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f26c);
                                lVar1 = -0x480adf0aa46d36d7;
                                if (iVar2 != 0) {
                                  lVar1 = -0x692480724dd609ae;
                                }
                              }
                              else {
                                lVar1 = lVar3;
                                if (lVar3 == -0xaa7a11fd303e835) {
                                  DAT_0021c6b4 = DAT_0021c6b4 ^ 0xe7;
                                  DAT_0021c6b5 = DAT_0021c6b5 ^ 0xe7;
                                  DAT_0021c6b6 = DAT_0021c6b6 ^ 0xe7;
                                  DAT_0021c6b7 = DAT_0021c6b7 ^ 0xe7;
                                  DAT_0021f673 = '\x01';
                                  lVar1 = -0xefd732dabacd85f;
                                }
                              }
                            }
                          }
                        }
                        else if (lVar3 < -0x5c96f222397d01e) {
                          if (lVar3 < -0x7faf6ff04766bbe) {
                            lVar1 = 0x3700d863e1ecac53;
                            if ((lVar3 != -0x89aa9ef4ac76973) &&
                               (lVar1 = lVar3, lVar3 == -0x85ccf70df60aaa2)) {
                              DAT_0021c798 = DAT_0021c798 ^ 0x18;
                              DAT_0021c790 = DAT_0021c790 ^ 0x1818181818181818;
                              DAT_0021f67e = '\x01';
                              lVar1 = -0x4c6d05ef267c9b72;
                            }
                          }
                          else {
                            lVar1 = -0x14d28ede0695770a;
                            if (lVar3 != -0x7faf6ff04766bbe) {
                              if (lVar3 == -0x7d2591ecac2de57) {
                                DAT_0021f2f4 = 0;
                                lVar1 = 0x750970a731313d02;
                              }
                              else {
                                lVar1 = lVar3;
                                if (lVar3 == -0x615ed7b9f53ad6c) {
                                  _DAT_0021c720 = _DAT_0021c720 ^ 0x2f2f2f2f2f2f2f2f;
                                  uRam000000000021c728 = uRam000000000021c728 ^ 0x2f2f2f2f2f2f2f2f;
                                  DAT_0021f678 = '\x01';
                                  lVar1 = 0x59297a35bbd835d1;
                                }
                              }
                            }
                          }
                        }
                        else if (lVar3 < -0x5a4542d0374932a) {
                          if (lVar3 == -0x5c96f222397d01e) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f274);
                            lVar1 = 0x4de68fcd8d8bb4ac;
                            if (iVar2 != 0) {
                              lVar1 = 0x20e28591e6816f39;
                            }
                          }
                          else if (lVar3 == -0x5c6e1ac561874dd) {
                            lVar1 = 0x7b7c2780ea5ac895;
                          }
                        }
                        else {
                          lVar1 = 0x3c5d98bd1176cc0a;
                          if (lVar3 != -0x5a4542d0374932a) {
                            if (lVar3 == -0x4d3eb90b44b5c4e) {
                              DAT_0021f274 = 0;
                              lVar1 = -0x75258739fc8d4bd6;
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == -0x3ef82a2f333d7c7) {
                                DAT_0021f320 = 0;
                                lVar1 = 0xa20615309cffb23;
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 < 0x2e09cdf6c402c53) {
                        if (lVar3 < -0x10b99b2534a8162) {
                          if (lVar3 < -0x1dfcbefb1c4629d) {
                            if (lVar3 == -0x3e0f6839649389f) {
                              DAT_0021c5f8 = DAT_0021c5f8 ^ 0xfa;
                              DAT_0021c5f9 = DAT_0021c5f9 ^ 0xfa;
                              DAT_0021c5fb = DAT_0021c5fb ^ 0xfa;
                              DAT_0021c5fa = DAT_0021c5fa ^ 0xfa;
                              DAT_0021c5f0 = DAT_0021c5f0 ^ 0xfafafafafafafafa;
                              DAT_0021f666 = '\x01';
                              lVar1 = -0x70a23fb5a0725721;
                            }
                            else if (lVar3 == -0x3837e77210006d6) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f2c8);
                              lVar1 = 0x38a0342f2452203f;
                              if (iVar2 != 0) {
                                lVar1 = -0x42a7ee31d751e849;
                              }
                            }
                          }
                          else if (lVar3 == -0x1dfcbefb1c4629d) {
                            DAT_0021c778 = DAT_0021c778 ^ 0xdd;
                            DAT_0021c779 = DAT_0021c779 ^ 0xdd;
                            DAT_0021c77a = DAT_0021c77a ^ 0xdd;
                            DAT_0021c77b = DAT_0021c77b ^ 0xdd;
                            DAT_0021c77c = DAT_0021c77c ^ 0xdd;
                            DAT_0021c77d = DAT_0021c77d ^ 0xdd;
                            _DAT_0021c760 = _DAT_0021c760 ^ 0xdddddddddddddddd;
                            uRam000000000021c768 = uRam000000000021c768 ^ 0xdddddddddddddddd;
                            DAT_0021c77e = DAT_0021c77e ^ 0xdd;
                            DAT_0021c770 = DAT_0021c770 ^ 0xdddddddddddddddd;
                            DAT_0021f67c = '\x01';
                            lVar1 = -0x26a752ef496f019f;
                          }
                          else if (lVar3 == -0x1a74c2b48399993) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f294);
                            lVar1 = 0x58d00b9c91e999ec;
                            if (iVar2 != 0) {
                              lVar1 = -0x318d4506729b2d57;
                            }
                          }
                          else if (lVar3 == -0x14e1167afa24735) {
                            lVar1 = -0x34dc70f496529431;
                          }
                        }
                        else if (lVar3 < 0x136744913631228) {
                          lVar1 = 0xb833f5bfd455921;
                          if ((lVar3 != -0x10b99b2534a8162) &&
                             (lVar1 = lVar3, lVar3 == -0x109acc223444f06)) {
                            DAT_0021c750 = DAT_0021c750 ^ 0x56;
                            DAT_0021c751 = DAT_0021c751 ^ 0x56;
                            DAT_0021c752 = DAT_0021c752 ^ 0x56;
                            DAT_0021c753 = DAT_0021c753 ^ 0x56;
                            DAT_0021c755 = DAT_0021c755 ^ 0x56;
                            DAT_0021c754 = DAT_0021c754 ^ 0x56;
                            DAT_0021c756 = DAT_0021c756 ^ 0x56;
                            DAT_0021c748 = DAT_0021c748 ^ 0x5656565656565656;
                            DAT_0021f67a = '\x01';
                            lVar1 = 0x404919e289992c5c;
                          }
                        }
                        else if (lVar3 == 0x136744913631228) {
                          DAT_0021f298 = 0;
                          lVar1 = -0x1a74c2b48399993;
                        }
                        else {
                          lVar1 = 0x7686cf23951b1170;
                          if ((lVar3 != 0x2237fe77884b290) &&
                             (lVar1 = lVar3, lVar3 == 0x238f37a8b427e8e)) {
                            lVar1 = -0x67a37e469c840bd7;
                            if (DAT_0021f662 == '\0') {
                              lVar1 = -0x3f1d3768cf06784d;
                            }
                          }
                        }
                      }
                      else if (lVar3 < 0x45d825d96e9007b) {
                        if (lVar3 < 0x39907d73a374a63) {
                          lVar1 = -0x70a23fb5a0725721;
                          if ((lVar3 != 0x2e09cdf6c402c53) &&
                             (lVar1 = lVar3, lVar3 == 0x397ad2c3ff0f0bf)) {
                            lVar1 = -0x3548597888a00189;
                            if (DAT_0021f671 == '\0') {
                              lVar1 = -0xd09624d72293f80;
                            }
                          }
                        }
                        else if (lVar3 == 0x39907d73a374a63) {
                          DAT_0021c6a0 = DAT_0021c6a0 ^ 0x27;
                          DAT_0021c6a1 = DAT_0021c6a1 ^ 0x27;
                          _DAT_0021c690 = _DAT_0021c690 ^ 0x2727272727272727;
                          uRam000000000021c698 = uRam000000000021c698 ^ 0x2727272727272727;
                          DAT_0021f670 = '\x01';
                          lVar1 = 0x37ea9d36fbf80e9c;
                        }
                        else if (lVar3 == 0x42ce619d6122ad9) {
                          lVar1 = -0x14e1167afa24735;
                          if (DAT_0021f67b == '\0') {
                            lVar1 = 0x18bf94b6068e3e2f;
                          }
                        }
                        else if (lVar3 == 0x441d9a5d50b75e9) {
                          lVar1 = -0x25720dbae0493687;
                        }
                      }
                      else if (lVar3 < 0x57baa8288e3b571) {
                        if (lVar3 == 0x45d825d96e9007b) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f2d0);
                          lVar1 = 0x742a33def67e8c41;
                          if (iVar2 != 0) {
                            lVar1 = 0x185df96b4748bc1e;
                          }
                        }
                        else if (lVar3 == 0x4fb67da29d99498) {
                          lVar1 = 0x43fed8c6fe657b80;
                        }
                      }
                      else if (lVar3 == 0x57baa8288e3b571) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f300);
                        lVar1 = 0x2300c3606cbb46b0;
                        if (iVar2 != 0) {
                          lVar1 = -0x612be10389bc53aa;
                        }
                      }
                      else {
                        lVar1 = -0x4d3eb90b44b5c4e;
                        if ((lVar3 != 0x595f48e008d0488) &&
                           (lVar1 = lVar3, lVar3 == 0x85ae5a0f26fdf1c)) {
                          lVar1 = -0x75258739fc8d4bd6;
                        }
                      }
                    }
                    if (0x44f5c44a12f7af6c < lVar3) break;
                    if (lVar3 < 0x2603f539d2f00865) {
                      if (lVar3 < 0x185df96b4748bc1e) {
                        if (lVar3 < 0x110e2f5113b4f2ea) {
                          if (lVar3 < 0xcbe129d977a9c9b) {
                            if (lVar3 < 0xad7aef6c6ca3f7e) {
                              if (lVar3 == 0xa20615309cffb23) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f31c);
                                lVar1 = 0x3d41561d37e7646c;
                                if (iVar2 != 0) {
                                  lVar1 = -0x19d0964c94255740;
                                }
                              }
                              else if (lVar3 == 0xa48f18577c6a5d7) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f324);
                                lVar1 = 0x52f7f5a6e940dd69;
                                if (iVar2 != 0) {
                                  lVar1 = 0x6e38425402b87c60;
                                }
                              }
                            }
                            else {
                              lVar1 = -0x3c821466fea7a33a;
                              if ((lVar3 != 0xad7aef6c6ca3f7e) &&
                                 (lVar1 = lVar3, lVar3 == 0xb833f5bfd455921)) {
                                iVar2 = FUN_00212730(0,1,&DAT_0021f288);
                                lVar1 = 0x263c985aebcf8746;
                                if (iVar2 != 0) {
                                  lVar1 = -0x10b99b2534a8162;
                                }
                              }
                            }
                          }
                          else if (lVar3 < 0x1025ee6ff9ba96d6) {
                            if (lVar3 == 0xcbe129d977a9c9b) {
                              DAT_0021f2d8 = 0;
                              lVar1 = -0x4b8d90a9e74b16c3;
                            }
                            else if (lVar3 == 0x10146ef07cbd8c0b) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f280);
                              lVar1 = -0x6f94c64abcaf757e;
                              if (iVar2 != 0) {
                                lVar1 = 0x109492baab331277;
                              }
                            }
                          }
                          else if (lVar3 == 0x1025ee6ff9ba96d6) {
                            DAT_0021f278 = 0;
                            lVar1 = -0x5c96f222397d01e;
                          }
                          else if (lVar3 == 0x105288b97b221284) {
                            DAT_0021f29c = 0;
                            lVar1 = 0x16b83d185a0215ae;
                          }
                          else if (lVar3 == 0x109492baab331277) {
                            lVar1 = 0x10146ef07cbd8c0b;
                          }
                        }
                        else if (lVar3 < 0x16b83d185a0215ae) {
                          if (lVar3 < 0x13de041e2ed3ab88) {
                            if (lVar3 == 0x110e2f5113b4f2ea) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f328);
                              lVar1 = -0x4e99759cdcbeb179;
                              if (iVar2 != 0) {
                                lVar1 = -0x7f65f90fe7a5b994;
                              }
                            }
                            else if (lVar3 == 0x12307e9c3b7f1fe2) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f2d8);
                              lVar1 = 0x24eedfed5dd6a94c;
                              if (iVar2 != 0) {
                                lVar1 = -0x3b4a46ae7fe063db;
                              }
                            }
                          }
                          else if (lVar3 == 0x13de041e2ed3ab88) {
                            lVar1 = -0x4daedf960cb0556c;
                            if (DAT_0021f678 == '\0') {
                              lVar1 = -0x615ed7b9f53ad6c;
                            }
                          }
                          else {
                            lVar1 = -0x3d00e7c1a98d544d;
                            if ((lVar3 != 0x14abf41aa72e58d3) &&
                               (lVar1 = lVar3, lVar3 == 0x16b7e11e22c9a791)) {
                              _DAT_0021c700 = _DAT_0021c700 ^ 0xfdfdfdfdfdfdfdfd;
                              uRam000000000021c708 = uRam000000000021c708 ^ 0xfdfdfdfdfdfdfdfd;
                              DAT_0021f676 = '\x01';
                              lVar1 = -0x7d2591ecac2de57;
                            }
                          }
                        }
                        else if (lVar3 < 0x17e81e8402442ee4) {
                          if (lVar3 == 0x16b83d185a0215ae) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f298);
                            lVar1 = 0x63cd280170834625;
                            if (iVar2 != 0) {
                              lVar1 = -0x22ea30f1a32f3c73;
                            }
                          }
                          else if (lVar3 == 0x173d6f565b9dbeb7) {
                            lVar1 = 0x4c5d1678c64f7f82;
                          }
                        }
                        else {
                          lVar1 = 0x1025ee6ff9ba96d6;
                          if (lVar3 != 0x17e81e8402442ee4) {
                            if (lVar3 == 0x18139e254339c829) {
                              lVar1 = -0x64a1acccc4343965;
                              if (DAT_0021f65a == '\0') {
                                lVar1 = 0x1953a628a98e49d0;
                              }
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x181a50fb70e21de9) {
                                DAT_0021f318 = 0;
                                lVar1 = -0x1117fc2bb64012c4;
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 < 0x2077d8723f4314a0) {
                        if (lVar3 < 0x1a55ce8c23c8c0b4) {
                          if (lVar3 < 0x1953a628a98e49d0) {
                            lVar1 = 0x45d825d96e9007b;
                            if ((lVar3 != 0x185df96b4748bc1e) &&
                               (lVar1 = lVar3, lVar3 == 0x18bf94b6068e3e2f)) {
                              DAT_0021c758 = DAT_0021c758 ^ 0xc2;
                              DAT_0021c759 = DAT_0021c759 ^ 0xc2;
                              DAT_0021f67b = '\x01';
                              lVar1 = -0x34dc70f496529431;
                            }
                          }
                          else if (lVar3 == 0x1953a628a98e49d0) {
                            DAT_0021c560 = DAT_0021c560 ^ 0x69;
                            DAT_0021c561 = DAT_0021c561 ^ 0x69;
                            DAT_0021c563 = DAT_0021c563 ^ 0x69;
                            DAT_0021c562 = DAT_0021c562 ^ 0x69;
                            _DAT_0021c550 = _DAT_0021c550 ^ 0x6969696969696969;
                            uRam000000000021c558 = uRam000000000021c558 ^ 0x6969696969696969;
                            DAT_0021f65a = '\x01';
                            lVar1 = -0x70849a05dd3fb1b1;
                          }
                          else if (lVar3 == 0x19d59a6c6692205a) {
                            lVar1 = 0x44f5c44a12f7af6d;
                          }
                        }
                        else if (lVar3 < 0x1abeea6c781d215c) {
                          if (lVar3 == 0x1a55ce8c23c8c0b4) {
                            lVar1 = 0x6470604c4b80fa6b;
                            if (DAT_0021f658 == '\0') {
                              lVar1 = -0x21ae77b745f40c1d;
                            }
                          }
                          else if (lVar3 == 0x1aa368795a7677d0) {
                            lVar1 = 0x7aa16fa1319352fb;
                          }
                        }
                        else if (lVar3 == 0x1abeea6c781d215c) {
                          DAT_0021c7e8 = DAT_0021c7e8 ^ 0x2c;
                          DAT_0021c7e9 = DAT_0021c7e9 ^ 0x2c;
                          DAT_0021c7eb = DAT_0021c7eb ^ 0x2c;
                          DAT_0021c7ea = DAT_0021c7ea ^ 0x2c;
                          DAT_0021c7e0 = DAT_0021c7e0 ^ 0x2c2c2c2c2c2c2c2c;
                          DAT_0021f683 = '\x01';
                          lVar1 = 0x43fed8c6fe657b80;
                        }
                        else {
                          lVar1 = 0x181a50fb70e21de9;
                          if ((lVar3 != 0x1b95a2df10099eeb) &&
                             (lVar1 = lVar3, lVar3 == 0x1fac05b121d3bfea)) {
                            lVar1 = 0x30501dca498a3b0c;
                          }
                        }
                      }
                      else if (lVar3 < 0x235a65fff5abe9b6) {
                        if (lVar3 < 0x2131f7f6f40385e5) {
                          if (lVar3 == 0x2077d8723f4314a0) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f2a4);
                            lVar1 = 0x238f37a8b427e8e;
                            if (iVar2 != 0) {
                              lVar1 = -0x148fef7dd3f3ba45;
                            }
                          }
                          else if (lVar3 == 0x20e28591e6816f39) {
                            lVar1 = -0x5c96f222397d01e;
                          }
                        }
                        else if (lVar3 == 0x2131f7f6f40385e5) {
                          DAT_0021c800 = DAT_0021c800 ^ 0xfe;
                          DAT_0021c801 = DAT_0021c801 ^ 0xfe;
                          DAT_0021c803 = DAT_0021c803 ^ 0xfe;
                          DAT_0021c804 = DAT_0021c804 ^ 0xfe;
                          DAT_0021c802 = DAT_0021c802 ^ 0xfe;
                          _DAT_0021c7f0 = _DAT_0021c7f0 ^ 0xfefefefefefefefe;
                          uRam000000000021c7f8 = uRam000000000021c7f8 ^ 0xfefefefefefefefe;
                          DAT_0021f684 = '\x01';
                          lVar1 = 0x62161c6952797242;
                        }
                        else if (lVar3 == 0x2300c3606cbb46b0) {
                          lVar1 = 0x351c7b17b170e7c4;
                          if (DAT_0021f679 == '\0') {
                            lVar1 = -0x360879df266284cb;
                          }
                        }
                        else if (lVar3 == 0x230839c40ecdc0b4) {
                          DAT_0021c7c8 = DAT_0021c7c8 ^ 0x48;
                          _DAT_0021c7b0 = _DAT_0021c7b0 ^ 0x4848484848484848;
                          uRam000000000021c7b8 = uRam000000000021c7b8 ^ 0x4848484848484848;
                          DAT_0021c7c0 = DAT_0021c7c0 ^ 0x4848484848484848;
                          DAT_0021f680 = '\x01';
                          lVar1 = -0x7f8996eb0ce6b4fc;
                        }
                      }
                      else if (lVar3 < 0x247512c793575b34) {
                        lVar1 = 0x5bd2bf8a7f474658;
                        if ((lVar3 != 0x235a65fff5abe9b6) &&
                           (lVar1 = lVar3, lVar3 == 0x2420de8c91afbcd7)) {
                          lVar1 = -0x7a1ec83f99c8d67f;
                          if (DAT_0021f665 == '\0') {
                            lVar1 = 0x376acc1cf306ad21;
                          }
                        }
                      }
                      else if (lVar3 == 0x247512c793575b34) {
                        DAT_0021c634 = DAT_0021c634 ^ 0x54;
                        DAT_0021c635 = DAT_0021c635 ^ 0x54;
                        DAT_0021c636 = DAT_0021c636 ^ 0x54;
                        DAT_0021c637 = DAT_0021c637 ^ 0x54;
                        DAT_0021f66a = '\x01';
                        lVar1 = -0x5480fe589d508df0;
                      }
                      else {
                        lVar1 = -0x5480fe589d508df0;
                        if ((lVar3 != 0x24a50899c1ddce34) &&
                           (lVar1 = lVar3, lVar3 == 0x24eedfed5dd6a94c)) {
                          lVar1 = 0x673ef0a5a79b4d28;
                          if (DAT_0021f66f == '\0') {
                            lVar1 = -0x18e861f5c93196cb;
                          }
                        }
                      }
                    }
                    else if (lVar3 < 0x369ba09d5d0a62b2) {
                      if (lVar3 < 0x2b65c233f1ca04ee) {
                        if (lVar3 < 0x26edcd1f6fff8715) {
                          if (lVar3 < 0x263c985aebcf8746) {
                            lVar1 = -0xd22d2ce2116ed27;
                            if ((lVar3 != 0x2603f539d2f00865) &&
                               (lVar1 = lVar3, lVar3 == 0x260dc1bce5e4c97f)) {
                              lVar1 = 0x105288b97b221284;
                            }
                          }
                          else if (lVar3 == 0x263c985aebcf8746) {
                            lVar1 = -0x520b46a94cb5dced;
                            if (DAT_0021f65b == '\0') {
                              lVar1 = 0x6670d371c1449894;
                            }
                          }
                          else if (lVar3 == 0x26c3a23cbeeb6222) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f320);
                            lVar1 = -0x77155227c6519bec;
                            if (iVar2 != 0) {
                              lVar1 = 0x5a7a8231d437adb4;
                            }
                          }
                        }
                        else if (lVar3 < 0x29be0a2244b3fc65) {
                          lVar1 = 0x37ea9d36fbf80e9c;
                          if ((lVar3 != 0x26edcd1f6fff8715) &&
                             (lVar1 = lVar3, lVar3 == 0x2838a2ef0a868f0e)) {
                            DAT_0021c5c0 = DAT_0021c5c0 ^ 0xc5;
                            DAT_0021c5c1 = DAT_0021c5c1 ^ 0xc5;
                            DAT_0021c5c3 = DAT_0021c5c3 ^ 0xc5;
                            DAT_0021c5c2 = DAT_0021c5c2 ^ 0xc5;
                            DAT_0021c5c4 = DAT_0021c5c4 ^ 0xc5;
                            DAT_0021c5c5 = DAT_0021c5c5 ^ 0xc5;
                            DAT_0021c5b8 = DAT_0021c5b8 ^ 0xc5c5c5c5c5c5c5c5;
                            DAT_0021f661 = '\x01';
                            lVar1 = -0x2111fd8668cabe65;
                          }
                        }
                        else if (lVar3 == 0x29be0a2244b3fc65) {
                          DAT_0021c5ac = DAT_0021c5ac ^ 0x44;
                          DAT_0021c5ad = DAT_0021c5ad ^ 0x44;
                          DAT_0021c5ae = DAT_0021c5ae ^ 0x44;
                          DAT_0021c5b0 = DAT_0021c5b0 ^ 0x44;
                          DAT_0021c5af = DAT_0021c5af ^ 0x44;
                          DAT_0021c5b2 = DAT_0021c5b2 ^ 0x44;
                          DAT_0021c5b1 = DAT_0021c5b1 ^ 0x44;
                          DAT_0021f65f = '\x01';
                          lVar1 = 0x136744913631228;
                        }
                        else if (lVar3 == 0x2a5cd955cec1984e) {
                          DAT_0021f270 = 0;
                          lVar1 = -0xb0a342a0a30b8d5;
                        }
                        else if (lVar3 == 0x2b20e60565895e22) {
                          lVar1 = 0x6658bc9e471d531f;
                        }
                      }
                      else if (lVar3 < 0x303158640ab3d4cb) {
                        if (lVar3 < 0x2bdebd7966b0772c) {
                          if (lVar3 == 0x2b65c233f1ca04ee) {
                            lVar1 = 0x2b20e60565895e22;
                            if (DAT_0021f66c == '\0') {
                              lVar1 = 0x65160d13dfc5774e;
                            }
                          }
                          else if (lVar3 == 0x2bc75a8f247b8672) {
                            DAT_0021c590 = DAT_0021c590 ^ 0x44;
                            DAT_0021c588 = DAT_0021c588 ^ 0x4444444444444444;
                            DAT_0021f65c = '\x01';
                            lVar1 = 0x7bd6326186813957;
                          }
                        }
                        else {
                          lVar1 = -0x6723f046c01d6d6c;
                          if (lVar3 != 0x2bdebd7966b0772c) {
                            if (lVar3 == 0x2dbc4040678434c0) {
                              DAT_0021c718 = DAT_0021c718 ^ 0x28;
                              DAT_0021c719 = DAT_0021c719 ^ 0x28;
                              DAT_0021c710 = DAT_0021c710 ^ 0x2828282828282828;
                              DAT_0021f677 = '\x01';
                              lVar1 = 0x56def783efe8a5f9;
                            }
                            else {
                              lVar1 = lVar3;
                              if (lVar3 == 0x2ff59f659a6b122a) {
                                DAT_0021f2bc = 0;
                                lVar1 = -0x58fa3929d0f15b5a;
                              }
                            }
                          }
                        }
                      }
                      else if (lVar3 < 0x32ad496de0f70aeb) {
                        lVar1 = -0x68fd099714d73b0f;
                        if ((lVar3 != 0x303158640ab3d4cb) &&
                           (lVar1 = lVar3, lVar3 == 0x30501dca498a3b0c)) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f2e0);
                          lVar1 = 0x397ad2c3ff0f0bf;
                          if (iVar2 != 0) {
                            lVar1 = 0x1fac05b121d3bfea;
                          }
                        }
                      }
                      else {
                        lVar1 = -0x7d2591ecac2de57;
                        if (((lVar3 != 0x32ad496de0f70aeb) &&
                            (lVar1 = -0x1cd7edc4156ccd1b, lVar3 != 0x351c7b17b170e7c4)) &&
                           (lVar1 = lVar3, lVar3 == 0x358a77dfff6b8627)) {
                          DAT_0021f26c = 0;
                          lVar1 = 0x43607c335a359f49;
                        }
                      }
                    }
                    else if (lVar3 < 0x3d41561d37e7646c) {
                      if (lVar3 < 0x38a0342f2452203f) {
                        if (lVar3 < 0x370651321b939f85) {
                          if (lVar3 == 0x369ba09d5d0a62b2) {
                            DAT_0021f280 = 0;
                            lVar1 = 0x3c5d98bd1176cc0a;
                          }
                          else if (lVar3 == 0x3700d863e1ecac53) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f32c);
                            lVar1 = 0x6f854725e3e828a1;
                            if (iVar2 != 0) {
                              lVar1 = -0x5bcc0fb99f955b02;
                            }
                          }
                        }
                        else if (lVar3 == 0x370651321b939f85) {
                          DAT_0021f294 = 0;
                          lVar1 = 0x44f5c44a12f7af6d;
                        }
                        else if (lVar3 == 0x376acc1cf306ad21) {
                          DAT_0021c5e8 = DAT_0021c5e8 ^ 0x9e9e9e9e9e9e9e9e;
                          DAT_0021f665 = '\x01';
                          lVar1 = 0x49ac3a6a4504c820;
                        }
                        else if (lVar3 == 0x37ea9d36fbf80e9c) {
                          DAT_0021f2dc = 0;
                          lVar1 = 0x12307e9c3b7f1fe2;
                        }
                      }
                      else if (lVar3 < 0x3a6c70104bd02c54) {
                        if (lVar3 == 0x38a0342f2452203f) {
                          lVar1 = -0x5a86496479c514ee;
                          if (DAT_0021f66b == '\0') {
                            lVar1 = 0x64e712ef5aeab8d7;
                          }
                        }
                        else if (lVar3 == 0x3a2dde023315a29f) {
                          lVar1 = 0x17e81e8402442ee4;
                          if (DAT_0021f657 == '\0') {
                            lVar1 = 0x7911c11cca00963a;
                          }
                        }
                      }
                      else {
                        lVar1 = 0x7bd6326186813957;
                        if (lVar3 != 0x3a6c70104bd02c54) {
                          if (lVar3 == 0x3c5d98bd1176cc0a) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f27c);
                            lVar1 = 0x1a55ce8c23c8c0b4;
                            if (iVar2 != 0) {
                              lVar1 = -0x5a4542d0374932a;
                            }
                          }
                          else {
                            lVar1 = lVar3;
                            if (lVar3 == 0x3cc2b002c31debd9) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f2f4);
                              lVar1 = 0x73a37513af9b111a;
                              if (iVar2 != 0) {
                                lVar1 = -0x57d79804f455e507;
                              }
                            }
                          }
                        }
                      }
                    }
                    else if (lVar3 < 0x43607c335a359f49) {
                      if (lVar3 < 0x3de750a009e6c9b3) {
                        if (lVar3 == 0x3d41561d37e7646c) {
                          lVar1 = -0x244ece57301c7926;
                          if (DAT_0021f680 == '\0') {
                            lVar1 = 0x230839c40ecdc0b4;
                          }
                        }
                        else if (lVar3 == 0x3de593aa00af5ee6) {
                          lVar1 = -0xdf58548c4283e8b;
                          if (DAT_0021f67d == '\0') {
                            lVar1 = -0x52c695b63541a536;
                          }
                        }
                      }
                      else if (lVar3 == 0x3de750a009e6c9b3) {
                        DAT_0021c5a4 = DAT_0021c5a4 ^ 0xcb;
                        DAT_0021c5a5 = DAT_0021c5a5 ^ 0xcb;
                        DAT_0021c5a6 = DAT_0021c5a6 ^ 0xcb;
                        DAT_0021c5a8 = DAT_0021c5a8 ^ 0xcb;
                        DAT_0021c5a7 = DAT_0021c5a7 ^ 0xcb;
                        DAT_0021c5aa = DAT_0021c5aa ^ 0xcb;
                        DAT_0021c5a9 = DAT_0021c5a9 ^ 0xcb;
                        DAT_0021f65e = '\x01';
                        lVar1 = 0x370651321b939f85;
                      }
                      else if (lVar3 == 0x3ed36176fa9f74fd) {
                        DAT_0021c7dc = DAT_0021c7dc ^ 0x58;
                        DAT_0021c7dd = DAT_0021c7dd ^ 0x58;
                        DAT_0021f682 = '\x01';
                        lVar1 = 0x5709b4f82956ae67;
                      }
                      else if (lVar3 == 0x404919e289992c5c) {
                        DAT_0021f304 = 0;
                        lVar1 = 0x57baa8288e3b571;
                      }
                    }
                    else if (lVar3 < 0x43fed8c6fe657b80) {
                      if (lVar3 == 0x43607c335a359f49) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f264);
                        lVar1 = -0x6d488e375e46e850;
                        if (iVar2 != 0) {
                          lVar1 = 0x72faaff1a9ce5774;
                        }
                      }
                      else if (lVar3 == 0x43a6abb0150d99f6) {
                        lVar1 = -0x56878dbe0525fc4a;
                      }
                    }
                    else if (lVar3 == 0x43fed8c6fe657b80) {
                      DAT_0021f328 = 0;
                      lVar1 = 0xa48f18577c6a5d7;
                    }
                    else if (lVar3 == 0x447b529094ff9c42) {
                      lVar1 = -0x477d0e89efc4e7a7;
                      if (DAT_0021f673 == '\0') {
                        lVar1 = -0xaa7a11fd303e835;
                      }
                    }
                    else if (lVar3 == 0x44c0c2ad58c6ebb7) {
                      DAT_0021f2d0 = 0;
                      lVar1 = -0x56878dbe0525fc4a;
                    }
                  }
                  if (lVar3 < 0x6670d371c1449894) break;
                  if (lVar3 < 0x742a33def67e8c41) {
                    if (lVar3 < 0x6f14cee41c8c1fb6) {
                      if (lVar3 < 0x6a0ef01e0da8d877) {
                        if (lVar3 < 0x68e68fd2e8f90651) {
                          if (lVar3 == 0x6670d371c1449894) {
                            DAT_0021c580 = DAT_0021c580 ^ 0x1a;
                            _DAT_0021c570 = _DAT_0021c570 ^ 0x1a1a1a1a1a1a1a1a;
                            uRam000000000021c578 = uRam000000000021c578 ^ 0x1a1a1a1a1a1a1a1a;
                            DAT_0021f65b = '\x01';
                            lVar1 = -0x7badd5647b20e843;
                          }
                          else if (lVar3 == 0x673ef0a5a79b4d28) {
                            lVar1 = 0xcbe129d977a9c9b;
                          }
                        }
                        else {
                          lVar1 = 0x72955fd62f07f398;
                          if ((lVar3 != 0x68e68fd2e8f90651) &&
                             (lVar1 = lVar3, lVar3 == 0x691fd7f9e13e9c08)) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f2b4);
                            lVar1 = 0x7fd09332e2d07371;
                            if (iVar2 != 0) {
                              lVar1 = 0x4b2f2529a6695fc3;
                            }
                          }
                        }
                      }
                      else if (lVar3 < 0x6d2d02c6f6f96199) {
                        lVar1 = 0x7fa34a781a3a0cc7;
                        if ((lVar3 != 0x6a0ef01e0da8d877) &&
                           (lVar1 = lVar3, lVar3 == 0x6cc07a61ed36bcff)) {
                          DAT_0021f2c0 = 0;
                          lVar1 = -0x2db74f82ca284b0f;
                        }
                      }
                      else {
                        lVar1 = 0x136744913631228;
                        if (((lVar3 != 0x6d2d02c6f6f96199) &&
                            (lVar1 = 0xa48f18577c6a5d7, lVar3 != 0x6e38425402b87c60)) &&
                           (lVar1 = lVar3, lVar3 == 0x6e6a2ebf85da81dd)) {
                          DAT_0021f2d4 = 0;
                          lVar1 = 0x45d825d96e9007b;
                        }
                      }
                    }
                    else if (lVar3 < 0x72faaff1a9ce5774) {
                      if (lVar3 < 0x6f854725e3e828a1) {
                        lVar1 = 0x56def783efe8a5f9;
                        if ((lVar3 != 0x6f14cee41c8c1fb6) &&
                           (lVar1 = lVar3, lVar3 == 0x6f6c4a39061350c1)) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f2ac);
                          lVar1 = 0x50e1c3d9bff64f31;
                          if (iVar2 != 0) {
                            lVar1 = -0xe6608d400fabd55;
                          }
                        }
                      }
                      else if (lVar3 == 0x6f854725e3e828a1) {
                        lVar1 = 0x7545218b697b4602;
                        if (DAT_0021f684 == '\0') {
                          lVar1 = 0x2131f7f6f40385e5;
                        }
                      }
                      else {
                        lVar1 = 0x750970a731313d02;
                        if ((lVar3 != 0x724733215e62f77c) &&
                           (lVar1 = lVar3, lVar3 == 0x72955fd62f07f398)) {
                          DAT_0021f2a8 = 0;
                          lVar1 = 0x2077d8723f4314a0;
                        }
                      }
                    }
                    else if (lVar3 < 0x73a37513af9b111a) {
                      lVar1 = 0x43607c335a359f49;
                      if ((lVar3 != 0x72faaff1a9ce5774) &&
                         (lVar1 = lVar3, lVar3 == 0x7338f0dc0f0da651)) {
                        DAT_0021f310 = 0;
                        lVar1 = -0x5c705efcf08c8797;
                      }
                    }
                    else if (lVar3 == 0x73a37513af9b111a) {
                      lVar1 = 0x32ad496de0f70aeb;
                      if (DAT_0021f676 == '\0') {
                        lVar1 = 0x16b7e11e22c9a791;
                      }
                    }
                    else {
                      lVar1 = 0x73e14054b040d534;
                      if ((lVar3 != 0x73c5593a30d75260) &&
                         (lVar1 = lVar3, lVar3 == 0x73e14054b040d534)) {
                        DAT_0021f290 = 0;
                        lVar1 = -0x6723f046c01d6d6c;
                      }
                    }
                  }
                  else if (lVar3 < 0x7aa16fa1319352fb) {
                    if (lVar3 < 0x7545218b697b4602) {
                      if (lVar3 < 0x7467563dffb622a9) {
                        if (lVar3 == 0x742a33def67e8c41) {
                          lVar1 = 0x7bf88f1aaf92759e;
                          if (DAT_0021f66d == '\0') {
                            lVar1 = 0x5e2a911104009fc1;
                          }
                        }
                        else if (lVar3 == 0x7456b4e08246b4be) {
                          lVar1 = -0x5964a74c68451110;
                        }
                      }
                      else if (lVar3 == 0x7467563dffb622a9) {
                        lVar1 = 0x73c5593a30d75260;
                        if (DAT_0021f65d == '\0') {
                          lVar1 = -0x1be3bb16c74d18a7;
                        }
                      }
                      else if (lVar3 == 0x750970a731313d02) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f2f0);
                        lVar1 = -0x63f1b003a0bb72ee;
                        if (iVar2 != 0) {
                          lVar1 = 0x724733215e62f77c;
                        }
                      }
                    }
                    else if (lVar3 < 0x7686cf23951b1170) {
                      lVar1 = 0x62161c6952797242;
                      if ((lVar3 != 0x7545218b697b4602) &&
                         (lVar1 = lVar3, lVar3 == 0x764654ed26e32a74)) {
                        _DAT_0021c600 = _DAT_0021c600 ^ 0x1c1c1c1c1c1c1c1c;
                        uRam000000000021c608 = uRam000000000021c608 ^ 0x1c1c1c1c1c1c1c1c;
                        DAT_0021c610 = DAT_0021c610 ^ 0x1c1c1c1c1c1c1c1c;
                        DAT_0021f667 = '\x01';
                        lVar1 = -0x5964a74c68451110;
                      }
                    }
                    else if (lVar3 == 0x7686cf23951b1170) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f2fc);
                      lVar1 = 0x13de041e2ed3ab88;
                      if (iVar2 != 0) {
                        lVar1 = 0x2237fe77884b290;
                      }
                    }
                    else if (lVar3 == 0x7911c11cca00963a) {
                      DAT_0021c500 = DAT_0021c500 ^ 0x93;
                      DAT_0021c501 = DAT_0021c501 ^ 0x93;
                      DAT_0021c503 = DAT_0021c503 ^ 0x93;
                      DAT_0021c502 = DAT_0021c502 ^ 0x93;
                      _DAT_0021c4f0 = _DAT_0021c4f0 ^ 0x9393939393939393;
                      uRam000000000021c4f8 = uRam000000000021c4f8 ^ 0x9393939393939393;
                      DAT_0021f657 = '\x01';
                      lVar1 = 0x1025ee6ff9ba96d6;
                    }
                    else if (lVar3 == 0x7a372565a97c8dc0) {
                      DAT_0021f2ac = 0;
                      lVar1 = -0x3d00e7c1a98d544d;
                    }
                  }
                  else if (lVar3 < 0x7bd6326186813957) {
                    if (lVar3 < 0x7b799c101741d414) {
                      if (lVar3 == 0x7aa16fa1319352fb) {
                        DAT_0021f2e4 = 0;
                        lVar1 = 0x30501dca498a3b0c;
                      }
                      else if (lVar3 == 0x7b2dd2934db1ef30) {
                        lVar1 = -0x652449358ac69ca6;
                      }
                    }
                    else if (lVar3 == 0x7b799c101741d414) {
                      DAT_0021f2c8 = 0;
                      lVar1 = 0x7fa34a781a3a0cc7;
                    }
                    else if (lVar3 == 0x7b7c2780ea5ac895) {
                      DAT_0021f264 = 0;
                      lVar1 = 0x4c5d1678c64f7f82;
                    }
                    else if (lVar3 == 0x7bbf3290a3bc5a2f) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f2c0);
                      lVar1 = -0x5af27be32d8cb758;
                      if (iVar2 != 0) {
                        lVar1 = -0x2f39b43f64b97746;
                      }
                    }
                  }
                  else if (lVar3 < 0x7fa34a781a3a0cc7) {
                    if (lVar3 == 0x7bd6326186813957) {
                      DAT_0021f28c = 0;
                      lVar1 = 0xb833f5bfd455921;
                    }
                    else if (lVar3 == 0x7bf88f1aaf92759e) {
                      lVar1 = 0x44c0c2ad58c6ebb7;
                    }
                  }
                  else if (lVar3 == 0x7fa34a781a3a0cc7) {
                    iVar2 = FUN_00212730(0,1,&DAT_0021f2c4);
                    lVar1 = -0x6405e0626941147d;
                    if (iVar2 != 0) {
                      lVar1 = 0x6a0ef01e0da8d877;
                    }
                  }
                  else if (lVar3 == 0x7fbe7ed0b2220834) {
                    lVar1 = 0x68e68fd2e8f90651;
                    if (DAT_0021f663 == '\0') {
                      lVar1 = -0x51f060a20b57c52e;
                    }
                  }
                  else if (lVar3 == 0x7fd09332e2d07371) {
                    lVar1 = 0x2e09cdf6c402c53;
                    if (DAT_0021f666 == '\0') {
                      lVar1 = -0x3e0f6839649389f;
                    }
                  }
                }
                if (lVar3 < 0x57c7abc3240175e8) break;
                if (lVar3 < 0x5e2a911104009fc1) {
                  if (lVar3 < 0x5a7a8231d437adb4) {
                    if (lVar3 < 0x58d00b9c91e999ec) {
                      if (lVar3 == 0x57c7abc3240175e8) {
                        DAT_0021c6f0 = DAT_0021c6f0 ^ 0x7c;
                        DAT_0021c6f1 = DAT_0021c6f1 ^ 0x7c;
                        DAT_0021c6f2 = DAT_0021c6f2 ^ 0x7c;
                        _DAT_0021c6e0 = _DAT_0021c6e0 ^ 0x7c7c7c7c7c7c7c7c;
                        uRam000000000021c6e8 = uRam000000000021c6e8 ^ 0x7c7c7c7c7c7c7c7c;
                        DAT_0021f675 = '\x01';
                        lVar1 = -0x1de63f4c41c3910d;
                      }
                      else if (lVar3 == 0x5808b3f2945da450) {
                        lVar1 = 0x3a6c70104bd02c54;
                        if (DAT_0021f65c == '\0') {
                          lVar1 = 0x2bc75a8f247b8672;
                        }
                      }
                    }
                    else if (lVar3 == 0x58d00b9c91e999ec) {
                      lVar1 = -0x4bcd0d339289515d;
                      if (DAT_0021f65e == '\0') {
                        lVar1 = 0x3de750a009e6c9b3;
                      }
                    }
                    else if (lVar3 == 0x59297a35bbd835d1) {
                      DAT_0021f2fc = 0;
                      lVar1 = -0x536c8c3d617b5f6d;
                    }
                  }
                  else if (lVar3 < 0x5ae53e00920b7bff) {
                    lVar1 = 0x26c3a23cbeeb6222;
                    if ((lVar3 != 0x5a7a8231d437adb4) &&
                       (lVar1 = lVar3, lVar3 == 0x5ab159c7a48faee4)) {
                      lVar1 = 0x358a77dfff6b8627;
                    }
                  }
                  else if (lVar3 == 0x5ae53e00920b7bff) {
                    DAT_0021c680 = DAT_0021c680 ^ 0x14;
                    _DAT_0021c670 = _DAT_0021c670 ^ 0x1414141414141414;
                    uRam000000000021c678 = uRam000000000021c678 ^ 0x1414141414141414;
                    DAT_0021f66e = '\x01';
                    lVar1 = 0x6e6a2ebf85da81dd;
                  }
                  else if (lVar3 == 0x5bd2bf8a7f474658) {
                    iVar2 = FUN_00212730(0,1,&DAT_0021f318);
                    lVar1 = -0x6a4959fcb8b4c2d8;
                    if (iVar2 != 0) {
                      lVar1 = 0x235a65fff5abe9b6;
                    }
                  }
                  else if (lVar3 == 0x5de43884d7e33d71) {
                    lVar1 = 0x579cfa6b70cd4f84;
                  }
                }
                else if (lVar3 < 0x646b53d029c41f15) {
                  if (lVar3 < 0x62161c6952797242) {
                    if (lVar3 == 0x5e2a911104009fc1) {
                      DAT_0021c660 = DAT_0021c660 ^ 0xca;
                      DAT_0021c661 = DAT_0021c661 ^ 0xca;
                      DAT_0021c663 = DAT_0021c663 ^ 0xca;
                      DAT_0021c662 = DAT_0021c662 ^ 0xca;
                      DAT_0021c664 = DAT_0021c664 ^ 0xca;
                      DAT_0021c665 = DAT_0021c665 ^ 0xca;
                      DAT_0021c658 = DAT_0021c658 ^ 0xcacacacacacacaca;
                      DAT_0021f66d = '\x01';
                      lVar1 = 0x44c0c2ad58c6ebb7;
                    }
                    else if (lVar3 == 0x5f6e8304fb56eb37) {
                      lVar1 = 0x404919e289992c5c;
                    }
                  }
                  else if (lVar3 == 0x62161c6952797242) {
                    DAT_0021f32c = 0;
                    lVar1 = 0x110e2f5113b4f2ea;
                  }
                  else {
                    lVar1 = -0x1de63f4c41c3910d;
                    if ((lVar3 != 0x6290766201bb019a) &&
                       (lVar1 = lVar3, lVar3 == 0x63cd280170834625)) {
                      lVar1 = 0x6d2d02c6f6f96199;
                      if (DAT_0021f65f == '\0') {
                        lVar1 = 0x29be0a2244b3fc65;
                      }
                    }
                  }
                }
                else if (lVar3 < 0x64e712ef5aeab8d7) {
                  if (lVar3 == 0x646b53d029c41f15) {
                    lVar1 = -0x1fa65aa0c38f1ce6;
                    if (DAT_0021f655 == '\0') {
                      lVar1 = 0x4d730209ff7c01ef;
                    }
                  }
                  else if (lVar3 == 0x6470604c4b80fa6b) {
                    lVar1 = 0x4d125807a33a4c80;
                  }
                }
                else if (lVar3 == 0x64e712ef5aeab8d7) {
                  DAT_0021c640 = DAT_0021c640 ^ 99;
                  DAT_0021c641 = DAT_0021c641 ^ 99;
                  DAT_0021c642 = DAT_0021c642 ^ 99;
                  DAT_0021c644 = DAT_0021c644 ^ 99;
                  DAT_0021c643 = DAT_0021c643 ^ 99;
                  DAT_0021c638 = DAT_0021c638 ^ 0x6363636363636363;
                  DAT_0021f66b = '\x01';
                  lVar1 = 0x7b799c101741d414;
                }
                else if (lVar3 == 0x65160d13dfc5774e) {
                  DAT_0021c650 = DAT_0021c650 ^ 0xe;
                  DAT_0021c651 = DAT_0021c651 ^ 0xe;
                  DAT_0021c653 = DAT_0021c653 ^ 0xe;
                  DAT_0021c652 = DAT_0021c652 ^ 0xe;
                  DAT_0021c648 = DAT_0021c648 ^ 0xe0e0e0e0e0e0e0e;
                  DAT_0021f66c = '\x01';
                  lVar1 = 0x6658bc9e471d531f;
                }
                else if (lVar3 == 0x6658bc9e471d531f) {
                  DAT_0021f2cc = 0;
                  lVar1 = -0x3837e77210006d6;
                }
              }
              if (0x4de68fcd8d8bb4ab < lVar3) break;
              if (lVar3 < 0x4b2f2529a6695fc3) {
                if (lVar3 < 0x47fe4156e210931d) {
                  if (lVar3 == 0x44f5c44a12f7af6d) {
                    iVar2 = FUN_00212730(0,1,&DAT_0021f290);
                    lVar1 = 0x7467563dffb622a9;
                    if (iVar2 != 0) {
                      lVar1 = 0x19d59a6c6692205a;
                    }
                  }
                  else if (lVar3 == 0x463e75a9121552c7) {
                    iVar2 = FUN_00212730(0,1,&DAT_0021f308);
                    lVar1 = 0x42ce619d6122ad9;
                    if (iVar2 != 0) {
                      lVar1 = 0x48593633f15458b8;
                    }
                  }
                }
                else if (lVar3 == 0x47fe4156e210931d) {
                  iVar2 = FUN_00212730(0,1,&DAT_0021f2b0);
                  lVar1 = 0x2420de8c91afbcd7;
                  if (iVar2 != 0) {
                    lVar1 = 0x51c95b8e3d1b7c94;
                  }
                }
                else {
                  lVar1 = 0x463e75a9121552c7;
                  if ((lVar3 != 0x48593633f15458b8) && (lVar1 = lVar3, lVar3 == 0x49ac3a6a4504c820))
                  {
                    DAT_0021f2b0 = 0;
                    lVar1 = 0x6f6c4a39061350c1;
                  }
                }
              }
              else if (lVar3 < 0x4c5d1678c64f7f82) {
                lVar1 = 0x691fd7f9e13e9c08;
                if ((lVar3 != 0x4b2f2529a6695fc3) && (lVar1 = lVar3, lVar3 == 0x4b39b2c3428d9a46)) {
                  lVar1 = -0x169e5de8b5b34eaa;
                }
              }
              else if (lVar3 == 0x4c5d1678c64f7f82) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f25c);
                lVar1 = -0x1f99dc14788c094a;
                if (iVar2 != 0) {
                  lVar1 = 0x173d6f565b9dbeb7;
                }
              }
              else if (lVar3 == 0x4d125807a33a4c80) {
                DAT_0021f27c = 0;
                lVar1 = -0x169e5de8b5b34eaa;
              }
              else if (lVar3 == 0x4d730209ff7c01ef) {
                DAT_0021c4c0 = DAT_0021c4c0 ^ 0x97;
                DAT_0021c4c1 = DAT_0021c4c1 ^ 0x97;
                DAT_0021c4c3 = DAT_0021c4c3 ^ 0x97;
                DAT_0021c4c4 = DAT_0021c4c4 ^ 0x97;
                DAT_0021c4c2 = DAT_0021c4c2 ^ 0x97;
                _DAT_0021c4b0 = _DAT_0021c4b0 ^ 0x9797979797979797;
                uRam000000000021c4b8 = uRam000000000021c4b8 ^ 0x9797979797979797;
                DAT_0021f655 = '\x01';
                lVar1 = 0x2a5cd955cec1984e;
              }
            }
            if (0x54a3aeab5af66f55 < lVar3) break;
            if (lVar3 < 0x50f0df46b7b58366) {
              if (lVar3 == 0x4de68fcd8d8bb4ac) {
                lVar1 = 0x595f48e008d0488;
                if (DAT_0021f656 == '\0') {
                  lVar1 = -0x5b9dc9d29b3f84e1;
                }
              }
              else if (lVar3 == 0x50e1c3d9bff64f31) {
                lVar1 = -0x7f2486022ae05162;
                if (DAT_0021f664 == '\0') {
                  lVar1 = -0x316b119d7dea7f62;
                }
              }
            }
            else if (lVar3 == 0x50f0df46b7b58366) {
              DAT_0021c490 = DAT_0021c490 ^ 0xc5;
              DAT_0021c491 = DAT_0021c491 ^ 0xc5;
              DAT_0021c492 = DAT_0021c492 ^ 0xc5;
              DAT_0021c488 = DAT_0021c488 ^ 0xc5c5c5c5c5c5c5c5;
              DAT_0021f652 = '\x01';
              lVar1 = 0x7b7c2780ea5ac895;
            }
            else {
              lVar1 = 0x47fe4156e210931d;
              if ((lVar3 != 0x51c95b8e3d1b7c94) && (lVar1 = lVar3, lVar3 == 0x52f7f5a6e940dd69)) {
                lVar1 = -0x20aa75f4364a88ff;
                if (DAT_0021f682 == '\0') {
                  lVar1 = 0x3ed36176fa9f74fd;
                }
              }
            }
          }
          if (lVar3 < 0x5709b4f82956ae67) break;
          if (lVar3 == 0x5709b4f82956ae67) {
            DAT_0021f324 = 0;
            lVar1 = 0x26c3a23cbeeb6222;
          }
          else if (lVar3 == 0x579cfa6b70cd4f84) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f284);
            lVar1 = 0x18139e254339c829;
            if (iVar2 != 0) {
              lVar1 = 0x5de43884d7e33d71;
            }
          }
        }
        if (lVar3 != 0x54a3aeab5af66f56) break;
        DAT_0021c5b4 = ~DAT_0021c5b4;
        DAT_0021c5b5 = ~DAT_0021c5b5;
        DAT_0021c5b6 = ~DAT_0021c5b6;
        DAT_0021c5b7 = ~DAT_0021c5b7;
        DAT_0021f660 = '\x01';
        lVar1 = 0x105288b97b221284;
      }
      if (lVar3 != 0x56def783efe8a5f9) break;
      DAT_0021f2f8 = 0;
      lVar1 = 0x3cc2b002c31debd9;
    }
  } while (lVar3 != 0x562880e9cfa347ff);
  DAT_0021f25c = 0;
  local_14b0 = &DAT_0021c5a4;
  local_19c0 = &DAT_0021c4f0;
  local_1cc0 = &DAT_0021c4a0;
  local_fb0 = &DAT_0021c638;
  local_18c0 = &DAT_0021c510;
  local_1c18 = 8;
  local_fa8 = &DAT_0021c648;
  local_17c0 = &DAT_0021c530;
  local_1b18 = 8;
  local_16c0 = &DAT_0021c550;
  local_1a18 = 8;
  uStack_f10 = 0x100000001;
  local_f18 = 0;
  local_1bc0 = &DAT_0021c4b0;
  local_1918 = 8;
  local_12b8 = &DAT_0021c5e8;
  local_11b8 = &DAT_0021c5e8;
  local_ca0 = &DAT_0021c5e8;
  local_1818 = 8;
  local_1718 = 8;
  local_1618 = 8;
  local_bc0 = &DAT_0021c700;
  local_1ac0 = &DAT_0021c4d0;
  local_ba8 = &DAT_0021c710;
  local_15c0 = &DAT_0021c570;
  local_14a8 = &DAT_0021c5ac;
  local_ac0 = &DAT_0021c720;
  local_fa0 = &DAT_0021c658;
  local_ec0 = &DAT_0021c670;
  local_ab8 = &DAT_0021c488;
  local_14c0 = &DAT_0021c598;
  local_13c0 = &DAT_0021c5b8;
  local_9c0 = &DAT_0021c730;
  local_12c8 = 2;
  local_11c8 = 2;
  local_8c0 = &DAT_0021c748;
  local_dc8 = 2;
  uStack_1410 = 0x300000003;
  uStack_1418 = 3;
  local_8b8 = &DAT_0021c758;
  local_13b8 = &DAT_0021c5c8;
  local_10b8 = &DAT_0021c618;
  local_7c0 = &DAT_0021c760;
  local_eb0 = &DAT_0021c618;
  local_e18 = 1;
  local_6c0 = &DAT_0021c790;
  local_13b0 = &DAT_0021c5d0;
  local_5c0 = &DAT_0021c7a0;
  local_10c0 = &DAT_0021c600;
  local_dc0 = &DAT_0021c690;
  local_4c0 = &DAT_0021c7b0;
  local_da8 = &DAT_0021c6ac;
  local_12c0 = &DAT_0021c5d8;
  local_3c0 = &DAT_0021c7d0;
  local_fc0 = &DAT_0021c620;
  local_da0 = &DAT_0021c6b4;
  uStack_d10 = 0x300000003;
  local_d18 = 1;
  local_3b8 = &DAT_0021c7dc;
  local_1318 = 0x100000001;
  local_11c0 = &DAT_0021c5f0;
  local_fb8 = &DAT_0021c634;
  local_14a0 = &DAT_0021c5b4;
  local_13c8 = 4;
  local_12b0 = &DAT_0021c5b4;
  local_ec8 = 4;
  local_db0 = &DAT_0021c6a4;
  local_cc8 = 4;
  local_cc0 = &DAT_0021c6c0;
  local_cb8 = &DAT_0021c5b4;
  local_bc8 = 4;
  local_bb8 = &DAT_0021c5b4;
  local_2c0 = &DAT_0021c7e0;
  local_1bc8 = 1;
  local_1ac8 = 1;
  local_1cb8 = 0;
  local_1bb8 = 0;
  local_1ab8 = 0;
  local_19c8 = 1;
  local_19b8 = 0;
  local_18c8 = 1;
  local_18b8 = 0;
  local_17c8 = 1;
  local_17b8 = 0;
  local_16c8 = 1;
  local_16b8 = 0;
  local_15c8 = 1;
  local_15b8 = &DAT_0021c588;
  local_1518 = 3;
  local_14c8 = 1;
  local_14b8 = &DAT_0021c458;
  local_1218 = 0x300000003;
  local_1118 = 3;
  local_10c8 = 1;
  local_1018 = 3;
  local_fc8 = 1;
  local_eb8 = &DAT_0021c688;
  local_db8 = &DAT_0021c688;
  local_cb0 = &DAT_0021c458;
  local_ca8 = &DAT_0021c6e0;
  uStack_c10 = 0;
  local_c18 = 0x300000003;
  local_bb0 = &DAT_0021c588;
  local_b18 = 0x300000003;
  local_b10 = 3;
  local_ac8 = 3;
  local_a18 = 0;
  local_9c8 = 1;
  local_9b8 = &DAT_0021c688;
  local_918 = 0;
  local_8c8 = 1;
  local_818 = 0;
  local_7c8 = 1;
  local_7b8 = &DAT_0021c780;
  local_718 = 3;
  local_6c8 = 1;
  local_6b8 = &DAT_0021c688;
  local_618 = 3;
  local_5c8 = 1;
  local_5b8 = &DAT_0021c688;
  local_518 = 3;
  local_4c8 = 1;
  local_4b8 = &DAT_0021c588;
  local_418 = 3;
  local_3c8 = 1;
  local_318 = 0;
  local_2c8 = 1;
  local_2b8 = &DAT_0021c588;
  local_218 = 3;
  local_1c8 = 1;
  local_1c0 = &DAT_0021c7f0;
  puStack_1b8 = &DAT_0021c780;
  local_118 = 3;
  local_c8 = 1;
  FUN_00125518(&local_1cc0,0x1c,local_b8);
  if (*(long *)(local_b0 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

