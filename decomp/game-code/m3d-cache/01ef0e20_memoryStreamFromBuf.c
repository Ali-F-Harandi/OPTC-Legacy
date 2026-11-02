// M3d: memoryStreamFromBuf @ 0x1ef0e20 (Ghidra decompile, true address)
#

ulong * m3d_1ef0e20(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  ulong *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong *puVar19;
  long *plVar20;
  long *plVar21;
  ulong *puVar22;
  char *pcVar23;
  undefined8 uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 uVar29;
  ulong unaff_x24;
  ulong uVar30;
  undefined1 auVar31 [16];
  undefined8 uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined4 uStack_128;
  undefined8 *apuStack_120 [3];
  long lStack_108;
  undefined1 *puStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  ulong uStack_a0;
  undefined1 auStack_98 [48];
  long lStack_68;
  
  lVar2 = tpidr_el0;
  pcVar23 = s___0134fed1;
  lStack_68 = *(long *)(lVar2 + 0x28);
  puVar19 = (ulong *)((ulong)param_3 & 0xffffffff);
  uVar30 = param_4[1];
  pbVar5 = (byte *)param_4[2];
  if (((byte)*param_4 & 1) == 0) {
    pbVar5 = (byte *)((long)param_4 + 1);
    uVar30 = (ulong)(byte)((byte)*param_4 >> 1);
  }
  puVar22 = param_4;
  lVar8 = func_0x03f0b2d0(s___0134fed1);
  pbVar3 = pbVar5 + uVar30;
  pbVar17 = pbVar3;
  if ((lVar8 != 0) && (pbVar16 = pbVar3, pbVar18 = pbVar5, uVar30 != 0)) {
    do {
      pbVar17 = pbVar16;
      if (*pbVar18 == 0x2e) {
        lVar15 = 1;
        do {
          pbVar17 = pbVar18;
          if (lVar8 == lVar15) break;
          pbVar4 = pbVar18 + lVar15;
          pbVar17 = pbVar16;
          if (pbVar4 == pbVar3) goto code_r0x01ef0eec;
          pbVar1 = (byte *)(s___0134fed1 + lVar15);
          lVar15 = lVar15 + 1;
        } while (*pbVar4 == *pbVar1);
      }
      pbVar18 = pbVar18 + 1;
      pbVar16 = pbVar17;
    } while (pbVar18 != pbVar3);
  }
code_r0x01ef0eec:
  lVar15 = (long)pbVar17 - (long)pbVar5;
  if (pbVar17 == pbVar3 && lVar8 != 0) {
    lVar15 = -1;
  }
  uVar26 = lVar15 + 1;
  if (lVar15 == uVar30 - 1 || uVar26 < 2) {
    param_4 = (ulong *)0x0;
code_r0x01ef1180:
    if (*(long *)(lVar2 + 0x28) == lStack_68) {
      return param_4;
    }
  }
  else {
    pcVar23 = (char *)(uVar30 - uVar26);
    if (uVar30 < uVar26) {
      if (*(long *)(lVar2 + 0x28) == lStack_68) {
        func_0x01a8c860(&uStack_b0);
        goto code_r0x01ef11cc;
      }
    }
    else {
      if (pcVar23 < (ulong *)0xfffffffffffffff8) {
        if (pcVar23 < (ulong *)0x17) {
          uVar25 = (ulong)&uStack_b0 | 1;
          uStack_b0 = CONCAT71(uStack_b0._1_7_,(char)((int)pcVar23 << 1));
          if (uVar30 != uVar26) goto code_r0x01ef0f7c;
        }
        else {
          uVar30 = ((ulong)pcVar23 & 0xfffffffffffffff8) + 8;
          if (((ulong)pcVar23 | 7) != 0x17) {
            uVar30 = (ulong)pcVar23 | 7;
          }
          unaff_x24 = uVar30 + 1;
          uVar25 = func_0x03f0b2e0(unaff_x24);
          uStack_b0 = unaff_x24 | 1;
          puStack_a8 = (ulong *)pcVar23;
          uStack_a0 = uVar25;
code_r0x01ef0f7c:
          param_3 = (ulong *)pcVar23;
          func_0x03f0b2f0(uVar25,pbVar5 + uVar26);
        }
        *(byte *)((long)pcVar23 + uVar25) = 0;
        puVar9 = (ulong *)func_0x03f0b2d0(s_png_01419dd6);
        uVar26 = uStack_b0;
        uVar30 = uStack_b0 & 0xff;
        pcVar23 = (char *)(uStack_b0 >> 1 & 0x7f);
        if ((uStack_b0 & 1) != 0) {
          pcVar23 = (char *)puStack_a8;
        }
        if (puVar9 == (ulong *)pcVar23) {
          param_3 = puVar9;
          if (puVar9 == (ulong *)0xffffffffffffffff) goto code_r0x01ef11e4;
          uVar25 = uStack_a0;
          if ((uStack_b0 & 1) == 0) {
            uVar25 = (long)&uStack_b0 + 1;
          }
          iVar7 = func_0x03f0b3f0(uVar25,s_png_01419dd6);
          param_3 = puVar9;
          if (iVar7 != 0) goto code_r0x01ef0fe4;
          pcVar23 = (char *)0x1;
code_r0x01ef10dc:
          func_0x03f2c2e0(auStack_98);
          param_3 = puVar19;
          puVar22 = (ulong *)pcVar23;
          uVar26 = func_0x03f2c2f0(auStack_98,param_2,puVar19,pcVar23,0,0,8);
          puVar9 = puRam000000000419a110;
          if ((uVar26 & 1) == 0) {
            param_4 = (ulong *)0x0;
          }
          else {
            puVar13 = (undefined8 *)*puRam000000000419a110;
            if (puVar13 == (undefined8 *)0x0) {
              puVar13 = (undefined8 *)func_0x03f0b2e0(0x30);
              puVar13[5] = 0;
              puVar13[1] = 0;
              *puVar13 = puVar13 + 1;
              puVar13[4] = 0;
              puVar13[2] = 0;
              puVar13[3] = puVar13 + 4;
              *puVar9 = (ulong)puVar13;
            }
            param_3 = (ulong *)((long)param_4 + 1);
            if ((*param_4 & 1) != 0) {
              param_3 = (ulong *)param_4[2];
            }
            param_4 = (ulong *)func_0x03f2c300(puVar13,auStack_98);
            puVar19 = puVar9;
          }
          func_0x03f2c310(auStack_98);
        }
        else {
code_r0x01ef0fe4:
          puVar9 = (ulong *)func_0x03f0b2d0(s_jpg_013610b5);
          if (puVar9 == (ulong *)pcVar23) {
            if ((ulong *)pcVar23 != (ulong *)0xffffffffffffffff) {
              uVar25 = uStack_a0;
              if ((uVar26 & 1) == 0) {
                uVar25 = (long)&uStack_b0 + 1;
              }
              param_3 = (ulong *)pcVar23;
              iVar7 = func_0x03f0b3f0(uVar25,s_jpg_013610b5);
              if (iVar7 != 0) goto code_r0x01ef1024;
code_r0x01ef10c0:
              pcVar23 = (char *)0x0;
              goto code_r0x01ef10dc;
            }
            goto code_r0x01ef11fc;
          }
code_r0x01ef1024:
          puVar9 = (ulong *)func_0x03f0b2d0(s_jpeg_0132a1d8);
          if (puVar9 == (ulong *)pcVar23) {
            if ((ulong *)pcVar23 == (ulong *)0xffffffffffffffff) goto code_r0x01ef1214;
            uVar25 = uStack_a0;
            if ((uVar26 & 1) == 0) {
              uVar25 = (long)&uStack_b0 + 1;
            }
            param_3 = (ulong *)pcVar23;
            iVar7 = func_0x03f0b3f0(uVar25,s_jpeg_0132a1d8);
            if (iVar7 == 0) goto code_r0x01ef10c0;
          }
          puVar9 = (ulong *)func_0x03f0b2d0(s_tif_013610b9);
          if (puVar9 == (ulong *)pcVar23) {
            if ((ulong *)pcVar23 == (ulong *)0xffffffffffffffff) goto code_r0x01ef122c;
            uVar25 = uStack_a0;
            if ((uVar26 & 1) == 0) {
              uVar25 = (long)&uStack_b0 + 1;
            }
            param_3 = (ulong *)pcVar23;
            iVar7 = func_0x03f0b3f0(uVar25,s_tif_013610b9);
            if (iVar7 != 0) goto code_r0x01ef10a4;
code_r0x01ef10b8:
            pcVar23 = (char *)0x2;
            goto code_r0x01ef10dc;
          }
code_r0x01ef10a4:
          uVar26 = func_0x01c3aa4c(&uStack_b0,s_tiff_013a39ba);
          if ((uVar26 & 1) != 0) goto code_r0x01ef10b8;
          param_4 = (ulong *)0x0;
        }
        if ((uStack_b0 & 1) != 0) {
          func_0x03f0b310(uStack_a0);
        }
        goto code_r0x01ef1180;
      }
code_r0x01ef11cc:
      if (*(long *)(lVar2 + 0x28) != lStack_68) goto code_r0x01ef1298;
      func_0x01a77edc(&uStack_b0);
code_r0x01ef11e4:
      if (*(long *)(lVar2 + 0x28) == lStack_68) {
        func_0x01a8c860(&uStack_b0);
code_r0x01ef11fc:
        if (*(long *)(lVar2 + 0x28) == lStack_68) {
          func_0x01a8c860(&uStack_b0);
code_r0x01ef1214:
          if (*(long *)(lVar2 + 0x28) == lStack_68) {
            func_0x01a8c860(&uStack_b0);
code_r0x01ef122c:
            if (*(long *)(lVar2 + 0x28) == lStack_68) {
              param_4 = (ulong *)func_0x01a8c860(&uStack_b0);
              func_0x03f2c310(auStack_98);
              if ((uStack_b0 & 1) != 0) {
                func_0x03f0b310(uStack_a0);
              }
              if (*(long *)(lVar2 + 0x28) == lStack_68) {
                func_0x03f072dc(param_4);
              }
            }
          }
        }
      }
    }
  }
code_r0x01ef1298:
  auVar31 = func_0x03f0b330();
  plVar20 = auVar31._0_8_;
  uStack_f8 = 0x1ef129c;
  lVar8 = tpidr_el0;
  lStack_108 = *(long *)(lVar8 + 0x28);
  puVar9 = param_3;
  puStack_100 = &stack0xffffffffffffffa0;
  lStack_f0 = lVar2;
  uStack_e0 = unaff_x24;
  uStack_d8 = uVar30;
  puStack_d0 = (ulong *)pcVar23;
  uStack_c8 = param_2;
  puStack_c0 = puVar19;
  puStack_b8 = param_4;
  if ((param_3 == (ulong *)0x0) || ((byte)*param_3 == 0)) {
    puVar19 = (ulong *)0x0;
  }
  else {
    puVar19 = (ulong *)func_0x03f0b2d0(param_3);
    uVar14 = (uint)puVar9;
    if ((ulong *)0xfffffffffffffff7 < puVar19) {
      if (*(long *)(lVar8 + 0x28) == lStack_108) {
        func_0x01a77edc(&uStack_148);
        uVar24 = func_0x01a79244();
        func_0x03f2c290(&uStack_148);
        if (*(long *)(lVar8 + 0x28) == lStack_108) {
          func_0x03f072dc(uVar24);
        }
      }
      goto code_r0x01ef1584;
    }
    if (puVar19 < (ulong *)0x17) {
      uVar26 = (ulong)&uStack_148 | 1;
      uStack_148 = CONCAT71(uStack_148._1_7_,(char)((int)puVar19 << 1));
      if (puVar19 != (ulong *)0x0) goto code_r0x01ef1348;
    }
    else {
      uVar30 = ((ulong)puVar19 & 0xfffffffffffffff8) + 8;
      if (((ulong)puVar19 | 7) != 0x17) {
        uVar30 = (ulong)puVar19 | 7;
      }
      uVar26 = func_0x03f0b2e0(uVar30 + 1);
      uStack_148 = uVar30 + 1 | 1;
      puStack_140 = puVar19;
      uStack_138 = uVar26;
code_r0x01ef1348:
      puVar9 = puVar19;
      func_0x03f0b910(uVar26,param_3);
    }
    *(byte *)((long)puVar19 + uVar26) = 0;
    lStack_130 = 0;
    uStack_128 = 1;
    plVar10 = (long *)func_0x03f2c250(plVar20,&uStack_148);
    if (lStack_130 != 0) {
      func_0x03f0bdf0();
      lStack_130 = 0;
    }
    if ((uStack_148 & 1) != 0) {
      func_0x03f0b310(uStack_138);
    }
    if (plVar20 + 1 == plVar10) {
      uVar24 = func_0x03f127a0();
      puVar9 = param_3;
      puVar19 = (ulong *)func_0x03f2c320(uVar24,auVar31._8_8_);
      if (puVar19 != (ulong *)0x0) {
        func_0x03f2c260(&uStack_148,param_3,puVar19);
        puVar9 = &uStack_148;
        puVar11 = (undefined8 *)func_0x03f2c270(plVar20,&uStack_150);
        puVar27 = (undefined8 *)*puVar11;
        puVar13 = puVar27;
        if (puVar27 == (undefined8 *)0x0) {
          func_0x03f2c280(apuStack_120,plVar20,&uStack_148);
          *apuStack_120[0] = 0;
          apuStack_120[0][1] = 0;
          apuStack_120[0][2] = uStack_150;
          *puVar11 = apuStack_120[0];
          puVar13 = apuStack_120[0];
          if (*(long *)*plVar20 != 0) {
            *plVar20 = *(long *)*plVar20;
            puVar13 = (undefined8 *)*puVar11;
          }
          func_0x01a78074(*plVar10,puVar13);
          plVar20[2] = plVar20[2] + 1;
          puVar13 = apuStack_120[0];
        }
        if (lStack_130 != 0) {
          func_0x03f0bdf0();
          lStack_130 = 0;
        }
        if ((uStack_148 & 1) != 0) {
          func_0x03f0b310(uStack_138);
        }
        if (puVar27 == (undefined8 *)0x0) {
          plVar21 = plVar20 + 4;
          plVar10 = (long *)*plVar21;
          plVar28 = plVar21;
          if ((long *)*plVar21 != (long *)0x0) {
            do {
              while (plVar12 = plVar10, plVar21 = plVar12, puVar19 < (ulong *)plVar12[4]) {
                plVar10 = (long *)*plVar12;
                plVar28 = plVar12;
                if ((long *)*plVar12 == (long *)0x0) goto code_r0x01ef14e8;
              }
              if (puVar19 <= (ulong *)plVar12[4]) goto code_r0x01ef1534;
              plVar10 = (long *)plVar12[1];
            } while ((long *)plVar12[1] != (long *)0x0);
            plVar28 = plVar12 + 1;
          }
code_r0x01ef14e8:
          plVar12 = (long *)func_0x03f0b2e0(0x30);
          plVar12[4] = (long)puVar19;
          plVar12[5] = 0;
          *plVar12 = 0;
          plVar12[1] = 0;
          plVar12[2] = (long)plVar21;
          *plVar28 = (long)plVar12;
          plVar10 = plVar12;
          if (*(long *)plVar20[3] != 0) {
            plVar20[3] = *(long *)plVar20[3];
            plVar10 = (long *)*plVar28;
          }
          func_0x01a78074(plVar20[4],plVar10);
          plVar20[5] = plVar20[5] + 1;
code_r0x01ef1534:
          plVar12[5] = (long)(puVar13 + 4);
        }
      }
    }
    else {
      puVar19 = (ulong *)plVar10[7];
      *(int *)(plVar10 + 8) = (int)plVar10[8] + 1;
    }
  }
  uVar14 = (uint)puVar9;
  if (*(long *)(lVar8 + 0x28) == lStack_108) {
    return puVar19;
  }
code_r0x01ef1584:
  auVar31 = func_0x03f0b330();
  if (uVar14 != 0) {
    plVar10 = (long *)0x0;
    plVar20 = (long *)0x0;
    uVar30 = (ulong)uVar14;
    puVar13 = (undefined8 *)(auVar31._8_8_ + 8);
    lVar2 = lRam0000000004187ac8 + 0x10;
    do {
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 8))(plVar20);
      }
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      uVar24 = puVar13[-1];
      plVar20 = (long *)func_0x03f0b2e0(0x4f8);
      func_0x03f2c330();
      uVar26 = func_0x03f2c340(plVar20,uVar24,0);
      if ((uVar26 & 1) == 0) {
        (**(code **)(*plVar20 + 8))(plVar20);
        plVar10 = (long *)0x0;
        plVar20 = (long *)0x0;
      }
      else {
        plVar10 = (long *)func_0x03f0b2e0(0x38);
        uVar29 = *puVar13;
        uVar24 = func_0x03f0b2d0(uVar29);
        *plVar10 = lVar2;
        plVar10[4] = 0;
        plVar10[3] = 0;
        plVar10[6] = 0;
        plVar10[5] = 0;
        plVar10[2] = 0;
        plVar10[1] = 0;
        func_0x03f24990(plVar10 + 1,uVar29,uVar24,0xe0000000);
        iVar7 = m3d_1ef1784(puVar22,plVar20);
        if ((-1 < iVar7) &&
           (puVar19 = (ulong *)func_0x03f2c210(auVar31._0_8_,plVar20,plVar10,iVar7,puVar22),
           puVar19 != (ulong *)0x0)) goto code_r0x01ef16bc;
      }
      uVar30 = uVar30 - 1;
      puVar13 = puVar13 + 2;
    } while (uVar30 != 0);
    puVar19 = (ulong *)0x0;
    puVar22 = (ulong *)0x0;
    if (plVar20 != (long *)0x0) {
code_r0x01ef16bc:
      (**(code **)(*plVar20 + 8))(plVar20);
      puVar22 = puVar19;
    }
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))(plVar10);
    }
    if (puVar22 != (ulong *)0x0) {
      return puVar22;
    }
  }
  puVar19 = puRam000000000419a110;
  if (*puRam000000000419a110 == 0) {
    puVar13 = (undefined8 *)func_0x03f0b2e0(0x30);
    puVar13[5] = 0;
    puVar13[1] = 0;
    *puVar13 = puVar13 + 1;
    puVar13[4] = 0;
    puVar13[2] = 0;
    puVar13[3] = puVar13 + 4;
    *puVar19 = (ulong)puVar13;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)UndefinedInstructionException(0,0x3f2c1f0);
  (*pcVar6)();
}


