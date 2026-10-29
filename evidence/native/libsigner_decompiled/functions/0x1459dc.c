// rea decompile_all
// name: FUN_001459dc
// address: 0x1459dc
// body: available
// range: 0x1459dc-0x1476a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001459dc(long *param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x21;
  float fVar6;
  
  lVar1 = 0xb883192d08398bd;
  if (param_1 != (long *)0x0) {
    lVar1 = -0x5ec3e5a90b6cd1ca;
  }
  lVar2 = -0x3ed1cec5ad9bf9b5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar5 = lVar2, lVar2 = lVar5, lVar5 < -0xdb01cb9451425b6) {
              if (lVar5 < -0x42908efb1e7a682a) {
                if (lVar5 < -0x65215eb17b94cd46) {
                  if (lVar5 < -0x70d3f379afade806) {
                    if (lVar5 < -0x77d2c02aa92670d4) {
                      if (lVar5 == -0x7e9c4d6870066c9d) {
                        DAT_0021f2c4 = 0;
                        uVar4 = FUN_00124d64(unaff_x21,&DAT_0021c634,0);
                        lVar2 = 0x775d0f625837ac91;
                        if ((uVar4 & 1) == 0) {
                          lVar2 = -0x1a4a51f7c4c4ebe8;
                        }
                      }
                      else if (lVar5 == -0x795481185b927262) {
                        lVar2 = 0x6bf5c5e1526b416;
                      }
                    }
                    else {
                      lVar2 = 0x13985c6a9fa880de;
                      if (((lVar5 != -0x77d2c02aa92670d4) &&
                          (lVar2 = 0x41bbf7fe5932a41f, lVar5 != -0x74f4c62cc4ba5e9e)) &&
                         (lVar2 = lVar5, lVar5 == -0x7236100b29acbff6)) {
                        DAT_0021d2d0 = DAT_0021d2d0 ^ 0xb4;
                        DAT_0021d2d1 = DAT_0021d2d1 ^ 0xb4;
                        DAT_0021d2d2 = DAT_0021d2d2 ^ 0xb4;
                        DAT_0021d2d3 = DAT_0021d2d3 ^ 0xb4;
                        DAT_0021d2d5 = DAT_0021d2d5 ^ 0xb4;
                        DAT_0021d2d4 = DAT_0021d2d4 ^ 0xb4;
                        DAT_0021d2d6 = DAT_0021d2d6 ^ 0xb4;
                        _DAT_0021d2c0 = _DAT_0021d2c0 ^ 0xb4b4b4b4b4b4b4b4;
                        uRam000000000021d2c8 = uRam000000000021d2c8 ^ 0xb4b4b4b4b4b4b4b4;
                        DAT_0021f700 = '\x01';
                        lVar2 = 0x41bbf7fe5932a41f;
                      }
                    }
                  }
                  else if (lVar5 < -0x6b79b62fd0694dee) {
                    lVar2 = 0x55810e049c3b199b;
                    if (lVar5 != -0x70d3f379afade806) {
                      if (lVar5 == -0x70b193c46abd19d1) {
                        DAT_0021d288 = DAT_0021d288 ^ 0xe3e3e3e3e3e3e3e3;
                        DAT_0021f6fd = '\x01';
                        lVar2 = 0x20301ec44a8d1bc;
                      }
                      else {
                        lVar2 = lVar5;
                        if (lVar5 == -0x6c385ca7d07470f7) {
                          lVar2 = -0x12b96962316b855;
                        }
                      }
                    }
                  }
                  else {
                    lVar2 = 0x55810e049c3b199b;
                    if (lVar5 != -0x6b79b62fd0694dee) {
                      if (lVar5 == -0x6b1f45b376a58795) {
                        iVar3 = FUN_00212730(0,1,&DAT_0021f2c4);
                        lVar2 = -0xdb01cb9451425b6;
                        if (iVar3 != 0) {
                          lVar2 = 0x2b3c21038bf0b7d7;
                        }
                      }
                      else {
                        lVar2 = lVar5;
                        if (lVar5 == -0x694a9531194ce520) {
                          iVar3 = FUN_00212730(0,1,&DAT_0021f4f8);
                          lVar2 = 0x265df0c89296424a;
                          if (iVar3 != 0) {
                            lVar2 = 0x63ff5e7d1f5c628c;
                          }
                        }
                      }
                    }
                  }
                }
                else if (lVar5 < -0x53b0413d0f14a5e5) {
                  if (lVar5 < -0x5c2e40d941c67def) {
                    if (lVar5 == -0x65215eb17b94cd46) {
                      DAT_0021d2f0 = DAT_0021d2f0 ^ 6;
                      DAT_0021d2f2 = DAT_0021d2f2 ^ 6;
                      DAT_0021d2f1 = DAT_0021d2f1 ^ 6;
                      _DAT_0021d2e0 = _DAT_0021d2e0 ^ 0x606060606060606;
                      uRam000000000021d2e8 = uRam000000000021d2e8 ^ 0x606060606060606;
                      DAT_0021f701 = '\x01';
                      lVar2 = -0x1c82bed67e0e8ce5;
                    }
                    else if (lVar5 == -0x60bca5866b97db68) {
                      DAT_0021f2cc = 0;
                      uVar4 = FUN_00124d64(unaff_x21,&DAT_0021c648,1);
                      lVar2 = 0x2561e52f23f8aa11;
                      if ((uVar4 & 1) == 0) {
                        lVar2 = -0x6b79b62fd0694dee;
                      }
                    }
                    else if (lVar5 == -0x5ec3e5a90b6cd1ca) {
                      unaff_x21 = *param_1;
                      lVar2 = -0x2b765d9da1fa4ec3;
                      if (unaff_x21 == 0 || param_3 == (ulong *)0x0) {
                        lVar2 = -0x70d3f379afade806;
                      }
                    }
                  }
                  else {
                    lVar2 = -0x12b96962316b855;
                    if (((lVar5 != -0x5c2e40d941c67def) &&
                        (lVar2 = 0x50ea39bf8da3d17b, lVar5 != -0x5b4bb1f139dd7ad4)) &&
                       (lVar2 = lVar5, lVar5 == -0x5571ae25640a053e)) {
                      _DAT_0021d2a0 = _DAT_0021d2a0 ^ 0x3333333333333333;
                      uRam000000000021d2a8 = uRam000000000021d2a8 ^ 0x3333333333333333;
                      DAT_0021d2b0 = DAT_0021d2b0 ^ 0x3333333333333333;
                      DAT_0021f6ff = '\x01';
                      lVar2 = 0x4ba0ede49ecd82d0;
                    }
                  }
                }
                else if (lVar5 < -0x4b8482ee1c8f5151) {
                  lVar2 = -0x12b96962316b855;
                  if (lVar5 != -0x53b0413d0f14a5e5) {
                    if (lVar5 == -0x51c9bbfccb9601e1) {
                      DAT_0021d280 = DAT_0021d280 ^ 0x7575757575757575;
                      DAT_0021f6fc = '\x01';
                      lVar2 = 0x42726b331672238f;
                    }
                    else {
                      lVar2 = lVar5;
                      if (lVar5 == -0x4f3e3badc8a2b846) {
                        lVar2 = 0x4fd93eab4c0751d1;
                      }
                    }
                  }
                }
                else {
                  lVar2 = 0x5a0c64ad9216458a;
                  if (((lVar5 != -0x4b8482ee1c8f5151) &&
                      (lVar2 = -0x12b96962316b855, lVar5 != -0x4a651bba21f8aea5)) &&
                     (lVar2 = lVar5, lVar5 == -0x42d8fed53bfa6155)) {
                    lVar2 = 0x31eeb7dc42e6a877;
                  }
                }
              }
              else if (lVar5 < -0x1e7b1ea42f70f6ea) {
                if (lVar5 < -0x2eea563a725b4f08) {
                  if (lVar5 < -0x3d326309acf616c3) {
                    if (lVar5 == -0x42908efb1e7a682a) {
                      DAT_0021c6a4 = DAT_0021c6a4 ^ 0x67;
                      DAT_0021c6a5 = DAT_0021c6a5 ^ 0x67;
                      DAT_0021c6a6 = DAT_0021c6a6 ^ 0x67;
                      DAT_0021c6a7 = DAT_0021c6a7 ^ 0x67;
                      DAT_0021c6a8 = DAT_0021c6a8 ^ 0x67;
                      DAT_0021f671 = '\x01';
                      lVar2 = -0x20730e5f7ca40ef;
                    }
                    else {
                      lVar2 = lVar1;
                      if ((lVar5 != -0x3ed1cec5ad9bf9b5) &&
                         (lVar2 = lVar5, lVar5 == -0x3d638ffb8d91887e)) {
                        lVar2 = -0x12b96962316b855;
                      }
                    }
                  }
                  else {
                    lVar2 = 0xcf829476e434ac5;
                    if (((lVar5 != -0x3d326309acf616c3) &&
                        (lVar2 = -0x12b96962316b855, lVar5 != -0x3919d0d187810028)) &&
                       (lVar2 = lVar5, lVar5 == -0x31c0cc762e2e76ae)) {
                      lVar2 = -0x12b96962316b855;
                    }
                  }
                }
                else if (lVar5 < -0x2af42b94c26da979) {
                  lVar2 = -0x1e7b1ea42f70f6ea;
                  if (lVar5 != -0x2eea563a725b4f08) {
                    if (lVar5 == -0x2d93c2350210af7a) {
                      lVar2 = 0x1dbc502707e6be16;
                      if (DAT_0021f701 == '\0') {
                        lVar2 = -0x65215eb17b94cd46;
                      }
                    }
                    else {
                      lVar2 = lVar5;
                      if (lVar5 == -0x2b765d9da1fa4ec3) {
                        lVar2 = 0x55fc0d8117ca80f9;
                      }
                    }
                  }
                }
                else if (lVar5 == -0x2af42b94c26da979) {
                  lVar2 = -0x1462c49031921a27;
                  if (DAT_0021f6fd == '\0') {
                    lVar2 = -0x70b193c46abd19d1;
                  }
                }
                else if (lVar5 == -0x233d5b9cff31d5c0) {
                  DAT_0021c650 = DAT_0021c650 ^ 0xe;
                  DAT_0021c651 = DAT_0021c651 ^ 0xe;
                  DAT_0021c652 = DAT_0021c652 ^ 0xe;
                  DAT_0021c653 = DAT_0021c653 ^ 0xe;
                  DAT_0021c648 = DAT_0021c648 ^ 0xe0e0e0e0e0e0e0e;
                  DAT_0021f66c = '\x01';
                  lVar2 = -0x60bca5866b97db68;
                }
                else if (lVar5 == -0x1ec6deb8d41e8ff1) {
                  lVar2 = -0x7e9c4d6870066c9d;
                }
              }
              else if (lVar5 < -0x1393a2d122f33149) {
                if (lVar5 < -0x1818a37cd931d0c1) {
                  if (lVar5 == -0x1e7b1ea42f70f6ea) {
                    DAT_0021f4f8 = 0;
                    uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d208,0);
                    lVar2 = 0x248fec6955109bfc;
                    if ((uVar4 & 1) == 0) {
                      lVar2 = -0x77d2c02aa92670d4;
                    }
                  }
                  else if (lVar5 == -0x1c82bed67e0e8ce5) {
                    DAT_0021f520 = 0;
                    uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d2e0,3);
                    lVar2 = -0x5c2e40d941c67def;
                    if ((uVar4 & 1) == 0) {
                      lVar2 = 0x3549dfe81e4ce5c0;
                    }
                  }
                  else if (lVar5 == -0x1a4a51f7c4c4ebe8) {
                    lVar2 = -0x694a9531194ce520;
                  }
                }
                else if (lVar5 == -0x1818a37cd931d0c1) {
                  lVar2 = -0xf01552c0fa0cc6c;
                  if (DAT_0021f671 == '\0') {
                    lVar2 = -0x42908efb1e7a682a;
                  }
                }
                else {
                  lVar2 = 0x42726b331672238f;
                  if ((lVar5 != -0x161598adfc3d89d1) &&
                     (lVar2 = lVar5, lVar5 == -0x1462c49031921a27)) {
                    lVar2 = 0x20301ec44a8d1bc;
                  }
                }
              }
              else if (lVar5 < -0x10f7fcdba713b08b) {
                lVar2 = 0x50ea39bf8da3d17b;
                if (lVar5 != -0x1393a2d122f33149) {
                  if (lVar5 == -0x131f726233093d6b) {
                    lVar2 = -0x42d8fed53bfa6155;
                    if (DAT_0021f6fb == '\0') {
                      lVar2 = 0x6de285e1b91496be;
                    }
                  }
                  else {
                    lVar2 = lVar5;
                    if (lVar5 == -0x123ccbfda5676598) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f520);
                      lVar2 = -0x2d93c2350210af7a;
                      if (iVar3 != 0) {
                        lVar2 = 0x3dc350042b063a31;
                      }
                    }
                  }
                }
              }
              else if (lVar5 == -0x10f7fcdba713b08b) {
                lVar2 = 0x53c95fd0cdb0d457;
                if (DAT_0021f6ff == '\0') {
                  lVar2 = -0x5571ae25640a053e;
                }
              }
              else {
                lVar2 = -0x20730e5f7ca40ef;
                if ((lVar5 != -0xf01552c0fa0cc6c) && (lVar2 = lVar5, lVar5 == -0xdf2d3229a24126d)) {
                  lVar2 = 0x55fc0d8117ca80f9;
                }
              }
            }
            if (0x3549dfe81e4ce5bf < lVar5) break;
            if (lVar5 < 0x16182c629058908d) {
              if (lVar5 < 0x20301ec44a8d1bc) {
                if (lVar5 < -0x20730e5f7ca40ef) {
                  if (lVar5 == -0xdb01cb9451425b6) {
                    lVar2 = -0x1ec6deb8d41e8ff1;
                    if (DAT_0021f66a == '\0') {
                      lVar2 = 0x4b5a9531dcda0044;
                    }
                  }
                  else if (lVar5 == -0xdac733c494a9854) {
                    DAT_0021d298 = DAT_0021d298 ^ 0x37;
                    DAT_0021d29a = DAT_0021d29a ^ 0x37;
                    DAT_0021d299 = DAT_0021d299 ^ 0x37;
                    DAT_0021d290 = DAT_0021d290 ^ 0x3737373737373737;
                    DAT_0021f6fe = '\x01';
                    lVar2 = 0x4fd93eab4c0751d1;
                  }
                  else if (lVar5 == -0x52baa72955a2e6c) {
                    lVar2 = 0xcf829476e434ac5;
                  }
                }
                else if (lVar5 == -0x20730e5f7ca40ef) {
                  DAT_0021f2e0 = 0;
                  uVar4 = FUN_00124d64(unaff_x21,&DAT_0021c6a4,3);
                  lVar2 = -0x6c385ca7d07470f7;
                  if ((uVar4 & 1) == 0) {
                    lVar2 = -0x52baa72955a2e6c;
                  }
                }
                else {
                  lVar2 = 0x2d54a3eeea0141eb;
                  if ((lVar5 != -0x1e48de3b744fe34) && (lVar2 = lVar5, lVar5 == -0x12b96962316b855))
                  {
                    fVar6 = *param_2;
                    *param_3 = *param_3 | 0x200000;
                    *param_2 = fVar6 + (1.0 - fVar6);
                    lVar2 = 0x55810e049c3b199b;
                  }
                }
              }
              else if (lVar5 < 0xcf829476e434ac5) {
                if (lVar5 == 0x20301ec44a8d1bc) {
                  DAT_0021f510 = 0;
                  uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d288,0);
                  lVar2 = -0x4a651bba21f8aea5;
                  if ((uVar4 & 1) == 0) {
                    lVar2 = -0x1393a2d122f33149;
                  }
                }
                else if (lVar5 == 0x6bf5c5e1526b416) {
                  iVar3 = FUN_00212730(0,1,&DAT_0021f518);
                  lVar2 = -0x10f7fcdba713b08b;
                  if (iVar3 != 0) {
                    lVar2 = 0x16182c629058908d;
                  }
                }
                else if (lVar5 == 0xb883192d08398bd) {
                  lVar2 = 0x55810e049c3b199b;
                }
              }
              else if (lVar5 == 0xcf829476e434ac5) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f2cc);
                lVar2 = 0x205e572a5fb15ff6;
                if (iVar3 != 0) {
                  lVar2 = -0x3d326309acf616c3;
                }
              }
              else {
                lVar2 = 0x74bfa6301bdfa3ca;
                if ((lVar5 != 0x122fe1f29cf33851) && (lVar2 = lVar5, lVar5 == 0x13985c6a9fa880de)) {
                  iVar3 = FUN_00212730(0,1,&DAT_0021f50c);
                  lVar2 = 0x3d2649a14878ff8f;
                  if (iVar3 != 0) {
                    lVar2 = 0x4b9546d58c92c6e9;
                  }
                }
              }
            }
            else if (lVar5 < 0x265df0c89296424a) {
              if (lVar5 < 0x210c1f1a0c488a0d) {
                lVar2 = 0x6bf5c5e1526b416;
                if (((lVar5 != 0x16182c629058908d) &&
                    (lVar2 = -0x1c82bed67e0e8ce5, lVar5 != 0x1dbc502707e6be16)) &&
                   (lVar2 = lVar5, lVar5 == 0x205e572a5fb15ff6)) {
                  lVar2 = 0x49bd8cb9230e19e9;
                  if (DAT_0021f66c == '\0') {
                    lVar2 = -0x233d5b9cff31d5c0;
                  }
                }
              }
              else {
                lVar2 = 0x2d54a3eeea0141eb;
                if (((lVar5 != 0x210c1f1a0c488a0d) &&
                    (lVar2 = -0x12b96962316b855, lVar5 != 0x248fec6955109bfc)) &&
                   (lVar2 = lVar5, lVar5 == 0x2561e52f23f8aa11)) {
                  lVar2 = -0x12b96962316b855;
                }
              }
            }
            else if (lVar5 < 0x2ffa52ec9af851d0) {
              if (lVar5 == 0x265df0c89296424a) {
                lVar2 = -0x2eea563a725b4f08;
                if (DAT_0021f6f7 == '\0') {
                  lVar2 = 0x69b2f04412b7e2fe;
                }
              }
              else {
                lVar2 = -0x6b1f45b376a58795;
                if ((lVar5 != 0x2b3c21038bf0b7d7) && (lVar2 = lVar5, lVar5 == 0x2d54a3eeea0141eb)) {
                  iVar3 = FUN_00212730(0,1,&DAT_0021f51c);
                  lVar2 = 0x7d7ca60ec56e0ed6;
                  if (iVar3 != 0) {
                    lVar2 = 0x210c1f1a0c488a0d;
                  }
                }
              }
            }
            else {
              lVar2 = -0x12b96962316b855;
              if (lVar5 != 0x2ffa52ec9af851d0) {
                if (lVar5 == 0x31eeb7dc42e6a877) {
                  DAT_0021f508 = 0;
                  uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d270,0);
                  lVar2 = -0x31c0cc762e2e76ae;
                  if ((uVar4 & 1) == 0) {
                    lVar2 = 0x40aae2ec6f6a4f26;
                  }
                }
                else {
                  lVar2 = lVar5;
                  if (lVar5 == 0x322e615521ffc765) {
                    lVar2 = -0x4f3e3badc8a2b846;
                    if (DAT_0021f6fe == '\0') {
                      lVar2 = -0xdac733c494a9854;
                    }
                  }
                }
              }
            }
          }
          if (0x53c95fd0cdb0d456 < lVar5) break;
          if (lVar5 < 0x49bd8cb9230e19e9) {
            if (lVar5 < 0x40aae2ec6f6a4f26) {
              lVar2 = 0x5a0c64ad9216458a;
              if (lVar5 != 0x3549dfe81e4ce5c0) {
                if (lVar5 == 0x3d2649a14878ff8f) {
                  lVar2 = -0x161598adfc3d89d1;
                  if (DAT_0021f6fc == '\0') {
                    lVar2 = -0x51c9bbfccb9601e1;
                  }
                }
                else {
                  lVar2 = lVar5;
                  if (lVar5 == 0x3dc350042b063a31) {
                    lVar2 = -0x123ccbfda5676598;
                  }
                }
              }
            }
            else {
              lVar2 = -0x6b1f45b376a58795;
              if (lVar5 != 0x40aae2ec6f6a4f26) {
                if (lVar5 == 0x41bbf7fe5932a41f) {
                  DAT_0021f51c = 0;
                  uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d2c0,0);
                  lVar2 = -0x3919d0d187810028;
                  if ((uVar4 & 1) == 0) {
                    lVar2 = 0x551be6b2930a170a;
                  }
                }
                else {
                  lVar2 = lVar5;
                  if (lVar5 == 0x42726b331672238f) {
                    DAT_0021f50c = 0;
                    uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d280,0);
                    lVar2 = -0x3d638ffb8d91887e;
                    if ((uVar4 & 1) == 0) {
                      lVar2 = 0x5e698f42a71aafd9;
                    }
                  }
                }
              }
            }
          }
          else if (lVar5 < 0x4ba0ede49ecd82d0) {
            lVar2 = -0x60bca5866b97db68;
            if (lVar5 != 0x49bd8cb9230e19e9) {
              if (lVar5 == 0x4b5a9531dcda0044) {
                DAT_0021c634 = DAT_0021c634 ^ 0x54;
                DAT_0021c635 = DAT_0021c635 ^ 0x54;
                DAT_0021c636 = DAT_0021c636 ^ 0x54;
                DAT_0021c637 = DAT_0021c637 ^ 0x54;
                DAT_0021f66a = '\x01';
                lVar2 = -0x7e9c4d6870066c9d;
              }
              else {
                lVar2 = lVar5;
                if (lVar5 == 0x4b9546d58c92c6e9) {
                  lVar2 = 0x13985c6a9fa880de;
                }
              }
            }
          }
          else if (lVar5 == 0x4ba0ede49ecd82d0) {
            DAT_0021f518 = 0;
            uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d2a0,0);
            lVar2 = 0x2ffa52ec9af851d0;
            if ((uVar4 & 1) == 0) {
              lVar2 = -0x1e48de3b744fe34;
            }
          }
          else if (lVar5 == 0x4fd93eab4c0751d1) {
            DAT_0021f514 = 0;
            uVar4 = FUN_00124d64(unaff_x21,&DAT_0021d290,3);
            lVar2 = -0x53b0413d0f14a5e5;
            if ((uVar4 & 1) == 0) {
              lVar2 = -0x795481185b927262;
            }
          }
          else if (lVar5 == 0x50ea39bf8da3d17b) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f514);
            lVar2 = 0x322e615521ffc765;
            if (iVar3 != 0) {
              lVar2 = -0x5b4bb1f139dd7ad4;
            }
          }
        }
        if (lVar5 < 0x63ff5e7d1f5c628c) break;
        if (lVar5 < 0x74bfa6301bdfa3ca) {
          lVar2 = -0x694a9531194ce520;
          if (lVar5 != 0x63ff5e7d1f5c628c) {
            if (lVar5 == 0x69b2f04412b7e2fe) {
              DAT_0021d210 = DAT_0021d210 ^ 0x71;
              DAT_0021d212 = DAT_0021d212 ^ 0x71;
              DAT_0021d211 = DAT_0021d211 ^ 0x71;
              DAT_0021d208 = DAT_0021d208 ^ 0x7171717171717171;
              DAT_0021f6f7 = '\x01';
              lVar2 = -0x1e7b1ea42f70f6ea;
            }
            else {
              lVar2 = lVar5;
              if (lVar5 == 0x6de285e1b91496be) {
                DAT_0021d278 = DAT_0021d278 ^ 0x96;
                DAT_0021d27a = DAT_0021d27a ^ 0x96;
                DAT_0021d279 = DAT_0021d279 ^ 0x96;
                DAT_0021d270 = DAT_0021d270 ^ 0x9696969696969696;
                DAT_0021f6fb = '\x01';
                lVar2 = 0x31eeb7dc42e6a877;
              }
            }
          }
        }
        else if (lVar5 == 0x74bfa6301bdfa3ca) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f510);
          lVar2 = -0x2af42b94c26da979;
          if (iVar3 != 0) {
            lVar2 = 0x122fe1f29cf33851;
          }
        }
        else {
          lVar2 = -0x12b96962316b855;
          if ((lVar5 != 0x775d0f625837ac91) && (lVar2 = lVar5, lVar5 == 0x7d7ca60ec56e0ed6)) {
            lVar2 = -0x74f4c62cc4ba5e9e;
            if (DAT_0021f700 == '\0') {
              lVar2 = -0x7236100b29acbff6;
            }
          }
        }
      }
      if (lVar5 < 0x55fc0d8117ca80f9) break;
      if (lVar5 == 0x55fc0d8117ca80f9) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f508);
        lVar2 = -0x131f726233093d6b;
        if (iVar3 != 0) {
          lVar2 = -0xdf2d3229a24126d;
        }
      }
      else if (lVar5 == 0x5a0c64ad9216458a) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f2e0);
        lVar2 = -0x1818a37cd931d0c1;
        if (iVar3 != 0) {
          lVar2 = -0x4b8482ee1c8f5151;
        }
      }
      else if (lVar5 == 0x5e698f42a71aafd9) {
        lVar2 = 0x74bfa6301bdfa3ca;
      }
    }
    lVar2 = 0x4ba0ede49ecd82d0;
  } while (((lVar5 == 0x53c95fd0cdb0d457) ||
           (lVar2 = -0x123ccbfda5676598, lVar5 == 0x551be6b2930a170a)) ||
          (lVar2 = lVar5, lVar5 != 0x55810e049c3b199b));
  return;
}

