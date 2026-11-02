// M3d: extractToMemory @ 0x1ef0d18 (Ghidra decompile, true address)
#

ulong * m3d_1ef0d18(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong param_4,
                   ulong *param_5)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  code *pcVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 extraout_x1;
  uint uVar20;
  ulong *puVar21;
  long lVar22;
  byte *pbVar23;
  byte *pbVar24;
  byte *pbVar25;
  ulong *puVar26;
  long *plVar27;
  char *pcVar28;
  ulong uVar29;
  undefined8 *puVar30;
  long *plVar31;
  ulong uVar32;
  undefined1 auVar33 [16];
  undefined8 uStack_1a0;
  ulong uStack_198;
  ulong *puStack_190;
  ulong uStack_188;
  long lStack_180;
  undefined4 uStack_178;
  undefined8 *apuStack_170 [3];
  long lStack_158;
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  long lStack_140;
  ulong uStack_130;
  ulong uStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  ulong *puStack_110;
  ulong *puStack_108;
  undefined8 uStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  undefined1 auStack_e8 [48];
  long lStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long *plStack_50;
  long lStack_48;
  
  uVar32 = tpidr_el0;
  puVar26 = (ulong *)(param_4 & 0xffffffff);
  lStack_48 = *(long *)(uVar32 + 0x28);
  plVar8 = (long *)func_0x03f2c2a0();
  iVar7 = func_0x03f2c2b0(plVar8,param_2);
  if (iVar7 < 0) {
code_r0x01ef0df0:
    param_5 = param_3;
    puVar11 = (ulong *)0x0;
  }
  else {
    plStack_50 = plVar8;
    uVar9 = (**(code **)(*plVar8 + 0x40))(plVar8);
    if ((int)uVar9 < 0) {
code_r0x01ef0de8:
      func_0x03f2c2c0(&plStack_50);
      goto code_r0x01ef0df0;
    }
    uVar10 = func_0x03f0f980((int)uVar9 + 1);
    puVar26 = (ulong *)(uVar9 & 0x7fffffff);
    puVar11 = (ulong *)(**(code **)(*plVar8 + 0x18))(plVar8,uVar10);
    if ((ulong *)(uVar9 & 0x7fffffff) != puVar11) {
      func_0x03f0ca10(uVar10);
      goto code_r0x01ef0de8;
    }
    uVar12 = func_0x03f2c2c0(&plStack_50);
    puVar26 = (ulong *)(uVar9 & 0xffffffff);
    puVar11 = (ulong *)func_0x03f2c2d0(uVar12,uVar10);
    func_0x03f0ca10(uVar10);
  }
  if (*(long *)(uVar32 + 0x28) == lStack_48) {
    return puVar11;
  }
  func_0x03f0b330(puVar11);
  pcStack_a8 = m3d_1ef0e20;
  lVar2 = tpidr_el0;
  pcVar28 = s___0134fed1;
  lStack_b8 = *(long *)(lVar2 + 0x28);
  puVar11 = (ulong *)((ulong)puVar26 & 0xffffffff);
  uVar9 = param_5[1];
  pbVar5 = (byte *)param_5[2];
  if (((byte)*param_5 & 1) == 0) {
    pbVar5 = (byte *)((long)param_5 + 1);
    uVar9 = (ulong)(byte)((byte)*param_5 >> 1);
  }
  puVar21 = param_5;
  puStack_b0 = &stack0xffffffffffffffc0;
  lVar13 = func_0x03f0b2d0(s___0134fed1);
  pbVar3 = pbVar5 + uVar9;
  pbVar24 = pbVar3;
  if ((lVar13 != 0) && (pbVar23 = pbVar3, pbVar25 = pbVar5, uVar9 != 0)) {
    do {
      pbVar24 = pbVar23;
      if (*pbVar25 == 0x2e) {
        lVar22 = 1;
        do {
          pbVar24 = pbVar25;
          if (lVar13 == lVar22) break;
          pbVar4 = pbVar25 + lVar22;
          pbVar24 = pbVar23;
          if (pbVar4 == pbVar3) goto code_r0x01ef0eec;
          pbVar1 = (byte *)(s___0134fed1 + lVar22);
          lVar22 = lVar22 + 1;
        } while (*pbVar4 == *pbVar1);
      }
      pbVar25 = pbVar25 + 1;
      pbVar23 = pbVar24;
    } while (pbVar25 != pbVar3);
  }
code_r0x01ef0eec:
  lVar22 = (long)pbVar24 - (long)pbVar5;
  if (pbVar24 == pbVar3 && lVar13 != 0) {
    lVar22 = -1;
  }
  uVar15 = lVar22 + 1;
  if (lVar22 == uVar9 - 1 || uVar15 < 2) {
    param_5 = (ulong *)0x0;
code_r0x01ef1180:
    if (*(long *)(lVar2 + 0x28) == lStack_b8) {
      return param_5;
    }
  }
  else {
    pcVar28 = (char *)(uVar9 - uVar15);
    if (uVar9 < uVar15) {
      if (*(long *)(lVar2 + 0x28) == lStack_b8) {
        func_0x01a8c860(&uStack_100);
        goto code_r0x01ef11cc;
      }
    }
    else {
      if (pcVar28 < (ulong *)0xfffffffffffffff8) {
        if (pcVar28 < (ulong *)0x17) {
          uVar29 = (ulong)&uStack_100 | 1;
          uStack_100 = CONCAT71(uStack_100._1_7_,(char)((int)pcVar28 << 1));
          if (uVar9 != uVar15) goto code_r0x01ef0f7c;
        }
        else {
          uVar32 = ((ulong)pcVar28 & 0xfffffffffffffff8) + 8;
          if (((ulong)pcVar28 | 7) != 0x17) {
            uVar32 = (ulong)pcVar28 | 7;
          }
          uVar32 = uVar32 + 1;
          uVar29 = func_0x03f0b2e0(uVar32);
          uStack_100 = uVar32 | 1;
          puStack_f8 = (ulong *)pcVar28;
          uStack_f0 = uVar29;
code_r0x01ef0f7c:
          puVar26 = (ulong *)pcVar28;
          func_0x03f0b2f0(uVar29,pbVar5 + uVar15);
        }
        *(byte *)((long)pcVar28 + uVar29) = 0;
        puVar14 = (ulong *)func_0x03f0b2d0(s_png_01419dd6);
        uVar15 = uStack_100;
        uVar9 = uStack_100 & 0xff;
        pcVar28 = (char *)(uStack_100 >> 1 & 0x7f);
        if ((uStack_100 & 1) != 0) {
          pcVar28 = (char *)puStack_f8;
        }
        if (puVar14 == (ulong *)pcVar28) {
          puVar26 = puVar14;
          if (puVar14 == (ulong *)0xffffffffffffffff) goto code_r0x01ef11e4;
          uVar29 = uStack_f0;
          if ((uStack_100 & 1) == 0) {
            uVar29 = (long)&uStack_100 + 1;
          }
          iVar7 = func_0x03f0b3f0(uVar29,s_png_01419dd6);
          puVar26 = puVar14;
          if (iVar7 != 0) goto code_r0x01ef0fe4;
          pcVar28 = (char *)0x1;
code_r0x01ef10dc:
          func_0x03f2c2e0(auStack_e8);
          puVar26 = puVar11;
          puVar21 = (ulong *)pcVar28;
          uVar15 = func_0x03f2c2f0(auStack_e8,extraout_x1,puVar11,pcVar28,0,0,8);
          puVar14 = puRam000000000419a110;
          if ((uVar15 & 1) == 0) {
            param_5 = (ulong *)0x0;
          }
          else {
            puVar19 = (undefined8 *)*puRam000000000419a110;
            if (puVar19 == (undefined8 *)0x0) {
              puVar19 = (undefined8 *)func_0x03f0b2e0(0x30);
              puVar19[5] = 0;
              puVar19[1] = 0;
              *puVar19 = puVar19 + 1;
              puVar19[4] = 0;
              puVar19[2] = 0;
              puVar19[3] = puVar19 + 4;
              *puVar14 = (ulong)puVar19;
            }
            puVar26 = (ulong *)((long)param_5 + 1);
            if ((*param_5 & 1) != 0) {
              puVar26 = (ulong *)param_5[2];
            }
            param_5 = (ulong *)func_0x03f2c300(puVar19,auStack_e8);
            puVar11 = puVar14;
          }
          func_0x03f2c310(auStack_e8);
        }
        else {
code_r0x01ef0fe4:
          puVar14 = (ulong *)func_0x03f0b2d0(s_jpg_013610b5);
          if (puVar14 == (ulong *)pcVar28) {
            if ((ulong *)pcVar28 != (ulong *)0xffffffffffffffff) {
              uVar29 = uStack_f0;
              if ((uVar15 & 1) == 0) {
                uVar29 = (long)&uStack_100 + 1;
              }
              puVar26 = (ulong *)pcVar28;
              iVar7 = func_0x03f0b3f0(uVar29,s_jpg_013610b5);
              if (iVar7 != 0) goto code_r0x01ef1024;
code_r0x01ef10c0:
              pcVar28 = (char *)0x0;
              goto code_r0x01ef10dc;
            }
            goto code_r0x01ef11fc;
          }
code_r0x01ef1024:
          puVar14 = (ulong *)func_0x03f0b2d0(s_jpeg_0132a1d8);
          if (puVar14 == (ulong *)pcVar28) {
            if ((ulong *)pcVar28 == (ulong *)0xffffffffffffffff) goto code_r0x01ef1214;
            uVar29 = uStack_f0;
            if ((uVar15 & 1) == 0) {
              uVar29 = (long)&uStack_100 + 1;
            }
            puVar26 = (ulong *)pcVar28;
            iVar7 = func_0x03f0b3f0(uVar29,s_jpeg_0132a1d8);
            if (iVar7 == 0) goto code_r0x01ef10c0;
          }
          puVar14 = (ulong *)func_0x03f0b2d0(s_tif_013610b9);
          if (puVar14 == (ulong *)pcVar28) {
            if ((ulong *)pcVar28 == (ulong *)0xffffffffffffffff) goto code_r0x01ef122c;
            uVar29 = uStack_f0;
            if ((uVar15 & 1) == 0) {
              uVar29 = (long)&uStack_100 + 1;
            }
            puVar26 = (ulong *)pcVar28;
            iVar7 = func_0x03f0b3f0(uVar29,s_tif_013610b9);
            if (iVar7 != 0) goto code_r0x01ef10a4;
code_r0x01ef10b8:
            pcVar28 = (char *)0x2;
            goto code_r0x01ef10dc;
          }
code_r0x01ef10a4:
          uVar15 = func_0x01c3aa4c(&uStack_100,s_tiff_013a39ba);
          if ((uVar15 & 1) != 0) goto code_r0x01ef10b8;
          param_5 = (ulong *)0x0;
        }
        if ((uStack_100 & 1) != 0) {
          func_0x03f0b310(uStack_f0);
        }
        goto code_r0x01ef1180;
      }
code_r0x01ef11cc:
      if (*(long *)(lVar2 + 0x28) != lStack_b8) goto code_r0x01ef1298;
      func_0x01a77edc(&uStack_100);
code_r0x01ef11e4:
      if (*(long *)(lVar2 + 0x28) == lStack_b8) {
        func_0x01a8c860(&uStack_100);
code_r0x01ef11fc:
        if (*(long *)(lVar2 + 0x28) == lStack_b8) {
          func_0x01a8c860(&uStack_100);
code_r0x01ef1214:
          if (*(long *)(lVar2 + 0x28) == lStack_b8) {
            func_0x01a8c860(&uStack_100);
code_r0x01ef122c:
            if (*(long *)(lVar2 + 0x28) == lStack_b8) {
              param_5 = (ulong *)func_0x01a8c860(&uStack_100);
              func_0x03f2c310(auStack_e8);
              if ((uStack_100 & 1) != 0) {
                func_0x03f0b310(uStack_f0);
              }
              if (*(long *)(lVar2 + 0x28) == lStack_b8) {
                func_0x03f072dc(param_5);
              }
            }
          }
        }
      }
    }
  }
code_r0x01ef1298:
  auVar33 = func_0x03f0b330();
  plVar8 = auVar33._0_8_;
  uStack_148 = 0x1ef129c;
  lVar13 = tpidr_el0;
  lStack_158 = *(long *)(lVar13 + 0x28);
  puVar14 = puVar26;
  ppuStack_150 = &puStack_b0;
  lStack_140 = lVar2;
  uStack_130 = uVar32;
  uStack_128 = uVar9;
  puStack_120 = (ulong *)pcVar28;
  uStack_118 = extraout_x1;
  puStack_110 = puVar11;
  puStack_108 = param_5;
  if ((puVar26 == (ulong *)0x0) || ((byte)*puVar26 == 0)) {
    puVar11 = (ulong *)0x0;
  }
  else {
    puVar11 = (ulong *)func_0x03f0b2d0(puVar26);
    uVar20 = (uint)puVar14;
    if ((ulong *)0xfffffffffffffff7 < puVar11) {
      if (*(long *)(lVar13 + 0x28) == lStack_158) {
        func_0x01a77edc(&uStack_198);
        uVar10 = func_0x01a79244();
        func_0x03f2c290(&uStack_198);
        if (*(long *)(lVar13 + 0x28) == lStack_158) {
          func_0x03f072dc(uVar10);
        }
      }
      goto code_r0x01ef1584;
    }
    if (puVar11 < (ulong *)0x17) {
      uVar9 = (ulong)&uStack_198 | 1;
      uStack_198 = CONCAT71(uStack_198._1_7_,(char)((int)puVar11 << 1));
      if (puVar11 != (ulong *)0x0) goto code_r0x01ef1348;
    }
    else {
      uVar32 = ((ulong)puVar11 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar11 | 7) != 0x17) {
        uVar32 = (ulong)puVar11 | 7;
      }
      uVar9 = func_0x03f0b2e0(uVar32 + 1);
      uStack_198 = uVar32 + 1 | 1;
      puStack_190 = puVar11;
      uStack_188 = uVar9;
code_r0x01ef1348:
      puVar14 = puVar11;
      func_0x03f0b910(uVar9,puVar26);
    }
    *(byte *)((long)puVar11 + uVar9) = 0;
    lStack_180 = 0;
    uStack_178 = 1;
    plVar16 = (long *)func_0x03f2c250(plVar8,&uStack_198);
    if (lStack_180 != 0) {
      func_0x03f0bdf0();
      lStack_180 = 0;
    }
    if ((uStack_198 & 1) != 0) {
      func_0x03f0b310(uStack_188);
    }
    if (plVar8 + 1 == plVar16) {
      uVar10 = func_0x03f127a0();
      puVar14 = puVar26;
      puVar11 = (ulong *)func_0x03f2c320(uVar10,auVar33._8_8_);
      if (puVar11 != (ulong *)0x0) {
        func_0x03f2c260(&uStack_198,puVar26,puVar11);
        puVar14 = &uStack_198;
        puVar17 = (undefined8 *)func_0x03f2c270(plVar8,&uStack_1a0);
        puVar30 = (undefined8 *)*puVar17;
        puVar19 = puVar30;
        if (puVar30 == (undefined8 *)0x0) {
          func_0x03f2c280(apuStack_170,plVar8,&uStack_198);
          *apuStack_170[0] = 0;
          apuStack_170[0][1] = 0;
          apuStack_170[0][2] = uStack_1a0;
          *puVar17 = apuStack_170[0];
          puVar19 = apuStack_170[0];
          if (*(long *)*plVar8 != 0) {
            *plVar8 = *(long *)*plVar8;
            puVar19 = (undefined8 *)*puVar17;
          }
          func_0x01a78074(*plVar16,puVar19);
          plVar8[2] = plVar8[2] + 1;
          puVar19 = apuStack_170[0];
        }
        if (lStack_180 != 0) {
          func_0x03f0bdf0();
          lStack_180 = 0;
        }
        if ((uStack_198 & 1) != 0) {
          func_0x03f0b310(uStack_188);
        }
        if (puVar30 == (undefined8 *)0x0) {
          plVar27 = plVar8 + 4;
          plVar16 = (long *)*plVar27;
          plVar31 = plVar27;
          if ((long *)*plVar27 != (long *)0x0) {
            do {
              while (plVar18 = plVar16, plVar27 = plVar18, puVar11 < (ulong *)plVar18[4]) {
                plVar16 = (long *)*plVar18;
                plVar31 = plVar18;
                if ((long *)*plVar18 == (long *)0x0) goto code_r0x01ef14e8;
              }
              if (puVar11 <= (ulong *)plVar18[4]) goto code_r0x01ef1534;
              plVar16 = (long *)plVar18[1];
            } while ((long *)plVar18[1] != (long *)0x0);
            plVar31 = plVar18 + 1;
          }
code_r0x01ef14e8:
          plVar18 = (long *)func_0x03f0b2e0(0x30);
          plVar18[4] = (long)puVar11;
          plVar18[5] = 0;
          *plVar18 = 0;
          plVar18[1] = 0;
          plVar18[2] = (long)plVar27;
          *plVar31 = (long)plVar18;
          plVar16 = plVar18;
          if (*(long *)plVar8[3] != 0) {
            plVar8[3] = *(long *)plVar8[3];
            plVar16 = (long *)*plVar31;
          }
          func_0x01a78074(plVar8[4],plVar16);
          plVar8[5] = plVar8[5] + 1;
code_r0x01ef1534:
          plVar18[5] = (long)(puVar19 + 4);
        }
      }
    }
    else {
      puVar11 = (ulong *)plVar16[7];
      *(int *)(plVar16 + 8) = (int)plVar16[8] + 1;
    }
  }
  uVar20 = (uint)puVar14;
  if (*(long *)(lVar13 + 0x28) == lStack_158) {
    return puVar11;
  }
code_r0x01ef1584:
  auVar33 = func_0x03f0b330();
  if (uVar20 != 0) {
    plVar16 = (long *)0x0;
    plVar8 = (long *)0x0;
    uVar32 = (ulong)uVar20;
    puVar19 = (undefined8 *)(auVar33._8_8_ + 8);
    lVar2 = lRam0000000004187ac8 + 0x10;
    do {
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
      }
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 8))(plVar16);
      }
      uVar10 = puVar19[-1];
      plVar8 = (long *)func_0x03f0b2e0(0x4f8);
      func_0x03f2c330();
      uVar9 = func_0x03f2c340(plVar8,uVar10,0);
      if ((uVar9 & 1) == 0) {
        (**(code **)(*plVar8 + 8))(plVar8);
        plVar16 = (long *)0x0;
        plVar8 = (long *)0x0;
      }
      else {
        plVar16 = (long *)func_0x03f0b2e0(0x38);
        uVar12 = *puVar19;
        uVar10 = func_0x03f0b2d0(uVar12);
        *plVar16 = lVar2;
        plVar16[4] = 0;
        plVar16[3] = 0;
        plVar16[6] = 0;
        plVar16[5] = 0;
        plVar16[2] = 0;
        plVar16[1] = 0;
        func_0x03f24990(plVar16 + 1,uVar12,uVar10,0xe0000000);
        iVar7 = m3d_1ef1784(puVar21,plVar8);
        if ((-1 < iVar7) &&
           (puVar26 = (ulong *)func_0x03f2c210(auVar33._0_8_,plVar8,plVar16,iVar7,puVar21),
           puVar26 != (ulong *)0x0)) goto code_r0x01ef16bc;
      }
      uVar32 = uVar32 - 1;
      puVar19 = puVar19 + 2;
    } while (uVar32 != 0);
    puVar26 = (ulong *)0x0;
    puVar11 = (ulong *)0x0;
    if (plVar8 != (long *)0x0) {
code_r0x01ef16bc:
      (**(code **)(*plVar8 + 8))(plVar8);
      puVar11 = puVar26;
    }
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 8))(plVar16);
    }
    if (puVar11 != (ulong *)0x0) {
      return puVar11;
    }
  }
  puVar26 = puRam000000000419a110;
  if (*puRam000000000419a110 == 0) {
    puVar19 = (undefined8 *)func_0x03f0b2e0(0x30);
    puVar19[5] = 0;
    puVar19[1] = 0;
    *puVar19 = puVar19 + 1;
    puVar19[4] = 0;
    puVar19[2] = 0;
    puVar19[3] = puVar19 + 4;
    *puVar26 = (ulong)puVar19;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)UndefinedInstructionException(0,0x3f2c1f0);
  (*pcVar6)();
}


