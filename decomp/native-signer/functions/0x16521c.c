// rea decompile_all
// name: FUN_0016521c
// address: 0x16521c
// body: available
// range: 0x16521c-0x166a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0016521c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int iVar25;
  ulong uVar26;
  ulong uVar27;
  ulong unaff_x19;
  ulong uVar28;
  ulong unaff_x20;
  uint unaff_w23;
  ulong uVar29;
  
  iVar25 = *(int *)(param_1 + 0x60);
  uVar1 = 0x7e5464ba1aba4809;
  if (iVar25 != 0x17a) {
    uVar1 = 0x85234d3358f36440;
  }
  uVar2 = 0xfca1587c54c4be1c;
  if (iVar25 != 0x398) {
    uVar2 = 0x4260f39fea869655;
  }
  uVar24 = 0x402e3dd66ca636cc;
  uVar3 = 0x1223af0eae487bea;
  if (0x397 < iVar25) {
    uVar3 = uVar24;
  }
  uVar26 = 0x73f0040964e27ab9;
  uVar4 = 0xb3a0550b1d674f8b;
  if (iVar25 != 0x29e) {
    uVar4 = uVar26;
  }
  uVar5 = 0xb3a37842e40494c3;
  if (0x29d < iVar25) {
    uVar5 = 0xc76e1f72542475c9;
  }
  uVar6 = 0x1eec4e60f5131983;
  if (iVar25 != 0x2d0) {
    uVar6 = 0x5a7acd16ef55a03b;
  }
  uVar7 = 0xaba60d0e42ef3efa;
  if (iVar25 != 0x37c) {
    uVar7 = 0x13022f4e094dc745;
  }
  uVar8 = 0x75707819bff39a8;
  if (0x37b < iVar25) {
    uVar8 = 0xd1174bab8864f0a7;
  }
  uVar9 = 0x1ea8143bb2070f69;
  if (iVar25 != 0x300) {
    uVar9 = 0xdf9eba0df895fa7e;
  }
  uVar10 = 0xfa669e6c2cfb004d;
  if (iVar25 != 0x29a) {
    uVar10 = 0x3856890fe3f6be21;
  }
  uVar11 = 0x361099d4beddecf1;
  uVar19 = 0x786d8f3205e6ab94;
  if (iVar25 != 0x2dc) {
    uVar11 = 0x1dec674bc1f8b8d6;
    uVar19 = 0xd482174603c984c3;
  }
  uVar12 = 0x99608bbc11b27871;
  if (0x2db < iVar25) {
    uVar12 = 0x7413d863ebddf4f0;
  }
  uVar13 = 0xf6d3eadeb0c623c0;
  if (iVar25 != 0x35c) {
    uVar13 = 0xc1b3e2c828f74866;
  }
  uVar14 = 0x11f8cd145f6fb239;
  if (0x35b < iVar25) {
    uVar14 = 0x652bad46d010492f;
  }
  uVar15 = 0x195aee818d66a943;
  if (iVar25 != 800) {
    uVar15 = 0x17e1c872cdff29bd;
  }
  uVar16 = 0x7404f32c0442e8c5;
  if (799 < iVar25) {
    uVar16 = 0x55ef5679cd1716d6;
  }
  uVar17 = 0x697f93538764179;
  if (iVar25 != 0x2a0) {
    uVar17 = 0x9f7ce36f60fedb70;
  }
  uVar18 = 0xf3b72b4b27b09a73;
  if (iVar25 != 0x2a0) {
    uVar18 = 0x3df50507daa608dd;
  }
  uVar22 = uVar15;
  uVar23 = 0x6bf5ac17d8aae85d;
LAB_001656b0:
  uVar28 = unaff_x19;
  uVar27 = uVar23;
  uVar21 = uVar22 & 0xffffffff;
  uVar29 = uVar28 & 0xffffffff;
  iVar25 = (int)uVar26;
  uVar23 = uVar27;
  unaff_x19 = uVar29;
  if ((long)uVar27 < 0x11f8cd145f6fb239) {
    if ((long)uVar27 < -0x3ba0c9426317396a) {
      if ((long)uVar27 < -0x60831c909f012490) {
        if ((long)uVar27 < -0x7651ae427c908073) {
          if ((long)uVar27 < -0x7c98ba471c7a6a31) {
            uVar22 = uVar21;
            uVar23 = uVar16;
            if ((uVar27 != 0x82a928ef655516bd) && (uVar23 = uVar27, uVar27 == 0x833940dbce5a7b2d)) {
              uVar23 = uVar19;
            }
          }
          else if (uVar27 == 0x836745b8e38595cf) {
            uVar22 = uVar21;
            uVar23 = 0x767ca0dbf6c2060d;
            if (*(int *)(param_1 + 100) != 0x35c) {
              uVar23 = 0x7c43680fe27bf058;
            }
          }
          else {
            uVar22 = uVar21;
            uVar23 = 0x4d3e31f88e755f6b;
            if ((uVar27 != 0x85234d3358f36440) && (uVar23 = uVar27, uVar27 == 0x86128b4b435f111e)) {
              uVar23 = 0x22dc9305acf8269c;
            }
          }
          goto LAB_001656b0;
        }
        if ((long)uVar27 < -0x675c5442f1efbcfc) {
          uVar22 = uVar21;
          uVar23 = 0x5018acdc2fcdce7d;
          if (uVar27 == 0x89ae51bd836f7f8d) goto LAB_001656b0;
          if (uVar27 == 0x94b9dddba145b49d) goto LAB_0016663c;
          uVar23 = uVar27;
          if (uVar27 != 0x988fda4001e92f17) goto LAB_001656b0;
        }
        else {
          uVar22 = uVar21;
          uVar23 = 0x22dc9305acf8269c;
          if (((uVar27 == 0x98a3abbd0e104304) || (uVar23 = uVar10, uVar27 == 0x99608bbc11b27871)) ||
             (uVar23 = uVar27, uVar27 != 0x9b6fcba74427d441)) goto LAB_001656b0;
        }
LAB_0016653c:
        uVar22 = uVar21;
        uVar23 = 0x4d3e31f88e755f6b;
        goto LAB_001656b0;
      }
      if ((long)uVar27 < -0x4c5faaf4e298b075) {
        if ((long)uVar27 < -0x5459f2f1bd10c106) {
          uVar22 = uVar21;
          uVar23 = 0xb372967e5918c0dd;
          if (uVar27 != 0x9f7ce36f60fedb70) {
            if (uVar27 == 0xa3b8348345c63506) goto LAB_0016663c;
            uVar23 = uVar27;
            if (uVar27 == 0xab5e2338344f7bc5) {
              uVar23 = 0x33cf3aec4804e999;
            }
          }
        }
        else if (uVar27 == 0xaba60d0e42ef3efa) {
          uVar22 = uVar21;
          uVar23 = 0x5ed45bbfda7ca0d0;
          if (*(int *)(param_1 + 100) != 0x2dc) {
            uVar23 = 0x29084f3309891345;
          }
        }
        else {
          uVar22 = uVar21;
          uVar23 = 0x4d3e31f88e755f6b;
          if ((uVar27 != 0xae2213684e1f2842) && (uVar23 = uVar27, uVar27 == 0xb372967e5918c0dd)) {
            uVar23 = 0xfa5663b01e52ea80;
            if ((uVar28 & 1) == 0) {
              uVar23 = 0x89ae51bd836f7f8d;
            }
          }
        }
        goto LAB_001656b0;
      }
      if ((long)uVar27 < -0x41db68b1ba13d9b8) {
        if (uVar27 == 0xb3a0550b1d674f8b) {
          uVar22 = uVar21;
          uVar23 = 0x44f7982321376db;
          if (*(int *)(param_1 + 100) != 0x398) {
            uVar23 = 0x9b6fcba74427d441;
          }
        }
        else {
          uVar22 = uVar21;
          uVar23 = uVar1;
          if ((uVar27 != 0xb3a37842e40494c3) && (uVar23 = uVar27, uVar27 == 0xb9ffd514d3e9e673)) {
            uVar23 = 0xbefe532a0bf9e382;
          }
        }
        goto LAB_001656b0;
      }
      if (uVar27 != 0xbe24974e45ec2648) {
        if (uVar27 == 0xbefe532a0bf9e382) {
          uVar22 = uVar21;
          uVar23 = 0xebe5bbb1d14eb0a7;
          if ((uVar28 & 1) == 0) {
            uVar23 = 0x86128b4b435f111e;
          }
        }
        else {
          uVar22 = uVar21;
          if (uVar27 == 0xc1b3e2c828f74866) goto LAB_001665ac;
        }
        goto LAB_001656b0;
      }
    }
    else {
      if (-0x141a557bf91d530b < (long)uVar27) {
        if ((long)uVar27 < -0x35ea783ab3b41e4) {
          if ((long)uVar27 < -0x92c15214f39dc40) {
            if (uVar27 == 0xebe5aa8406e2acf6) {
              uVar27 = uVar22 & 1;
              uVar22 = uVar21;
              uVar23 = 0x7dc6962a82777921;
              if (uVar27 == 0) {
                uVar23 = 0x156b5df3a46d5947;
              }
            }
            else if (uVar27 == 0xebe5bbb1d14eb0a7) {
              uVar22 = uVar21;
              uVar23 = 0x470629c22cc38e9b;
              if (*(int *)(param_1 + 100) != 0x2a0) {
                uVar23 = 0x98a3abbd0e104304;
              }
            }
            else {
              uVar22 = uVar21;
              if (uVar27 == 0xf3b72b4b27b09a73) {
                uVar23 = 0x76fd535a989551d7;
                if (*(int *)(param_1 + 100) != 0x17a) {
                  uVar23 = 0xae2213684e1f2842;
                }
              }
            }
          }
          else if (uVar27 == 0xf6d3eadeb0c623c0) {
            uVar26 = (ulong)*(uint *)(param_1 + 100);
            uVar22 = uVar21;
            uVar23 = 0xc45f36bd9ce8c696;
          }
          else if (uVar27 == 0xfa5663b01e52ea80) {
            uVar22 = uVar21;
            uVar23 = 0x3edc43bce4373598;
            if (*(int *)(param_1 + 100) != 0x2d0) {
              uVar23 = 0xf49659cdaaf5c77;
            }
          }
          else {
            uVar22 = uVar21;
            if (uVar27 == 0xfa669e6c2cfb004d) {
              uVar23 = 0x408133ba4405b6dc;
              if (*(int *)(param_1 + 100) != 800) {
                uVar23 = 0x3e2ffad4ffd9ecf8;
              }
            }
          }
          goto LAB_001656b0;
        }
        if ((long)uVar27 < 0x697f93538764179) {
          if (uVar27 != 0xfca1587c54c4be1c) {
            if ((uVar27 == 0x7a62bc75f4c97f) || (uVar22 = uVar21, uVar27 == 0x44f7982321376db))
            goto LAB_0016663c;
            goto LAB_001656b0;
          }
          bVar20 = *(int *)(param_1 + 100) == 0x29e;
          uVar27 = 0x49f63f1b7057f8e1;
          uVar23 = 0x94b9dddba145b49d;
        }
        else {
          if (uVar27 != 0x697f93538764179) {
            uVar22 = uVar21;
            uVar23 = uVar6;
            if ((uVar27 != 0x75707819bff39a8) && (uVar23 = uVar27, uVar27 == 0xf49659cdaaf5c77)) {
              uVar23 = 0x5018acdc2fcdce7d;
            }
            goto LAB_001656b0;
          }
          bVar20 = *(int *)(param_1 + 100) == 0x35c;
          uVar27 = 0x57a212ecef58e1bf;
          uVar23 = 0xa3b8348345c63506;
        }
LAB_001656a4:
        uVar22 = uVar21;
        if (!bVar20) {
          uVar23 = uVar27;
        }
        goto LAB_001656b0;
      }
      if (-0x2b7de8b9fc367b3e < (long)uVar27) {
        if ((long)uVar27 < -0x250b91d96a71b549) {
          if (uVar27 == 0xd482174603c984c3) goto LAB_001665ac;
          if (uVar27 == 0xd4dae64c6efe7127) goto LAB_0016677c;
          uVar22 = uVar21;
          if (uVar27 == 0xd807f3104ad301ab) {
            uVar23 = 0xebe5aa8406e2acf6;
          }
        }
        else {
          uVar22 = uVar21;
          uVar23 = 0xbefe532a0bf9e382;
          if (uVar27 != 0xdf9eba0df895fa7e) {
            if (uVar27 == 0xeb87e9ed47fc28f3) {
              uVar23 = 0x2f1d5544dffc386a;
              if (iVar25 != 0x300) {
                uVar23 = 0xd4dae64c6efe7127;
              }
            }
            else {
              uVar23 = uVar27;
              if (uVar27 == 0xdaf46e26958e4ab7) {
                return unaff_w23 & 1;
              }
            }
          }
        }
        goto LAB_001656b0;
      }
      if ((long)uVar27 < -0x33730183422b0ecb) {
        if (uVar27 == 0xc45f36bd9ce8c696) {
          uVar22 = uVar21;
          uVar23 = 0x4ea3a99a692e6960;
          if (0x2ff < iVar25) {
            uVar23 = 0xeb87e9ed47fc28f3;
          }
        }
        else {
          uVar22 = uVar21;
          uVar23 = uVar3;
          if ((uVar27 != 0xc76e1f72542475c9) && (uVar23 = uVar27, uVar27 == 0xc9e19d600559b02d))
          goto LAB_0016663c;
        }
        goto LAB_001656b0;
      }
      uVar22 = unaff_x20 & 0xffffffff;
      uVar23 = uVar9;
      unaff_x19 = uVar24 & 0xffffffff;
      if (uVar27 == 0xcc8cfe7cbdd4f135) goto LAB_001656b0;
      if (uVar27 != 0xd0fe44f6ff7242e6) {
        uVar22 = uVar21;
        uVar23 = uVar27;
        unaff_x19 = uVar29;
        if (uVar27 == 0xd1174bab8864f0a7) {
          uVar23 = uVar7;
        }
        goto LAB_001656b0;
      }
    }
  }
  else if ((long)uVar27 < 0x470629c22cc38e9b) {
    if ((long)uVar27 < 0x22dc9305acf8269c) {
      if ((long)uVar27 < 0x156b5df3a46d5947) {
        if ((long)uVar27 < 0x13022f4e094dc745) {
          uVar22 = uVar21;
          uVar23 = uVar15;
          if ((uVar27 != 0x11f8cd145f6fb239) && (uVar23 = uVar27, uVar27 == 0x1223af0eae487bea)) {
            uVar23 = uVar4;
          }
          goto LAB_001656b0;
        }
        uVar22 = uVar21;
        uVar23 = 0xebe5aa8406e2acf6;
        if (uVar27 == 0x13022f4e094dc745) goto LAB_001656b0;
        if (uVar27 != 0x13857eddb3359044) {
          uVar23 = uVar27;
          if (uVar27 == 0x14868182d4331b45) {
            uVar23 = uVar8;
          }
          goto LAB_001656b0;
        }
LAB_0016677c:
        unaff_x20 = 0;
        uVar24 = 1;
      }
      else {
        if ((long)uVar27 < 0x1dec674bc1f8b8d6) {
          uVar22 = uVar21;
          uVar23 = 0x33cf3aec4804e999;
          if (uVar27 == 0x156b5df3a46d5947) goto LAB_001656b0;
          if (uVar27 != 0x17e1c872cdff29bd) {
            uVar23 = uVar27;
            if (uVar27 == 0x195aee818d66a943) {
              bVar20 = *(int *)(param_1 + 100) == 0x29a;
              uVar27 = 0x59fc44688028b46e;
              uVar23 = 0xbe24974e45ec2648;
              goto LAB_001656a4;
            }
            goto LAB_001656b0;
          }
        }
        else if (uVar27 != 0x1dec674bc1f8b8d6) {
          if (uVar27 == 0x1ea8143bb2070f69) {
            uVar22 = uVar21;
            uVar23 = 0xd0fe44f6ff7242e6;
            if (*(int *)(param_1 + 100) != 0x35c) {
              uVar23 = 0xb9ffd514d3e9e673;
            }
          }
          else {
            uVar22 = uVar21;
            if (uVar27 == 0x1eec4e60f5131983) {
              uVar23 = 0x7ddd313da94176e0;
              if (*(int *)(param_1 + 100) != 0x35c) {
                uVar23 = 0xd807f3104ad301ab;
              }
            }
          }
          goto LAB_001656b0;
        }
LAB_001665ac:
        unaff_x20 = 0;
        uVar24 = 0;
      }
LAB_00166784:
      uVar22 = uVar21;
      uVar23 = 0xcc8cfe7cbdd4f135;
      goto LAB_001656b0;
    }
    if ((long)uVar27 < 0x3df50507daa608dd) {
      if (0x33cf3aec4804e998 < (long)uVar27) {
        uVar22 = uVar21;
        uVar23 = uVar18;
        if (((uVar27 != 0x33cf3aec4804e999) &&
            (uVar23 = 0x836745b8e38595cf, uVar27 != 0x361099d4beddecf1)) &&
           (uVar23 = uVar27, uVar27 == 0x3856890fe3f6be21)) goto LAB_001665ac;
        goto LAB_001656b0;
      }
      uVar22 = uVar21;
      uVar23 = uVar17;
      if (((uVar27 == 0x22dc9305acf8269c) ||
          (uVar23 = 0xebe5aa8406e2acf6, uVar27 == 0x29084f3309891345)) ||
         (uVar23 = uVar27, uVar27 != 0x2f1d5544dffc386a)) goto LAB_001656b0;
    }
    else if ((long)uVar27 < 0x402e3dd66ca636cc) {
      if (uVar27 == 0x3df50507daa608dd) {
        uVar22 = uVar21;
        uVar23 = 0x62466d9d4dcd6acd;
        goto LAB_001656b0;
      }
      uVar22 = uVar21;
      uVar23 = 0x833940dbce5a7b2d;
      if ((uVar27 == 0x3e2ffad4ffd9ecf8) || (uVar23 = uVar27, uVar27 != 0x3edc43bce4373598))
      goto LAB_001656b0;
    }
    else {
      uVar22 = uVar21;
      uVar23 = uVar2;
      if (uVar27 == 0x402e3dd66ca636cc) goto LAB_001656b0;
      if (uVar27 != 0x408133ba4405b6dc) {
        uVar23 = uVar27;
        if (uVar27 == 0x4260f39fea869655) goto LAB_0016653c;
        goto LAB_001656b0;
      }
    }
  }
  else {
    if ((long)uVar27 < 0x652bad46d010492f) {
      if (0x55ef5679cd1716d5 < (long)uVar27) {
        if ((long)uVar27 < 0x5a7acd16ef55a03b) {
          uVar22 = uVar21;
          uVar23 = uVar14;
          if (((uVar27 != 0x55ef5679cd1716d6) &&
              (uVar23 = 0xb372967e5918c0dd, uVar27 != 0x57a212ecef58e1bf)) &&
             (uVar23 = uVar27, uVar27 == 0x59fc44688028b46e)) {
            uVar23 = 0x833940dbce5a7b2d;
          }
        }
        else {
          uVar22 = uVar21;
          uVar23 = 0xebe5aa8406e2acf6;
          if (uVar27 != 0x5a7acd16ef55a03b) {
            if (uVar27 == 0x5ed45bbfda7ca0d0) goto LAB_0016663c;
            uVar23 = uVar27;
            if (uVar27 == 0x62466d9d4dcd6acd) {
              uVar23 = uVar5;
            }
          }
        }
        goto LAB_001656b0;
      }
      if (0x4ddb5cb5583b0d6b < (long)uVar27) {
        if (uVar27 == 0x4ddb5cb5583b0d6c) goto LAB_0016663c;
        if (uVar27 == 0x4ea3a99a692e6960) {
          uVar22 = uVar21;
          uVar23 = 0x4ddb5cb5583b0d6c;
          if (iVar25 != 0x2dc) {
            uVar23 = 0x13857eddb3359044;
          }
        }
        else {
          uVar22 = uVar21;
          if (uVar27 == 0x5018acdc2fcdce7d) {
            uVar23 = 0x14868182d4331b45;
          }
        }
        goto LAB_001656b0;
      }
      if (uVar27 == 0x470629c22cc38e9b) goto LAB_0016663c;
      uVar22 = uVar21;
      uVar23 = 0x4d3e31f88e755f6b;
      if ((uVar27 == 0x49f63f1b7057f8e1) || (uVar23 = uVar27, uVar27 != 0x4d3e31f88e755f6b))
      goto LAB_001656b0;
      unaff_w23 = 0;
      goto LAB_00166640;
    }
    if ((long)uVar27 < 0x76fd535a989551d7) {
      if ((long)uVar27 < 0x7404f32c0442e8c5) {
        uVar22 = uVar21;
        uVar23 = uVar13;
        if (uVar27 != 0x652bad46d010492f) {
          if (uVar27 == 0x6bf5ac17d8aae85d) {
            uVar23 = 0x82a928ef655516bd;
          }
          else {
            uVar23 = uVar27;
            if (uVar27 == 0x73f0040964e27ab9) goto LAB_0016653c;
          }
        }
      }
      else {
        uVar22 = uVar21;
        uVar23 = uVar12;
        if (((uVar27 != 0x7404f32c0442e8c5) && (uVar23 = uVar11, uVar27 != 0x7413d863ebddf4f0)) &&
           (uVar23 = uVar27, uVar27 == 0x767ca0dbf6c2060d)) goto LAB_0016663c;
      }
      goto LAB_001656b0;
    }
    if ((long)uVar27 < 0x7dc6962a82777921) {
      if (uVar27 != 0x76fd535a989551d7) {
        uVar22 = uVar21;
        uVar23 = 0x836745b8e38595cf;
        if ((uVar27 != 0x786d8f3205e6ab94) && (uVar23 = uVar27, uVar27 == 0x7c43680fe27bf058)) {
          uVar24 = 0;
          unaff_x20 = 1;
          goto LAB_00166784;
        }
        goto LAB_001656b0;
      }
    }
    else {
      if (uVar27 == 0x7dc6962a82777921) {
        uVar22 = uVar21;
        uVar23 = 0x7a62bc75f4c97f;
        if (*(int *)(param_1 + 100) != 0x37c) {
          uVar23 = 0xab5e2338344f7bc5;
        }
        goto LAB_001656b0;
      }
      if (uVar27 != 0x7ddd313da94176e0) {
        uVar22 = uVar21;
        if (uVar27 == 0x7e5464ba1aba4809) {
          uVar23 = 0xc9e19d600559b02d;
          if (*(int *)(param_1 + 100) != 0x2a0) {
            uVar23 = 0x988fda4001e92f17;
          }
        }
        goto LAB_001656b0;
      }
    }
  }
LAB_0016663c:
  unaff_w23 = 1;
LAB_00166640:
  uVar22 = uVar21;
  uVar23 = 0xdaf46e26958e4ab7;
  unaff_x19 = uVar29;
  goto LAB_001656b0;
}

