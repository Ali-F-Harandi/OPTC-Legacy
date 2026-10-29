// rea decompile_all
// name: FUN_001f0674
// address: 0x1f0674
// body: available
// range: 0x1f0674-0x1f351b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f3518 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

byte * FUN_001f0674(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5,
                   undefined8 param_6,byte *param_7,byte *param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  uint uVar28;
  byte *pbVar29;
  byte *in_x10;
  byte *pbVar30;
  byte *pbVar31;
  byte *in_x11;
  byte *pbVar32;
  byte *in_x12;
  byte *pbVar33;
  byte *pbVar34;
  byte *in_x14;
  byte *pbVar35;
  byte *in_x16;
  byte *pbVar36;
  ulong uVar37;
  byte *unaff_x28;
  byte *pbVar38;
  byte *unaff_x30;
  byte *pbVar39;
  byte *local_b18;
  byte *local_b10;
  byte *local_b08;
  byte *local_b00;
  byte *local_af8;
  byte *local_af0;
  byte *local_ae8;
  byte *local_ae0;
  byte *local_ad8;
  byte *local_ad0;
  ulong local_ac8;
  byte *local_ac0;
  byte *local_ab8;
  byte *local_ab0;
  byte local_aa4;
  uint local_a94;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  byte *local_a68;
  byte *local_a60;
  byte *local_a58;
  byte *local_a50;
  byte *local_a48;
  byte *local_a40;
  byte *local_a38;
  byte *local_a30;
  byte *local_a28;
  byte *local_a20;
  byte *local_a18;
  byte *local_a10;
  byte *local_a08;
  ulong local_a00;
  byte *local_9f8;
  byte *local_9f0;
  byte *local_9e8;
  byte *local_9e0;
  byte *pbStack_9d8;
  byte *local_9d0;
  byte *pbStack_9c8;
  byte *local_9c0;
  byte *local_9b8;
  byte *local_9b0;
  undefined8 local_9a8;
  byte *local_9a0;
  byte *local_998;
  byte *local_990;
  byte *local_988;
  byte *local_980;
  byte *local_978;
  byte *local_970;
  byte *local_968;
  byte *local_960;
  byte *local_958;
  byte *local_950;
  byte *local_948;
  byte *local_940;
  byte *local_938;
  byte *local_930;
  byte *local_928;
  byte *local_920;
  byte *local_918;
  byte *local_910;
  byte *local_908;
  byte *local_900;
  byte *local_8e8;
  byte *local_8e0;
  byte *local_8d8;
  byte *local_8a0;
  byte *local_898;
  long alStack_890 [256];
  ulong local_90 [6];
  
  local_a80 = 0;
  local_a94 = 0;
  local_a90 = 0;
  local_a88 = 0;
  local_9a8 = 0;
  lVar4 = tpidr_el0;
  local_90[4] = *(long *)(lVar4 + 0x28);
  bVar3 = *param_2;
  local_90[1] = 0;
  local_90[0] = 0;
  local_90[3] = 0;
  local_90[2] = 0;
  pbVar7 = param_2;
  pbVar8 = param_3;
  pbVar9 = param_4;
  pbVar10 = param_5;
  pbVar2 = (byte *)0xed1f071ea6fe1ede;
  pbVar11 = param_7;
  pbVar12 = param_8;
  pbVar13 = (byte *)0x5eda44100212fa2c;
  pbVar31 = in_x10;
  pbVar14 = in_x11;
  pbVar15 = in_x12;
  pbVar16 = in_x14;
  pbVar17 = in_x16;
  pbVar18 = unaff_x28;
  pbVar19 = unaff_x30;
  uVar20 = 0;
  pbVar1 = (byte *)0x5eda44100212fa2c;
  if (bVar3 != 0) {
    pbVar7 = param_2;
    pbVar8 = param_3;
    pbVar9 = param_4;
    pbVar10 = param_5;
    pbVar11 = param_7;
    pbVar12 = param_8;
    pbVar13 = (byte *)0xbfa497f00132becf;
    pbVar31 = in_x10;
    pbVar14 = in_x11;
    pbVar15 = in_x12;
    pbVar16 = in_x14;
    pbVar17 = in_x16;
    pbVar18 = unaff_x28;
    pbVar19 = unaff_x30;
    pbVar1 = (byte *)0xbfa497f00132becf;
  }
LAB_001f077c:
  uVar28 = uVar20;
  pbVar39 = pbVar19;
  pbVar38 = pbVar18;
  pbVar36 = pbVar17;
  pbVar35 = pbVar16;
  pbVar33 = pbVar15;
  pbVar32 = pbVar14;
  pbVar30 = pbVar31;
  pbVar29 = pbVar13;
  pbVar27 = pbVar12;
  pbVar26 = pbVar11;
  pbVar25 = pbVar2;
  pbVar24 = pbVar10;
  pbVar23 = pbVar9;
  pbVar22 = pbVar8;
  pbVar34 = pbVar7;
  pbVar6 = local_898;
  pbVar5 = local_8a0;
  pbVar2 = pbVar25;
  pbVar7 = pbVar34;
  pbVar8 = pbVar22;
  pbVar9 = pbVar23;
  pbVar10 = pbVar24;
  pbVar11 = pbVar26;
  pbVar12 = pbVar27;
  pbVar13 = pbVar29;
  pbVar31 = pbVar30;
  pbVar14 = pbVar32;
  pbVar15 = pbVar33;
  pbVar16 = pbVar35;
  pbVar17 = pbVar36;
  pbVar18 = pbVar38;
  pbVar19 = pbVar39;
  uVar20 = uVar28;
  if ((long)pbVar25 < -0x1f81af14a263eaa3) {
    if ((long)pbVar25 < -0x405b680ffecd4131) {
      if (-0x5eedd7c897c0ed2b < (long)pbVar25) {
        if ((long)pbVar25 < -0x5412c5352f1dc37a) {
          if ((long)pbVar25 < -0x56ad058abb7434bf) {
            pbVar2 = (byte *)0xd2dc4161bf6d11ab;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if ((pbVar25 != (byte *)0xa1122837683f12d6) &&
               (pbVar2 = pbVar25, pbVar25 == (byte *)0xa6454b078cdf6a1e)) {
              local_948 = local_970 + 1;
              local_940 = (byte *)0x1;
              local_930 = local_970;
LAB_001f1ffc:
              local_938 = (byte *)0x1;
LAB_001f2fc0:
              pbVar2 = (byte *)0x54cc8c62117e2258;
              local_8a0 = pbVar5;
              local_898 = pbVar6;
            }
          }
          else if (pbVar25 == (byte *)0xa952fa75448bcb41) {
            pbVar2 = (byte *)0x53e14c28908eeeeb;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if (local_a38 != local_968) {
              pbVar2 = (byte *)0xfbd7ef6ff797a0b8;
            }
          }
          else {
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if (pbVar25 == (byte *)0xaa78350f0036093c) {
              local_a00 = (ulong)local_8e0 | 0x3f;
              local_ac0 = local_8e0 + -1;
              local_9f0 = (byte *)0x0;
              local_9e0 = local_9e8;
              pbStack_9d8 = local_a10;
              local_a28 = param_1;
              local_9f8 = param_1;
              goto LAB_001f257c;
            }
          }
        }
        else if ((long)pbVar25 < -0x4c94198a9ad36397) {
          if (pbVar25 == (byte *)0xabed3acad0e23c86) {
            local_a18 = (byte *)0xffffffffffffffff;
            local_a50 = (byte *)0x1;
            local_a48 = (byte *)0x1;
            local_a30 = (byte *)0x0;
            local_a58 = (byte *)0x1;
LAB_001f318c:
            pbVar2 = (byte *)0xaf1ab327f0d9ace8;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
          }
          else {
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if (pbVar25 == (byte *)0xaf1ab327f0d9ace8) {
              local_990 = local_a18;
              local_a40 = local_a48;
              local_af0 = local_a58;
              local_a80 = CONCAT44(local_a80._4_4_,(uint)param_2[(long)local_a58]);
              local_a88 = CONCAT44(local_a88._4_4_,
                                   (uint)param_2[(long)(local_a48 + (long)local_a18)]);
              pbVar2 = (byte *)0xca62b1ef4c4443c4;
              if ((uint)param_2[(long)(local_a48 + (long)local_a18)] !=
                  (uint)param_2[(long)local_a58]) {
                pbVar2 = (byte *)0x62ccc994e2cb7da3;
              }
              local_980 = local_a50;
              local_988 = local_a30;
            }
          }
        }
        else if (pbVar25 == (byte *)0xb36be675652c9c69) {
          local_9b8 = local_a68 + 1;
          local_9a8 = (ulong)CONCAT14(param_2[(long)local_9b8],(uint)local_9a8);
          pbVar2 = (byte *)0xa1122837683f12d6;
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if (param_2[(long)local_9b8] != 0) {
            pbVar2 = (byte *)0x61d9685814f9d681;
          }
        }
        else {
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if (pbVar25 == (byte *)0xbd6484722152868a) {
            pbVar2 = (byte *)0xf111d00f6a8edda;
            if ((long)local_8e0 <= (long)local_950 - (long)local_b08) {
              pbVar2 = (byte *)0x9a5ce19cd8cc78d8;
            }
          }
        }
        goto LAB_001f077c;
      }
      if (-0x7447e788f4d32aca < (long)pbVar25) {
        if ((long)pbVar25 < -0x65a31e6327338728) {
          pbVar9 = local_900;
          pbVar10 = pbStack_9c8;
          pbVar2 = (byte *)0xd1a28e2b92bbcc90;
          pbVar11 = local_9d0;
          pbVar12 = local_908;
          pbVar19 = local_9b0;
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if ((pbVar25 != (byte *)0x8bb818770b2cd537) &&
             (pbVar9 = pbVar23, pbVar10 = pbVar24, pbVar2 = pbVar25, pbVar11 = pbVar26,
             pbVar12 = pbVar27, pbVar19 = pbVar39, pbVar25 == (byte *)0x91b5ec04c28f8379)) {
            local_b08 = local_9f8;
            local_998 = local_a28;
            pbVar2 = (byte *)0x4b73c4e968047988;
            if ((long)local_8e0 <= (long)local_a28 - (long)local_9f8) {
              pbVar2 = (byte *)0x361985fb5d496b76;
            }
            local_9a0 = local_9f0;
            local_8e8 = local_b08;
          }
        }
        else {
          pbVar2 = (byte *)0xed4378afd4d50792;
          pbVar15 = local_950;
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if ((pbVar25 != (byte *)0x9a5ce19cd8cc78d8) &&
             (pbVar2 = pbVar25, pbVar15 = pbVar33, pbVar25 == (byte *)0xa0df104a46d1908c)) {
            pbVar34 = local_998 + local_a00;
LAB_001f2114:
            pbVar2 = (byte *)0xed4378afd4d50792;
            pbVar15 = pbVar34;
            pbVar17 = pbVar36;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
          }
        }
        goto LAB_001f077c;
      }
      if (pbVar25 == (byte *)0x8243cdd12671c505) {
        local_910 = local_988 + (long)local_980;
        local_928 = local_980;
        local_918 = local_990;
        local_920 = (byte *)0x1;
      }
      else {
        pbVar8 = local_8e8;
        pbVar2 = (byte *)0x57cabee7967ab664;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if ((pbVar25 == (byte *)0x8682509a6d1bddd3) ||
           (pbVar8 = pbVar22, pbVar2 = pbVar25, pbVar25 != (byte *)0x89359d8ef6b8d8b5))
        goto LAB_001f077c;
        local_920 = local_a40 + 1;
        local_918 = local_990;
        local_910 = local_988;
        local_928 = local_980;
      }
    }
    else {
      if (-0x2ef756f1c7496e60 < (long)pbVar25) {
        if ((long)pbVar25 < -0x29504ee3cf2d5633) {
          if ((long)pbVar25 < -0x2e5d71d46d443370) {
            if (pbVar25 == (byte *)0xd108a90e38b691a1) {
              local_aa4 = (byte *)0x1 < local_8d8;
              pbVar2 = (byte *)0x483dcbc36ada42c4;
              local_8a0 = pbVar5;
              local_898 = pbVar6;
              if (local_8d8 < (byte *)0x2) {
                pbVar2 = (byte *)0xcb31a60e6206eed1;
              }
            }
            else {
              local_8a0 = pbVar5;
              local_898 = pbVar6;
              if (pbVar25 == (byte *)0xd14700cedc0a1544) {
                pbVar2 = (byte *)0xabed3acad0e23c86;
                if ((local_aa4 & 1) == 0) {
                  pbVar2 = (byte *)0x55dcd19dee737a1a;
                }
              }
            }
          }
          else if (pbVar25 == (byte *)0xd1a28e2b92bbcc90) {
            local_a80 = (ulong)CONCAT14(param_2[(long)pbVar39],(uint)local_a80);
            local_a88 = (ulong)CONCAT14(param_2[(long)(pbVar26 + (long)pbVar23)],(uint)local_a88);
            pbVar2 = (byte *)0xa952fa75448bcb41;
            local_ae0 = pbVar39;
            local_a38 = pbVar26;
            local_978 = pbVar23;
            local_970 = pbVar24;
            local_968 = pbVar27;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if (param_2[(long)(pbVar26 + (long)pbVar23)] != param_2[(long)pbVar39]) {
              pbVar2 = (byte *)0xdbb3f7f9e121c35a;
            }
          }
          else {
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if (pbVar25 == (byte *)0xd2dc4161bf6d11ab) {
              pbVar2 = (byte *)0x78ac43fddd7c64db;
              pbVar17 = local_a20;
            }
          }
        }
        else if ((long)pbVar25 < -0x244c08061ede3ca6) {
          if (pbVar25 == (byte *)0xd6afb11c30d2a9cd) {
            local_ad8 = local_a60;
            pbVar2 = (byte *)0x1db468c64d6a7ed0;
            if (local_a60[(long)param_1] != 0) {
              pbVar2 = (byte *)0xc33cd820d1133e3a;
            }
            local_a94 = (uint)local_9a8;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
          }
          else {
            pbVar34 = local_8e0;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if (pbVar25 == (byte *)0xd8fe0846a86e956a) {
LAB_001f301c:
              pbVar7 = (byte *)0x0;
              pbVar2 = (byte *)0x7ffb850a0e6ed38d;
              pbVar16 = pbVar34;
              local_8a0 = pbVar5;
              local_898 = pbVar6;
            }
          }
        }
        else if (pbVar25 == (byte *)0xdbb3f7f9e121c35a) {
          pbVar2 = (byte *)0x4101bf80446bdc20;
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if (local_a88._4_4_ <= local_a80._4_4_) {
            pbVar2 = (byte *)0xa6454b078cdf6a1e;
          }
        }
        else {
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if (pbVar25 == (byte *)0xde3bbde8319e4138) {
            pbVar2 = (byte *)0xb36be675652c9c69;
            local_a68 = pbVar38;
            if (uVar28 != pbVar38[(long)local_8e8]) {
              pbVar2 = (byte *)0x5ebfca74eead21cf;
            }
          }
        }
        goto LAB_001f077c;
      }
      if (-0x361936ecac8b8987 < (long)pbVar25) {
        if ((long)pbVar25 < -0x34ce59f19df9112f) {
          local_898 = local_908;
          local_8a0 = local_8d8;
          pbVar2 = (byte *)0xbccd62a0fc32d;
          pbVar13 = local_958;
          pbVar31 = local_900;
          pbVar14 = local_960;
          if ((pbVar25 != (byte *)0xc9e6c9135374767a) &&
             (pbVar2 = pbVar25, pbVar13 = pbVar29, pbVar31 = pbVar30, pbVar14 = pbVar32,
             local_8a0 = pbVar5, local_898 = pbVar6, pbVar25 == (byte *)0xca62b1ef4c4443c4)) {
            pbVar2 = (byte *)0x8243cdd12671c505;
            if (local_a40 != local_980) {
              pbVar2 = (byte *)0x89359d8ef6b8d8b5;
            }
          }
        }
        else {
          if (pbVar25 == (byte *)0xcb31a60e6206eed1) {
            local_898 = (byte *)0x1;
            local_8a0 = local_8d8;
            pbVar31 = (byte *)0xffffffffffffffff;
            goto LAB_001f340c;
          }
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if (pbVar25 == (byte *)0xce7f13e2503182ae) {
            pbVar2 = (byte *)0xde3bbde8319e4138;
            pbVar18 = local_ae8;
            uVar20 = (uint)local_a90;
          }
        }
        goto LAB_001f077c;
      }
      if (-0x3ea1661ac6a1c4dc < (long)pbVar25) {
        pbVar7 = local_9e0;
        pbVar2 = (byte *)0x7ffb850a0e6ed38d;
        pbVar16 = pbStack_9d8;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if ((pbVar25 != (byte *)0xc15e99e5395e3b25) &&
           (pbVar7 = pbVar34, pbVar2 = pbVar25, pbVar16 = pbVar35,
           pbVar25 == (byte *)0xc33cd820d1133e3a)) {
          local_8d8 = local_ad8 + 1;
          uVar37 = (ulong)(local_a94 >> 3) & 0x1ffffff8;
          local_a90 = (ulong)CONCAT14(param_2[(long)local_8d8],(uint)local_a90);
          pbVar2 = (byte *)0xd108a90e38b691a1;
          if (param_2[(long)local_8d8] != 0) {
            pbVar2 = (byte *)0x54c2b837d86711b8;
          }
          *(ulong *)((long)local_90 + uVar37) =
               *(ulong *)((long)local_90 + uVar37) | 1L << ((ulong)local_a94 & 0x3f);
          alStack_890[local_a94] = (long)local_8d8;
        }
        goto LAB_001f077c;
      }
      if (pbVar25 == (byte *)0xbfa497f00132becf) {
        local_a60 = (byte *)0x0;
        uVar28 = (uint)bVar3;
        goto LAB_001f3270;
      }
      local_8a0 = pbVar5;
      local_898 = pbVar6;
      if (pbVar25 != (byte *)0xbff1c80c3556854c) goto LAB_001f077c;
      local_910 = local_988 + 1;
      local_918 = local_988;
      local_928 = (byte *)0x1;
LAB_001f1df8:
      local_920 = (byte *)0x1;
    }
    pbVar8 = pbVar22;
    pbVar2 = (byte *)0x3cd27908c3b8e652;
    local_8a0 = pbVar5;
    local_898 = pbVar6;
    goto LAB_001f077c;
  }
  if (0x483dcbc36ada42c3 < (long)pbVar25) {
    if ((long)pbVar25 < 0x5ebfca74eead21cf) {
      if ((long)pbVar25 < 0x54cc8c62117e2258) {
        if ((long)pbVar25 < 0x53e14c28908eeeeb) {
          if (pbVar25 == (byte *)0x483dcbc36ada42c4) {
            pbVar9 = (byte *)0xffffffffffffffff;
            pbVar10 = (byte *)0x0;
            pbVar2 = (byte *)0xd1a28e2b92bbcc90;
            pbVar11 = (byte *)0x1;
            pbVar12 = (byte *)0x1;
            pbVar19 = (byte *)0x1;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
          }
          else {
            local_8a0 = pbVar5;
            local_898 = pbVar6;
            if (pbVar25 == (byte *)0x4b73c4e968047988) {
              local_950 = (byte *)FUN_001e3448(local_998,0,local_a00);
              pbVar2 = (byte *)0xa0df104a46d1908c;
              if (local_950 != (byte *)0x0) {
                pbVar2 = (byte *)0xbd6484722152868a;
              }
            }
          }
        }
        else {
          if (pbVar25 == (byte *)0x53e14c28908eeeeb) {
            local_948 = local_970 + (long)local_968;
            local_938 = (byte *)0x1;
LAB_001f2fb0:
            local_940 = local_968;
            local_930 = local_978;
            goto LAB_001f2fc0;
          }
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if (pbVar25 == (byte *)0x54c2b837d86711b8) {
            local_a60 = local_8d8;
            uVar28 = local_a90._4_4_;
LAB_001f3270:
            local_9a8 = CONCAT44(local_9a8._4_4_,uVar28);
            pbVar2 = (byte *)0xd6afb11c30d2a9cd;
            local_8a0 = pbVar5;
            local_898 = pbVar6;
          }
        }
      }
      else if ((long)pbVar25 < 0x57cabee7967ab664) {
        if (pbVar25 == (byte *)0x54cc8c62117e2258) {
          local_9b0 = local_948 + (long)local_938;
          pbVar2 = (byte *)0x8bb818770b2cd537;
          if (local_8d8 <= local_9b0) {
            pbVar2 = (byte *)0xd14700cedc0a1544;
          }
          local_9d0 = local_938;
          pbStack_9c8 = local_948;
          local_900 = local_930;
          local_908 = local_940;
          local_8a0 = pbVar5;
          local_898 = pbVar6;
        }
        else {
          local_8a0 = pbVar5;
          local_898 = pbVar6;
          if (pbVar25 == (byte *)0x55dcd19dee737a1a) {
            local_898 = local_908;
            local_8a0 = local_8d8;
            pbVar31 = local_900;
            goto LAB_001f340c;
          }
        }
      }
      else {
        pbVar2 = (byte *)0xd2dc4161bf6d11ab;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if ((pbVar25 != (byte *)0x5ad71f292518d033) &&
           (pbVar2 = pbVar25, pbVar25 == (byte *)0x57cabee7967ab664)) {
          if (*(long *)(lVar4 + 0x28) == local_90[4]) {
            return pbVar22;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
    }
    else if ((long)pbVar25 < 0x6bbc6b8cc56478f1) {
      if ((long)pbVar25 < 0x61d9685814f9d681) {
        if (pbVar25 == (byte *)0x5ebfca74eead21cf) {
          pbVar34 = local_a68 + -(long)local_a08;
          goto LAB_001f301c;
        }
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if (pbVar25 == (byte *)0x5eda44100212fa2c) {
          local_898 = (byte *)0x1;
          local_8a0 = (byte *)0x0;
          pbVar31 = (byte *)0xffffffffffffffff;
LAB_001f340c:
          pbVar2 = (byte *)0xbccd62a0fc32d;
          pbVar13 = (byte *)0xffffffffffffffff;
          pbVar14 = (byte *)0x1;
        }
      }
      else {
        pbVar2 = (byte *)0xde3bbde8319e4138;
        pbVar18 = local_9b8;
        uVar20 = local_9a8._4_4_;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if ((pbVar25 != (byte *)0x61d9685814f9d681) &&
           (pbVar2 = pbVar25, pbVar18 = pbVar38, uVar20 = uVar28,
           pbVar25 == (byte *)0x62ccc994e2cb7da3)) {
          pbVar2 = (byte *)0x24e5eef263e81b7c;
          if ((uint)local_a80 <= (uint)local_a88) {
            pbVar2 = (byte *)0xbff1c80c3556854c;
          }
        }
      }
    }
    else if ((long)pbVar25 < 0x78ac43fddd7c64db) {
      if (pbVar25 == (byte *)0x6bbc6b8cc56478f1) {
        local_ae8 = local_a20;
        if (local_a20 <= local_9a0) {
          local_ae8 = local_9a0;
        }
        local_a90 = CONCAT44(local_a90._4_4_,(uint)param_2[(long)local_ae8]);
        pbVar2 = (byte *)0x5ad71f292518d033;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if (param_2[(long)local_ae8] != 0) {
          pbVar2 = (byte *)0xce7f13e2503182ae;
        }
      }
      else {
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if (pbVar25 == (byte *)0x727aabeac1ff5013) {
          local_9c0 = local_b18 + -1;
          pbVar2 = (byte *)0x3485297baf428faf;
          if (param_2[(long)local_9c0] != local_9c0[(long)local_8e8]) {
            pbVar2 = (byte *)0xc15e99e5395e3b25;
          }
        }
      }
    }
    else if (pbVar25 == (byte *)0x78ac43fddd7c64db) {
      pbVar2 = (byte *)0x727aabeac1ff5013;
      local_b18 = pbVar36;
      local_8a0 = pbVar5;
      local_898 = pbVar6;
      if (pbVar36 <= local_9a0) {
        pbVar2 = (byte *)0x8682509a6d1bddd3;
      }
    }
    else {
      local_8a0 = pbVar5;
      local_898 = pbVar6;
      if (pbVar25 == (byte *)0x7ffb850a0e6ed38d) {
        local_9f8 = local_8e8 + (long)pbVar35;
        local_a28 = local_b10;
        local_9f0 = pbVar34;
LAB_001f257c:
        pbVar2 = (byte *)0x91b5ec04c28f8379;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
      }
    }
    goto LAB_001f077c;
  }
  if ((long)pbVar25 < 0x11389729d7590b94) {
    if ((long)pbVar25 < -0x428109008685f48) {
      if ((long)pbVar25 < -0x12e0f8e15901e122) {
        if (pbVar25 == (byte *)0xe07e50eb5d9c155d) {
          pbVar34 = local_8e0 + -(long)local_ad0;
          if (local_8e0 + -(long)local_ad0 <= local_9a0) {
            pbVar34 = local_9a0;
          }
          goto LAB_001f301c;
        }
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if (pbVar25 == (byte *)0xebb5292211db659e) {
          local_9e8 = (byte *)0x0;
          pbVar2 = local_a08;
          if (local_a08 <= local_8e0 + ~(ulong)local_a08) {
            pbVar2 = local_8e0 + ~(ulong)local_a08;
          }
          local_a10 = pbVar2 + 1;
LAB_001f2d28:
          pbVar2 = (byte *)0xaa78350f0036093c;
          local_8a0 = pbVar5;
          local_898 = pbVar6;
        }
      }
      else {
        pbVar2 = pbVar1;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if ((pbVar25 != (byte *)0xed1f071ea6fe1ede) &&
           (pbVar2 = pbVar25, pbVar25 == (byte *)0xed4378afd4d50792)) {
          local_ac8 = (ulong)local_ac0[(long)local_8e8];
          pbVar2 = (byte *)0xd8fe0846a86e956a;
          local_b10 = pbVar33;
          if ((*(ulong *)((long)local_90 + ((ulong)(local_ac0[(long)local_8e8] >> 3) & 0x18)) >>
               (local_ac8 & 0x3f) & 1) != 0) {
            pbVar2 = (byte *)0x1b4ac2f1f22e2589;
          }
        }
      }
      goto LAB_001f077c;
    }
    if ((long)pbVar25 < 0xbccd62a0fc32d) {
      if (pbVar25 == (byte *)0xfbd7ef6ff797a0b8) {
        local_938 = local_a38 + 1;
        local_948 = local_970;
        goto LAB_001f2fb0;
      }
      local_8a0 = pbVar5;
      local_898 = pbVar6;
      if (pbVar25 == (byte *)0xfe8e69348b81073b) {
        local_a18 = local_958;
        local_a30 = local_af8;
        local_a48 = local_b00;
        local_a50 = local_960;
        local_a58 = local_ab0;
        goto LAB_001f318c;
      }
      goto LAB_001f077c;
    }
    if (pbVar25 == (byte *)0xbccd62a0fc32d) {
      local_a08 = pbVar29;
      local_ab8 = pbVar32;
      if (pbVar29 + 1 <= pbVar30 + 1) {
        local_a08 = pbVar30;
        local_ab8 = local_898;
      }
      local_a20 = local_a08 + 1;
      iVar21 = FUN_001e3668(param_2,param_2 + (long)local_ab8);
      pbVar2 = (byte *)0x11389729d7590b94;
      local_8e0 = local_8a0;
      local_8a0 = pbVar5;
      local_898 = pbVar6;
      if (iVar21 != 0) {
        pbVar2 = (byte *)0xebb5292211db659e;
      }
      goto LAB_001f077c;
    }
    local_8a0 = pbVar5;
    local_898 = pbVar6;
    if (pbVar25 != (byte *)0xf111d00f6a8edda) goto LAB_001f077c;
  }
  else {
    if (0x3485297baf428fae < (long)pbVar25) {
      if ((long)pbVar25 < 0x3cd27908c3b8e652) {
        pbVar2 = (byte *)0x78ac43fddd7c64db;
        pbVar17 = local_9c0;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if ((pbVar25 != (byte *)0x3485297baf428faf) &&
           (pbVar2 = pbVar25, pbVar34 = local_998, pbVar17 = pbVar36,
           pbVar25 == (byte *)0x361985fb5d496b76)) goto LAB_001f2114;
      }
      else if (pbVar25 == (byte *)0x3cd27908c3b8e652) {
        local_ab0 = local_920 + (long)local_910;
        pbVar2 = (byte *)0xfe8e69348b81073b;
        if (local_8d8 <= local_ab0) {
          pbVar2 = (byte *)0xc9e6c9135374767a;
        }
        local_b00 = local_920;
        local_af8 = local_910;
        local_960 = local_928;
        local_958 = local_918;
        local_8a0 = pbVar5;
        local_898 = pbVar6;
      }
      else {
        local_8a0 = pbVar5;
        local_898 = pbVar6;
        if (pbVar25 == (byte *)0x4101bf80446bdc20) {
          local_940 = local_ae0 + -(long)local_978;
          local_948 = local_ae0;
          local_930 = local_978;
          goto LAB_001f1ffc;
        }
      }
      goto LAB_001f077c;
    }
    if ((long)pbVar25 < 0x1db468c64d6a7ed0) {
      if (pbVar25 == (byte *)0x11389729d7590b94) {
        local_a10 = local_ab8;
        local_9e8 = local_8e0 + -(long)local_ab8;
        goto LAB_001f2d28;
      }
      local_8a0 = pbVar5;
      local_898 = pbVar6;
      if (pbVar25 == (byte *)0x1b4ac2f1f22e2589) {
        local_ad0 = (byte *)alStack_890[local_ac8];
        pbVar2 = (byte *)0x6bbc6b8cc56478f1;
        if (local_8e0 != local_ad0) {
          pbVar2 = (byte *)0xe07e50eb5d9c155d;
        }
      }
      goto LAB_001f077c;
    }
    if (pbVar25 != (byte *)0x1db468c64d6a7ed0) {
      local_8a0 = pbVar5;
      local_898 = pbVar6;
      if (pbVar25 == (byte *)0x24e5eef263e81b7c) {
        local_910 = local_af0;
        local_928 = local_af0 + -(long)local_990;
        local_918 = local_990;
        goto LAB_001f1df8;
      }
      goto LAB_001f077c;
    }
  }
  pbVar8 = (byte *)0x0;
  pbVar2 = (byte *)0x57cabee7967ab664;
  local_8a0 = pbVar5;
  local_898 = pbVar6;
  goto LAB_001f077c;
}

