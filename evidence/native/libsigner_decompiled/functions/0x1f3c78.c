// rea decompile_all
// name: FUN_001f3c78
// address: 0x1f3c78
// body: available
// range: 0x1f3c78-0x1f4847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1f4844 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f3c78(ulong param_1,uint *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint unaff_100000f9;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint in_w16;
  uint in_w17;
  uint uVar15;
  long unaff_x22;
  long lVar17;
  undefined1 *puVar18;
  uint unaff_w24;
  uint uVar19;
  uint unaff_w26;
  uint unaff_w27;
  uint uVar20;
  uint unaff_w28;
  uint uVar21;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  long local_288;
  int local_27c;
  long local_278;
  int local_26c;
  long local_268;
  int local_260;
  int local_25c;
  long local_258;
  uint local_250;
  uint local_24c;
  uint local_248;
  uint uStack_244;
  uint local_240;
  uint local_23c;
  uint local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  long local_228;
  uint local_220;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  uint uStack_20c;
  uint local_208;
  uint uStack_204;
  long local_200;
  long local_1f8;
  ulong local_1f0;
  uint auStack_1e8 [4];
  uint local_1d8;
  uint local_1d4;
  ulong local_1d0;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc [4];
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  long local_70;
  uint uVar16;
  
  local_1d0 = param_1;
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  uVar2 = (param_2[2] & 0xff00ff00) >> 8 | (param_2[2] & 0xff00ff) << 8;
  uVar3 = (param_2[3] & 0xff00ff00) >> 8 | (param_2[3] & 0xff00ff) << 8;
  uVar4 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
  uVar8 = (param_2[1] & 0xff00ff00) >> 8 | (param_2[1] & 0xff00ff) << 8;
  local_1a8 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_1bc[3] = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar2 = (param_2[4] & 0xff00ff00) >> 8 | (param_2[4] & 0xff00ff) << 8;
  local_1ac = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (param_2[5] & 0xff00ff00) >> 8 | (param_2[5] & 0xff00ff) << 8;
  uVar4 = param_2[0xb];
  local_1a4 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (param_2[7] & 0xff00ff00) >> 8 | (param_2[7] & 0xff00ff) << 8;
  local_1a0 = uVar2 >> 0x10 | uVar2 << 0x10;
  local_194 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar2 = (param_2[10] & 0xff00ff00) >> 8 | (param_2[10] & 0xff00ff) << 8;
  local_19c = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar3 = (param_2[6] & 0xff00ff00) >> 8 | (param_2[6] & 0xff00ff) << 8;
  uVar8 = (param_2[9] & 0xff00ff00) >> 8 | (param_2[9] & 0xff00ff) << 8;
  local_188 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = param_2[0xe];
  local_198 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar9 = (param_2[8] & 0xff00ff00) >> 8 | (param_2[8] & 0xff00ff) << 8;
  local_18c = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar3 = param_2[0xc];
  local_190 = uVar9 >> 0x10 | uVar9 << 0x10;
  local_184 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  local_178 = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (param_2[0xd] & 0xff00ff00) >> 8 | (param_2[0xd] & 0xff00ff) << 8;
  uVar9 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_17c = uVar8 >> 0x10 | uVar8 << 0x10;
  uVar8 = (param_2[0xf] & 0xff00ff00) >> 8 | (param_2[0xf] & 0xff00ff) << 8;
  local_180 = uVar9 >> 0x10 | uVar9 << 0x10;
  local_174 = uVar8 >> 0x10 | uVar8 << 0x10;
  local_258 = 0x10;
  uVar7 = param_1;
  uVar6 = (ulong)local_178;
  puVar1 = (undefined1 *)0x887e73b2c28c6a1;
LAB_001f3dd8:
  do {
    while (uVar20 = unaff_w27, uVar9 = param_6, uVar21 = unaff_w28, uVar19 = unaff_w24,
          uVar16 = unaff_100000f9, uVar8 = param_3, uVar15 = in_w17, uVar14 = uVar3, uVar12 = uVar2,
          uVar13 = uVar4, puVar18 = puVar1, lVar17 = unaff_x22, uVar10 = uVar6,
          uVar11 = uVar7 & 0xffffffff, puVar1 = puVar18, uVar6 = uVar10, unaff_x22 = lVar17,
          uVar4 = uVar13, uVar2 = uVar12, uVar3 = uVar14, in_w17 = uVar15, param_3 = uVar8,
          unaff_100000f9 = uVar16, unaff_w24 = uVar19, unaff_w28 = uVar21, param_6 = uVar9,
          unaff_w27 = uVar20, (long)puVar18 < 0x887e73b2c28c6a1) {
      if ((long)puVar18 < -0xab3a208b03543bf) {
        if ((long)puVar18 < -0x3dc07bfa902cf42a) {
          if (puVar18 == (undefined1 *)0xaa46adf0a78af8c7) {
            local_260 = *(int *)(param_1 + 0x6c);
            local_228 = 0x28;
            local_234 = local_1c0;
            local_230 = local_1bc[0];
            local_23c = local_1c4;
            local_238 = local_1bc[2];
            local_240 = local_1bc[1];
LAB_001f3da8:
            uVar7 = uVar11;
            puVar1 = (undefined1 *)0xf6c71d76f8b48eb9;
            in_w17 = uVar15;
          }
          else {
            uVar7 = uVar11;
            unaff_100000f9 = uVar15;
            if (puVar18 == (undefined1 *)0xbf711ec4fafe862e) {
              local_1d4 = uVar15 >> 2 | uVar15 << 0x1e;
              local_1f8 = lVar17 + 1;
              puVar1 = (undefined1 *)0x3b36a7a007b21166;
              if (local_1f8 != 0x50) {
                puVar1 = (undefined1 *)0x1cba5f82f77e481f;
              }
              auStack_1e8[1] = uVar8;
              auStack_1e8[2] = uVar19;
              auStack_1e8[3] = uVar21;
              local_1d8 = (uVar8 >> 0x1b | uVar8 << 5) + uVar9 + (uVar19 ^ uVar21 ^ uVar15) +
                          local_26c + local_1bc[lVar17 + 3];
            }
          }
        }
        else if (puVar18 == (undefined1 *)0xc23f84056fd30bd6) {
          local_26c = *(int *)(param_1 + 0x70);
          uVar7 = uVar11;
          unaff_x22 = 0x3c;
          puVar1 = (undefined1 *)0xbf711ec4fafe862e;
          in_w17 = local_24c;
          param_3 = local_22c;
          unaff_100000f9 = local_24c;
          unaff_w24 = local_220;
          unaff_w28 = local_248;
          param_6 = uStack_244;
        }
        else {
          uVar7 = uVar11;
          in_w17 = uVar16;
          if (puVar18 == (undefined1 *)0xd222672a639a1d2e) {
            local_200 = local_288;
            uStack_20c = local_250;
            local_218 = local_214;
            uStack_204 = local_21c;
            puVar1 = (undefined1 *)0x2ce2edddaf334d81;
            local_210 = unaff_w26;
            local_208 = in_w16;
          }
        }
      }
      else if ((long)puVar18 < -0x9c4c91856260990) {
        uVar7 = (ulong)local_1bc[0];
        uVar6 = local_1f0;
        puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
        uVar4 = local_1bc[2];
        uVar2 = local_1c4;
        uVar3 = local_1c0;
        in_w17 = uVar16;
        unaff_w27 = local_1bc[1];
        if ((puVar18 != (undefined1 *)0xf54c5df74fcabc41) &&
           (uVar7 = uVar11, uVar6 = uVar10, puVar1 = puVar18, uVar4 = uVar13, uVar2 = uVar12,
           uVar3 = uVar14, unaff_w27 = uVar20, puVar18 == &DAT_f615808441b1dafc)) {
          local_268 = local_258 + 1;
          puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
          if (local_268 != 0x50) {
            puVar1 = (undefined1 *)0x125dd2cc844aecb4;
          }
          uVar2 = *(uint *)((long)&local_1d0 + local_258 * 4) ^ local_1bc[local_258] ^
                  auStack_1e8[local_258] ^ auStack_1e8[local_258 + -2];
          local_1bc[local_258 + 3] = uVar2 >> 0x1f | uVar2 << 1;
          uVar2 = uVar12;
        }
      }
      else if (puVar18 == (undefined1 *)0xf63b36e7a9d9f670) {
        local_1bc[2] = uVar12 >> 2 | uVar12 << 0x1e;
        local_1f0 = uVar10 + 1;
        puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
        if (local_1f0 != 0x28) {
          puVar1 = (undefined1 *)0xf54c5df74fcabc41;
        }
        local_1c4 = uVar20;
        local_1c0 = uVar13;
        local_1bc[0] = uVar14;
        local_1bc[1] = (uVar20 >> 0x1b | uVar20 << 5) + (int)uVar7 + (uVar13 ^ uVar14 ^ uVar12) +
                       local_25c + local_1bc[uVar10 + 3];
        uVar7 = uVar11;
        in_w17 = uVar16;
      }
      else {
        uVar7 = uVar11;
        in_w17 = uVar16;
        if (puVar18 == (undefined1 *)0xf6c71d76f8b48eb9) {
          local_24c = local_240;
          local_248 = local_238;
          uStack_244 = local_234;
          local_220 = local_23c >> 2 | local_23c << 0x1e;
          local_278 = local_228 + 1;
          local_22c = (local_240 >> 0x1b | local_240 << 5) + local_230 +
                      ((local_238 ^ local_234) & local_23c ^ local_238 & local_234) + local_260 +
                      local_1bc[local_228 + 3];
          puVar1 = (undefined1 *)0xc23f84056fd30bd6;
          if (local_278 != 0x3c) {
            puVar1 = (undefined1 *)0x6b5051bf1aed633d;
          }
        }
      }
    }
    if (0x353e7cd16df664a1 < (long)puVar18) {
      if ((long)puVar18 < 0x696b554ab6b2c8c5) {
        if (puVar18 == (undefined1 *)0x353e7cd16df664a2) {
          local_25c = *(int *)(param_1 + 0x68);
          uVar7 = (ulong)local_250;
          uVar6 = 0x14;
          puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
          uVar4 = local_214;
          uVar2 = in_w16;
          uVar3 = unaff_w26;
          in_w17 = uVar16;
          unaff_w27 = local_21c;
        }
        else {
          uVar7 = uVar11;
          in_w17 = uVar16;
          if (puVar18 == (undefined1 *)0x3b36a7a007b21166) {
            *(uint *)(param_1 + 0x50) = local_1d8 + local_2a4;
            *(uint *)(param_1 + 0x54) = auStack_1e8[1] + local_2a0;
            *(uint *)(param_1 + 0x58) = local_1d4 + local_29c;
            *(uint *)(param_1 + 0x5c) = auStack_1e8[2] + local_298;
            *(uint *)(param_1 + 0x60) = auStack_1e8[3] + local_294;
            if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
      }
      else if (puVar18 == (undefined1 *)0x696b554ab6b2c8c5) {
        local_200 = 0;
        local_29c = *(uint *)(param_1 + 0x58);
        local_298 = *(uint *)(param_1 + 0x5c);
        local_2a4 = *(uint *)(param_1 + 0x50);
        local_2a0 = *(uint *)(param_1 + 0x54);
        local_294 = *(uint *)(param_1 + 0x60);
        local_27c = *(int *)(param_1 + 100);
        uVar7 = uVar11;
        puVar1 = (undefined1 *)0x2ce2edddaf334d81;
        in_w17 = uVar16;
        local_218 = local_29c;
        local_210 = local_298;
        uStack_20c = local_294;
        local_208 = local_2a0;
        uStack_204 = local_2a4;
      }
      else {
        uVar7 = uVar11;
        in_w17 = uVar16;
        if (puVar18 == (undefined1 *)0x6b5051bf1aed633d) {
          local_228 = local_278;
          local_234 = local_248;
          local_230 = uStack_244;
          local_238 = local_220;
          local_23c = local_24c;
          local_240 = local_22c;
          goto LAB_001f3da8;
        }
      }
      goto LAB_001f3dd8;
    }
    if ((long)puVar18 < 0x1cba5f82f77e481f) {
      uVar7 = uVar11;
      puVar1 = &DAT_f615808441b1dafc;
      in_w17 = uVar16;
      if ((puVar18 != (undefined1 *)0x887e73b2c28c6a1) &&
         (puVar1 = puVar18, puVar18 == (undefined1 *)0x125dd2cc844aecb4)) {
        local_258 = local_268;
        puVar1 = &DAT_f615808441b1dafc;
      }
    }
    else {
      uVar7 = uVar11;
      unaff_x22 = local_1f8;
      puVar1 = (undefined1 *)0xbf711ec4fafe862e;
      in_w17 = auStack_1e8[1];
      param_3 = local_1d8;
      unaff_100000f9 = auStack_1e8[1];
      unaff_w24 = local_1d4;
      unaff_w28 = auStack_1e8[2];
      param_6 = auStack_1e8[3];
      if ((puVar18 != (undefined1 *)0x1cba5f82f77e481f) &&
         (unaff_x22 = lVar17, puVar1 = puVar18, in_w17 = uVar16, param_3 = uVar8,
         unaff_100000f9 = uVar16, unaff_w24 = uVar19, unaff_w28 = uVar21, param_6 = uVar9,
         puVar18 == (undefined1 *)0x2ce2edddaf334d81)) {
        local_250 = local_210;
        local_214 = local_208 >> 2 | local_208 << 0x1e;
        local_288 = local_200 + 1;
        local_21c = (local_208 & local_218) + uStack_20c + (local_210 & (local_208 ^ 0xffffffff)) +
                    (uStack_204 >> 0x1b | uStack_204 << 5) + local_27c + local_1bc[local_200 + 3];
        puVar1 = (undefined1 *)0x353e7cd16df664a2;
        in_w16 = uStack_204;
        unaff_w26 = local_218;
        if (local_288 != 0x14) {
          puVar1 = (undefined1 *)0xd222672a639a1d2e;
        }
      }
    }
  } while( true );
}

