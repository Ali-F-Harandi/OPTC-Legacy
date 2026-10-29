// rea decompile_all
// name: FUN_0013c394
// address: 0x13c394
// body: available
// range: 0x13c394-0x142d23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x142d20 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0013c394(long param_1,long param_2)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x26;
  long local_110;
  long local_108;
  long local_100;
  undefined8 *local_f8;
  ulong local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  ulong local_d0;
  long local_c8;
  uint local_bc;
  long local_b8;
  long local_b0;
  
  local_110 = tpidr_el0;
  local_b0 = *(long *)(local_110 + 0x28);
  plVar1 = &local_110;
  lVar6 = -0x507c44fec7c2c7b;
  local_b8 = param_1;
LAB_0013c4b4:
  lVar7 = lVar6;
  lVar5 = param_2;
  param_2 = lVar5;
  lVar6 = lVar7;
  if (-0x20dab432455fb61 < lVar7) {
    if (lVar7 < 0x417e39f85c387739) {
      if (lVar7 < 0x1ec979d5dca9f154) {
        if (0x10352d19fadd5088 < lVar7) {
          if (lVar7 < 0x177698e10201e161) {
            if (lVar7 < 0x14036979895103a6) {
              if (lVar7 < 0x13348ff9bd4fd530) {
                lVar6 = -0x3c4447f43ecd21a;
                if ((lVar7 != 0x10352d19fadd5089) && (lVar6 = lVar7, lVar7 == 0x10526fec106cf6a4)) {
                  lVar6 = 0x371c25c9b3273489;
                }
              }
              else {
                lVar6 = -0x43a4643bd96ea240;
                if (lVar7 != 0x13348ff9bd4fd530) {
                  if (lVar7 == 0x13dbd2f4a45142f5) {
                    DAT_0021f478 = 0;
                    lVar6 = -0x689f984316d27398;
                  }
                  else {
                    lVar6 = lVar7;
                    if (lVar7 == 0x13fd2d0a2ed478ca) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f46c);
                      lVar6 = 0x1bc5f58ba55ef325;
                      if (iVar3 != 0) {
                        lVar6 = 0x6c506d2637e611ba;
                      }
                    }
                  }
                }
              }
              goto LAB_0013c4b4;
            }
            if (lVar7 < 0x150b39d1fb4a3c85) {
              if (lVar7 == 0x14036979895103a6) {
                DAT_0021d0a0 = DAT_0021d0a0 ^ 0x4b;
                DAT_0021d0a1 = DAT_0021d0a1 ^ 0x4b;
                DAT_0021d0a2 = DAT_0021d0a2 ^ 0x4b;
                DAT_0021f6d6 = '\x01';
                lVar6 = -0x789fa15714512d95;
              }
              else if (lVar7 == 0x14e2b8d7f8c89bcd) {
                lVar5 = -0x136bfbed72f04248;
                bVar2 = *(long *)(local_b8 + 0x20) == 0;
                lVar6 = 0x6960fa7fb07fb425;
                goto LAB_00140fc4;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = 0x68a3e880600b4d20;
            if (lVar7 == 0x150b39d1fb4a3c85) goto LAB_0013c4b4;
            if (lVar7 != 0x16e1c46dbf070820) {
              lVar6 = lVar7;
              if (lVar7 == 0x17588ade02a1c161) {
                lVar6 = 0x2d8dc40e3b9363cb;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = -0x3c3a57cb1f548fc0;
            bVar2 = DAT_0021f6cd == '\0';
            lVar7 = -0xfefb2b179491bfe;
          }
          else {
            if (lVar7 < 0x1bcb786c0ff7b235) {
              if (lVar7 < 0x19e11c6f0bc9d0a7) {
                if (lVar7 == 0x177698e10201e161) {
                  DAT_0021f48c = 0;
                  lVar6 = 0xcfb05277a4b5408;
                }
                else if (lVar7 == 0x1965ef5d6c03c45a) {
                  lVar6 = -0x6ca1699278fbc407;
                }
              }
              else if (lVar7 == 0x19e11c6f0bc9d0a7) {
                DAT_0021f448 = 0;
                lVar6 = -0x39a12b1392ada23e;
              }
              else {
                lVar6 = -0x626cc2766857ffa1;
                if ((lVar7 != 0x1b5e95948bbfc890) && (lVar6 = lVar7, lVar7 == 0x1bc5f58ba55ef325)) {
                  lVar5 = 0xf7154abbfda6d5d;
                  bVar2 = DAT_0021f6d4 == '\0';
                  lVar6 = -0x68d260166e73e49d;
                  goto LAB_00142c34;
                }
              }
              goto LAB_0013c4b4;
            }
            if (lVar7 < 0x1c9aaf9e70f1863c) {
              param_2 = local_e0;
              lVar6 = 0x6814976072f88927;
              if ((lVar7 != 0x1bcb786c0ff7b235) &&
                 (param_2 = lVar5, lVar6 = lVar7, lVar7 == 0x1c2e148a57fb0a73)) {
                lVar6 = -0x4acc02d50d17df27;
                bVar2 = DAT_0021f6dd == '\0';
                lVar7 = 0x6692425cbae8a6a7;
                goto LAB_0013c4ac;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = -0x59bb24205359ae3;
            if (lVar7 == 0x1c9aaf9e70f1863c) goto LAB_0013c4b4;
            if (lVar7 != 0x1cb159f56a524295) {
              lVar6 = lVar7;
              if (lVar7 == 0x1d0e0c756a222057) {
                DAT_0021f4e4 = 0;
                lVar6 = -0x6fc07f9320fe5299;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = -0x19ce936cdcdab155;
            bVar2 = DAT_0021f6d1 == '\0';
            lVar7 = 0x7f495c43d9bfe479;
          }
          goto LAB_0013c4ac;
        }
        if (0x7be06a5e8f3e514 < lVar7) {
          if (lVar7 < 0xcdeabf9e2ee78dd) {
            if (lVar7 < 0x7db06d330e62225) {
              if (lVar7 == 0x7be06a5e8f3e515) {
                DAT_0021f46c = 0;
                lVar6 = -0x2ef5dc14607801bd;
              }
              else if (lVar7 == 0x7c82ed2cd7a0f65) {
                DAT_0021f4ec = 0;
                lVar6 = -0x4903589a62bbfd5a;
              }
            }
            else {
              lVar6 = -0x7baefb2c63782b3a;
              if (((lVar7 != 0x7db06d330e62225) &&
                  (lVar6 = -0x1a80798c55f502d4, lVar7 != 0x9e5390dd5bc4776)) &&
                 (lVar6 = lVar7, lVar7 == 0xcc4ae0ad9abff89)) {
                DAT_0021d180 = DAT_0021d180 ^ 0x4141414141414141;
                DAT_0021f6eb = '\x01';
                lVar6 = -0x59bb24205359ae3;
              }
            }
          }
          else if (lVar7 < 0xdef46015ed616dc) {
            lVar6 = 0x3507dd7b542d27ab;
            if ((lVar7 != 0xcdeabf9e2ee78dd) && (lVar6 = lVar7, lVar7 == 0xcfb05277a4b5408)) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f488);
              lVar6 = 0x4bd1aab37954523c;
              if (iVar3 != 0) {
                lVar6 = -0x4e299df62a7cac77;
              }
            }
          }
          else {
            lVar6 = 0x23926b4931e4ddd9;
            if (lVar7 != 0xdef46015ed616dc) {
              if (lVar7 == 0xec76097e7bcef2b) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f458);
                lVar6 = -0x26244e9901bd4184;
                if (iVar3 != 0) {
                  lVar6 = 0x7f86b75637625789;
                }
              }
              else {
                lVar6 = lVar7;
                if (lVar7 == 0xf7154abbfda6d5d) {
                  DAT_0021d088 = DAT_0021d088 ^ 0x31;
                  DAT_0021d089 = DAT_0021d089 ^ 0x31;
                  DAT_0021d08a = DAT_0021d08a ^ 0x31;
                  DAT_0021d08b = DAT_0021d08b ^ 0x31;
                  DAT_0021d08d = DAT_0021d08d ^ 0x31;
                  DAT_0021d08c = DAT_0021d08c ^ 0x31;
                  DAT_0021d08e = DAT_0021d08e ^ 0x31;
                  DAT_0021d080 = DAT_0021d080 ^ 0x3131313131313131;
                  DAT_0021f6d4 = '\x01';
                  lVar6 = 0x7be06a5e8f3e515;
                }
              }
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < 0x2970253a2678be6) {
          if (lVar7 < -0x306994ed04e5f2) {
            lVar6 = -0x573bd37249d20b95;
            if ((lVar7 != -0x20dab432455fb60) && (lVar6 = lVar7, lVar7 == -0x4fb1f94f726abc)) {
              lVar6 = -0x39a12b1392ada23e;
            }
          }
          else if (lVar7 == -0x306994ed04e5f2) {
            DAT_0021f4ac = 0;
            lVar6 = 0x65a91f4f9884b239;
          }
          else if (lVar7 == 0x1a3f0d6dc6e8ddd) {
            DAT_0021d0b8 = DAT_0021d0b8 ^ 0xf7;
            DAT_0021d0b0 = DAT_0021d0b0 ^ 0xf7f7f7f7f7f7f7f7;
            DAT_0021f6d8 = '\x01';
            lVar6 = -0x759693278ea668ee;
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < 0x3cc08657015b0ae) {
          lVar6 = -0x695144aef4351566;
          if ((lVar7 != 0x2970253a2678be6) && (lVar6 = lVar7, lVar7 == 0x2bb3b80d6cc13f4)) {
            lVar6 = 0x77d3a46d4bf10f6f;
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 == 0x3cc08657015b0ae) {
          lVar5 = 0x1a3f0d6dc6e8ddd;
          bVar2 = DAT_0021f6d8 == '\0';
          lVar6 = 0x35bee2b0222d28d1;
          goto LAB_00142c34;
        }
        if (lVar7 != 0x449cb5d9b89bd23) {
          if (lVar7 == 0x5229545849c5537) {
            DAT_0021f4e0 = 0;
            lVar6 = 0x6e62470ec0feca97;
          }
          goto LAB_0013c4b4;
        }
        lVar5 = -0x3bc5ffbfea79ddb1;
        bVar2 = DAT_0021f6ef == '\0';
        lVar6 = 0x7bfdd0f52b196613;
      }
      else if (lVar7 < 0x34648656952d6215) {
        if (lVar7 < 0x2b5c96d5328e4b29) {
          if (lVar7 < 0x240d6305955b6afa) {
            if (lVar7 < 0x20bb1b664a63ded6) {
              if (lVar7 == 0x1ec979d5dca9f154) {
                lVar5 = FUN_001e238c(local_c8,local_f8[local_d0]);
                lVar6 = -0x7dc4f714e3c18336;
                if (lVar5 != 0) {
                  lVar6 = 0x709d70634cc07b96;
                }
              }
              else if (lVar7 == 0x1f4f73e6d09f50f7) {
                lVar6 = 0x177698e10201e161;
              }
            }
            else if (lVar7 == 0x20bb1b664a63ded6) {
              DAT_0021d120 = DAT_0021d120 ^ 0x84;
              DAT_0021d121 = DAT_0021d121 ^ 0x84;
              DAT_0021d122 = DAT_0021d122 ^ 0x84;
              DAT_0021d123 = DAT_0021d123 ^ 0x84;
              DAT_0021d124 = DAT_0021d124 ^ 0x84;
              DAT_0021d125 = DAT_0021d125 ^ 0x84;
              DAT_0021d126 = DAT_0021d126 ^ 0x84;
              DAT_0021f6e2 = '\x01';
              lVar6 = -0x3c4447f43ecd21a;
            }
            else if (lVar7 == 0x20cb3cffeb740807) {
              iVar3 = FUN_001e17a8(unaff_x26[local_d8 * 0x20],local_100);
              lVar6 = -0x26fb0fb700449341;
              if (iVar3 != 0) {
                lVar6 = -0x3dadc886f5cb9c5c;
              }
            }
            else if (lVar7 == 0x23926b4931e4ddd9) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4c0);
              lVar6 = 0x3aa0b1fb83b2558a;
              if (iVar3 != 0) {
                lVar6 = 0xdef46015ed616dc;
              }
            }
            goto LAB_0013c4b4;
          }
          if (lVar7 < 0x282d9b2cc5bf92db) {
            if (lVar7 == 0x240d6305955b6afa) {
              DAT_0021d1f0 = DAT_0021d1f0 ^ 0x71;
              DAT_0021d1e8 = DAT_0021d1e8 ^ 0x7171717171717171;
              DAT_0021f6f4 = '\x01';
              lVar6 = 0x7c82ed2cd7a0f65;
            }
            else if (lVar7 == 0x2511acddc55df9f5) {
              lVar6 = -0x380d23c280fd62a7;
            }
            goto LAB_0013c4b4;
          }
          lVar6 = -0x6e47912b95736632;
          if (lVar7 == 0x282d9b2cc5bf92db) goto LAB_0013c4b4;
          if (lVar7 == 0x2928fe110bd1eabb) {
            DAT_0021d07c = DAT_0021d07c ^ 0x85;
            DAT_0021d07d = DAT_0021d07d ^ 0x85;
            DAT_0021d07e = DAT_0021d07e ^ 0x85;
            DAT_0021f6d3 = '\x01';
            lVar6 = -0x695144aef4351566;
            goto LAB_0013c4b4;
          }
          lVar6 = lVar7;
          if (lVar7 != 0x2aef154f79a0da70) goto LAB_0013c4b4;
          lVar5 = -0x951b8beaaf9633d;
          bVar2 = DAT_0021f6d7 == '\0';
          lVar6 = -0x7e2d819d150dad44;
        }
        else if (lVar7 < 0x30fb9398ead65061) {
          if (lVar7 < 0x2ce3ba7a15650982) {
            if (lVar7 == 0x2b5c96d5328e4b29) {
              lVar5 = -0x19fa3f0660e43ea7;
              bVar2 = DAT_0021f6e3 == '\0';
              lVar6 = -0x20dab432455fb60;
              goto LAB_00142c34;
            }
            if (lVar7 == 0x2b7a8afa235a4085) {
              lVar6 = -0x3d1bfd2f6117f838;
            }
            goto LAB_0013c4b4;
          }
          if (lVar7 == 0x2ce3ba7a15650982) {
            DAT_0021d178 = DAT_0021d178 ^ 0xb4;
            DAT_0021d179 = DAT_0021d179 ^ 0xb4;
            DAT_0021d17a = DAT_0021d17a ^ 0xb4;
            DAT_0021d170 = DAT_0021d170 ^ 0xb4b4b4b4b4b4b4b4;
            DAT_0021f6ea = '\x01';
            lVar6 = -0x1a80798c55f502d4;
            goto LAB_0013c4b4;
          }
          if (lVar7 == 0x2d8dc40e3b9363cb) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4d4);
            lVar6 = -0x6736978b9af4e43d;
            if (iVar3 != 0) {
              lVar6 = 0x17588ade02a1c161;
            }
            goto LAB_0013c4b4;
          }
          if (lVar7 != 0x2ee85e18e022263f) goto LAB_0013c4b4;
          lVar5 = 0x57e9a4a0af4641bd;
          bVar2 = DAT_0021f6d2 == '\0';
          lVar6 = -0x7968f06893108d8d;
        }
        else {
          if (lVar7 < 0x322023fa146ac358) {
            if (lVar7 == 0x30fb9398ead65061) {
              DAT_0021d148 = DAT_0021d148 ^ 0x1919191919191919;
              DAT_0021f6e7 = '\x01';
              lVar6 = -0x70de9c263ba1aea6;
            }
            else if (lVar7 == 0x311c935e01830eb3) {
              lVar6 = 0x5f93a196c4a67887;
              bVar2 = DAT_0021f6e4 == '\0';
              lVar7 = 0x75d81be8b451f40e;
              goto LAB_0013c4ac;
            }
            goto LAB_0013c4b4;
          }
          if (lVar7 == 0x322023fa146ac358) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4c4);
            lVar6 = 0x3ffd4f1391a82011;
            if (iVar3 != 0) {
              lVar6 = -0x7898a018c23c0e73;
            }
            goto LAB_0013c4b4;
          }
          if (lVar7 != 0x3263abe88ca5f0db) {
            if (lVar7 == 0x332b11cab2aebb36) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4ac);
              lVar6 = 0x311c935e01830eb3;
              if (iVar3 != 0) {
                lVar6 = -0x3639ada08d62d512;
              }
            }
            goto LAB_0013c4b4;
          }
          lVar5 = -0x9358c58688dfc3d;
          bVar2 = DAT_0021f6dc == '\0';
          lVar6 = 0x1f4f73e6d09f50f7;
        }
      }
      else {
        if (lVar7 < 0x371c25c9b3273489) {
          if (lVar7 < 0x35f9e8fad92c7a8e) {
            if (lVar7 < 0x3507dd7b542d27ab) {
              if (lVar7 == 0x34648656952d6215) {
                DAT_0021f4b4 = 0;
                lVar6 = -0x628593b71adfef50;
              }
              else if (lVar7 == 0x3489314e2c777a76) {
                DAT_0021f498 = 0;
                lVar6 = -0x380d23c280fd62a7;
              }
            }
            else if (lVar7 == 0x3507dd7b542d27ab) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f49c);
              lVar6 = -0x4f30f2c889a63f0a;
              if (iVar3 != 0) {
                lVar6 = 0xcdeabf9e2ee78dd;
              }
            }
            else if (lVar7 == 0x359a91a576f35a55) {
              DAT_0021f470 = 0;
              lVar6 = 0x13fd2d0a2ed478ca;
            }
            else if (lVar7 == 0x35bee2b0222d28d1) {
              lVar6 = -0x759693278ea668ee;
            }
          }
          else if (lVar7 < 0x361162fa99986d3c) {
            lVar6 = -0x789fa15714512d95;
            if ((lVar7 != 0x35f9e8fad92c7a8e) && (lVar6 = lVar7, lVar7 == 0x360bde7043336cd1)) {
              DAT_0021d138 = DAT_0021d138 ^ 0x17;
              DAT_0021d139 = DAT_0021d139 ^ 0x17;
              DAT_0021d13b = DAT_0021d13b ^ 0x17;
              DAT_0021d13a = DAT_0021d13a ^ 0x17;
              DAT_0021f6e5 = '\x01';
              lVar6 = -0x7baefb2c63782b3a;
            }
          }
          else if (lVar7 == 0x361162fa99986d3c) {
            DAT_0021d0d8 = DAT_0021d0d8 ^ 0x6868686868686868;
            DAT_0021f6db = '\x01';
            lVar6 = 0x6429008ef59692fe;
          }
          else if (lVar7 == 0x3647e3366d517829) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4c8);
            lVar6 = 0x54a5018c6722ad9d;
            if (iVar3 != 0) {
              lVar6 = -0x18c522510761cbaf;
            }
          }
          else if (lVar7 == 0x3691e14c7b5f300d) {
            lVar6 = 0x50923b350bfc7260;
          }
          goto LAB_0013c4b4;
        }
        if (0x3d28b875fdc922b8 < lVar7) {
          if (lVar7 < 0x3ffd4f1391a82011) {
            if (lVar7 == 0x3d437eeae255edfe) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4b4);
              lVar6 = -0x384af7dcda25fa59;
              if (iVar3 != 0) {
                lVar6 = 0x4581287ce2b2c74d;
              }
            }
            else if (lVar7 == 0x3f0bd45daa6221b4) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f464);
              lVar6 = 0x2ee85e18e022263f;
              if (iVar3 != 0) {
                lVar6 = -0x4deb3b7cb6b14d3f;
              }
            }
            else if (lVar7 == 0x3d28b875fdc922b9) {
              if (*(long *)(local_110 + 0x28) == local_b0) {
                return local_bc & 1;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
          }
          else {
            if (lVar7 == 0x3ffd4f1391a82011) {
              lVar6 = 0x9e5390dd5bc4776;
              bVar2 = DAT_0021f6ea == '\0';
              lVar7 = 0x2ce3ba7a15650982;
              goto LAB_0013c4ac;
            }
            if (lVar7 == 0x41451d08e6768803) {
              local_108 = *(long *)(local_b8 + 0x10);
              lVar6 = -0x1eef3fe850c5c861;
              if (local_108 != 0) {
                lVar6 = 0x14e2b8d7f8c89bcd;
              }
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < 0x3aa0b1fb83b2558a) {
          if (lVar7 == 0x371c25c9b3273489) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4ec);
            lVar6 = -0x3bd84a77cb8efb94;
            if (iVar3 != 0) {
              lVar6 = 0x10526fec106cf6a4;
            }
          }
          else if (lVar7 == 0x384325d99b045662) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f490);
            lVar6 = 0x1c2e148a57fb0a73;
            if (iVar3 != 0) {
              lVar6 = 0x4a70ea33fd05aa2e;
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 != 0x3aa0b1fb83b2558a) {
          lVar6 = 0x68a3e880600b4d20;
          if ((lVar7 != 0x3c452808514839de) && (lVar6 = lVar7, lVar7 == 0x3cc09a4be449f2b2)) {
            lVar5 = -0x82f2f391ff20590;
            bVar2 = DAT_0021f6ca == '\0';
            lVar6 = 0x7e6b30276ce9c74c;
            goto LAB_00142c34;
          }
          goto LAB_0013c4b4;
        }
        lVar5 = -0x2d1a3b095430b561;
        bVar2 = DAT_0021f6e9 == '\0';
        lVar6 = -0x8850930e4155230;
      }
    }
    else {
      if (lVar7 < 0x62d5a9b884722eb0) {
        if (lVar7 < 0x532419efbc2b5e6b) {
          if (lVar7 < 0x4a70ea33fd05aa2e) {
            if (lVar7 < 0x452e8a0210942c23) {
              if (lVar7 < 0x428e8ad73f077264) {
                lVar6 = 0x4dfe1a533e92e773;
                if ((lVar7 != 0x417e39f85c387739) && (lVar6 = lVar7, lVar7 == 0x41dcfd85cbf991f9)) {
                  lVar6 = 0x68a3e880600b4d20;
                }
                goto LAB_0013c4b4;
              }
              if (lVar7 == 0x428e8ad73f077264) {
                DAT_0021d0f8 = DAT_0021d0f8 ^ 0xa8;
                DAT_0021d0f9 = DAT_0021d0f9 ^ 0xa8;
                DAT_0021d0fa = DAT_0021d0fa ^ 0xa8;
                DAT_0021d0fb = DAT_0021d0fb ^ 0xa8;
                DAT_0021d0fc = DAT_0021d0fc ^ 0xa8;
                DAT_0021d0fd = DAT_0021d0fd ^ 0xa8;
                DAT_0021d0fe = DAT_0021d0fe ^ 0xa8;
                DAT_0021f6de = '\x01';
                lVar6 = 0x5475d0ee08e33ded;
                goto LAB_0013c4b4;
              }
              if (lVar7 != 0x43af3929eeee76fd) goto LAB_0013c4b4;
              lVar6 = -0x4d639f690ca37e23;
              bVar2 = DAT_0021f6f2 == '\0';
              lVar7 = -0x1603da059d267032;
            }
            else {
              if (lVar7 < 0x47b7536cc82d3da1) {
                lVar6 = 0x5475d0ee08e33ded;
                if ((lVar7 != 0x452e8a0210942c23) && (lVar6 = lVar7, lVar7 == 0x4581287ce2b2c74d)) {
                  lVar6 = 0x3d437eeae255edfe;
                }
                goto LAB_0013c4b4;
              }
              if (lVar7 == 0x47b7536cc82d3da1) {
                DAT_0021f464 = 0;
                lVar6 = -0x846555cac12492d;
                goto LAB_0013c4b4;
              }
              lVar6 = 0x63366f9b130dac94;
              if ((lVar7 == 0x496a3ea6e2286862) || (lVar6 = lVar7, lVar7 != 0x49a32c3f71935a86))
              goto LAB_0013c4b4;
              lVar6 = 0x7db06d330e62225;
              bVar2 = DAT_0021f6e5 == '\0';
              lVar7 = 0x360bde7043336cd1;
            }
          }
          else {
            if (0x4ee01e5f5a193424 < lVar7) {
              if (lVar7 < 0x50581feb9eec644c) {
                if (lVar7 == 0x4ee01e5f5a193425) {
                  DAT_0021d158 = DAT_0021d158 ^ 0xbb;
                  DAT_0021d159 = DAT_0021d159 ^ 0xbb;
                  DAT_0021d15a = DAT_0021d15a ^ 0xbb;
                  DAT_0021d15b = DAT_0021d15b ^ 0xbb;
                  DAT_0021d15c = DAT_0021d15c ^ 0xbb;
                  DAT_0021d150 = DAT_0021d150 ^ 0xbbbbbbbbbbbbbbbb;
                  DAT_0021f6e8 = '\x01';
                  lVar6 = 0x7255e29735145109;
                }
                else if (lVar7 == 0x4f48a1ad939cd285) goto LAB_001401b8;
              }
              else {
                lVar6 = 0x532419efbc2b5e6b;
                if (lVar7 != 0x50581feb9eec644c) {
                  if (lVar7 == 0x5078209c718abc4a) {
                    DAT_0021f4f0 = 0;
                    uVar4 = FUN_00200830(*(undefined8 *)(local_b8 + 0x20),&DAT_0021d1f8);
                    lVar6 = 0x5ef38a028a5a44f7;
                    if ((uVar4 & 1) == 0) {
                      lVar6 = 0x69e91245661809ae;
                    }
                  }
                  else {
                    lVar6 = lVar7;
                    if (lVar7 == 0x50923b350bfc7260) {
                      iVar3 = FUN_00212730(0,1,&DAT_0021f4d8);
                      lVar6 = 0x449cb5d9b89bd23;
                      if (iVar3 != 0) {
                        lVar6 = 0x3691e14c7b5f300d;
                      }
                    }
                  }
                }
              }
              goto LAB_0013c4b4;
            }
            if (lVar7 < 0x4bd1aab37954523c) {
              lVar6 = 0x384325d99b045662;
              if ((lVar7 != 0x4a70ea33fd05aa2e) && (lVar6 = lVar7, lVar7 == 0x4a9a908786cdba58)) {
LAB_00140f78:
                local_bc = 0;
                goto LAB_00140f7c;
              }
              goto LAB_0013c4b4;
            }
            if (lVar7 != 0x4bd1aab37954523c) {
              lVar6 = -0x5985df81977688a6;
              if ((lVar7 != 0x4c9328926827d19e) && (lVar6 = lVar7, lVar7 == 0x4dfe1a533e92e773)) {
                DAT_0021f44c = 0;
                lVar6 = -0x154ab831b644ad87;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = -0x4267b177b81111b4;
            bVar2 = DAT_0021f6db == '\0';
            lVar7 = 0x361162fa99986d3c;
          }
        }
        else {
          if (lVar7 < 0x5ce8a703dc923429) {
            if (lVar7 < 0x54a5018c6722ad9d) {
              if (lVar7 < 0x5365a5fd8a2e2ee4) {
                if (lVar7 == 0x532419efbc2b5e6b) {
                  DAT_0021f454 = 0;
                  lVar6 = -0x4776c58602e23dab;
                }
                else if (lVar7 == 0x533a416780d3c555) {
                  lVar6 = -0x4eaa9e97fc9ab0fd;
                }
              }
              else {
                lVar6 = -0x1b1c3c4c5eb72e1d;
                if (((lVar7 != 0x5365a5fd8a2e2ee4) &&
                    (lVar6 = -0x628593b71adfef50, lVar7 != 0x541a38fe766e0536)) &&
                   (lVar6 = lVar7, lVar7 == 0x5475d0ee08e33ded)) {
                  DAT_0021f494 = 0;
                  lVar6 = 0x384325d99b045662;
                }
              }
            }
            else if (lVar7 < 0x57e9a4a0af4641bd) {
              if (lVar7 == 0x54a5018c6722ad9d) {
                lVar5 = 0xcc4ae0ad9abff89;
                bVar2 = DAT_0021f6eb == '\0';
                lVar6 = 0x1c9aaf9e70f1863c;
                goto LAB_00142c34;
              }
              if (lVar7 == 0x55183fdd1ababed4) {
                lVar6 = -0x846555cac12492d;
              }
            }
            else if (lVar7 == 0x57e9a4a0af4641bd) {
              DAT_0021d074 = DAT_0021d074 ^ 0x80;
              DAT_0021d075 = DAT_0021d075 ^ 0x80;
              DAT_0021d076 = DAT_0021d076 ^ 0x80;
              DAT_0021d077 = DAT_0021d077 ^ 0x80;
              DAT_0021d078 = DAT_0021d078 ^ 0x80;
              DAT_0021f6d2 = '\x01';
              lVar6 = 0x47b7536cc82d3da1;
            }
            else {
              lVar6 = 0x3489314e2c777a76;
              if ((lVar7 != 0x583e6f07c6e46e67) && (lVar6 = lVar7, lVar7 == 0x58e7f66dfaef3500)) {
                DAT_0021d1d0 = DAT_0021d1d0 ^ 0xaa;
                DAT_0021d1d1 = DAT_0021d1d1 ^ 0xaa;
                _DAT_0021d1c0 = _DAT_0021d1c0 ^ 0xaaaaaaaaaaaaaaaa;
                uRam000000000021d1c8 = uRam000000000021d1c8 ^ 0xaaaaaaaaaaaaaaaa;
                DAT_0021f6f1 = '\x01';
                lVar6 = 0x5229545849c5537;
              }
            }
            goto LAB_0013c4b4;
          }
          if (lVar7 < 0x5ef38a028a5a44f7) {
            if (0x5dc65485ea435448 < lVar7) {
              lVar6 = -0x2753c30d7363ac3a;
              if (((lVar7 != 0x5dc65485ea435449) &&
                  (lVar6 = -0x34730b978f0510e, lVar7 != 0x5df2e381f57d0c3d)) &&
                 (lVar6 = lVar7, lVar7 == 0x5e8dff8b992d81b7)) {
                DAT_0021f49c = 0;
                lVar6 = -0xc4b1111d82acd28;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = -0x2b015dc3d521c345;
            if ((lVar7 == 0x5ce8a703dc923429) || (lVar6 = lVar7, lVar7 != 0x5d88617172bec015))
            goto LAB_0013c4b4;
            lVar6 = 0x5f9824e0865115b3;
            bVar2 = DAT_0021f6ed == '\0';
            lVar7 = -0x556d88aa4bc1f0e7;
          }
          else {
            if (lVar7 < 0x5f9824e0865115b3) {
              if (lVar7 == 0x5ef38a028a5a44f7) goto LAB_00140ae4;
              if (lVar7 == 0x5f93a196c4a67887) {
                lVar6 = -0x306994ed04e5f2;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = 0x7cdec887c6be3f55;
            if (lVar7 == 0x5f9824e0865115b3) goto LAB_0013c4b4;
            if (lVar7 != 0x5ff679bcf5dd63ff) {
              lVar6 = lVar7;
              if (lVar7 == 0x62216f5bab7e7ee3) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f48c);
                lVar6 = 0x3263abe88ca5f0db;
                if (iVar3 != 0) {
                  lVar6 = -0x2558b6d1ab136160;
                }
              }
              goto LAB_0013c4b4;
            }
            lVar6 = 0x50581feb9eec644c;
            bVar2 = DAT_0021f6ce == '\0';
            lVar7 = 0x7d170bd3e7c27c4a;
          }
        }
        goto LAB_0013c4ac;
      }
      if (lVar7 < 0x7255e29735145109) {
        if (lVar7 < 0x6960fa7fb07fb425) {
          if (lVar7 < 0x65a91f4f9884b239) {
            if (0x6429008ef59692fd < lVar7) {
              if (lVar7 == 0x6429008ef59692fe) {
                DAT_0021f488 = 0;
                lVar6 = 0x77d3a46d4bf10f6f;
              }
              else if (lVar7 == 0x65526979ebc09ea9) {
                DAT_0021f444 = 0;
                unaff_x26 = plVar1 + -0x2a0;
                plVar1[-1] = 1;
                plVar1[-0x20] = (long)&DAT_0021d1e0;
                plVar1[-0x1f] = (long)&DAT_0021d1e8;
                *unaff_x26 = &DAT_0021d020;
                plVar1[-0x29f] = (long)&DAT_0021d028;
                plVar1[-0x240] = (long)&DAT_0021d05c;
                plVar1[-0x281] = 1;
                plVar1[-0x280] = (long)&DAT_0021d030;
                plVar1[-0x25f] = (long)&DAT_0021d050;
                plVar1[-0x23f] = (long)&DAT_0021d068;
                plVar1[-0x9e] = (long)&DAT_0021d050;
                plVar1[-0x261] = 1;
                plVar1[-0x260] = (long)&DAT_0021d044;
                plVar1[-0x23e] = (long)&DAT_0021d074;
                plVar1[-0x241] = 2;
                plVar1[-0x221] = 2;
                plVar1[-0x60] = (long)&DAT_0021d1c0;
                plVar1[-0x27f] = (long)&DAT_0021d038;
                plVar1[-0x220] = (long)&DAT_0021d07c;
                plVar1[-0x25e] = (long)&DAT_0021d038;
                plVar1[-0x21f] = (long)&DAT_0021d038;
                plVar1[-0x201] = 3;
                plVar1[-0x21e] = (long)&DAT_0021d080;
                plVar1[-0x1e1] = 1;
                plVar1[-0x1df] = (long)&DAT_0021d0c0;
                plVar1[-0x1c1] = 1;
                plVar1[-0x21d] = (long)&DAT_0021d090;
                plVar1[-0x1a1] = 1;
                plVar1[-0x181] = 1;
                plVar1[-0x161] = 1;
                plVar1[-0x200] = (long)&DAT_0021d0a0;
                plVar1[-0x141] = 1;
                plVar1[-0x140] = (long)&DAT_0021d120;
                plVar1[-0x121] = 1;
                plVar1[-0x1ff] = (long)&DAT_0021d0a4;
                plVar1[-0x101] = 1;
                plVar1[-0xe1] = 1;
                plVar1[-0xc1] = 3;
                plVar1[-0x1e0] = (long)&DAT_0021d0b0;
                plVar1[-0xa1] = 1;
                plVar1[-0x9d] = (long)&DAT_0021d038;
                plVar1[-0x81] = 3;
                plVar1[-0x1c0] = (long)&DAT_0021d0cc;
                plVar1[-0x61] = 1;
                plVar1[-0x5f] = (long)&DAT_0021d0c0;
                plVar1[-0x41] = 1;
                plVar1[-0x1bf] = (long)&DAT_0021d0d8;
                plVar1[-0x40] = (long)&DAT_0021d1d8;
                plVar1[-0x21] = 1;
                plVar1[-0x1a0] = (long)&DAT_0021d0e0;
                plVar1[-0x19f] = (long)&DAT_0021d0e8;
                plVar1[-0x180] = (long)&DAT_0021d0f8;
                plVar1[-0x17f] = (long)&DAT_0021d100;
                plVar1[-0x160] = (long)&DAT_0021d104;
                plVar1[-0x15f] = (long)&DAT_0021d110;
                plVar1[-0x13f] = (long)&DAT_0021d110;
                plVar1[-0x120] = (long)&DAT_0021d128;
                plVar1[-0x11f] = (long)&DAT_0021d134;
                plVar1[-0x100] = (long)&DAT_0021d138;
                plVar1[-0xff] = (long)&DAT_0021d13c;
                plVar1[-0xe0] = (long)&DAT_0021d148;
                plVar1[-0xdf] = (long)&DAT_0021d150;
                plVar1[-0xde] = (long)&DAT_0021d160;
                plVar1[-0xdd] = (long)&DAT_0021d170;
                plVar1[-0xc0] = (long)&DAT_0021d180;
                plVar1[-0xbf] = (long)&DAT_0021d188;
                plVar1[-0xa0] = (long)&DAT_0021d190;
                plVar1[-0x9f] = (long)&DAT_0021d198;
                plVar1[-0x80] = (long)&DAT_0021d1a4;
                plVar1[-0x7f] = (long)&DAT_0021d1b0;
                plVar1[-0x3f] = (long)&DAT_0021d1b0;
                uVar4 = FUN_0013a038(local_b8);
                plVar1 = unaff_x26;
                lVar6 = 0x4a9a908786cdba58;
                if ((uVar4 & 1) == 0) {
                  lVar6 = 0x6d5e1b9e887f615e;
                }
              }
              goto LAB_0013c4b4;
            }
            if (lVar7 != 0x62d5a9b884722eb0) {
              if (lVar7 == 0x63366f9b130dac94) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f45c);
                lVar6 = -0x24e34cade03597c9;
                if (iVar3 != 0) {
                  lVar6 = 0x496a3ea6e2286862;
                }
              }
              goto LAB_0013c4b4;
            }
            local_d0 = local_e8 + 1;
            bVar2 = local_d0 == local_f0;
            lVar5 = 0x1ec979d5dca9f154;
            lVar6 = 0x4c9328926827d19e;
          }
          else {
            if (lVar7 < 0x67217194a3e8b851) {
              if (lVar7 == 0x65a91f4f9884b239) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f4a8);
                lVar6 = 0x2b5c96d5328e4b29;
                if (iVar3 != 0) {
                  lVar6 = -0x197501ae5265b971;
                }
              }
              else if (lVar7 == 0x6692425cbae8a6a7) {
                DAT_0021d0f0 = DAT_0021d0f0 ^ 0x34;
                DAT_0021d0f1 = DAT_0021d0f1 ^ 0x34;
                DAT_0021d0f2 = DAT_0021d0f2 ^ 0x34;
                DAT_0021d0f3 = DAT_0021d0f3 ^ 0x34;
                DAT_0021d0f4 = DAT_0021d0f4 ^ 0x34;
                DAT_0021d0e8 = DAT_0021d0e8 ^ 0x3434343434343434;
                DAT_0021f6dd = '\x01';
                lVar6 = 0x78ddb835653f250f;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = -0x394dba9bbcfacc3d;
            if (lVar7 == 0x67217194a3e8b851) goto LAB_0013c4b4;
            if (lVar7 == 0x6814976072f88927) {
              local_100 = *(long *)(local_b8 + 0x10);
              lVar6 = 0x67217194a3e8b851;
              local_d8 = lVar5;
              if (local_100 != 0) {
                lVar6 = 0x20cb3cffeb740807;
              }
              goto LAB_0013c4b4;
            }
            lVar6 = lVar7;
            if (lVar7 != 0x68a3e880600b4d20) goto LAB_0013c4b4;
            local_e0 = local_d8 + 1;
            lVar5 = 0x1bcb786c0ff7b235;
            bVar2 = local_e0 == 0x15;
            lVar6 = 0x41451d08e6768803;
          }
LAB_00140fc4:
          if (!bVar2) {
            lVar6 = lVar5;
          }
          goto LAB_0013c4b4;
        }
        if (0x6d5e1b9e887f615d < lVar7) {
          if (lVar7 < 0x6e62470ec0feca97) {
            if (lVar7 == 0x6d5e1b9e887f615e) {
              param_2 = 0;
              lVar6 = 0x6814976072f88927;
            }
            else if (lVar7 == 0x6e0a62d94a25f4ca) {
              DAT_0021f4f4 = 0;
              uVar4 = FUN_002006ac(*(undefined8 *)(local_b8 + 0x20),&DAT_0021d200);
              lVar6 = -0x5010a6c4d0460052;
              if ((uVar4 & 1) == 0) {
                lVar6 = -0x38e8c0137f228ba6;
              }
            }
          }
          else if (lVar7 == 0x6e62470ec0feca97) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4dc);
            lVar6 = -0x7ca3f85d747a4cdf;
            if (iVar3 != 0) {
              lVar6 = -0x207015b202abe8e8;
            }
          }
          else if (lVar7 == 0x705c9d72623b0c92) {
            DAT_0021d030 = DAT_0021d030 ^ 0x1010101010101010;
            DAT_0021f6cc = '\x01';
            lVar6 = 0x4dfe1a533e92e773;
          }
          else if (lVar7 == 0x709d70634cc07b96) {
            local_e8 = local_d0;
            lVar6 = 0x62d5a9b884722eb0;
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < 0x6b5dd7f8495e7441) {
          lVar6 = -0x394dba9bbcfacc3d;
          if ((lVar7 != 0x6960fa7fb07fb425) && (lVar6 = lVar7, lVar7 == 0x69e91245661809ae)) {
            lVar6 = -0x626cc2766857ffa1;
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 != 0x6b5dd7f8495e7441) {
          lVar6 = 0x13fd2d0a2ed478ca;
          if ((lVar7 != 0x6c506d2637e611ba) && (lVar6 = lVar7, lVar7 == 0x6c53b7f23bd8197e)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4d0);
            lVar6 = 0x5d88617172bec015;
            if (iVar3 != 0) {
              lVar6 = -0x734567a119bfc6cb;
            }
          }
          goto LAB_0013c4b4;
        }
        lVar5 = 0x428e8ad73f077264;
        bVar2 = DAT_0021f6de == '\0';
        lVar6 = 0x452e8a0210942c23;
      }
      else {
        if (lVar7 < 0x7bfdd0f52b196613) {
          if (lVar7 < 0x7854f9396bb107a0) {
            if (lVar7 < 0x75d81be8b451f40e) {
              if (lVar7 == 0x7255e29735145109) {
                DAT_0021f4bc = 0;
                lVar6 = -0x1b765ab63ff9eef2;
              }
              else if (lVar7 == 0x759631fc397f19ac) {
                DAT_0021f4dc = 0;
                lVar6 = 0x50923b350bfc7260;
              }
            }
            else if (lVar7 == 0x75d81be8b451f40e) {
              DAT_0021d134 = DAT_0021d134 ^ 0xea;
              DAT_0021d135 = DAT_0021d135 ^ 0xea;
              DAT_0021d137 = DAT_0021d137 ^ 0xea;
              DAT_0021d136 = DAT_0021d136 ^ 0xea;
              DAT_0021f6e4 = '\x01';
              lVar6 = -0x306994ed04e5f2;
            }
            else {
              if (lVar7 == 0x77bf7cc752b5ba32) {
                lVar6 = 0x417e39f85c387739;
                bVar2 = DAT_0021f6cc == '\0';
                lVar7 = 0x705c9d72623b0c92;
                goto LAB_0013c4ac;
              }
              if (lVar7 == 0x77d3a46d4bf10f6f) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f484);
                lVar6 = -0x7a26aa04f63c2e3c;
                if (iVar3 != 0) {
                  lVar6 = 0x2bb3b80d6cc13f4;
                }
              }
            }
          }
          else if (lVar7 < 0x79a92fb90839fdc7) {
            if (lVar7 == 0x7854f9396bb107a0) {
              DAT_0021f460 = 0;
              lVar6 = 0x63366f9b130dac94;
            }
            else if (lVar7 == 0x78ddb835653f250f) {
              DAT_0021f490 = 0;
              lVar6 = 0x62216f5bab7e7ee3;
            }
          }
          else {
            lVar6 = 0x5229545849c5537;
            if (((lVar7 != 0x79a92fb90839fdc7) &&
                (lVar6 = 0x7255e29735145109, lVar7 != 0x7b2f6ffc35bdbc94)) &&
               (lVar6 = lVar7, lVar7 == 0x7b4f39960d86d338)) {
LAB_00140ae4:
              local_bc = 1;
LAB_00140f7c:
              lVar6 = 0x3d28b875fdc922b9;
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < 0x7f46f073c3668aa7) {
          if (lVar7 < 0x7d170bd3e7c27c4a) {
            lVar6 = -0x60f65f094cc6291f;
            if ((lVar7 != 0x7bfdd0f52b196613) && (lVar6 = lVar7, lVar7 == 0x7cdec887c6be3f55)) {
              DAT_0021f4d0 = 0;
              lVar6 = -0x4c1aa46b7e67815b;
            }
          }
          else if (lVar7 == 0x7d170bd3e7c27c4a) {
            DAT_0021d044 = DAT_0021d044 ^ 7;
            DAT_0021d045 = DAT_0021d045 ^ 7;
            DAT_0021d046 = DAT_0021d046 ^ 7;
            DAT_0021d047 = DAT_0021d047 ^ 7;
            DAT_0021d048 = DAT_0021d048 ^ 7;
            DAT_0021f6ce = '\x01';
            lVar6 = 0x532419efbc2b5e6b;
          }
          else if (lVar7 == 0x7d805792497b81d6) {
            DAT_0021d0c8 = DAT_0021d0c8 ^ 0x9d;
            DAT_0021d0c9 = DAT_0021d0c9 ^ 0x9d;
            DAT_0021d0ca = DAT_0021d0ca ^ 0x9d;
            DAT_0021d0cb = DAT_0021d0cb ^ 0x9d;
            DAT_0021d0c0 = DAT_0021d0c0 ^ 0x9d9d9d9d9d9d9d9d;
            DAT_0021f6d9 = '\x01';
            lVar6 = -0x6ca1699278fbc407;
          }
          else if (lVar7 == 0x7e6b30276ce9c74c) {
            lVar6 = 0x65526979ebc09ea9;
          }
          goto LAB_0013c4b4;
        }
        if (0x7f53cdda607834e9 < lVar7) {
          if (lVar7 == 0x7f53cdda607834ea) {
            DAT_0021f2bc = 0;
            iVar3 = FUN_001e17a8(&DAT_0021c618,local_108);
            lVar6 = 0x4f48a1ad939cd285;
            if (iVar3 != 0) {
              lVar6 = -0x35e987b56477b111;
            }
          }
          else {
            lVar6 = 0xec76097e7bcef2b;
            if ((lVar7 != 0x7f86b75637625789) && (lVar6 = lVar7, lVar7 == 0x7fb0665afadbc55b)) {
              DAT_0021d1a0 = DAT_0021d1a0 ^ 0x83;
              DAT_0021d1a1 = DAT_0021d1a1 ^ 0x83;
              DAT_0021d1a2 = DAT_0021d1a2 ^ 0x83;
              DAT_0021d198 = DAT_0021d198 ^ 0x8383838383838383;
              DAT_0021f6ee = '\x01';
              lVar6 = -0x3402d80c1c036ab5;
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 != 0x7f46f073c3668aa7) {
          if (lVar7 == 0x7f495c43d9bfe479) {
            DAT_0021d070 = DAT_0021d070 ^ 0xc;
            DAT_0021d071 = DAT_0021d071 ^ 0xc;
            DAT_0021d068 = DAT_0021d068 ^ 0xc0c0c0c0c0c0c0c;
            DAT_0021f6d1 = '\x01';
            lVar6 = 0x7854f9396bb107a0;
          }
          goto LAB_0013c4b4;
        }
        lVar5 = 0x58e7f66dfaef3500;
        bVar2 = DAT_0021f6f1 == '\0';
        lVar6 = 0x79a92fb90839fdc7;
      }
    }
LAB_00142c34:
    if (bVar2) {
      lVar6 = lVar5;
    }
    goto LAB_0013c4b4;
  }
  if (lVar7 < -0x43a4643bd96ea240) {
    if (lVar7 < -0x60f65f094cc6291f) {
      if (lVar7 < -0x6fc07f9320fe5299) {
        if (-0x789fa15714512d96 < lVar7) {
          if (lVar7 < -0x734567a119bfc6cb) {
            if (lVar7 < -0x775da26457bb4de9) {
              if (lVar7 == -0x789fa15714512d95) {
                DAT_0021f474 = 0;
                lVar6 = -0x4eaa9e97fc9ab0fd;
              }
              else if (lVar7 == -0x7898a018c23c0e73) {
                lVar6 = 0x322023fa146ac358;
              }
            }
            else if (lVar7 == -0x775da26457bb4de9) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4f0);
              lVar6 = -0x1cd5075efc733bfd;
              if (iVar3 != 0) {
                lVar6 = -0x2c57d3fd7c7f029;
              }
            }
            else if (lVar7 == -0x759693278ea668ee) {
              DAT_0021f47c = 0;
              lVar6 = -0x34730b978f0510e;
            }
            else if (lVar7 == -0x740ffa5db660bfc4) {
              lVar6 = -0x1b765ab63ff9eef2;
            }
          }
          else if (lVar7 < -0x72adfa11a6c8f77e) {
            lVar6 = 0x6c53b7f23bd8197e;
            if ((lVar7 != -0x734567a119bfc6cb) && (lVar6 = lVar7, lVar7 == -0x73338243f4a6de27)) {
              lVar6 = -0x4776c58602e23dab;
            }
          }
          else {
            lVar6 = 0x7f53cdda607834ea;
            if (lVar7 != -0x72adfa11a6c8f77e) {
              if (lVar7 == -0x71c2cfed19aea11f) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f4bc);
                lVar6 = -0x28cf2a27624d55dd;
                if (iVar3 != 0) {
                  lVar6 = -0x50da7c4df1e2296b;
                }
              }
              else {
                lVar6 = lVar7;
                if (lVar7 == -0x70de9c263ba1aea6) {
                  DAT_0021f4b8 = 0;
                  lVar6 = 0x3d437eeae255edfe;
                }
              }
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < -0x7ca3f85d747a4cdf) {
          if (lVar7 < -0x7dc4f714e3c18336) {
            if (lVar7 == -0x7fe4f8dd07f1f940) {
              DAT_0021d1b8 = DAT_0021d1b8 ^ 0x12;
              DAT_0021d1b9 = DAT_0021d1b9 ^ 0x12;
              DAT_0021d1ba = DAT_0021d1ba ^ 0x12;
              DAT_0021d1b0 = DAT_0021d1b0 ^ 0x1212121212121212;
              DAT_0021f6f0 = '\x01';
              lVar6 = 0x759631fc397f19ac;
            }
            else if (lVar7 == -0x7e2d819d150dad44) {
              lVar6 = 0x13dbd2f4a45142f5;
            }
          }
          else {
            lVar6 = -0x5985df81977688a6;
            if ((lVar7 != -0x7dc4f714e3c18336) && (lVar6 = lVar7, lVar7 == -0x7cab24dad8e1e20d)) {
              DAT_0021d1f8 = DAT_0021d1f8 ^ 0xedededededededed;
              DAT_0021f6f5 = '\x01';
              lVar6 = 0x5078209c718abc4a;
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < -0x7b3db123be974a14) {
          if (lVar7 != -0x7ca3f85d747a4cdf) {
            if (lVar7 == -0x7baefb2c63782b3a) {
              DAT_0021f4b0 = 0;
              lVar6 = 0x332b11cab2aebb36;
            }
            goto LAB_0013c4b4;
          }
          lVar6 = -0x6776b8dbd80e0a69;
          bVar2 = DAT_0021f6f0 == '\0';
          lVar7 = -0x7fe4f8dd07f1f940;
        }
        else {
          if (lVar7 == -0x7b3db123be974a14) {
            local_e8 = 0;
            lVar6 = 0x62d5a9b884722eb0;
            goto LAB_0013c4b4;
          }
          if (lVar7 != -0x7a26aa04f63c2e3c) {
            if (lVar7 == -0x7968f06893108d8d) {
              lVar6 = 0x47b7536cc82d3da1;
            }
            goto LAB_0013c4b4;
          }
          lVar6 = -0x1da0928e3de4f30b;
          bVar2 = DAT_0021f6da == '\0';
          lVar7 = -0xce2353fa3c0de74;
        }
      }
      else {
        if (-0x69328f58fb79e86a < lVar7) {
          if (lVar7 < -0x6736978b9af4e43d) {
            if (lVar7 < -0x689f984316d27398) {
              lVar6 = -0x4c1aa46b7e67815b;
              if ((lVar7 != -0x69328f58fb79e869) && (lVar6 = lVar7, lVar7 == -0x68d260166e73e49d)) {
                lVar6 = 0x7be06a5e8f3e515;
              }
            }
            else if (lVar7 == -0x689f984316d27398) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f474);
              lVar6 = -0x5509d9bf942c454a;
              if (iVar3 != 0) {
                lVar6 = -0x60389851741e0b7f;
              }
            }
            else if (lVar7 == -0x6858af270aa78f83) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f2bc);
              lVar6 = -0x429f8ae05a25b1a4;
              if (iVar3 != 0) {
                lVar6 = -0xeb44e86d10b44c6;
              }
            }
            else if (lVar7 == -0x6776b8dbd80e0a69) {
              lVar6 = 0x759631fc397f19ac;
            }
          }
          else if (lVar7 < -0x628593b71adfef50) {
            if (lVar7 == -0x6736978b9af4e43d) {
              lVar6 = -0x62ca8371a08e8353;
              bVar2 = DAT_0021f6ee == '\0';
              lVar7 = 0x7fb0665afadbc55b;
              goto LAB_0013c4ac;
            }
            if (lVar7 == -0x62ca8371a08e8353) {
              lVar6 = -0x3402d80c1c036ab5;
            }
          }
          else if (lVar7 == -0x628593b71adfef50) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4b0);
            lVar6 = 0x49a32c3f71935a86;
            if (iVar3 != 0) {
              lVar6 = 0x541a38fe766e0536;
            }
          }
          else if (lVar7 == -0x626cc2766857ffa1) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4f4);
            lVar6 = -0x6d8fa9412ec2025b;
            if (iVar3 != 0) {
              lVar6 = 0x1b5e95948bbfc890;
            }
          }
          else if (lVar7 == -0x619d376abf4efef1) {
            DAT_0021d104 = DAT_0021d104 ^ 0xef;
            DAT_0021d105 = DAT_0021d105 ^ 0xef;
            DAT_0021d106 = DAT_0021d106 ^ 0xef;
            DAT_0021d107 = DAT_0021d107 ^ 0xef;
            DAT_0021d108 = DAT_0021d108 ^ 0xef;
            DAT_0021d109 = DAT_0021d109 ^ 0xef;
            DAT_0021d10a = DAT_0021d10a ^ 0xef;
            DAT_0021f6e0 = '\x01';
            lVar6 = 0x5e8dff8b992d81b7;
          }
          goto LAB_0013c4b4;
        }
        if (-0x6c68d7b5c811f6f7 < lVar7) {
          if (lVar7 < -0x6bcfa590dbde0f2b) {
            lVar6 = -0x4903589a62bbfd5a;
            if ((lVar7 != -0x6c68d7b5c811f6f6) && (lVar6 = lVar7, lVar7 == -0x6c45fd41b9b9e9b0)) {
              DAT_0021f484 = 0;
              lVar6 = -0x6b6c9ed4099e253b;
            }
          }
          else {
            lVar6 = -0x47838cdcc7a93d22;
            if (lVar7 != -0x6bcfa590dbde0f2b) {
              if (lVar7 == -0x6b6c9ed4099e253b) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f480);
                lVar6 = -0x44a8830066c7000c;
                if (iVar3 != 0) {
                  lVar6 = -0x4c9065780aea359c;
                }
              }
              else {
                lVar6 = lVar7;
                if (lVar7 == -0x695144aef4351566) {
                  DAT_0021f468 = 0;
                  lVar6 = 0x3f0bd45daa6221b4;
                }
              }
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < -0x6d8fa9412ec2025b) {
          if (lVar7 == -0x6fc07f9320fe5299) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4e0);
            lVar6 = 0x7f46f073c3668aa7;
            if (iVar3 != 0) {
              lVar6 = -0x1f292cceed87d947;
            }
          }
          else if (lVar7 == -0x6e47912b95736632) {
            DAT_0021f45c = 0;
            lVar6 = 0xec76097e7bcef2b;
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 != -0x6d8fa9412ec2025b) {
          if (lVar7 == -0x6ce61e5184704df8) {
            DAT_0021f4a0 = 0;
            lVar6 = 0x3507dd7b542d27ab;
          }
          else if (lVar7 == -0x6ca1699278fbc407) {
            DAT_0021f480 = 0;
            lVar6 = -0x3d1bfd2f6117f838;
          }
          goto LAB_0013c4b4;
        }
        lVar6 = -0x4c7d707d0984aec1;
        bVar2 = DAT_0021f6f6 == '\0';
        lVar7 = -0x1323c9ce2076db1f;
      }
    }
    else if (lVar7 < -0x50da7c4df1e2296b) {
      if (lVar7 < -0x5985df81977688a6) {
        if (lVar7 < -0x5b85010f12975fd6) {
          if (lVar7 < -0x5e837daa99845b8d) {
            if (lVar7 == -0x60f65f094cc6291f) {
              DAT_0021f4d8 = 0;
              lVar6 = 0x2d8dc40e3b9363cb;
            }
            else if (lVar7 == -0x60389851741e0b7f) {
              lVar6 = -0x689f984316d27398;
            }
          }
          else {
            lVar6 = -0x2ef5dc14607801bd;
            if ((lVar7 != -0x5e837daa99845b8d) && (lVar6 = lVar7, lVar7 == -0x5de94bfaa943077f)) {
              DAT_0021c618 = DAT_0021c618 ^ 0x8a;
              DAT_0021c619 = DAT_0021c619 ^ 0x8a;
              DAT_0021c61a = DAT_0021c61a ^ 0x8a;
              DAT_0021c61b = DAT_0021c61b ^ 0x8a;
              DAT_0021c61c = DAT_0021c61c ^ 0x8a;
              DAT_0021c61d = DAT_0021c61d ^ 0x8a;
              DAT_0021c61e = DAT_0021c61e ^ 0x8a;
              DAT_0021f668 = '\x01';
              lVar6 = 0x7f53cdda607834ea;
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < -0x5affdd1cd5b3ca08) {
          if (lVar7 == -0x5b85010f12975fd6) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4a4);
            lVar6 = -0x29b381ad01d298ca;
            if (iVar3 != 0) {
              lVar6 = -0x2d5b1ad0a297e947;
            }
          }
          else if (lVar7 == -0x5b299dfa4e31d1f3) {
            DAT_0021d058 = DAT_0021d058 ^ 0x2c;
            DAT_0021d059 = DAT_0021d059 ^ 0x2c;
            DAT_0021d05a = DAT_0021d05a ^ 0x2c;
            DAT_0021d050 = DAT_0021d050 ^ 0x2c2c2c2c2c2c2c2c;
            DAT_0021f6cf = '\x01';
            lVar6 = -0x486adeba556cc86b;
          }
          goto LAB_0013c4b4;
        }
        lVar6 = -0x34a50991224a726;
        if (((lVar7 == -0x5affdd1cd5b3ca08) ||
            (lVar6 = 0x5e8dff8b992d81b7, lVar7 == -0x5a6cdb8e37c54ff7)) ||
           (lVar6 = lVar7, lVar7 != -0x59a2bb59ae1ea724)) goto LAB_0013c4b4;
        lVar6 = -0xe660101af902837;
        bVar2 = DAT_0021f6e1 == '\0';
        lVar7 = -0x472e8396327813bd;
      }
      else if (lVar7 < -0x556d88aa4bc1f0e7) {
        if (lVar7 < -0x563930cc5856f4d8) {
          if (lVar7 == -0x5985df81977688a6) {
            lVar6 = 0x7b4f39960d86d338;
            if (local_f0 <= local_d0) {
              lVar6 = 0x41dcfd85cbf991f9;
            }
          }
          else if (lVar7 == -0x573bd37249d20b95) {
            DAT_0021f4a8 = 0;
            lVar6 = -0x5b85010f12975fd6;
          }
          goto LAB_0013c4b4;
        }
        lVar6 = 0x7c82ed2cd7a0f65;
        if (lVar7 == -0x563930cc5856f4d8) goto LAB_0013c4b4;
        if (lVar7 == -0x56113aff5c6fd666) {
          lVar5 = -0x3ea8e1ae14da9ce7;
          bVar2 = DAT_0021f6f3 == '\0';
          lVar6 = -0x5affdd1cd5b3ca08;
          goto LAB_00142c34;
        }
        lVar6 = lVar7;
        if (lVar7 != -0x5578eaae15f71d2e) goto LAB_0013c4b4;
        lVar6 = 0x5dc65485ea435449;
        bVar2 = DAT_0021f6ec == '\0';
        lVar7 = -0x3f27a9072f05f006;
      }
      else if (lVar7 < -0x5509d9bf942c454a) {
        if (lVar7 == -0x556d88aa4bc1f0e7) {
          DAT_0021d190 = DAT_0021d190 ^ 0x40;
          DAT_0021d191 = DAT_0021d191 ^ 0x40;
          DAT_0021d193 = DAT_0021d193 ^ 0x40;
          DAT_0021d192 = DAT_0021d192 ^ 0x40;
          DAT_0021f6ed = '\x01';
          lVar6 = 0x7cdec887c6be3f55;
          goto LAB_0013c4b4;
        }
        if (lVar7 != -0x556a9424a95c29d0) goto LAB_0013c4b4;
        lVar6 = 0x583e6f07c6e46e67;
        bVar2 = DAT_0021f6df == '\0';
        lVar7 = -0x530c9e53e1452dd4;
      }
      else {
        if (lVar7 != -0x5509d9bf942c454a) {
          if (lVar7 == -0x530c9e53e1452dd4) {
            DAT_0021d100 = DAT_0021d100 ^ 0x2d;
            DAT_0021d101 = DAT_0021d101 ^ 0x2d;
            DAT_0021d103 = DAT_0021d103 ^ 0x2d;
            DAT_0021d102 = DAT_0021d102 ^ 0x2d;
            DAT_0021f6df = '\x01';
            lVar6 = 0x3489314e2c777a76;
          }
          else if (lVar7 == -0x5269e71b6d6b1fd4) {
            lVar6 = -0x486adeba556cc86b;
          }
          goto LAB_0013c4b4;
        }
        lVar6 = 0x35f9e8fad92c7a8e;
        bVar2 = DAT_0021f6d6 == '\0';
        lVar7 = 0x14036979895103a6;
      }
    }
    else {
      if (-0x4acc02d50d17df28 < lVar7) {
        if (lVar7 < -0x472e8396327813bd) {
          if (lVar7 < -0x486adeba556cc86b) {
            lVar6 = 0x78ddb835653f250f;
            if ((lVar7 != -0x4acc02d50d17df27) && (lVar6 = lVar7, lVar7 == -0x4903589a62bbfd5a)) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4e8);
              lVar6 = -0x56113aff5c6fd666;
              if (iVar3 != 0) {
                lVar6 = -0x6c68d7b5c811f6f6;
              }
            }
          }
          else if (lVar7 == -0x486adeba556cc86b) {
            DAT_0021f458 = 0;
            lVar6 = -0x1b1c3c4c5eb72e1d;
          }
          else if (lVar7 == -0x47838cdcc7a93d22) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f44c);
            lVar6 = 0x77bf7cc752b5ba32;
            if (iVar3 != 0) {
              lVar6 = -0x6bcfa590dbde0f2b;
            }
          }
          else if (lVar7 == -0x4776c58602e23dab) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f450);
            lVar6 = 0x16e1c46dbf070820;
            if (iVar3 != 0) {
              lVar6 = -0x73338243f4a6de27;
            }
          }
        }
        else if (lVar7 < -0x452873ac1dc4f1ee) {
          if (lVar7 == -0x472e8396327813bd) {
            DAT_0021d118 = DAT_0021d118 ^ 0xd;
            DAT_0021d119 = DAT_0021d119 ^ 0xd;
            DAT_0021d11a = DAT_0021d11a ^ 0xd;
            DAT_0021d11b = DAT_0021d11b ^ 0xd;
            DAT_0021d11c = DAT_0021d11c ^ 0xd;
            DAT_0021d11d = DAT_0021d11d ^ 0xd;
            DAT_0021d110 = DAT_0021d110 ^ 0xd0d0d0d0d0d0d0d;
            DAT_0021f6e1 = '\x01';
            lVar6 = -0x6ce61e5184704df8;
          }
          else if (lVar7 == -0x45b5503cc22f23e9) {
            lVar6 = 0x5078209c718abc4a;
          }
        }
        else {
          lVar6 = 0x359a91a576f35a55;
          if (lVar7 != -0x452873ac1dc4f1ee) {
            if (lVar7 == -0x44e0528419669501) {
              DAT_0021f4c0 = 0;
              lVar6 = -0x71c2cfed19aea11f;
            }
            else {
              lVar6 = lVar7;
              if (lVar7 == -0x44a8830066c7000c) {
                lVar5 = 0x7d805792497b81d6;
                bVar2 = DAT_0021f6d9 == '\0';
                lVar6 = 0x1965ef5d6c03c45a;
                goto LAB_00142c34;
              }
            }
          }
        }
        goto LAB_0013c4b4;
      }
      if (-0x4deb3b7cb6b14d40 < lVar7) {
        if (lVar7 < -0x4c9065780aea359c) {
          lVar6 = 0x3f0bd45daa6221b4;
          if ((lVar7 != -0x4deb3b7cb6b14d3f) && (lVar6 = lVar7, lVar7 == -0x4d639f690ca37e23)) {
            lVar6 = 0x1d0e0c756a222057;
          }
        }
        else {
          lVar6 = -0x6b6c9ed4099e253b;
          if (((lVar7 != -0x4c9065780aea359c) &&
              (lVar6 = 0x6e0a62d94a25f4ca, lVar7 != -0x4c7d707d0984aec1)) &&
             (lVar6 = lVar7, lVar7 == -0x4c1aa46b7e67815b)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4cc);
            lVar6 = -0x5578eaae15f71d2e;
            if (iVar3 != 0) {
              lVar6 = -0x69328f58fb79e869;
            }
          }
        }
        goto LAB_0013c4b4;
      }
      if (lVar7 < -0x4f30f2c889a63f0a) {
        lVar6 = -0x71c2cfed19aea11f;
        if ((lVar7 != -0x50da7c4df1e2296b) && (lVar6 = lVar7, lVar7 == -0x5010a6c4d0460052))
        goto LAB_00140ae4;
        goto LAB_0013c4b4;
      }
      if (lVar7 != -0x4f30f2c889a63f0a) {
        if (lVar7 == -0x4eaa9e97fc9ab0fd) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f470);
          lVar6 = -0x21fb391dfbb68eb6;
          if (iVar3 != 0) {
            lVar6 = 0x533a416780d3c555;
          }
        }
        else if (lVar7 == -0x4e299df62a7cac77) {
          lVar6 = 0xcfb05277a4b5408;
        }
        goto LAB_0013c4b4;
      }
      lVar6 = -0x5a6cdb8e37c54ff7;
      bVar2 = DAT_0021f6e0 == '\0';
      lVar7 = -0x619d376abf4efef1;
    }
  }
  else if (lVar7 < -0x1f9fab898c21c48b) {
    if (lVar7 < -0x35e987b56477b111) {
      if (lVar7 < -0x3c99ad1c41165c93) {
        if (-0x3f27a9072f05f007 < lVar7) {
          if (lVar7 < -0x3ea8e1ae14da9ce7) {
            if (lVar7 == -0x3f27a9072f05f006) {
              DAT_0021d188 = DAT_0021d188 ^ 0x3a;
              DAT_0021d189 = DAT_0021d189 ^ 0x3a;
              DAT_0021d18a = DAT_0021d18a ^ 0x3a;
              DAT_0021d18b = DAT_0021d18b ^ 0x3a;
              DAT_0021d18c = DAT_0021d18c ^ 0x3a;
              DAT_0021d18d = DAT_0021d18d ^ 0x3a;
              DAT_0021d18e = DAT_0021d18e ^ 0x3a;
              DAT_0021f6ec = '\x01';
              lVar6 = -0x2753c30d7363ac3a;
            }
            else if (lVar7 == -0x3ecf4ae5526b2773) {
              lVar6 = -0xb03dbd8ad309b99;
              bVar2 = DAT_0021f6e7 == '\0';
              lVar7 = 0x30fb9398ead65061;
              goto LAB_0013c4ac;
            }
          }
          else if (lVar7 == -0x3ea8e1ae14da9ce7) {
            DAT_0021d1e0 = DAT_0021d1e0 ^ 0x46;
            DAT_0021d1e1 = DAT_0021d1e1 ^ 0x46;
            DAT_0021d1e3 = DAT_0021d1e3 ^ 0x46;
            DAT_0021d1e2 = DAT_0021d1e2 ^ 0x46;
            DAT_0021f6f3 = '\x01';
            lVar6 = -0x34a50991224a726;
          }
          else {
            lVar6 = 0x68a3e880600b4d20;
            if ((lVar7 != -0x3dadc886f5cb9c5c) && (lVar6 = lVar7, lVar7 == -0x3d1bfd2f6117f838)) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f47c);
              lVar6 = 0x3cc08657015b0ae;
              if (iVar3 != 0) {
                lVar6 = 0x2b7a8afa235a4085;
              }
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < -0x429f8ae05a25b1a4) {
          if (lVar7 == -0x43a4643bd96ea240) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f4e4);
            lVar6 = 0x43af3929eeee76fd;
            if (iVar3 != 0) {
              lVar6 = 0x13348ff9bd4fd530;
            }
          }
          else if (lVar7 == -0x4361d679494ff337) {
            lVar6 = 0x19e11c6f0bc9d0a7;
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 != -0x429f8ae05a25b1a4) {
          if (lVar7 == -0x4267b177b81111b4) {
            lVar6 = 0x6429008ef59692fe;
          }
          goto LAB_0013c4b4;
        }
        lVar5 = -0x5de94bfaa943077f;
        bVar2 = DAT_0021f668 == '\0';
        lVar6 = -0x72adfa11a6c8f77e;
      }
      else {
        if (lVar7 < -0x394dba9bbcfacc3d) {
          if (lVar7 < -0x3bd84a77cb8efb94) {
            if (lVar7 == -0x3c99ad1c41165c93) {
              DAT_0021d028 = DAT_0021d028 ^ 0x3535353535353535;
              DAT_0021f6cb = '\x01';
              lVar6 = 0x19e11c6f0bc9d0a7;
            }
            else if (lVar7 == -0x3c3a57cb1f548fc0) {
              lVar6 = -0x1f9fab898c21c48b;
            }
          }
          else {
            if (lVar7 == -0x3bd84a77cb8efb94) {
              lVar5 = 0x240d6305955b6afa;
              bVar2 = DAT_0021f6f4 == '\0';
              lVar6 = -0x563930cc5856f4d8;
              goto LAB_00142c34;
            }
            if (lVar7 == -0x3bc5ffbfea79ddb1) {
              DAT_0021d1a4 = DAT_0021d1a4 ^ 0x4a;
              DAT_0021d1a5 = DAT_0021d1a5 ^ 0x4a;
              DAT_0021d1a8 = DAT_0021d1a8 ^ 0x4a;
              DAT_0021d1a6 = DAT_0021d1a6 ^ 0x4a;
              DAT_0021d1a7 = DAT_0021d1a7 ^ 0x4a;
              DAT_0021d1a9 = DAT_0021d1a9 ^ 0x4a;
              DAT_0021f6ef = '\x01';
              lVar6 = -0x60f65f094cc6291f;
            }
            else if (lVar7 == -0x39a12b1392ada23e) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f444);
              lVar6 = 0x3cc09a4be449f2b2;
              if (iVar3 != 0) {
                lVar6 = -0x4fb1f94f726abc;
              }
            }
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 < -0x384af7dcda25fa59) {
          if (lVar7 == -0x394dba9bbcfacc3d) goto LAB_00140f78;
          if (lVar7 == -0x38e8c0137f228ba6) {
            lVar6 = -0x394dba9bbcfacc3d;
          }
          goto LAB_0013c4b4;
        }
        if (lVar7 != -0x384af7dcda25fa59) {
          if (lVar7 == -0x380d23c280fd62a7) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f494);
            lVar6 = 0x6b5dd7f8495e7441;
            if (iVar3 != 0) {
              lVar6 = 0x2511acddc55df9f5;
            }
          }
          else if (lVar7 == -0x3639ada08d62d512) {
            lVar6 = 0x332b11cab2aebb36;
          }
          goto LAB_0013c4b4;
        }
        lVar5 = -0x150be2d39fb0ddef;
        bVar2 = DAT_0021f6e6 == '\0';
        lVar6 = -0x34c4a5597dc3532b;
      }
      goto LAB_00142c34;
    }
    if (lVar7 < -0x2753c30d7363ac3a) {
      if (lVar7 < -0x2d1a3b095430b561) {
        if (lVar7 < -0x3402d80c1c036ab5) {
          lVar6 = -0x394dba9bbcfacc3d;
          if ((lVar7 != -0x35e987b56477b111) && (lVar6 = lVar7, lVar7 == -0x34c4a5597dc3532b)) {
            lVar6 = 0x34648656952d6215;
          }
        }
        else if (lVar7 == -0x3402d80c1c036ab5) {
          DAT_0021f4d4 = 0;
          lVar6 = 0x6c53b7f23bd8197e;
        }
        else if (lVar7 == -0x2ef5dc14607801bd) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f468);
          lVar6 = -0x1cb64f1f4afe4ade;
          if (iVar3 != 0) {
            lVar6 = -0x5e837daa99845b8d;
          }
        }
        else if (lVar7 == -0x2d5b1ad0a297e947) {
          lVar6 = -0x5b85010f12975fd6;
        }
        goto LAB_0013c4b4;
      }
      if (lVar7 < -0x2ab2143e82064a4f) {
        if (lVar7 == -0x2d1a3b095430b561) {
          DAT_0021d168 = DAT_0021d168 ^ 0x98;
          DAT_0021d169 = DAT_0021d169 ^ 0x98;
          DAT_0021d16a = DAT_0021d16a ^ 0x98;
          DAT_0021d16b = DAT_0021d16b ^ 0x98;
          DAT_0021d160 = DAT_0021d160 ^ 0x9898989898989898;
          DAT_0021f6e9 = '\x01';
          lVar6 = -0x44e0528419669501;
        }
        else if (lVar7 == -0x2b015dc3d521c345) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f4a0);
          lVar6 = -0x59a2bb59ae1ea724;
          if (iVar3 != 0) {
            lVar6 = 0x5ce8a703dc923429;
          }
        }
        goto LAB_0013c4b4;
      }
      lVar6 = -0xc4b1111d82acd28;
      if (lVar7 == -0x2ab2143e82064a4f) goto LAB_0013c4b4;
      if (lVar7 == -0x29b381ad01d298ca) {
        lVar5 = 0x20bb1b664a63ded6;
        bVar2 = DAT_0021f6e2 == '\0';
        lVar6 = 0x10352d19fadd5089;
        goto LAB_00142c34;
      }
      lVar6 = lVar7;
      if (lVar7 != -0x28cf2a27624d55dd) goto LAB_0013c4b4;
      lVar6 = 0x7b2f6ffc35bdbc94;
      bVar2 = DAT_0021f6e8 == '\0';
      lVar7 = 0x4ee01e5f5a193425;
    }
    else if (lVar7 < -0x2220c3c7617c4410) {
      if (lVar7 < -0x26244e9901bd4184) {
        if (lVar7 == -0x2753c30d7363ac3a) {
          DAT_0021f4cc = 0;
          lVar6 = 0x3647e3366d517829;
        }
        else if (lVar7 == -0x26fb0fb700449341) {
          local_c8 = *(long *)(local_b8 + 0x20);
          lVar5 = -0x2220c3c7617c4410;
          bVar2 = local_c8 == 0;
          lVar6 = 0x3c452808514839de;
          goto LAB_00140fc4;
        }
        goto LAB_0013c4b4;
      }
      if (lVar7 != -0x26244e9901bd4184) {
        lVar6 = 0x62216f5bab7e7ee3;
        if ((lVar7 != -0x2558b6d1ab136160) && (lVar6 = lVar7, lVar7 == -0x24e34cade03597c9)) {
          lVar5 = -0x12213601559fb08b;
          bVar2 = DAT_0021f6d0 == '\0';
          lVar6 = 0x282d9b2cc5bf92db;
          goto LAB_00142c34;
        }
        goto LAB_0013c4b4;
      }
      lVar6 = -0x5269e71b6d6b1fd4;
      bVar2 = DAT_0021f6cf == '\0';
      lVar7 = -0x5b299dfa4e31d1f3;
    }
    else if (lVar7 < -0x21100d68e90649ef) {
      if (lVar7 == -0x2220c3c7617c4410) {
        lVar5 = FUN_001e16c4(local_c8);
        local_f0 = unaff_x26[local_d8 * 0x20 + 0x1f];
        local_f8 = unaff_x26 + local_d8 * 0x20 + 1;
        lVar6 = 0x150b39d1fb4a3c85;
        if (local_f0 != 0 && lVar5 != 0) {
          lVar6 = -0x20ecbed6b92a5044;
        }
        goto LAB_0013c4b4;
      }
      if (lVar7 != -0x21fb391dfbb68eb6) goto LAB_0013c4b4;
      lVar6 = -0x452873ac1dc4f1ee;
      bVar2 = DAT_0021f6d5 == '\0';
      lVar7 = -0x1d97edce4aabe65f;
    }
    else {
      if (lVar7 != -0x21100d68e90649ef) {
        if (lVar7 == -0x20ecbed6b92a5044) {
          lVar5 = FUN_001e238c(local_c8,*local_f8);
          lVar6 = -0xdbcbb04783be7b6;
          if (lVar5 != 0) {
            lVar6 = -0x7b3db123be974a14;
          }
        }
        else if (lVar7 == -0x207015b202abe8e8) {
          lVar6 = 0x6e62470ec0feca97;
        }
        goto LAB_0013c4b4;
      }
      lVar6 = -0x4361d679494ff337;
      bVar2 = DAT_0021f6cb == '\0';
      lVar7 = -0x3c99ad1c41165c93;
    }
  }
  else {
    if (-0x1323c9ce2076db20 < lVar7) {
      if (lVar7 < -0x9358c58688dfc3d) {
        if (lVar7 < -0xdbcbb04783be7b6) {
          if (lVar7 < -0xfefb2b179491bfe) {
            if (lVar7 == -0x1323c9ce2076db1f) {
              DAT_0021d200 = DAT_0021d200 ^ 0xe5e5e5e5e5e5e5e5;
              DAT_0021f6f6 = '\x01';
              lVar6 = 0x6e0a62d94a25f4ca;
            }
            else if (lVar7 == -0x12213601559fb08b) {
              DAT_0021d05c = DAT_0021d05c ^ 0xc2;
              DAT_0021d05d = DAT_0021d05d ^ 0xc2;
              DAT_0021d05e = DAT_0021d05e ^ 0xc2;
              DAT_0021d05f = DAT_0021d05f ^ 0xc2;
              DAT_0021d060 = DAT_0021d060 ^ 0xc2;
              DAT_0021f6d0 = '\x01';
              lVar6 = -0x6e47912b95736632;
            }
          }
          else if (lVar7 == -0xfefb2b179491bfe) {
            DAT_0021d040 = DAT_0021d040 ^ 0x7e;
            DAT_0021d038 = DAT_0021d038 ^ 0x7e7e7e7e7e7e7e7e;
            DAT_0021f6cd = '\x01';
            lVar6 = -0x1f9fab898c21c48b;
          }
          else {
            lVar6 = -0x6858af270aa78f83;
            if ((lVar7 != -0xeb44e86d10b44c6) && (lVar6 = lVar7, lVar7 == -0xe660101af902837)) {
              lVar6 = -0x6ce61e5184704df8;
            }
          }
        }
        else if (lVar7 < -0xc4b1111d82acd28) {
          if (lVar7 == -0xdbcbb04783be7b6) goto LAB_00140ae4;
          if (lVar7 == -0xce2353fa3c0de74) {
            DAT_0021d0cc = DAT_0021d0cc ^ 0xd0;
            DAT_0021d0cd = DAT_0021d0cd ^ 0xd0;
            DAT_0021d0ce = DAT_0021d0ce ^ 0xd0;
            DAT_0021d0cf = DAT_0021d0cf ^ 0xd0;
            DAT_0021d0d0 = DAT_0021d0d0 ^ 0xd0;
            DAT_0021f6da = '\x01';
            lVar6 = -0x6c45fd41b9b9e9b0;
          }
        }
        else if (lVar7 == -0xc4b1111d82acd28) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f498);
          lVar6 = -0x556a9424a95c29d0;
          if (iVar3 != 0) {
            lVar6 = -0x2ab2143e82064a4f;
          }
        }
        else {
          lVar6 = -0x70de9c263ba1aea6;
          if ((lVar7 != -0xb03dbd8ad309b99) && (lVar6 = lVar7, lVar7 == -0x951b8beaaf9633d)) {
            DAT_0021d0a4 = DAT_0021d0a4 ^ 0x74;
            DAT_0021d0a5 = DAT_0021d0a5 ^ 0x74;
            DAT_0021d0a6 = DAT_0021d0a6 ^ 0x74;
            DAT_0021d0a7 = DAT_0021d0a7 ^ 0x74;
            DAT_0021d0a8 = DAT_0021d0a8 ^ 0x74;
            DAT_0021d0a9 = DAT_0021d0a9 ^ 0x74;
            DAT_0021d0aa = DAT_0021d0aa ^ 0x74;
            DAT_0021f6d7 = '\x01';
            lVar6 = 0x13dbd2f4a45142f5;
          }
        }
      }
      else if (lVar7 < -0x507c44fec7c2c7b) {
        if (lVar7 < -0x846555cac12492d) {
          if (lVar7 == -0x9358c58688dfc3d) {
            DAT_0021d0e0 = DAT_0021d0e0 ^ 0x7b;
            DAT_0021d0e1 = DAT_0021d0e1 ^ 0x7b;
            DAT_0021d0e4 = DAT_0021d0e4 ^ 0x7b;
            DAT_0021d0e2 = DAT_0021d0e2 ^ 0x7b;
            DAT_0021d0e3 = DAT_0021d0e3 ^ 0x7b;
            DAT_0021d0e5 = DAT_0021d0e5 ^ 0x7b;
            DAT_0021f6dc = '\x01';
            lVar6 = 0x177698e10201e161;
          }
          else if (lVar7 == -0x8850930e4155230) {
            lVar6 = -0x44e0528419669501;
          }
        }
        else if (lVar7 == -0x846555cac12492d) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f460);
          lVar6 = 0x1cb159f56a524295;
          if (iVar3 != 0) {
            lVar6 = 0x55183fdd1ababed4;
          }
        }
        else if (lVar7 == -0x82f2f391ff20590) {
          DAT_0021d020 = DAT_0021d020 ^ 0xa5;
          DAT_0021d021 = DAT_0021d021 ^ 0xa5;
          DAT_0021d022 = DAT_0021d022 ^ 0xa5;
          DAT_0021d023 = DAT_0021d023 ^ 0xa5;
          DAT_0021d024 = DAT_0021d024 ^ 0xa5;
          DAT_0021f6ca = '\x01';
          lVar6 = 0x65526979ebc09ea9;
        }
        else if (lVar7 == -0x59bb24205359ae3) {
          DAT_0021f4c8 = 0;
          lVar6 = 0x322023fa146ac358;
        }
      }
      else if (lVar7 < -0x34a50991224a726) {
        lVar6 = 0x371c25c9b3273489;
        if ((lVar7 != -0x507c44fec7c2c7b) && (lVar6 = lVar7, lVar7 == -0x3c4447f43ecd21a)) {
          DAT_0021f4a4 = 0;
          lVar6 = -0x2b015dc3d521c345;
        }
      }
      else if (lVar7 == -0x34a50991224a726) {
        DAT_0021f4e8 = 0;
        lVar6 = -0x43a4643bd96ea240;
      }
      else if (lVar7 == -0x34730b978f0510e) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f478);
        lVar6 = 0x2aef154f79a0da70;
        if (iVar3 != 0) {
          lVar6 = 0x5df2e381f57d0c3d;
        }
      }
      else if (lVar7 == -0x2c57d3fd7c7f029) {
LAB_001401b8:
        lVar6 = -0x775da26457bb4de9;
      }
      goto LAB_0013c4b4;
    }
    if (-0x1a80798c55f502d5 < lVar7) {
      if (lVar7 < -0x17a7eed3136c37ca) {
        if (lVar7 < -0x19ce936cdcdab155) {
          if (lVar7 == -0x1a80798c55f502d4) {
            DAT_0021f4c4 = 0;
            lVar6 = 0x23926b4931e4ddd9;
          }
          else if (lVar7 == -0x19fa3f0660e43ea7) {
            DAT_0021d130 = DAT_0021d130 ^ 0xed;
            DAT_0021d128 = DAT_0021d128 ^ 0xedededededededed;
            DAT_0021f6e3 = '\x01';
            lVar6 = -0x573bd37249d20b95;
          }
        }
        else {
          lVar6 = 0x7854f9396bb107a0;
          if (((lVar7 != -0x19ce936cdcdab155) &&
              (lVar6 = 0x65a91f4f9884b239, lVar7 != -0x197501ae5265b971)) &&
             (lVar6 = lVar7, lVar7 == -0x18c522510761cbaf)) {
            lVar6 = 0x3647e3366d517829;
          }
        }
      }
      else if (lVar7 < -0x154ab831b644ad87) {
        lVar6 = -0x154ab831b644ad87;
        if ((lVar7 != -0x17a7eed3136c37ca) && (lVar6 = lVar7, lVar7 == -0x1603da059d267032)) {
          DAT_0021d1d8 = DAT_0021d1d8 ^ 0x5f5f5f5f5f5f5f5f;
          DAT_0021f6f2 = '\x01';
          lVar6 = 0x1d0e0c756a222057;
        }
      }
      else if (lVar7 == -0x154ab831b644ad87) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f448);
        lVar6 = -0x21100d68e90649ef;
        if (iVar3 != 0) {
          lVar6 = -0x17a7eed3136c37ca;
        }
      }
      else if (lVar7 == -0x150be2d39fb0ddef) {
        DAT_0021d13c = DAT_0021d13c ^ 0xb8;
        DAT_0021d13d = DAT_0021d13d ^ 0xb8;
        DAT_0021d13e = DAT_0021d13e ^ 0xb8;
        DAT_0021d13f = DAT_0021d13f ^ 0xb8;
        DAT_0021d140 = DAT_0021d140 ^ 0xb8;
        DAT_0021d141 = DAT_0021d141 ^ 0xb8;
        DAT_0021d142 = DAT_0021d142 ^ 0xb8;
        DAT_0021f6e6 = '\x01';
        lVar6 = 0x34648656952d6215;
      }
      else if (lVar7 == -0x136bfbed72f04248) {
        lVar6 = -0x6858af270aa78f83;
      }
      goto LAB_0013c4b4;
    }
    if (lVar7 < -0x1d97edce4aabe65f) {
      if (lVar7 < -0x1eef3fe850c5c861) {
        if (lVar7 == -0x1f9fab898c21c48b) {
          DAT_0021f450 = 0;
          lVar6 = -0x47838cdcc7a93d22;
        }
        else if (lVar7 == -0x1f292cceed87d947) {
          lVar6 = -0x6fc07f9320fe5299;
        }
      }
      else {
        lVar6 = -0x394dba9bbcfacc3d;
        if ((lVar7 != -0x1eef3fe850c5c861) && (lVar6 = lVar7, lVar7 == -0x1da0928e3de4f30b)) {
          lVar6 = -0x6c45fd41b9b9e9b0;
        }
      }
      goto LAB_0013c4b4;
    }
    if (lVar7 < -0x1cb64f1f4afe4ade) {
      if (lVar7 == -0x1d97edce4aabe65f) {
        DAT_0021d098 = DAT_0021d098 ^ 0x6b;
        DAT_0021d099 = DAT_0021d099 ^ 0x6b;
        DAT_0021d09a = DAT_0021d09a ^ 0x6b;
        DAT_0021d09b = DAT_0021d09b ^ 0x6b;
        DAT_0021d09d = DAT_0021d09d ^ 0x6b;
        DAT_0021d09c = DAT_0021d09c ^ 0x6b;
        DAT_0021d09e = DAT_0021d09e ^ 0x6b;
        DAT_0021d090 = DAT_0021d090 ^ 0x6b6b6b6b6b6b6b6b;
        DAT_0021f6d5 = '\x01';
        lVar6 = 0x359a91a576f35a55;
        goto LAB_0013c4b4;
      }
      if (lVar7 != -0x1cd5075efc733bfd) goto LAB_0013c4b4;
      lVar6 = -0x45b5503cc22f23e9;
      bVar2 = DAT_0021f6f5 == '\0';
      lVar7 = -0x7cab24dad8e1e20d;
    }
    else {
      if (lVar7 != -0x1cb64f1f4afe4ade) {
        if (lVar7 == -0x1b765ab63ff9eef2) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f4b8);
          lVar6 = -0x3ecf4ae5526b2773;
          if (iVar3 != 0) {
            lVar6 = -0x740ffa5db660bfc4;
          }
        }
        else if (lVar7 == -0x1b1c3c4c5eb72e1d) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f454);
          lVar6 = 0x5ff679bcf5dd63ff;
          if (iVar3 != 0) {
            lVar6 = 0x5365a5fd8a2e2ee4;
          }
        }
        goto LAB_0013c4b4;
      }
      lVar6 = 0x2970253a2678be6;
      bVar2 = DAT_0021f6d3 == '\0';
      lVar7 = 0x2928fe110bd1eabb;
    }
  }
LAB_0013c4ac:
  param_2 = lVar5;
  if (bVar2) {
    lVar6 = lVar7;
  }
  goto LAB_0013c4b4;
}

