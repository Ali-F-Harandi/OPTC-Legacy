// rea decompile_all
// name: FUN_0015ee58
// address: 0x15ee58
// body: available
// range: 0x15ee58-0x162e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0015ee58(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_b8;
  
  lVar1 = -0x64b756aa3eca489d;
  if (param_1 != 0) {
    lVar1 = 0x4a01ce65b80bd92e;
  }
  lVar2 = -0x66cdc8e9c47417dc;
  if (param_3 == (ulong *)0x0) {
    lVar2 = -0x69591a65b33a794f;
  }
  lVar6 = 0x572b92c4648ffbb8;
LAB_0015f004:
  lVar5 = lVar6;
  lVar6 = lVar5;
  if (0xa4b91f8f506dc0 < lVar5) {
    if (lVar5 < 0x47f0669a9cce2cef) {
      if (lVar5 < 0x2867af6d95754069) {
        if (lVar5 < 0x172484829d3489ab) {
          if (lVar5 < 0xf57c5b4d9f09502) {
            if (lVar5 < 0x481a61f518e1333) {
              if (lVar5 < 0x3fd18584135302d) {
                if (lVar5 == 0xa4b91f8f506dc1) {
                  DAT_0021cfd8 = DAT_0021cfd8 ^ 0x61;
                  DAT_0021cfd9 = DAT_0021cfd9 ^ 0x61;
                  _DAT_0021cfc0 = _DAT_0021cfc0 ^ 0x6161616161616161;
                  uRam000000000021cfc8 = uRam000000000021cfc8 ^ 0x6161616161616161;
                  DAT_0021cfd0 = DAT_0021cfd0 ^ 0x6161616161616161;
                  DAT_0021f6c6 = '\x01';
                  lVar6 = -0x74dace5f56bca2de;
                }
                else if (lVar5 == 0x23c7d05b655afec) {
                  lVar6 = 0x3fd18584135302d;
                }
              }
              else {
                lVar6 = -0x76355510c02a6bf3;
                if ((lVar5 != 0x4483b204712811d) && (lVar6 = lVar5, lVar5 == 0x3fd18584135302d)) {
                  FUN_001494bc(param_1,param_2,param_3);
                  return 0;
                }
              }
            }
            else {
              lVar6 = 0x5bfafde534eebab9;
              if (lVar5 != 0x481a61f518e1333) {
                if (lVar5 == 0x521e5becdbbfef6) {
                  DAT_0021d310 = DAT_0021d310 ^ 0xe8;
                  DAT_0021d311 = DAT_0021d311 ^ 0xe8;
                  DAT_0021d312 = DAT_0021d312 ^ 0xe8;
                  DAT_0021d313 = DAT_0021d313 ^ 0xe8;
                  DAT_0021d314 = DAT_0021d314 ^ 0xe8;
                  _DAT_0021d300 = _DAT_0021d300 ^ 0xe8e8e8e8e8e8e8e8;
                  uRam000000000021d308 = uRam000000000021d308 ^ 0xe8e8e8e8e8e8e8e8;
                  DAT_0021f702 = '\x01';
                  lVar6 = -0x394ae604abcf8cd0;
                }
                else {
                  lVar6 = lVar5;
                  if (lVar5 == 0xa754b932a0903a3) {
                    lVar6 = 0x7c23d2314b445810;
                    if (DAT_0021f705 == '\0') {
                      lVar6 = 0x50d103258e3c7f11;
                    }
                  }
                }
              }
            }
          }
          else if (lVar5 < 0x1422efcb79578f02) {
            if (lVar5 == 0xf57c5b4d9f09502) {
              DAT_0021f530 = 0;
              iVar3 = FUN_001e17a8(local_138,&DAT_0021d358);
              lVar6 = -0x94e63f27f876bc;
              if (iVar3 != 0) {
                lVar6 = -0x3f0d20e5170ace53;
              }
            }
            else {
              lVar6 = 0x47f0669a9cce2cef;
              if ((lVar5 != 0x10bae0366d69df4e) && (lVar6 = lVar5, lVar5 == 0x13ce9668304b0232)) {
                DAT_0021c688 = DAT_0021c688 ^ 0xe5e5e5e5e5e5e5e5;
                DAT_0021f66f = '\x01';
                lVar6 = -0x5592ff2d8f646a7c;
              }
            }
          }
          else if (lVar5 < 0x16f40ed79b27ef94) {
            if (lVar5 == 0x1422efcb79578f02) {
              lVar6 = 0x1e36595986bbc1b8;
              goto LAB_0015eff4;
            }
            if (lVar5 == 0x158204a7f9f7a96e) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4f8);
              lVar6 = -0xda5fe9872b0c983;
              if (iVar3 != 0) {
                lVar6 = 0x543236ea94e5d4fb;
              }
            }
          }
          else {
            lVar6 = 0x5d42272e0800b863;
            if ((lVar5 != 0x16f40ed79b27ef94) && (lVar6 = lVar5, lVar5 == 0x17142e57b3fbdacc)) {
              lVar6 = -0xd3bf59c5acf4d2d;
              if (DAT_0021f66f == '\0') {
                lVar6 = 0x13ce9668304b0232;
              }
            }
          }
        }
        else if (lVar5 < 0x1e389a3e5c312f0c) {
          if (lVar5 < 0x1b6aa8f72df1eb50) {
            if (lVar5 == 0x172484829d3489ab) {
              lVar6 = 0x40c721a2c8ca1a39;
              goto LAB_0016226c;
            }
            if (lVar5 == 0x19fcd21df10416f8) {
              lVar6 = -0x629d6e7a3af6cf1d;
              fVar7 = *param_2 + (1.0 - *param_2) * 0.3;
              uVar4 = *param_3 | 0x800;
              goto LAB_00162aa4;
            }
            if (lVar5 == 0x1afa9e55cdcd28f0) {
              lVar6 = -0x279fd25f3932037;
            }
          }
          else if (lVar5 == 0x1b6aa8f72df1eb50) {
            lVar6 = 0x74cc681cdfc459e3;
LAB_00162a48:
            DAT_0021c5a9 = DAT_0021c5a9 ^ 0xcb;
            DAT_0021c5a8 = DAT_0021c5a8 ^ 0xcb;
            DAT_0021c5a7 = DAT_0021c5a7 ^ 0xcb;
            DAT_0021c5a6 = DAT_0021c5a6 ^ 0xcb;
            DAT_0021c5a5 = DAT_0021c5a5 ^ 0xcb;
            DAT_0021c5a4 = DAT_0021c5a4 ^ 0xcb;
            DAT_0021c5aa = DAT_0021c5aa ^ 0xcb;
            DAT_0021f65e = '\x01';
          }
          else {
            lVar6 = -0x6dc0730dc3bbe68a;
            if ((lVar5 != 0x1bb6c8df055d9b7b) && (lVar6 = lVar5, lVar5 == 0x1e36595986bbc1b8)) {
              DAT_0021f530 = 0;
              iVar3 = FUN_001e17a8(local_140,&DAT_0021d358);
              lVar6 = -0x1d50c9d4833c6ac1;
              if (iVar3 != 0) {
                lVar6 = 0x23c7d05b655afec;
              }
            }
          }
        }
        else if (lVar5 < 0x221bb3eafe601898) {
          lVar6 = -0x20ccb0feb72cd38a;
          if (lVar5 != 0x1e389a3e5c312f0c) {
            if (lVar5 == 0x1f445a0db58489e8) {
              DAT_0021d210 = DAT_0021d210 ^ 0x71;
              DAT_0021d212 = DAT_0021d212 ^ 0x71;
              DAT_0021d211 = DAT_0021d211 ^ 0x71;
              DAT_0021d208 = DAT_0021d208 ^ 0x7171717171717171;
              DAT_0021f6f7 = '\x01';
              lVar6 = -0x73e1dee6cae8a3a8;
            }
            else {
              lVar6 = lVar5;
              if (lVar5 == 0x210718b4df53af09) {
                lVar6 = 0x7d3674123a3c98df;
                if (DAT_0021f6fa == '\0') {
                  lVar6 = 0x5dee7cf3c74c54a4;
                }
              }
            }
          }
        }
        else if (lVar5 < 0x261d1e55d732e916) {
          lVar6 = -0x5539114545240e32;
          if ((lVar5 != 0x221bb3eafe601898) && (lVar6 = lVar5, lVar5 == 0x25e0e159ddd84780)) {
            local_110 = *(long *)(param_1 + 0x20);
            lVar6 = -0x48694ef610e03802;
            if (local_110 != 0) {
              lVar6 = -0x2732652e0c25cd7c;
            }
          }
        }
        else if (lVar5 == 0x261d1e55d732e916) {
          DAT_0021d330 = DAT_0021d330 ^ 0xc1;
          DAT_0021d332 = DAT_0021d332 ^ 0xc1;
          DAT_0021d331 = DAT_0021d331 ^ 0xc1;
          _DAT_0021d320 = _DAT_0021d320 ^ 0xc1c1c1c1c1c1c1c1;
          uRam000000000021d328 = uRam000000000021d328 ^ 0xc1c1c1c1c1c1c1c1;
          DAT_0021f703 = '\x01';
          lVar6 = 0x4b26d0e0a38a7510;
        }
        else if (lVar5 == 0x26923d289caa622e) {
          DAT_0021c460 = DAT_0021c460 ^ 0xd8;
          DAT_0021c458 = DAT_0021c458 ^ 0xd8d8d8d8d8d8d8d8;
          DAT_0021f650 = '\x01';
          lVar6 = -0x5df8b939a229389;
        }
      }
      else if (lVar5 < 0x39c244391c6afdae) {
        if (lVar5 < 0x2f3f6358ee08756d) {
          if (lVar5 < 0x2afb280a5105d277) {
            lVar6 = 0x5c90d179dcf2a04f;
            if (lVar5 != 0x2867af6d95754069) {
              if (lVar5 == 0x2958027f07ef897a) {
                local_f8 = *(long *)(param_1 + 0x20);
                lVar6 = -0x546a3701564ef0bf;
                if (local_f8 == 0 || param_3 == (ulong *)0x0) {
                  lVar6 = -0x29f3c506e143e8e0;
                }
              }
              else {
                lVar6 = lVar5;
                if (lVar5 == 0x2a8f4f7ea63b9dc6) {
                  lVar6 = -0x2cb22d4d6b371727;
                  if (DAT_0021f6f8 == '\0') {
                    lVar6 = 0x6c3bc5262abbbabb;
                  }
                }
              }
            }
          }
          else {
            lVar6 = -0x4e8c0c211cfcd497;
            if (((lVar5 != 0x2afb280a5105d277) &&
                (lVar6 = -0x647b0ce666fc6931, lVar5 != 0x2bd837f38c485462)) &&
               (lVar6 = lVar5, lVar5 == 0x2e979243b5adcb46)) {
              lVar6 = -0xa552596ec96e0b2;
            }
          }
        }
        else if (lVar5 < 0x3337ab8037ae0cff) {
          lVar6 = 0x78be59ea9dee64ea;
          if (((lVar5 != 0x2f3f6358ee08756d) &&
              (lVar6 = 0x40c721a2c8ca1a39, lVar5 != 0x31e79fafe1a89d65)) &&
             (lVar6 = lVar5, lVar5 == 0x32a30915738d20b7)) {
            lVar6 = -0x5539114545240e32;
          }
        }
        else if (lVar5 < 0x3751d4564cc1ed14) {
          if (lVar5 == 0x3337ab8037ae0cff) {
            DAT_0021f504 = 0;
            lVar5 = FUN_001e238c(local_100,&DAT_0021d260);
            lVar6 = -0x62fd08501eafb003;
            if (lVar5 != 0) {
              lVar6 = -0x484db209c6dcb7b7;
            }
          }
          else if (lVar5 == 0x355b8e4a1f439f27) {
            lVar6 = 0x1e389a3e5c312f0c;
            if (DAT_0021f65c == '\0') {
              lVar6 = -0x46bbd904ef538767;
            }
          }
        }
        else {
          lVar6 = -0x217334a03884f19e;
          if ((lVar5 != 0x3751d4564cc1ed14) && (lVar6 = lVar5, lVar5 == 0x37b76335d4fab737)) {
            lVar6 = -0x41f6292ecc8f571b;
          }
        }
      }
      else if (lVar5 < 0x3efecc8036ac9f9f) {
        if (lVar5 < 0x3b15b8618ba0c40b) {
          if (lVar5 == 0x39c244391c6afdae) {
            local_100 = *(long *)(param_1 + 0x40);
            lVar6 = -0x1997a808d53ba82b;
            if (local_100 == 0 || param_3 == (ulong *)0x0) {
              lVar6 = -0x1f9950f1cd38dde6;
            }
          }
          else if (lVar5 == 0x3a5ba04437dcc8d5) {
            lVar6 = 0x6cf25c58bca51ef7;
            if (DAT_0021f6c7 == '\0') {
              lVar6 = -0x5b2a8fb2434df58;
            }
          }
          else if (lVar5 == 0x3ae60cb2c8accac4) {
            lVar6 = 0x587dc856d3e0429b;
          }
        }
        else {
          lVar6 = -0x33e6b5da033c24c;
          if (((lVar5 != 0x3b15b8618ba0c40b) &&
              (lVar6 = 0xf57c5b4d9f09502, lVar5 != 0x3c952f8bf99554a2)) &&
             (lVar6 = lVar5, lVar5 == 0x3e0d2f5bd7966643)) {
            fVar7 = *param_2;
            fVar8 = 1.0 - fVar7;
            lVar6 = -0x56f328500550391a;
            uVar4 = *param_3 | 0x40000;
            goto LAB_00162aa0;
          }
        }
      }
      else if (lVar5 < 0x416329e724d1b2f1) {
        lVar6 = 0x4272828c18753d90;
        if (((lVar5 != 0x3efecc8036ac9f9f) &&
            (lVar6 = 0x5d42272e0800b863, lVar5 != 0x3f5abe35ab1365ec)) &&
           (lVar6 = lVar5, lVar5 == 0x40c721a2c8ca1a39)) {
          DAT_0021f2d8 = 0;
          uVar4 = FUN_002006ac(local_108,&DAT_0021c688);
          lVar6 = 0x5fad209db2f2ae0c;
          if ((uVar4 & 1) == 0) {
            lVar6 = 0x5ceff93e19f7d3b4;
          }
        }
      }
      else if (lVar5 < 0x4272828c18753d90) {
        if (lVar5 == 0x416329e724d1b2f1) {
          local_108 = *(long *)(param_1 + 0x10);
          lVar6 = 0x77ffde5086753e56;
          if (local_108 != 0) {
            lVar6 = -0x193574d43e0030c9;
          }
        }
        else if (lVar5 == 0x4231b6de1db64a60) {
          lVar6 = 0x73e3386c4f3c027b;
          if (DAT_0021f705 == '\0') {
            lVar6 = 0x1422efcb79578f02;
          }
        }
      }
      else if (lVar5 == 0x4272828c18753d90) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f52c);
        lVar6 = 0x7b892d5b76f934cd;
        if (iVar3 != 0) {
          lVar6 = -0x147f541ed72d7dc3;
        }
      }
      else if (lVar5 == 0x460be75fc00bfbbd) {
        lVar6 = -0x74dace5f56bca2de;
      }
      goto LAB_0015f004;
    }
    if (lVar5 < 0x5dee7cf3c74c54a4) {
      if (0x5271c8ff7d470232 < lVar5) {
        if (lVar5 < 0x59de580aa10e6cb3) {
          if (lVar5 < 0x572b92c4648ffbb8) {
            if (lVar5 != 0x5271c8ff7d470233) {
              lVar6 = 0x694dd6a1b4275a67;
              if ((lVar5 != 0x5347c3c4cba908a0) && (lVar6 = lVar5, lVar5 == 0x543236ea94e5d4fb)) {
                lVar6 = 0x158204a7f9f7a96e;
              }
              goto LAB_0015f004;
            }
            fVar7 = *param_2;
            fVar8 = 1.0 - fVar7;
            lVar6 = 0x2958027f07ef897a;
            uVar4 = *param_3 | 0x20000;
          }
          else {
            lVar6 = lVar1;
            if (lVar5 == 0x572b92c4648ffbb8) goto LAB_0015f004;
            if (lVar5 != 0x57303b1b8ff095a0) {
              lVar6 = lVar5;
              if (lVar5 == 0x587dc856d3e0429b) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f530);
                lVar6 = -0x5527b155db13d62b;
                if (iVar3 != 0) {
                  lVar6 = -0x27dc54736aa17fac;
                }
              }
              goto LAB_0015f004;
            }
            fVar7 = *param_2;
            fVar8 = 1.0 - fVar7;
            lVar6 = 0x4855c32ee178fb46;
            uVar4 = *param_3 | 0x4000;
          }
        }
        else {
          if (lVar5 < 0x5c90d179dcf2a04f) {
            lVar6 = -0xda192c3be4439f9;
            if (lVar5 != 0x59de580aa10e6cb3) {
              if (lVar5 == 0x59df83908a5d9d4b) {
                DAT_0021f52c = 0;
                uVar4 = FUN_00200ad4(local_128,&DAT_0021d340);
                lVar6 = 0x16f40ed79b27ef94;
                if ((uVar4 & 1) == 0) {
                  lVar6 = 0x221bb3eafe601898;
                }
              }
              else {
                lVar6 = lVar5;
                if (lVar5 == 0x5bfafde534eebab9) {
                  iVar3 = FUN_00212730(0,1,&DAT_0021f294);
                  lVar6 = -0x3fe78bc799c09e81;
                  if (iVar3 != 0) {
                    lVar6 = 0x69ed633dd212aafe;
                  }
                }
              }
            }
            goto LAB_0015f004;
          }
          if (lVar5 < 0x5ceff93e19f7d3b4) {
            if (lVar5 == 0x5c90d179dcf2a04f) {
              local_e8 = *(long *)(param_1 + 0x40);
              lVar6 = -0x17bc51b3ae65d7ff;
              if (local_e8 == 0 || param_3 == (ulong *)0x0) {
                lVar6 = -0x6013a751e25b69bc;
              }
            }
            else if (lVar5 == 0x5ce01779cbbcf0ff) {
              fVar7 = *param_2;
              fVar8 = 1.0 - fVar7;
              lVar6 = 0x5c90d179dcf2a04f;
              uVar4 = *param_3 | 0x8000;
              goto LAB_00162aa0;
            }
            goto LAB_0015f004;
          }
          lVar6 = 0x25e0e159ddd84780;
          if ((lVar5 == 0x5ceff93e19f7d3b4) || (lVar6 = lVar5, lVar5 != 0x5d42272e0800b863))
          goto LAB_0015f004;
          fVar7 = *param_2;
          fVar8 = 1.0 - fVar7;
          lVar6 = -0x5539114545240e32;
          uVar4 = *param_3 | 0x800000;
        }
        goto LAB_00162aa0;
      }
      if (lVar5 < 0x4bad8328cbc33132) {
        if (lVar5 < 0x4a01ce65b80bd92e) {
          if (lVar5 == 0x47f0669a9cce2cef) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f530);
            lVar6 = 0xa754b932a0903a3;
            if (iVar3 != 0) {
              lVar6 = 0x10bae0366d69df4e;
            }
          }
          else if (lVar5 == 0x4855c32ee178fb46) {
            local_b8 = *(long *)(param_1 + 0x18);
            lVar6 = 0x2e979243b5adcb46;
            if (local_b8 == 0 || param_3 == (ulong *)0x0) {
              lVar6 = 0x2867af6d95754069;
            }
          }
          else if (lVar5 == 0x486e9edf4f4cc63e) {
            lVar6 = 0x2958027f07ef897a;
          }
        }
        else if (lVar5 == 0x4a01ce65b80bd92e) {
          local_d0 = *(long *)(param_1 + 0x30);
          lVar6 = 0x59de580aa10e6cb3;
          if (local_d0 == 0 || param_3 == (ulong *)0x0) {
            lVar6 = -0x240130597a3ac034;
          }
        }
        else if (lVar5 == 0x4b26d0e0a38a7510) {
          DAT_0021f528 = 0;
          uVar4 = FUN_00200ad4(local_120,&DAT_0021d320);
          lVar6 = -0x3bc018cdece32730;
          if ((uVar4 & 1) == 0) {
            lVar6 = -0x579d729363bcb64d;
          }
        }
        else if (lVar5 == 0x4b5d0729e2623925) {
          lVar6 = -0x56f328500550391a;
        }
        goto LAB_0015f004;
      }
      if (lVar5 < 0x4dfa4a3791474fd1) {
        lVar6 = 0x69a15b528bfc378e;
        if (lVar5 != 0x4bad8328cbc33132) {
          if (lVar5 == 0x4bd5c0c69887566e) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f28c);
            lVar6 = 0x355b8e4a1f439f27;
            if (iVar3 != 0) {
              lVar6 = -0x142400856b8823a0;
            }
          }
          else {
            lVar6 = lVar5;
            if (lVar5 == 0x4c60151d629c50eb) {
              lVar6 = -0x41f6292ecc8f571b;
LAB_0016226c:
              DAT_0021c688 = DAT_0021c688 ^ 0xe5e5e5e5e5e5e5e5;
              DAT_0021f66f = '\x01';
            }
          }
        }
        goto LAB_0015f004;
      }
      if (lVar5 < 0x50d103258e3c7f11) {
        lVar6 = -0x443dabdea30b8493;
        if ((lVar5 != 0x4dfa4a3791474fd1) && (lVar6 = lVar5, lVar5 == 0x507a91a6710091f9)) {
          lVar6 = -0x9f1b43bfa999619;
          if (DAT_0021f65e == '\0') {
            lVar6 = 0x1b6aa8f72df1eb50;
          }
        }
        goto LAB_0015f004;
      }
      if (lVar5 != 0x50d103258e3c7f11) {
        if (lVar5 == 0x5190e5eae66878be) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f528);
          lVar6 = -0x4df45f9071229fcb;
          if (iVar3 != 0) {
            lVar6 = 0x70e5134ba4dcb392;
          }
        }
        goto LAB_0015f004;
      }
      lVar6 = -0x748550cfec0c055b;
    }
    else {
      if (lVar5 < 0x70e5134ba4dcb392) {
        if (lVar5 < 0x696907c375d3b805) {
          if (lVar5 < 0x658545d0e0068a3e) {
            if (lVar5 == 0x5dee7cf3c74c54a4) {
              DAT_0021d268 = DAT_0021d268 ^ 0x6e;
              DAT_0021d269 = DAT_0021d269 ^ 0x6e;
              DAT_0021d26a = DAT_0021d26a ^ 0x6e;
              DAT_0021d26b = DAT_0021d26b ^ 0x6e;
              DAT_0021d260 = DAT_0021d260 ^ 0x6e6e6e6e6e6e6e6e;
              DAT_0021f6fa = '\x01';
              lVar6 = 0x3337ab8037ae0cff;
            }
            else {
              lVar6 = -0x1628a9fc3afbfc5a;
              if ((lVar5 != 0x5fad209db2f2ae0c) && (lVar6 = lVar5, lVar5 == 0x64b7e8bb21870dfa)) {
                lVar6 = 0x39c244391c6afdae;
              }
            }
          }
          else {
            lVar6 = -0x33e6b5da033c24c;
            if (((lVar5 != 0x658545d0e0068a3e) &&
                (lVar6 = -0x279fd25f3932037, lVar5 != 0x6802f828c15c2cbb)) &&
               (lVar6 = lVar5, lVar5 == 0x694dd6a1b4275a67)) {
              DAT_0021f500 = 0;
              iVar3 = FUN_001e17a8(local_b8,&DAT_0021d240);
              lVar6 = -0x160573c9142675fb;
              if (iVar3 != 0) {
                lVar6 = 0x2bd837f38c485462;
              }
            }
          }
        }
        else if (lVar5 < 0x6bd2f4212b1fa217) {
          if (lVar5 == 0x696907c375d3b805) {
            DAT_0021f4fc = 0;
            iVar3 = FUN_001e17a8(local_b8,&DAT_0021d220);
            lVar6 = -0x5ca4594d4182ee74;
            if (iVar3 != 0) {
              lVar6 = 0x3b15b8618ba0c40b;
            }
          }
          else if (lVar5 == 0x69a15b528bfc378e) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f294);
            lVar6 = 0x507a91a6710091f9;
            if (iVar3 != 0) {
              lVar6 = 0x4bad8328cbc33132;
            }
          }
          else if (lVar5 == 0x69ed633dd212aafe) {
            lVar6 = 0x5bfafde534eebab9;
          }
        }
        else if (lVar5 < 0x6cf25c58bca51ef7) {
          lVar6 = -0x629d6e7a3af6cf1d;
          if ((lVar5 != 0x6bd2f4212b1fa217) && (lVar6 = lVar5, lVar5 == 0x6c3bc5262abbbabb)) {
            DAT_0021d238 = DAT_0021d238 ^ 0x3a;
            DAT_0021d239 = DAT_0021d239 ^ 0x3a;
            DAT_0021d23a = DAT_0021d23a ^ 0x3a;
            DAT_0021d23b = DAT_0021d23b ^ 0x3a;
            _DAT_0021d220 = _DAT_0021d220 ^ 0x3a3a3a3a3a3a3a3a;
            uRam000000000021d228 = uRam000000000021d228 ^ 0x3a3a3a3a3a3a3a3a;
            DAT_0021d230 = DAT_0021d230 ^ 0x3a3a3a3a3a3a3a3a;
            DAT_0021f6f8 = '\x01';
            lVar6 = 0x696907c375d3b805;
          }
        }
        else {
          lVar6 = 0x76df819ac5734db4;
          if ((lVar5 != 0x6cf25c58bca51ef7) && (lVar6 = lVar5, lVar5 == 0x6fbe9fe25e46c903)) {
            lVar6 = 0x59df83908a5d9d4b;
          }
        }
        goto LAB_0015f004;
      }
      if (0x77ffde5086753e55 < lVar5) {
        if (lVar5 < 0x7c23d2314b445810) {
          lVar6 = 0x25e0e159ddd84780;
          if (lVar5 != 0x77ffde5086753e56) {
            if (lVar5 == 0x78be59ea9dee64ea) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4fc);
              lVar6 = 0x2a8f4f7ea63b9dc6;
              if (iVar3 != 0) {
                lVar6 = -0x4cda9161166eba85;
              }
            }
            else {
              lVar6 = lVar5;
              if (lVar5 == 0x7b892d5b76f934cd) {
                lVar6 = 0x6fbe9fe25e46c903;
                if (DAT_0021f704 == '\0') {
                  lVar6 = -0x1d5e988443fe3233;
                }
              }
            }
          }
        }
        else if (lVar5 < 0x7d3674123a3c98df) {
          lVar6 = -0x748550cfec0c055b;
          if ((lVar5 != 0x7c23d2314b445810) && (lVar6 = lVar5, lVar5 == 0x7c8c2962642989e9)) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f530);
            lVar6 = 0x4231b6de1db64a60;
            if (iVar3 != 0) {
              lVar6 = -0x76167185d5200dd9;
            }
          }
        }
        else {
          lVar6 = 0x3337ab8037ae0cff;
          if ((lVar5 != 0x7d3674123a3c98df) && (lVar6 = lVar5, lVar5 == 0x7d6310c1ef24afe4)) {
            lVar6 = 0x4855c32ee178fb46;
          }
        }
        goto LAB_0015f004;
      }
      if (0x73e3386c4f3c027a < lVar5) {
        if (lVar5 < 0x74cc681cdfc459e3) {
          lVar6 = 0x1e36595986bbc1b8;
          if ((lVar5 != 0x73e3386c4f3c027b) && (lVar6 = lVar5, lVar5 == 0x7459a26d0cb8b7ca)) {
            lVar6 = 0x31e79fafe1a89d65;
            if (DAT_0021f66f == '\0') {
              lVar6 = 0x172484829d3489ab;
            }
          }
        }
        else if (lVar5 == 0x74cc681cdfc459e3) {
          DAT_0021f294 = 0;
          lVar5 = FUN_001e238c(local_f8,&DAT_0021c5a4);
          lVar6 = 0x4b5d0729e2623925;
          if (lVar5 != 0) {
            lVar6 = 0x3e0d2f5bd7966643;
          }
        }
        else if (lVar5 == 0x76df819ac5734db4) {
          DAT_0021f438 = 0;
          iVar3 = FUN_001e17a8(local_b8,&DAT_0021cfe0);
          lVar6 = -0xb1d8759076cd320;
          if (iVar3 != 0) {
            lVar6 = -0x4fff8f73af8abfd;
          }
        }
        goto LAB_0015f004;
      }
      lVar6 = 0x5190e5eae66878be;
      if (lVar5 == 0x70e5134ba4dcb392) goto LAB_0015f004;
      if (lVar5 == 0x7154389ef3dcb024) {
        lVar6 = -0x33247d271c4059e0;
        if (DAT_0021f702 == '\0') {
          lVar6 = 0x521e5becdbbfef6;
        }
        goto LAB_0015f004;
      }
      lVar6 = lVar5;
      if (lVar5 != 0x730249f12a62f148) goto LAB_0015f004;
      lVar6 = 0xf57c5b4d9f09502;
    }
LAB_0015eff4:
    DAT_0021d35d = DAT_0021d35d ^ 4;
    DAT_0021d35c = DAT_0021d35c ^ 4;
    DAT_0021d35b = DAT_0021d35b ^ 4;
    DAT_0021d35a = DAT_0021d35a ^ 4;
    DAT_0021d359 = DAT_0021d359 ^ 4;
    DAT_0021d358 = DAT_0021d358 ^ 4;
    DAT_0021d35e = DAT_0021d35e ^ 4;
    DAT_0021f705 = '\x01';
    goto LAB_0015f004;
  }
  if (lVar5 < -0x3f0d20e5170ace53) {
    if (-0x579d729363bcb64e < lVar5) {
      if (lVar5 < -0x4cda9161166eba85) {
        if (lVar5 < -0x53507ad4015fd567) {
          if (lVar5 < -0x5539114545240e32) {
            if (lVar5 == -0x579d729363bcb64d) {
              local_128 = *(long *)(param_1 + 0x30);
              lVar6 = -0x1dcc44adf00d90b;
              if (local_128 != 0) {
                lVar6 = 0x3efecc8036ac9f9f;
              }
            }
            else if (lVar5 == -0x56f328500550391a) {
              uVar4 = FUN_0013a038(param_1);
              lVar6 = -0x71a7b12adf28b55;
              if ((uVar4 & 1) == 0) {
                lVar6 = 0x64b7e8bb21870dfa;
              }
            }
            else if (lVar5 == -0x5592ff2d8f646a7c) {
              DAT_0021f2d8 = 0;
              uVar4 = FUN_002006ac(local_110,&DAT_0021c688);
              lVar6 = -0x393604af2d7d8bd9;
              if ((uVar4 & 1) == 0) {
                lVar6 = -0x6d8feeb2160118fa;
              }
            }
          }
          else if (lVar5 == -0x5539114545240e32) {
            local_130 = *(long *)(param_1 + 8);
            lVar6 = 0x1afa9e55cdcd28f0;
            if (local_130 != 0) {
              lVar6 = -0x4592fca696dd41f1;
            }
          }
          else if (lVar5 == -0x5527b155db13d62b) {
            lVar6 = 0x3c952f8bf99554a2;
            if (DAT_0021f705 == '\0') {
              lVar6 = 0x730249f12a62f148;
            }
          }
          else if (lVar5 == -0x546a3701564ef0bf) {
            lVar6 = 0x69a15b528bfc378e;
          }
        }
        else if (lVar5 < -0x51d99a3e8362d0bc) {
          if (lVar5 == -0x53507ad4015fd567) {
            local_118 = *(long *)(param_1 + 0x30);
            lVar6 = -0x49a6cee87fae9125;
            if (local_118 == 0 || param_3 == (ulong *)0x0) {
              lVar6 = 0x32a30915738d20b7;
            }
          }
          else {
            lVar6 = 0x5190e5eae66878be;
            if ((lVar5 != -0x525408f0168386b5) && (lVar6 = lVar5, lVar5 == -0x51f1b7129c8d5764)) {
              lVar6 = -0x6eaff9b15f56394d;
            }
          }
        }
        else if (lVar5 < -0x4e8c0c211cfcd497) {
          lVar6 = 0x4855c32ee178fb46;
          if ((lVar5 != -0x51d99a3e8362d0bc) && (lVar6 = lVar5, lVar5 == -0x512a9955c161b7ec)) {
            lVar6 = -0x5539114545240e32;
          }
        }
        else if (lVar5 == -0x4e8c0c211cfcd497) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f2d8);
          lVar6 = 0x17142e57b3fbdacc;
          if (iVar3 != 0) {
            lVar6 = 0x2afb280a5105d277;
          }
        }
        else if (lVar5 == -0x4df45f9071229fcb) {
          lVar6 = -0x37bdef736455df14;
          if (DAT_0021f703 == '\0') {
            lVar6 = 0x261d1e55d732e916;
          }
        }
      }
      else if (lVar5 < -0x46bbd904ef538767) {
        if (lVar5 < -0x48694ef610e03802) {
          lVar6 = 0x78be59ea9dee64ea;
          if (lVar5 != -0x4cda9161166eba85) {
            if (lVar5 == -0x4b22781be67e7ed4) {
              DAT_0021d258 = DAT_0021d258 ^ 0x57;
              DAT_0021d259 = DAT_0021d259 ^ 0x57;
              DAT_0021d25a = DAT_0021d25a ^ 0x57;
              DAT_0021d25b = DAT_0021d25b ^ 0x57;
              _DAT_0021d240 = _DAT_0021d240 ^ 0x5757575757575757;
              uRam000000000021d248 = uRam000000000021d248 ^ 0x5757575757575757;
              DAT_0021d250 = DAT_0021d250 ^ 0x5757575757575757;
              DAT_0021f6f9 = '\x01';
              lVar6 = 0x694dd6a1b4275a67;
            }
            else {
              lVar6 = lVar5;
              if (lVar5 == -0x49a6cee87fae9125) {
                lVar6 = -0x443dabdea30b8493;
              }
            }
          }
        }
        else {
          lVar6 = -0x53507ad4015fd567;
          if (lVar5 != -0x48694ef610e03802) {
            if (lVar5 == -0x484db209c6dcb7b7) {
              fVar7 = *param_2;
              *param_3 = *param_3 | 0x100000;
              *param_2 = fVar7 + (1.0 - fVar7);
LAB_00162acc:
              FUN_001459dc(param_1,param_2,param_3);
              lVar6 = 0x416329e724d1b2f1;
            }
            else {
              lVar6 = lVar5;
              if (lVar5 == -0x4789dba8d153151f) {
                lVar6 = -0x6bf58dbb870a5adb;
              }
            }
          }
        }
      }
      else if (lVar5 < -0x443dabdea30b8493) {
        if (lVar5 == -0x46bbd904ef538767) {
          DAT_0021c590 = DAT_0021c590 ^ 0x44;
          DAT_0021c588 = DAT_0021c588 ^ 0x4444444444444444;
          DAT_0021f65c = '\x01';
          lVar6 = -0x20ccb0feb72cd38a;
        }
        else {
          lVar6 = 0x47f0669a9cce2cef;
          if ((lVar5 != -0x4592fca696dd41f1) && (lVar6 = lVar5, lVar5 == -0x44bd07eb77269a1b)) {
            lVar6 = 0x4bd5c0c69887566e;
          }
        }
      }
      else if (lVar5 < -0x412ff6174db1ad5f) {
        if (lVar5 == -0x443dabdea30b8493) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f524);
          lVar6 = 0x7154389ef3dcb024;
          if (iVar3 != 0) {
            lVar6 = 0x4dfa4a3791474fd1;
          }
        }
        else if (lVar5 == -0x41f6292ecc8f571b) {
          DAT_0021f2d8 = 0;
          uVar4 = FUN_002006ac(local_d0,&DAT_0021c688);
          lVar6 = 0x19fcd21df10416f8;
          if ((uVar4 & 1) == 0) {
            lVar6 = 0x6bd2f4212b1fa217;
          }
        }
      }
      else if (lVar5 == -0x412ff6174db1ad5f) {
        lVar6 = 0x37b76335d4fab737;
        if (DAT_0021f66f == '\0') {
          lVar6 = 0x4c60151d629c50eb;
        }
      }
      else if (lVar5 == -0x3fe78bc799c09e81) {
        lVar6 = -0x2d8ef72306c0a23e;
        if (DAT_0021f65e == '\0') {
          lVar6 = 0x41f60aad80e4d7;
        }
      }
      goto LAB_0015f004;
    }
    if (-0x6bf58dbb870a5adc < lVar5) {
      if (lVar5 < -0x62fd08501eafb003) {
        if (lVar5 < -0x66cdc8e9c47417dc) {
          if (lVar5 == -0x6bf58dbb870a5adb) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f2d8);
            lVar6 = 0x7459a26d0cb8b7ca;
            if (iVar3 != 0) {
              lVar6 = -0x4789dba8d153151f;
            }
          }
          else if (lVar5 == -0x69591a65b33a794f) {
            FUN_001459dc(param_1,param_2,param_3);
            lVar6 = 0x3fd18584135302d;
          }
          else if (lVar5 == -0x68879f4e9340b6db) {
            lVar6 = 0x5ce01779cbbcf0ff;
          }
        }
        else {
          lVar6 = -0x56f328500550391a;
          if (lVar5 != -0x66cdc8e9c47417dc) {
            if (lVar5 == -0x64b756aa3eca489d) {
              FUN_001459dc(0,param_2,param_3);
              lVar6 = 0x3fd18584135302d;
            }
            else {
              lVar6 = lVar5;
              if (lVar5 == -0x647b0ce666fc6931) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f438);
                lVar6 = 0x3a5ba04437dcc8d5;
                if (iVar3 != 0) {
                  lVar6 = -0x390d9af94481dd6c;
                }
              }
            }
          }
        }
      }
      else if (lVar5 < -0x6013a751e25b69bc) {
        lVar6 = -0x1e69e69a4d23ea00;
        if (lVar5 != -0x62fd08501eafb003) {
          if (lVar5 == -0x629d6e7a3af6cf1d) {
            local_d8 = *(long *)(param_1 + 0x18);
            lVar6 = -0xfb2f469173de3e5;
            if (local_d8 == 0 || param_3 == (ulong *)0x0) {
              lVar6 = -0x51f1b7129c8d5764;
            }
          }
          else {
            lVar6 = lVar5;
            if (lVar5 == -0x613bf6959830021e) {
              lVar6 = -0x5df8b939a229389;
            }
          }
        }
      }
      else if (lVar5 < -0x5c8a2a8d5f9ecbf0) {
        lVar6 = -0x5c8a2a8d5f9ecbf0;
        if ((lVar5 != -0x6013a751e25b69bc) && (lVar6 = lVar5, lVar5 == -0x5ca4594d4182ee74)) {
          lVar6 = 0x5ce01779cbbcf0ff;
        }
      }
      else if (lVar5 == -0x5c8a2a8d5f9ecbf0) {
        local_f0 = *(long *)(param_1 + 0x40);
        lVar6 = 0x481a61f518e1333;
        if (local_f0 == 0 || param_3 == (ulong *)0x0) {
          lVar6 = 0x486e9edf4f4cc63e;
        }
      }
      else if (lVar5 == -0x5a0366846d96e02e) {
        lVar6 = 0x2958027f07ef897a;
      }
      goto LAB_0015f004;
    }
    if (-0x74dace5f56bca2df < lVar5) {
      if (lVar5 < -0x703b82837bff9a4d) {
        if (lVar5 == -0x74dace5f56bca2de) {
          DAT_0021f434 = 0;
          iVar3 = FUN_001e17a8(local_b8,&DAT_0021cfc0);
          lVar6 = -0x68879f4e9340b6db;
          if (iVar3 != 0) {
            lVar6 = 0x2f3f6358ee08756d;
          }
        }
        else if (lVar5 == -0x748550cfec0c055b) {
          DAT_0021f530 = 0;
          iVar3 = FUN_001e17a8(local_130,&DAT_0021d358);
          lVar6 = 0x3751d4564cc1ed14;
          if (iVar3 != 0) {
            lVar6 = 0x6802f828c15c2cbb;
          }
        }
        else if (lVar5 == -0x73e1dee6cae8a3a8) {
          DAT_0021f4f8 = 0;
          lVar5 = FUN_001e238c(local_d8,&DAT_0021d208);
          lVar6 = -0x32d3b70c0a1e6b02;
          if (lVar5 != 0) {
            lVar6 = -0x3e2539f52575c62c;
          }
        }
      }
      else if (lVar5 < -0x6dc0730dc3bbe68a) {
        lVar6 = -0x176b84a7199071e4;
        if ((lVar5 != -0x703b82837bff9a4d) && (lVar6 = lVar5, lVar5 == -0x6eaff9b15f56394d)) {
          local_e0 = *(long *)(param_1 + 0x18);
          lVar6 = -0x44bd07eb77269a1b;
          if (local_e0 == 0 || param_3 == (ulong *)0x0) {
            lVar6 = -0x51d99a3e8362d0bc;
          }
        }
      }
      else if (lVar5 == -0x6dc0730dc3bbe68a) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f25c);
        lVar6 = -0x3835c2a8be647978;
        if (iVar3 != 0) {
          lVar6 = 0x1bb6c8df055d9b7b;
        }
      }
      else if (lVar5 == -0x6d8feeb2160118fa) {
        lVar6 = -0x53507ad4015fd567;
      }
      goto LAB_0015f004;
    }
    if (-0x76167185d5200dda < lVar5) {
      lVar6 = 0x7c8c2962642989e9;
      if (lVar5 != -0x76167185d5200dd9) {
        if (lVar5 == -0x756bb9d92adfc29f) {
          local_120 = *(long *)(param_1 + 0x30);
          lVar6 = -0x512a9955c161b7ec;
          if (local_120 != 0) {
            lVar6 = -0x525408f0168386b5;
          }
        }
        else {
          lVar6 = lVar5;
          if (lVar5 == -0x7516a05f5f8da842) {
            lVar6 = 0x7c8c2962642989e9;
          }
        }
      }
      goto LAB_0015f004;
    }
    lVar6 = 0x3fd18584135302d;
    if (lVar5 == -0x7e7bc73bbbd72b78) goto LAB_0015f004;
    if (lVar5 != -0x76b59f082133174a) {
      lVar6 = lVar5;
      if (lVar5 == -0x76355510c02a6bf3) {
        local_140 = *(long *)(param_1 + 0x18);
        lVar6 = -0x7e7bc73bbbd72b78;
        if (local_140 != 0) {
          lVar6 = -0x7516a05f5f8da842;
        }
      }
      goto LAB_0015f004;
    }
    fVar7 = *param_2;
    fVar8 = 1.0 - fVar7;
    lVar6 = -0x5c8a2a8d5f9ecbf0;
    uVar4 = *param_3 | 0x10000;
  }
  else if (lVar5 < -0x1c6661490938dabe) {
    if (lVar5 < -0x2cb22d4d6b371727) {
      if (-0x393604af2d7d8bda < lVar5) {
        if (lVar5 < -0x37bdef736455df14) {
          lVar6 = -0x1628a9fc3afbfc5a;
          if (((lVar5 != -0x393604af2d7d8bd9) &&
              (lVar6 = -0x647b0ce666fc6931, lVar5 != -0x390d9af94481dd6c)) &&
             (lVar6 = lVar5, lVar5 == -0x3835c2a8be647978)) {
            lVar6 = -0x613bf6959830021e;
            if (DAT_0021f650 == '\0') {
              lVar6 = 0x26923d289caa622e;
            }
          }
        }
        else if (lVar5 < -0x32d3b70c0a1e6b02) {
          lVar6 = 0x4b26d0e0a38a7510;
          if ((lVar5 != -0x37bdef736455df14) && (lVar6 = lVar5, lVar5 == -0x33247d271c4059e0)) {
            lVar6 = -0x394ae604abcf8cd0;
          }
        }
        else {
          lVar6 = -0x6eaff9b15f56394d;
          if ((lVar5 != -0x32d3b70c0a1e6b02) && (lVar6 = lVar5, lVar5 == -0x2d8ef72306c0a23e)) {
            lVar6 = -0x1c6661490938dabe;
          }
        }
        goto LAB_0015f004;
      }
      if (-0x3bc018cdece32731 < lVar5) {
        lVar6 = 0x5d42272e0800b863;
        if (((lVar5 != -0x3bc018cdece32730) &&
            (lVar6 = -0xda192c3be4439f9, lVar5 != -0x3aa4e7ba4253e568)) &&
           (lVar6 = lVar5, lVar5 == -0x394ae604abcf8cd0)) {
          DAT_0021f524 = 0;
          lVar5 = FUN_001e238c(local_118,&DAT_0021d300);
          lVar6 = -0x756bb9d92adfc29f;
          if (lVar5 != 0) {
            lVar6 = 0x3f5abe35ab1365ec;
          }
        }
        goto LAB_0015f004;
      }
      lVar6 = -0x76355510c02a6bf3;
      if (lVar5 == -0x3f0d20e5170ace53) goto LAB_0015f004;
      if (lVar5 != -0x3e2539f52575c62c) {
        lVar6 = lVar5;
        if (lVar5 == -0x3dd7920aa912cb82) {
          lVar6 = 0x5347c3c4cba908a0;
          if (DAT_0021f6f9 == '\0') {
            lVar6 = -0x4b22781be67e7ed4;
          }
        }
        goto LAB_0015f004;
      }
      fVar7 = *param_2;
      fVar8 = 1.0 - fVar7;
      lVar6 = -0x6eaff9b15f56394d;
      uVar4 = *param_3 | 0x2000;
    }
    else {
      if (lVar5 < -0x237b642672c0dd53) {
        if (lVar5 < -0x27dc54736aa17fac) {
          lVar6 = 0x696907c375d3b805;
          if (((lVar5 != -0x2cb22d4d6b371727) && (lVar6 = lVar2, lVar5 != -0x29f3c506e143e8e0)) &&
             (lVar6 = lVar5, lVar5 == -0x296c5adbf888a641)) {
            lVar6 = -0x5c8a2a8d5f9ecbf0;
          }
        }
        else {
          lVar6 = 0x587dc856d3e0429b;
          if (((lVar5 != -0x27dc54736aa17fac) &&
              (lVar6 = -0x4e8c0c211cfcd497, lVar5 != -0x2732652e0c25cd7c)) &&
             (lVar6 = lVar5, lVar5 == -0x240130597a3ac034)) {
            lVar6 = -0x629d6e7a3af6cf1d;
          }
        }
        goto LAB_0015f004;
      }
      if (-0x1f9950f1cd38dde7 < lVar5) {
        if (lVar5 < -0x1d5e988443fe3233) {
          lVar6 = -0x1e69e69a4d23ea00;
          if ((lVar5 != -0x1f9950f1cd38dde6) && (lVar6 = lVar5, lVar5 == -0x1e69e69a4d23ea00))
          goto LAB_00162acc;
        }
        else if (lVar5 == -0x1d5e988443fe3233) {
          DAT_0021d350 = DAT_0021d350 ^ 0x26;
          DAT_0021d351 = DAT_0021d351 ^ 0x26;
          DAT_0021d352 = DAT_0021d352 ^ 0x26;
          DAT_0021d353 = DAT_0021d353 ^ 0x26;
          DAT_0021d354 = DAT_0021d354 ^ 0x26;
          _DAT_0021d340 = _DAT_0021d340 ^ 0x2626262626262626;
          uRam000000000021d348 = uRam000000000021d348 ^ 0x2626262626262626;
          DAT_0021f704 = '\x01';
          lVar6 = 0x59df83908a5d9d4b;
        }
        else if (lVar5 == -0x1d50c9d4833c6ac1) {
          lVar6 = -0x217334a03884f19e;
        }
        goto LAB_0015f004;
      }
      lVar6 = -0x73e1dee6cae8a3a8;
      if (lVar5 == -0x237b642672c0dd53) goto LAB_0015f004;
      if (lVar5 != -0x217334a03884f19e) {
        lVar6 = lVar5;
        if (lVar5 == -0x20ccb0feb72cd38a) {
          DAT_0021f28c = 0;
          lVar5 = FUN_001e238c(local_e0,&DAT_0021c588);
          lVar6 = 0x7d6310c1ef24afe4;
          if (lVar5 != 0) {
            lVar6 = 0x57303b1b8ff095a0;
          }
        }
        goto LAB_0015f004;
      }
      fVar7 = *param_2;
      fVar8 = 1.0 - fVar7;
      lVar6 = 0x3fd18584135302d;
      uVar4 = *param_3 | 0x1000000;
    }
  }
  else if (lVar5 < -0xc87774893833c55) {
    if (-0x160573c9142675fc < lVar5) {
      if (lVar5 < -0xfb2f469173de3e5) {
        lVar6 = 0x5ce01779cbbcf0ff;
        if (((lVar5 != -0x160573c9142675fb) &&
            (lVar6 = 0x4272828c18753d90, lVar5 != -0x147f541ed72d7dc3)) &&
           (lVar6 = lVar5, lVar5 == -0x142400856b8823a0)) {
          lVar6 = 0x4bd5c0c69887566e;
        }
      }
      else if (lVar5 < -0xda192c3be4439f9) {
        lVar6 = 0x158204a7f9f7a96e;
        if ((lVar5 != -0xfb2f469173de3e5) && (lVar6 = lVar5, lVar5 == -0xda5fe9872b0c983)) {
          lVar6 = -0x237b642672c0dd53;
          if (DAT_0021f6f7 == '\0') {
            lVar6 = 0x1f445a0db58489e8;
          }
        }
      }
      else if (lVar5 == -0xda192c3be4439f9) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f2d8);
        lVar6 = -0x412ff6174db1ad5f;
        if (iVar3 != 0) {
          lVar6 = -0x3aa4e7ba4253e568;
        }
      }
      else if (lVar5 == -0xd3bf59c5acf4d2d) {
        lVar6 = -0x5592ff2d8f646a7c;
      }
      goto LAB_0015f004;
    }
    if (lVar5 < -0x17bc51b3ae65d7ff) {
      if (lVar5 == -0x1c6661490938dabe) {
        DAT_0021f294 = 0;
        lVar5 = FUN_001e238c(local_f0,&DAT_0021c5a4);
        lVar6 = -0x5a0366846d96e02e;
        if (lVar5 != 0) {
          lVar6 = 0x5271c8ff7d470233;
        }
      }
      else {
        lVar6 = -0x176b84a7199071e4;
        if ((lVar5 != -0x1997a808d53ba82b) && (lVar6 = lVar5, lVar5 == -0x193574d43e0030c9)) {
          lVar6 = -0x6bf58dbb870a5adb;
        }
      }
      goto LAB_0015f004;
    }
    lVar6 = -0x6dc0730dc3bbe68a;
    if (lVar5 == -0x17bc51b3ae65d7ff) goto LAB_0015f004;
    if (lVar5 == -0x176b84a7199071e4) {
      iVar3 = FUN_00212730(0,1,&DAT_0021f504);
      lVar6 = 0x210718b4df53af09;
      if (iVar3 != 0) {
        lVar6 = -0x703b82837bff9a4d;
      }
      goto LAB_0015f004;
    }
    lVar6 = lVar5;
    if (lVar5 != -0x1628a9fc3afbfc5a) goto LAB_0015f004;
    fVar7 = *param_2;
    fVar8 = 1.0 - fVar7;
    lVar6 = -0x53507ad4015fd567;
    uVar4 = *param_3 | 0x400000;
  }
  else {
    if (-0x4fff8f73af8abfe < lVar5) {
      if (lVar5 < -0x1dcc44adf00d90b) {
        lVar6 = 0x5c90d179dcf2a04f;
        if (lVar5 != -0x4fff8f73af8abfd) {
          if (lVar5 == -0x33e6b5da033c24c) {
            iVar3 = FUN_00212730(0,1,&DAT_0021f500);
            lVar6 = -0x3dd7920aa912cb82;
            if (iVar3 != 0) {
              lVar6 = 0x658545d0e0068a3e;
            }
          }
          else {
            lVar6 = lVar5;
            if (lVar5 == -0x279fd25f3932037) {
              local_138 = *(long *)(param_1 + 0x20);
              lVar6 = 0x4483b204712811d;
              if (local_138 != 0) {
                lVar6 = 0x3ae60cb2c8accac4;
              }
            }
          }
        }
      }
      else if (lVar5 < -0x94e63f27f876bc) {
        lVar6 = -0x5539114545240e32;
        if ((lVar5 != -0x1dcc44adf00d90b) && (lVar6 = lVar5, lVar5 == -0xc80634f66cbb07)) {
          lVar6 = 0x460be75fc00bfbbd;
          if (DAT_0021f6c6 == '\0') {
            lVar6 = 0xa4b91f8f506dc1;
          }
        }
      }
      else {
        lVar6 = -0x217334a03884f19e;
        if ((lVar5 != -0x94e63f27f876bc) && (lVar6 = lVar5, lVar5 == 0x41f60aad80e4d7)) {
          lVar6 = -0x1c6661490938dabe;
          goto LAB_00162a48;
        }
      }
      goto LAB_0015f004;
    }
    if (lVar5 < -0x9f1b43bfa999619) {
      lVar6 = -0xa552596ec96e0b2;
      if (((lVar5 != -0xc87774893833c55) &&
          (lVar6 = 0x5ce01779cbbcf0ff, lVar5 != -0xb1d8759076cd320)) &&
         (lVar6 = lVar5, lVar5 == -0xa552596ec96e0b2)) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f434);
        lVar6 = -0xc80634f66cbb07;
        if (iVar3 != 0) {
          lVar6 = -0xc87774893833c55;
        }
      }
      goto LAB_0015f004;
    }
    if (-0x5df8b939a22938a < lVar5) {
      if (lVar5 == -0x5df8b939a229389) {
        DAT_0021f25c = 0;
        lVar5 = FUN_001e238c(local_e8,&DAT_0021c458);
        lVar6 = -0x296c5adbf888a641;
        if (lVar5 != 0) {
          lVar6 = -0x76b59f082133174a;
        }
      }
      else if (lVar5 == -0x5b2a8fb2434df58) {
        DAT_0021cff8 = DAT_0021cff8 ^ 0xe1;
        DAT_0021cff9 = DAT_0021cff9 ^ 0xe1;
        DAT_0021cffa = DAT_0021cffa ^ 0xe1;
        _DAT_0021cfe0 = _DAT_0021cfe0 ^ 0xe1e1e1e1e1e1e1e1;
        uRam000000000021cfe8 = uRam000000000021cfe8 ^ 0xe1e1e1e1e1e1e1e1;
        DAT_0021cffb = DAT_0021cffb ^ 0xe1;
        DAT_0021cffc = DAT_0021cffc ^ 0xe1;
        DAT_0021cff0 = DAT_0021cff0 ^ 0xe1e1e1e1e1e1e1e1;
        DAT_0021f6c7 = '\x01';
        lVar6 = 0x76df819ac5734db4;
      }
      goto LAB_0015f004;
    }
    lVar6 = 0x74cc681cdfc459e3;
    if ((lVar5 == -0x9f1b43bfa999619) || (lVar6 = lVar5, lVar5 != -0x71a7b12adf28b55))
    goto LAB_0015f004;
    fVar7 = *param_2;
    fVar8 = 1.0 - fVar7;
    lVar6 = 0x39c244391c6afdae;
    uVar4 = *param_3 | 0x80000;
  }
LAB_00162aa0:
  fVar7 = fVar7 + fVar8;
LAB_00162aa4:
  *param_2 = fVar7;
  *param_3 = uVar4;
  goto LAB_0015f004;
}

