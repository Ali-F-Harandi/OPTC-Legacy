// rea decompile_all
// name: FUN_001ef4b4
// address: 0x1ef4b4
// body: available
// range: 0x1ef4b4-0x1f0673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_001ef4b4(byte *param_1,uint *param_2,byte *param_3,byte *param_4,undefined8 param_5,
                   byte *param_6)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  uint unaff_10000022;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *in_x12;
  byte *pbVar16;
  uint in_w13;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  byte *unaff_x22;
  byte *pbVar25;
  byte *local_e8;
  byte *local_e0;
  byte local_d4;
  byte local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  byte local_c0;
  uint local_bc;
  byte *local_b8;
  byte *local_b0;
  byte local_a4;
  byte local_94;
  byte local_90;
  uint local_8c;
  byte *local_88;
  byte *local_80;
  uint local_74;
  byte *local_70;
  
  uVar5 = *param_2;
  pbVar1 = &DAT_f615808441b1dafc;
  if ((char)uVar5 != '\0') {
    pbVar1 = (byte *)0x125dd2cc844aecb4;
  }
  pbVar10 = param_1;
  pbVar6 = pbVar1;
  pbVar7 = &DAT_f615808441b1dafc;
  pbVar15 = (byte *)0x887e73b2c28c6a1;
LAB_001ef5ec:
  uVar17 = unaff_10000022;
  uVar18 = in_w13;
  pbVar16 = in_x12;
  pbVar14 = pbVar15;
  pbVar13 = pbVar7;
  pbVar12 = pbVar6;
  pbVar21 = param_4;
  pbVar11 = param_3;
  pbVar9 = pbVar10;
  pbVar25 = (byte *)((ulong)pbVar13 & 0xffffffff);
  pbVar10 = pbVar9;
  param_3 = pbVar11;
  param_4 = pbVar21;
  pbVar6 = pbVar12;
  pbVar7 = pbVar25;
  pbVar15 = pbVar14;
  in_x12 = pbVar16;
  in_w13 = uVar17;
  unaff_10000022 = uVar17;
  if ((long)pbVar14 < 0x125dd2cc844aecb4) {
    if (-0x3768c81d078975fc < (long)pbVar14) {
      if ((long)pbVar14 < -0x9ea7f7bbe4e2504) {
        if ((long)pbVar14 < -0x124103c739306402) {
          pbVar10 = pbVar11;
          pbVar15 = &DAT_c45038db124ae016;
          if ((pbVar14 == (byte *)0xc89737e2f8768a05) ||
             (pbVar10 = pbVar9, pbVar15 = pbVar14, pbVar14 != (byte *)0xd222672a639a1d2e))
          goto LAB_001ef5ec;
          local_70 = unaff_x22 + 1;
          local_94 = *local_70;
          pbVar15 = (byte *)0xaa46adf0a78af8c7;
          if (local_94 != 0) {
            pbVar15 = (byte *)0xf63b36e7a9d9f670;
          }
        }
        else {
          if (pbVar14 != (byte *)0xedbefc38c6cf9bfe) {
            if (pbVar14 == (byte *)0xf54c5df74fcabc41) {
              pbVar15 = (byte *)0xf6c71d76f8b48eb9;
              local_bc = (uint)CONCAT11((char)*param_2,local_90);
              local_74 = (uint)CONCAT11(*unaff_x22,local_94);
              bVar8 = local_74 == local_bc;
              pbVar10 = (byte *)0xc23f84056fd30bd6;
              goto LAB_001ef5e0;
            }
            goto LAB_001ef5ec;
          }
          local_88 = local_e8 + -1;
          pbVar15 = (byte *)0x7d8bf94548220fb8;
          if ((local_d4 & 1) == 0) {
            pbVar15 = (byte *)0x77f0428eaa711148;
          }
        }
      }
      else {
        if (-0x938e289074b7148 < (long)pbVar14) {
          param_3 = unaff_x22;
          pbVar15 = (byte *)0xc89737e2f8768a05;
          if (pbVar14 != (byte *)0xf6c71d76f8b48eb9) {
            if (pbVar14 == (byte *)0x52cde6c2dea1be4) {
              local_b8 = unaff_x22 + 2;
              local_c0 = *local_b8;
              bVar8 = local_c0 == 0;
              pbVar15 = (byte *)0x49b9b00eeff4c15a;
              pbVar10 = (byte *)0x5ece82223eee3411;
LAB_001ef5e0:
              if (!bVar8) {
                pbVar15 = pbVar10;
              }
              goto LAB_001ef5e4;
            }
            param_3 = pbVar11;
            pbVar15 = pbVar14;
            if (pbVar14 == (byte *)0x887e73b2c28c6a1) {
              pbVar15 = pbVar1;
            }
          }
          goto LAB_001ef5ec;
        }
        pbVar10 = param_1;
        pbVar15 = &DAT_c45038db124ae016;
        if ((pbVar14 == &DAT_f615808441b1dafc) ||
           (pbVar10 = pbVar9, pbVar15 = pbVar14, pbVar14 != (byte *)0xf63b36e7a9d9f670))
        goto LAB_001ef5ec;
        local_a4 = *(byte *)((long)param_2 + 2);
        pbVar15 = (byte *)0xf54c5df74fcabc41;
        if (local_a4 != 0) {
          pbVar15 = (byte *)0x52cde6c2dea1be4;
        }
      }
LAB_001ef5e4:
      pbVar10 = pbVar9;
      param_3 = pbVar11;
      pbVar6 = pbVar12;
      pbVar7 = (byte *)((ulong)pbVar13 & 0xffffffff);
      in_w13 = uVar18;
      goto LAB_001ef5ec;
    }
    if (-0x45704382c9dcec74 < (long)pbVar14) {
      if ((long)pbVar14 < -0x3dc07bfa902cf42a) {
        pbVar10 = pbVar21;
        pbVar15 = &DAT_c45038db124ae016;
        if ((pbVar14 != (byte *)0xba8fbc7d3623138d) &&
           (pbVar10 = pbVar9, pbVar15 = pbVar14, pbVar14 == (byte *)0xbf711ec4fafe862e)) {
          pbVar15 = (byte *)0x6b5051bf1aed633d;
          in_x12 = local_b0;
          in_w13 = local_cc;
          unaff_10000022 = local_cc;
        }
      }
      else {
        pbVar15 = (byte *)0x6b5051bf1aed633d;
        in_x12 = local_70;
        in_w13 = local_74;
        unaff_10000022 = local_74;
        if (pbVar14 != (byte *)0xc23f84056fd30bd6) {
          if (pbVar14 == (byte *)0xc879bc31bae5bb14) {
            pbVar10 = (byte *)FUN_001f0674(unaff_x22);
            goto LAB_001f02c0;
          }
          pbVar15 = pbVar14;
          in_x12 = pbVar16;
          in_w13 = uVar17;
          unaff_10000022 = uVar17;
          if (pbVar14 == &DAT_c45038db124ae016) {
            return pbVar9;
          }
        }
      }
      goto LAB_001ef5ec;
    }
    if (-0x579a549dca8d1cd0 < (long)pbVar14) {
      if (pbVar14 == (byte *)0xa865ab623572e331) {
        local_80 = pbVar12 + 1;
        local_d4 = *local_80 != 0;
        local_8c = ((uint)pbVar13 | (uint)*local_80) << 8;
        pbVar15 = (byte *)0x5039187a35dab08d;
        local_e8 = pbVar12;
        if (!(bool)local_d4 || local_8c == local_c4) {
          pbVar15 = (byte *)0xedbefc38c6cf9bfe;
        }
        goto LAB_001ef5e4;
      }
      if (pbVar14 == (byte *)0xaa46adf0a78af8c7) goto LAB_001f02bc;
      goto LAB_001ef5ec;
    }
    if (pbVar14 != (byte *)0x8e3a3d610d847caf) {
      if (pbVar14 == (byte *)0x960858df0b0de441) {
        bVar8 = (char)param_2[1] == '\0';
        pbVar10 = (byte *)0xc879bc31bae5bb14;
        pbVar15 = (byte *)0x36f07785a64d7584;
        goto LAB_001ef5e0;
      }
      goto LAB_001ef5ec;
    }
  }
  else if ((long)pbVar14 < 0x5039187a35dab08d) {
    if ((long)pbVar14 < 0x353e7cd16df664a2) {
      if (0x2ce2edddaf334d80 < (long)pbVar14) {
        pbVar10 = unaff_x22;
        pbVar15 = &DAT_c45038db124ae016;
        if ((pbVar14 != (byte *)0x2ce2edddaf334d81) &&
           (pbVar10 = pbVar9, pbVar15 = pbVar14, pbVar14 == (byte *)0x312910f1547c7c77)) {
          param_3 = local_e0;
          pbVar15 = (byte *)0xc89737e2f8768a05;
        }
        goto LAB_001ef5ec;
      }
      if (pbVar14 != (byte *)0x125dd2cc844aecb4) {
        if (pbVar14 == (byte *)0x1cba5f82f77e481f) {
          pbVar15 = (byte *)0x312910f1547c7c77;
          if ((local_d0 & 1) == 0) {
            pbVar15 = (byte *)0x3b36a7a007b21166;
          }
          goto LAB_001ef5e4;
        }
        goto LAB_001ef5ec;
      }
      unaff_x22 = (byte *)FUN_001ea678(param_1,(char)uVar5);
      pbVar15 = (byte *)0x696b554ab6b2c8c5;
      if (unaff_x22 != (byte *)0x0) {
        pbVar15 = (byte *)0x353e7cd16df664a2;
      }
      goto LAB_001ef5e4;
    }
    if ((long)pbVar14 < 0x3b36a7a007b21166) {
      if (pbVar14 == (byte *)0x353e7cd16df664a2) {
        local_90 = *(byte *)((long)param_2 + 1);
        bVar8 = local_90 == 0;
        pbVar10 = (byte *)0xd222672a639a1d2e;
        pbVar15 = (byte *)0x2ce2edddaf334d81;
        goto LAB_001ef5e0;
      }
      pbVar21 = (byte *)0x0;
      if (pbVar14 == (byte *)0x36f07785a64d7584) {
        pbVar10 = unaff_x22 + 3;
        bVar3 = *pbVar10;
        uVar18 = (uint)bVar3;
        uVar17 = (*param_2 & 0xff00ff00) >> 8 | (*param_2 & 0xff00ff) << 8;
        uVar4 = uVar17 >> 0x10 | uVar17 << 0x10;
        uVar19 = (uint)bVar3;
        uVar17 = (uint)*unaff_x22 << 0x18 | (uint)unaff_x22[1] << 0x10 | (uint)unaff_x22[2] << 8 |
                 uVar19;
        lVar2 = 0xc7bf249d1db72b2;
        if (uVar19 == 0 || uVar17 == uVar4) {
          lVar2 = 0x65536dc2a8308acd;
        }
        lVar23 = -0x316a2fad8e5725cc;
        pbVar15 = (byte *)0xf615808441b1dafb;
        uVar22 = 0x35dab08c;
LAB_001efd44:
        do {
          pbVar12 = pbVar15 + 1;
          do {
            while( true ) {
              while (lVar24 = lVar23, lVar23 = lVar24, lVar24 < 0x27963d1423e000f6) {
                lVar23 = lVar2;
                if (lVar24 != -0x316a2fad8e5725cc) {
                  if (lVar24 == -0x111819a4994f0fa) {
                    lVar23 = 0x3ace195dd3930386;
                    pbVar9 = param_6;
                    pbVar11 = pbVar21;
                    goto LAB_001efd44;
                  }
                  lVar23 = lVar24;
                  if (lVar24 == 0xc7bf249d1db72b2) {
                    lVar23 = 0x27963d1423e000f6;
                    pbVar15 = pbVar10;
                    uVar22 = uVar17;
                    goto LAB_001efd44;
                  }
                }
              }
              if (0x3b16db62a3c2f4fa < lVar24) break;
              if (lVar24 == 0x27963d1423e000f6) {
                uVar20 = (uint)*pbVar12;
                uVar18 = uVar22 << 8 | uVar20;
                pbVar21 = (byte *)(ulong)(uVar20 != 0);
                param_6 = pbVar12;
                lVar23 = 0x3b16db62a3c2f4fb;
                if (uVar20 == 0 || uVar18 == uVar4) {
                  lVar23 = -0x111819a4994f0fa;
                }
              }
              else if (lVar24 == 0x3ace195dd3930386) {
                pbVar10 = pbVar9 + -3;
                if (((ulong)pbVar11 & 1) == 0) {
                  pbVar10 = (byte *)0x0;
                }
                pbVar15 = &DAT_c45038db124ae016;
                goto LAB_001ef5ec;
              }
            }
            if (lVar24 == 0x3b16db62a3c2f4fb) {
              lVar23 = 0x27963d1423e000f6;
              pbVar15 = param_6;
              uVar22 = uVar18;
              goto LAB_001efd44;
            }
          } while (lVar24 != 0x65536dc2a8308acd);
          lVar23 = 0x3ace195dd3930386;
          pbVar9 = pbVar10;
          pbVar11 = (byte *)(ulong)(uVar19 != 0);
        } while( true );
      }
      goto LAB_001ef5ec;
    }
    if (pbVar14 != (byte *)0x3b36a7a007b21166) {
      if (pbVar14 == (byte *)0x418b7d3c908df894) {
        pbVar15 = (byte *)0x8e3a3d610d847caf;
        if (unaff_x22[3] != 0) {
          pbVar15 = (byte *)0x960858df0b0de441;
        }
        goto LAB_001ef5e4;
      }
      in_w13 = uVar18;
      unaff_10000022 = uVar18;
      if (pbVar14 != (byte *)0x49b9b00eeff4c15a) goto LAB_001ef5ec;
    }
  }
  else if ((long)pbVar14 < 0x6b5051bf1aed633d) {
    if ((long)pbVar14 < 0x5ece82223eee3411) {
      pbVar6 = local_80;
      pbVar7 = (byte *)(ulong)local_8c;
      pbVar15 = (byte *)0xa865ab623572e331;
      if ((pbVar14 != (byte *)0x5039187a35dab08d) &&
         (pbVar6 = pbVar12, pbVar7 = pbVar25, pbVar15 = pbVar14,
         pbVar14 == (byte *)0x58b842c6f86d5804)) {
        local_c4 = (uint)local_90 << 0x10 | (uint)local_a4 << 8 | (uint)(byte)*param_2 << 0x18;
        local_c8 = (uint)local_94 << 0x10 | (uint)local_c0 << 8 | (uint)*unaff_x22 << 0x18;
        pbVar15 = (byte *)0x75df443d79079721;
        if (local_c8 != local_c4) {
          pbVar15 = (byte *)0x7e713fa43f38c582;
        }
        goto LAB_001ef5e4;
      }
      goto LAB_001ef5ec;
    }
    if (pbVar14 == (byte *)0x5ece82223eee3411) {
      bVar8 = *(char *)((long)param_2 + 3) == '\0';
      pbVar10 = (byte *)0x418b7d3c908df894;
      pbVar15 = (byte *)0x58b842c6f86d5804;
      goto LAB_001ef5e0;
    }
    if (pbVar14 != (byte *)0x696b554ab6b2c8c5) goto LAB_001ef5ec;
  }
  else {
    if ((long)pbVar14 < 0x77f0428eaa711148) {
      if (pbVar14 != (byte *)0x6b5051bf1aed633d) {
        if (pbVar14 == (byte *)0x75df443d79079721) {
          param_4 = unaff_x22;
          pbVar15 = (byte *)0xba8fbc7d3623138d;
        }
        goto LAB_001ef5ec;
      }
      local_b0 = pbVar16 + 1;
      local_d0 = *local_b0 != 0;
      local_cc = (uVar18 & 0xff) << 8 | (uint)*local_b0;
      pbVar15 = (byte *)0xbf711ec4fafe862e;
      local_e0 = pbVar16;
      if (!(bool)local_d0 || local_cc == local_bc) {
        pbVar15 = (byte *)0x1cba5f82f77e481f;
      }
      goto LAB_001ef5e4;
    }
    if (pbVar14 != (byte *)0x77f0428eaa711148) {
      param_4 = local_88;
      pbVar15 = (byte *)0xba8fbc7d3623138d;
      if ((pbVar14 != (byte *)0x7d8bf94548220fb8) &&
         (param_4 = pbVar21, pbVar15 = pbVar14, pbVar14 == (byte *)0x7e713fa43f38c582)) {
        pbVar6 = local_b8;
        pbVar7 = (byte *)(ulong)local_c8;
        pbVar15 = (byte *)0xa865ab623572e331;
      }
      goto LAB_001ef5ec;
    }
  }
LAB_001f02bc:
  pbVar10 = (byte *)0x0;
LAB_001f02c0:
  pbVar15 = &DAT_c45038db124ae016;
  in_x12 = pbVar16;
  in_w13 = uVar18;
  unaff_10000022 = uVar18;
  goto LAB_001ef5ec;
}

