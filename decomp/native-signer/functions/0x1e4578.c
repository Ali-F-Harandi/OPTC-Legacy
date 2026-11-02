// rea decompile_all
// name: FUN_001e4578
// address: 0x1e4578
// body: available
// range: 0x1e4578-0x1e5153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1e5150 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_001e4578(byte *param_1,byte *param_2,undefined8 param_3,byte *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  byte *pbVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *in_x7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  byte *in_x12;
  uint uVar13;
  ulong uVar14;
  byte *in_x16;
  byte *pbVar15;
  byte *pbVar16;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *pbVar17;
  byte *unaff_x26;
  byte *pbVar18;
  byte *unaff_x30;
  byte *local_d0;
  byte *local_c8;
  byte *local_c0;
  uint local_b4;
  byte *local_b0;
  byte *local_a8;
  uint local_9c;
  ulong local_90 [5];
  long local_68;
  
  local_b4 = 0;
  local_9c = 0;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar16 = *(byte **)param_1;
  puVar1 = (undefined1 *)0xa422ccb0ad4229c5;
  if (pbVar16 != (byte *)0x0) {
    puVar1 = (undefined1 *)0x3132af798d39a4e3;
  }
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  pbVar3 = param_1;
  pbVar6 = param_2;
  uVar14 = 0;
  puVar10 = (undefined1 *)0x7ededfa0c0eeb47a;
LAB_001e46a4:
  while (pbVar18 = unaff_x26, pbVar17 = unaff_x24, pbVar15 = in_x16, puVar9 = puVar10,
        pbVar8 = in_x7, uVar7 = uVar14, pbVar5 = pbVar3, pbVar3 = pbVar5, uVar14 = uVar7,
        in_x7 = pbVar8, puVar10 = puVar9, in_x16 = pbVar15, unaff_x24 = pbVar17, unaff_x26 = pbVar18
        , -0x2f698491beb5023 < (long)puVar9) {
    if ((long)puVar9 < 0x5c75d317cff2739f) {
      if ((long)puVar9 < 0x242c94bb96617abb) {
        if ((long)puVar9 < 0x205d1929c40a5522) {
          in_x7 = pbVar5;
          puVar10 = (undefined1 *)0x939eea0b05eec05c;
          if ((puVar9 != (undefined1 *)0xfd0967b6e414afde) &&
             (in_x7 = pbVar8, puVar10 = puVar9, puVar9 == (undefined1 *)0x1f2c3b62b1679b)) {
            if (*(long *)(lVar2 + 0x28) == local_68) {
              return pbVar16;
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
        }
        else if (puVar9 == (undefined1 *)0x205d1929c40a5522) {
          local_90[1] = 0;
          local_90[0] = 0;
          local_90[3] = 0;
          local_90[2] = 0;
          puVar10 = (undefined1 *)0x926de49d3b08a3c9;
          local_a8 = param_2;
          local_9c = uVar11;
        }
        else {
          pbVar5 = param_4;
          if (puVar9 == (undefined1 *)0x236d10b4e1dc5a1e) goto LAB_001e4aa8;
        }
      }
      else if ((long)puVar9 < 0x4dc5ede807dc3016) {
        if (puVar9 == (undefined1 *)0x242c94bb96617abb) {
          puVar10 = (undefined1 *)0x80f2364c5c89acff;
          if (param_2[1] != 0) {
            puVar10 = (undefined1 *)0x205d1929c40a5522;
          }
        }
        else if (puVar9 == (undefined1 *)0x3132af798d39a4e3) {
          uVar11 = (uint)*param_2;
          puVar9 = (undefined1 *)0x242c94bb96617abb;
          puVar10 = (undefined1 *)0x5c75d317cff2739f;
          bVar4 = uVar11 == 0;
          goto LAB_001e4698;
        }
      }
      else if (puVar9 == (undefined1 *)0x4dc5ede807dc3016) {
        puVar10 = (undefined1 *)0xae2afb10eb6df44e;
        local_b0 = pbVar17;
        if ((*(ulong *)((long)local_90 + (uVar7 >> 3 & 0x1ffffff8)) >> (uVar7 & 0x3f) & 1) != 0) {
          puVar10 = (undefined1 *)0x635f31928f91aac5;
        }
      }
      else if (puVar9 == (undefined1 *)0x5aba0b6a880053f8) {
        puVar10 = (undefined1 *)0x926de49d3b08a3c9;
        local_a8 = unaff_x30;
        local_9c = local_b4;
      }
    }
    else if ((long)puVar9 < 0x66d97625bdcfaa84) {
      puVar10 = (undefined1 *)0x5e955a53164f3d9f;
      in_x16 = pbVar16;
      if (puVar9 != (undefined1 *)0x5c75d317cff2739f) {
        if (puVar9 == (undefined1 *)0x5e955a53164f3d9f) {
          unaff_x23 = pbVar15 + 1;
          puVar10 = (undefined1 *)0xd4f46c31434e6776;
          in_x16 = pbVar15;
          local_c8 = pbVar15;
          if (*pbVar15 != 0) {
            puVar10 = (undefined1 *)0xfbc60408ae501f9e;
          }
        }
        else {
          pbVar5 = local_b0;
          puVar10 = puVar9;
          in_x16 = pbVar15;
          if (puVar9 == (undefined1 *)0x635f31928f91aac5) {
LAB_001e4aa8:
            pbVar3 = pbVar5;
            puVar10 = (undefined1 *)0xfd0967b6e414afde;
            in_x16 = pbVar15;
          }
        }
      }
    }
    else if ((long)puVar9 < 0x79de56917a785edc) {
      uVar14 = (ulong)uVar12;
      puVar10 = (undefined1 *)0x4dc5ede807dc3016;
      unaff_x24 = pbVar16;
      if ((puVar9 != (undefined1 *)0x66d97625bdcfaa84) &&
         (uVar14 = uVar7, puVar10 = puVar9, unaff_x24 = pbVar17,
         puVar9 == (undefined1 *)0x67be2c6e2af44868)) {
        pbVar6 = pbVar18 + 1;
        puVar9 = (undefined1 *)0xa65336067b959657;
        bVar4 = *pbVar18 == uVar11 || *pbVar18 == 0;
        puVar10 = (undefined1 *)0xf2bc86cfcf60b6d9;
        local_c0 = pbVar18;
        goto LAB_001e4698;
      }
    }
    else if (puVar9 == (undefined1 *)0x79de56917a785edc) {
      uVar12 = (uint)*pbVar16;
      puVar10 = (undefined1 *)0xaf48e395b2299f45;
      if (uVar12 != 0) {
        puVar10 = (undefined1 *)0x66d97625bdcfaa84;
      }
    }
    else if (puVar9 == (undefined1 *)0x7ededfa0c0eeb47a) {
      puVar10 = puVar1;
    }
  }
  if (-0x50b71c6a4dd660bc < (long)puVar9) {
    if ((long)puVar9 < -0x13f6cef773005e97) {
      pbVar3 = pbVar16;
      puVar10 = (undefined1 *)0xfd0967b6e414afde;
      if (puVar9 == (undefined1 *)0xaf48e395b2299f45) goto LAB_001e46a4;
      if (puVar9 == &DAT_c4c956bc7e2b1c5a) {
        in_x12 = (byte *)0x0;
        pbVar3 = pbVar5;
        puVar10 = (undefined1 *)0xf7b3adcf918810f6;
        goto LAB_001e46a4;
      }
      pbVar3 = pbVar5;
      pbVar8 = local_c8;
      puVar10 = puVar9;
      if (puVar9 != (undefined1 *)0xd4f46c31434e6776) goto LAB_001e46a4;
    }
    else {
      if (-0x84c52306e77ef0b < (long)puVar9) {
        if (puVar9 == (undefined1 *)0xf7b3adcf918810f6) {
          *(byte **)param_1 = in_x12;
          puVar10 = (undefined1 *)0x1f2c3b62b1679b;
        }
        else if (puVar9 == (undefined1 *)0xfbc60408ae501f9e) {
          puVar10 = (undefined1 *)0x5e955a53164f3d9f;
          in_x16 = unaff_x23;
        }
        goto LAB_001e46a4;
      }
      uVar14 = (ulong)uVar13;
      puVar10 = (undefined1 *)0x4dc5ede807dc3016;
      unaff_x24 = param_4;
      if ((puVar9 == (undefined1 *)0xec0931088cffa169) ||
         (uVar14 = uVar7, pbVar8 = local_c0, puVar10 = puVar9, unaff_x24 = pbVar17,
         puVar9 != (undefined1 *)0xf2bc86cfcf60b6d9)) goto LAB_001e46a4;
    }
    pbVar3 = pbVar5;
    uVar14 = uVar7;
    in_x7 = pbVar8;
    puVar10 = (undefined1 *)0x939eea0b05eec05c;
    unaff_x24 = pbVar17;
    goto LAB_001e46a4;
  }
  if ((long)puVar9 < -0x6c6115f4fa113fa4) {
    puVar10 = (undefined1 *)0x67be2c6e2af44868;
    unaff_x26 = pbVar16;
    if (puVar9 == (undefined1 *)0x80f2364c5c89acff) goto LAB_001e46a4;
    if (puVar9 == (undefined1 *)0x8d9cde8a92cc3625) {
      in_x12 = local_d0 + 1;
      *local_d0 = 0;
      puVar10 = (undefined1 *)0xf7b3adcf918810f6;
      unaff_x26 = pbVar18;
      goto LAB_001e46a4;
    }
    puVar10 = puVar9;
    unaff_x26 = pbVar18;
    if (puVar9 != (undefined1 *)0x926de49d3b08a3c9) goto LAB_001e46a4;
    uVar14 = (ulong)(local_9c >> 3) & 0x1ffffff8;
    puVar9 = (undefined1 *)0x5aba0b6a880053f8;
    *(ulong *)((long)local_90 + uVar14) =
         *(ulong *)((long)local_90 + uVar14) | 1L << ((ulong)local_9c & 0x3f);
    unaff_x30 = local_a8 + 1;
    local_b4 = (uint)*unaff_x30;
    bVar4 = local_b4 == 0;
    puVar10 = (undefined1 *)0x79de56917a785edc;
  }
  else {
    if ((long)puVar9 < -0x59acc9f9846a69a9) {
      if (puVar9 == (undefined1 *)0x939eea0b05eec05c) {
        puVar10 = &DAT_c4c956bc7e2b1c5a;
        local_d0 = pbVar8;
        if (*pbVar8 != 0) {
          puVar10 = (undefined1 *)0x8d9cde8a92cc3625;
        }
      }
      else if (puVar9 == (undefined1 *)0xa422ccb0ad4229c5) {
        puVar10 = (undefined1 *)0x1f2c3b62b1679b;
      }
      goto LAB_001e46a4;
    }
    puVar10 = (undefined1 *)0x67be2c6e2af44868;
    unaff_x26 = pbVar6;
    if ((puVar9 == (undefined1 *)0xa65336067b959657) ||
       (puVar10 = puVar9, unaff_x26 = pbVar18, puVar9 != (undefined1 *)0xae2afb10eb6df44e))
    goto LAB_001e46a4;
    param_4 = local_b0 + 1;
    uVar13 = (uint)*param_4;
    bVar4 = uVar13 == 0;
    puVar9 = (undefined1 *)0xec0931088cffa169;
    puVar10 = (undefined1 *)0x236d10b4e1dc5a1e;
  }
LAB_001e4698:
  uVar14 = uVar7;
  unaff_x24 = pbVar17;
  unaff_x26 = pbVar18;
  if (!bVar4) {
    puVar10 = puVar9;
  }
  goto LAB_001e46a4;
}

