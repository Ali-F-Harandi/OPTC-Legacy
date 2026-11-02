// rea decompile_all
// name: FUN_0014e974
// address: 0x14e974
// body: available
// range: 0x14e974-0x154223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_0014e974(ulong param_1,ulong param_2,byte param_3,uint param_4,byte param_5,byte param_6,
                 byte param_7)

{
  byte unaff_100001a8;
  bool bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  ulong in_x9;
  ulong uVar10;
  long lVar11;
  byte in_w10;
  byte bVar12;
  long lVar13;
  ulong in_x11;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong local_240;
  ulong local_238;
  long local_230;
  long *local_228;
  long local_220;
  long *local_218;
  ulong local_210;
  ulong local_208;
  long local_200;
  long *local_1f8;
  ulong local_1f0;
  long local_1e8;
  long *local_1e0;
  ulong local_1d8;
  long local_1d0;
  long *local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  long local_1b0;
  long *local_1a8;
  ulong local_1a0;
  ulong local_198;
  long local_190;
  long *local_188;
  byte local_180;
  byte local_17c;
  ulong local_178;
  ulong local_170;
  byte local_164;
  byte local_160;
  byte local_15c;
  ulong local_158;
  byte local_14c;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  byte local_130;
  byte local_12c;
  ulong local_128;
  byte local_11c;
  ulong local_118;
  byte local_110;
  byte local_10c;
  byte local_108;
  byte local_104;
  ulong local_100;
  byte local_f8;
  byte local_f4;
  ulong local_f0;
  byte local_e4;
  ulong local_e0;
  ulong local_d8;
  uint local_cc;
  byte local_c8;
  byte local_c4;
  ulong local_c0;
  ulong local_b8;
  byte local_ac;
  uint local_a8;
  byte local_a4;
  byte bVar5;
  
  uVar3 = param_2;
  lVar13 = -0x5cb0fe2e3b181f4e;
LAB_0014ea7c:
  bVar7 = param_6;
  bVar12 = in_w10;
  bVar6 = param_5;
  bVar8 = param_7;
  bVar5 = unaff_100001a8;
  bVar4 = param_3;
  uVar15 = param_4;
  lVar11 = lVar13;
  uVar14 = in_x11;
  uVar10 = in_x9;
  uVar9 = param_1;
  uVar16 = uVar3 & 0xffffffff;
  param_1 = uVar9;
  in_x9 = uVar10;
  in_x11 = uVar14;
  lVar13 = lVar11;
  param_4 = uVar15;
  param_3 = bVar4;
  unaff_100001a8 = bVar4;
  param_7 = bVar8;
  param_5 = bVar6;
  in_w10 = bVar12;
  param_6 = bVar7;
  if (lVar11 < 0x672306c2a61ad77) {
    if (lVar11 < -0x3b1723e2b172358f) {
      if (lVar11 < -0x5ae1993f076da121) {
        if (-0x6b9f6fd3a339574c < lVar11) {
          if (lVar11 < -0x60f9ca4530a735f0) {
            if (lVar11 < -0x676085a1ab199639) {
              if (lVar11 == -0x6b9f6fd3a339574b) {
                lVar13 = -0x5522a83485bec31e;
                goto LAB_00153ef0;
              }
              if (lVar11 == -0x6ac9799554e53b29) {
                DAT_0021f588 = 0;
                iVar2 = FUN_001e17a8(&DAT_0021d500,local_1d0);
                bVar1 = iVar2 == 0;
                lVar11 = 0x23f216d8235644a6;
                lVar13 = -0x41526153ff4b4f62;
                goto LAB_00153f6c;
              }
              uVar3 = uVar16;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (lVar11 == -0x690a643db3a0e39f) {
                lVar13 = 0x41250bc36db74e4e;
                param_3 = bVar4;
                unaff_100001a8 = bVar4;
                if ((local_c8 & local_1d8 != 0) == 0) {
                  lVar13 = -0x2a6296b0e2ce77b4;
                }
              }
            }
            else {
              uVar3 = uVar16;
              lVar13 = -0x35e88eb74b5cca71;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (((lVar11 != -0x676085a1ab199639) &&
                  (lVar13 = 0x6dbe7950ce2eea6, lVar11 != -0x63e632856b0a5635)) &&
                 (lVar13 = lVar11, bVar4 = local_160, lVar11 == -0x618793cff0c1258d)) {
LAB_00151344:
                uVar3 = uVar16;
                lVar13 = -0x398461cfa489bb03;
                param_3 = bVar5;
                unaff_100001a8 = bVar5;
                local_108 = bVar4;
              }
            }
          }
          else if (lVar11 < -0x5d363f04b96248ff) {
            if (lVar11 == -0x60f9ca4530a735f0) goto LAB_0014ea44;
            uVar3 = uVar16;
            lVar13 = -0x3b1723e2b172358f;
            param_4 = local_cc;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if ((lVar11 != -0x5fd4dfbf52a9bc43) &&
               (lVar13 = lVar11, param_4 = uVar15, lVar11 == -0x5e5c03f1af4db505)) {
              local_140 = local_1b8;
              lVar13 = 0x3ddf9f656969c274;
              local_12c = local_11c;
            }
          }
          else if (lVar11 == -0x5d363f04b96248ff) {
            uVar3 = uVar16;
            in_x11 = 0;
            lVar13 = 0x7f6bdb4e26e58205;
            param_3 = 0;
            unaff_100001a8 = 0;
          }
          else {
            uVar3 = uVar16;
            lVar13 = -0xbbe1ed83b3dd442;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if ((lVar11 != -0x5d327f2a558911d2) && (lVar13 = lVar11, lVar11 == -0x5cb0fe2e3b181f4e))
            goto LAB_00151d80;
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < -0x730ef2ca7bef1e0d) {
          if (lVar11 < -0x7b75420f1461aa52) {
            if (lVar11 == -0x7f658c1ab0faadab) {
              uVar3 = uVar16;
              lVar13 = 0x572c9a083a3a0cd1;
              if (DAT_0021f719 == '\0') {
                lVar13 = 0x58b9fa903f050b67;
              }
            }
            else {
              uVar3 = uVar16;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (lVar11 == -0x7c8acbaabf625b1b) {
                _DAT_0021d4b0 = _DAT_0021d4b0 ^ 0x4b4b4b4b4b4b4b4b;
                uRam000000000021d4b8 = uRam000000000021d4b8 ^ 0x4b4b4b4b4b4b4b4b;
                DAT_0021d4c8 = DAT_0021d4c8 ^ 0x4b;
                DAT_0021d4c0 = DAT_0021d4c0 ^ 0x4b4b4b4b4b4b4b4b;
                DAT_0021f718 = '\x01';
                lVar13 = -0xbbe1ed83b3dd442;
              }
            }
          }
          else if (lVar11 == -0x7b75420f1461aa52) {
            local_240 = *(ulong *)(param_2 + 0x870);
            local_238 = local_170 + 1;
            uVar3 = uVar16;
            lVar13 = 0x4b8094a092a0bcb5;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            local_180 = local_110;
            if (local_240 <= local_238) {
              lVar13 = -0x737ab62ff741cbf9;
            }
          }
          else {
            uVar3 = uVar16;
            lVar13 = -0x6f258cbfd4a30e38;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if ((lVar11 != -0x78a9e640609697b9) && (lVar13 = lVar11, lVar11 == -0x737ab62ff741cbf9))
            {
              lVar13 = -0x225fdf9f79799a78;
              param_3 = bVar4;
              unaff_100001a8 = bVar4;
              if ((local_180 & local_240 != 0) == 0) {
                lVar13 = -0x60f9ca4530a735f0;
              }
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < -0x7134ad850e3f2aca) {
          uVar3 = uVar16;
          lVar13 = -0x45eaf2249c4ca000;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (((lVar11 != -0x730ef2ca7bef1e0d) &&
              (in_x11 = local_d8, lVar13 = 0x7f6bdb4e26e58205, param_3 = local_c8,
              unaff_100001a8 = local_c8, lVar11 != -0x721bdd5ad5cac8d5)) &&
             (in_x11 = uVar14, lVar13 = lVar11, param_3 = bVar5, unaff_100001a8 = bVar5,
             lVar11 == -0x7152f074e01f937f)) {
            lVar13 = -0x26f13d59d05e0c38;
            local_164 = local_104;
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 == -0x7134ad850e3f2aca) {
          DAT_0021f54c = 0;
          iVar2 = FUN_001e17a8(&DAT_0021d3b0,local_200);
          bVar1 = iVar2 == 0;
          lVar11 = -0x20def5cf10190981;
          lVar13 = -0x4c555fcc0e68eb2f;
        }
        else {
          if (lVar11 == -0x6f258cbfd4a30e38) {
            DAT_0021f590 = 0;
            iVar2 = FUN_001e17a8(&DAT_0021d518,*local_1e0);
            uVar3 = uVar16;
            lVar13 = -0x3b1723e2b172358f;
            param_4 = iVar2 == 0 | local_cc;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            goto LAB_0014ea7c;
          }
          uVar3 = uVar16;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (lVar11 != -0x6ef39ccd177a5c22) goto LAB_0014ea7c;
          iVar2 = FUN_00212730(0,1,&DAT_0021f55c);
          bVar1 = iVar2 == 0;
          lVar11 = 0x6fb33f1e6cfb9bc5;
          lVar13 = 0x69eaf2763ce889b8;
        }
      }
      else if (lVar11 < -0x4c555fcc0e68eb2f) {
        if (-0x563e13e0a27731a7 < lVar11) {
          if (lVar11 < -0x54e2087b5ee28cee) {
            if (lVar11 == -0x563e13e0a27731a6) {
              local_1c0 = *(ulong *)(param_2 + 0x870);
              local_1b8 = local_118 + 1;
              uVar3 = uVar16;
              lVar13 = -0x5e5c03f1af4db505;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              local_11c = bVar8;
              if (local_1c0 <= local_1b8) {
                lVar13 = -0x18361809e2a7fbce;
              }
            }
            else if (lVar11 == -0x55cc2ad037bc1703) {
              local_1c8 = (long *)(param_2 + local_128 * 0x10 + 0x78);
              uVar3 = uVar16;
              lVar13 = -0x33dbd6737f3adaa5;
              if (*local_1c8 != 0) {
                lVar13 = -0x4e99af9106a7a8e9;
              }
            }
            else {
              uVar3 = uVar16;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (lVar11 == -0x5522a83485bec31e) {
                DAT_0021f424 = 0;
                iVar2 = FUN_001e17a8(&DAT_0021cf84,*local_188);
                local_164 = iVar2 == 0 | local_104;
                lVar13 = -0x26f13d59d05e0c38;
              }
            }
          }
          else if (lVar11 == -0x54e2087b5ee28cee) {
            DAT_0021d514 = DAT_0021d514 ^ 0xb9;
            DAT_0021d515 = DAT_0021d515 ^ 0xb9;
            DAT_0021d516 = DAT_0021d516 ^ 0xb9;
            DAT_0021d517 = DAT_0021d517 ^ 0xb9;
            DAT_0021f71c = '\x01';
            uVar3 = uVar16;
            lVar13 = 0x46dd4ba59c558bd3;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
          }
          else if (lVar11 == -0x54b6758fd937479e) {
            local_218 = (long *)(param_2 + local_158 * 0x10 + 0x78);
            uVar3 = uVar16;
            lVar13 = 0xc65b25a4712329a;
            if (*local_218 != 0) {
              lVar13 = -0x3a5e9919fa16211a;
            }
          }
          else {
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == -0x4e99af9106a7a8e9) {
LAB_0015197c:
              uVar3 = uVar16;
              lVar13 = -0x2bab241824027480;
              param_3 = bVar4;
              unaff_100001a8 = bVar4;
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < -0x598d144fd6a3d550) {
          uVar3 = uVar16;
          lVar13 = 0x1a860386f9c1d99a;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if ((lVar11 != -0x5ae1993f076da121) && (lVar13 = lVar11, lVar11 == -0x5ad2d652361d0d19)) {
            local_1f8 = (long *)(param_2 + local_148 * 0x10 + 0x78);
            lVar13 = 0x3429d771d0c3b649;
            param_3 = bVar4;
            unaff_100001a8 = bVar4;
            if (*local_1f8 != 0) {
              lVar13 = -0x63e632856b0a5635;
            }
          }
          goto LAB_0014ea7c;
        }
        uVar3 = uVar16;
        lVar13 = -0x3d4f8112590beac0;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (((lVar11 == -0x598d144fd6a3d550) ||
            (lVar13 = -0x31bc73e2f10ee04d, lVar11 == -0x58ff310258132cf0)) ||
           (lVar13 = lVar11, lVar11 != -0x58a66a1a6ece8dff)) goto LAB_0014ea7c;
        iVar2 = FUN_00212730(0,1,&DAT_0021f594);
        bVar1 = iVar2 == 0;
        lVar11 = 0x440cd085d4cedea;
        lVar13 = -0x2d0aa80c55cd2380;
      }
      else {
        if (lVar11 < -0x4560cf63bc9dbca2) {
          if (lVar11 < -0x484050abea96cd5b) {
            uVar3 = uVar16;
            lVar13 = -0x37c048605fda5dd4;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 != -0x4c555fcc0e68eb2f) {
              if (lVar11 == -0x4a4d54cd475ad68d) {
                DAT_0021d4f0 = DAT_0021d4f0 ^ 0xb8;
                DAT_0021d4f1 = DAT_0021d4f1 ^ 0xb8;
                DAT_0021d4f2 = DAT_0021d4f2 ^ 0xb8;
                _DAT_0021d4e0 = _DAT_0021d4e0 ^ 0xb8b8b8b8b8b8b8b8;
                uRam000000000021d4e8 = uRam000000000021d4e8 ^ 0xb8b8b8b8b8b8b8b8;
                DAT_0021f71a = '\x01';
                lVar13 = 0x21a419d863216111;
              }
              else {
                lVar13 = lVar11;
                if (lVar11 == -0x489ca353db7f6c0f) {
                  DAT_0021d524 = DAT_0021d524 ^ 0xc1;
                  DAT_0021d525 = DAT_0021d525 ^ 0xc1;
                  DAT_0021d527 = DAT_0021d527 ^ 0xc1;
                  DAT_0021d526 = DAT_0021d526 ^ 0xc1;
                  DAT_0021d528 = DAT_0021d528 ^ 0xc1;
                  DAT_0021d529 = DAT_0021d529 ^ 0xc1;
                  DAT_0021d52a = DAT_0021d52a ^ 0xc1;
                  DAT_0021f71e = '\x01';
                  lVar13 = 0x1a860386f9c1d99a;
                }
              }
            }
          }
          else {
            if (lVar11 == -0x484050abea96cd5b) goto LAB_0014ea44;
            uVar3 = uVar16;
            lVar13 = 0x58101ba26f9c13a0;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if ((lVar11 != -0x46706da9a2401d06) && (lVar13 = lVar11, lVar11 == -0x45eaf2249c4ca000))
            {
              DAT_0021f424 = 0;
              iVar2 = FUN_001e17a8(&DAT_0021cf84,*local_218);
              bVar4 = iVar2 == 0 | local_160;
              goto LAB_00151344;
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < -0x412988862fa8ba94) {
          if (lVar11 == -0x4560cf63bc9dbca2) {
            uVar3 = uVar16;
            lVar13 = -0x32df0cfabe40abcd;
            if ((local_14c & local_210 != 0) == 0) {
              lVar13 = 0x7ca212248aecd56f;
            }
          }
          else {
            uVar3 = uVar16;
            lVar13 = 0x1ff50a82295d464e;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if ((lVar11 != -0x44b68e814d5922ad) && (lVar13 = lVar11, lVar11 == -0x41526153ff4b4f62))
            {
              lVar13 = 0x550cd2d0d996162c;
            }
          }
          goto LAB_0014ea7c;
        }
        uVar3 = uVar16;
        lVar13 = 0x2ff578f0cfafeb8d;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        in_w10 = local_a4;
        if (((lVar11 == -0x412988862fa8ba94) ||
            (lVar13 = 0x53a556703bfe8b1f, in_w10 = bVar12, lVar11 == -0x3e32e274cef3572b)) ||
           (lVar13 = lVar11, lVar11 != -0x3d4f8112590beac0)) goto LAB_0014ea7c;
        DAT_0021f558 = 0;
        iVar2 = FUN_001e17a8(&DAT_0021d3f0,local_220);
        bVar1 = iVar2 == 0;
        lVar11 = -0x618793cff0c1258d;
        lVar13 = 0x5209524193281671;
      }
LAB_00153f6c:
      uVar3 = uVar16;
      param_3 = bVar4;
      unaff_100001a8 = bVar4;
      in_w10 = bVar12;
      if (!bVar1) {
        lVar13 = lVar11;
      }
      goto LAB_0014ea7c;
    }
    if (-0x252419398418233f < lVar11) {
      if (lVar11 < -0xeee1dd37d581ba6) {
        if (lVar11 < -0x18361809e2a7fbce) {
          if (lVar11 < -0x20def5cf10190981) {
            if (lVar11 == -0x252419398418233e) {
              uVar3 = uVar16;
              lVar13 = -0x2e35e6d9564f2dfa;
              if ((local_a8 & local_1f0 != 0) == 0) {
                lVar13 = 0x8fb662e46c0fbd3;
              }
            }
            else if (lVar11 == -0x225fdf9f79799a78) {
              local_15c = 0;
              local_178 = 0;
              uVar3 = uVar16;
              lVar13 = 0x4b33ae40c34368ca;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
            }
            else {
              uVar3 = uVar16;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (lVar11 == -0x218e9efc070b1e7c) {
LAB_0015064c:
                uVar3 = uVar16;
                lVar13 = -0xeee1dd37d581ba6;
                param_3 = bVar5;
                unaff_100001a8 = bVar5;
              }
            }
          }
          else {
            uVar3 = uVar16;
            lVar13 = -0x10a35357d5769427;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            param_5 = local_ac;
            if (((lVar11 != -0x20def5cf10190981) &&
                (lVar13 = -0x37c048605fda5dd4, param_5 = bVar6, lVar11 != -0x1eed83f43181ce21)) &&
               (lVar13 = lVar11, lVar11 == -0x1d831319e0098aee)) {
              lVar13 = -0x31bc73e2f10ee04d;
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < -0x11a62c1e324f35eb) {
          if (lVar11 == -0x18361809e2a7fbce) {
            uVar3 = uVar16;
            lVar13 = -0x5d363f04b96248ff;
            if ((local_11c & local_1c0 != 0) == 0) {
              lVar13 = 0x40efc44368d2b316;
            }
          }
          else if (lVar11 == -0x16e6dcdadccc2a21) {
            uVar3 = uVar16;
            lVar13 = 0x406f88e31790cd8c;
            if (DAT_0021f6e7 == '\0') {
              lVar13 = 0x8378b7ff07cba5d;
            }
          }
          else {
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == -0x127fac430929d34a) {
              lVar13 = 0x4befaceaa8ec5858;
            }
          }
          goto LAB_0014ea7c;
        }
        uVar3 = uVar16;
        lVar13 = -0xf9296754e3109d3;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (lVar11 == -0x11a62c1e324f35eb) goto LAB_0014ea7c;
        if (lVar11 == -0x10a35357d5769427) {
          local_210 = *(ulong *)(param_2 + 0x870);
          local_208 = local_148 + 1;
          lVar13 = 0x6c1df7016bcbd51;
          local_14c = bVar6;
          if (local_210 <= local_208) {
            lVar13 = -0x4560cf63bc9dbca2;
          }
          goto LAB_0014ea7c;
        }
        lVar13 = lVar11;
        if (lVar11 != -0xf9296754e3109d3) goto LAB_0014ea7c;
        iVar2 = FUN_00212730(0,1,&DAT_0021f57c);
        bVar1 = iVar2 == 0;
        lVar11 = 0x7638217da725cd8e;
        lVar13 = -0x949910083d614cc;
      }
      else {
        if (-0x212a8a2220b1f00 < lVar11) {
          if (lVar11 < 0xead9896bea70bb) {
            if (lVar11 == -0x212a8a2220b1eff) {
              DAT_0021d3e0 = DAT_0021d3e0 ^ 0x23;
              DAT_0021d3e1 = DAT_0021d3e1 ^ 0x23;
              DAT_0021d3e2 = DAT_0021d3e2 ^ 0x23;
              DAT_0021d3e3 = DAT_0021d3e3 ^ 0x23;
              DAT_0021d3e4 = DAT_0021d3e4 ^ 0x23;
              DAT_0021d3e5 = DAT_0021d3e5 ^ 0x23;
              DAT_0021d3e6 = DAT_0021d3e6 ^ 0x23;
              DAT_0021d3d8 = DAT_0021d3d8 ^ 0x2323232323232323;
              DAT_0021f70e = '\x01';
              uVar3 = uVar16;
              lVar13 = 0x377f4c5bd23c0c8f;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
            }
            else if (lVar11 == 0x48c3b67eb614c5) {
              uVar3 = uVar16;
              lVar13 = 0x7e6c2427cb721423;
              if (DAT_0021f70e == '\0') {
                lVar13 = -0x212a8a2220b1eff;
              }
            }
            else {
              uVar3 = uVar16;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (lVar11 == 0x55530beefb4ffe) goto LAB_0015064c;
            }
          }
          else {
            if (lVar11 == 0xead9896bea70bb) {
              DAT_0021f580 = 0;
              iVar2 = FUN_001e17a8(&DAT_0021d4d0,*local_228);
              bVar4 = iVar2 == 0 | local_17c;
              goto LAB_00154028;
            }
            if (lVar11 == 0x37a620ceadd4a75) {
              DAT_0021d3a0 = DAT_0021d3a0 ^ 0x2f;
              DAT_0021d3a1 = DAT_0021d3a1 ^ 0x2f;
              DAT_0021d398 = DAT_0021d398 ^ 0x2f2f2f2f2f2f2f2f;
              DAT_0021f70a = '\x01';
              uVar3 = uVar16;
              lVar13 = 0x60280cedf702de00;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
            }
            else {
              uVar3 = uVar16;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (lVar11 == 0x440cd085d4cedea) goto LAB_00152384;
            }
          }
          goto LAB_0014ea7c;
        }
        if (-0xb5f7267f6a1bcd5 < lVar11) {
          if (lVar11 == -0xb5f7267f6a1bcd4) {
            local_220 = *(long *)(param_2 + uVar10 * 0x10 + 0x70);
            uVar3 = uVar16;
            lVar13 = -0x37d2658f0b30e03d;
            local_158 = uVar10;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            local_160 = bVar7;
            if (local_220 != 0) {
              lVar13 = -0x54b6758fd937479e;
            }
          }
          else if (lVar11 == -0x98922ec0f47703b) {
            local_228 = (long *)(param_2 + local_170 * 0x10 + 0x78);
            uVar3 = uVar16;
            lVar13 = 0xb70be7a52ecde1b;
            if (*local_228 != 0) {
              lVar13 = -0x11a62c1e324f35eb;
            }
          }
          else {
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == -0x949910083d614cc) {
              lVar13 = -0x5d327f2a558911d2;
              param_3 = bVar4;
              unaff_100001a8 = bVar4;
              if (DAT_0021f718 == '\0') {
                lVar13 = -0x7c8acbaabf625b1b;
              }
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 == -0xeee1dd37d581ba6) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f584);
          bVar1 = iVar2 == 0;
          lVar11 = 0x55530beefb4ffe;
          lVar13 = 0x35f55c7c54795972;
        }
        else {
          if (lVar11 != -0xd164c1d305db109) {
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == -0xbbe1ed83b3dd442) {
              DAT_0021f57c = 0;
              iVar2 = FUN_001e17a8(&DAT_0021d4b0,local_230);
              bVar1 = iVar2 == 0;
              lVar13 = -0x396be75ff3f52887;
              lVar11 = 0x198ee337b92cb99b;
              goto LAB_0015368c;
            }
            goto LAB_0014ea7c;
          }
          iVar2 = FUN_00212730(0,1,&DAT_0021f424);
          bVar1 = iVar2 == 0;
          lVar11 = -0x350436511fa555a2;
          lVar13 = 0x45f8a011c1bbb965;
        }
      }
      goto LAB_00153f6c;
    }
    if (lVar11 < -0x31bc73e2f10ee04d) {
      if (lVar11 < -0x37c048605fda5dd4) {
        if (lVar11 < -0x398461cfa489bb03) {
          if (lVar11 == -0x3b1723e2b172358f) {
            local_1f0 = *(ulong *)(param_2 + 0x870);
            local_b8 = local_138 + 1;
            uVar3 = uVar16;
            lVar13 = 0x333b9165375df76b;
            local_a8 = uVar15;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (local_1f0 <= local_b8) {
              lVar13 = -0x252419398418233e;
            }
          }
          else {
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == -0x3a5e9919fa16211a) {
              lVar13 = 0x3708c14db08162ad;
            }
          }
        }
        else if (lVar11 == -0x398461cfa489bb03) {
          local_c0 = local_158 + 1;
          uVar3 = uVar16;
          lVar13 = 0x3a49980af2024d9d;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          local_a4 = local_108;
          if (*(ulong *)(param_2 + 0x870) <= local_c0) {
            lVar13 = -0x412988862fa8ba94;
          }
        }
        else {
          uVar3 = uVar16;
          lVar13 = 0x53a556703bfe8b1f;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if ((lVar11 != -0x396be75ff3f52887) && (lVar13 = lVar11, lVar11 == -0x37d2658f0b30e03d))
          goto LAB_0014ea44;
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 < -0x350436511fa555a2) {
        if (lVar11 == -0x37c048605fda5dd4) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f424);
          bVar1 = iVar2 == 0;
          lVar11 = -0x1eed83f43181ce21;
          lVar13 = 0x3944a1a4b91b9599;
          goto LAB_00153f6c;
        }
        if (lVar11 == -0x35e88eb74b5cca71) {
          uVar3 = uVar16;
          lVar13 = 0x22e30fd623edcefa;
          if (*(long *)(param_2 + 0x870) != 7) {
            lVar13 = -0x35446ecb5f631f52;
          }
          goto LAB_0014ea7c;
        }
        uVar3 = uVar16;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (lVar11 != -0x35446ecb5f631f52) goto LAB_0014ea7c;
      }
      else {
        uVar3 = uVar16;
        lVar13 = -0xd164c1d305db109;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (lVar11 == -0x350436511fa555a2) goto LAB_0014ea7c;
        if (lVar11 != -0x33dbd6737f3adaa5) {
          lVar13 = lVar11;
          if (lVar11 == -0x32df0cfabe40abcd) {
            in_x9 = 0;
            lVar13 = -0xb5f7267f6a1bcd4;
            param_6 = 0;
          }
          goto LAB_0014ea7c;
        }
      }
    }
    else {
      if (-0x2cbab76095bc5dac < lVar11) {
        if (lVar11 < -0x2911dd830edb2338) {
          if (lVar11 == -0x2cbab76095bc5dab) {
            uVar3 = uVar16;
            lVar13 = -0x78a9e640609697b9;
            if (DAT_0021f71d == '\0') {
              lVar13 = 0x17127dcf957ceb40;
            }
          }
          else {
            if (lVar11 == -0x2bab241824027480) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f588);
              bVar1 = iVar2 == 0;
              lVar13 = -0x2ec4f5521dc2556f;
              lVar11 = 0x7c30806781f5f4e4;
              goto LAB_0015368c;
            }
            uVar3 = uVar16;
            unaff_100001a8 = bVar5;
            if (lVar11 == -0x2a6296b0e2ce77b4) goto LAB_0014ea44;
          }
        }
        else if (lVar11 == -0x2911dd830edb2338) {
          lVar13 = -0x45eaf2249c4ca000;
LAB_00153ef0:
          DAT_0021cf87 = DAT_0021cf87 ^ 0xde;
          DAT_0021cf86 = DAT_0021cf86 ^ 0xde;
          DAT_0021cf85 = DAT_0021cf85 ^ 0xde;
          DAT_0021cf84 = DAT_0021cf84 ^ 0xde;
          DAT_0021cf88 = DAT_0021cf88 ^ 0xde;
          DAT_0021f6c2 = '\x01';
          uVar3 = uVar16;
        }
        else {
          uVar3 = uVar16;
          lVar13 = 0x550cd2d0d996162c;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if ((lVar11 != -0x284f0cf49147c5f6) && (lVar13 = lVar11, lVar11 == -0x26f13d59d05e0c38)) {
            local_1a0 = *(ulong *)(param_2 + 0x870);
            local_198 = local_100 + 1;
            lVar13 = 0x381350313e72be82;
            local_10c = local_164;
            if (local_1a0 <= local_198) {
              lVar13 = 0x16c49b58f6f1e674;
            }
          }
        }
        goto LAB_0014ea7c;
      }
      if (-0x2e35e6d9564f2dfb < lVar11) {
        if (lVar11 == -0x2e35e6d9564f2dfa) {
          local_e0 = 0;
          local_e4 = 0;
          goto LAB_001537b4;
        }
        if (lVar11 == -0x2e0226396fa51b9f) goto LAB_001525a8;
        uVar3 = uVar16;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (lVar11 == -0x2d0aa80c55cd2380) {
          lVar13 = -0x5ae1993f076da121;
          param_3 = bVar4;
          unaff_100001a8 = bVar4;
          if (DAT_0021f71e == '\0') {
            lVar13 = -0x489ca353db7f6c0f;
          }
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 == -0x31bc73e2f10ee04d) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f424);
        bVar1 = iVar2 == 0;
        lVar11 = -0x1d831319e0098aee;
        lVar13 = 0x7ffb4430b10fb25;
        goto LAB_00153f6c;
      }
      if (lVar11 != -0x30d005201502684a) {
        uVar3 = uVar16;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (lVar11 == -0x2ec4f5521dc2556f) {
          lVar13 = 0xd18299e5baf1a7c;
          param_3 = bVar4;
          unaff_100001a8 = bVar4;
          if (DAT_0021f71b == '\0') {
            lVar13 = 0x1801af2757a1199d;
          }
        }
        goto LAB_0014ea7c;
      }
    }
  }
  else {
    uVar15 = (uint)uVar3;
    if (lVar11 < 0x406f88e31790cd8c) {
      if (0x1ff50a82295d464d < lVar11) {
        if (lVar11 < 0x333b9165375df76b) {
          if (lVar11 < 0x250a69ba5d7cce84) {
            if (lVar11 < 0x222943e366832f94) {
              if (lVar11 == 0x1ff50a82295d464e) {
                DAT_0021f424 = 0;
                iVar2 = FUN_001e17a8(&DAT_0021cf84,*local_1f8);
                uVar3 = uVar16;
                lVar13 = -0x10a35357d5769427;
                param_3 = bVar5;
                unaff_100001a8 = bVar5;
                param_5 = iVar2 == 0 | local_ac;
              }
              else if (lVar11 == 0x201a8f7f3ff7f94d) {
                local_148 = local_e0;
                local_200 = *(long *)(param_2 + local_e0 * 0x10 + 0x70);
                uVar3 = uVar16;
                lVar13 = 0x50b95023cad1ae2f;
                param_3 = bVar5;
                unaff_100001a8 = bVar5;
                local_ac = local_e4;
                if (local_200 != 0) {
                  lVar13 = -0x5ad2d652361d0d19;
                }
              }
              else {
                uVar3 = uVar16;
                param_3 = bVar5;
                unaff_100001a8 = bVar5;
                if (lVar11 == 0x21a419d863216111) {
                  DAT_0021f584 = 0;
                  iVar2 = FUN_001e17a8(&DAT_0021d4e0,*local_1a8);
                  lVar13 = -0x563e13e0a27731a6;
                  param_7 = iVar2 == 0 | local_c4;
                }
              }
            }
            else {
              if (lVar11 == 0x222943e366832f94) goto LAB_001525a8;
              if (lVar11 == 0x22e30fd623edcefa) {
                local_f0 = 0;
                local_f4 = 0;
                uVar3 = uVar16;
                lVar13 = 0x1e455fea71570829;
                param_3 = bVar5;
                unaff_100001a8 = bVar5;
              }
              else {
                uVar3 = uVar16;
                param_3 = bVar5;
                unaff_100001a8 = bVar5;
                if (lVar11 == 0x23f216d8235644a6) {
                  lVar13 = 0x7094c9b3c2d667a0;
                  local_f8 = local_130;
                }
              }
            }
          }
          else if (lVar11 < 0x28d957464cf180a1) {
            uVar3 = uVar16;
            lVar13 = 0x3708c14db08162ad;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 != 0x250a69ba5d7cce84) {
              if (lVar11 == 0x25aef4e9c7a3cced) {
                DAT_0021f4b8 = 0;
                lVar13 = FUN_001e238c(*(undefined8 *)(param_2 + 0x30),&DAT_0021d148);
                bVar1 = lVar13 == 0;
                lVar13 = -0x676085a1ab199639;
                lVar11 = 0x4216f7b2e2ac276d;
                goto LAB_0015368c;
              }
              lVar13 = lVar11;
              if (lVar11 == 0x2618541bbc04191b) goto LAB_001525a8;
            }
          }
          else if (lVar11 == 0x28d957464cf180a1) {
            uVar3 = uVar16;
            lVar13 = 0x4150ffe341c70f57;
            if (DAT_0021f70c == '\0') {
              lVar13 = 0x593b561704162815;
            }
          }
          else if (lVar11 == 0x2ebbf962da689fcc) {
            local_1a8 = (long *)(param_2 + local_118 * 0x10 + 0x78);
            uVar3 = uVar16;
            lVar13 = 0x2618541bbc04191b;
            if (*local_1a8 != 0) {
              lVar13 = 0x47a902d2c31b635d;
            }
          }
          else {
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == 0x2ff578f0cfafeb8d) {
              return bVar12 & 1;
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < 0x392e1cfcc73e2a45) {
          if (lVar11 < 0x3708c14db08162ad) {
            uVar3 = (ulong)local_a8;
            param_1 = local_b8;
            lVar13 = 0x425aac5b41cff4a2;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 != 0x333b9165375df76b) {
              if (lVar11 == 0x3429d771d0c3b649) goto LAB_0014ea44;
              uVar3 = uVar16;
              param_1 = uVar9;
              lVar13 = lVar11;
              if (lVar11 == 0x35f55c7c54795972) {
                lVar13 = 0x17de0f2a9fe2b4d3;
                param_3 = bVar4;
                unaff_100001a8 = bVar4;
                if (DAT_0021f71a == '\0') {
                  lVar13 = -0x4a4d54cd475ad68d;
                }
              }
            }
            goto LAB_0014ea7c;
          }
          if (lVar11 != 0x3708c14db08162ad) {
            if (lVar11 == 0x377f4c5bd23c0c8f) {
              DAT_0021f554 = 0;
              iVar2 = FUN_001e17a8(&DAT_0021d3d8,local_1e8);
              bVar1 = iVar2 == 0;
              lVar11 = -0x5fd4dfbf52a9bc43;
              lVar13 = -0x46706da9a2401d06;
              goto LAB_00153f6c;
            }
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == 0x381350313e72be82) {
              local_178 = local_198;
              lVar13 = 0x4b33ae40c34368ca;
              local_15c = local_10c;
            }
            goto LAB_0014ea7c;
          }
          iVar2 = FUN_00212730(0,1,&DAT_0021f558);
          bVar1 = iVar2 == 0;
          lVar13 = 0x4a6beb67229b70e6;
          lVar11 = 0x250a69ba5d7cce84;
        }
        else {
          if (0x3a49980af2024d9c < lVar11) {
            uVar3 = uVar16;
            in_x9 = local_c0;
            lVar13 = -0xb5f7267f6a1bcd4;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            param_6 = local_a4;
            if (((lVar11 != 0x3a49980af2024d9d) &&
                (in_x9 = uVar10, lVar13 = 0x6dbe7950ce2eea6, param_6 = bVar7,
                lVar11 != 0x3a67ab4e0de76fb3)) && (lVar13 = lVar11, lVar11 == 0x3ddf9f656969c274)) {
              local_118 = local_140;
              local_1b0 = *(long *)(param_2 + local_140 * 0x10 + 0x70);
              lVar13 = 0x48e6d2f03bca4331;
              local_c4 = local_12c;
              if (local_1b0 != 0) {
                lVar13 = 0x2ebbf962da689fcc;
              }
            }
            goto LAB_0014ea7c;
          }
          uVar3 = uVar16;
          lVar13 = 0x60280cedf702de00;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (lVar11 == 0x392e1cfcc73e2a45) goto LAB_0014ea7c;
          if (lVar11 == 0x3944a1a4b91b9599) {
            lVar13 = -0x44b68e814d5922ad;
            param_3 = bVar4;
            unaff_100001a8 = bVar4;
            if (DAT_0021f6c2 == '\0') {
              lVar13 = 0x6082398050b1a56c;
            }
            goto LAB_0014ea7c;
          }
          lVar13 = lVar11;
          if (lVar11 != 0x39a7f0fb9977dffc) goto LAB_0014ea7c;
          iVar2 = FUN_00212730(0,1,&DAT_0021f4b8);
          bVar1 = iVar2 == 0;
          lVar13 = -0x16e6dcdadccc2a21;
          lVar11 = 0x17a95f467534555d;
        }
LAB_0015368c:
        uVar3 = uVar16;
        param_3 = bVar4;
        unaff_100001a8 = bVar4;
        if (!bVar1) {
          lVar13 = lVar11;
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 < 0xe77b5fd8e5a1ae4) {
        if (lVar11 < 0x8fb662e46c0fbd3) {
          if (lVar11 < 0x6dbe7950ce2eea6) {
            uVar3 = uVar16;
            lVar13 = -0x563e13e0a27731a6;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            param_7 = local_c4;
            if ((lVar11 != 0x672306c2a61ad77) &&
               (lVar13 = lVar11, param_7 = bVar8, lVar11 == 0x6c1df7016bcbd51)) {
              local_e0 = local_208;
              local_e4 = local_14c;
LAB_001537b4:
              uVar3 = uVar16;
              lVar13 = 0x201a8f7f3ff7f94d;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              param_7 = bVar8;
            }
          }
          else {
            if (lVar11 == 0x6dbe7950ce2eea6) {
              iVar2 = FUN_00212730(0,1,&DAT_0021f54c);
              bVar1 = iVar2 == 0;
              lVar11 = 0x3a67ab4e0de76fb3;
              lVar13 = 0x28d957464cf180a1;
              goto LAB_00153f6c;
            }
            if (lVar11 == 0x7ffb4430b10fb25) {
              uVar3 = uVar16;
              lVar13 = 0xb449cb939c4d401;
              if (DAT_0021f6c2 == '\0') {
                lVar13 = -0x6b9f6fd3a339574b;
              }
            }
            else {
              uVar3 = uVar16;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
              if (lVar11 == 0x8378b7ff07cba5d) {
                DAT_0021d148 = DAT_0021d148 ^ 0x1919191919191919;
                DAT_0021f6e7 = '\x01';
                lVar13 = 0x25aef4e9c7a3cced;
              }
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < 0xc1cc32fbbf3b16a) {
          if ((lVar11 != 0x8fb662e46c0fbd3) &&
             ((uVar3 = uVar16, lVar13 = -0x5522a83485bec31e, param_3 = bVar5, unaff_100001a8 = bVar5
              , lVar11 == 0xb449cb939c4d401 || (lVar13 = lVar11, lVar11 != 0xb70be7a52ecde1b))))
          goto LAB_0014ea7c;
        }
        else {
          uVar3 = uVar16;
          lVar13 = 0x554807ffdfa41730;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (lVar11 == 0xc1cc32fbbf3b16a) goto LAB_0014ea7c;
          if (lVar11 != 0xc65b25a4712329a) {
            lVar13 = lVar11;
            if (lVar11 == 0xd18299e5baf1a7c) {
              lVar13 = -0x6ac9799554e53b29;
            }
            goto LAB_0014ea7c;
          }
        }
      }
      else {
        if (0x17de0f2a9fe2b4d2 < lVar11) {
          if (lVar11 < 0x1a860386f9c1d99a) {
            uVar3 = uVar16;
            lVar13 = 0x21a419d863216111;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 != 0x17de0f2a9fe2b4d3) {
              if (lVar11 == 0x1801af2757a1199d) {
                DAT_0021d510 = DAT_0021d510 ^ 0xa5;
                DAT_0021d511 = DAT_0021d511 ^ 0xa5;
                DAT_0021d512 = DAT_0021d512 ^ 0xa5;
                DAT_0021d513 = DAT_0021d513 ^ 0xa5;
                _DAT_0021d500 = _DAT_0021d500 ^ 0xa5a5a5a5a5a5a5a5;
                uRam000000000021d508 = uRam000000000021d508 ^ 0xa5a5a5a5a5a5a5a5;
                DAT_0021f71b = '\x01';
                lVar13 = -0x6ac9799554e53b29;
              }
              else {
                lVar13 = lVar11;
                bVar4 = local_17c;
                if (lVar11 == 0x198ee337b92cb99b) {
LAB_00154028:
                  uVar3 = uVar16;
                  lVar13 = -0x7b75420f1461aa52;
                  param_3 = bVar5;
                  unaff_100001a8 = bVar5;
                  local_110 = bVar4;
                }
              }
            }
          }
          else {
            if (lVar11 == 0x1a860386f9c1d99a) {
              DAT_0021f594 = 0;
              iVar2 = FUN_001e17a8(*(undefined8 *)(param_2 + 8),&DAT_0021d524);
              bVar1 = iVar2 == 0;
              lVar11 = 0xe77b5fd8e5a1ae4;
              lVar13 = 0x43caf3b81ea1e4c2;
              goto LAB_00153f6c;
            }
            if (lVar11 == 0x1ac7d4c5b45c8f86) goto LAB_0014ea44;
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == 0x1e455fea71570829) {
              local_170 = local_f0;
              local_230 = *(long *)(param_2 + local_f0 * 0x10 + 0x70);
              lVar13 = 0x120c59c4e8e89791;
              local_17c = local_f4;
              if (local_230 != 0) {
                lVar13 = -0x98922ec0f47703b;
              }
            }
          }
          goto LAB_0014ea7c;
        }
        if (0x16c49b58f6f1e673 < lVar11) {
          if (lVar11 == 0x16c49b58f6f1e674) {
            uVar3 = uVar16;
            lVar13 = 0x5300603f673a011f;
            if ((local_10c & local_1a0 != 0) == 0) {
              lVar13 = 0x6036148fee62600b;
            }
          }
          else if (lVar11 == 0x17127dcf957ceb40) {
            DAT_0021d520 = DAT_0021d520 ^ 0xce;
            DAT_0021d518 = DAT_0021d518 ^ 0xcececececececece;
            DAT_0021f71d = '\x01';
            uVar3 = uVar16;
            lVar13 = -0x6f258cbfd4a30e38;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
          }
          else {
            uVar3 = uVar16;
            param_3 = bVar5;
            unaff_100001a8 = bVar5;
            if (lVar11 == 0x17a95f467534555d) {
LAB_00151d80:
              uVar3 = uVar16;
              lVar13 = 0x39a7f0fb9977dffc;
              param_3 = bVar5;
              unaff_100001a8 = bVar5;
            }
          }
          goto LAB_0014ea7c;
        }
        uVar3 = uVar16;
        lVar13 = -0x35e88eb74b5cca71;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (lVar11 == 0xe77b5fd8e5a1ae4) goto LAB_0014ea7c;
        if (lVar11 != 0x120c59c4e8e89791) {
          lVar13 = lVar11;
          if (lVar11 == 0x12f33f938a65216c) {
            lVar11 = 0x7a0267a49a9d0ad8;
            local_1e0 = (long *)(param_2 + local_138 * 0x10 + 0x78);
            bVar1 = *local_1e0 == 0;
            lVar13 = -0x484050abea96cd5b;
            goto LAB_0015368c;
          }
          goto LAB_0014ea7c;
        }
      }
LAB_0014ea44:
      uVar3 = uVar16;
      param_1 = uVar9;
      lVar13 = 0x2ff578f0cfafeb8d;
      param_3 = bVar4;
      unaff_100001a8 = bVar5;
      in_w10 = 0;
      goto LAB_0014ea7c;
    }
    if (0x549e8574b01cd796 < lVar11) {
      if (0x65ac4e04e0e5f8ae < lVar11) {
        if (lVar11 < 0x78f3a3ae15718414) {
          if (lVar11 < 0x6fb33f1e6cfb9bc5) {
            uVar3 = uVar16;
            lVar13 = 0x46dd4ba59c558bd3;
            if (((lVar11 != 0x65ac4e04e0e5f8af) &&
                (lVar13 = 0x58101ba26f9c13a0, lVar11 != 0x69a316627e10da94)) &&
               (lVar13 = lVar11, lVar11 == 0x69eaf2763ce889b8)) {
              lVar13 = 0xc1cc32fbbf3b16a;
              if (DAT_0021f710 == '\0') {
                lVar13 = 0x549e8574b01cd797;
              }
            }
          }
          else {
            uVar3 = uVar16;
            lVar13 = -0x6ef39ccd177a5c22;
            if (lVar11 != 0x6fb33f1e6cfb9bc5) {
              if (lVar11 == 0x7094c9b3c2d667a0) {
                local_1d8 = *(ulong *)(param_2 + 0x870);
                local_d8 = local_128 + 1;
                lVar13 = -0x721bdd5ad5cac8d5;
                local_c8 = local_f8;
                if (local_1d8 <= local_d8) {
                  lVar13 = -0x690a643db3a0e39f;
                }
              }
              else {
                lVar13 = lVar11;
                if (lVar11 == 0x7638217da725cd8e) {
                  lVar13 = -0xf9296754e3109d3;
                }
              }
            }
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 < 0x7ca212248aecd56f) {
          if (lVar11 == 0x78f3a3ae15718414) {
            uVar3 = uVar16;
            lVar13 = 0x65ac4e04e0e5f8af;
            if (DAT_0021f71c == '\0') {
              lVar13 = -0x54e2087b5ee28cee;
            }
          }
          else {
            uVar3 = uVar16;
            lVar13 = 0x4befaceaa8ec5858;
            if ((lVar11 != 0x7a0267a49a9d0ad8) && (lVar13 = lVar11, lVar11 == 0x7c30806781f5f4e4))
            goto LAB_0015197c;
          }
          goto LAB_0014ea7c;
        }
        if (lVar11 != 0x7ca212248aecd56f) {
          uVar3 = uVar16;
          lVar13 = 0x377f4c5bd23c0c8f;
          if ((lVar11 != 0x7e6c2427cb721423) && (lVar13 = lVar11, lVar11 == 0x7f6bdb4e26e58205)) {
            local_1d0 = *(long *)(param_2 + uVar14 * 0x10 + 0x70);
            lVar13 = 0x222943e366832f94;
            local_128 = uVar14;
            local_130 = bVar4;
            if (local_1d0 != 0) {
              lVar13 = -0x55cc2ad037bc1703;
            }
          }
          goto LAB_0014ea7c;
        }
        goto LAB_0014ea44;
      }
      if (0x58b9fa903f050b66 < lVar11) {
        if (lVar11 < 0x6036148fee62600b) {
          if (lVar11 == 0x58b9fa903f050b67) {
            _DAT_0021d4d0 = _DAT_0021d4d0 ^ 0xbebebebebebebebe;
            uRam000000000021d4d8 = uRam000000000021d4d8 ^ 0xbebebebebebebebe;
            DAT_0021f719 = '\x01';
            uVar3 = uVar16;
            lVar13 = 0xead9896bea70bb;
            goto LAB_0014ea7c;
          }
          if (lVar11 == 0x593b561704162815) {
            DAT_0021d3c0 = DAT_0021d3c0 ^ 0x37;
            DAT_0021d3c1 = DAT_0021d3c1 ^ 0x37;
            DAT_0021d3c2 = DAT_0021d3c2 ^ 0x37;
            DAT_0021d3c3 = DAT_0021d3c3 ^ 0x37;
            DAT_0021d3c4 = DAT_0021d3c4 ^ 0x37;
            DAT_0021d3c5 = DAT_0021d3c5 ^ 0x37;
            DAT_0021d3c6 = DAT_0021d3c6 ^ 0x37;
            _DAT_0021d3b0 = _DAT_0021d3b0 ^ 0x3737373737373737;
            uRam000000000021d3b8 = uRam000000000021d3b8 ^ 0x3737373737373737;
            DAT_0021f70c = '\x01';
            uVar3 = uVar16;
            lVar13 = -0x7134ad850e3f2aca;
            goto LAB_0014ea7c;
          }
          uVar3 = uVar16;
          if (lVar11 != 0x60280cedf702de00) goto LAB_0014ea7c;
          DAT_0021f544 = 0;
          iVar2 = FUN_001e17a8(&DAT_0021d398,local_1b0);
          bVar1 = iVar2 == 0;
          lVar13 = -0x218e9efc070b1e7c;
          lVar11 = 0x672306c2a61ad77;
        }
        else {
          if (lVar11 == 0x6036148fee62600b) goto LAB_001525a8;
          if (lVar11 == 0x6082398050b1a56c) {
            lVar13 = 0x1ff50a82295d464e;
            goto LAB_00153ef0;
          }
          uVar3 = uVar16;
          if (lVar11 != 0x636d451c5178cab1) goto LAB_0014ea7c;
          lVar11 = 0x51a005fc510cbc3f;
          local_188 = (long *)(param_2 + local_100 * 0x10 + 0x78);
          bVar1 = *local_188 == 0;
          lVar13 = -0x30d005201502684a;
        }
        goto LAB_0015368c;
      }
      if (0x572c9a083a3a0cd0 < lVar11) {
        uVar3 = uVar16;
        lVar13 = 0xead9896bea70bb;
        if (((lVar11 != 0x572c9a083a3a0cd1) &&
            (lVar13 = 0x523a62a59591715e, lVar11 != 0x580bd1d7c366667d)) &&
           (lVar13 = lVar11, lVar11 == 0x58101ba26f9c13a0)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f590);
          bVar1 = iVar2 == 0;
          lVar13 = -0x2cbab76095bc5dab;
          lVar11 = 0x69a316627e10da94;
          goto LAB_0015368c;
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 == 0x549e8574b01cd797) {
        DAT_0021d420 = DAT_0021d420 ^ 0xcf;
        DAT_0021d421 = DAT_0021d421 ^ 0xcf;
        DAT_0021d422 = DAT_0021d422 ^ 0xcf;
        _DAT_0021d410 = _DAT_0021d410 ^ 0xcfcfcfcfcfcfcfcf;
        uRam000000000021d418 = uRam000000000021d418 ^ 0xcfcfcfcfcfcfcfcf;
        DAT_0021f710 = '\x01';
        uVar3 = uVar16;
        lVar13 = 0x554807ffdfa41730;
        goto LAB_0014ea7c;
      }
      if (lVar11 == 0x550cd2d0d996162c) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f58c);
        bVar1 = iVar2 == 0;
        lVar11 = -0x284f0cf49147c5f6;
        lVar13 = 0x78f3a3ae15718414;
        goto LAB_00153f6c;
      }
      uVar3 = uVar16;
      if (lVar11 != 0x554807ffdfa41730) goto LAB_0014ea7c;
      DAT_0021f55c = 0;
      iVar2 = FUN_001e17a8(&DAT_0021d410,local_190);
      bVar1 = iVar2 == 0;
      lVar11 = -0x7152f074e01f937f;
      lVar13 = -0x58ff310258132cf0;
      goto LAB_00153f6c;
    }
    if (0x4a6beb67229b70e5 < lVar11) {
      if (0x51a005fc510cbc3e < lVar11) {
        if (lVar11 < 0x5300603f673a011f) {
          uVar3 = uVar16;
          lVar13 = -0x6ef39ccd177a5c22;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (((lVar11 != 0x51a005fc510cbc3f) &&
              (lVar13 = -0xd164c1d305db109, lVar11 != 0x5209524193281671)) &&
             (lVar13 = lVar11, lVar11 == 0x523a62a59591715e)) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f544);
            bVar1 = iVar2 == 0;
            lVar11 = 0x580bd1d7c366667d;
            lVar13 = 0x4fad6f99cc37a2ef;
            goto LAB_00153f6c;
          }
        }
        else if (lVar11 == 0x5300603f673a011f) {
          local_140 = 0;
          uVar3 = uVar16;
          lVar13 = 0x3ddf9f656969c274;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          local_12c = 0;
        }
        else if (lVar11 == 0x53107cd98b5769af) {
          DAT_0021d408 = DAT_0021d408 ^ 0xb3;
          DAT_0021d409 = DAT_0021d409 ^ 0xb3;
          DAT_0021d40a = DAT_0021d40a ^ 0xb3;
          _DAT_0021d3f0 = _DAT_0021d3f0 ^ 0xb3b3b3b3b3b3b3b3;
          uRam000000000021d3f8 = uRam000000000021d3f8 ^ 0xb3b3b3b3b3b3b3b3;
          DAT_0021d400 = DAT_0021d400 ^ 0xb3b3b3b3b3b3b3b3;
          DAT_0021f70f = '\x01';
          uVar3 = uVar16;
          lVar13 = -0x3d4f8112590beac0;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
        }
        else {
          uVar3 = uVar16;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (lVar11 == 0x53a556703bfe8b1f) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f580);
            bVar1 = iVar2 == 0;
            lVar13 = -0x7f658c1ab0faadab;
            lVar11 = -0x3e32e274cef3572b;
            goto LAB_0015368c;
          }
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 < 0x4befaceaa8ec5858) {
        if (lVar11 == 0x4a6beb67229b70e6) {
          uVar3 = uVar16;
          lVar13 = -0x598d144fd6a3d550;
          if (DAT_0021f70f == '\0') {
            lVar13 = 0x53107cd98b5769af;
          }
        }
        else if (lVar11 == 0x4b33ae40c34368ca) {
          local_100 = local_178;
          local_190 = *(long *)(param_2 + local_178 * 0x10 + 0x70);
          uVar3 = uVar16;
          lVar13 = -0x2e0226396fa51b9f;
          local_104 = local_15c;
          if (local_190 != 0) {
            lVar13 = 0x636d451c5178cab1;
          }
        }
        else {
          uVar3 = uVar16;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (lVar11 == 0x4b8094a092a0bcb5) {
            local_f0 = local_238;
            lVar13 = 0x1e455fea71570829;
            local_f4 = local_180;
          }
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 != 0x4befaceaa8ec5858) {
        if (lVar11 == 0x4fad6f99cc37a2ef) {
          uVar3 = uVar16;
          lVar13 = 0x392e1cfcc73e2a45;
          if (DAT_0021f70a == '\0') {
            lVar13 = 0x37a620ceadd4a75;
          }
        }
        else {
          uVar3 = uVar16;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if (lVar11 == 0x50b95023cad1ae2f) goto LAB_0014ea44;
        }
        goto LAB_0014ea7c;
      }
      iVar2 = FUN_00212730(0,1,&DAT_0021f554);
      bVar1 = iVar2 == 0;
      lVar11 = -0x127fac430929d34a;
      lVar13 = 0x48c3b67eb614c5;
      goto LAB_00153f6c;
    }
    if (0x425aac5b41cff4a1 < lVar11) {
      if (0x46dd4ba59c558bd2 < lVar11) {
        if (lVar11 == 0x46dd4ba59c558bd3) {
          DAT_0021f58c = 0;
          iVar2 = FUN_001e17a8(&DAT_0021d514,*local_1c8);
          uVar3 = uVar16;
          lVar13 = 0x7094c9b3c2d667a0;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          local_f8 = iVar2 == 0 | local_130;
        }
        else {
          uVar3 = uVar16;
          lVar13 = 0x523a62a59591715e;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
          if ((lVar11 != 0x47a902d2c31b635d) && (lVar13 = lVar11, lVar11 == 0x48e6d2f03bca4331))
          goto LAB_001525a8;
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 == 0x425aac5b41cff4a2) {
        local_1e8 = *(long *)(param_2 + uVar9 * 0x10 + 0x70);
        uVar3 = uVar16;
        lVar13 = 0x1ac7d4c5b45c8f86;
        local_138 = uVar9;
        local_cc = uVar15;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (local_1e8 != 0) {
          lVar13 = 0x12f33f938a65216c;
        }
        goto LAB_0014ea7c;
      }
      if (lVar11 != 0x43caf3b81ea1e4c2) {
        uVar3 = uVar16;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if (lVar11 == 0x45f8a011c1bbb965) {
          lVar13 = -0x730ef2ca7bef1e0d;
          param_3 = bVar4;
          unaff_100001a8 = bVar4;
          if (DAT_0021f6c2 == '\0') {
            lVar13 = -0x2911dd830edb2338;
          }
        }
        goto LAB_0014ea7c;
      }
      in_w10 = 1;
      goto LAB_001525c8;
    }
    if (0x41250bc36db74e4d < lVar11) {
      if (lVar11 == 0x41250bc36db74e4e) {
        uVar3 = 0;
        param_1 = 0;
        lVar13 = 0x425aac5b41cff4a2;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
      }
      else {
        uVar3 = uVar16;
        lVar13 = -0x7134ad850e3f2aca;
        param_3 = bVar5;
        unaff_100001a8 = bVar5;
        if ((lVar11 != 0x4150ffe341c70f57) && (lVar13 = lVar11, lVar11 == 0x4216f7b2e2ac276d)) {
LAB_00152384:
          uVar3 = uVar16;
          lVar13 = -0x58a66a1a6ece8dff;
          param_3 = bVar5;
          unaff_100001a8 = bVar5;
        }
      }
      goto LAB_0014ea7c;
    }
    uVar3 = uVar16;
    lVar13 = 0x25aef4e9c7a3cced;
    param_3 = bVar5;
    unaff_100001a8 = bVar5;
    if ((lVar11 == 0x406f88e31790cd8c) || (lVar13 = lVar11, lVar11 != 0x40efc44368d2b316))
    goto LAB_0014ea7c;
  }
LAB_001525a8:
  in_w10 = 0;
LAB_001525c8:
  uVar3 = uVar16;
  lVar13 = 0x2ff578f0cfafeb8d;
  param_3 = bVar4;
  unaff_100001a8 = bVar4;
  goto LAB_0014ea7c;
}

