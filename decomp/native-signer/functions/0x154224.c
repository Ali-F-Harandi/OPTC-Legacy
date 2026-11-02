// rea decompile_all
// name: FUN_00154224
// address: 0x154224
// body: available
// range: 0x154224-0x15602b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_00154224(undefined8 *param_1,byte param_2,byte param_3)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong in_x9;
  ulong uVar5;
  long lVar6;
  byte unaff_w22;
  byte bVar7;
  ulong local_138;
  ulong local_130;
  long local_128;
  ulong local_120;
  long *local_118;
  long local_110;
  long *local_108;
  ulong local_100;
  long local_f8;
  long *local_f0;
  byte local_e8;
  byte local_e4;
  ulong local_e0;
  byte local_d4;
  byte local_d0;
  byte local_cc;
  ulong local_c8;
  byte local_bc;
  ulong local_b8;
  byte local_ac;
  ulong local_a8;
  byte local_9c;
  ulong local_98;
  ulong local_90;
  byte local_78;
  byte local_74;
  
  lVar4 = -0x5aa069224e609ae;
LAB_001542fc:
  bVar3 = param_2;
  bVar7 = param_3;
  lVar6 = lVar4;
  uVar5 = in_x9;
  in_x9 = uVar5;
  lVar4 = lVar6;
  param_3 = bVar7;
  param_2 = bVar3;
  if (lVar6 < 0xc6b643c4f99a74) {
    if (lVar6 < -0x386de596b77b17fe) {
      if (-0x5409c275fc57942e < lVar6) {
        if (lVar6 < -0x487cb16e46778d83) {
          if (lVar6 < -0x4c8f27eeabf192c7) {
            if (lVar6 == -0x5409c275fc57942d) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f598);
              bVar1 = iVar2 == 0;
              lVar6 = 0x70ab54e65b312f2b;
              lVar4 = 0x56ebd09d32cb3f92;
LAB_00155bec:
              if (!bVar1) {
                lVar4 = lVar6;
              }
            }
            else {
              lVar4 = 0x31db9a8e3fadb4be;
              if ((lVar6 != -0x4dc5df1d9b1fc6a3) &&
                 (lVar4 = lVar6, bVar3 = local_cc, lVar6 == -0x4d9775e42a5d2a1d)) {
LAB_00155b90:
                lVar4 = -0x3d92094afffcde02;
                local_d0 = bVar3;
              }
            }
          }
          else {
            lVar4 = -0x489470f9d0c0e381;
            if (((lVar6 != -0x4c8f27eeabf192c7) &&
                (lVar4 = -0x47d36771519f3c51, lVar6 != -0x4be75c64be9f347a)) &&
               (lVar4 = lVar6, lVar6 == -0x489470f9d0c0e381)) {
              DAT_0021f59c = 0;
              iVar2 = FUN_001e17a8(&DAT_0021d550,*local_118);
              lVar4 = -0x386de596b77b17fe;
              param_2 = iVar2 == 0 | local_78;
            }
          }
        }
        else if (lVar6 < -0x407145dceb200c66) {
          if (lVar6 == -0x487cb16e46778d83) goto LAB_0015587c;
          if (lVar6 == -0x47d36771519f3c51) {
            bVar1 = param_1[0x10e] == 3;
            lVar4 = 0xfc8ca7fb10c7edf;
            lVar6 = 0x29d9c2ea406994a2;
            goto LAB_00155f10;
          }
          if (lVar6 == -0x4798907bc83edceb) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f59c);
            bVar1 = iVar2 == 0;
            lVar6 = 0xc6b643c4f99a74;
            lVar4 = 0x25d001056df3d4ec;
            goto LAB_00155bec;
          }
        }
        else {
          lVar4 = 0x4f29167956f978e8;
          if (lVar6 != -0x407145dceb200c66) {
            if (lVar6 == -0x3d92094afffcde02) {
              local_120 = local_c8 + 1;
              lVar4 = 0x676b54f6451bc911;
              local_d4 = local_d0;
              if ((ulong)param_1[0x10e] <= local_120) {
                lVar4 = -0x1b411d25d2e5cc5;
              }
            }
            else {
              lVar4 = lVar6;
              if (lVar6 == -0x3cfadde50e4684d7) {
                return unaff_w22 & 1;
              }
            }
          }
        }
        goto LAB_001542fc;
      }
      if (lVar6 < -0x6ffbcb93e7a3f6a6) {
        if (lVar6 < -0x7670a8017ba5c053) {
          in_x9 = local_90;
          lVar4 = 0x49579afde3c079f3;
          param_3 = local_74;
          if ((lVar6 != -0x7eae8e20fc2d0e60) &&
             (in_x9 = uVar5, lVar4 = lVar6, param_3 = bVar7, lVar6 == -0x7b6dbdda899ae4d0)) {
            lVar4 = -0x1265a0569f95a2a2;
          }
          goto LAB_001542fc;
        }
        lVar4 = 0x71fc46944fd9cd2e;
        if (((lVar6 == -0x7670a8017ba5c053) ||
            (lVar4 = -0x70cbbcb2d9379497, lVar6 == -0x74a0fd514f79b8b4)) ||
           (lVar4 = lVar6, lVar6 != -0x70cbbcb2d9379497)) goto LAB_001542fc;
        DAT_0021f298 = 0;
        iVar2 = FUN_001e17a8(param_1[8],&DAT_0021c5ac);
        bVar1 = iVar2 == 0;
        lVar6 = 0x5f27daa339ea2b5;
        lVar4 = -0x14860c0c74340044;
      }
      else {
        if (-0x5b51b89076e6dbd1 < lVar6) {
          if (lVar6 == -0x5b51b89076e6dbd0) {
            lVar4 = 0x81d73ffedb7fa06;
            bVar1 = DAT_0021f720 == '\0';
            lVar6 = 0x79e5b311cd03fe2b;
            goto LAB_00155ea4;
          }
          if (lVar6 == -0x5a3303734c2a9405) {
            lVar4 = 0x31db9a8e3fadb4be;
            goto LAB_00155f6c;
          }
          if (lVar6 == -0x57cc2f175472ee5f) {
            lVar4 = 0x6e695464aeafd02c;
          }
          goto LAB_001542fc;
        }
        if (lVar6 != -0x6ffbcb93e7a3f6a6) {
          if (lVar6 == -0x657c5a59d3db0f38) {
            lVar6 = -0x13c098191f115765;
            bVar1 = DAT_0021f722 == '\0';
            lVar4 = -0x7b6dbdda899ae4d0;
            goto LAB_001542ec;
          }
          if (lVar6 == -0x5ddabdaa4bd0cc55) {
            local_108 = param_1 + local_c8 * 2 + 0xf;
            bVar1 = *local_108 == 0;
            lVar4 = 0x224933241788afcc;
            lVar6 = 0x4493577fe855d5dc;
            goto LAB_00155bec;
          }
          goto LAB_001542fc;
        }
        iVar2 = FUN_00212730(0,1,&DAT_0021f298);
        bVar1 = iVar2 == 0;
        lVar6 = -0x1ea97c9610d8d670;
        lVar4 = 0x2567a3a726280407;
      }
LAB_00155f10:
      if (!bVar1) {
        lVar4 = lVar6;
      }
      goto LAB_001542fc;
    }
    if (lVar6 < -0x1c2ba9e6d9d4bf2b) {
      if (lVar6 < -0x2b1c89859d109460) {
        if (lVar6 < -0x36834382a6a10433) {
          if (lVar6 == -0x386de596b77b17fe) {
            local_138 = param_1[0x10e];
            local_130 = local_e0 + 1;
            lVar4 = 0x32b4b6b0dcf8024c;
            local_e4 = bVar3;
            if (local_138 <= local_130) {
              lVar4 = 0x3f3fb03406b88a7c;
            }
          }
          else if (lVar6 == -0x36e8ea28909645ca) {
            lVar4 = 0x78cdb757f8e8e674;
          }
          goto LAB_001542fc;
        }
        if (lVar6 == -0x36834382a6a10433) {
          local_98 = 0;
          local_9c = 0;
          goto LAB_00155c88;
        }
        lVar4 = -0x4798907bc83edceb;
        if ((lVar6 == -0x2e9013f7b76115d9) || (lVar4 = lVar6, lVar6 != -0x2de7b69b6e5d224a))
        goto LAB_001542fc;
        lVar4 = -0x4dc5df1d9b1fc6a3;
        bVar1 = DAT_0021f720 == '\0';
        lVar6 = -0x5a3303734c2a9405;
      }
      else {
        if (-0x204d904a52ab8bc1 < lVar6) {
          lVar4 = -0x1aac270968499b37;
          if (((lVar6 != -0x204d904a52ab8bc0) &&
              (lVar4 = -0x6ffbcb93e7a3f6a6, lVar6 != -0x1ea97c9610d8d670)) &&
             (lVar4 = lVar6, lVar6 == -0x1dfa7a584a1202b2)) {
            in_x9 = 0;
            lVar4 = 0x49579afde3c079f3;
            param_3 = 0;
          }
          goto LAB_001542fc;
        }
        if (lVar6 != -0x2b1c89859d109460) {
          if (lVar6 == -0x2aa011686e2792ef) {
            DAT_0021d548 = DAT_0021d548 ^ 0xcf;
            DAT_0021d549 = DAT_0021d549 ^ 0xcf;
            DAT_0021d54a = DAT_0021d54a ^ 0xcf;
            _DAT_0021d530 = _DAT_0021d530 ^ 0xcfcfcfcfcfcfcfcf;
            uRam000000000021d538 = uRam000000000021d538 ^ 0xcfcfcfcfcfcfcfcf;
            DAT_0021d54b = DAT_0021d54b ^ 0xcf;
            DAT_0021d54c = DAT_0021d54c ^ 0xcf;
            DAT_0021d54d = DAT_0021d54d ^ 0xcf;
            DAT_0021d540 = DAT_0021d540 ^ 0xcfcfcfcfcfcfcfcf;
            DAT_0021f71f = '\x01';
            lVar4 = 0x6e695464aeafd02c;
          }
          else if (lVar6 == -0x25c2b5e21511290a) {
            DAT_0021d588 = DAT_0021d588 ^ 0x2b;
            _DAT_0021d570 = _DAT_0021d570 ^ 0x2b2b2b2b2b2b2b2b;
            uRam000000000021d578 = uRam000000000021d578 ^ 0x2b2b2b2b2b2b2b2b;
            DAT_0021d589 = DAT_0021d589 ^ 0x2b;
            DAT_0021d580 = DAT_0021d580 ^ 0x2b2b2b2b2b2b2b2b;
            DAT_0021f721 = '\x01';
            lVar4 = 0x5f0028c00025f128;
          }
          goto LAB_001542fc;
        }
        lVar4 = 0x10afaf8dca848304;
        bVar1 = DAT_0021f721 == '\0';
        lVar6 = -0x25c2b5e21511290a;
      }
LAB_00155ea4:
      if (bVar1) {
        lVar4 = lVar6;
      }
      goto LAB_001542fc;
    }
    if (-0x1265a0569f95a2a3 < lVar6) {
      if (lVar6 < -0x67ac3b8722b506e) {
        if (lVar6 == -0x1265a0569f95a2a2) {
          DAT_0021f5a4 = 0;
          iVar2 = FUN_001e17a8(&DAT_0021d590,local_110);
          bVar1 = iVar2 == 0;
          lVar6 = -0x4d9775e42a5d2a1d;
          lVar4 = 0x294b5166301eb27d;
          goto LAB_00155bec;
        }
        if (lVar6 != -0xd42967cfb29632b) {
          if (lVar6 == -0x7f7568bf40ea388) goto LAB_0015587c;
          goto LAB_001542fc;
        }
        bVar7 = 1;
      }
      else {
        if (lVar6 == -0x67ac3b8722b506e) goto LAB_0015587c;
        lVar4 = -0x6ffbcb93e7a3f6a6;
        if ((lVar6 == -0x5aa069224e609ae) ||
           (lVar4 = lVar6, bVar7 = local_d4, lVar6 != -0x1b411d25d2e5cc5)) goto LAB_001542fc;
      }
      goto LAB_00155880;
    }
    if (lVar6 < -0x14936274f9deb88b) {
      if (lVar6 == -0x1c2ba9e6d9d4bf2b) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f5a8);
        bVar1 = iVar2 == 0;
        lVar6 = 0x3d0c6eb98e16c8ab;
        lVar4 = 0x137b29e4cde36d49;
        goto LAB_00155f10;
      }
      if (lVar6 != -0x1b12659c65e08609) {
        if (lVar6 == -0x1aac270968499b37) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f59c);
          bVar1 = iVar2 == 0;
          lVar4 = -0x2de7b69b6e5d224a;
          lVar6 = -0x204d904a52ab8bc0;
          goto LAB_00155d50;
        }
        goto LAB_001542fc;
      }
    }
    else if (lVar6 != -0x14936274f9deb88b) {
      lVar4 = -0x1c2ba9e6d9d4bf2b;
      if ((lVar6 != -0x14860c0c74340044) && (lVar4 = lVar6, lVar6 == -0x13c098191f115765)) {
        DAT_0021d5a8 = DAT_0021d5a8 ^ 0xec;
        _DAT_0021d590 = _DAT_0021d590 ^ 0xecececececececec;
        uRam000000000021d598 = uRam000000000021d598 ^ 0xecececececececec;
        DAT_0021d5a9 = DAT_0021d5a9 ^ 0xec;
        DAT_0021d5aa = DAT_0021d5aa ^ 0xec;
        DAT_0021d5a0 = DAT_0021d5a0 ^ 0xecececececececec;
        DAT_0021d5ab = DAT_0021d5ab ^ 0xec;
        DAT_0021f722 = '\x01';
        lVar4 = -0x1265a0569f95a2a2;
      }
      goto LAB_001542fc;
    }
  }
  else {
    if (0x3dd1942d2e952b8a < lVar6) {
      if (0x6e695464aeafd02b < lVar6) {
        if (lVar6 < 0x77adf7419243cbb9) {
          if (lVar6 < 0x722af169e0edf78d) {
            if (lVar6 != 0x6e695464aeafd02c) {
              lVar4 = -0x5409c275fc57942d;
              if ((lVar6 != 0x70ab54e65b312f2b) && (lVar4 = lVar6, lVar6 == 0x71fc46944fd9cd2e)) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f5a0);
                lVar4 = -0x2b1c89859d109460;
                if (iVar2 != 0) {
                  lVar4 = 0x7819f1e4583015cc;
                }
              }
              goto LAB_001542fc;
            }
            DAT_0021f598 = 0;
            iVar2 = FUN_001e17a8(&DAT_0021d530,local_128);
            bVar1 = iVar2 == 0;
            lVar4 = -0x2e9013f7b76115d9;
            lVar6 = 0x1bed88c207860a10;
          }
          else {
            lVar4 = 0x1a56dbc320b72f5;
            if (lVar6 == 0x722af169e0edf78d) goto LAB_001542fc;
            if (lVar6 != 0x726b3936508e2a41) {
              lVar4 = lVar6;
              bVar3 = local_bc;
              if (lVar6 == 0x733cad6443d19b41) goto LAB_00155c64;
              goto LAB_001542fc;
            }
            local_118 = param_1 + local_e0 * 2 + 0xf;
            bVar1 = *local_118 == 0;
            lVar6 = 0x3dd1942d2e952b8b;
            lVar4 = 0x34355a0ff1d2a340;
          }
        }
        else {
          if (0x79e5b311cd03fe2a < lVar6) {
            if (lVar6 == 0x79e5b311cd03fe2b) {
              lVar4 = 0x6c6ea6278e4a31d;
            }
            else {
              if (lVar6 != 0x7d4148ddef258d1d) {
                if (lVar6 == 0x7ed46942f235a794) {
                  DAT_0021d5c0 = DAT_0021d5c0 ^ 0xf8;
                  _DAT_0021d5b0 = _DAT_0021d5b0 ^ 0xf8f8f8f8f8f8f8f8;
                  uRam000000000021d5b8 = uRam000000000021d5b8 ^ 0xf8f8f8f8f8f8f8f8;
                  DAT_0021f723 = '\x01';
                  lVar4 = 0x1a56dbc320b72f5;
                }
                goto LAB_001542fc;
              }
              lVar4 = -0x489470f9d0c0e381;
            }
LAB_00155f6c:
            _DAT_0021d550 = _DAT_0021d550 ^ 0x5454545454545454;
            uRam000000000021d558 = uRam000000000021d558 ^ 0x5454545454545454;
            _DAT_0021d560 = _DAT_0021d560 ^ 0x5454545454545454;
            uRam000000000021d568 = uRam000000000021d568 ^ 0x5454545454545454;
            DAT_0021f720 = '\x01';
            goto LAB_001542fc;
          }
          lVar4 = 0x4f29167956f978e8;
          if (((lVar6 == 0x77adf7419243cbb9) ||
              (lVar4 = 0x71fc46944fd9cd2e, lVar6 == 0x7819f1e4583015cc)) ||
             (lVar4 = lVar6, lVar6 != 0x78cdb757f8e8e674)) goto LAB_001542fc;
          iVar2 = FUN_00212730(0,1,&DAT_0021f5a4);
          bVar1 = iVar2 == 0;
          lVar4 = -0x657c5a59d3db0f38;
          lVar6 = -0x36e8ea28909645ca;
        }
LAB_00155d50:
        if (!bVar1) {
          lVar4 = lVar6;
        }
        goto LAB_001542fc;
      }
      if (lVar6 < 0x4f29167956f978e8) {
        if (0x4493577fe855d5db < lVar6) {
          lVar4 = 0x78cdb757f8e8e674;
          if (lVar6 != 0x4493577fe855d5dc) {
            if (lVar6 == 0x49579afde3c079f3) {
              local_f8 = param_1[uVar5 * 2 + 0xe];
              lVar4 = 0x251a20f055e5d062;
              local_b8 = uVar5;
              local_bc = bVar7;
              if (local_f8 != 0) {
                lVar4 = 0x346d09a0ad36c71a;
              }
            }
            else {
              lVar4 = lVar6;
              if (lVar6 == 0x4a9d6edb26565854) {
                bVar1 = (local_74 & local_100 != 0) == 0;
                lVar4 = -0x36834382a6a10433;
                lVar6 = -0x14936274f9deb88b;
                goto LAB_001542ec;
              }
            }
          }
          goto LAB_001542fc;
        }
        lVar4 = -0x5409c275fc57942d;
        if ((lVar6 == 0x3dd1942d2e952b8b) || (lVar4 = lVar6, lVar6 != 0x3f3fb03406b88a7c))
        goto LAB_001542fc;
        bVar1 = (local_e4 & local_138 != 0) == 0;
        lVar4 = -0x1dfa7a584a1202b2;
        lVar6 = -0x7f7568bf40ea388;
      }
      else {
        if (0x5b29a2ad4f93bf2a < lVar6) {
          if (lVar6 == 0x5b29a2ad4f93bf2b) {
            local_c8 = local_98;
            local_110 = param_1[local_98 * 2 + 0xe];
            lVar4 = -0x487cb16e46778d83;
            local_cc = local_9c;
            if (local_110 != 0) {
              lVar4 = -0x5ddabdaa4bd0cc55;
            }
          }
          else if (lVar6 == 0x5f0028c00025f128) {
            DAT_0021f5a0 = 0;
            iVar2 = FUN_001e17a8(&DAT_0021d570,local_f8);
            lVar4 = -0x407145dceb200c66;
            if (iVar2 != 0) {
              lVar4 = 0x733cad6443d19b41;
            }
          }
          else if (lVar6 == 0x676b54f6451bc911) {
            local_98 = local_120;
            local_9c = local_d4;
LAB_00155c88:
            lVar4 = 0x5b29a2ad4f93bf2b;
          }
          goto LAB_001542fc;
        }
        if (lVar6 == 0x4f29167956f978e8) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f59c);
          lVar4 = -0x5b51b89076e6dbd0;
          if (iVar2 != 0) {
            lVar4 = 0x77adf7419243cbb9;
          }
          goto LAB_001542fc;
        }
        if (lVar6 != 0x56ebd09d32cb3f92) {
          if (lVar6 == 0x5aa067188291c800) {
            local_100 = param_1[0x10e];
            local_90 = local_b8 + 1;
            lVar4 = -0x7eae8e20fc2d0e60;
            local_74 = local_e8;
            if (local_100 <= local_90) {
              lVar4 = 0x4a9d6edb26565854;
            }
          }
          goto LAB_001542fc;
        }
        lVar6 = -0x2aa011686e2792ef;
        bVar1 = DAT_0021f71f == '\0';
        lVar4 = -0x57cc2f175472ee5f;
      }
LAB_001542ec:
      if (bVar1) {
        lVar4 = lVar6;
      }
      goto LAB_001542fc;
    }
    if (lVar6 < 0x251a20f055e5d062) {
      if (lVar6 < 0xfc8ca7fb10c7edf) {
        if (lVar6 < 0x5f27daa339ea2b5) {
          lVar4 = -0x4798907bc83edceb;
          if ((lVar6 != 0xc6b643c4f99a74) && (lVar4 = lVar6, lVar6 == 0x1a56dbc320b72f5)) {
            DAT_0021f5a8 = 0;
            lVar6 = FUN_001e238c(*param_1,&DAT_0021d5b0);
            lVar4 = -0x4be75c64be9f347a;
            if (lVar6 != 0) {
              lVar4 = -0xd42967cfb29632b;
            }
          }
        }
        else {
          lVar4 = -0x47d36771519f3c51;
          if (lVar6 != 0x5f27daa339ea2b5) {
            if (lVar6 == 0x6c6ea6278e4a31d) {
              DAT_0021f59c = 0;
              iVar2 = FUN_001e17a8(&DAT_0021d550,*local_f0);
              bVar3 = iVar2 == 0 | local_bc;
LAB_00155c64:
              lVar4 = 0x5aa067188291c800;
              local_e8 = bVar3;
            }
            else {
              lVar4 = lVar6;
              if (lVar6 == 0x81d73ffedb7fa06) {
                lVar4 = 0x6c6ea6278e4a31d;
              }
            }
          }
        }
        goto LAB_001542fc;
      }
      if (lVar6 < 0x18cea95c7aa82e9c) {
        if (lVar6 == 0xfc8ca7fb10c7edf) {
          local_a8 = 0;
          local_ac = 0;
          goto LAB_00155968;
        }
        lVar4 = 0x5f0028c00025f128;
        if ((lVar6 != 0x10afaf8dca848304) && (lVar4 = lVar6, lVar6 == 0x137b29e4cde36d49)) {
          lVar4 = 0x722af169e0edf78d;
          bVar1 = DAT_0021f723 == '\0';
          lVar6 = 0x7ed46942f235a794;
          goto LAB_00155ea4;
        }
        goto LAB_001542fc;
      }
      if (lVar6 == 0x18cea95c7aa82e9c) {
        DAT_0021c5ac = DAT_0021c5ac ^ 0x44;
        DAT_0021c5ae = DAT_0021c5ae ^ 0x44;
        DAT_0021c5ad = DAT_0021c5ad ^ 0x44;
        DAT_0021c5af = DAT_0021c5af ^ 0x44;
        DAT_0021c5b1 = DAT_0021c5b1 ^ 0x44;
        DAT_0021c5b0 = DAT_0021c5b0 ^ 0x44;
        DAT_0021c5b2 = DAT_0021c5b2 ^ 0x44;
        DAT_0021f65f = '\x01';
        lVar4 = -0x70cbbcb2d9379497;
        goto LAB_001542fc;
      }
      lVar4 = -0x386de596b77b17fe;
      param_2 = local_78;
      if ((lVar6 == 0x1bed88c207860a10) ||
         (lVar4 = lVar6, param_2 = bVar3, lVar6 != 0x224933241788afcc)) goto LAB_001542fc;
    }
    else {
      if (0x2cb39022f40ed6fe < lVar6) {
        if (lVar6 < 0x34355a0ff1d2a340) {
          if (lVar6 == 0x2cb39022f40ed6ff) {
            local_e0 = local_a8;
            local_128 = param_1[local_a8 * 2 + 0xe];
            lVar4 = -0x1b12659c65e08609;
            local_78 = local_ac;
            if (local_128 != 0) {
              lVar4 = 0x726b3936508e2a41;
            }
          }
          else {
            if (lVar6 == 0x31db9a8e3fadb4be) {
              DAT_0021f59c = 0;
              iVar2 = FUN_001e17a8(&DAT_0021d550,*local_108);
              bVar3 = iVar2 == 0 | local_cc;
              goto LAB_00155b90;
            }
            if (lVar6 == 0x32b4b6b0dcf8024c) {
              local_a8 = local_130;
              local_ac = local_e4;
LAB_00155968:
              lVar4 = 0x2cb39022f40ed6ff;
            }
          }
        }
        else {
          if (lVar6 == 0x34355a0ff1d2a340) goto LAB_0015587c;
          if (lVar6 == 0x346d09a0ad36c71a) {
            local_f0 = param_1 + local_b8 * 2 + 0xf;
            bVar1 = *local_f0 == 0;
            lVar4 = -0x67ac3b8722b506e;
            lVar6 = -0x7670a8017ba5c053;
            goto LAB_00155f10;
          }
          if (lVar6 == 0x3d0c6eb98e16c8ab) {
            lVar4 = -0x1c2ba9e6d9d4bf2b;
          }
        }
        goto LAB_001542fc;
      }
      if (lVar6 < 0x25d001056df3d4ec) {
        if (lVar6 != 0x251a20f055e5d062) {
          if (lVar6 == 0x2567a3a726280407) {
            lVar6 = 0x18cea95c7aa82e9c;
            bVar1 = DAT_0021f65f == '\0';
            lVar4 = -0x74a0fd514f79b8b4;
            goto LAB_001542ec;
          }
          goto LAB_001542fc;
        }
      }
      else {
        if (lVar6 == 0x25d001056df3d4ec) {
          lVar6 = 0x7d4148ddef258d1d;
          bVar1 = DAT_0021f720 == '\0';
          lVar4 = -0x4c8f27eeabf192c7;
          goto LAB_001542ec;
        }
        lVar4 = -0x1aac270968499b37;
        if ((lVar6 == 0x294b5166301eb27d) || (lVar4 = lVar6, lVar6 != 0x29d9c2ea406994a2))
        goto LAB_001542fc;
      }
    }
  }
LAB_0015587c:
  bVar7 = 0;
LAB_00155880:
  lVar4 = -0x3cfadde50e4684d7;
  param_2 = bVar3;
  unaff_w22 = bVar7;
  goto LAB_001542fc;
}

