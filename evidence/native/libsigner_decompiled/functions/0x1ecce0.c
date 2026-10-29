// rea decompile_all
// name: FUN_001ecce0
// address: 0x1ecce0
// body: available
// range: 0x1ecce0-0x1ef4b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1ef4b0 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_001ecce0(ulong param_1,long param_2,long param_3,ulong param_4,ulong param_5,ulong param_6
                  ,undefined8 param_7,ulong param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
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
  bool bVar17;
  int iVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong in_x13;
  ulong uVar28;
  ulong in_x15;
  ulong uVar29;
  ulong in_x16;
  ulong uVar30;
  ulong uVar31;
  ulong unaff_x26;
  ulong uVar32;
  ulong local_af0;
  ulong local_ae8;
  ulong local_ae0;
  ulong local_ad8;
  ulong local_ad0;
  ulong local_ac8;
  ulong local_ac0;
  ulong local_ab8;
  ulong local_ab0;
  ulong local_aa8;
  byte local_a9c;
  ulong local_a98;
  ulong local_a90;
  ulong local_a88;
  ulong local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  ulong local_a50;
  ulong local_a48;
  ulong local_a40;
  ulong local_a38;
  ulong local_a30;
  ulong local_a28;
  ulong local_a20;
  ulong local_a18;
  ulong local_a10;
  ulong local_a08;
  ulong local_a00;
  ulong local_9f8;
  ulong local_9f0;
  ulong local_9e8;
  ulong local_9e0;
  ulong local_9d8;
  ulong local_9c0;
  ulong local_9b8;
  ulong local_9b0;
  ulong local_9a8;
  ulong local_9a0;
  ulong local_998;
  ulong local_990;
  ulong local_988;
  ulong local_980;
  ulong local_978;
  ulong local_970;
  ulong local_968;
  ulong local_960;
  ulong local_930;
  ulong local_928;
  ulong local_920;
  ulong local_918;
  ulong local_910;
  ulong local_908;
  ulong local_900;
  ulong local_8f8;
  ulong local_8f0;
  ulong local_8e8;
  ulong local_8e0;
  ulong local_8c8;
  ulong local_8c0;
  ulong local_8b8;
  ulong local_8b0;
  ulong local_8a8;
  ulong local_8a0;
  ulong local_898;
  ulong auStack_890 [256];
  ulong local_90 [6];
  
  local_a78 = 0;
  local_a70 = 0;
  lVar6 = tpidr_el0;
  local_90[4] = *(long *)(lVar6 + 0x28);
  uVar1 = 0xed4378afd4d50792;
  if ((long)param_4 <= (long)(param_2 - param_1)) {
    uVar1 = 0xd8fe0846a86e956a;
  }
  uVar2 = 0x55dcd19dee737a1a;
  if (param_4 != 0) {
    uVar2 = 0xd14700cedc0a1544;
  }
  uVar3 = 0xa6454b078cdf6a1e;
  uVar7 = 0xa952fa75448bcb41;
  if (param_4 == 0 || param_4 - 1 == 0) {
    uVar3 = 0x4101bf80446bdc20;
    uVar7 = 0xd1a28e2b92bbcc90;
  }
  local_90[1] = 0;
  local_90[0] = 0;
  local_90[3] = 0;
  local_90[2] = 0;
  uVar27 = 0x54c2b837d86711b8;
  uVar14 = uVar3;
  uVar31 = 0xa952fa75448bcb41;
  uVar15 = local_8c0;
  uVar16 = local_8b8;
LAB_001ece58:
  local_8b8 = uVar16;
  local_8c0 = uVar15;
  uVar32 = unaff_x26;
  uVar30 = in_x16;
  uVar29 = in_x15;
  uVar28 = in_x13;
  uVar26 = uVar31;
  uVar24 = uVar14;
  uVar23 = param_8;
  uVar22 = uVar27;
  uVar21 = param_6;
  uVar20 = param_5;
  uVar13 = local_898;
  uVar12 = local_8a0;
  uVar11 = local_8a8;
  uVar10 = local_8b0;
  uVar9 = local_8b8;
  uVar25 = local_8c0;
  uVar8 = local_8c8;
  uVar27 = uVar22;
  param_5 = uVar20;
  param_6 = uVar21;
  param_8 = uVar23;
  uVar14 = uVar24;
  uVar31 = uVar26;
  in_x13 = uVar28;
  in_x15 = uVar29;
  in_x16 = uVar30;
  unaff_x26 = uVar32;
  uVar15 = uVar25;
  uVar16 = uVar9;
  if ((long)uVar22 < -0x12bc87502b2af86e) {
    if ((long)uVar22 < -0x4c94198a9ad36397) {
      if ((long)uVar22 < -0x5f20efb5b92e6f74) {
        if ((long)uVar22 < -0x76ca62710947274b) {
          uVar27 = 0x3485297baf428faf;
          in_x15 = local_988;
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
          if (uVar22 != 0x81c9619a76458719) {
            if (uVar22 == 0x8243cdd12671c505) {
              uVar27 = 0x89359d8ef6b8d8b5;
              in_x15 = uVar29;
              if (local_a78._4_4_ <= local_a70._4_4_) {
                uVar27 = 0x62ccc994e2cb7da3;
              }
            }
            else {
              uVar27 = uVar22;
              uVar25 = local_ab8;
              in_x15 = uVar29;
              if (uVar22 == 0x8682509a6d1bddd3) {
LAB_001ee5e8:
                uVar27 = 0x5ebfca74eead21cf;
                in_x15 = uVar29;
                local_a18 = uVar25;
                local_8c8 = uVar8;
                local_8b0 = uVar10;
                local_8a8 = uVar11;
                local_8a0 = uVar12;
                local_898 = uVar13;
              }
            }
          }
          goto LAB_001ece58;
        }
        if (-0x6e4a13fb3d707c88 < (long)uVar22) {
          if (uVar22 == 0x91b5ec04c28f8379) {
            local_9e0 = local_908 + local_8f8;
            local_9f0 = local_908;
            local_9e8 = local_8f8;
            uVar27 = 0x4b73c4e968047988;
            if (param_4 <= local_9e0) {
              uVar27 = 0x361985fb5d496b76;
            }
            local_968 = local_910;
            local_960 = local_900;
            local_8c8 = uVar8;
            local_8b0 = uVar10;
            local_8a8 = uVar11;
            local_8a0 = uVar12;
            local_898 = uVar13;
          }
          else {
            local_8c8 = uVar8;
            local_8b0 = uVar10;
            local_8a8 = uVar11;
            local_8a0 = uVar12;
            local_898 = uVar13;
            if (uVar22 == 0x9a5ce19cd8cc78d8) {
              local_8e8 = 0;
              uVar27 = local_a00;
              if (local_a00 <= ~local_a00 + param_4) {
                uVar27 = ~local_a00 + param_4;
              }
              local_8f0 = uVar27 + 1;
LAB_001eeb34:
              uVar27 = 0xa0df104a46d1908c;
              local_8c8 = uVar8;
              local_8b0 = uVar10;
              local_8a8 = uVar11;
              local_8a0 = uVar12;
              local_898 = uVar13;
            }
          }
          goto LAB_001ece58;
        }
        if (uVar22 != 0x89359d8ef6b8d8b5) {
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
          if (uVar22 == 0x8bb818770b2cd537) {
            bVar17 = local_a08 == local_990;
            uVar25 = 0xca62b1ef4c4443c4;
            uVar27 = 0xaf1ab327f0d9ace8;
LAB_001ed6c8:
            local_8c8 = uVar8;
            local_8b0 = uVar10;
            local_8a8 = uVar11;
            local_8a0 = uVar12;
            local_898 = uVar13;
            if (!bVar17) {
              uVar27 = uVar25;
            }
          }
          goto LAB_001ece58;
        }
        local_918 = local_ac0 - local_9a0;
        local_920 = local_ac0;
        local_930 = local_9a0;
        local_928 = 1;
      }
      else {
        if ((long)uVar22 < -0x56ad058abb7434bf) {
          param_5 = local_8f0;
          param_6 = local_8e8;
          uVar27 = uVar1;
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
          if (((uVar22 != 0xa0df104a46d1908c) &&
              (param_5 = uVar20, param_6 = uVar21, uVar27 = 0x3485297baf428faf, in_x15 = local_980,
              uVar22 != 0xa1122837683f12d6)) &&
             (uVar27 = uVar22, in_x15 = uVar29, uVar22 == 0xa6454b078cdf6a1e)) {
            local_8a0 = 0;
            local_8a8 = 0xffffffffffffffff;
            local_898 = 1;
            uVar27 = 0x3cd27908c3b8e652;
            uVar31 = 1;
            in_x16 = 1;
          }
          goto LAB_001ece58;
        }
        if ((long)uVar22 < -0x5412c5352f1dc37a) {
          if (uVar22 == 0xa952fa75448bcb41) {
            local_a30 = 0xffffffffffffffff;
            local_a28 = 0;
            local_a48 = 1;
            local_a40 = 1;
            local_a50 = 1;
            goto LAB_001ef3cc;
          }
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
          if (uVar22 == 0xaa78350f0036093c) {
            local_900 = local_9b0;
            local_8f8 = local_9b0 + 1;
            local_908 = 1;
            local_910 = 1;
            goto LAB_001ece44;
          }
          goto LAB_001ece58;
        }
        uVar27 = uVar7;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if ((uVar22 == 0xabed3acad0e23c86) || (uVar27 = uVar22, uVar22 != 0xaf1ab327f0d9ace8))
        goto LAB_001ece58;
        local_920 = local_998 + local_990;
        local_918 = local_990;
        local_930 = local_9a0;
        local_928 = 1;
      }
LAB_001ef364:
      uVar27 = 0x24e5eef263e81b7c;
      local_8c8 = uVar8;
      local_8b0 = uVar10;
      local_8a8 = uVar11;
      local_8a0 = uVar12;
      local_898 = uVar13;
      goto LAB_001ece58;
    }
    if ((long)uVar22 < -0x2eb8ff3123f5eabc) {
      if ((long)uVar22 < -0x3ea1661ac6a1c4db) {
        uVar27 = 0xa1122837683f12d6;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 != 0xb36be675652c9c69) {
          if (uVar22 == 0xbd6484722152868a) {
            if (local_8b8 + 1 <= local_8b0 + 1) {
              local_8b8 = local_8b0;
              local_8c0 = local_8c8;
            }
            local_980 = local_8b8 + 1;
            iVar18 = FUN_001e3668(param_3,param_3 + local_8c0);
            uVar27 = 0xf111d00f6a8edda;
            local_a88 = local_8c0;
            local_a00 = local_8b8;
            if (iVar18 != 0) {
              uVar27 = 0x9a5ce19cd8cc78d8;
            }
          }
          else {
            uVar27 = uVar22;
            if (uVar22 == 0xbff1c80c3556854c) {
              local_a30 = local_970;
              local_a28 = local_ad0;
              local_a48 = local_978;
              local_a40 = local_ad8;
              local_a50 = local_a80;
LAB_001ef3cc:
              uVar27 = 0x54cc8c62117e2258;
              local_8c8 = uVar8;
              local_8b0 = uVar10;
              local_8a8 = uVar11;
              local_8a0 = uVar12;
              local_898 = uVar13;
            }
          }
        }
        goto LAB_001ece58;
      }
      if (-0x359d4e10b3bbbc3d < (long)uVar22) {
        if (uVar22 == 0xca62b1ef4c4443c4) {
          local_928 = local_a08 + 1;
          local_918 = local_990;
          local_920 = local_998;
          local_930 = local_9a0;
          goto LAB_001ef364;
        }
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0xce7f13e2503182ae) {
          local_ab0 = local_8e0 + uVar32;
          uVar27 = 0xd2dc4161bf6d11ab;
          local_ae8 = uVar28;
          if ((long)param_4 <= (long)(param_2 - local_ab0)) {
            uVar27 = 0x5ad71f292518d033;
          }
        }
        goto LAB_001ece58;
      }
      if (uVar22 != 0xc15e99e5395e3b25) {
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0xc9e6c9135374767a) {
          bVar17 = local_a20 == local_9a8;
          uVar25 = 0xbccd62a0fc32d;
          uVar27 = 0xfe8e69348b81073b;
          goto LAB_001ed6c8;
        }
        goto LAB_001ece58;
      }
      unaff_x26 = local_a38 - local_a00;
    }
    else {
      if ((long)uVar22 < -0x244c08061ede3ca6) {
        if ((long)uVar22 < -0x2d23be9e4092ee55) {
          if (uVar22 == 0xd14700cedc0a1544) {
            uVar27 = 0x53e14c28908eeeeb;
            param_8 = 0;
            local_8c8 = uVar8;
            local_8b0 = uVar10;
            local_8a8 = uVar11;
            local_8a0 = uVar12;
            local_898 = uVar13;
          }
          else {
            local_8c8 = uVar8;
            local_8b0 = uVar10;
            local_8a8 = uVar11;
            local_8a0 = uVar12;
            local_898 = uVar13;
            if (uVar22 == 0xd1a28e2b92bbcc90) {
              local_8b0 = 0xffffffffffffffff;
              local_8c8 = 1;
              goto LAB_001edcf0;
            }
          }
        }
        else if (uVar22 == 0xd2dc4161bf6d11ab) {
LAB_001eec70:
          uVar27 = 0x39a16bddf8dc82a2;
          uVar14 = 0;
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
        }
        else {
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
          if (uVar22 == 0xd8fe0846a86e956a) {
            local_a9c = uVar21 != 0;
            local_aa8 = param_4 - uVar20;
            local_9f8 = 0;
            uVar27 = 0x1b4ac2f1f22e2589;
            local_a10 = param_1;
          }
        }
        goto LAB_001ece58;
      }
      if ((long)uVar22 < -0x1f81af14a263eaa3) {
        uVar27 = uVar3;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if ((uVar22 != 0xdbb3f7f9e121c35a) && (uVar27 = uVar22, uVar22 == 0xde3bbde8319e4138)) {
          local_ac8 = local_980;
          if (local_980 <= local_9c0) {
            local_ac8 = local_9c0;
          }
          uVar27 = 0x61d9685814f9d681;
          if (param_4 <= local_ac8) {
            uVar27 = 0xb36be675652c9c69;
          }
        }
        goto LAB_001ece58;
      }
      unaff_x26 = param_4;
      if (uVar22 != 0xe07e50eb5d9c155d) {
        unaff_x26 = uVar32;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0xebb5292211db659e) {
          uVar27 = 0x11389729d7590b94;
          if ((uint)local_a70 <= (uint)local_a78) {
            uVar27 = 0xaa78350f0036093c;
          }
        }
        goto LAB_001ece58;
      }
    }
LAB_001ef2a8:
    uVar27 = 0xce7f13e2503182ae;
    in_x13 = 0;
    local_8c8 = uVar8;
    local_8b0 = uVar10;
    local_8a8 = uVar11;
    local_8a0 = uVar12;
    local_898 = uVar13;
    goto LAB_001ece58;
  }
  if (0x54c2b837d86711b7 < (long)uVar22) {
    if ((long)uVar22 < 0x6230bf87be098d5d) {
      if ((long)uVar22 < 0x57cabee7967ab664) {
        uVar27 = uVar2;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 != 0x54c2b837d86711b8) {
          if (uVar22 == 0x54cc8c62117e2258) {
            cVar5 = *(char *)(param_3 + local_a40 + local_a30);
            local_a70 = (ulong)CONCAT14(*(char *)(param_3 + local_a50),(uint)local_a70);
            local_a78 = (ulong)CONCAT14(cVar5,(uint)local_a78);
            local_ac0 = local_a50;
            local_990 = local_a48;
            local_a08 = local_a40;
            uVar27 = 0x8bb818770b2cd537;
            if (cVar5 != *(char *)(param_3 + local_a50)) {
              uVar27 = 0x8243cdd12671c505;
            }
            local_9a0 = local_a30;
            local_998 = local_a28;
          }
          else {
            uVar27 = uVar22;
            if (uVar22 == 0x55dcd19dee737a1a) {
              local_8b0 = 0xffffffffffffffff;
              local_8c8 = 1;
LAB_001edcf0:
              local_8b8 = 0xffffffffffffffff;
              local_8c0 = 1;
              uVar27 = 0xbd6484722152868a;
              uVar15 = local_8c0;
              uVar16 = local_8b8;
              local_8a8 = uVar11;
              local_8a0 = uVar12;
              local_898 = uVar13;
            }
          }
        }
      }
      else if ((long)uVar22 < 0x5ebfca74eead21cf) {
        uVar27 = 0x39a16bddf8dc82a2;
        uVar14 = local_8e0;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if ((uVar22 != 0x57cabee7967ab664) &&
           (uVar27 = uVar22, uVar14 = uVar24, uVar22 == 0x5ad71f292518d033)) {
          local_9f8 = local_ae8;
          local_a10 = local_ab0;
          uVar27 = 0x1b4ac2f1f22e2589;
        }
      }
      else if (uVar22 == 0x5ebfca74eead21cf) {
        local_a38 = local_a18;
        uVar27 = 0x78ac43fddd7c64db;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (*(char *)(param_3 + local_a18) != *(char *)(local_8e0 + local_a18)) {
          uVar27 = 0xc15e99e5395e3b25;
        }
      }
      else {
        uVar25 = local_ac8;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0x61d9685814f9d681) goto LAB_001ee5e8;
      }
    }
    else if ((long)uVar22 < 0x727aabeac1ff5013) {
      if (uVar22 == 0x6230bf87be098d5d) {
        local_988 = local_af0 - 1;
        uVar27 = 0x81c9619a76458719;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (*(char *)(param_3 + local_988) != *(char *)(local_8e0 + local_988)) {
          uVar27 = 0x7bca060775e09e1e;
        }
      }
      else {
        if (uVar22 == 0x62ccc994e2cb7da3) {
          local_920 = local_998 + 1;
          local_918 = 1;
          local_928 = 1;
          local_930 = local_998;
          goto LAB_001ef364;
        }
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0x6bbc6b8cc56478f1) {
          unaff_x26 = local_aa8;
          if ((local_a9c & local_9c0 != 0 & param_4 - local_a98 < uVar20) == 0) {
            unaff_x26 = param_4 - local_a98;
          }
          goto LAB_001ef2a8;
        }
      }
    }
    else if ((long)uVar22 < 0x7bca060775e09e1e) {
      uVar27 = 0xa1122837683f12d6;
      local_8c8 = uVar8;
      local_8b0 = uVar10;
      local_8a8 = uVar11;
      local_8a0 = uVar12;
      local_898 = uVar13;
      if ((uVar22 != 0x727aabeac1ff5013) && (uVar27 = uVar22, uVar22 == 0x78ac43fddd7c64db)) {
        local_ab8 = local_a38 + 1;
        uVar27 = 0x727aabeac1ff5013;
        if (local_ab8 != param_4) {
          uVar27 = 0x8682509a6d1bddd3;
        }
      }
    }
    else {
      uVar27 = 0xce7f13e2503182ae;
      in_x13 = uVar21;
      unaff_x26 = uVar20;
      local_8c8 = uVar8;
      local_8b0 = uVar10;
      local_8a8 = uVar11;
      local_8a0 = uVar12;
      local_898 = uVar13;
      if ((uVar22 != 0x7bca060775e09e1e) &&
         (uVar27 = uVar22, in_x13 = uVar28, unaff_x26 = uVar32, uVar22 == 0x7ffb850a0e6ed38d)) {
        local_a98 = auStack_890[local_a90];
        uVar27 = 0xde3bbde8319e4138;
        if (local_a98 != param_4) {
          uVar27 = 0x6bbc6b8cc56478f1;
        }
      }
    }
    goto LAB_001ece58;
  }
  if (0x24e5eef263e81b7b < (long)uVar22) {
    if ((long)uVar22 < 0x3cd27908c3b8e652) {
      if ((long)uVar22 < 0x361985fb5d496b76) {
        if (uVar22 == 0x24e5eef263e81b7c) {
          local_a80 = local_920 + local_928;
          local_ad8 = local_928;
          local_ad0 = local_920;
          uVar27 = 0xbff1c80c3556854c;
          if (param_4 <= local_a80) {
            uVar27 = 0xdbb3f7f9e121c35a;
          }
          local_978 = local_918;
          local_970 = local_930;
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
        }
        else {
          local_8c8 = uVar8;
          local_8b0 = uVar10;
          local_8a8 = uVar11;
          local_8a0 = uVar12;
          local_898 = uVar13;
          if (uVar22 == 0x3485297baf428faf) {
            uVar27 = 0x6230bf87be098d5d;
            local_af0 = uVar29;
            if (uVar29 <= local_9c0) {
              uVar27 = 0x57cabee7967ab664;
            }
          }
        }
      }
      else {
        local_8c8 = local_978;
        local_8b0 = local_970;
        local_8b8 = local_960;
        local_8c0 = local_968;
        uVar27 = 0xbd6484722152868a;
        uVar15 = local_8c0;
        uVar16 = local_8b8;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if ((uVar22 != 0x361985fb5d496b76) &&
           (uVar27 = uVar22, local_8c8 = uVar8, uVar15 = uVar25, uVar16 = uVar9, local_8b0 = uVar10,
           uVar22 == 0x39a16bddf8dc82a2)) {
          if (*(long *)(lVar6 + 0x28) != local_90[4]) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return uVar24;
        }
      }
    }
    else if ((long)uVar22 < 0x4b73c4e968047988) {
      if (uVar22 == 0x3cd27908c3b8e652) {
        uVar19 = (uint)*(byte *)(param_3 + local_8a8 + local_898);
        local_a78 = CONCAT44(local_a78._4_4_,uVar19);
        local_a70 = CONCAT44(local_a70._4_4_,(uint)*(byte *)(param_3 + uVar26));
        uVar27 = 0xc9e6c9135374767a;
        if (uVar19 != *(byte *)(param_3 + uVar26)) {
          uVar27 = 0xebb5292211db659e;
        }
        local_9b0 = local_8a0;
        local_a20 = local_898;
        local_9b8 = local_8a8;
        local_ae0 = uVar26;
        local_9a8 = uVar30;
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
      }
      else {
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0x4101bf80446bdc20) {
          local_8c8 = local_978;
          local_8b0 = local_970;
          goto LAB_001edcf0;
        }
      }
    }
    else {
      local_898 = local_9f0;
      local_8a0 = local_9e8;
      local_8a8 = local_960;
      uVar27 = 0x3cd27908c3b8e652;
      uVar31 = local_9e0;
      in_x16 = local_968;
      local_8c8 = uVar8;
      local_8b0 = uVar10;
      if ((uVar22 != 0x4b73c4e968047988) &&
         (uVar27 = uVar22, uVar31 = uVar26, in_x16 = uVar30, local_8a8 = uVar11, local_8a0 = uVar12,
         local_898 = uVar13, uVar22 == 0x53e14c28908eeeeb)) {
        bVar4 = *(byte *)(param_3 + uVar23);
        local_9d8 = uVar23 + 1;
        uVar31 = (ulong)(bVar4 >> 3) & 0x18;
        uVar27 = 0xabed3acad0e23c86;
        if (local_9d8 != param_4) {
          uVar27 = 0xfbd7ef6ff797a0b8;
        }
        *(ulong *)((long)local_90 + uVar31) =
             1L << ((ulong)bVar4 & 0x3f) | *(ulong *)((long)local_90 + uVar31);
        auStack_890[bVar4] = local_9d8;
        uVar31 = uVar26;
      }
    }
    goto LAB_001ece58;
  }
  if ((long)uVar22 < 0xbccd62a0fc32d) {
    if (uVar22 == 0xed4378afd4d50792) goto LAB_001eec70;
    uVar27 = 0x53e14c28908eeeeb;
    param_8 = local_9d8;
    local_8c8 = uVar8;
    local_8b0 = uVar10;
    local_8a8 = uVar11;
    local_8a0 = uVar12;
    local_898 = uVar13;
    if ((uVar22 == 0xfbd7ef6ff797a0b8) ||
       (uVar27 = uVar22, param_8 = uVar23, uVar22 != 0xfe8e69348b81073b)) goto LAB_001ece58;
    local_910 = local_9a8;
    local_8f8 = local_9b0 + local_9a8;
    local_900 = local_9b8;
    local_908 = 1;
  }
  else {
    if ((long)uVar22 < 0x11389729d7590b94) {
      if (uVar22 != 0xbccd62a0fc32d) {
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0xf111d00f6a8edda) {
          local_8e8 = param_4 - local_a88;
          local_8f0 = local_a88;
          goto LAB_001eeb34;
        }
        goto LAB_001ece58;
      }
      local_908 = local_a20 + 1;
      local_8f8 = local_9b0;
      local_910 = local_9a8;
    }
    else {
      if (uVar22 != 0x11389729d7590b94) {
        local_8c8 = uVar8;
        local_8b0 = uVar10;
        local_8a8 = uVar11;
        local_8a0 = uVar12;
        local_898 = uVar13;
        if (uVar22 == 0x1b4ac2f1f22e2589) {
          local_8e0 = local_a10;
          bVar4 = *(byte *)(local_a10 + (param_4 - 1));
          local_a90 = (ulong)bVar4;
          local_9c0 = local_9f8;
          uVar27 = 0xe07e50eb5d9c155d;
          if ((*(ulong *)((long)local_90 + ((ulong)(bVar4 >> 3) & 0x18)) >> (local_a90 & 0x3f) & 1)
              != 0) {
            uVar27 = 0x7ffb850a0e6ed38d;
          }
        }
        goto LAB_001ece58;
      }
      local_910 = local_ae0 - local_9b8;
      local_8f8 = local_ae0;
      local_908 = 1;
    }
    local_900 = local_9b8;
  }
LAB_001ece44:
  uVar27 = 0x91b5ec04c28f8379;
  param_8 = uVar23;
  local_8c8 = uVar8;
  local_8b0 = uVar10;
  local_8a8 = uVar11;
  local_8a0 = uVar12;
  local_898 = uVar13;
  goto LAB_001ece58;
}

