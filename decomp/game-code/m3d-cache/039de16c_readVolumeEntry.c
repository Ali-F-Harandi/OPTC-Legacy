// M3d: readVolumeEntry @ 0x39de16c (Ghidra decompile, true address)
#

void m3d_39de16c(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  undefined8 *puVar25;
  uint uVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  uint *puVar30;
  uint uVar31;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  long lStack_290;
  long *plStack_288;
  undefined8 uStack_280;
  long *plStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long lStack_1f0;
  byte *pbStack_1e8;
  undefined8 uStack_1e0;
  long *plStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined1 auStack_1c0 [192];
  long lStack_100;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined4 uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined1 uStack_74;
  uint uStack_70;
  int iStack_6c;
  double dStack_60;
  long lStack_58;
  
  lVar7 = tpidr_el0;
  lStack_58 = *(long *)(lVar7 + 0x28);
  uVar10 = (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),(ulong)param_2,0);
  puVar11 = (ushort *)0x0;
  if (uVar10 == param_2) {
    lVar12 = (**(code **)(**(long **)(param_1 + 8) + 0x18))
                       (*(long **)(param_1 + 8),param_1 + 0x48,2);
    if (lVar12 == 2) {
      uVar26 = (uint)(*(ushort *)(param_1 + 0x48) >> 8) |
               (*(ushort *)(param_1 + 0x48) & 0xff00ff) << 8;
      iVar8 = uVar26 * 0xc;
      *(short *)(param_1 + 0x48) = (short)uVar26;
      puVar11 = (ushort *)func_0x03f0cba0(iVar8 + 0xc);
      if (puVar11 == (ushort *)0x0) goto code_r0x039de550;
      (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),puVar11,iVar8);
      iVar8 = *(int *)(param_1 + 0x20);
      lVar17 = *(long *)(param_1 + 0x4a0);
      lVar12 = lVar17;
      iVar6 = iVar8;
      if (iVar8 < 1) {
        lVar12 = *(long *)(lVar17 + 8);
        if (*(long *)(lVar12 + 0x240) != 0) goto code_r0x039de288;
code_r0x039de290:
        puVar25 = (undefined8 *)(lVar12 + 0x240);
      }
      else {
        do {
          plVar14 = (long *)(lVar12 + 0x10);
          iVar6 = iVar6 + -1;
          lVar12 = *plVar14;
        } while (iVar6 != 0);
        if (*(long *)(*(long *)(*plVar14 + 8) + 0x240) == 0) {
          do {
            lVar17 = *(long *)(lVar17 + 0x10);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          lVar12 = *(long *)(lVar17 + 8);
          goto code_r0x039de290;
        }
        do {
          lVar17 = *(long *)(lVar17 + 0x10);
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        lVar12 = *(long *)(lVar17 + 8);
code_r0x039de288:
        puVar25 = (undefined8 *)(lVar12 + 0x248);
      }
      *puVar25 = puVar11;
      lVar17 = lRam00000000041b6220;
      lVar12 = lRam00000000041b6218;
      if (*(short *)(param_1 + 0x48) != 0) {
        uVar26 = 0;
        do {
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_7c = (uint)(puVar11[1] >> 8) | (puVar11[1] & 0xff00ff) << 8;
          uStack_80 = (uint)(*puVar11 >> 8) | (*puVar11 & 0xff00ff) << 8;
          uVar9 = (*(uint *)(puVar11 + 4) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar11 + 4) & 0xff00ff) << 8;
          uVar5 = uVar9 >> 0x10 | uVar9 << 0x10;
          uVar9 = uVar5 >> (ulong)(*(uint *)(lVar12 + (ulong)uStack_7c * 4) & 0x1f);
          if (uStack_7c < 7) {
            if (uStack_7c < 3) {
              if ((uStack_7c == 1) || (uStack_7c == 2)) {
code_r0x039de380:
                dStack_60 = (double)CONCAT71(dStack_60._1_7_,(char)uVar9);
              }
            }
            else if (uStack_7c == 3) {
code_r0x039de398:
              dStack_60 = (double)CONCAT62(dStack_60._2_6_,(short)uVar9);
            }
            else {
              if (uStack_7c == 4) goto code_r0x039de3a0;
              if (uStack_7c == 6) goto code_r0x039de380;
            }
          }
          else if (uStack_7c < 9) {
            if (uStack_7c == 7) goto code_r0x039de3a0;
            if (uStack_7c == 8) goto code_r0x039de398;
          }
          else if (uStack_7c == 9) {
code_r0x039de3a0:
            dStack_60 = (double)CONCAT44(dStack_60._4_4_,uVar9);
          }
          else if (uStack_7c == 0xb) {
            dStack_60 = (double)CONCAT44(dStack_60._4_4_,(float)uVar9);
          }
          else if (uStack_7c == 0xc) {
            dStack_60 = (double)uVar9;
          }
          lVar21 = *(long *)(lVar17 + (ulong)uStack_7c * 8);
          uVar9 = (*(uint *)(puVar11 + 2) & 0xff00ff00) >> 8 |
                  (*(uint *)(puVar11 + 2) & 0xff00ff) << 8;
          uStack_78 = uVar9 >> 0x10 | uVar9 << 0x10;
          iVar8 = *(int *)(param_1 + 0x20);
          iStack_6c = uStack_78 * (int)lVar21;
          lVar22 = *(long *)(param_1 + 0x4a0);
          if (4 < lVar21 * (ulong)uStack_78) {
            uStack_74 = 1;
            dStack_60 = 0.0;
            lVar21 = lVar22;
            iVar6 = iVar8;
            if (iVar8 < 1) {
              lVar21 = *(long *)(lVar22 + 8);
              uVar9 = uVar5;
              if (*(uint *)(lVar21 + 0x208) <= uVar5) {
                uVar9 = *(uint *)(lVar21 + 0x208);
              }
              *(uint *)(lVar21 + 0x208) = uVar9;
              uVar9 = iStack_6c + uVar5;
              if (iStack_6c + uVar5 <= *(uint *)(lVar21 + 0x20c)) {
                uVar9 = *(uint *)(lVar21 + 0x20c);
              }
            }
            else {
              do {
                lVar21 = *(long *)(lVar21 + 0x10);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              uVar9 = *(uint *)(*(long *)(lVar21 + 8) + 0x208);
              lVar21 = lVar22;
              iVar6 = iVar8;
              do {
                lVar21 = *(long *)(lVar21 + 0x10);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              uVar31 = uVar5;
              if (uVar9 <= uVar5) {
                uVar31 = uVar9;
              }
              *(uint *)(*(long *)(lVar21 + 8) + 0x208) = uVar31;
              lVar21 = lVar22;
              iVar6 = iVar8;
              do {
                lVar21 = *(long *)(lVar21 + 0x10);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              uVar31 = *(uint *)(*(long *)(lVar21 + 8) + 0x20c);
              lVar21 = lVar22;
              iVar6 = iVar8;
              do {
                lVar21 = *(long *)(lVar21 + 0x10);
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              lVar21 = *(long *)(lVar21 + 8);
              uVar9 = iStack_6c + uVar5;
              if (iStack_6c + uVar5 <= uVar31) {
                uVar9 = uVar31;
              }
            }
            *(uint *)(lVar21 + 0x20c) = uVar9;
            uStack_70 = uVar5;
          }
          if (0 < iVar8) {
            do {
              lVar22 = *(long *)(lVar22 + 0x10);
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          puVar11 = puVar11 + 6;
          func_0x03fa2b20(*(long *)(lVar22 + 8) + 0x218,&uStack_80,&uStack_80);
          uVar26 = uVar26 + 1;
        } while (uVar26 < *(ushort *)(param_1 + 0x48));
      }
      lVar12 = (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),&uStack_80,4);
      if (lVar12 == 4) {
        iVar8 = *(int *)(param_1 + 0x20);
        lVar17 = *(long *)(param_1 + 0x4a0);
        uVar26 = (uStack_80 & 0xff00ff00) >> 8 | (uStack_80 & 0xff00ff) << 8;
        uStack_80 = uVar26 >> 0x10 | uVar26 << 0x10;
        lVar12 = lVar17;
        iVar6 = iVar8;
        if (0 < iVar8) {
          do {
            lVar12 = *(long *)(lVar12 + 0x10);
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        puVar25 = *(undefined8 **)(*(long *)(lVar12 + 8) + 0x228);
joined_r0x039de50c:
        if (puVar25 != (undefined8 *)0x0) {
          while (0x8769 < **(uint **)*puVar25) {
            puVar25 = (undefined8 *)puVar25[1];
            if (puVar25 == (undefined8 *)0x0) goto code_r0x039de5c4;
          }
          if (**(uint **)*puVar25 != 0x8769) goto code_r0x039de53c;
          if (0 < iVar8) {
            do {
              lVar17 = *(long *)(lVar17 + 0x10);
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
          }
          uStack_84 = 0x8769;
          plVar14 = (long *)func_0x03fa2b30(*(long *)(lVar17 + 8) + 0x218,&uStack_84);
          if (*(uint *)(*(long *)(*plVar14 + 8) + 0x20) != param_2) {
            func_0x03fa2ad0(param_1);
          }
        }
code_r0x039de5c4:
        puVar11 = (ushort *)(ulong)uStack_80;
        goto code_r0x039de550;
      }
    }
    puVar11 = (ushort *)0x0;
  }
code_r0x039de550:
  if (*(long *)(lVar7 + 0x28) == lStack_58) {
    return;
  }
  lVar12 = func_0x03f0b330(puVar11);
  pcStack_e8 = m3d_39de5d0;
  lVar7 = tpidr_el0;
  lStack_100 = *(long *)(lVar7 + 0x28);
  iVar8 = *(int *)(lVar12 + 0x20);
  lVar17 = *(long *)(lVar12 + 0x4a0);
  if (0 < iVar8) {
    do {
      lVar17 = *(long *)(lVar17 + 0x10);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  lVar17 = *(long *)(lVar17 + 8);
  lStack_1c8 = lVar17;
  puStack_f0 = &stack0xffffffffffffffb0;
  if ((*(long *)(lVar17 + 0x210) == 0) && (*(uint *)(lVar17 + 0x208) <= *(uint *)(lVar17 + 0x20c)))
  {
    lVar22 = (**(code **)(**(long **)(lVar12 + 8) + 0x38))();
    lVar22 = (ulong)*(uint *)(lVar17 + 0x208) - lVar22;
    if ((lVar22 < 0xc1) &&
       (lVar21 = (**(code **)(**(long **)(lVar12 + 8) + 0x18))
                           (*(long **)(lVar12 + 8),auStack_1c0,lVar22), lVar17 = lStack_1c8,
       lVar22 == lVar21)) {
      uVar26 = *(int *)(lStack_1c8 + 0x20c) - *(int *)(lStack_1c8 + 0x208);
      uVar10 = (ulong)uVar26;
      plVar14 = (long *)func_0x03f0b2e0(0x30);
      uVar28 = (ulong)(uVar26 + 0xf & 0xfffffff0);
      lVar22 = func_0x03f0cba0(uVar28 | 8);
      plVar14[1] = lVar22;
      plVar14[2] = uVar28;
      *plVar14 = lVar22;
      func_0x03f0c950(lVar22,0,uVar28);
      plVar14[4] = 0;
      plVar14[5] = 0;
      *(undefined1 *)(plVar14 + 3) = 1;
      *(long **)(lVar17 + 0x210) = plVar14;
      if (0 < (int)uVar26) {
        uVar18 = uVar10 & 0x7ffffff8;
        uVar29 = plVar14[2];
        uVar28 = uVar18 + 8;
        if ((lVar22 == 0) || (uVar29 <= uVar28)) {
          if (lVar22 == 0) {
            lVar22 = func_0x03f0cba0(uVar18 + 0x10);
            plVar14[1] = lVar22;
            plVar14[2] = uVar28;
            *plVar14 = lVar22;
          }
          else {
            lVar21 = func_0x03f0cba0((int)uVar18 + 8);
            func_0x03f0b910(lVar21,lVar22,uVar29);
            func_0x03f0cbe0(lVar22);
            lVar17 = *(long *)(lVar17 + 0x210);
            *plVar14 = lVar21;
            plVar14[1] = lVar21;
            plVar14[2] = uVar28;
            lVar22 = *(long *)(lVar17 + 8);
          }
        }
        plVar14[4] = uVar10;
      }
      uVar28 = (**(code **)(**(long **)(lVar12 + 8) + 0x18))(*(long **)(lVar12 + 8),lVar22,uVar10);
      lVar17 = lRam00000000041b6228;
      if (uVar28 == uVar10) {
        if (*(long **)(lStack_1c8 + 0x228) == (long *)0x0) {
          puVar25 = *(undefined8 **)(lStack_1c8 + 0x238);
          plStack_1d8 = (long *)*puVar25;
          lStack_1d0 = puVar25[1];
        }
        else {
          lStack_1d0 = lStack_1c8 + 0x218;
          plVar14 = *(long **)(lStack_1c8 + 0x228);
          do {
            plStack_1d8 = plVar14;
            plVar14 = (long *)plStack_1d8[1];
          } while ((long *)plStack_1d8[1] != (long *)0x0);
          puVar25 = *(undefined8 **)(lStack_1c8 + 0x238);
        }
        if (plStack_1d8 != (long *)*puVar25) {
          lVar22 = lRam000000000419a188 + 0x10;
          do {
            plVar14 = plStack_1d8;
            if (plStack_1d8 != (long *)0x0) {
              plVar14 = *(long **)(*plStack_1d8 + 8);
            }
            if (*(char *)((long)plVar14 + 0xc) != '\0') {
              uVar26 = (int)plVar14[2] - *(int *)(lStack_1c8 + 0x208);
              *(uint *)(plVar14 + 2) = uVar26;
              if ((*(char *)((long)plVar14 + 0xc) == '\x01') &&
                 (((*(int *)((long)plVar14 + 4) == 10 || (*(int *)((long)plVar14 + 4) == 5)) &&
                  (plVar14[4] = *(long *)(*(long *)(lStack_1c8 + 0x210) + 8) + (ulong)uVar26,
                  (*(uint *)(plVar14 + 1) & 0x7fffffff) != 0)))) {
                uVar10 = 0;
                do {
                  lVar21 = uVar10 * 4;
                  uVar10 = uVar10 + 1;
                  uVar26 = *(uint *)(plVar14[4] + lVar21);
                  uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
                  *(uint *)(plVar14[4] + lVar21) = uVar26 >> 0x10 | uVar26 << 0x10;
                } while (uVar10 < (uint)((int)plVar14[1] << 1));
              }
            }
            iVar8 = (int)*plVar14;
            if (iVar8 < 0x8827) {
              if (iVar8 < 0x117) {
                if (iVar8 == 0x10e) {
                  uVar26 = *(uint *)((long)plVar14 + 0x14);
                  uVar10 = (ulong)uVar26;
                  pbStack_1e8 = (byte *)(*(long *)(*(long *)(lStack_1c8 + 0x210) + 8) +
                                        (ulong)*(uint *)(plVar14 + 2));
                  *(byte **)(lStack_1c8 + 0x250) = pbStack_1e8;
                  if (uVar26 == 0) {
                    iVar8 = 0;
                  }
                  else {
                    do {
                      uVar10 = uVar10 - 1;
                      *pbStack_1e8 = *(byte *)(lVar17 + (ulong)*pbStack_1e8);
                      pbStack_1e8 = pbStack_1e8 + 1;
                    } while (uVar10 != 0);
                    iVar8 = *(int *)((long)plVar14 + 0x14);
                    pbStack_1e8 = *(byte **)(lStack_1c8 + 0x250);
                  }
                  *(int *)(lStack_1c8 + 600) = iVar8;
                  uStack_1e0 = 0;
                  lStack_1f0 = lVar22;
                  uStack_1e0 = func_0x03f0b2d0();
                  func_0x03fa2b40(lVar12 + 0x4b8,&lStack_1f0,&lStack_1c8);
                }
                else if (iVar8 == 0x111) {
                  *(int *)(lStack_1c8 + 0x268) = (int)plVar14[4];
                }
              }
              else if (iVar8 == 0x117) {
                *(int *)(lStack_1c8 + 0x26c) = (int)plVar14[4];
              }
              else if ((iVar8 == 0x211) && ((int)plVar14[1] == 2)) {
                *(undefined4 *)(lStack_1c8 + 0x278) = *(undefined4 *)plVar14[4];
                *(undefined4 *)(lStack_1c8 + 0x274) = *(undefined4 *)(plVar14[4] + 4);
                *(undefined4 *)(lStack_1c8 + 0x27c) = *(undefined4 *)(plVar14[4] + 8);
              }
            }
            else if (iVar8 < 0x885e) {
              if (iVar8 == 0x8827) {
                *(uint *)(lStack_1c8 + 0x270) = (uint)*(ushort *)(plVar14 + 4);
              }
              else if (iVar8 == 0x885c) {
                *(int *)(lStack_1c8 + 0x25c) = (int)plVar14[4];
              }
            }
            else if (iVar8 == 0x885e) {
              *(int *)(lStack_1c8 + 0x260) = (int)plVar14[4];
            }
            else if (iVar8 == 0xa432) {
              if ((int)plVar14[1] == 2) {
                *(undefined4 *)(lStack_1c8 + 0x280) = *(undefined4 *)plVar14[4];
                *(undefined4 *)(lStack_1c8 + 0x284) = *(undefined4 *)(plVar14[4] + 4);
                *(undefined4 *)(lStack_1c8 + 0x288) = *(undefined4 *)(plVar14[4] + 8);
              }
            }
            else if ((iVar8 == 0xc62f) && (*(long *)(lVar12 + 0x28) == 0)) {
              *(ulong *)(lVar12 + 0x28) =
                   *(long *)(*(long *)(lStack_1c8 + 0x210) + 8) + (ulong)*(uint *)(plVar14 + 2);
            }
            lVar21 = func_0x03fa2b50(lStack_1d0,&plStack_1d8);
            if (lVar21 == 0) {
              plStack_1d8 = (long *)0x0;
            }
          } while (plStack_1d8 != (long *)**(undefined8 **)(lStack_1c8 + 0x238));
        }
        goto code_r0x039de63c;
      }
      plVar14 = *(long **)(lStack_1c8 + 0x210);
      if (plVar14 == (long *)0x0) goto code_r0x039de7f4;
      if ((plVar14[1] != 0) && (*plVar14 != 0)) {
        func_0x03f0cbe0();
      }
      func_0x03f0b310(plVar14);
      uVar13 = 0x80000000;
      *(undefined8 *)(lStack_1c8 + 0x210) = 0;
    }
    else {
code_r0x039de7f4:
      uVar13 = 0x80000000;
    }
  }
  else {
code_r0x039de63c:
    uVar13 = 0;
  }
  if (*(long *)(lVar7 + 0x28) == lStack_100) {
    return;
  }
  auVar33 = func_0x03f0b330(uVar13);
  lVar17 = auVar33._8_8_;
  lVar12 = auVar33._0_8_;
  lVar7 = tpidr_el0;
  lStack_268 = *(long *)(lVar7 + 0x28);
  if ((lVar17 != 0) && (*(long *)(lVar17 + 8) != 0)) {
    *(undefined8 *)(lVar12 + 0x48) = 0;
    *(undefined8 *)(lVar12 + 0x50) = 0;
    plVar14 = (long *)(lVar12 + 0x457);
    puVar30 = *(uint **)(lVar17 + 8);
    plVar23 = *(long **)(lVar12 + 0x28);
    uVar26 = *puVar30;
    *(undefined8 *)(lVar12 + 0x48e) = 0;
    *(undefined8 *)(lVar12 + 0x486) = 0;
    *(undefined8 *)(lVar12 + 0x46f) = 0;
    *(undefined8 *)(lVar12 + 0x467) = 0;
    *(undefined8 *)(lVar12 + 0x47f) = 0;
    *(undefined8 *)(lVar12 + 0x477) = 0;
    *(undefined8 *)(lVar12 + 0x45f) = 0;
    *plVar14 = 0;
    uVar32 = *(undefined8 *)(puVar30 + 7);
    uVar13 = *(undefined8 *)(puVar30 + 5);
    lVar17 = *(long *)(puVar30 + 1);
    uVar9 = puVar30[9];
    *(undefined8 *)(lVar12 + 0x45f) = *(undefined8 *)(puVar30 + 3);
    *plVar14 = lVar17;
    *(undefined8 *)(lVar12 + 0x46f) = uVar32;
    *(undefined8 *)(lVar12 + 0x467) = uVar13;
    *(uint *)(lVar12 + 0x477) = uVar9;
    if ((((*plVar14 == *plVar23 && *(long *)(lVar12 + 0x45f) == plVar23[1]) &&
         *(long *)(lVar12 + 0x467) == plVar23[2]) && *(long *)(lVar12 + 0x46f) == plVar23[3]) &&
        uVar9 == *(uint *)(plVar23 + 4)) {
      uVar9 = puVar30[10];
      uVar5 = puVar30[0xb];
      uVar31 = puVar30[0xc];
      uStack_270 = 0;
      iVar8 = func_0x03f24990(&uStack_270,plVar14,0x20,0x40000000);
      if (-1 < iVar8) {
        puVar15 = (uint *)func_0x03f0cba0((ulong)(uVar9 + 1) + 7 & 0x1fffffff8);
        if (puVar15 == (uint *)0x0) {
          iVar8 = func_0x03f2c5f0(uStack_270,puVar30 + 0xd,0,uVar9);
          if (-1 < iVar8) goto code_r0x039debf0;
        }
        else {
          func_0x03f0c950(puVar15,0,(ulong)(uVar9 + 1));
          iVar8 = func_0x03f2c5f0(uStack_270,puVar30 + 0xd,puVar15,uVar9);
          if (-1 < iVar8) {
code_r0x039debf0:
            func_0x03f256e0(&uStack_270);
            uVar9 = func_0x03fa2630(0,puVar15,uVar9);
            if (uVar5 == uVar9) {
              plVar19 = *(long **)(lVar12 + 0x498);
              puVar25 = (undefined8 *)(lVar12 + 0x498);
              plVar27 = *(long **)(lVar12 + 0x4a0);
              plVar24 = (long *)*plVar19;
              plVar23 = (long *)(lVar12 + 0x4a0);
              if ((puVar25 != (undefined8 *)plVar19[1]) || (plVar27 != plVar24)) {
                do {
                  if ((long *)plVar27[1] != (long *)0x0) {
                    (**(code **)(*(long *)plVar27[1] + 8))();
                    plVar19 = (long *)*puVar25;
                    plVar24 = (long *)*plVar19;
                  }
                  plVar27 = (long *)plVar27[2];
                } while ((puVar25 != (undefined8 *)plVar19[1]) || (plVar27 != plVar24));
                plVar27 = (long *)*plVar23;
              }
              while (plVar27 != (long *)0x0) {
                plVar24 = (long *)plVar27[2];
                (**(code **)(*plVar27 + 8))(plVar27);
                plVar27 = plVar24;
              }
              *plVar23 = 0;
              *(undefined8 *)(lVar12 + 0x4a8) = 0;
              *(undefined4 *)(lVar12 + 0x4b0) = 0;
              func_0x03fa2a80(lVar12 + 0x4b8);
              *(undefined8 *)(lVar12 + 0x28) = 0;
              func_0x03f2c2c0(lVar12 + 0x10);
              if (uVar31 != 0) {
                plVar24 = (long *)(lVar12 + 0x4a8);
                lVar17 = lRam00000000041b6208 + 0x10;
                lVar22 = lRam00000000041b6210 + 0x10;
                lVar21 = lRam000000000419a188 + 0x10;
                puVar30 = puVar15;
                do {
                  plVar27 = (long *)func_0x03f0b2e0(0x290);
                  plVar27[0x44] = 0;
                  plVar27[0x46] = 0;
                  *plVar27 = lVar17;
                  plVar27[0x45] = 0;
                  puVar25 = (undefined8 *)func_0x03f0b2e0(0x10);
                  *puVar25 = 0;
                  puVar25[1] = plVar27 + 0x43;
                  plVar27[0x47] = (long)puVar25;
                  *(undefined4 *)(plVar27 + 0x4e) = 0;
                  plVar19 = plVar27 + 1;
                  plVar27[2] = 0;
                  *plVar19 = 0;
                  plVar27[0x3e] = 0;
                  plVar27[0x3d] = 0;
                  *(undefined8 *)((long)plVar27 + 0x1ff) = 0;
                  *(undefined8 *)((long)plVar27 + 0x1f7) = 0;
                  *(undefined8 *)((long)plVar27 + 0x284) = 0;
                  *(undefined8 *)((long)plVar27 + 0x27c) = 0;
                  *(undefined8 *)((long)plVar27 + 0x274) = 0;
                  uVar9 = *puVar30;
                  plVar27[0x49] = 0;
                  plVar27[0x48] = 0;
                  plVar27[0x4b] = 0;
                  plVar27[0x4a] = 0;
                  plVar27[0x4d] = 0;
                  plVar27[0x4c] = 0;
                  plVar27[0x41] = 0xffffffff;
                  plVar27[0x42] = 0;
                  plVar27[4] = 0;
                  plVar27[3] = 0;
                  plVar27[6] = 0;
                  plVar27[5] = 0;
                  plVar27[8] = 0;
                  plVar27[7] = 0;
                  plVar27[10] = 0;
                  plVar27[9] = 0;
                  plVar27[0xc] = 0;
                  plVar27[0xb] = 0;
                  plVar27[0xe] = 0;
                  plVar27[0xd] = 0;
                  plVar27[0x10] = 0;
                  plVar27[0xf] = 0;
                  plVar27[0x12] = 0;
                  plVar27[0x11] = 0;
                  plVar27[0x14] = 0;
                  plVar27[0x13] = 0;
                  plVar27[0x16] = 0;
                  plVar27[0x15] = 0;
                  plVar27[0x18] = 0;
                  plVar27[0x17] = 0;
                  plVar27[0x1a] = 0;
                  plVar27[0x19] = 0;
                  plVar27[0x1c] = 0;
                  plVar27[0x1b] = 0;
                  plVar27[0x1e] = 0;
                  plVar27[0x1d] = 0;
                  plVar27[0x20] = 0;
                  plVar27[0x1f] = 0;
                  plVar27[0x22] = 0;
                  plVar27[0x21] = 0;
                  plVar27[0x24] = 0;
                  plVar27[0x23] = 0;
                  plVar27[0x26] = 0;
                  plVar27[0x25] = 0;
                  plVar27[0x28] = 0;
                  plVar27[0x27] = 0;
                  plVar27[0x2a] = 0;
                  plVar27[0x29] = 0;
                  plVar27[0x2c] = 0;
                  plVar27[0x2b] = 0;
                  plVar27[0x2e] = 0;
                  plVar27[0x2d] = 0;
                  plVar27[0x30] = 0;
                  plVar27[0x2f] = 0;
                  plVar27[0x32] = 0;
                  plVar27[0x31] = 0;
                  plVar27[0x34] = 0;
                  plVar27[0x33] = 0;
                  plVar27[0x36] = 0;
                  plVar27[0x35] = 0;
                  plVar27[0x38] = 0;
                  plVar27[0x37] = 0;
                  plVar27[0x3a] = 0;
                  plVar27[0x39] = 0;
                  plVar27[0x3c] = 0;
                  plVar27[0x3b] = 0;
                  plStack_278 = plVar27;
                  if ((char)uVar9 != -0x34) {
code_r0x039def0c:
                    func_0x03fa2aa0(lVar12);
                    if (plStack_278 != (long *)0x0) {
                      (**(code **)(*plStack_278 + 8))();
                    }
                    goto code_r0x039def28;
                  }
                  uVar4 = *(undefined4 *)((long)puVar30 + 1);
                  *(undefined4 *)(plVar27 + 0x4b) = uVar4;
                  func_0x03f11c80(plVar19,(long)puVar30 + 5,uVar4,0x288);
                  puVar1 = (uint *)((long)puVar30 + 5 + (ulong)*(uint *)(plVar27 + 0x4b));
                  uVar5 = puVar1[3];
                  *(uint *)((long)plVar27 + 0x264) = puVar1[2];
                  uVar9 = puVar1[4];
                  uVar2 = puVar1[5];
                  *(uint *)(plVar27 + 0x4d) = uVar5;
                  uVar5 = puVar1[6];
                  *(uint *)(plVar27 + 0x4e) = uVar2;
                  uVar2 = puVar1[7];
                  *(uint *)((long)plVar27 + 0x26c) = uVar9;
                  uVar9 = *puVar1;
                  *(uint *)(plVar27 + 0x4f) = uVar5;
                  uVar5 = puVar1[1];
                  *(uint *)((long)plVar27 + 0x274) = uVar2;
                  uVar2 = puVar1[8];
                  *(uint *)((long)plVar27 + 0x25c) = uVar9;
                  *(uint *)(plVar27 + 0x4c) = uVar5;
                  *(uint *)((long)plVar27 + 0x27c) = uVar2;
                  if (uVar26 < 2) {
                    puVar30 = puVar1 + 9;
                  }
                  else {
                    uVar2 = puVar1[10];
                    uVar3 = puVar1[0xb];
                    puVar30 = puVar1 + 0xc;
                    *(uint *)(plVar27 + 0x50) = puVar1[9];
                    *(uint *)((long)plVar27 + 0x284) = uVar2;
                    *(uint *)(plVar27 + 0x51) = uVar3;
                  }
                  plVar27[0x4a] = (long)plVar19;
                  if ((((*(uint *)(plVar27 + 0x4b) == 0) || ((char)plVar27[1] == '\0')) ||
                      (uVar9 == 0)) || ((uVar9 & 0x20000000) == 0 && uVar5 == 0))
                  goto code_r0x039def0c;
                  plVar16 = (long *)func_0x03f0b2e0(0x20);
                  plVar16[2] = 0;
                  plVar16[3] = 0;
                  lVar20 = *plVar23;
                  *plVar16 = lVar22;
                  plVar16[1] = (long)plVar27;
                  if (lVar20 == 0) {
                    *plVar24 = (long)plVar16;
                    plVar27 = plVar23;
                  }
                  else {
                    lVar20 = *plVar24;
                    *(long **)(lVar20 + 0x10) = plVar16;
                    plVar16[3] = lVar20;
                    plVar27 = plVar24;
                  }
                  iVar8 = *(int *)(lVar12 + 0x4b0);
                  *plVar27 = (long)plVar16;
                  uStack_280 = 0;
                  *(int *)(lVar12 + 0x4b0) = iVar8 + 1;
                  lStack_290 = lVar21;
                  plStack_288 = plVar19;
                  uStack_280 = func_0x03f2cbd0(plVar19,0x288);
                  func_0x03fa2b40(lVar12 + 0x4b8,&lStack_290,&plStack_278);
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
              *(long **)(lVar12 + 0x28) = plVar14;
              if (puVar15 != (uint *)0x0) {
                func_0x03f0cbe0(puVar15);
              }
              uVar13 = 0;
              goto code_r0x039deb3c;
            }
code_r0x039def28:
            if (puVar15 == (uint *)0x0) goto code_r0x039deb38;
          }
          func_0x03f0cbe0(puVar15);
        }
      }
    }
  }
code_r0x039deb38:
  uVar13 = 0x80000000;
code_r0x039deb3c:
  if (*(long *)(lVar7 + 0x28) != lStack_268) {
    func_0x03f0b330(uVar13);
    return;
  }
  return;
code_r0x039de53c:
  puVar25 = (undefined8 *)puVar25[2];
  goto joined_r0x039de50c;
}


