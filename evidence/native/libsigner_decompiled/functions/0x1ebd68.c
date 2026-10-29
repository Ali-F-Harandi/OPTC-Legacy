// rea decompile_all
// name: FUN_001ebd68
// address: 0x1ebd68
// body: available
// range: 0x1ebd68-0x1eccdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_001ebd68(uint *param_1,ulong param_2,uint *param_3,ulong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint unaff_10000042;
  uint *puVar8;
  ulong uVar9;
  byte *pbVar10;
  uint *puVar11;
  uint *puVar12;
  ulong uVar13;
  byte *pbVar14;
  undefined1 *puVar15;
  byte *in_x11;
  byte *pbVar16;
  uint in_w12;
  uint uVar17;
  byte *pbVar19;
  uint *unaff_x23;
  uint *unaff_x24;
  uint uVar20;
  undefined1 *puVar21;
  uint local_16c;
  long local_168;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint *local_150;
  uint local_144;
  byte *local_140;
  long local_138;
  long local_130;
  uint *local_128;
  uint local_11c;
  ulong local_118;
  ulong local_110;
  uint local_dc;
  byte *local_d8;
  byte *local_d0;
  long local_c8;
  byte *local_c0;
  byte *local_b8;
  ulong local_a8;
  uint local_9c;
  byte *local_98;
  uint local_84;
  uint *local_80;
  byte *local_78;
  long local_70;
  uint uVar18;
  
  pbVar1 = (byte *)0xbf711ec4fafe862e;
  if (param_4 != 2) {
    pbVar1 = (byte *)0x6b5051bf1aed633d;
  }
  pbVar2 = (byte *)0xba8fbc7d3623138d;
  if (param_4 != 4) {
    pbVar2 = (byte *)0xc23f84056fd30bd6;
  }
  pbVar3 = (byte *)0x58b842c6f86d5804;
  if (3 < (long)param_4) {
    pbVar3 = (byte *)0xf54c5df74fcabc41;
  }
  pbVar4 = (byte *)0xf6c71d76f8b48eb9;
  if (2 < (long)param_4) {
    pbVar4 = (byte *)0xf63b36e7a9d9f670;
  }
  pbVar5 = (byte *)0x696b554ab6b2c8c5;
  if (param_4 <= param_2) {
    pbVar5 = (byte *)0x353e7cd16df664a2;
  }
  pbVar6 = &DAT_f615808441b1dafc;
  if (param_4 != 0) {
    pbVar6 = (byte *)0x125dd2cc844aecb4;
  }
  puVar8 = param_1;
  uVar9 = param_2;
  pbVar10 = &DAT_f615808441b1dafc;
  puVar15 = (undefined1 *)((long)param_1 + param_2);
  pbVar7 = (byte *)0x887e73b2c28c6a1;
LAB_001ebf90:
  uVar18 = unaff_10000042;
  uVar17 = in_w12;
  pbVar19 = pbVar7;
  pbVar16 = in_x11;
  pbVar14 = pbVar10;
  uVar13 = uVar9;
  puVar11 = puVar8;
  puVar21 = (undefined1 *)((ulong)puVar15 & 0xffffffff);
  uVar20 = (uint)puVar15;
  pbVar7 = pbVar19;
  puVar8 = puVar11;
  uVar9 = uVar13;
  pbVar10 = pbVar14;
  puVar15 = puVar21;
  in_x11 = pbVar16;
  in_w12 = uVar17;
  unaff_10000042 = uVar18;
  if ((long)pbVar19 < 0x887e73b2c28c6a1) {
    if (-0x378643ce451a44ed < (long)pbVar19) {
      if ((long)pbVar19 < -0xab3a208b03543bf) {
        if ((long)pbVar19 < -0x2ddd98d59c65e2d2) {
          if (pbVar19 == (byte *)0xc879bc31bae5bb14) {
            local_138 = local_168 + -1;
            local_140 = local_d8 + 1;
            pbVar7 = (byte *)0x8500be9b057d300e;
            if (local_138 != 0) {
              pbVar7 = &DAT_c45038db124ae016;
            }
            local_16c = (uint)*local_140 | local_158 << 8;
          }
          else {
            in_w12 = uVar18;
            if (pbVar19 == (byte *)0xc89737e2f8768a05) {
              puVar12 = (uint *)(local_c0 + -1);
              goto LAB_001ec9a0;
            }
          }
        }
        else if (pbVar19 == (byte *)0xd222672a639a1d2e) {
          local_70 = (long)((long)param_1 + param_2) - (long)unaff_x23;
          pbVar7 = (byte *)0xaa46adf0a78af8c7;
        }
        else if (pbVar19 == (byte *)0xedbefc38c6cf9bfe) {
          local_78 = local_d0 + 1;
          local_80 = (uint *)((long)local_150 + -1);
          local_84 = (local_144 | *local_78) << 8;
          pbVar7 = (byte *)0x7d8bf94548220fb8;
          if (local_80 != (uint *)0x0) {
            pbVar7 = (byte *)0x77f0428eaa711148;
          }
        }
        else {
          in_w12 = uVar18;
          if (pbVar19 == (byte *)0xe7622641fcb090c6) {
            return unaff_x24;
          }
        }
      }
      else if ((long)pbVar19 < -0x9c4c91856260990) {
        pbVar7 = pbVar2;
        in_w12 = uVar18;
        if ((pbVar19 != (byte *)0xf54c5df74fcabc41) &&
           (pbVar7 = pbVar19, puVar12 = param_1, pbVar19 == &DAT_f615808441b1dafc)) {
LAB_001ec9a0:
          puVar8 = puVar11;
          uVar9 = uVar13;
          pbVar10 = pbVar14;
          puVar15 = puVar21;
          in_x11 = pbVar16;
          pbVar7 = (byte *)0xe7622641fcb090c6;
          unaff_x24 = puVar12;
          in_w12 = uVar18;
          unaff_10000042 = uVar18;
        }
      }
      else {
        pbVar7 = pbVar3;
        in_w12 = uVar18;
        if ((pbVar19 != (byte *)0xf63b36e7a9d9f670) &&
           ((pbVar7 = pbVar1, pbVar19 != (byte *)0xf6c71d76f8b48eb9 &&
            (pbVar7 = pbVar19, pbVar19 == (byte *)0x52cde6c2dea1be4)))) {
          local_98 = local_c0 + 1;
          local_a8 = local_118 - 1;
          pbVar7 = (byte *)0x5ece82223eee3411;
          if (local_a8 != 0) {
            pbVar7 = (byte *)0x49b9b00eeff4c15a;
          }
          local_9c = (uint)*local_98 | (local_11c & 0xff) << 8;
          in_w12 = uVar17;
        }
      }
      goto LAB_001ebf90;
    }
    if ((long)pbVar19 < -0x45704382c9dcec73) {
      if (-0x69f7a720f4f21bc0 < (long)pbVar19) {
        if (pbVar19 == (byte *)0x960858df0b0de441) {
          local_158 = local_dc;
          pbVar7 = (byte *)0x36f07785a64d7584;
          if (local_dc != local_160) {
            pbVar7 = (byte *)0xc879bc31bae5bb14;
          }
          local_d8 = local_b8;
          local_168 = local_c8;
        }
        else if (pbVar19 == (byte *)0xa865ab623572e331) {
          pbVar7 = (byte *)0x5039187a35dab08d;
          local_150 = puVar11;
          local_144 = uVar20;
          local_d0 = pbVar14;
          if (uVar20 != local_15c) {
            pbVar7 = (byte *)0xedbefc38c6cf9bfe;
          }
        }
        else {
          unaff_10000042 = uVar17;
          if (pbVar19 == (byte *)0xaa46adf0a78af8c7) {
            pbVar7 = pbVar4;
          }
        }
        goto LAB_001ebf90;
      }
      if (pbVar19 == (byte *)0x8500be9b057d300e) goto LAB_001ec99c;
      in_w12 = uVar18;
      if (pbVar19 != (byte *)0x8e3a3d610d847caf) goto LAB_001ebf90;
      local_c8 = local_130;
      local_b8 = (byte *)((long)unaff_x23 + 3);
      uVar17 = (*unaff_x23 & 0xff00ff00) >> 8 | (*unaff_x23 & 0xff00ff) << 8;
      local_dc = uVar17 >> 0x10 | uVar17 << 0x10;
    }
    else {
      if ((long)pbVar19 < -0x3f0aedafd881a303) {
        if (pbVar19 == (byte *)0xba8fbc7d3623138d) {
          uVar17 = (*param_3 & 0xff00ff00) >> 8 | (*param_3 & 0xff00ff) << 8;
          local_160 = uVar17 >> 0x10 | uVar17 << 0x10;
          local_130 = local_70 + -3;
          pbVar7 = (byte *)0x418b7d3c908df894;
          if (local_130 != 0) {
            pbVar7 = (byte *)0x8e3a3d610d847caf;
          }
        }
        else {
          in_w12 = uVar18;
          if (pbVar19 == (byte *)0xbf711ec4fafe862e) {
            local_154 = (uint)(ushort)((ushort)*param_3 >> 8) | ((ushort)*param_3 & 0xff00ff) << 8;
            local_110 = local_70 - 1;
            pbVar7 = (byte *)0x1cba5f82f77e481f;
            in_w12 = uVar17;
            if (local_110 != 0) {
              pbVar7 = (byte *)0x3b36a7a007b21166;
            }
          }
        }
        goto LAB_001ebf90;
      }
      if (pbVar19 == (byte *)0xc0f51250277e5cfd) {
        puVar12 = (uint *)FUN_001ecce0(unaff_x23,(undefined1 *)((long)unaff_x23 + local_70),param_3,
                                       param_4);
        goto LAB_001ec9a0;
      }
      pbVar7 = (byte *)0xc0f51250277e5cfd;
      in_w12 = uVar18;
      if ((pbVar19 == (byte *)0xc23f84056fd30bd6) ||
         (pbVar7 = pbVar19, pbVar19 != &DAT_c45038db124ae016)) goto LAB_001ebf90;
      local_c8 = local_138;
      local_b8 = local_140;
      local_dc = local_16c;
    }
    pbVar7 = (byte *)0x960858df0b0de441;
    in_w12 = uVar18;
    goto LAB_001ebf90;
  }
  if ((long)pbVar19 < 0x49b9b00eeff4c15a) {
    if ((long)pbVar19 < 0x312910f1547c7c77) {
      if ((long)pbVar19 < 0x1cba5f82f77e481f) {
        pbVar7 = pbVar6;
        in_w12 = uVar18;
        if ((pbVar19 != (byte *)0x887e73b2c28c6a1) &&
           (pbVar7 = pbVar19, pbVar19 == (byte *)0x125dd2cc844aecb4)) {
          pbVar7 = pbVar5;
        }
        goto LAB_001ebf90;
      }
      if (pbVar19 != (byte *)0x1cba5f82f77e481f) {
        puVar12 = unaff_x23;
        in_w12 = uVar18;
        if (pbVar19 == (byte *)0x2ce2edddaf334d81) goto LAB_001ec9a0;
        goto LAB_001ebf90;
      }
    }
    else {
      if ((long)pbVar19 < 0x36f07785a64d7584) {
        if (pbVar19 == (byte *)0x312910f1547c7c77) {
          pbVar7 = (byte *)0xc89737e2f8768a05;
          local_11c = uVar17;
          local_118 = uVar13;
          local_c0 = pbVar16;
          if (local_154 != (uVar17 & 0xffff)) {
            pbVar7 = (byte *)0x52cde6c2dea1be4;
          }
        }
        else {
          in_w12 = uVar18;
          if (pbVar19 == (byte *)0x353e7cd16df664a2) {
            unaff_x23 = (uint *)FUN_001e3448(param_1,(char)*param_3,param_2);
            pbVar7 = (byte *)0x2ce2edddaf334d81;
            in_w12 = uVar17;
            if (unaff_x23 != (uint *)0x0 && param_4 != 1) {
              pbVar7 = (byte *)0xd222672a639a1d2e;
            }
          }
        }
        goto LAB_001ebf90;
      }
      if (pbVar19 == (byte *)0x36f07785a64d7584) {
        puVar12 = (uint *)(local_d8 + -3);
        goto LAB_001ec9a0;
      }
      if (pbVar19 == (byte *)0x3b36a7a007b21166) {
        in_w12 = (uint)(ushort)((ushort)*unaff_x23 >> 8) | ((ushort)*unaff_x23 & 0xff00ff) << 8;
        uVar9 = local_110;
        in_x11 = (byte *)((long)unaff_x23 + 1);
        pbVar7 = (byte *)0x312910f1547c7c77;
        unaff_10000042 = in_w12;
        goto LAB_001ebf90;
      }
      in_w12 = uVar18;
      if (pbVar19 != (byte *)0x418b7d3c908df894) goto LAB_001ebf90;
    }
  }
  else if ((long)pbVar19 < 0x6b5051bf1aed633d) {
    if ((long)pbVar19 < 0x58b842c6f86d5804) {
      uVar9 = local_a8;
      in_x11 = local_98;
      pbVar7 = (byte *)0x312910f1547c7c77;
      in_w12 = local_9c;
      unaff_10000042 = local_9c;
      if ((pbVar19 != (byte *)0x49b9b00eeff4c15a) &&
         (uVar9 = uVar13, in_x11 = pbVar16, pbVar7 = pbVar19, in_w12 = uVar18,
         unaff_10000042 = uVar18, pbVar19 == (byte *)0x5039187a35dab08d)) {
        puVar12 = (uint *)(local_d0 + -2);
        goto LAB_001ec9a0;
      }
      goto LAB_001ebf90;
    }
    if (pbVar19 == (byte *)0x58b842c6f86d5804) {
      local_128 = (uint *)(local_70 + -2);
      local_15c = (uint)(byte)*param_3 << 0x18 | (uint)*(byte *)((long)param_3 + 1) << 0x10 |
                  (uint)*(byte *)((long)param_3 + 2) << 8;
      pbVar7 = (byte *)0x7e713fa43f38c582;
      if (local_128 != (uint *)0x0) {
        pbVar7 = (byte *)0x75df443d79079721;
      }
      goto LAB_001ebf90;
    }
    if ((pbVar19 != (byte *)0x5ece82223eee3411) &&
       (in_w12 = uVar18, pbVar19 != (byte *)0x696b554ab6b2c8c5)) goto LAB_001ebf90;
  }
  else {
    if ((long)pbVar19 < 0x77f0428eaa711148) {
      pbVar7 = (byte *)0xc0f51250277e5cfd;
      in_w12 = uVar18;
      if ((pbVar19 != (byte *)0x6b5051bf1aed633d) &&
         (pbVar7 = pbVar19, pbVar19 == (byte *)0x75df443d79079721)) {
        puVar8 = local_128;
        pbVar10 = (byte *)((long)unaff_x23 + 2);
        puVar15 = (undefined1 *)
                  (ulong)((uint)*(byte *)((long)unaff_x23 + 1) << 0x10 |
                          (uint)(byte)*unaff_x23 << 0x18 | (uint)*(byte *)((long)unaff_x23 + 2) << 8
                         );
        pbVar7 = (byte *)0xa865ab623572e331;
      }
      goto LAB_001ebf90;
    }
    puVar8 = local_80;
    pbVar10 = local_78;
    puVar15 = (undefined1 *)(ulong)local_84;
    pbVar7 = (byte *)0xa865ab623572e331;
    in_w12 = uVar18;
    if ((pbVar19 == (byte *)0x77f0428eaa711148) ||
       ((pbVar19 != (byte *)0x7d8bf94548220fb8 &&
        (puVar8 = puVar11, pbVar10 = pbVar14, puVar15 = puVar21, pbVar7 = pbVar19,
        pbVar19 != (byte *)0x7e713fa43f38c582)))) goto LAB_001ebf90;
  }
LAB_001ec99c:
  puVar12 = (uint *)0x0;
  goto LAB_001ec9a0;
}

