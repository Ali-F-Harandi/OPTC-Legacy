// rea decompile_all
// name: FUN_001e5520
// address: 0x1e5520
// body: available
// range: 0x1e5520-0x1e70ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e70ec to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_001e5520(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4,byte *param_5)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  byte *in_x12;
  byte *pbVar19;
  byte *in_x13;
  byte *pbVar20;
  byte *unaff_x23;
  byte *pbVar21;
  byte *unaff_x24;
  byte *pbVar22;
  byte *unaff_x25;
  byte *pbVar23;
  byte *local_1b8;
  byte local_1ac;
  byte *local_1a8;
  byte *local_1a0;
  byte *local_198;
  uint local_18c;
  uint local_188;
  uint local_184;
  byte *local_180;
  byte *local_178;
  byte *local_170;
  byte *local_168;
  byte *local_160;
  byte *local_158;
  uint local_14c;
  byte *local_148;
  uint local_13c;
  uint local_12c;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  byte *local_f0;
  byte *local_e8;
  uint local_e0;
  uint local_dc;
  byte *local_c8;
  byte *local_c0;
  byte *local_b8;
  ulong local_b0 [10];
  
  local_dc = 0;
  local_18c = 0;
  local_188 = 0;
  local_12c = 0;
  local_e0 = 0;
  local_14c = 0;
  local_13c = 0;
  local_184 = 0;
  lVar2 = tpidr_el0;
  lVar1 = 0xc18376c52d7997c;
  if (param_1 != (byte *)0x0) {
    lVar1 = -0x72e7d823e5b593c3;
  }
  local_b0[8] = *(long *)(lVar2 + 0x28);
  pbVar3 = param_1;
  pbVar4 = param_2;
  pbVar5 = param_3;
  uVar6 = 0;
  lVar18 = -0x68f444208277a4db;
  uVar7 = 0;
  uVar8 = 0;
LAB_001e5674:
  uVar14 = uVar8;
  uVar15 = uVar7;
  lVar17 = lVar18;
  pbVar23 = unaff_x25;
  pbVar22 = unaff_x24;
  pbVar21 = unaff_x23;
  pbVar20 = in_x13;
  pbVar19 = in_x12;
  uVar16 = uVar6;
  pbVar13 = param_5;
  pbVar12 = pbVar5;
  pbVar10 = pbVar4;
  pbVar11 = pbVar3;
  pbVar3 = pbVar11;
  pbVar4 = pbVar10;
  pbVar5 = pbVar12;
  param_5 = pbVar13;
  uVar6 = uVar16;
  in_x12 = pbVar19;
  in_x13 = pbVar20;
  unaff_x23 = pbVar21;
  unaff_x24 = pbVar22;
  unaff_x25 = pbVar23;
  lVar18 = lVar17;
  uVar7 = uVar15;
  uVar8 = uVar14;
  if (-0xbd76994df8af997 < lVar17) {
    if (lVar17 < 0x33953cc7b3e45706) {
      if (lVar17 < 0xc18376c52d7997c) {
        if (lVar17 < 0x6beeef139d94bec) {
          if (lVar17 == -0xbd76994df8af996) {
            local_f8 = local_178;
LAB_001e6ca0:
            param_3[0] = 0;
            param_3[1] = 0;
            param_3[2] = 0;
            param_3[3] = 0;
            param_3[4] = 0;
            param_3[5] = 0;
            param_3[6] = 0;
            param_3[7] = 0;
            pbVar4 = pbVar10;
            lVar18 = 0x16719e03f6bac21d;
          }
          else if (lVar17 == -0xbbaf2345e37dd60) {
            lVar18 = -0x32f7034afe95e1a8;
            local_110 = pbVar21;
            if ((*(ulong *)((long)local_b0 + ((ulong)(uVar14 >> 3) & 0x1ffffff8) + 0x20) >>
                 ((ulong)uVar14 & 0x3f) & 1) != 0) {
              lVar18 = 0x6beeef139d94bec;
            }
          }
          else if (lVar17 == -0xb9715b8979f7d33) {
            local_180 = local_1a8;
            uVar15 = local_18c;
            pbVar11 = local_180;
            goto LAB_001e6764;
          }
        }
        else if (lVar17 < 0xa93d39c1f756203) {
          pbVar3 = local_110;
          lVar18 = -0x554301dbdde0ca2c;
          if ((lVar17 != 0x6beeef139d94bec) &&
             (pbVar3 = pbVar11, lVar18 = lVar17, lVar17 == 0x952495cae57ae98)) {
            local_e0 = (uint)*pbVar10;
            lVar18 = 0x18950f5f9acbc40c;
            local_b8 = pbVar10;
            if (local_e0 != 0) {
              lVar18 = -0x760fdc1afc98096c;
            }
          }
        }
        else {
          pbVar5 = local_108;
          lVar18 = -0x7b309891b0cee327;
          if ((lVar17 != 0xa93d39c1f756203) &&
             (pbVar5 = pbVar12, lVar18 = lVar17, lVar17 == 0xbacab81abb31f89)) {
            local_188 = (uint)*local_c0;
            bVar9 = local_188 == 0;
            lVar18 = 0x5e1d9776c3346af9;
            lVar17 = -0x75c6b439bc357e24;
            goto LAB_001e6fa8;
          }
        }
      }
      else if (lVar17 < 0x15af5640957b8c3e) {
        if (lVar17 == 0xc18376c52d7997c) {
          local_158 = *(byte **)param_3;
          bVar9 = local_158 == (byte *)0x0;
          lVar18 = 0x5cda4d8cdcc78c0e;
          lVar17 = -0x2941a20700173ffc;
          goto LAB_001e6fa8;
        }
        if (lVar17 == 0xd1ed160c559152c) {
          uVar16 = (ulong)(local_14c >> 3) & 0x1ffffff8;
          lVar18 = 0xbacab81abb31f89;
          *(ulong *)((long)local_b0 + uVar16) =
               *(ulong *)((long)local_b0 + uVar16) | 1L << ((ulong)local_14c & 0x3f);
          local_1a8 = local_180 + 1;
          local_18c = (uint)*local_1a8;
          bVar9 = local_18c == 0;
          lVar17 = -0xb9715b8979f7d33;
          goto LAB_001e5668;
        }
        pbVar11 = local_198;
        if (lVar17 == 0x14996c4a2edcd7b8) {
LAB_001e60a4:
          lVar18 = 0x38dcd2690fefd83c;
          local_168 = pbVar11;
        }
      }
      else if (lVar17 < 0x18950f5f9acbc40c) {
        unaff_x23 = local_e8;
        lVar18 = -0xbbaf2345e37dd60;
        uVar8 = local_184;
        if ((lVar17 != 0x15af5640957b8c3e) &&
           (unaff_x23 = pbVar21, lVar18 = lVar17, uVar8 = uVar14, lVar17 == 0x16719e03f6bac21d)) {
          if (*(long *)(lVar2 + 0x28) == local_b0[8]) {
            return local_f8;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else {
        lVar18 = 0x5408d3bc6061f1d1;
        if ((lVar17 != 0x18950f5f9acbc40c) &&
           (pbVar11 = local_b8, lVar18 = lVar17, lVar17 == 0x1c039adc9c242f08)) goto LAB_001e60a4;
      }
      goto LAB_001e5674;
    }
    if (lVar17 < 0x553ff0e638d8b04c) {
      if (lVar17 < 0x42e31b9b931691d4) {
        pbVar4 = local_c8;
        lVar18 = 0x952495cae57ae98;
        if (lVar17 != 0x33953cc7b3e45706) {
          if (lVar17 == 0x38dcd2690fefd83c) {
            local_1b8 = local_168;
            local_198 = local_168 + 1;
            pbVar4 = pbVar10;
            lVar18 = -0x24a6c1aed81e45b8;
            if (*local_168 != local_dc && *local_168 != 0) {
              lVar18 = 0x14996c4a2edcd7b8;
            }
          }
          else {
            pbVar4 = pbVar10;
            lVar18 = lVar17;
            if (lVar17 == 0x39af1ae683ec7d89) {
              local_dc = (uint)*param_2;
              local_1ac = local_dc == 0;
              local_b0[1] = 0;
              local_b0[0] = 0;
              local_b0[3] = 0;
              local_b0[2] = 0;
              lVar18 = 0x51f9122c645eb44b;
              local_c0 = pbVar20;
              if (!(bool)local_1ac) {
                lVar18 = 0x71a1b60c2d3020c3;
              }
            }
          }
        }
        goto LAB_001e5674;
      }
      pbVar4 = local_f0;
      lVar18 = 0x952495cae57ae98;
      if (lVar17 == 0x42e31b9b931691d4) goto LAB_001e5674;
      if (lVar17 != 0x51f9122c645eb44b) {
        pbVar4 = pbVar10;
        lVar18 = lVar17;
        if (lVar17 == 0x5408d3bc6061f1d1) {
          local_f8 = (byte *)0x0;
          goto LAB_001e6ca0;
        }
        goto LAB_001e5674;
      }
      bVar9 = *local_c0 == 0;
      lVar18 = -0x38d34c0beb76f4aa;
      lVar17 = -0x7d9f7b6bb89f1cd3;
    }
    else {
      if (lVar17 < 0x675e05399f995d8e) {
        if (lVar17 == 0x553ff0e638d8b04c) {
          local_b0[5] = 0;
          local_b0[4] = 0;
          local_b0[7] = 0;
          local_b0[6] = 0;
          param_5 = param_2;
          lVar18 = -0x5c0b05f8eb36e4c6;
          uVar7 = local_dc;
        }
        else if (lVar17 == 0x5cda4d8cdcc78c0e) {
          local_f8 = (byte *)0x0;
          lVar18 = 0x16719e03f6bac21d;
        }
        else {
          pbVar11 = local_c0;
          if (lVar17 == 0x5e1d9776c3346af9) {
LAB_001e6164:
            pbVar4 = pbVar11;
            unaff_x24 = pbVar22;
            lVar18 = 0x952495cae57ae98;
          }
        }
        goto LAB_001e5674;
      }
      if (0x7a9bcd40c6c39be4 < lVar17) {
        if (lVar17 == 0x7a9bcd40c6c39be5) {
          local_148 = pbVar22 + 1;
          lVar18 = -0x52bf327ff4ce5fc6;
          local_f0 = pbVar22;
          if (*pbVar22 != local_dc) {
            lVar18 = 0x42e31b9b931691d4;
          }
        }
        else {
          pbVar11 = local_b8;
          if (lVar17 == 0x7b12ba36dfe3331c) {
LAB_001e7028:
            lVar18 = -0x5e1fdf78776f0eed;
            local_100 = pbVar11;
          }
        }
        goto LAB_001e5674;
      }
      param_5 = local_160;
      lVar18 = -0x5c0b05f8eb36e4c6;
      uVar7 = local_13c;
      if ((lVar17 == 0x675e05399f995d8e) ||
         (param_5 = pbVar13, lVar18 = lVar17, uVar7 = uVar15, lVar17 != 0x71a1b60c2d3020c3))
      goto LAB_001e5674;
      bVar9 = param_2[1] == 0;
      lVar18 = -0x23a331cb12cbc9d0;
      lVar17 = -0x3827f0da3b71cf9b;
    }
LAB_001e6fa8:
    pbVar4 = pbVar10;
    pbVar5 = pbVar12;
    param_5 = pbVar13;
    uVar7 = uVar15;
    if (!bVar9) {
      lVar18 = lVar17;
    }
    goto LAB_001e5674;
  }
  if (lVar17 < -0x554301dbdde0ca2c) {
    if (lVar17 < -0x72e7d823e5b593c3) {
      if (lVar17 < -0x7afb448e7eb8b5a7) {
        if (lVar17 == -0x7e466004dbd092fa) {
          bVar9 = param_2[1] == 0;
          lVar18 = 0x1c039adc9c242f08;
          lVar17 = 0x553ff0e638d8b04c;
          goto LAB_001e6fa8;
        }
        pbVar11 = local_c0;
        if (lVar17 == -0x7d9f7b6bb89f1cd3) goto LAB_001e7028;
        if (lVar17 != -0x7b309891b0cee327) goto LAB_001e5674;
        local_108 = pbVar12 + 1;
        bVar9 = *local_108 == 0;
        lVar17 = 0xa93d39c1f756203;
        lVar18 = -0x16f1e5fa5f3754a5;
      }
      else {
        if (lVar17 != -0x7afb448e7eb8b5a7) {
          if (lVar17 == -0x760fdc1afc98096c) {
            lVar18 = 0x7b12ba36dfe3331c;
            if ((local_1ac & 1) == 0) {
              lVar18 = -0x7e466004dbd092fa;
            }
          }
          else if (lVar17 == -0x75c6b439bc357e24) {
            uVar6 = (ulong)local_188;
            unaff_x25 = local_c0;
            lVar18 = -0x7afb448e7eb8b5a7;
          }
          goto LAB_001e5674;
        }
        bVar9 = (*(ulong *)((long)local_b0 + (uVar16 >> 3 & 0x1ffffff8)) >> (uVar16 & 0x3f) & 1) ==
                0;
        lVar18 = -0x456589fe466012e2;
        lVar17 = -0x6bccf2492602d436;
        local_170 = pbVar23;
      }
    }
    else if (lVar17 < -0x689f306bde299b82) {
      in_x13 = param_1;
      lVar18 = 0x39af1ae683ec7d89;
      if (lVar17 == -0x72e7d823e5b593c3) goto LAB_001e5674;
      if (lVar17 != -0x6bccf2492602d436) {
        in_x13 = pbVar20;
        lVar18 = lVar17;
        if (lVar17 == -0x68f444208277a4db) {
          lVar18 = lVar1;
        }
        goto LAB_001e5674;
      }
      local_c8 = local_170 + 1;
      local_12c = (uint)*local_c8;
      bVar9 = local_12c == 0;
      lVar17 = -0x3107dc1fe97c932f;
      lVar18 = 0x33953cc7b3e45706;
    }
    else {
      if (lVar17 < -0x5e1fdf78776f0eed) {
        pbVar3 = local_e8;
        lVar18 = -0x554301dbdde0ca2c;
        if ((lVar17 != -0x689f306bde299b82) &&
           (pbVar3 = pbVar11, lVar18 = lVar17, lVar17 == -0x61a21996f647e3aa)) {
          local_178 = local_118;
          local_1a0 = local_118 + ((long)local_128 - (long)local_120);
          *(byte **)param_3 = local_1a0;
          lVar18 = -0xbd76994df8af996;
          if (*local_1a0 != 0) {
            lVar18 = -0x29d5f6a10f86b08c;
          }
        }
        goto LAB_001e5674;
      }
      pbVar5 = local_100;
      in_x12 = local_100;
      lVar18 = -0x7b309891b0cee327;
      if ((lVar17 == -0x5e1fdf78776f0eed) ||
         (pbVar5 = pbVar12, in_x12 = pbVar19, lVar18 = lVar17, lVar17 != -0x5c0b05f8eb36e4c6))
      goto LAB_001e5674;
      uVar16 = (ulong)(uVar15 >> 3) & 0x1ffffff8;
      lVar18 = -0x3cf562eeeb01cc12;
      *(ulong *)((long)local_b0 + uVar16 + 0x20) =
           *(ulong *)((long)local_b0 + uVar16 + 0x20) | 1L << ((ulong)uVar15 & 0x3f);
      local_160 = pbVar13 + 1;
      local_13c = (uint)*local_160;
      bVar9 = local_13c == 0;
      lVar17 = 0x675e05399f995d8e;
    }
LAB_001e5668:
    pbVar5 = pbVar12;
    in_x12 = pbVar19;
    in_x13 = pbVar20;
    if (!bVar9) {
      lVar18 = lVar17;
    }
    goto LAB_001e5674;
  }
  if (lVar17 < -0x32f7034afe95e1a8) {
    if (-0x3cf562eeeb01cc13 < lVar17) {
      unaff_x23 = local_b8;
      lVar18 = -0xbbaf2345e37dd60;
      uVar8 = local_e0;
      if (((lVar17 != -0x3cf562eeeb01cc12) &&
          (unaff_x23 = pbVar21, lVar18 = 0x5408d3bc6061f1d1, uVar8 = uVar14,
          lVar17 != -0x38d34c0beb76f4aa)) &&
         (lVar18 = lVar17, uVar15 = local_dc, pbVar11 = param_2, lVar17 == -0x3827f0da3b71cf9b)) {
LAB_001e6764:
        local_180 = pbVar11;
        unaff_x23 = pbVar21;
        lVar18 = 0xd1ed160c559152c;
        uVar8 = uVar14;
        local_14c = uVar15;
      }
      goto LAB_001e5674;
    }
    if (lVar17 != -0x554301dbdde0ca2c) {
      unaff_x24 = local_148;
      lVar18 = 0x7a9bcd40c6c39be5;
      if ((lVar17 != -0x52bf327ff4ce5fc6) &&
         (pbVar11 = local_170, unaff_x24 = pbVar22, lVar18 = lVar17, lVar17 == -0x456589fe466012e2))
      goto LAB_001e6164;
      goto LAB_001e5674;
    }
    local_118 = local_b8;
    pbVar19 = local_118;
  }
  else {
    if (lVar17 < -0x2941a20700173ffc) {
      if (lVar17 == -0x32f7034afe95e1a8) {
        local_e8 = local_110 + 1;
        local_184 = (uint)*local_e8;
        lVar18 = -0x689f306bde299b82;
        if (local_184 != 0) {
          lVar18 = 0x15af5640957b8c3e;
        }
      }
      else {
        uVar6 = (ulong)local_12c;
        unaff_x25 = local_c8;
        lVar18 = -0x7afb448e7eb8b5a7;
        if ((lVar17 != -0x3107dc1fe97c932f) &&
           (uVar6 = uVar16, unaff_x25 = pbVar23, lVar18 = lVar17, lVar17 == -0x29d5f6a10f86b08c)) {
          local_f8 = local_178;
          *(byte **)param_3 = local_1a0 + 1;
          *local_1a0 = 0;
          lVar18 = 0x16719e03f6bac21d;
        }
      }
      goto LAB_001e5674;
    }
    if (lVar17 < -0x23a331cb12cbc9d0) {
      in_x13 = local_158;
      lVar18 = 0x39af1ae683ec7d89;
      if ((lVar17 == -0x2941a20700173ffc) ||
         (in_x13 = pbVar20, lVar18 = lVar17, lVar17 != -0x24a6c1aed81e45b8)) goto LAB_001e5674;
      local_118 = local_b8;
      pbVar11 = local_1b8;
      pbVar19 = local_118;
    }
    else {
      unaff_x24 = local_c0;
      lVar18 = 0x7a9bcd40c6c39be5;
      if ((lVar17 == -0x23a331cb12cbc9d0) ||
         (unaff_x24 = pbVar22, lVar18 = lVar17, pbVar11 = local_108, lVar17 != -0x16f1e5fa5f3754a5))
      goto LAB_001e5674;
    }
  }
  local_118 = pbVar19;
  local_128 = pbVar11;
  in_x13 = pbVar20;
  unaff_x24 = pbVar22;
  lVar18 = -0x61a21996f647e3aa;
  local_120 = local_118;
  goto LAB_001e5674;
}

