// rea decompile_all
// name: FUN_00162e20
// address: 0x162e20
// body: available
// range: 0x162e20-0x164b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00162e20(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  byte unaff_w19;
  byte local_24c;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  ulong local_210;
  long local_208;
  ulong local_200;
  long local_1f8;
  long local_1f0;
  ulong local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  ulong local_1c8;
  long local_1c0;
  long local_1b8;
  ulong local_1b0;
  long local_1a8;
  long local_1a0;
  ulong local_198;
  long local_190;
  long local_188;
  ulong local_180;
  long local_178;
  long local_170;
  ulong local_168;
  long local_160;
  long local_158;
  long local_150;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  long local_130;
  ulong local_128;
  ulong local_120;
  long local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  byte local_dc;
  ulong local_d8;
  long local_d0;
  ulong local_c8;
  byte local_bc;
  ulong local_b8;
  long local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  long local_80;
  
  lVar1 = 0x7b6157fceb2cac0;
  if ((param_3 == 0 || param_2 == 0) || param_1 == (long *)0x0) {
    lVar1 = 0x24736391c23b6310;
  }
  lVar2 = -0x6591da0b298dcafb;
LAB_00162f58:
  while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < -0xcaaab2f5dcdb430) {
    if (lVar4 < -0x44fd3cc9b8ff583a) {
      if (lVar4 < -0x6591da0b298dcafb) {
        if (lVar4 < -0x71df5b8174c645e9) {
          if (lVar4 < -0x797073ce46f1afb6) {
            if (lVar4 == -0x7e3d4c00ba503696) {
              local_1d0 = param_1[2];
              lVar2 = 0x4dd2f70d9f8a3f53;
              if (local_1d0 != 0) {
                lVar2 = -0x43fdbe12f96bc460;
              }
            }
            else if (lVar4 == -0x7b0b7ad66736c0f7) {
              local_f8 = local_170;
              local_110 = 0;
              lVar2 = -0x47ad398ee85d377f;
            }
            else if (lVar4 == -0x79be71821bcc0083) {
              local_a0 = param_1[2];
              local_a8 = local_200;
              lVar2 = -0x1d5c04939e3b65f7;
            }
          }
          else if (lVar4 == -0x797073ce46f1afb6) {
            local_80 = param_1[6];
            local_88 = local_1c8;
            lVar2 = 0x2430fc25aad94772;
          }
          else if (lVar4 == -0x73c8ecc5ac850673) {
            local_180 = local_d8 + 1;
            lVar2 = -0xcaaab2f5dcdb430;
            if (local_180 != param_3) {
              lVar2 = 0x24c17ef325e91e30;
            }
          }
          else if (lVar4 == -0x728a2ba84aa92c9b) {
            lVar2 = 0x231596e536e13c3d;
          }
        }
        else if (lVar4 < -0x6e40158b1e1b6308) {
          if (lVar4 == -0x71df5b8174c645e9) {
            local_d0 = local_188;
            local_e8 = 0;
            lVar2 = -0x43a84c6919729cc6;
          }
          else if (lVar4 == -0x71574730f139ee78) {
            iVar3 = FUN_001e17a8(local_238,local_1e0);
            lVar2 = 0x4224543afe766946;
            if (iVar3 != 0) {
              lVar2 = -0x422225ba427121c3;
            }
          }
          else if (lVar4 == -0x7073c707abcfb4b0) {
            local_130 = param_1[1];
            local_148 = local_168;
            lVar2 = 0x3ef662d1bc8ac105;
          }
        }
        else if (lVar4 < -0x69649d1a464093fc) {
          lVar2 = -0x69649d1a464093fc;
          if ((lVar4 != -0x6e40158b1e1b6308) && (lVar2 = lVar4, lVar4 == -0x6977df116dfae3cf)) {
            iVar3 = FUN_001e17a8(local_228,local_1a8);
            lVar2 = 0x6adfaebc905e74b5;
            if (iVar3 != 0) {
              lVar2 = -0x533f8ec974edb83a;
            }
          }
        }
        else if (lVar4 == -0x69649d1a464093fc) {
          local_198 = local_f0 + 1;
          lVar2 = 0x46a6164b85a42d9b;
          if (local_198 != param_3) {
            lVar2 = 0x44d9a442a5061d48;
          }
        }
        else if (lVar4 == -0x6960b75f6252bdc1) {
          lVar2 = -0x69649d1a464093fc;
        }
      }
      else if (lVar4 < -0x58664f1d849695f5) {
        if (lVar4 < -0x5e43c343e09d751a) {
          lVar2 = lVar1;
          if (((lVar4 != -0x6591da0b298dcafb) &&
              (lVar2 = -0x5869657f238a58a2, lVar4 != -0x6589035e6e11108e)) &&
             (lVar2 = lVar4, lVar4 == -0x62bfdbb25173dc14)) {
            lVar2 = -0x1837a164699dfd16;
            unaff_w19 = local_24c;
          }
        }
        else if (lVar4 < -0x58feabef156b2317) {
          if (lVar4 == -0x5e43c343e09d751a) goto LAB_00162f44;
          if (lVar4 == -0x5b303f50421924f4) {
            lVar2 = -0x1837a164699dfd16;
            unaff_w19 = local_dc;
          }
        }
        else {
          lVar2 = 0x56961558c5e24552;
          if ((lVar4 != -0x58feabef156b2317) && (lVar2 = lVar4, lVar4 == -0x5869657f238a58a2)) {
            local_1e8 = local_120 + 1;
            lVar2 = 0x2c7254c304124e46;
            if (local_1e8 != param_3) {
              lVar2 = -0x421c09342d15234f;
            }
          }
        }
      }
      else if (lVar4 < -0x533f8ec974edb83a) {
        lVar2 = 0x3f02a2d5be72d3ac;
        if (lVar4 != -0x58664f1d849695f5) {
          if (lVar4 == -0x57f673ea39860d29) {
            local_118 = local_158;
            local_140 = 0;
            lVar2 = 0x2cfbf08eb69b2de7;
          }
          else {
            lVar2 = lVar4;
            if (lVar4 == -0x5499f64b67aa528c) {
              lVar2 = 0x35784f121d841815;
            }
          }
        }
      }
      else if (lVar4 < -0x4ae10037a7fe0fc7) {
        lVar2 = 0x3f02a2d5be72d3ac;
        if ((lVar4 != -0x533f8ec974edb83a) && (lVar2 = lVar4, lVar4 == -0x506c925b673d197d)) {
          lVar2 = 0x35784f121d841815;
        }
      }
      else {
        lVar2 = 0x59bb356fbf425eb9;
        if ((lVar4 != -0x4ae10037a7fe0fc7) && (lVar2 = lVar4, lVar4 == -0x47ad398ee85d377f)) {
          local_220 = local_f8;
          lVar2 = -0x6e40158b1e1b6308;
          if (local_f8 != 0) {
            lVar2 = -0x206b57077e8ae66d;
          }
          local_f0 = local_110;
        }
      }
    }
    else if (lVar4 < -0x2944532e29768439) {
      if (lVar4 < -0x3babe3e11fd2460b) {
        if (lVar4 < -0x422225ba427121c3) {
          lVar2 = 0x16725ef7c095b94f;
          if (lVar4 != -0x44fd3cc9b8ff583a) {
            if (lVar4 == -0x43fdbe12f96bc460) {
              local_a8 = 0;
              local_a0 = local_1d0;
              lVar2 = -0x1d5c04939e3b65f7;
            }
            else {
              lVar2 = lVar4;
              if (lVar4 == -0x43a84c6919729cc6) {
                local_228 = local_d0;
                lVar2 = -0x58664f1d849695f5;
                if (local_d0 != 0) {
                  lVar2 = 0x1f3309bae7919416;
                }
                local_100 = local_e8;
              }
            }
          }
        }
        else {
          lVar2 = -0x5869657f238a58a2;
          if (lVar4 != -0x422225ba427121c3) {
            if (lVar4 == -0x421c09342d15234f) {
              local_90 = param_1[7];
              local_98 = local_1e8;
              lVar2 = -0x407b2eb5ccbeb15d;
            }
            else {
              lVar2 = lVar4;
              if (lVar4 == -0x407b2eb5ccbeb15d) {
                local_238 = local_90;
                lVar2 = -0x6589035e6e11108e;
                if (local_90 != 0) {
                  lVar2 = 0x4a41829ec9588d48;
                }
                local_120 = local_98;
              }
            }
          }
        }
      }
      else if (lVar4 < -0x34820536d621abee) {
        if (lVar4 == -0x3babe3e11fd2460b) {
          local_208 = *(long *)(param_2 + local_138 * 8);
          lVar2 = -0x6b1afe209aae81d;
          if (local_208 != 0) {
            lVar2 = -0x214a0cabf5528a3;
          }
        }
        else {
          lVar2 = 0x35784f121d841815;
          if ((lVar4 != -0x3afaf7377aff99f1) && (lVar2 = lVar4, lVar4 == -0x3a86e5344e5ae2f9)) {
            lVar2 = -0x73c8ecc5ac850673;
          }
        }
      }
      else if (lVar4 < -0x2e72cd1aa923a4bd) {
        if (lVar4 == -0x34820536d621abee) {
          iVar3 = FUN_001e17a8(local_220,local_190);
          lVar2 = 0x1cb64ffee3aa0acf;
          if (iVar3 != 0) {
            lVar2 = -0x6960b75f6252bdc1;
          }
        }
        else if (lVar4 == -0x32dae319b619a41e) {
          local_d0 = *param_1;
          local_e8 = local_1b0;
          lVar2 = -0x43a84c6919729cc6;
        }
      }
      else if (lVar4 == -0x2e72cd1aa923a4bd) {
        local_188 = *param_1;
        lVar2 = -0x1edb0877543a6948;
        if (local_188 != 0) {
          lVar2 = -0x71df5b8174c645e9;
        }
      }
      else if (lVar4 == -0x2b95fff8b808fdd7) {
        lVar2 = 0x56961558c5e24552;
      }
    }
    else if (lVar4 < -0x1edb0877543a6948) {
      if (lVar4 < -0x22ff17b301545f5f) {
        if (lVar4 == -0x2944532e29768439) {
          local_210 = local_138 + 1;
          local_dc = local_210 < param_3;
          lVar2 = -0x5b303f50421924f4;
          if (local_210 != param_3) {
            lVar2 = -0x4d17e0e07cfe527;
          }
        }
        else if (lVar4 == -0x27df449cda8a941d) {
          iVar3 = FUN_001e17a8(local_230,local_1c0);
          lVar2 = 0x2457afac7ee06d00;
          if (iVar3 != 0) {
            lVar2 = -0x4ae10037a7fe0fc7;
          }
        }
        else if (lVar4 == -0x27997180da07f21e) {
          local_1f0 = param_1[10];
          lVar2 = 0x34b2ddf2e4faf92a;
          if (local_1f0 != 0) {
            lVar2 = -0xf5364229d26bda2;
          }
        }
      }
      else if (lVar4 < -0x206b57077e8ae66d) {
        if (lVar4 == -0x22ff17b301545f5f) {
          local_88 = 0;
          local_80 = local_1a0;
          lVar2 = 0x2430fc25aad94772;
        }
        else if (lVar4 == -0x22a711ff7029119d) {
          iVar3 = FUN_001e17a8(local_240,local_1f8);
          lVar2 = -0x5c5a222f8f6f6cd;
          if (iVar3 != 0) {
            lVar2 = -0x3afaf7377aff99f1;
          }
        }
      }
      else if (lVar4 == -0x206b57077e8ae66d) {
        local_190 = *(long *)(param_2 + local_f0 * 8);
        lVar2 = 0x20a93acd8f11cfae;
        if (local_190 != 0) {
          lVar2 = -0x34820536d621abee;
        }
      }
      else if (lVar4 == -0x1fe42321b357628c) {
        lVar2 = -0x183989447d62e690;
      }
    }
    else if (lVar4 < -0x1908a9b0f3cb6d4c) {
      lVar2 = 0x231596e536e13c3d;
      if (((lVar4 != -0x1edb0877543a6948) &&
          (lVar2 = -0x2e72cd1aa923a4bd, lVar4 != -0x1d8ad965ef6ea278)) &&
         (lVar2 = lVar4, lVar4 == -0x1d5c04939e3b65f7)) {
        local_240 = local_a0;
        lVar2 = -0x5499f64b67aa528c;
        if (local_a0 != 0) {
          lVar2 = 0x75662046808fc8f6;
        }
        local_128 = local_a8;
      }
    }
    else if (lVar4 < -0x1837a164699dfd16) {
      if (lVar4 == -0x1908a9b0f3cb6d4c) goto LAB_00162f44;
      if (lVar4 == -0x183989447d62e690) {
        local_158 = param_1[3];
        lVar2 = 0x31a18e3d31dcd3dc;
        if (local_158 != 0) {
          lVar2 = -0x57f673ea39860d29;
        }
      }
    }
    else if (lVar4 == -0xf5364229d26bda2) {
      local_b8 = 0;
      local_bc = 1;
      local_b0 = local_1f0;
      lVar2 = -0xb2242500285147d;
    }
    else if (lVar4 == -0x1837a164699dfd16) {
      return unaff_w19 & 1;
    }
  }
  if (lVar4 < 0x35784f121d841815) {
    if (lVar4 < 0x1f3309bae7919416) {
      if (lVar4 < -0x214a0cabf5528a3) {
        if (lVar4 < -0x6b1afe209aae81d) {
          lVar2 = 0x6fb1c5aff8dc1e0a;
          if (lVar4 != -0xcaaab2f5dcdb430) {
            if (lVar4 == -0xb2242500285147d) {
              local_248 = local_b0;
              lVar2 = 0x549e13da9ff21fb3;
              if (local_b0 != 0) {
                lVar2 = -0x3babe3e11fd2460b;
              }
              local_138 = local_b8;
              local_24c = local_bc;
            }
            else {
              lVar2 = lVar4;
              if (lVar4 == -0xa28962d538f7052) {
                local_148 = 0;
                local_130 = local_150;
                lVar2 = 0x3ef662d1bc8ac105;
              }
            }
          }
          goto LAB_00162f58;
        }
        lVar2 = -0x2944532e29768439;
        if (lVar4 == -0x6b1afe209aae81d) goto LAB_00162f58;
        if (lVar4 != -0x5c5a222f8f6f6cd) {
          lVar2 = lVar4;
          if (lVar4 == -0x4d17e0e07cfe527) {
            local_b0 = param_1[10];
            local_b8 = local_210;
            lVar2 = -0xb2242500285147d;
            local_bc = local_dc;
          }
          goto LAB_00162f58;
        }
      }
      else {
        if (lVar4 < 0x14d1c0389661961b) {
          if (lVar4 == -0x214a0cabf5528a3) {
            iVar3 = FUN_001e17a8(local_248,local_208);
            lVar2 = -0x62bfdbb25173dc14;
            if (iVar3 != 0) {
              lVar2 = 0x5456b2b0dd693cfd;
            }
          }
          else if (lVar4 == 0x7b6157fceb2cac0) {
            local_150 = param_1[1];
            lVar2 = -0x1fe42321b357628c;
            if (local_150 != 0) {
              lVar2 = -0xa28962d538f7052;
            }
          }
          else if (lVar4 == 0x90a45e7db00bc36) {
            lVar2 = -0x5869657f238a58a2;
          }
          goto LAB_00162f58;
        }
        if (lVar4 < 0x184ed5a0938c170e) {
          if (lVar4 == 0x14d1c0389661961b) {
            local_98 = 0;
            local_90 = local_1b8;
            lVar2 = -0x407b2eb5ccbeb15d;
          }
          else if (lVar4 == 0x16725ef7c095b94f) {
            local_168 = local_c8 + 1;
            lVar2 = 0x304a4fb6f1160abe;
            if (local_168 != param_3) {
              lVar2 = -0x7073c707abcfb4b0;
            }
          }
          goto LAB_00162f58;
        }
        lVar2 = 0x59bb356fbf425eb9;
        if ((lVar4 == 0x184ed5a0938c170e) || (lVar2 = lVar4, lVar4 != 0x1cb64ffee3aa0acf))
        goto LAB_00162f58;
      }
    }
    else {
      if (0x24736391c23b630f < lVar4) {
        if (lVar4 < 0x2cfbf08eb69b2de7) {
          if (lVar4 != 0x24736391c23b6310) {
            if (lVar4 == 0x24c17ef325e91e30) {
              local_118 = param_1[3];
              local_140 = local_180;
              lVar2 = 0x2cfbf08eb69b2de7;
            }
            else if (lVar4 == 0x2c7254c304124e46) {
              lVar2 = -0x7e3d4c00ba503696;
            }
            goto LAB_00162f58;
          }
        }
        else {
          if (lVar4 < 0x31a18e3d31dcd3dc) {
            if (lVar4 == 0x2cfbf08eb69b2de7) {
              local_218 = local_118;
              lVar2 = 0x6ed8c5b648393727;
              if (local_118 != 0) {
                lVar2 = 0x528627640f106458;
              }
              local_d8 = local_140;
            }
            else if (lVar4 == 0x304a4fb6f1160abe) {
              lVar2 = -0x183989447d62e690;
            }
            goto LAB_00162f58;
          }
          lVar2 = 0x6fb1c5aff8dc1e0a;
          if ((lVar4 == 0x31a18e3d31dcd3dc) || (lVar2 = lVar4, lVar4 != 0x34b2ddf2e4faf92a))
          goto LAB_00162f58;
        }
        unaff_w19 = 0;
        lVar2 = -0x1837a164699dfd16;
        goto LAB_00162f58;
      }
      if (lVar4 < 0x231596e536e13c3d) {
        if (lVar4 == 0x1f3309bae7919416) {
          local_1a8 = *(long *)(param_2 + local_100 * 8);
          lVar2 = 0x460bbc13d7c2a2db;
          if (local_1a8 != 0) {
            lVar2 = -0x6977df116dfae3cf;
          }
        }
        else {
          lVar2 = -0x69649d1a464093fc;
          if ((lVar4 != 0x20a93acd8f11cfae) && (lVar2 = lVar4, lVar4 == 0x22347bdf73618da0)) {
            iVar3 = FUN_001e17a8(local_1d8,local_160);
            lVar2 = -0x1908a9b0f3cb6d4c;
            if (iVar3 != 0) {
              lVar2 = 0x3873ff0031aaf7d3;
            }
          }
        }
        goto LAB_00162f58;
      }
      if (lVar4 == 0x231596e536e13c3d) {
        local_1a0 = param_1[6];
        lVar2 = -0x2b95fff8b808fdd7;
        if (local_1a0 != 0) {
          lVar2 = -0x22ff17b301545f5f;
        }
        goto LAB_00162f58;
      }
      if (lVar4 == 0x2430fc25aad94772) {
        local_230 = local_80;
        lVar2 = 0x184ed5a0938c170e;
        if (local_80 != 0) {
          lVar2 = 0x6265dbfa6ddb1ae3;
        }
        local_108 = local_88;
        goto LAB_00162f58;
      }
      if (lVar4 != 0x2457afac7ee06d00) goto LAB_00162f58;
    }
  }
  else if (lVar4 < 0x528627640f106458) {
    if (0x4480fce709d670e7 < lVar4) {
      if (lVar4 < 0x46242c072386470f) {
        lVar2 = -0x73c8ecc5ac850673;
        if (lVar4 != 0x4480fce709d670e8) {
          if (lVar4 == 0x44d9a442a5061d48) {
            local_f8 = param_1[4];
            local_110 = local_198;
            lVar2 = -0x47ad398ee85d377f;
          }
          else {
            lVar2 = lVar4;
            if (lVar4 == 0x460bbc13d7c2a2db) {
              lVar2 = 0x3f02a2d5be72d3ac;
            }
          }
        }
      }
      else if (lVar4 < 0x4a41829ec9588d48) {
        if (lVar4 == 0x46242c072386470f) {
          local_160 = *(long *)(param_2 + local_c8 * 8);
          lVar2 = -0x44fd3cc9b8ff583a;
          if (local_160 != 0) {
            lVar2 = 0x22347bdf73618da0;
          }
        }
        else if (lVar4 == 0x46a6164b85a42d9b) {
          lVar2 = -0x2e72cd1aa923a4bd;
        }
      }
      else if (lVar4 == 0x4a41829ec9588d48) {
        local_1e0 = *(long *)(param_2 + local_120 * 8);
        lVar2 = 0x90a45e7db00bc36;
        if (local_1e0 != 0) {
          lVar2 = -0x71574730f139ee78;
        }
      }
      else if (lVar4 == 0x4dd2f70d9f8a3f53) {
        lVar2 = -0x27997180da07f21e;
      }
      goto LAB_00162f58;
    }
    if (lVar4 < 0x3ef662d1bc8ac105) {
      if (lVar4 == 0x35784f121d841815) {
        local_200 = local_128 + 1;
        lVar2 = 0x64a0329dd7075a59;
        if (local_200 != param_3) {
          lVar2 = -0x79be71821bcc0083;
        }
      }
      else {
        lVar2 = -0x7e3d4c00ba503696;
        if ((lVar4 != 0x37d715f46239269f) && (lVar2 = lVar4, lVar4 == 0x3873ff0031aaf7d3)) {
          lVar2 = 0x16725ef7c095b94f;
        }
      }
      goto LAB_00162f58;
    }
    if (lVar4 == 0x3ef662d1bc8ac105) {
      local_1d8 = local_130;
      lVar2 = 0x63113ebfe7285c90;
      if (local_130 != 0) {
        lVar2 = 0x46242c072386470f;
      }
      local_c8 = local_148;
      goto LAB_00162f58;
    }
    if (lVar4 == 0x3f02a2d5be72d3ac) {
      local_1b0 = local_100 + 1;
      lVar2 = -0x728a2ba84aa92c9b;
      if (local_1b0 != param_3) {
        lVar2 = -0x32dae319b619a41e;
      }
      goto LAB_00162f58;
    }
    if (lVar4 != 0x4224543afe766946) goto LAB_00162f58;
  }
  else {
    if (lVar4 < 0x63113ebfe7285c90) {
      if (lVar4 < 0x56961558c5e24552) {
        if (lVar4 == 0x528627640f106458) {
          local_178 = *(long *)(param_2 + local_d8 * 8);
          lVar2 = -0x3a86e5344e5ae2f9;
          if (local_178 != 0) {
            lVar2 = 0x6093bad8c776c03a;
          }
        }
        else {
          lVar2 = -0x2944532e29768439;
          if ((lVar4 != 0x5456b2b0dd693cfd) && (lVar2 = lVar4, lVar4 == 0x549e13da9ff21fb3)) {
            lVar2 = -0x2944532e29768439;
          }
        }
      }
      else if (lVar4 < 0x6093bad8c776c03a) {
        if (lVar4 == 0x56961558c5e24552) {
          local_1b8 = param_1[7];
          lVar2 = 0x37d715f46239269f;
          if (local_1b8 != 0) {
            lVar2 = 0x14d1c0389661961b;
          }
        }
        else if (lVar4 == 0x59bb356fbf425eb9) {
          local_1c8 = local_108 + 1;
          lVar2 = -0x58feabef156b2317;
          if (local_1c8 != param_3) {
            lVar2 = -0x797073ce46f1afb6;
          }
        }
      }
      else if (lVar4 == 0x6093bad8c776c03a) {
        iVar3 = FUN_001e17a8(local_218,local_178);
        lVar2 = -0x5e43c343e09d751a;
        if (iVar3 != 0) {
          lVar2 = 0x4480fce709d670e8;
        }
      }
      else if (lVar4 == 0x6265dbfa6ddb1ae3) {
        local_1c0 = *(long *)(param_2 + local_108 * 8);
        lVar2 = 0x7c06c502cc49a6ae;
        if (local_1c0 != 0) {
          lVar2 = -0x27df449cda8a941d;
        }
      }
      goto LAB_00162f58;
    }
    if (0x6ed8c5b648393726 < lVar4) {
      if (lVar4 < 0x75662046808fc8f6) {
        lVar2 = -0x73c8ecc5ac850673;
        if ((lVar4 != 0x6ed8c5b648393727) && (lVar2 = lVar4, lVar4 == 0x6fb1c5aff8dc1e0a)) {
          local_170 = param_1[4];
          lVar2 = -0x1d8ad965ef6ea278;
          if (local_170 != 0) {
            lVar2 = -0x7b0b7ad66736c0f7;
          }
        }
      }
      else if (lVar4 == 0x75662046808fc8f6) {
        local_1f8 = *(long *)(param_2 + local_128 * 8);
        lVar2 = -0x506c925b673d197d;
        if (local_1f8 != 0) {
          lVar2 = -0x22a711ff7029119d;
        }
      }
      else if (lVar4 == 0x7c06c502cc49a6ae) {
        lVar2 = 0x59bb356fbf425eb9;
      }
      goto LAB_00162f58;
    }
    lVar2 = 0x16725ef7c095b94f;
    if (((lVar4 == 0x63113ebfe7285c90) || (lVar2 = -0x27997180da07f21e, lVar4 == 0x64a0329dd7075a59)
        ) || (lVar2 = lVar4, lVar4 != 0x6adfaebc905e74b5)) goto LAB_00162f58;
  }
LAB_00162f44:
  lVar2 = -0x1837a164699dfd16;
  unaff_w19 = 1;
  goto LAB_00162f58;
}

