// rea decompile_all
// name: FUN_001e70f0
// address: 0x1e70f0
// body: available
// range: 0x1e70f0-0x1e8fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_001e70f0(ulong *param_1,ulong *param_2,ulong param_3,ulong *param_4,ulong *param_5)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *unaff_x20;
  ulong *puVar24;
  ulong unaff_x22;
  ulong uVar25;
  ulong *unaff_x24;
  ulong *puVar26;
  ulong uVar27;
  ulong *local_260;
  ulong local_258;
  ulong *local_250;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  ulong local_228;
  ulong *local_220;
  ulong *local_218;
  ulong local_210;
  ulong *local_208;
  ulong *local_200;
  char *local_1f8;
  ulong local_1f0;
  ulong *local_1e8;
  ulong *local_1e0;
  ulong local_1d8;
  ulong *local_1d0;
  ulong local_1c8;
  uint local_1bc;
  ulong local_1b0;
  char *local_1a8;
  ulong *local_1a0;
  ulong *local_198;
  ulong *local_190;
  ulong local_188;
  ulong local_180;
  ulong *puStack_178;
  ulong *local_158;
  ulong local_150;
  ulong *local_148;
  ulong *local_140;
  ulong *local_138;
  ulong local_130;
  ulong *local_128;
  ulong local_120;
  ulong *local_118;
  ulong *local_100;
  ulong *local_f8;
  ulong *local_f0;
  ulong local_e8;
  ulong *local_e0;
  ulong *local_c8;
  ulong local_c0;
  ulong *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  ulong local_a0;
  ulong local_98;
  ulong *local_90;
  ulong *local_88;
  ulong local_80;
  ulong *local_78;
  ulong local_70;
  
  uVar2 = 0xe3a4d54ac1f6c77c;
  if (((uint)((ulong)param_2 >> 3) & 1 & (uint)(param_3 != 0)) == 0) {
    uVar2 = 0x7a1d336c9fe8990f;
  }
  uVar3 = 0xdb2ca7ccb716dee2;
  if ((((uint)param_2 ^ (uint)param_1) & 8) != 0) {
    uVar3 = 0x826999883c923132;
  }
  puVar15 = param_2;
  uVar23 = 0x3c1d6e269c73b2c4;
  uVar16 = 0xdb2ca7ccb716dee2;
LAB_001e71f8:
  while( true ) {
    puVar26 = unaff_x24;
    uVar25 = unaff_x22;
    puVar24 = unaff_x20;
    uVar22 = uVar16;
    uVar20 = uVar23;
    puVar19 = param_5;
    puVar18 = param_4;
    puVar17 = puVar15;
    uVar14 = local_70;
    puVar13 = local_78;
    uVar12 = local_80;
    puVar11 = local_88;
    puVar10 = local_90;
    uVar9 = local_98;
    uVar8 = local_a0;
    puVar7 = local_a8;
    puVar6 = local_b0;
    puVar5 = local_b8;
    uVar4 = local_c0;
    puVar21 = local_c8;
    uVar27 = uVar22 & 0xffffffff;
    uVar23 = uVar20;
    puVar15 = puVar17;
    param_4 = puVar18;
    param_5 = puVar19;
    uVar16 = uVar27;
    unaff_x20 = puVar24;
    unaff_x22 = uVar25;
    unaff_x24 = puVar26;
    local_c8 = puVar21;
    if ((long)uVar20 < 0xc1c2badab0be0de) break;
    if ((long)uVar20 < 0x6298686b9f6b9f24) {
      if ((long)uVar20 < 0x2d2fed4469d16fde) {
        if ((long)uVar20 < 0x18fdc9591ff1c480) {
          local_78 = local_f0;
          local_80 = local_e8;
          uVar23 = 0x7b3d77c4935dca95;
          unaff_x20 = local_100;
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_70 = uVar14;
          if ((uVar20 != 0xc1c2badab0be0de) &&
             (uVar23 = uVar20, unaff_x20 = puVar24, local_80 = uVar12, local_78 = puVar13,
             uVar20 == 0x144b21bcbeb71cd5)) {
            uVar23 = 0xf97863d6a7345d18;
            if ((char)*local_a8 != '\0') {
              uVar23 = 0x18fdc9591ff1c480;
            }
            *(char *)local_b0 = (char)*local_a8;
            local_260 = local_a8;
            local_158 = local_b0;
            local_150 = local_a0;
          }
        }
        else if (uVar20 == 0x18fdc9591ff1c480) {
          local_1c8 = local_150 - 1;
          local_1d0 = (ulong *)((long)local_260 + 1);
          local_1a0 = (ulong *)((long)local_158 + 1);
          uVar23 = 0x521b22f75783dd1d;
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
          if (local_1c8 != 0) {
            uVar23 = 0x51c02d96c2cc98f2;
          }
        }
        else if (uVar20 == 0x24abbbfc5d2aac7f) {
          uVar23 = 0x64a4671c7146738b;
          if (6 < local_1b0) {
            uVar23 = 0xf0bd45a7a1768c98;
          }
          ((char *)((long)local_e0 + 1))[0] = '\0';
          ((char *)((long)local_e0 + 1))[1] = '\0';
          pcVar1 = (char *)((long)local_e0 + (local_1b0 - 3));
          pcVar1[0] = '\0';
          pcVar1[1] = '\0';
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
        }
        else {
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
          if (uVar20 == 0x2ba48ce703af72ba) {
            local_238 = (ulong)local_1a8 & 4;
            local_1a8[0x14] = '\0';
            local_1a8[0x15] = '\0';
            local_1a8[0x16] = '\0';
            local_1a8[0x17] = '\0';
            local_1a8[0x18] = '\0';
            local_1a8[0x19] = '\0';
            local_1a8[0x1a] = '\0';
            local_1a8[0x1b] = '\0';
            local_1a8[0xc] = '\0';
            local_1a8[0xd] = '\0';
            local_1a8[0xe] = '\0';
            local_1a8[0xf] = '\0';
            local_1a8[0x10] = '\0';
            local_1a8[0x11] = '\0';
            local_1a8[0x12] = '\0';
            local_1a8[0x13] = '\0';
            local_240 = local_238 | 0x18;
            uVar23 = 0xfb4ecb7317389532;
            if (local_1f0 - local_240 < 0x20) {
              uVar23 = 0x706b8823a049caa0;
            }
            local_1f8[-0x14] = '\0';
            local_1f8[-0x13] = '\0';
            local_1f8[-0x12] = '\0';
            local_1f8[-0x11] = '\0';
            local_1f8[-0x10] = '\0';
            local_1f8[-0xf] = '\0';
            local_1f8[-0xe] = '\0';
            local_1f8[-0xd] = '\0';
            local_1f8[-0x1c] = '\0';
            local_1f8[-0x1b] = '\0';
            local_1f8[-0x1a] = '\0';
            local_1f8[-0x19] = '\0';
            local_1f8[-0x18] = '\0';
            local_1f8[-0x17] = '\0';
            local_1f8[-0x16] = '\0';
            local_1f8[-0x15] = '\0';
          }
        }
      }
      else if ((long)uVar20 < 0x4ee6d1fabee14214) {
        local_c8 = local_f8;
        uVar23 = 0x747d75e5c403e07e;
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        local_98 = uVar9;
        local_90 = puVar10;
        local_88 = puVar11;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
        if (uVar20 != 0x2d2fed4469d16fde) {
          local_c8 = local_e0;
          uVar23 = 0x747d75e5c403e07e;
          if ((uVar20 != 0x39090bd7ea11745f) &&
             (uVar23 = uVar20, local_c8 = puVar21, uVar20 == 0x3c1d6e269c73b2c4)) {
            uVar23 = uVar3;
          }
        }
      }
      else if (uVar20 == 0x4ee6d1fabee14214) {
        uVar23 = 0x985fefba3cc11422;
        local_258 = local_98;
        local_250 = local_90;
        local_148 = local_88;
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        local_98 = uVar9;
        local_90 = puVar10;
        local_88 = puVar11;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
        if (local_98 != 0) {
          uVar23 = 0xcebd253bf0ef2a9d;
        }
      }
      else {
        local_a0 = local_1c8;
        local_a8 = local_1d0;
        local_b0 = local_1a0;
        uVar23 = 0x144b21bcbeb71cd5;
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_98 = uVar9;
        local_90 = puVar10;
        local_88 = puVar11;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
        if ((uVar20 != 0x51c02d96c2cc98f2) &&
           (uVar23 = uVar20, puVar21 = local_1a0, local_b0 = puVar6, local_a8 = puVar7,
           local_a0 = uVar8, uVar20 == 0x521b22f75783dd1d)) {
LAB_001e85ec:
          uVar23 = 0x747d75e5c403e07e;
          local_c8 = puVar21;
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
        }
      }
    }
    else if ((long)uVar20 < 0x706b8823a049caa0) {
      if ((long)uVar20 < 0x68a258a9cce7e66b) {
        if (uVar20 == 0x6298686b9f6b9f24) {
          local_188 = local_1d8 - 1;
          local_198 = (ulong *)((long)local_1e8 + 1);
          local_190 = (ulong *)((long)local_1e0 + 1);
          local_1bc = (uint)(local_188 != 0);
          uVar23 = 0x6288b31db4af0d0;
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
          if ((local_1bc & (uint)local_190 >> 3) == 0) {
            uVar23 = 0xddf894a33cedd4a5;
          }
        }
        else if (uVar20 == 0x632d2718836e34f1) {
          uVar23 = 0x7b7e2b085a916946;
          local_100 = puVar26;
          local_f0 = puVar19;
          local_e8 = uVar25;
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
          if ((char)*puVar26 != '\0') {
            uVar23 = 0x68a258a9cce7e66b;
          }
        }
        else {
          puVar21 = local_e0;
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
          if (uVar20 == 0x64a4671c7146738b) goto LAB_001e85ec;
        }
      }
      else if (uVar20 == 0x68a258a9cce7e66b) {
        uVar23 = 0xc1c2badab0be0de;
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        local_98 = uVar9;
        local_90 = puVar10;
        local_88 = puVar11;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
        if (local_e8 < 8) {
          uVar23 = 0xea7cad70d885ebb3;
        }
      }
      else if (uVar20 == 0x6af93846531afc11) {
        uVar23 = (ulong)(uint)-(int)local_e0 & 3;
        local_1f0 = local_1b0 - uVar23;
        local_1a8 = (char *)((long)local_e0 + uVar23);
        local_248 = local_1f0 & 0xfffffffffffffffc;
        local_1f8 = local_1a8 + local_248;
        uVar23 = 0xa9849ec2342cc725;
        if (8 < local_248) {
          uVar23 = 0xf46429f35eb373c3;
        }
        local_1a8[0] = '\0';
        local_1a8[1] = '\0';
        local_1a8[2] = '\0';
        local_1a8[3] = '\0';
        local_1f8[-4] = '\0';
        local_1f8[-3] = '\0';
        local_1f8[-2] = '\0';
        local_1f8[-1] = '\0';
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        local_98 = uVar9;
        local_90 = puVar10;
        local_88 = puVar11;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
      }
      else {
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        local_98 = uVar9;
        local_90 = puVar10;
        local_88 = puVar11;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
        if (uVar20 == 0x6e518c29e4d03e45) {
          uVar23 = 0xfbe080ff6a77b385;
          if ((uVar22 & 1) == 0) {
            uVar23 = 0x2d2fed4469d16fde;
          }
          uVar16 = uVar22 & 0xffffffff;
          local_180 = local_70;
          puStack_178 = puVar18;
          local_f8 = puVar17;
        }
      }
    }
    else if ((long)uVar20 < 0x7b3d77c4935dca95) {
      local_c8 = local_e0;
      uVar23 = 0x747d75e5c403e07e;
      local_c0 = uVar4;
      local_b8 = puVar5;
      local_b0 = puVar6;
      local_a8 = puVar7;
      local_a0 = uVar8;
      local_98 = uVar9;
      local_90 = puVar10;
      local_88 = puVar11;
      local_80 = uVar12;
      local_78 = puVar13;
      local_70 = uVar14;
      if (uVar20 != 0x706b8823a049caa0) {
        puVar15 = param_1;
        param_4 = param_2;
        uVar23 = 0x6e518c29e4d03e45;
        uVar16 = (ulong)(uint)(param_3 != 0);
        local_c8 = puVar21;
        local_70 = param_3;
        if ((uVar20 != 0x7a1d336c9fe8990f) &&
           (puVar15 = puVar17, param_4 = puVar18, uVar23 = uVar20, uVar16 = uVar27,
           local_70 = uVar14, uVar20 == 0x747d75e5c403e07e)) {
          return puVar21;
        }
      }
    }
    else if (uVar20 == 0x7b3d77c4935dca95) {
      local_230 = *puVar24;
      uVar23 = 0x9245d22e729be4a4;
      local_210 = local_80;
      local_208 = local_78;
      local_200 = puVar24;
      local_c0 = uVar4;
      local_b8 = puVar5;
      local_b0 = puVar6;
      local_a8 = puVar7;
      local_a0 = uVar8;
      local_98 = uVar9;
      local_90 = puVar10;
      local_88 = puVar11;
      local_80 = uVar12;
      local_78 = puVar13;
      local_70 = uVar14;
      if ((local_230 + 0xfefefefefefefeff & (local_230 ^ 0xffffffffffffffff) & 0x8080808080808080)
          != 0) {
        uVar23 = 0x7cdba208eacd72d0;
      }
    }
    else {
      local_b8 = local_f0;
      local_c0 = local_e8;
      uVar23 = 0xa1fdbb56a6f01a7a;
      local_b0 = puVar6;
      local_a8 = puVar7;
      local_a0 = uVar8;
      local_98 = uVar9;
      local_90 = puVar10;
      local_88 = puVar11;
      local_80 = uVar12;
      local_78 = puVar13;
      local_70 = uVar14;
      if ((uVar20 != 0x7b7e2b085a916946) &&
         (uVar23 = uVar20, local_c0 = uVar4, local_b8 = puVar5, uVar20 == 0x7cdba208eacd72d0)) {
        local_130 = local_210;
        local_138 = local_200;
        local_140 = local_208;
        goto LAB_001e8490;
      }
    }
  }
  if ((long)uVar20 < -0x24d3583348e9211e) {
    if ((long)uVar20 < -0x567b613dcbd338db) {
      if ((long)uVar20 < -0x67a01045c33eebde) {
        uVar23 = 0x4ee6d1fabee14214;
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        local_98 = param_3;
        local_90 = param_2;
        local_88 = param_1;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
        if ((uVar20 != 0x826999883c923132) &&
           (uVar23 = uVar20, local_98 = uVar9, local_90 = puVar10, local_88 = puVar11,
           uVar20 == 0x9245d22e729be4a4)) {
          local_120 = local_210 - 8;
          local_128 = local_200 + 1;
          uVar23 = 0xcd27dcdeba5156ae;
          if (local_120 < 8) {
            uVar23 = 0x9cc6adfc5526cc97;
          }
          local_118 = local_208 + 1;
          *local_208 = local_230;
        }
      }
      else {
        local_c8 = local_148;
        uVar23 = 0x747d75e5c403e07e;
        local_c0 = uVar4;
        local_b8 = puVar5;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        local_98 = uVar9;
        local_90 = puVar10;
        local_88 = puVar11;
        local_80 = uVar12;
        local_78 = puVar13;
        local_70 = uVar14;
        if (uVar20 != 0x985fefba3cc11422) {
          local_88 = local_118;
          local_90 = local_128;
          local_98 = local_120;
          uVar23 = 0x4ee6d1fabee14214;
          local_c8 = puVar21;
          if ((uVar20 != 0x9cc6adfc5526cc97) &&
             (uVar23 = uVar20, local_98 = uVar9, local_90 = puVar10, local_88 = puVar11,
             uVar20 == 0xa1fdbb56a6f01a7a)) {
            uVar23 = 0xaad453a52ded0e31;
            if (2 < local_c0) {
              uVar23 = 0x24abbbfc5d2aac7f;
            }
            *(char *)local_b8 = '\0';
            *(char *)((long)local_b8 + (local_c0 - 1)) = '\0';
            local_1b0 = local_c0;
            local_e0 = local_b8;
          }
        }
      }
    }
    else if ((long)uVar20 < -0x342c3064ebb3f072) {
      local_c8 = local_e0;
      uVar23 = 0x747d75e5c403e07e;
      local_c0 = uVar4;
      local_b8 = puVar5;
      local_b0 = puVar6;
      local_a8 = puVar7;
      local_a0 = uVar8;
      local_98 = uVar9;
      local_90 = puVar10;
      local_88 = puVar11;
      local_80 = uVar12;
      local_78 = puVar13;
      local_70 = uVar14;
      if (uVar20 != 0xa9849ec2342cc725) {
        local_c8 = local_e0;
        uVar23 = 0x747d75e5c403e07e;
        if ((uVar20 != 0xaad453a52ded0e31) &&
           (uVar23 = uVar20, local_c8 = puVar21, uVar20 == 0xbe20f49c7489ca88)) {
          param_5 = local_1e8;
          uVar23 = 0x632d2718836e34f1;
          unaff_x22 = local_1d8;
          unaff_x24 = local_1e0;
        }
      }
    }
    else {
      local_a8 = local_138;
      local_a0 = local_130;
      local_b0 = local_140;
      uVar23 = 0x144b21bcbeb71cd5;
      local_c0 = uVar4;
      local_b8 = puVar5;
      local_98 = uVar9;
      local_90 = puVar10;
      local_88 = puVar11;
      local_80 = uVar12;
      local_78 = puVar13;
      local_70 = uVar14;
      if (uVar20 != 0xcbd3cf9b144c0f8e) {
        local_78 = local_118;
        local_80 = local_120;
        uVar23 = 0x7b3d77c4935dca95;
        uVar16 = uVar22 & 0xffffffff;
        unaff_x20 = local_128;
        local_b0 = puVar6;
        local_a8 = puVar7;
        local_a0 = uVar8;
        if ((uVar20 != 0xcd27dcdeba5156ae) &&
           (uVar23 = uVar20, uVar16 = uVar22 & 0xffffffff, unaff_x20 = puVar24, local_80 = uVar12,
           local_78 = puVar13, uVar20 == 0xcebd253bf0ef2a9d)) {
          local_130 = local_258;
          local_138 = local_250;
          local_140 = local_148;
LAB_001e8490:
          uVar23 = 0xcbd3cf9b144c0f8e;
          uVar16 = uVar22 & 0xffffffff;
          unaff_x20 = puVar24;
          local_c0 = uVar4;
          local_b8 = puVar5;
          local_b0 = puVar6;
          local_a8 = puVar7;
          local_a0 = uVar8;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          local_80 = uVar12;
          local_78 = puVar13;
          local_70 = uVar14;
        }
      }
    }
    goto LAB_001e71f8;
  }
  if ((long)uVar20 < -0x6879c2958cba2e8) {
    if (-0x1583528f277a144e < (long)uVar20) {
      local_88 = local_f0;
      local_98 = local_e8;
      local_90 = local_100;
      uVar23 = 0x4ee6d1fabee14214;
      local_c0 = uVar4;
      local_b8 = puVar5;
      local_b0 = puVar6;
      local_a8 = puVar7;
      local_a0 = uVar8;
      local_80 = uVar12;
      local_78 = puVar13;
      local_70 = uVar14;
      if (uVar20 != 0xea7cad70d885ebb3) {
        if (uVar20 == 0xf0bd45a7a1768c98) {
          uVar23 = 0xfad87eef1ad0b53c;
          if (8 < local_1b0) {
            uVar23 = 0x6af93846531afc11;
          }
          *(char *)((long)local_e0 + 3) = '\0';
          *(char *)((long)local_e0 + (local_1b0 - 4)) = '\0';
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
        }
        else {
          uVar23 = uVar20;
          local_98 = uVar9;
          local_90 = puVar10;
          local_88 = puVar11;
          if (uVar20 == 0xf46429f35eb373c3) {
            local_1a8[4] = '\0';
            local_1a8[5] = '\0';
            local_1a8[6] = '\0';
            local_1a8[7] = '\0';
            local_1a8[8] = '\0';
            local_1a8[9] = '\0';
            local_1a8[10] = '\0';
            local_1a8[0xb] = '\0';
            uVar23 = 0x39090bd7ea11745f;
            if (0x18 < local_248) {
              uVar23 = 0x2ba48ce703af72ba;
            }
            local_1f8[-0xc] = '\0';
            local_1f8[-0xb] = '\0';
            local_1f8[-10] = '\0';
            local_1f8[-9] = '\0';
            local_1f8[-8] = '\0';
            local_1f8[-7] = '\0';
            local_1f8[-6] = '\0';
            local_1f8[-5] = '\0';
          }
        }
      }
      goto LAB_001e71f8;
    }
    uVar23 = uVar2;
    local_c0 = uVar4;
    local_b8 = puVar5;
    local_b0 = puVar6;
    local_a8 = puVar7;
    local_a0 = uVar8;
    local_98 = uVar9;
    local_90 = puVar10;
    local_88 = puVar11;
    local_80 = uVar12;
    local_78 = puVar13;
    local_70 = uVar14;
    if (uVar20 == 0xdb2ca7ccb716dee2) goto LAB_001e71f8;
    local_70 = local_188;
    puVar15 = local_198;
    param_4 = local_190;
    uVar23 = 0x6e518c29e4d03e45;
    uVar16 = (ulong)local_1bc;
    if ((uVar20 == 0xddf894a33cedd4a5) ||
       (puVar15 = puVar17, param_4 = puVar18, uVar23 = uVar20, uVar22 = param_3, uVar16 = uVar27,
       puVar21 = param_2, puVar24 = param_1, local_70 = uVar14, uVar20 != 0xe3a4d54ac1f6c77c))
    goto LAB_001e71f8;
  }
  else {
    if ((long)uVar20 < -0x41f7f0095884c7b) {
      local_b8 = local_158;
      local_c0 = local_150;
      uVar23 = 0xa1fdbb56a6f01a7a;
      local_b0 = puVar6;
      local_a8 = puVar7;
      local_a0 = uVar8;
      local_98 = uVar9;
      local_90 = puVar10;
      local_88 = puVar11;
      local_80 = uVar12;
      local_78 = puVar13;
      local_70 = uVar14;
      if (uVar20 != 0xf97863d6a7345d18) {
        local_c8 = local_e0;
        uVar23 = 0x747d75e5c403e07e;
        local_c0 = uVar4;
        local_b8 = puVar5;
        if ((uVar20 != 0xfad87eef1ad0b53c) &&
           (uVar23 = uVar20, local_c8 = puVar21, uVar20 == 0xfb4ecb7317389532)) {
          memset(local_1a8 + local_240,0,
                 ((local_1f0 - local_238) - 0x38 & 0xffffffffffffffe0) + 0x20);
          local_c8 = local_e0;
          uVar23 = 0x747d75e5c403e07e;
        }
      }
      goto LAB_001e71f8;
    }
    param_5 = local_f8;
    uVar23 = 0x632d2718836e34f1;
    unaff_x22 = local_180;
    unaff_x24 = puStack_178;
    local_c0 = uVar4;
    local_b8 = puVar5;
    local_b0 = puVar6;
    local_a8 = puVar7;
    local_a0 = uVar8;
    local_98 = uVar9;
    local_90 = puVar10;
    local_88 = puVar11;
    local_80 = uVar12;
    local_78 = puVar13;
    local_70 = uVar14;
    if (uVar20 == 0xfbe080ff6a77b385) goto LAB_001e71f8;
    if (uVar20 == 0x47a378886e13f5f) {
      local_1d8 = local_228;
      local_1e0 = local_220;
      local_1e8 = local_218;
      uVar23 = 0xbe20f49c7489ca88;
      if ((char)*local_220 != '\0') {
        uVar23 = 0x6298686b9f6b9f24;
      }
      *(char *)local_218 = (char)*local_220;
      param_5 = puVar19;
      unaff_x22 = uVar25;
      unaff_x24 = puVar26;
      goto LAB_001e71f8;
    }
    param_5 = puVar19;
    uVar23 = uVar20;
    unaff_x22 = uVar25;
    unaff_x24 = puVar26;
    if (uVar20 != 0x6288b31db4af0d0) goto LAB_001e71f8;
    local_220 = local_190;
    local_218 = local_198;
    uVar22 = local_188;
    puVar21 = local_220;
    puVar24 = local_218;
  }
  local_218 = puVar24;
  local_220 = puVar21;
  puVar15 = puVar17;
  param_4 = puVar18;
  param_5 = puVar19;
  uVar23 = 0x47a378886e13f5f;
  uVar16 = uVar27;
  unaff_x22 = uVar25;
  unaff_x24 = puVar26;
  local_228 = uVar22;
  local_c0 = uVar4;
  local_b8 = puVar5;
  local_b0 = puVar6;
  local_a8 = puVar7;
  local_a0 = uVar8;
  local_98 = uVar9;
  local_90 = puVar10;
  local_88 = puVar11;
  local_80 = uVar12;
  local_78 = puVar13;
  local_70 = uVar14;
  goto LAB_001e71f8;
}

