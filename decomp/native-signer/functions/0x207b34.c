// rea decompile_all
// name: FUN_00207b34
// address: 0x207b34
// body: available
// range: 0x207b34-0x2083ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2083a8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00207b34(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long unaff_x23;
  undefined *unaff_x25;
  uint uVar16;
  long unaff_x27;
  long unaff_x28;
  undefined1 auVar17 [16];
  long local_340;
  long lStack_338;
  long local_330;
  long lStack_328;
  undefined *local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  long local_2f8;
  long local_2d0;
  long lStack_2c8;
  ulong local_2c0;
  long local_2b8;
  byte local_2b0 [64];
  ulong local_270 [66];
  
  lVar4 = tpidr_el0;
  local_270[0x40] = *(long *)(lVar4 + 0x28);
  *param_1 = param_2;
  FUN_00202858();
  local_2b0[8] = 0;
  local_2b0[9] = 0;
  local_2b0[10] = 0;
  local_2b0[0xb] = 0;
  local_2b0[0xc] = 0;
  local_2b0[0xd] = 0;
  local_2b0[0xe] = 0;
  local_2b0[0xf] = 0;
  local_2b0[0] = 0;
  local_2b0[1] = 0;
  local_2b0[2] = 0;
  local_2b0[3] = 0;
  local_2b0[4] = 0;
  local_2b0[5] = 0;
  local_2b0[6] = 0;
  local_2b0[7] = 0;
  local_2b0[0x18] = 0;
  local_2b0[0x19] = 0;
  local_2b0[0x1a] = 0;
  local_2b0[0x1b] = 0;
  local_2b0[0x1c] = 0;
  local_2b0[0x1d] = 0;
  local_2b0[0x1e] = 0;
  local_2b0[0x1f] = 0;
  local_2b0[0x10] = 0;
  local_2b0[0x11] = 0;
  local_2b0[0x12] = 0;
  local_2b0[0x13] = 0;
  local_2b0[0x14] = 0;
  local_2b0[0x15] = 0;
  local_2b0[0x16] = 0;
  local_2b0[0x17] = 0;
  local_2b0[0x28] = 0;
  local_2b0[0x29] = 0;
  local_2b0[0x2a] = 0;
  local_2b0[0x2b] = 0;
  local_2b0[0x2c] = 0;
  local_2b0[0x2d] = 0;
  local_2b0[0x2e] = 0;
  local_2b0[0x2f] = 0;
  local_2b0[0x20] = 0;
  local_2b0[0x21] = 0;
  local_2b0[0x22] = 0;
  local_2b0[0x23] = 0;
  local_2b0[0x24] = 0;
  local_2b0[0x25] = 0;
  local_2b0[0x26] = 0;
  local_2b0[0x27] = 0;
  local_2b0[0x38] = 0;
  local_2b0[0x39] = 0;
  local_2b0[0x3a] = 0;
  local_2b0[0x3b] = 0;
  local_2b0[0x3c] = 0;
  local_2b0[0x3d] = 0;
  local_2b0[0x3e] = 0;
  local_2b0[0x3f] = 0;
  local_2b0[0x30] = 0;
  local_2b0[0x31] = 0;
  local_2b0[0x32] = 0;
  local_2b0[0x33] = 0;
  local_2b0[0x34] = 0;
  local_2b0[0x35] = 0;
  local_2b0[0x36] = 0;
  local_2b0[0x37] = 0;
  bVar3 = false;
  puVar6 = &DAT_00103000;
  lVar7 = 0;
  lVar8 = 2;
  puVar1 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar15 = puVar1, lVar13 = lVar8, lVar12 = lVar7, puVar10 = puVar6,
                puVar1 = puVar15, puVar6 = puVar10, lVar7 = lVar12, lVar8 = lVar13,
                (long)puVar15 < 0x52cde6c2dea1be4) {
            if ((long)puVar15 < -0x2ddd98d59c65e2d2) {
              if ((long)puVar15 < -0x3dc07bfa902cf42a) {
                puVar1 = (undefined1 *)0xf54c5df74fcabc41;
                if ((puVar15 != (undefined1 *)0xaa46adf0a78af8c7) &&
                   (puVar1 = puVar15, puVar15 == (undefined1 *)0xbf711ec4fafe862e)) {
                  local_2b8 = local_2f8;
                  lStack_2c8 = lStack_328;
                  local_2d0 = local_330;
                  puVar1 = (undefined1 *)0xd222672a639a1d2e;
                }
              }
              else {
                puVar1 = (undefined1 *)0x6b5051bf1aed633d;
                if ((puVar15 != (undefined1 *)0xc23f84056fd30bd6) &&
                   (puVar1 = puVar15, puVar15 == (undefined1 *)0xc89737e2f8768a05)) {
                  uVar14 = FUN_002027c4(param_1 + 2);
                  unaff_x23 = lVar13 + 1;
                  uVar11 = 1L << ((ulong)~(uint)local_2b0[lVar13] & 0x3f);
                  puVar1 = (undefined1 *)0x353e7cd16df664a2;
                  if (unaff_x23 != 0x40) {
                    puVar1 = (undefined1 *)0x52cde6c2dea1be4;
                  }
                  *(ulong *)(param_1 + lVar13 * 2 + 4) = uVar11 - 1 & uVar14 | uVar11;
                }
              }
            }
            else if ((long)puVar15 < -0x9ea7f7bbe4e2504) {
              if (puVar15 == (undefined1 *)0xd222672a639a1d2e) {
                auVar17._8_8_ = uStack_308;
                auVar17._0_8_ = local_310;
                lStack_338 = lStack_2c8;
                local_340 = local_2d0;
                auVar5._8_8_ = lStack_2c8;
                auVar5._0_8_ = local_2d0;
                auVar17 = NEON_ushl(auVar17,auVar5,8);
                bVar3 = (auVar17._8_8_ & 0x8000000000000000) != 0;
                puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
                unaff_x28 = local_2b8;
                if ((auVar17._0_8_ & 0x8000000000000000) == 0) {
                  puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
                }
              }
              else if (puVar15 == (undefined1 *)0xf54c5df74fcabc41) {
                puVar1 = (undefined1 *)0xf6c71d76f8b48eb9;
                if (!bVar3) {
                  puVar1 = (undefined1 *)0xc23f84056fd30bd6;
                }
              }
            }
            else if (puVar15 == &DAT_f615808441b1dafc) {
              uVar9 = FUN_0020275c(param_1 + 2);
              unaff_x27 = lVar12 + 1;
              uVar2 = 0;
              uVar16 = (uint)unaff_x27;
              if (uVar16 != 0) {
                uVar2 = uVar9 / uVar16;
              }
              uVar9 = uVar9 - uVar2 * uVar16;
              puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
              if (unaff_x27 != 0x40) {
                puVar1 = (undefined1 *)0x125dd2cc844aecb4;
              }
              local_2b0[lVar12] = local_2b0[uVar9];
              local_2b0[uVar9] = (byte)lVar12;
            }
            else if (puVar15 == (undefined1 *)0xf63b36e7a9d9f670) {
              local_270[unaff_x28] = local_270[unaff_x28] | local_2c0;
              puVar1 = (undefined1 *)0xf54c5df74fcabc41;
            }
            else if (puVar15 == (undefined1 *)0xf6c71d76f8b48eb9) {
              uVar14 = unaff_x28 << 3 | 8;
              *(ulong *)((long)local_270 + uVar14) =
                   *(ulong *)((long)local_270 + uVar14) | local_2c0;
              puVar1 = (undefined1 *)0x6b5051bf1aed633d;
            }
          }
          if (0x312910f1547c7c76 < (long)puVar15) break;
          if ((long)puVar15 < 0x125dd2cc844aecb4) {
            lVar8 = unaff_x23;
            puVar1 = (undefined1 *)0xc89737e2f8768a05;
            if ((puVar15 != (undefined1 *)0x52cde6c2dea1be4) &&
               (lVar8 = lVar13, puVar1 = puVar15, puVar15 == (undefined1 *)0x887e73b2c28c6a1)) {
              puVar1 = &DAT_f615808441b1dafc;
            }
          }
          else {
            lVar7 = unaff_x27;
            puVar1 = &DAT_f615808441b1dafc;
            if (puVar15 != (undefined1 *)0x125dd2cc844aecb4) {
              if (puVar15 == (undefined1 *)0x1cba5f82f77e481f) {
                unaff_x25 = local_318 + 1;
                lVar7 = lVar12;
                puVar1 = (undefined1 *)0x312910f1547c7c77;
                if (unaff_x25 != (undefined *)0x40) {
                  puVar1 = (undefined1 *)0x3b36a7a007b21166;
                }
              }
              else {
                lVar7 = lVar12;
                puVar1 = puVar15;
                if (puVar15 == (undefined1 *)0x2ce2edddaf334d81) {
                  local_2d0 = 0;
                  lStack_2c8 = 1;
                  local_2c0 = 0x8000000000000000 >> ((ulong)puVar10 & 0x3f);
                  local_310 = *(undefined8 *)(param_1 + 4 + (long)puVar10 * 2);
                  local_2b8 = 0;
                  puVar1 = (undefined1 *)0xd222672a639a1d2e;
                  local_318 = puVar10;
                  uStack_308 = local_310;
                }
              }
            }
          }
        }
        if ((long)puVar15 < 0x696b554ab6b2c8c5) break;
        if (puVar15 == (undefined1 *)0x696b554ab6b2c8c5) {
          lVar8 = 0;
          puVar1 = (undefined1 *)0xc89737e2f8768a05;
        }
        else if (puVar15 == (undefined1 *)0x6b5051bf1aed633d) {
          local_2f8 = unaff_x28 + 2;
          local_330 = local_340 + 2;
          lStack_328 = lStack_338 + 2;
          puVar1 = (undefined1 *)0x1cba5f82f77e481f;
          if (local_2f8 != 0x40) {
            puVar1 = (undefined1 *)0xbf711ec4fafe862e;
          }
        }
      }
      if (puVar15 != (undefined1 *)0x353e7cd16df664a2) break;
      local_270[1] = 0;
      local_270[0] = 0;
      local_270[3] = 0;
      local_270[2] = 0;
      local_270[5] = 0;
      local_270[4] = 0;
      local_270[7] = 0;
      local_270[6] = 0;
      local_270[9] = 0;
      local_270[8] = 0;
      local_270[0xb] = 0;
      local_270[10] = 0;
      local_270[0xd] = 0;
      local_270[0xc] = 0;
      local_270[0xf] = 0;
      local_270[0xe] = 0;
      local_270[0x11] = 0;
      local_270[0x10] = 0;
      local_270[0x13] = 0;
      local_270[0x12] = 0;
      local_270[0x15] = 0;
      local_270[0x14] = 0;
      local_270[0x17] = 0;
      local_270[0x16] = 0;
      local_270[0x19] = 0;
      local_270[0x18] = 0;
      local_270[0x1b] = 0;
      local_270[0x1a] = 0;
      local_270[0x1d] = 0;
      local_270[0x1c] = 0;
      local_270[0x1f] = 0;
      local_270[0x1e] = 0;
      local_270[0x21] = 0;
      local_270[0x20] = 0;
      local_270[0x23] = 0;
      local_270[0x22] = 0;
      local_270[0x25] = 0;
      local_270[0x24] = 0;
      local_270[0x27] = 0;
      local_270[0x26] = 0;
      local_270[0x29] = 0;
      local_270[0x28] = 0;
      local_270[0x2b] = 0;
      local_270[0x2a] = 0;
      local_270[0x2d] = 0;
      local_270[0x2c] = 0;
      local_270[0x2f] = 0;
      local_270[0x2e] = 0;
      local_270[0x31] = 0;
      local_270[0x30] = 0;
      local_270[0x33] = 0;
      local_270[0x32] = 0;
      local_270[0x35] = 0;
      local_270[0x34] = 0;
      local_270[0x37] = 0;
      local_270[0x36] = 0;
      local_270[0x39] = 0;
      local_270[0x38] = 0;
      local_270[0x3b] = 0;
      local_270[0x3a] = 0;
      local_270[0x3d] = 0;
      local_270[0x3c] = 0;
      local_270[0x3f] = 0;
      local_270[0x3e] = 0;
      puVar6 = (undefined *)0x0;
      puVar1 = (undefined1 *)0x2ce2edddaf334d81;
    }
    puVar6 = unaff_x25;
    puVar1 = (undefined1 *)0x2ce2edddaf334d81;
  } while ((puVar15 == (undefined1 *)0x3b36a7a007b21166) ||
          (puVar6 = puVar10, puVar1 = puVar15, puVar15 != (undefined1 *)0x312910f1547c7c77));
  memcpy(param_1 + 4,local_270,0x200);
  *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0x82);
  if (*(long *)(lVar4 + 0x28) != local_270[0x40]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

