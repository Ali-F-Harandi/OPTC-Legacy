// rea decompile_all
// name: FUN_0011f648
// address: 0x11f648
// body: available
// range: 0x11f648-0x1226cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011f648(short *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = -0x456589fe466012e2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while (lVar4 = lVar1, lVar1 = lVar4, -0x4b1348ce8c76acf < lVar4) {
                  if (lVar4 < 0x3dce80f3d755ea8b) {
                    if (lVar4 < 0x15af5640957b8c3e) {
                      if (lVar4 < 0x9e148cc4f502246) {
                        if (lVar4 < 0x47a378886e13f5f) {
                          if (lVar4 < -0x3c3e86bf5c07f00) {
                            lVar1 = -0x7353f89f407630c4;
                            if ((lVar4 != -0x4b1348ce8c76ace) &&
                               (lVar1 = lVar4, lVar4 == -0x41f7f0095884c7b)) {
                              uVar3 = FUN_001b208c(DAT_0021f788);
                              lVar1 = 0x7b7e2b085a916946;
                              if ((uVar3 & 1) == 0) {
                                lVar1 = 0x632d2718836e34f1;
                              }
                            }
                          }
                          else if (lVar4 == -0x3c3e86bf5c07f00) {
                            lVar1 = -0x21b4e69c14fe541b;
                            if (DAT_0021f638 == '\0') {
                              lVar1 = 0x40e2e377ff801f0f;
                            }
                          }
                          else if (lVar4 == 0x525d1afddf019d) {
                            lVar1 = -0x41ecdb8468f6741d;
                            if (DAT_0021f637 == '\0') {
                              lVar1 = -0x6ac927218151fec6;
                            }
                          }
                        }
                        else if (lVar4 < 0x6288b31db4af0d0) {
                          if (lVar4 == 0x47a378886e13f5f) {
                            *param_1 = *param_1 + 1;
                            lVar1 = -0x41df0b638b763578;
                          }
                          else if (lVar4 == 0x4c688c2b3b180e1) {
                            uVar3 = FUN_001b208c(DAT_0021f748);
                            lVar1 = 0x9e148cc4f502246;
                            if ((uVar3 & 1) == 0) {
                              lVar1 = -0x4c71e68197f00951;
                            }
                          }
                        }
                        else if (lVar4 == 0x6288b31db4af0d0) {
                          uVar3 = FUN_001b208c(DAT_0021f780);
                          lVar1 = 0x2d2fed4469d16fde;
                          if ((uVar3 & 1) == 0) {
                            lVar1 = 0x6e518c29e4d03e45;
                          }
                        }
                        else {
                          lVar1 = -0xbbaf2345e37dd60;
                          if ((lVar4 != 0x6beeef139d94bec) &&
                             (lVar1 = lVar4, lVar4 == 0x952495cae57ae98)) {
                            DAT_0021f21c = 0;
                            lVar1 = 0x18950f5f9acbc40c;
                          }
                        }
                      }
                      else if (lVar4 < 0x10778cda4c5f8a73) {
                        if (lVar4 < 0xc11c3ec18b1aa40) {
                          if (lVar4 == 0x9e148cc4f502246) {
                            *param_1 = *param_1 + 1;
                            lVar1 = 0x51c7910840e8eaee;
                          }
                          else if (lVar4 == 0xa93d39c1f756203) {
                            DAT_0021f210 = 0;
                            lVar1 = -0x16f1e5fa5f3754a5;
                          }
                        }
                        else if (lVar4 == 0xc11c3ec18b1aa40) {
                          DAT_0021f1dc = 0;
                          DAT_0021f740 = &DAT_0021c130;
                          DAT_0021f748 = &DAT_0021c160;
                          DAT_0021f750 = &DAT_0021c170;
                          DAT_0021f758 = &DAT_0021c190;
                          DAT_0021f760 = &DAT_0021c1b0;
                          DAT_0021f768 = &DAT_0021c1c8;
                          DAT_0021f770 = &DAT_0021c1e0;
                          DAT_0021f778 = &DAT_0021c200;
                          DAT_0021f780 = &DAT_0021c218;
                          DAT_0021f788 = &DAT_0021c228;
                          DAT_0021f790 = &DAT_0021c238;
                          DAT_0021f798 = &DAT_0021c250;
                          DAT_0021f7a0 = &DAT_0021c268;
                          DAT_0021f7a8 = &DAT_0021c280;
                          DAT_0021f7b0 = &DAT_0021c290;
                          DAT_0021f7b8 = &DAT_0021c2a0;
                          DAT_0021f7c0 = &DAT_0021c2b0;
                          uVar3 = FUN_001b208c();
                          lVar1 = -0x691837bae57ac643;
                          if ((uVar3 & 1) == 0) {
                            lVar1 = -0x4d93c90d4c4e8cc5;
                          }
                        }
                        else if (lVar4 == 0xc1c2badab0be0de) {
                          *param_1 = *param_1 + 1;
                          lVar1 = 0x7b3d77c4935dca95;
                        }
                        else if (lVar4 == 0xc418a6cc8b6f1ff) {
                          lVar1 = 0x731bafea6ffaf9d2;
                        }
                      }
                      else if (lVar4 < 0x14996c4a2edcd7b8) {
                        if (lVar4 == 0x10778cda4c5f8a73) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f1dc);
                          lVar1 = -0x5278110e52f4ac4;
                          if (iVar2 != 0) {
                            lVar1 = 0x15491d2b22f9328e;
                          }
                        }
                        else if (lVar4 == 0x144b21bcbeb71cd5) {
                          uVar3 = FUN_001b208c(DAT_0021f7b0);
                          lVar1 = 0x18fdc9591ff1c480;
                          if ((uVar3 & 1) == 0) {
                            lVar1 = -0x6879c2958cba2e8;
                          }
                        }
                      }
                      else if (lVar4 == 0x14996c4a2edcd7b8) {
                        DAT_0021c270 = DAT_0021c270 ^ 0x93;
                        DAT_0021c272 = DAT_0021c272 ^ 0x93;
                        DAT_0021c271 = DAT_0021c271 ^ 0x93;
                        DAT_0021c268 = DAT_0021c268 ^ 0x9393939393939393;
                        DAT_0021f63c = '\x01';
                        lVar1 = -0x24a6c1aed81e45b8;
                      }
                      else if (lVar4 == 0x14f4c2a3fc87591b) {
                        uVar3 = FUN_001b208c(DAT_0021f758);
                        lVar1 = 0x3dce80f3d755ea8b;
                        if ((uVar3 & 1) == 0) {
                          lVar1 = 0xc418a6cc8b6f1ff;
                        }
                      }
                      else if (lVar4 == 0x15491d2b22f9328e) {
                        lVar1 = 0x10778cda4c5f8a73;
                      }
                    }
                    else if (lVar4 < 0x25b4e6ec9cd2ecdc) {
                      if (lVar4 < 0x18fdc9591ff1c480) {
                        if (lVar4 < 0x187cf29d06d6bd9e) {
                          if (lVar4 == 0x15af5640957b8c3e) {
                            DAT_0021f204 = 0;
                            lVar1 = -0x689f306bde299b82;
                          }
                          else if (lVar4 == 0x16719e03f6bac21d) {
                            lVar1 = -0xbd76994df8af996;
                          }
                        }
                        else if (lVar4 == 0x187cf29d06d6bd9e) {
                          DAT_0021c1a0 = DAT_0021c1a0 ^ 0xd9;
                          DAT_0021c1a1 = DAT_0021c1a1 ^ 0xd9;
                          _DAT_0021c190 = _DAT_0021c190 ^ 0xd9d9d9d9d9d9d9d9;
                          uRam000000000021c198 = uRam000000000021c198 ^ 0xd9d9d9d9d9d9d9d9;
                          DAT_0021f633 = '\x01';
                          lVar1 = -0x7353f89f407630c4;
                        }
                        else if (lVar4 == 0x18950f5f9acbc40c) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f218);
                          lVar1 = 0x472980666c6a03ea;
                          if (iVar2 != 0) {
                            lVar1 = 0x51f9122c645eb44b;
                          }
                        }
                      }
                      else if (lVar4 < 0x20737e34b7c0d799) {
                        if (lVar4 == 0x18fdc9591ff1c480) {
                          *param_1 = *param_1 + 1;
                          lVar1 = 0x51c02d96c2cc98f2;
                        }
                        else if (lVar4 == 0x1c039adc9c242f08) {
                          lVar1 = -0x7e466004dbd092fa;
                        }
                      }
                      else {
                        lVar1 = -0x30c47c559a45f485;
                        if (lVar4 != 0x20737e34b7c0d799) {
                          if (lVar4 == 0x21f15559b2a9e8ab) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f1ec);
                            lVar1 = 0x747d75e5c403e07e;
                            if (iVar2 != 0) {
                              lVar1 = -0x6bd26373b69e2212;
                            }
                          }
                          else {
                            lVar1 = lVar4;
                            if (lVar4 == 0x24abbbfc5d2aac7f) {
                              lVar1 = -0xf42ba585e897368;
                            }
                          }
                        }
                      }
                    }
                    else if (lVar4 < 0x33953cc7b3e45706) {
                      if (lVar4 < 0x2ceb08fc97843c55) {
                        if (lVar4 == 0x25b4e6ec9cd2ecdc) {
                          DAT_0021c1f0 = DAT_0021c1f0 ^ 9;
                          DAT_0021c1f1 = DAT_0021c1f1 ^ 9;
                          DAT_0021c1f2 = DAT_0021c1f2 ^ 9;
                          DAT_0021c1f3 = DAT_0021c1f3 ^ 9;
                          _DAT_0021c1e0 = _DAT_0021c1e0 ^ 0x909090909090909;
                          uRam000000000021c1e8 = uRam000000000021c1e8 ^ 0x909090909090909;
                          DAT_0021f636 = '\x01';
                          lVar1 = 0x33d65f6cdac5d180;
                        }
                        else if (lVar4 == 0x2ba48ce703af72ba) {
                          lVar1 = 0x40a7395875650256;
                        }
                      }
                      else {
                        lVar1 = 0x5d0df0c4d56662f1;
                        if (lVar4 != 0x2ceb08fc97843c55) {
                          if (lVar4 == 0x2d2fed4469d16fde) {
                            *param_1 = *param_1 + 1;
                            lVar1 = -0x41f7f0095884c7b;
                          }
                          else {
                            lVar1 = lVar4;
                            if (lVar4 == 0x2f24479933703a4a) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f1f0);
                              lVar1 = -0x18f68c823630c7e6;
                              if (iVar2 != 0) {
                                lVar1 = -0x1131d0135a6d3962;
                              }
                            }
                          }
                        }
                      }
                    }
                    else if (lVar4 < 0x38dcd2690fefd83c) {
                      if (lVar4 == 0x33953cc7b3e45706) {
                        DAT_0021c2b8 = DAT_0021c2b8 ^ 0x92;
                        DAT_0021c2b9 = DAT_0021c2b9 ^ 0x92;
                        DAT_0021c2ba = DAT_0021c2ba ^ 0x92;
                        DAT_0021c2bc = DAT_0021c2bc ^ 0x92;
                        DAT_0021c2bd = DAT_0021c2bd ^ 0x92;
                        DAT_0021c2bb = DAT_0021c2bb ^ 0x92;
                        DAT_0021c2be = DAT_0021c2be ^ 0x92;
                        DAT_0021c2b0 = DAT_0021c2b0 ^ 0x9292929292929292;
                        DAT_0021f640 = '\x01';
                        lVar1 = 0x952495cae57ae98;
                      }
                      else if (lVar4 == 0x33d65f6cdac5d180) {
                        DAT_0021f1f4 = 0;
                        lVar1 = 0x2f24479933703a4a;
                      }
                    }
                    else {
                      lVar1 = -0x16f1e5fa5f3754a5;
                      if (lVar4 != 0x38dcd2690fefd83c) {
                        if (lVar4 == 0x39090bd7ea11745f) {
                          lVar1 = 0x2ba48ce703af72ba;
                          if (DAT_0021f632 == '\0') {
                            lVar1 = -0x10f63700d782bf54;
                          }
                        }
                        else {
                          lVar1 = lVar4;
                          if (lVar4 == 0x3c1d6e269c73b2c4) {
                            uVar3 = FUN_001b208c(DAT_0021f768);
                            lVar1 = -0x24d3583348e9211e;
                            if ((uVar3 & 1) == 0) {
                              lVar1 = -0x7d966677c36dcece;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (lVar4 < 0x642e33ff2599bd5c) {
                    if (lVar4 < 0x51c7910840e8eaee) {
                      if (lVar4 < 0x472980666c6a03ea) {
                        if (lVar4 < 0x40a7395875650256) {
                          if (lVar4 == 0x3dce80f3d755ea8b) {
                            *param_1 = *param_1 + 1;
                            lVar1 = 0x731bafea6ffaf9d2;
                          }
                          else if (lVar4 == 0x3e722c767da45809) {
                            lVar1 = 0x3c1d6e269c73b2c4;
                          }
                        }
                        else if (lVar4 == 0x40a7395875650256) {
                          DAT_0021f1e4 = 0;
                          lVar1 = -0x5d2b6741d85f7410;
                        }
                        else if (lVar4 == 0x40e2e377ff801f0f) {
                          DAT_0021c220 = DAT_0021c220 ^ 0x29;
                          DAT_0021c221 = DAT_0021c221 ^ 0x29;
                          DAT_0021c222 = DAT_0021c222 ^ 0x29;
                          DAT_0021c224 = DAT_0021c224 ^ 0x29;
                          DAT_0021c225 = DAT_0021c225 ^ 0x29;
                          DAT_0021c223 = DAT_0021c223 ^ 0x29;
                          DAT_0021c226 = DAT_0021c226 ^ 0x29;
                          DAT_0021c218 = DAT_0021c218 ^ 0x2929292929292929;
                          DAT_0021f638 = '\x01';
                          lVar1 = 0x4750cf34c56940e3;
                        }
                      }
                      else if (lVar4 < 0x4ecc90aa236ea5b3) {
                        if (lVar4 == 0x472980666c6a03ea) {
                          lVar1 = -0x58b7102d8e8f33c;
                          if (DAT_0021f63f == '\0') {
                            lVar1 = -0x38d34c0beb76f4aa;
                          }
                        }
                        else if (lVar4 == 0x4750cf34c56940e3) {
                          DAT_0021f1fc = 0;
                          lVar1 = 0x5d0df0c4d56662f1;
                        }
                      }
                      else {
                        lVar1 = 0xa93d39c1f756203;
                        if (lVar4 != 0x4ecc90aa236ea5b3) {
                          if (lVar4 == 0x4ee6d1fabee14214) {
                            *param_1 = *param_1 + 1;
                            lVar1 = -0x3142dac40f10d563;
                          }
                          else {
                            lVar1 = lVar4;
                            if (lVar4 == 0x51c02d96c2cc98f2) {
                              uVar3 = FUN_001b208c(DAT_0021f7b8);
                              lVar1 = -0x5e0244a9590fe586;
                              if ((uVar3 & 1) == 0) {
                                lVar1 = 0x521b22f75783dd1d;
                              }
                            }
                          }
                        }
                      }
                    }
                    else if (lVar4 < 0x5be851ffc25e1a72) {
                      if (lVar4 < 0x521b22f75783dd1d) {
                        if (lVar4 == 0x51c7910840e8eaee) {
                          uVar3 = FUN_001b208c(DAT_0021f750);
                          lVar1 = -0xf9c92c752203283;
                          if ((uVar3 & 1) == 0) {
                            lVar1 = -0x3eef45067d3bf338;
                          }
                        }
                        else if (lVar4 == 0x51f9122c645eb44b) {
                          lVar1 = 0x18950f5f9acbc40c;
                        }
                      }
                      else {
                        lVar1 = -0x552bac5ad212f1cf;
                        if (lVar4 != 0x521b22f75783dd1d) {
                          if (lVar4 == 0x5408d3bc6061f1d1) {
                            iVar2 = FUN_00212730(0,1,&DAT_0021f214);
                            lVar1 = 0x61612b56ba58e895;
                            if (iVar2 != 0) {
                              lVar1 = -0x760fdc1afc98096c;
                            }
                          }
                          else {
                            lVar1 = lVar4;
                            if (lVar4 == 0x553ff0e638d8b04c) {
                              iVar2 = FUN_00212730(0,1,&DAT_0021f208);
                              lVar1 = -0x6d49a2ba3fc929dc;
                              if (iVar2 != 0) {
                                lVar1 = -0x5c0b05f8eb36e4c6;
                              }
                            }
                          }
                        }
                      }
                    }
                    else if (lVar4 < 0x61612b56ba58e895) {
                      if (lVar4 == 0x5be851ffc25e1a72) {
                        DAT_0021f1e0 = 0;
                        lVar1 = 0x10778cda4c5f8a73;
                      }
                      else if (lVar4 == 0x5d0df0c4d56662f1) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f1f8);
                        lVar1 = 0x525d1afddf019d;
                        if (iVar2 != 0) {
                          lVar1 = 0x2ceb08fc97843c55;
                        }
                      }
                    }
                    else if (lVar4 == 0x61612b56ba58e895) {
                      lVar1 = -0x5aa64ba1dacf22c5;
                      if (DAT_0021f63e == '\0') {
                        lVar1 = 0x7b12ba36dfe3331c;
                      }
                    }
                    else {
                      lVar1 = 0x6288b31db4af0d0;
                      if ((lVar4 != 0x6298686b9f6b9f24) &&
                         (lVar1 = lVar4, lVar4 == 0x632d2718836e34f1)) {
                        lVar1 = 0x68a258a9cce7e66b;
                      }
                    }
                  }
                  else if (lVar4 < 0x74a731b62b0290ae) {
                    if (lVar4 < 0x6e518c29e4d03e45) {
                      if (lVar4 < 0x675e05399f995d8e) {
                        lVar1 = -0x24a6c1aed81e45b8;
                        if ((lVar4 != 0x642e33ff2599bd5c) &&
                           (lVar1 = lVar4, lVar4 == 0x64a4671c7146738b)) {
                          *param_1 = *param_1 + 1;
                          lVar1 = -0xf42ba585e897368;
                        }
                      }
                      else if (lVar4 == 0x675e05399f995d8e) {
                        DAT_0021c260 = DAT_0021c260 ^ 0xb6;
                        DAT_0021c261 = DAT_0021c261 ^ 0xb6;
                        _DAT_0021c250 = _DAT_0021c250 ^ 0xb6b6b6b6b6b6b6b6;
                        uRam000000000021c258 = uRam000000000021c258 ^ 0xb6b6b6b6b6b6b6b6;
                        DAT_0021f63b = '\x01';
                        lVar1 = -0x3cf562eeeb01cc12;
                      }
                      else if (lVar4 == 0x68a258a9cce7e66b) {
                        uVar3 = FUN_001b208c(DAT_0021f790);
                        lVar1 = 0xc1c2badab0be0de;
                        if ((uVar3 & 1) == 0) {
                          lVar1 = -0x1583528f277a144d;
                        }
                      }
                      else if (lVar4 == 0x6af93846531afc11) {
                        lVar1 = 0xc11c3ec18b1aa40;
                      }
                    }
                    else if (lVar4 < 0x70d6ef9c84f56d26) {
                      lVar1 = -0x41f7f0095884c7b;
                      if ((lVar4 != 0x6e518c29e4d03e45) &&
                         (lVar1 = lVar4, lVar4 == 0x706b8823a049caa0)) {
                        lVar1 = -0x4b1348ce8c76ace;
                        if (DAT_0021f633 == '\0') {
                          lVar1 = 0x187cf29d06d6bd9e;
                        }
                      }
                    }
                    else {
                      lVar1 = -0x5d2b6741d85f7410;
                      if (lVar4 != 0x70d6ef9c84f56d26) {
                        if (lVar4 == 0x731bafea6ffaf9d2) {
                          uVar3 = FUN_001b208c(DAT_0021f760);
                          lVar1 = -0x3b6e0fe4a7713ec6;
                          if ((uVar3 & 1) == 0) {
                            lVar1 = 0x3e722c767da45809;
                          }
                        }
                        else {
                          lVar1 = lVar4;
                          if (lVar4 == 0x747d75e5c403e07e) {
                            lVar1 = 0x7cb93cf37aea7cf9;
                            if (DAT_0021f634 == '\0') {
                              lVar1 = -0x28ee212cd644d530;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (lVar4 < 0x7b7e2b085a916946) {
                    if (lVar4 < 0x7a1d336c9fe8990f) {
                      if (lVar4 == 0x74a731b62b0290ae) {
                        _DAT_0021c160 = _DAT_0021c160 ^ 0xe7e7e7e7e7e7e7e7;
                        uRam000000000021c168 = uRam000000000021c168 ^ 0xe7e7e7e7e7e7e7e7;
                        DAT_0021f631 = '\x01';
                        lVar1 = 0x5be851ffc25e1a72;
                      }
                      else if (lVar4 == 0x78c4c1a5edb48036) {
                        lVar1 = 0x952495cae57ae98;
                      }
                    }
                    else if (lVar4 == 0x7a1d336c9fe8990f) {
                      uVar3 = FUN_001b208c(DAT_0021f770);
                      lVar1 = 0x47a378886e13f5f;
                      if ((uVar3 & 1) == 0) {
                        lVar1 = -0x1c5b2ab53e093884;
                      }
                    }
                    else if (lVar4 == 0x7b12ba36dfe3331c) {
                      DAT_0021c298 = DAT_0021c298 ^ 0x19;
                      DAT_0021c299 = DAT_0021c299 ^ 0x19;
                      DAT_0021c290 = DAT_0021c290 ^ 0x1919191919191919;
                      DAT_0021f63e = '\x01';
                      lVar1 = -0x5e1fdf78776f0eed;
                    }
                    else if (lVar4 == 0x7b3d77c4935dca95) {
                      uVar3 = FUN_001b208c(DAT_0021f798);
                      lVar1 = -0x6dba2dd18d641b5c;
                      if ((uVar3 & 1) == 0) {
                        lVar1 = 0x7cdba208eacd72d0;
                      }
                    }
                  }
                  else if (lVar4 < 0x7c1ab6a8596fe588) {
                    if (lVar4 == 0x7b7e2b085a916946) {
                      *param_1 = *param_1 + 1;
                      lVar1 = 0x68a258a9cce7e66b;
                    }
                    else if (lVar4 == 0x7bc8e480be254667) {
                      DAT_0021f1f0 = 0;
                      lVar1 = 0x21f15559b2a9e8ab;
                    }
                  }
                  else if (lVar4 == 0x7c1ab6a8596fe588) {
                    lVar1 = 0x78c4c1a5edb48036;
                    if (DAT_0021f640 == '\0') {
                      lVar1 = 0x33953cc7b3e45706;
                    }
                  }
                  else {
                    lVar1 = -0x19fe551b65af4a47;
                    if ((lVar4 != 0x7cb93cf37aea7cf9) &&
                       (lVar1 = lVar4, lVar4 == 0x7cdba208eacd72d0)) {
                      lVar1 = -0x63395203aad93369;
                    }
                  }
                }
                if (-0x405792201464f5f8 < lVar4) break;
                if (lVar4 < -0x63395203aad93369) {
                  if (lVar4 < -0x6dbe0b3d2d7a9ff1) {
                    if (lVar4 < -0x760fdc1afc98096c) {
                      if (lVar4 < -0x7d966677c36dcece) {
                        if (lVar4 == -0x7e466004dbd092fa) {
                          iVar2 = FUN_00212730(0,1,&DAT_0021f210);
                          lVar1 = -0x6342739c006cfe70;
                          if (iVar2 != 0) {
                            lVar1 = 0x1c039adc9c242f08;
                          }
                        }
                        else if (lVar4 == -0x7d9f7b6bb89f1cd3) {
                          DAT_0021f218 = 0;
                          lVar1 = 0x5408d3bc6061f1d1;
                        }
                      }
                      else {
                        lVar1 = 0x7a1d336c9fe8990f;
                        if ((lVar4 != -0x7d966677c36dcece) &&
                           (lVar1 = lVar4, lVar4 == -0x7b309891b0cee327)) {
                          _DAT_0021c280 = _DAT_0021c280 ^ 0x5757575757575757;
                          uRam000000000021c288 = uRam000000000021c288 ^ 0x5757575757575757;
                          DAT_0021f63d = '\x01';
                          lVar1 = 0xa93d39c1f756203;
                        }
                      }
                    }
                    else if (lVar4 < -0x74091218846a5104) {
                      lVar1 = 0x5408d3bc6061f1d1;
                      if ((lVar4 != -0x760fdc1afc98096c) &&
                         (lVar1 = lVar4, lVar4 == -0x76001134909e88fc)) {
                        DAT_0021f1f8 = 0;
                        lVar1 = -0x43d8d42d8bbf5814;
                      }
                    }
                    else {
                      lVar1 = 0x15af5640957b8c3e;
                      if (lVar4 != -0x74091218846a5104) {
                        if (lVar4 == -0x7353f89f407630c4) {
                          DAT_0021f1e8 = 0;
                          lVar1 = -0x2d4673f83300de4f;
                        }
                        else {
                          lVar1 = lVar4;
                          if (lVar4 == -0x7035e9702086dbee) {
                            lVar1 = -0x74091218846a5104;
                            if (DAT_0021f63a == '\0') {
                              lVar1 = -0x32f7034afe95e1a8;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (lVar4 < -0x6ac927218151fec6) {
                    if (lVar4 < -0x6d49a2ba3fc929dc) {
                      lVar1 = -0x3cf562eeeb01cc12;
                      if ((lVar4 != -0x6dbe0b3d2d7a9ff1) &&
                         (lVar1 = lVar4, lVar4 == -0x6dba2dd18d641b5c)) {
                        *param_1 = *param_1 + 1;
                        lVar1 = -0x63395203aad93369;
                      }
                    }
                    else if (lVar4 == -0x6d49a2ba3fc929dc) {
                      lVar1 = -0x6dbe0b3d2d7a9ff1;
                      if (DAT_0021f63b == '\0') {
                        lVar1 = 0x675e05399f995d8e;
                      }
                    }
                    else {
                      lVar1 = 0x21f15559b2a9e8ab;
                      if ((lVar4 != -0x6bd26373b69e2212) &&
                         (lVar1 = lVar4, lVar4 == -0x6bccf2492602d436)) {
                        iVar2 = FUN_00212730(0,1,&DAT_0021f21c);
                        lVar1 = 0x7c1ab6a8596fe588;
                        if (iVar2 != 0) {
                          lVar1 = -0x3107dc1fe97c932f;
                        }
                      }
                    }
                  }
                  else if (lVar4 < -0x689f306bde299b82) {
                    if (lVar4 == -0x6ac927218151fec6) {
                      DAT_0021c210 = DAT_0021c210 ^ 0x1f;
                      _DAT_0021c200 = _DAT_0021c200 ^ 0x1f1f1f1f1f1f1f1f;
                      uRam000000000021c208 = uRam000000000021c208 ^ 0x1f1f1f1f1f1f1f1f;
                      DAT_0021f637 = '\x01';
                      lVar1 = -0x76001134909e88fc;
                    }
                    else if (lVar4 == -0x691837bae57ac643) {
                      *param_1 = *param_1 + 1;
                      lVar1 = 0x4c688c2b3b180e1;
                    }
                  }
                  else if (lVar4 == -0x689f306bde299b82) {
                    iVar2 = FUN_00212730(0,1,&DAT_0021f200);
                    lVar1 = -0x1ea2d9a9bfdbcb59;
                    if (iVar2 != 0) {
                      lVar1 = -0x554301dbdde0ca2c;
                    }
                  }
                  else {
                    lVar1 = 0x144b21bcbeb71cd5;
                    if ((lVar4 != -0x67a01045c33eebde) &&
                       (lVar1 = lVar4, lVar4 == -0x6342739c006cfe70)) {
                      lVar1 = 0x4ecc90aa236ea5b3;
                      if (DAT_0021f63d == '\0') {
                        lVar1 = -0x7b309891b0cee327;
                      }
                    }
                  }
                }
                else if (lVar4 < -0x567b613dcbd338db) {
                  if (lVar4 < -0x5e0244a9590fe586) {
                    if (lVar4 < -0x61a21996f647e3aa) {
                      if (lVar4 == -0x63395203aad93369) {
                        uVar3 = FUN_001b208c(DAT_0021f7a0);
                        lVar1 = 0x4ee6d1fabee14214;
                        if ((uVar3 & 1) == 0) {
                          lVar1 = -0x32d8232145aea952;
                        }
                      }
                      else if (lVar4 == -0x61e598ced63c221e) {
                        DAT_0021c150 = DAT_0021c150 ^ 0x2b;
                        DAT_0021c151 = DAT_0021c151 ^ 0x2b;
                        DAT_0021c152 = DAT_0021c152 ^ 0x2b;
                        DAT_0021c153 = DAT_0021c153 ^ 0x2b;
                        DAT_0021c154 = DAT_0021c154 ^ 0x2b;
                        DAT_0021c155 = DAT_0021c155 ^ 0x2b;
                        _DAT_0021c130 = _DAT_0021c130 ^ 0x2b2b2b2b2b2b2b2b;
                        uRam000000000021c138 = uRam000000000021c138 ^ 0x2b2b2b2b2b2b2b2b;
                        _DAT_0021c140 = _DAT_0021c140 ^ 0x2b2b2b2b2b2b2b2b;
                        uRam000000000021c148 = uRam000000000021c148 ^ 0x2b2b2b2b2b2b2b2b;
                        DAT_0021f630 = '\x01';
                        lVar1 = 0xc11c3ec18b1aa40;
                      }
                    }
                    else if (lVar4 == -0x61a21996f647e3aa) {
                      DAT_0021c230 = DAT_0021c230 ^ 0x36;
                      DAT_0021c231 = DAT_0021c231 ^ 0x36;
                      DAT_0021c232 = DAT_0021c232 ^ 0x36;
                      DAT_0021c233 = DAT_0021c233 ^ 0x36;
                      DAT_0021c234 = DAT_0021c234 ^ 0x36;
                      DAT_0021c228 = DAT_0021c228 ^ 0x3636363636363636;
                      DAT_0021f639 = '\x01';
                      lVar1 = -0x29d5f6a10f86b08c;
                    }
                    else if (lVar4 == -0x5e1fdf78776f0eed) {
                      DAT_0021f214 = 0;
                      lVar1 = -0x7e466004dbd092fa;
                    }
                  }
                  else if (lVar4 < -0x5c0b05f8eb36e4c6) {
                    if (lVar4 == -0x5e0244a9590fe586) {
                      *param_1 = *param_1 + 1;
                      lVar1 = -0x552bac5ad212f1cf;
                    }
                    else if (lVar4 == -0x5d2b6741d85f7410) {
                      iVar2 = FUN_00212730(0,1,&DAT_0021f1e0);
                      lVar1 = -0x567b613dcbd338db;
                      if (iVar2 != 0) {
                        lVar1 = 0x70d6ef9c84f56d26;
                      }
                    }
                  }
                  else {
                    lVar1 = 0x553ff0e638d8b04c;
                    if (((lVar4 != -0x5c0b05f8eb36e4c6) &&
                        (lVar1 = -0x5e1fdf78776f0eed, lVar4 != -0x5aa64ba1dacf22c5)) &&
                       (lVar1 = lVar4, lVar4 == -0x5a6daaf505e6129c)) {
                      lVar1 = -0x2d4673f83300de4f;
                    }
                  }
                }
                else if (lVar4 < -0x4c71e68197f00951) {
                  if (lVar4 < -0x552bac5ad212f1cf) {
                    if (lVar4 == -0x567b613dcbd338db) {
                      lVar1 = -0xb9bd60ca14c8c3d;
                      if (DAT_0021f631 == '\0') {
                        lVar1 = 0x74a731b62b0290ae;
                      }
                    }
                    else if (lVar4 == -0x554301dbdde0ca2c) {
                      lVar1 = -0x689f306bde299b82;
                    }
                  }
                  else if (lVar4 == -0x552bac5ad212f1cf) {
                    uVar3 = FUN_001b208c(DAT_0021f7c0);
                    lVar1 = 0x64a4671c7146738b;
                    if ((uVar3 & 1) == 0) {
                      lVar1 = 0x24abbbfc5d2aac7f;
                    }
                  }
                  else {
                    lVar1 = -0x43d8d42d8bbf5814;
                    if ((lVar4 != -0x51cf875a70e06525) &&
                       (lVar1 = lVar4, lVar4 == -0x4d93c90d4c4e8cc5)) {
                      lVar1 = 0x4c688c2b3b180e1;
                    }
                  }
                }
                else if (lVar4 < -0x43d8d42d8bbf5814) {
                  lVar1 = 0x51c7910840e8eaee;
                  if ((lVar4 != -0x4c71e68197f00951) &&
                     (lVar1 = lVar4, lVar4 == -0x456589fe466012e2)) {
                    lVar1 = -0x6bccf2492602d436;
                  }
                }
                else if (lVar4 == -0x43d8d42d8bbf5814) {
                  iVar2 = FUN_00212730(0,1,&DAT_0021f1f4);
                  lVar1 = -0x2d6c703c376e87a2;
                  if (iVar2 != 0) {
                    lVar1 = -0x51cf875a70e06525;
                  }
                }
                else {
                  lVar1 = -0x76001134909e88fc;
                  if ((lVar4 != -0x41ecdb8468f6741d) &&
                     (lVar1 = lVar4, lVar4 == -0x41df0b638b763578)) {
                    uVar3 = FUN_001b208c(DAT_0021f778);
                    lVar1 = -0x22076b5cc3122b5b;
                    if ((uVar3 & 1) == 0) {
                      lVar1 = 0x6298686b9f6b9f24;
                    }
                  }
                }
              }
              if (-0x21b4e69c14fe541c < lVar4) break;
              if (lVar4 < -0x3136ee56265a3c6f) {
                if (lVar4 < -0x38d34c0beb76f4aa) {
                  if (lVar4 < -0x3cf562eeeb01cc12) {
                    lVar1 = 0x33d65f6cdac5d180;
                    if ((lVar4 != -0x405792201464f5f7) &&
                       (lVar1 = lVar4, lVar4 == -0x3eef45067d3bf338)) {
                      lVar1 = 0x14f4c2a3fc87591b;
                    }
                  }
                  else if (lVar4 == -0x3cf562eeeb01cc12) {
                    DAT_0021f208 = 0;
                    lVar1 = -0xbbaf2345e37dd60;
                  }
                  else if (lVar4 == -0x3b6e0fe4a7713ec6) {
                    *param_1 = *param_1 + 1;
                    lVar1 = 0x3c1d6e269c73b2c4;
                  }
                }
                else if (lVar4 < -0x32f7034afe95e1a8) {
                  if (lVar4 == -0x38d34c0beb76f4aa) {
                    DAT_0021c2a8 = DAT_0021c2a8 ^ 0xdf;
                    DAT_0021c2a9 = DAT_0021c2a9 ^ 0xdf;
                    DAT_0021c2aa = DAT_0021c2aa ^ 0xdf;
                    DAT_0021c2ab = DAT_0021c2ab ^ 0xdf;
                    DAT_0021c2a0 = DAT_0021c2a0 ^ 0xdfdfdfdfdfdfdfdf;
                    DAT_0021f63f = '\x01';
                    lVar1 = -0x7d9f7b6bb89f1cd3;
                  }
                  else if (lVar4 == -0x342c3064ebb3f072) {
                    *param_1 = *param_1 + 1;
                    lVar1 = 0x144b21bcbeb71cd5;
                  }
                }
                else if (lVar4 == -0x32f7034afe95e1a8) {
                  DAT_0021c240 = DAT_0021c240 ^ 0x3d;
                  DAT_0021c241 = DAT_0021c241 ^ 0x3d;
                  DAT_0021c242 = DAT_0021c242 ^ 0x3d;
                  DAT_0021c244 = DAT_0021c244 ^ 0x3d;
                  DAT_0021c245 = DAT_0021c245 ^ 0x3d;
                  DAT_0021c243 = DAT_0021c243 ^ 0x3d;
                  DAT_0021c246 = DAT_0021c246 ^ 0x3d;
                  DAT_0021c238 = DAT_0021c238 ^ 0x3d3d3d3d3d3d3d3d;
                  DAT_0021f63a = '\x01';
                  lVar1 = 0x15af5640957b8c3e;
                }
                else {
                  lVar1 = -0x3142dac40f10d563;
                  if ((lVar4 != -0x32d8232145aea952) &&
                     (lVar1 = lVar4, lVar4 == -0x3142dac40f10d563)) {
                    uVar3 = FUN_001b208c(DAT_0021f7a8);
                    lVar1 = -0x342c3064ebb3f072;
                    if ((uVar3 & 1) == 0) {
                      lVar1 = -0x67a01045c33eebde;
                    }
                  }
                }
              }
              else if (lVar4 < -0x29d5f6a10f86b08c) {
                if (lVar4 < -0x30c47c559a45f485) {
                  if (lVar4 == -0x3136ee56265a3c6f) {
                    lVar1 = 0x642e33ff2599bd5c;
                    if (DAT_0021f63c == '\0') {
                      lVar1 = 0x14996c4a2edcd7b8;
                    }
                  }
                  else if (lVar4 == -0x3107dc1fe97c932f) {
                    lVar1 = -0x6bccf2492602d436;
                  }
                }
                else if (lVar4 == -0x30c47c559a45f485) {
                  iVar2 = FUN_00212730(0,1,&DAT_0021f1e8);
                  lVar1 = 0x706b8823a049caa0;
                  if (iVar2 != 0) {
                    lVar1 = 0x20737e34b7c0d799;
                  }
                }
                else if (lVar4 == -0x2d6c703c376e87a2) {
                  lVar1 = -0x405792201464f5f7;
                  if (DAT_0021f636 == '\0') {
                    lVar1 = 0x25b4e6ec9cd2ecdc;
                  }
                }
                else if (lVar4 == -0x2d4673f83300de4f) {
                  iVar2 = FUN_00212730(0,1,&DAT_0021f1e4);
                  lVar1 = 0x39090bd7ea11745f;
                  if (iVar2 != 0) {
                    lVar1 = -0x5a6daaf505e6129c;
                  }
                }
              }
              else if (lVar4 < -0x24d3583348e9211e) {
                if (lVar4 == -0x29d5f6a10f86b08c) {
                  DAT_0021f200 = 0;
                  lVar1 = -0xbd76994df8af996;
                }
                else if (lVar4 == -0x28ee212cd644d530) {
                  DAT_0021c1c0 = DAT_0021c1c0 ^ 4;
                  DAT_0021c1c1 = DAT_0021c1c1 ^ 4;
                  DAT_0021c1c2 = DAT_0021c1c2 ^ 4;
                  DAT_0021c1c3 = DAT_0021c1c3 ^ 4;
                  DAT_0021c1c4 = DAT_0021c1c4 ^ 4;
                  DAT_0021c1c5 = DAT_0021c1c5 ^ 4;
                  DAT_0021c1c6 = DAT_0021c1c6 ^ 4;
                  _DAT_0021c1b0 = _DAT_0021c1b0 ^ 0x404040404040404;
                  uRam000000000021c1b8 = uRam000000000021c1b8 ^ 0x404040404040404;
                  DAT_0021f634 = '\x01';
                  lVar1 = -0x19fe551b65af4a47;
                }
              }
              else if (lVar4 == -0x24d3583348e9211e) {
                *param_1 = *param_1 + 1;
                lVar1 = 0x7a1d336c9fe8990f;
              }
              else if (lVar4 == -0x24a6c1aed81e45b8) {
                DAT_0021f20c = 0;
                lVar1 = 0x553ff0e638d8b04c;
              }
              else if (lVar4 == -0x22076b5cc3122b5b) {
                *param_1 = *param_1 + 1;
                lVar1 = 0x6288b31db4af0d0;
              }
            }
            if (-0xf9c92c752203284 < lVar4) break;
            if (lVar4 < -0x16f1e5fa5f3754a5) {
              if (lVar4 < -0x1c5b2ab53e093884) {
                lVar1 = 0x4750cf34c56940e3;
                if ((lVar4 != -0x21b4e69c14fe541b) && (lVar1 = lVar4, lVar4 == -0x1ea2d9a9bfdbcb59))
                {
                  lVar1 = -0xae6bb07eec7bcf3;
                  if (DAT_0021f639 == '\0') {
                    lVar1 = -0x61a21996f647e3aa;
                  }
                }
              }
              else {
                lVar1 = -0x41df0b638b763578;
                if (lVar4 != -0x1c5b2ab53e093884) {
                  if (lVar4 == -0x19fe551b65af4a47) {
                    DAT_0021f1ec = 0;
                    lVar1 = -0x30c47c559a45f485;
                  }
                  else {
                    lVar1 = lVar4;
                    if (lVar4 == -0x18f68c823630c7e6) {
                      lVar1 = -0xc85aa91f443b941;
                      if (DAT_0021f635 == '\0') {
                        lVar1 = -0x1038528dd04cc9b8;
                      }
                    }
                  }
                }
              }
            }
            else if (lVar4 < -0x1131d0135a6d3962) {
              if (lVar4 == -0x16f1e5fa5f3754a5) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f20c);
                lVar1 = -0x3136ee56265a3c6f;
                if (iVar2 != 0) {
                  lVar1 = 0x38dcd2690fefd83c;
                }
              }
              else if (lVar4 == -0x1583528f277a144d) {
                lVar1 = 0x7b3d77c4935dca95;
              }
            }
            else {
              lVar1 = 0x2f24479933703a4a;
              if (lVar4 != -0x1131d0135a6d3962) {
                if (lVar4 == -0x10f63700d782bf54) {
                  DAT_0021c180 = DAT_0021c180 ^ 0x77;
                  DAT_0021c181 = DAT_0021c181 ^ 0x77;
                  DAT_0021c182 = DAT_0021c182 ^ 0x77;
                  DAT_0021c183 = DAT_0021c183 ^ 0x77;
                  DAT_0021c184 = DAT_0021c184 ^ 0x77;
                  DAT_0021c185 = DAT_0021c185 ^ 0x77;
                  DAT_0021c186 = DAT_0021c186 ^ 0x77;
                  _DAT_0021c170 = _DAT_0021c170 ^ 0x7777777777777777;
                  uRam000000000021c178 = uRam000000000021c178 ^ 0x7777777777777777;
                  DAT_0021f632 = '\x01';
                  lVar1 = 0x40a7395875650256;
                }
                else {
                  lVar1 = lVar4;
                  if (lVar4 == -0x1038528dd04cc9b8) {
                    DAT_0021c1d0 = DAT_0021c1d0 ^ 2;
                    DAT_0021c1c8 = DAT_0021c1c8 ^ 0x202020202020202;
                    DAT_0021f635 = '\x01';
                    lVar1 = 0x7bc8e480be254667;
                  }
                }
              }
            }
          }
          if (lVar4 < -0xb9bd60ca14c8c3d) break;
          if (lVar4 < -0x6879c2958cba2e8) {
            lVar1 = 0x5be851ffc25e1a72;
            if ((lVar4 != -0xb9bd60ca14c8c3d) && (lVar1 = lVar4, lVar4 == -0xae6bb07eec7bcf3)) {
              lVar1 = -0x29d5f6a10f86b08c;
            }
          }
          else {
            lVar1 = 0x51c02d96c2cc98f2;
            if (((lVar4 != -0x6879c2958cba2e8) &&
                (lVar1 = -0x7d9f7b6bb89f1cd3, lVar4 != -0x58b7102d8e8f33c)) &&
               (lVar1 = lVar4, lVar4 == -0x5278110e52f4ac4)) {
              lVar1 = 0x6af93846531afc11;
              if (DAT_0021f630 == '\0') {
                lVar1 = -0x61e598ced63c221e;
              }
            }
          }
        }
        if (lVar4 < -0xbd76994df8af996) break;
        if (lVar4 == -0xbd76994df8af996) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f1fc);
          lVar1 = -0x3c3e86bf5c07f00;
          if (iVar2 != 0) {
            lVar1 = 0x16719e03f6bac21d;
          }
        }
        else if (lVar4 == -0xbbaf2345e37dd60) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f204);
          lVar1 = -0x7035e9702086dbee;
          if (iVar2 != 0) {
            lVar1 = 0x6beeef139d94bec;
          }
        }
      }
      if (lVar4 != -0xf9c92c752203283) break;
      *param_1 = *param_1 + 1;
      lVar1 = 0x14f4c2a3fc87591b;
    }
    lVar1 = 0x7bc8e480be254667;
  } while ((lVar4 == -0xc85aa91f443b941) || (lVar1 = lVar4, lVar4 != -0xf42ba585e897368));
  return;
}

