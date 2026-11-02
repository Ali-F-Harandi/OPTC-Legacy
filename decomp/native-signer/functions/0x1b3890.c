// rea decompile_all
// name: FUN_001b3890
// address: 0x1b3890
// body: available
// range: 0x1b3890-0x1b6387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b6384 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001b3890(undefined4 *param_1,ulong param_2,uint param_3)

{
  char *__s;
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  int in_w9;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined1 auStack_130 [8];
  long local_128;
  undefined4 *local_120;
  ulong local_118;
  long local_110;
  uint local_104;
  char *local_100;
  char *local_f8;
  char *local_f0;
  long local_e8;
  void *local_e0;
  uint local_d4;
  FILE *local_d0;
  long *local_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  uint local_a4;
  long *local_a0;
  uint local_98;
  int local_94;
  long *local_90;
  uint local_84;
  long local_80;
  
  plVar1 = (long *)auStack_130;
  local_128 = tpidr_el0;
  local_80 = *(long *)(local_128 + 0x28);
  puVar5 = (undefined1 *)0x53e14c28908eeeeb;
  local_120 = param_1;
  local_118 = param_2;
LAB_001b39a8:
  uVar9 = param_3;
  iVar3 = in_w9;
  puVar6 = puVar5;
  __s = local_f8;
  puVar8 = (undefined4 *)((ulong)param_1 & 0xffffffff);
  uVar10 = param_2 & 0xffffffff;
  uVar7 = (uint)param_1;
  param_1 = puVar8;
  puVar5 = puVar6;
  in_w9 = iVar3;
  param_3 = uVar9;
  if ((long)puVar6 < -0x439fbf751afe062) {
    if ((long)puVar6 < -0x3cc2b3d163fe4027) {
      if ((long)puVar6 < -0x5eedd7c897c0ed2a) {
        if ((long)puVar6 < -0x7440f7630005660c) {
          if ((long)puVar6 < -0x7ad67c16664e25fa) {
            if (puVar6 == (undefined1 *)0x80f2364c5c89acff) {
              DAT_0021fadc = 0;
              lVar4 = FUN_001ebd68(local_b0,local_c0,&DAT_0021e890,0xe);
              local_94 = 5;
              if (lVar4 == 0) {
                local_94 = 0;
              }
              local_98 = lVar4 != 0 | local_84;
              goto LAB_001b6008;
            }
            if (puVar6 == (undefined1 *)0x81c9619a76458719) {
              puVar5 = (undefined1 *)0x39a16bddf8dc82a2;
              goto LAB_001b62f8;
            }
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0x8243cdd12671c505) {
              puVar5 = (undefined1 *)0x89359d8ef6b8d8b5;
            }
          }
          else if ((long)puVar6 < -0x76ca62710947274b) {
            if (puVar6 == (undefined1 *)0x852983e999b1da06) {
              iVar3 = FUN_00212730(0,1,&DAT_0021fae8);
              param_2 = uVar10;
              puVar5 = (undefined1 *)0xfaa36b650a651891;
              if (iVar3 != 0) {
                puVar5 = (undefined1 *)0xdcc6a561637b7cae;
              }
            }
            else {
              param_2 = uVar10;
              if (puVar6 == (undefined1 *)0x8682509a6d1bddd3) goto LAB_001b47a4;
            }
          }
          else if (puVar6 == (undefined1 *)0x89359d8ef6b8d8b5) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fac4);
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x5aba0b6a880053f8;
            if (iVar3 != 0) {
              puVar5 = (undefined1 *)0x62ccc994e2cb7da3;
            }
          }
          else {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0x8bb818770b2cd537) {
              *local_a0 = 0;
              *local_c8 = 0;
              param_1 = (undefined4 *)0x0;
              puVar5 = (undefined1 *)0xaf1ab327f0d9ace8;
            }
          }
          goto LAB_001b39a8;
        }
        if (-0x6d921b62c4f75c38 < (long)puVar6) {
          if ((long)puVar6 < -0x65a31e6327338728) {
            param_2 = uVar10;
            puVar5 = (undefined1 *)0xa6454b078cdf6a1e;
            if ((puVar6 != (undefined1 *)0x926de49d3b08a3c9) &&
               (puVar5 = puVar6, puVar6 == (undefined1 *)0x939eea0b05eec05c)) {
              puVar5 = (undefined1 *)0xe07e50eb5d9c155d;
            }
          }
          else if (puVar6 == (undefined1 *)0x9a5ce19cd8cc78d8) {
            DAT_0021fac4 = 0;
            lVar4 = FUN_001e5520(0,&DAT_0021e8a0,local_90);
            param_2 = uVar10;
            puVar5 = (undefined1 *)0xf111d00f6a8edda;
            if (lVar4 != 0) {
              puVar5 = (undefined1 *)0xa0df104a46d1908c;
            }
          }
          else {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0xa0df104a46d1908c) {
              puVar5 = (undefined1 *)0xed4378afd4d50792;
            }
          }
          goto LAB_001b39a8;
        }
        if (puVar6 != (undefined1 *)0x8bbf089cfffa99f4) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x2ea5ec9aa4903e5;
          if ((puVar6 != (undefined1 *)0x8d9cde8a92cc3625) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0x91b5ec04c28f8379)) {
            puVar5 = (undefined1 *)0x361985fb5d496b76;
          }
          goto LAB_001b39a8;
        }
      }
      else {
        if (-0x50e54cd80f265319 < (long)puVar6) {
          if ((long)puVar6 < -0x4a68ccefe6d06158) {
            if ((long)puVar6 < -0x503101e48cc58732) {
              if (puVar6 == (undefined1 *)0xaf1ab327f0d9ace8) {
                lVar4 = FUN_001b19e4(local_a0,local_c8,local_d0);
                param_2 = uVar10;
                puVar5 = (undefined1 *)0xca62b1ef4c4443c4;
                local_84 = uVar7;
                if (lVar4 != -1) {
                  puVar5 = (undefined1 *)0x8243cdd12671c505;
                }
              }
              else {
                param_2 = uVar10;
                if (puVar6 == (undefined1 *)0xaf48e395b2299f45) {
                  puVar5 = (undefined1 *)0x926de49d3b08a3c9;
                  if (DAT_0021fae9 == '\0') {
                    puVar5 = (undefined1 *)0x4101bf80446bdc20;
                  }
                }
              }
            }
            else if (puVar6 == (undefined1 *)0xafcefe1b733a78ce) {
              DAT_0021fae8 = 0;
              *local_b8 = -1;
              iVar3 = sscanf(__s,(char *)&DAT_0021e8ac);
              param_2 = uVar10;
              puVar5 = (undefined1 *)0xf8c8e906a9c05bfe;
              if (iVar3 != 1) {
                puVar5 = (undefined1 *)0x1b91058c21da9ca7;
              }
            }
            else {
              param_2 = uVar10;
              if (puVar6 == (undefined1 *)0xb36be675652c9c69) goto LAB_001b3988;
            }
          }
          else if ((long)puVar6 < -0x400e37f3caa97ab4) {
            param_2 = uVar10;
            puVar5 = (undefined1 *)0xc15e99e5395e3b25;
            if ((puVar6 != (undefined1 *)0xb5973310192f9ea8) &&
               (puVar5 = puVar6, puVar6 == (undefined1 *)0xbd6484722152868a)) {
              puVar5 = (undefined1 *)0x9a5ce19cd8cc78d8;
              goto LAB_001b5d0c;
            }
          }
          else if (puVar6 == (undefined1 *)0xbff1c80c3556854c) {
            DAT_0021fac4 = 0;
            local_e8 = FUN_001e5520(*local_a0,&DAT_0021e8a0,local_90);
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x3cd27908c3b8e652;
            if (local_e8 != 0) {
              puVar5 = (undefined1 *)0xc9e6c9135374767a;
            }
          }
          else {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0xc15e99e5395e3b25) {
              DAT_0021fae4 = 0;
              local_f8 = (char *)FUN_001e5520(local_e8,&DAT_0021e8a8,local_90);
              puVar5 = (undefined1 *)0x3485297baf428faf;
              if (local_f8 != (char *)0x0) {
                puVar5 = (undefined1 *)0x57cabee7967ab664;
              }
            }
          }
          goto LAB_001b39a8;
        }
        if ((long)puVar6 < -0x59acc9f9846a69a9) {
          if (puVar6 != (undefined1 *)0xa1122837683f12d6) {
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x3132af798d39a4e3;
            if ((puVar6 != (undefined1 *)0xa422ccb0ad4229c5) &&
               (puVar5 = puVar6, puVar6 == (undefined1 *)0xa6454b078cdf6a1e)) {
              DAT_0021fab8 = 0;
              local_a0 = plVar1 + -2;
              local_c8 = plVar1 + -4;
              local_90 = plVar1 + -6;
              plVar1 = plVar1 + -8;
              local_b8 = plVar1;
              local_d0 = (FILE *)FUN_001f3978(local_118,&DAT_0021e830);
              puVar5 = (undefined1 *)0x54cc8c62117e2258;
              if (local_d0 != (FILE *)0x0) {
                puVar5 = (undefined1 *)0x8bb818770b2cd537;
              }
            }
            goto LAB_001b39a8;
          }
        }
        else {
          if ((long)puVar6 < -0x5587caf0ffc9f6c4) {
            if (puVar6 == (undefined1 *)0xa65336067b959657) {
              local_e0 = (void *)*local_a0;
              param_2 = uVar10;
              puVar5 = (undefined1 *)0xf2bc86cfcf60b6d9;
              local_104 = uVar9;
              if (local_e0 != (void *)0x0) {
                puVar5 = (undefined1 *)0x205d1929c40a5522;
              }
            }
            else {
              param_2 = uVar10;
              if (puVar6 == (undefined1 *)0xa9449e77a77951ac) {
                puVar5 = (undefined1 *)0xe295faf8de22c1df;
              }
            }
            goto LAB_001b39a8;
          }
          if (puVar6 != (undefined1 *)0xaa78350f0036093c) {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0xae2afb10eb6df44e) {
              puVar5 = (undefined1 *)0x11389729d7590b94;
            }
            goto LAB_001b39a8;
          }
        }
      }
LAB_001b3988:
      param_2 = (ulong)local_84;
      puVar5 = (undefined1 *)0xfbc60408ae501f9e;
      in_w9 = 4;
      goto LAB_001b39a8;
    }
    if ((long)puVar6 < -0x220211bfb882d8f5) {
      if (-0x2d23be9e4092ee56 < (long)puVar6) {
        if ((long)puVar6 < -0x2701f7b957916a96) {
          if (puVar6 == (undefined1 *)0xd2dc4161bf6d11ab) {
            DAT_0021e8a4 = DAT_0021e8a4 ^ 0x42;
            DAT_0021e8a5 = DAT_0021e8a5 ^ 0x42;
            DAT_0021faf3 = '\x01';
            param_2 = uVar10;
            puVar5 = (undefined1 *)0xde3bbde8319e4138;
          }
          else {
            param_1 = (undefined4 *)(ulong)local_a4;
            param_2 = uVar10;
            puVar5 = (undefined1 *)0xaf1ab327f0d9ace8;
            if ((puVar6 != (undefined1 *)0xd4f46c31434e6776) &&
               (param_1 = puVar8, puVar5 = puVar6, puVar6 == (undefined1 *)0xd746c07de834a28d)) {
              puVar5 = (undefined1 *)0x39a16bddf8dc82a2;
            }
          }
        }
        else if ((long)puVar6 < -0x23395a9e9c848352) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0xed4378afd4d50792;
          if ((puVar6 != (undefined1 *)0xd8fe0846a86e956a) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0xdbb3f7f9e121c35a)) goto LAB_001b4338;
        }
        else {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x852983e999b1da06;
          if ((puVar6 != (undefined1 *)0xdcc6a561637b7cae) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0xddad916a28c99fe1)) {
            puVar5 = (undefined1 *)0x2352f2d6b10786ab;
          }
        }
        goto LAB_001b39a8;
      }
      if ((long)puVar6 < -0x361936ecac8b8986) {
        if (puVar6 == (undefined1 *)0xc33d4c2e9c01bfd9) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0xe1040badb9b8aca8;
          if (DAT_0021faf3 == '\0') {
            puVar5 = (undefined1 *)0xd2dc4161bf6d11ab;
          }
        }
        else if (puVar6 == &DAT_c4c956bc7e2b1c5a) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x8d9cde8a92cc3625;
          if (DAT_0021faf0 == '\0') {
            puVar5 = (undefined1 *)0x5f1d0a7f6212d984;
          }
        }
        else {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0xc74f7cd088bc0d48) goto LAB_001b5974;
        }
        goto LAB_001b39a8;
      }
      if ((long)puVar6 < -0x342c529d4277a1df) {
        param_2 = uVar10;
        puVar5 = (undefined1 *)0xfe8e69348b81073b;
        if ((puVar6 != (undefined1 *)0xc9e6c9135374767a) &&
           (puVar5 = puVar6, puVar6 == (undefined1 *)0xca62b1ef4c4443c4)) {
          puVar5 = (undefined1 *)0xa65336067b959657;
          param_3 = local_84;
        }
        goto LAB_001b39a8;
      }
      param_2 = uVar10;
      puVar5 = (undefined1 *)0xafcefe1b733a78ce;
      if ((puVar6 == (undefined1 *)0xcbd3ad62bd885e21) ||
         (puVar5 = puVar6, puVar6 != (undefined1 *)0xce7f13e2503182ae)) goto LAB_001b39a8;
      iVar3 = FUN_00212730(0,1,&DAT_0021fae0);
      bVar2 = iVar3 == 0;
      puVar5 = (undefined1 *)0xc33d4c2e9c01bfd9;
      puVar6 = (undefined1 *)0x5ad71f292518d033;
    }
    else if ((long)puVar6 < -0x13f6cef773005e97) {
      if (-0x1efbf45246475359 < (long)puVar6) {
        if ((long)puVar6 < -0x1600a62692a3eebb) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0xde3bbde8319e4138;
          if ((puVar6 != (undefined1 *)0xe1040badb9b8aca8) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0xe295faf8de22c1df)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fad8);
            puVar5 = (undefined1 *)0xf7b3adcf918810f6;
            if (iVar3 != 0) {
              puVar5 = (undefined1 *)0xa9449e77a77951ac;
            }
          }
        }
        else {
          if (puVar6 == (undefined1 *)0xe9ff59d96d5c1145) goto LAB_001b5958;
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0xebb5292211db659e) {
            puVar5 = (undefined1 *)0x11389729d7590b94;
            goto LAB_001b5d0c;
          }
        }
        goto LAB_001b39a8;
      }
      if (puVar6 == (undefined1 *)0xddfdee40477d270b) {
        DAT_0021fad8 = 0;
        lVar4 = FUN_001ebd68(local_b0,local_c0,&DAT_0021e880,0xb);
        bVar2 = lVar4 == 0;
        puVar5 = (undefined1 *)0xa422ccb0ad4229c5;
        puVar6 = (undefined1 *)0x7ededfa0c0eeb47a;
      }
      else {
        if (puVar6 != (undefined1 *)0xde3bbde8319e4138) {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0xe07e50eb5d9c155d) {
            DAT_0021fac4 = 0;
            local_110 = FUN_001e5520(0,&DAT_0021e8a0,local_90);
            puVar5 = (undefined1 *)0x7ffb850a0e6ed38d;
            if (local_110 != 0) {
              puVar5 = (undefined1 *)0x6bbc6b8cc56478f1;
            }
          }
          goto LAB_001b39a8;
        }
        DAT_0021fae0 = 0;
        local_f0 = (char *)FUN_001e5520(local_110,&DAT_0021e8a4,local_90);
        bVar2 = local_f0 == (char *)0x0;
        puVar5 = (undefined1 *)0xb36be675652c9c69;
        puVar6 = (undefined1 *)0x61d9685814f9d681;
      }
    }
    else {
      if (-0xa857d4da3ca01d7 < (long)puVar6) {
        if ((long)puVar6 < -0x73716f9563fa402) {
          if (puVar6 == (undefined1 *)0xf57a82b25c35fe2a) {
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x70aaef16e8748d67;
            if (DAT_0021faf2 == '\0') {
              puVar5 = (undefined1 *)0x242c94bb96617abb;
            }
          }
          else {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0xf7b3adcf918810f6) {
              puVar5 = (undefined1 *)0x1f2c3b62b1679b;
              if (DAT_0021faf1 == '\0') {
                puVar5 = (undefined1 *)0xdc8188db88ec11b;
              }
            }
          }
        }
        else {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x2352f2d6b10786ab;
          if ((puVar6 != (undefined1 *)0xf8c8e906a9c05bfe) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0xfaa36b650a651891)) {
            puVar5 = (undefined1 *)0xcbd3ad62bd885e21;
            if (DAT_0021faf5 == '\0') {
              puVar5 = (undefined1 *)0x1552bb494d897f7e;
            }
          }
        }
        goto LAB_001b39a8;
      }
      if ((long)puVar6 < -0xf8d0ba03b2e0b85) {
        if (puVar6 == (undefined1 *)0xec0931088cffa169) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x236d10b4e1dc5a1e;
          if (DAT_0021faec == '\0') {
            puVar5 = (undefined1 *)0xbd6484722152868a;
          }
        }
        else {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0xed4378afd4d50792) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fac4);
            puVar5 = (undefined1 *)0xfd0967b6e414afde;
            if (iVar3 != 0) {
              puVar5 = (undefined1 *)0xd8fe0846a86e956a;
            }
          }
        }
        goto LAB_001b39a8;
      }
      if (puVar6 != (undefined1 *)0xf072f45fc4d1f47b) {
        param_2 = uVar10;
        if (puVar6 == (undefined1 *)0xf2bc86cfcf60b6d9) {
          puVar5 = (undefined1 *)0x79de56917a785edc;
        }
        goto LAB_001b39a8;
      }
      iVar3 = FUN_00212730(0,1,&DAT_0021fad4);
      bVar2 = iVar3 == 0;
      puVar5 = &DAT_c4c956bc7e2b1c5a;
      puVar6 = (undefined1 *)0x719dbab015af25c6;
    }
  }
  else if ((long)puVar6 < 0x4b73c4e968047988) {
    if ((long)puVar6 < 0x1b91058c21da9ca7) {
      uVar9 = (uint)param_2;
      if (0x41a203875b031c2 < (long)puVar6) {
        if ((long)puVar6 < 0xf8f9546f45fbb47) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0xe295faf8de22c1df;
          if (puVar6 != (undefined1 *)0x41a203875b031c3) {
            if (puVar6 == (undefined1 *)0xdc8188db88ec11b) {
              DAT_0021e888 = DAT_0021e888 ^ 0x1b;
              DAT_0021e88a = DAT_0021e88a ^ 0x1b;
              DAT_0021e88b = DAT_0021e88b ^ 0x1b;
              DAT_0021e889 = DAT_0021e889 ^ 0x1b;
              DAT_0021e880 = DAT_0021e880 ^ 0x1b1b1b1b1b1b1b1b;
              DAT_0021faf1 = '\x01';
              puVar5 = (undefined1 *)0xddfdee40477d270b;
            }
            else {
              puVar5 = puVar6;
              if (puVar6 == (undefined1 *)0xf111d00f6a8edda) goto LAB_001b3988;
            }
          }
          goto LAB_001b39a8;
        }
        if ((long)puVar6 < 0x1552bb494d897f7e) {
          if (puVar6 != (undefined1 *)0xf8f9546f45fbb47) {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0x11389729d7590b94) {
              DAT_0021fac4 = 0;
              lVar4 = FUN_001e5520(0,&DAT_0021e8a0,local_90);
              puVar5 = (undefined1 *)0xaa78350f0036093c;
              if (lVar4 != 0) {
                puVar5 = (undefined1 *)0x91b5ec04c28f8379;
              }
            }
            goto LAB_001b39a8;
          }
          puVar5 = (undefined1 *)0x5127e420c2beb41f;
        }
        else {
          if (puVar6 != (undefined1 *)0x1552bb494d897f7e) {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0x1b4ac2f1f22e2589) {
              puVar5 = (undefined1 *)0xe07e50eb5d9c155d;
              goto LAB_001b5d0c;
            }
            goto LAB_001b39a8;
          }
          puVar5 = (undefined1 *)0xafcefe1b733a78ce;
        }
        DAT_0021e8ae = DAT_0021e8ae ^ 0x65;
        DAT_0021e8ad = DAT_0021e8ad ^ 0x65;
        DAT_0021e8ac = DAT_0021e8ac ^ 0x65;
        DAT_0021e8af = DAT_0021e8af ^ 0x65;
        DAT_0021faf5 = '\x01';
        param_2 = uVar10;
        goto LAB_001b39a8;
      }
      if (-0x17196cb747ef8c6 < (long)puVar6) {
        if ((long)puVar6 < 0x1f2c3b62b1679b) {
          if (puVar6 == (undefined1 *)0xfe8e69348b81073b) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fac4);
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x635f31928f91aac5;
            if (iVar3 != 0) {
              puVar5 = (undefined1 *)0xbccd62a0fc32d;
            }
          }
          else {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0xbccd62a0fc32d) {
              puVar5 = (undefined1 *)0xfe8e69348b81073b;
            }
          }
        }
        else {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0xddfdee40477d270b;
          if ((puVar6 != (undefined1 *)0x1f2c3b62b1679b) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0x2ea5ec9aa4903e5)) {
            DAT_0021fad4 = 0;
            local_c0 = *local_b8 - local_b0;
            lVar4 = FUN_001ebd68(local_b0,local_c0,&DAT_0021e870,0xf);
            puVar5 = (undefined1 *)0x41a203875b031c3;
            if (lVar4 != 0) {
              puVar5 = (undefined1 *)0xe9ff59d96d5c1145;
            }
          }
        }
        goto LAB_001b39a8;
      }
      if (puVar6 == (undefined1 *)0xfbc60408ae501f9e) {
        param_2 = uVar10;
        puVar5 = (undefined1 *)0x67be2c6e2af44868;
        local_a4 = uVar9;
        if (iVar3 != 5) {
          puVar5 = (undefined1 *)0xd4f46c31434e6776;
        }
        goto LAB_001b39a8;
      }
      if (puVar6 != (undefined1 *)0xfbd7ef6ff797a0b8) {
        param_2 = uVar10;
        if (puVar6 == (undefined1 *)0xfd0967b6e414afde) {
          puVar5 = (undefined1 *)0x939eea0b05eec05c;
          if (DAT_0021faec == '\0') {
            puVar5 = (undefined1 *)0x1b4ac2f1f22e2589;
          }
        }
        goto LAB_001b39a8;
      }
      iVar3 = FUN_00212730(0,1,&DAT_0021fab8);
      puVar5 = (undefined1 *)0xaf48e395b2299f45;
      puVar6 = (undefined1 *)0xdbb3f7f9e121c35a;
      bVar2 = iVar3 == 0;
    }
    else {
      if ((long)puVar6 < 0x3132af798d39a4e3) {
        if ((long)puVar6 < 0x236d10b4e1dc5a1e) {
          if (puVar6 == (undefined1 *)0x1b91058c21da9ca7) {
LAB_001b5974:
            local_94 = 4;
            local_98 = local_84;
LAB_001b6008:
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x5e955a53164f3d9f;
          }
          else if (puVar6 == (undefined1 *)0x205d1929c40a5522) {
            free(local_e0);
            *local_a0 = 0;
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x79de56917a785edc;
          }
          else {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0x2352f2d6b10786ab) {
              iVar3 = FUN_00212730(0,1,&DAT_0021fae8);
              puVar5 = (undefined1 *)0x5602aba7b2fd1776;
              if (iVar3 != 0) {
                puVar5 = (undefined1 *)0xddad916a28c99fe1;
              }
            }
          }
        }
        else if ((long)puVar6 < 0x24e5eef263e81b7c) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x9a5ce19cd8cc78d8;
          if ((puVar6 != (undefined1 *)0x236d10b4e1dc5a1e) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0x242c94bb96617abb)) {
            DAT_0021e898 = DAT_0021e898 ^ 0x9f;
            DAT_0021e899 = DAT_0021e899 ^ 0x9f;
            DAT_0021e89a = DAT_0021e89a ^ 0x9f;
            DAT_0021e89b = DAT_0021e89b ^ 0x9f;
            DAT_0021e89c = DAT_0021e89c ^ 0x9f;
            DAT_0021e89d = DAT_0021e89d ^ 0x9f;
            DAT_0021e89e = DAT_0021e89e ^ 0x9f;
            DAT_0021e890 = DAT_0021e890 ^ 0x9f9f9f9f9f9f9f9f;
            DAT_0021faf2 = '\x01';
            puVar5 = (undefined1 *)0x80f2364c5c89acff;
          }
        }
        else if (puVar6 == (undefined1 *)0x24e5eef263e81b7c) {
          puVar5 = (undefined1 *)0xbff1c80c3556854c;
LAB_001b5d0c:
          DAT_0021e8a1 = DAT_0021e8a1 ^ 0x4d;
          DAT_0021e8a0 = DAT_0021e8a0 ^ 0x4d;
          DAT_0021faec = '\x01';
          param_2 = uVar10;
        }
        else {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0x255edd958a6bac09) {
            puVar5 = (undefined1 *)0x5127e420c2beb41f;
          }
        }
        goto LAB_001b39a8;
      }
      if ((long)puVar6 < 0x39a16bddf8dc82a2) {
        if (0x3485297baf428fae < (long)puVar6) {
          if (puVar6 == (undefined1 *)0x3485297baf428faf) goto LAB_001b3988;
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0x361985fb5d496b76) {
            iVar3 = FUN_00212730(0,1,&DAT_0021fac4);
            bVar2 = iVar3 == 0;
            puVar5 = (undefined1 *)0xec0931088cffa169;
            puVar6 = (undefined1 *)0x4b73c4e968047988;
            goto LAB_001b622c;
          }
          goto LAB_001b39a8;
        }
        if (puVar6 != (undefined1 *)0x3132af798d39a4e3) {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0x332dfd522f05c93c) {
            puVar5 = (undefined1 *)0xd746c07de834a28d;
            if (DAT_0021faf4 == '\0') {
              puVar5 = (undefined1 *)0x81c9619a76458719;
            }
          }
          goto LAB_001b39a8;
        }
        iVar3 = FUN_00212730(0,1,&DAT_0021fadc);
        bVar2 = iVar3 == 0;
        puVar5 = (undefined1 *)0xf57a82b25c35fe2a;
        puVar6 = (undefined1 *)0x5c75d317cff2739f;
      }
      else {
        if (0x3cd27908c3b8e651 < (long)puVar6) {
          if (puVar6 != (undefined1 *)0x3cd27908c3b8e652) {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0x4101bf80446bdc20) {
              DAT_0021e830 = DAT_0021e830 ^ 6;
              DAT_0021e831 = DAT_0021e831 ^ 6;
              DAT_0021fae9 = '\x01';
              puVar5 = (undefined1 *)0xa6454b078cdf6a1e;
            }
            goto LAB_001b39a8;
          }
          goto LAB_001b3988;
        }
        if (puVar6 != (undefined1 *)0x39a16bddf8dc82a2) {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0x3c2595d6266c5998) {
            puVar5 = (undefined1 *)0xf072f45fc4d1f47b;
          }
          goto LAB_001b39a8;
        }
        DAT_0021fae4 = 0;
        local_100 = (char *)FUN_001e5520(0,&DAT_0021e8a8,local_90);
        bVar2 = local_100 == (char *)0x0;
        puVar5 = (undefined1 *)0x8bbf089cfffa99f4;
        puVar6 = (undefined1 *)0x4d5d50fcdd4992d2;
      }
    }
  }
  else {
    if ((long)puVar6 < 0x61d9685814f9d681) {
      if ((long)puVar6 < 0x57cabee7967ab664) {
        if ((long)puVar6 < 0x5127e420c2beb41f) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x361985fb5d496b76;
          if (((puVar6 != (undefined1 *)0x4b73c4e968047988) &&
              (puVar5 = (undefined1 *)0x852983e999b1da06, puVar6 != (undefined1 *)0x4d5d50fcdd4992d2
              )) && (puVar5 = puVar6, puVar6 == (undefined1 *)0x4dc5ede807dc3016)) {
            puVar5 = (undefined1 *)0xbff1c80c3556854c;
          }
        }
        else if ((long)puVar6 < 0x54cc8c62117e2258) {
          if (puVar6 == (undefined1 *)0x5127e420c2beb41f) {
            DAT_0021fae8 = 0;
            local_b0 = *local_b8;
            iVar3 = sscanf(local_100,(char *)&DAT_0021e8ac);
            param_2 = uVar10;
            puVar5 = (undefined1 *)0x3c2595d6266c5998;
            if (iVar3 != 1) {
              puVar5 = (undefined1 *)0xc74f7cd088bc0d48;
            }
          }
          else {
            param_2 = uVar10;
            if (puVar6 == (undefined1 *)0x53e14c28908eeeeb) {
LAB_001b4338:
              param_2 = uVar10;
              puVar5 = (undefined1 *)0xfbd7ef6ff797a0b8;
            }
          }
        }
        else if (puVar6 == (undefined1 *)0x54cc8c62117e2258) {
          local_d4 = 0;
          *local_120 = 8;
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x66d97625bdcfaa84;
        }
        else {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0x5602aba7b2fd1776) {
            puVar5 = (undefined1 *)0x255edd958a6bac09;
            if (DAT_0021faf5 == '\0') {
              puVar5 = (undefined1 *)0xf8f9546f45fbb47;
            }
          }
        }
      }
      else if ((long)puVar6 < 0x5e955a53164f3d9f) {
        if ((long)puVar6 < 0x5ad71f292518d033) {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x6230bf87be098d5d;
          if ((puVar6 != (undefined1 *)0x57cabee7967ab664) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0x5aba0b6a880053f8)) {
            puVar5 = (undefined1 *)0x4dc5ede807dc3016;
            if (DAT_0021faec == '\0') {
              puVar5 = (undefined1 *)0x24e5eef263e81b7c;
            }
          }
        }
        else {
          param_2 = uVar10;
          puVar5 = (undefined1 *)0xce7f13e2503182ae;
          if ((puVar6 != (undefined1 *)0x5ad71f292518d033) &&
             (puVar5 = puVar6, puVar6 == (undefined1 *)0x5c75d317cff2739f)) {
            puVar5 = (undefined1 *)0x3132af798d39a4e3;
          }
        }
      }
      else if ((long)puVar6 < 0x5f1d0a7f6212d984) {
        param_2 = (ulong)local_98;
        puVar5 = (undefined1 *)0xfbc60408ae501f9e;
        in_w9 = local_94;
        if ((puVar6 != (undefined1 *)0x5e955a53164f3d9f) &&
           (param_2 = uVar10, puVar5 = puVar6, in_w9 = iVar3,
           puVar6 == (undefined1 *)0x5ebfca74eead21cf)) {
LAB_001b47a4:
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x78ac43fddd7c64db;
          in_w9 = iVar3;
        }
      }
      else if (puVar6 == (undefined1 *)0x5f1d0a7f6212d984) {
        _DAT_0021e870 = _DAT_0021e870 ^ 0x9696969696969696;
        uRam000000000021e878 = uRam000000000021e878 ^ 0x9696969696969696;
        DAT_0021faf0 = '\x01';
        param_2 = uVar10;
        puVar5 = (undefined1 *)0x2ea5ec9aa4903e5;
      }
      else {
        param_2 = uVar10;
        if (puVar6 == (undefined1 *)0x5f3fddf8e2fc9ebc) {
          puVar5 = (undefined1 *)0xb5973310192f9ea8;
          if (DAT_0021faf4 == '\0') {
            puVar5 = (undefined1 *)0x727aabeac1ff5013;
          }
        }
      }
      goto LAB_001b39a8;
    }
    if (0x719dbab015af25c5 < (long)puVar6) {
      if ((long)puVar6 < 0x79de56917a785edc) {
        param_2 = uVar10;
        puVar5 = (undefined1 *)0xf072f45fc4d1f47b;
        if (puVar6 != (undefined1 *)0x719dbab015af25c6) {
          if (puVar6 == (undefined1 *)0x727aabeac1ff5013) {
            puVar5 = (undefined1 *)0xc15e99e5395e3b25;
LAB_001b62f8:
            DAT_0021e8a9 = DAT_0021e8a9 ^ 0xde;
            DAT_0021e8a8 = DAT_0021e8a8 ^ 0xde;
            DAT_0021faf4 = '\x01';
            param_2 = uVar10;
          }
          else {
            puVar5 = puVar6;
            if (puVar6 == (undefined1 *)0x78ac43fddd7c64db) {
              iVar3 = FUN_00212730(0,1,&DAT_0021fae4);
              puVar5 = (undefined1 *)0x5f3fddf8e2fc9ebc;
              if (iVar3 != 0) {
                puVar5 = (undefined1 *)0x8682509a6d1bddd3;
              }
            }
          }
        }
      }
      else if ((long)puVar6 < 0x7ededfa0c0eeb47a) {
        if (puVar6 == (undefined1 *)0x79de56917a785edc) {
          fclose(local_d0);
          local_d4 = local_104;
          param_2 = uVar10;
          puVar5 = (undefined1 *)0x66d97625bdcfaa84;
        }
        else {
          param_2 = uVar10;
          if (puVar6 == (undefined1 *)0x7bca060775e09e1e) {
            puVar5 = (undefined1 *)0x6230bf87be098d5d;
          }
        }
      }
      else {
        if (puVar6 == (undefined1 *)0x7ededfa0c0eeb47a) {
LAB_001b5958:
          local_98 = 1;
          local_94 = 5;
          goto LAB_001b6008;
        }
        param_2 = uVar10;
        if (puVar6 == (undefined1 *)0x7ffb850a0e6ed38d) goto LAB_001b3988;
      }
      goto LAB_001b39a8;
    }
    if (0x66d97625bdcfaa83 < (long)puVar6) {
      if ((long)puVar6 < 0x6bbc6b8cc56478f1) {
        param_2 = uVar10;
        puVar5 = (undefined1 *)0xa65336067b959657;
        param_3 = local_a4;
        if ((puVar6 != (undefined1 *)0x67be2c6e2af44868) &&
           (puVar5 = puVar6, param_3 = uVar9, puVar6 == (undefined1 *)0x66d97625bdcfaa84)) {
          if (*(long *)(local_128 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_d4 & 1;
        }
      }
      else {
        param_2 = uVar10;
        puVar5 = (undefined1 *)0xce7f13e2503182ae;
        if ((puVar6 != (undefined1 *)0x6bbc6b8cc56478f1) &&
           (puVar5 = puVar6, puVar6 == (undefined1 *)0x70aaef16e8748d67)) {
          puVar5 = (undefined1 *)0x80f2364c5c89acff;
        }
      }
      goto LAB_001b39a8;
    }
    if (0x62ccc994e2cb7da2 < (long)puVar6) {
      param_2 = uVar10;
      puVar5 = (undefined1 *)0x89359d8ef6b8d8b5;
      if ((puVar6 != (undefined1 *)0x62ccc994e2cb7da3) &&
         (puVar5 = puVar6, puVar6 == (undefined1 *)0x635f31928f91aac5)) {
        puVar5 = (undefined1 *)0xae2afb10eb6df44e;
        if (DAT_0021faec == '\0') {
          puVar5 = (undefined1 *)0xebb5292211db659e;
        }
      }
      goto LAB_001b39a8;
    }
    if (puVar6 == (undefined1 *)0x61d9685814f9d681) {
      lVar4 = strtol(local_f0,(char **)0x0,0x10);
      bVar2 = (int)lVar4 == 0;
      puVar5 = (undefined1 *)0xa1122837683f12d6;
      puVar6 = (undefined1 *)0x5ebfca74eead21cf;
      goto LAB_001b622c;
    }
    param_2 = uVar10;
    if (puVar6 != (undefined1 *)0x6230bf87be098d5d) goto LAB_001b39a8;
    iVar3 = FUN_00212730(0,1,&DAT_0021fae4);
    bVar2 = iVar3 == 0;
    puVar5 = (undefined1 *)0x332dfd522f05c93c;
    puVar6 = (undefined1 *)0x7bca060775e09e1e;
  }
LAB_001b622c:
  param_2 = uVar10;
  if (!bVar2) {
    puVar5 = puVar6;
  }
  goto LAB_001b39a8;
}

