
void FUN_00007ba0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  long lVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  undefined8 *puVar21;
  long lVar22;
  uint *puVar23;
  undefined8 *puVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  
  iVar3 = *(int *)(param_2 + 1);
  lVar22 = *param_1;
  puVar23 = (uint *)*param_2;
  bVar12 = iVar3 == 0;
  puVar24 = (undefined8 *)*param_3;
  iVar4 = *(int *)(param_3 + 1);
  lVar19 = *(long *)PTR_DAT_0001fe30;
  if (!bVar12 && (puVar24 != (undefined8 *)0x0 && (lVar22 != 0 && puVar23 != (uint *)0x0))) {
    bVar13 = iVar4 == 0;
    uVar28 = (uint)bVar13;
    if (!bVar13) {
      if (iVar4 < 1) goto LAB_00007d10;
      if (0 < iVar3) {
        uVar29 = (uint)bVar13;
        iVar27 = 0;
        uVar30 = uVar28;
        uVar25 = uVar29;
        do {
          uVar10 = *puVar23;
          if (uVar28 != 0) {
            uVar10 = uVar10 >> (ulong)uVar28;
          }
          lVar11 = ((ulong)uVar10 & 0xff) * 3;
          lVar17 = lVar22 + lVar11;
          if (*(char *)(lVar17 + 1) < '\0') {
            uVar5 = *(ushort *)(lVar22 + lVar11);
            uVar18 = (uint)*(byte *)(lVar17 + 2);
          }
          else {
            uVar18 = (uint)*(byte *)(lVar17 + 2);
            uVar16 = 1 << (ulong)(uVar18 & 0x1f);
            uVar20 = *(ushort *)(lVar22 + lVar11) & 0x7fff;
            uVar14 = (uint)((uVar10 & uVar16) != 0);
            while( true ) {
              uVar18 = uVar18 + 1;
              puVar1 = (ushort *)(lVar22 + (long)(int)(uVar20 + uVar14) * 3);
              if (*(char *)((long)puVar1 + 1) < '\0') break;
              uVar16 = uVar16 << 1;
              uVar14 = *puVar1 & 0x7fff;
              uVar20 = (uint)((uVar10 & uVar16) != 0);
            }
            uVar5 = *puVar1;
          }
          uVar20 = uVar5 & 0x300;
          iVar2 = (int)(uVar18 + uVar28) >> 3;
          uVar28 = uVar18 + uVar28 & 7;
          uVar10 = uVar5 & 0xff;
          puVar23 = (uint *)((long)puVar23 + (long)iVar2);
          iVar27 = iVar27 + iVar2;
          if ((uVar5 & 0x300) == 0) {
            lVar17 = 1;
            *(char *)puVar24 = (char)uVar5;
            uVar29 = 1;
            uVar25 = uVar25 + 1;
          }
          else if (uVar20 == 0x100) {
            if (0xff < (int)uVar30) break;
            lVar17 = 0;
            if (uVar30 == 0) {
              uVar29 = 0;
              uVar30 = uVar10;
            }
            else {
              uVar30 = uVar10 | uVar30 << 8;
              uVar29 = 0;
            }
          }
          else if (uVar20 == 0x200) {
            if (uVar30 == 0) {
              uVar30 = 1;
            }
            uVar29 = uVar10 * uVar30;
            uVar25 = uVar25 + uVar29;
            if (iVar4 < (int)uVar25) break;
            if (uVar10 == 1) {
              if ((int)uVar30 < 0x10) {
                lVar17 = 0;
                do {
                  *(undefined1 *)((long)puVar24 + lVar17) = *(undefined1 *)((long)puVar24 + -1);
                  lVar17 = lVar17 + 1;
                } while ((int)lVar17 < (int)uVar30);
              }
              else {
                uVar6 = *(undefined1 *)((long)puVar24 + -1);
                uVar10 = (uVar30 - 0x10 >> 4) + 1;
                uVar18 = 0;
                uVar20 = uVar10 * 0x10;
                puVar21 = puVar24;
                do {
                  puVar21[1] = CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,CONCAT13(
                                                  uVar6,CONCAT12(uVar6,CONCAT11(uVar6,uVar6)))))));
                  *puVar21 = CONCAT17(uVar6,CONCAT16(uVar6,CONCAT15(uVar6,CONCAT14(uVar6,CONCAT13(
                                                  uVar6,CONCAT12(uVar6,CONCAT11(uVar6,uVar6)))))));
                  uVar18 = uVar18 + 1;
                  puVar21 = puVar21 + 2;
                } while (uVar18 < uVar10);
                uVar26 = (ulong)uVar20;
                if ((((((uVar30 != uVar20) &&
                       (*(undefined1 *)((long)puVar24 + uVar26) =
                             *(undefined1 *)((long)puVar24 + -1), (int)(uVar20 + 1) < (int)uVar30))
                      && (*(undefined1 *)((long)puVar24 + uVar26 + 1) =
                               *(undefined1 *)((long)puVar24 + -1), (int)(uVar20 + 2) < (int)uVar30)
                      ) && (((*(undefined1 *)((long)puVar24 + uVar26 + 2) =
                                   *(undefined1 *)((long)puVar24 + -1),
                             (int)(uVar20 + 3) < (int)uVar30 &&
                             (*(undefined1 *)((long)puVar24 + uVar26 + 3) =
                                   *(undefined1 *)((long)puVar24 + -1),
                             (int)(uVar20 + 4) < (int)uVar30)) &&
                            ((*(undefined1 *)((long)puVar24 + uVar26 + 4) =
                                   *(undefined1 *)((long)puVar24 + -1),
                             (int)(uVar20 + 5) < (int)uVar30 &&
                             ((*(undefined1 *)((long)puVar24 + uVar26 + 5) =
                                    *(undefined1 *)((long)puVar24 + -1),
                              (int)(uVar20 + 6) < (int)uVar30 &&
                              (*(undefined1 *)((long)puVar24 + uVar26 + 6) =
                                    *(undefined1 *)((long)puVar24 + -1),
                              (int)(uVar20 + 7) < (int)uVar30)))))))) &&
                    (*(undefined1 *)((long)puVar24 + uVar26 + 7) =
                          *(undefined1 *)((long)puVar24 + -1), (int)(uVar20 + 8) < (int)uVar30)) &&
                   (((((*(undefined1 *)((long)puVar24 + uVar26 + 8) =
                             *(undefined1 *)((long)puVar24 + -1), (int)(uVar20 + 9) < (int)uVar30 &&
                       (*(undefined1 *)((long)puVar24 + uVar26 + 9) =
                             *(undefined1 *)((long)puVar24 + -1), (int)(uVar20 + 10) < (int)uVar30))
                      && (*(undefined1 *)((long)puVar24 + uVar26 + 10) =
                               *(undefined1 *)((long)puVar24 + -1),
                         (int)(uVar20 + 0xb) < (int)uVar30)) &&
                     ((*(undefined1 *)((long)puVar24 + uVar26 + 0xb) =
                            *(undefined1 *)((long)puVar24 + -1), (int)(uVar20 + 0xc) < (int)uVar30
                      && (*(undefined1 *)((long)puVar24 + uVar26 + 0xc) =
                               *(undefined1 *)((long)puVar24 + -1),
                         (int)(uVar20 + 0xd) < (int)uVar30)))) &&
                    (*(undefined1 *)((long)puVar24 + uVar26 + 0xd) =
                          *(undefined1 *)((long)puVar24 + -1), (int)(uVar20 + 0xe) < (int)uVar30))))
                {
                  *(undefined1 *)((long)puVar24 + uVar26 + 0xe) =
                       *(undefined1 *)((long)puVar24 + -1);
                }
              }
            }
            else if (uVar10 == 2) {
              if ((int)uVar30 < 0x10) {
                puVar21 = puVar24;
                do {
                  puVar15 = (undefined8 *)((long)puVar21 + 2);
                  *(undefined1 *)puVar21 = *(undefined1 *)((long)puVar24 + -2);
                  *(undefined1 *)((long)puVar21 + 1) = *(undefined1 *)((long)puVar24 + -1);
                  puVar21 = puVar15;
                } while ((undefined8 *)((long)puVar24 + ((ulong)(uVar30 - 1) + 1) * 2) != puVar15);
              }
              else {
                uVar6 = *(undefined1 *)((long)puVar24 + -2);
                uVar7 = *(undefined1 *)((long)puVar24 + -1);
                uVar10 = (uVar30 - 0x10 >> 4) + 1;
                uVar18 = 0;
                uVar20 = uVar10 * 0x10;
                puVar21 = puVar24;
                do {
                  uVar18 = uVar18 + 1;
                  *(undefined1 *)puVar21 = uVar6;
                  *(undefined1 *)((long)puVar21 + 1) = uVar7;
                  *(undefined1 *)((long)puVar21 + 2) = uVar6;
                  *(undefined1 *)((long)puVar21 + 3) = uVar7;
                  *(undefined1 *)((long)puVar21 + 4) = uVar6;
                  *(undefined1 *)((long)puVar21 + 5) = uVar7;
                  *(undefined1 *)((long)puVar21 + 6) = uVar6;
                  *(undefined1 *)((long)puVar21 + 7) = uVar7;
                  *(undefined1 *)(puVar21 + 1) = uVar6;
                  *(undefined1 *)((long)puVar21 + 9) = uVar7;
                  *(undefined1 *)((long)puVar21 + 10) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0xb) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0xc) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0xd) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0xe) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0xf) = uVar7;
                  *(undefined1 *)(puVar21 + 2) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x11) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x12) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x13) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x14) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x15) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x16) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x17) = uVar7;
                  *(undefined1 *)(puVar21 + 3) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x19) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x1a) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x1b) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x1c) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x1d) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x1e) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x1f) = uVar7;
                  puVar21 = puVar21 + 4;
                } while (uVar18 < uVar10);
                lVar17 = (ulong)uVar20 * 2;
                if (uVar30 != uVar20) {
                  *(undefined1 *)((long)puVar24 + lVar17) = *(undefined1 *)((long)puVar24 + -2);
                  *(undefined1 *)((long)puVar24 + lVar17 + 1) = *(undefined1 *)((long)puVar24 + -1);
                  if ((int)(uVar20 + 1) < (int)uVar30) {
                    *(undefined1 *)((long)puVar24 + lVar17 + 2) =
                         *(undefined1 *)((long)puVar24 + -2);
                    *(undefined1 *)((long)puVar24 + lVar17 + 3) =
                         *(undefined1 *)((long)puVar24 + -1);
                    if ((int)(uVar20 + 2) < (int)uVar30) {
                      *(undefined1 *)((long)puVar24 + lVar17 + 4) =
                           *(undefined1 *)((long)puVar24 + -2);
                      *(undefined1 *)((long)puVar24 + lVar17 + 5) =
                           *(undefined1 *)((long)puVar24 + -1);
                      if ((int)(uVar20 + 3) < (int)uVar30) {
                        *(undefined1 *)((long)puVar24 + lVar17 + 6) =
                             *(undefined1 *)((long)puVar24 + -2);
                        *(undefined1 *)((long)puVar24 + lVar17 + 7) =
                             *(undefined1 *)((long)puVar24 + -1);
                        if ((int)(uVar20 + 4) < (int)uVar30) {
                          *(undefined1 *)((long)puVar24 + lVar17 + 8) =
                               *(undefined1 *)((long)puVar24 + -2);
                          *(undefined1 *)((long)puVar24 + lVar17 + 9) =
                               *(undefined1 *)((long)puVar24 + -1);
                          if ((int)(uVar20 + 5) < (int)uVar30) {
                            *(undefined1 *)((long)puVar24 + lVar17 + 10) =
                                 *(undefined1 *)((long)puVar24 + -2);
                            *(undefined1 *)((long)puVar24 + lVar17 + 0xb) =
                                 *(undefined1 *)((long)puVar24 + -1);
                            if ((int)(uVar20 + 6) < (int)uVar30) {
                              *(undefined1 *)((long)puVar24 + lVar17 + 0xc) =
                                   *(undefined1 *)((long)puVar24 + -2);
                              *(undefined1 *)((long)puVar24 + lVar17 + 0xd) =
                                   *(undefined1 *)((long)puVar24 + -1);
                              if ((int)(uVar20 + 7) < (int)uVar30) {
                                *(undefined1 *)((long)puVar24 + lVar17 + 0xe) =
                                     *(undefined1 *)((long)puVar24 + -2);
                                *(undefined1 *)((long)puVar24 + lVar17 + 0xf) =
                                     *(undefined1 *)((long)puVar24 + -1);
                                if ((int)(uVar20 + 8) < (int)uVar30) {
                                  *(undefined1 *)((long)puVar24 + lVar17 + 0x10) =
                                       *(undefined1 *)((long)puVar24 + -2);
                                  *(undefined1 *)((long)puVar24 + lVar17 + 0x11) =
                                       *(undefined1 *)((long)puVar24 + -1);
                                  if ((int)(uVar20 + 9) < (int)uVar30) {
                                    *(undefined1 *)((long)puVar24 + lVar17 + 0x12) =
                                         *(undefined1 *)((long)puVar24 + -2);
                                    *(undefined1 *)((long)puVar24 + lVar17 + 0x13) =
                                         *(undefined1 *)((long)puVar24 + -1);
                                    if ((int)(uVar20 + 10) < (int)uVar30) {
                                      *(undefined1 *)((long)puVar24 + lVar17 + 0x14) =
                                           *(undefined1 *)((long)puVar24 + -2);
                                      *(undefined1 *)((long)puVar24 + lVar17 + 0x15) =
                                           *(undefined1 *)((long)puVar24 + -1);
                                      if ((int)(uVar20 + 0xb) < (int)uVar30) {
                                        *(undefined1 *)((long)puVar24 + lVar17 + 0x16) =
                                             *(undefined1 *)((long)puVar24 + -2);
                                        *(undefined1 *)((long)puVar24 + lVar17 + 0x17) =
                                             *(undefined1 *)((long)puVar24 + -1);
                                        if ((int)(uVar20 + 0xc) < (int)uVar30) {
                                          *(undefined1 *)((long)puVar24 + lVar17 + 0x18) =
                                               *(undefined1 *)((long)puVar24 + -2);
                                          *(undefined1 *)((long)puVar24 + lVar17 + 0x19) =
                                               *(undefined1 *)((long)puVar24 + -1);
                                          if ((int)(uVar20 + 0xd) < (int)uVar30) {
                                            *(undefined1 *)((long)puVar24 + lVar17 + 0x1a) =
                                                 *(undefined1 *)((long)puVar24 + -2);
                                            *(undefined1 *)((long)puVar24 + lVar17 + 0x1b) =
                                                 *(undefined1 *)((long)puVar24 + -1);
                                            if ((int)(uVar20 + 0xe) < (int)uVar30) {
                                              *(undefined1 *)((long)puVar24 + lVar17 + 0x1c) =
                                                   *(undefined1 *)((long)puVar24 + -2);
                                              *(undefined1 *)((long)puVar24 + lVar17 + 0x1d) =
                                                   *(undefined1 *)((long)puVar24 + -1);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (uVar10 == 4) {
              if ((int)uVar30 < 0x10) {
                puVar21 = puVar24;
                do {
                  puVar15 = (undefined8 *)((long)puVar21 + 4);
                  *(undefined1 *)puVar21 = *(undefined1 *)((long)puVar24 + -4);
                  *(undefined1 *)((long)puVar21 + 1) = *(undefined1 *)((long)puVar24 + -3);
                  *(undefined1 *)((long)puVar21 + 2) = *(undefined1 *)((long)puVar24 + -2);
                  *(undefined1 *)((long)puVar21 + 3) = *(undefined1 *)((long)puVar24 + -1);
                  puVar21 = puVar15;
                } while (puVar15 != (undefined8 *)((long)puVar24 + ((ulong)(uVar30 - 1) + 1) * 4));
              }
              else {
                uVar6 = *(undefined1 *)((long)puVar24 + -4);
                uVar7 = *(undefined1 *)((long)puVar24 + -2);
                uVar8 = *(undefined1 *)((long)puVar24 + -3);
                uVar10 = (uVar30 - 0x10 >> 4) + 1;
                uVar9 = *(undefined1 *)((long)puVar24 + -1);
                uVar18 = 0;
                uVar20 = uVar10 * 0x10;
                puVar21 = puVar24;
                do {
                  uVar18 = uVar18 + 1;
                  *(undefined1 *)puVar21 = uVar6;
                  *(undefined1 *)((long)puVar21 + 1) = uVar8;
                  *(undefined1 *)((long)puVar21 + 2) = uVar7;
                  *(undefined1 *)((long)puVar21 + 3) = uVar9;
                  *(undefined1 *)((long)puVar21 + 4) = uVar6;
                  *(undefined1 *)((long)puVar21 + 5) = uVar8;
                  *(undefined1 *)((long)puVar21 + 6) = uVar7;
                  *(undefined1 *)((long)puVar21 + 7) = uVar9;
                  *(undefined1 *)(puVar21 + 1) = uVar6;
                  *(undefined1 *)((long)puVar21 + 9) = uVar8;
                  *(undefined1 *)((long)puVar21 + 10) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0xb) = uVar9;
                  *(undefined1 *)((long)puVar21 + 0xc) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0xd) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0xe) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0xf) = uVar9;
                  *(undefined1 *)(puVar21 + 2) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x11) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x12) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x13) = uVar9;
                  *(undefined1 *)((long)puVar21 + 0x14) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x15) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x16) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x17) = uVar9;
                  *(undefined1 *)(puVar21 + 3) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x19) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x1a) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x1b) = uVar9;
                  *(undefined1 *)((long)puVar21 + 0x1c) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x1d) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x1e) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x1f) = uVar9;
                  *(undefined1 *)(puVar21 + 4) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x21) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x22) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x23) = uVar9;
                  *(undefined1 *)((long)puVar21 + 0x24) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x25) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x26) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x27) = uVar9;
                  *(undefined1 *)(puVar21 + 5) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x29) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x2a) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x2b) = uVar9;
                  *(undefined1 *)((long)puVar21 + 0x2c) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x2d) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x2e) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x2f) = uVar9;
                  *(undefined1 *)(puVar21 + 6) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x31) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x32) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x33) = uVar9;
                  *(undefined1 *)((long)puVar21 + 0x34) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x35) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x36) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x37) = uVar9;
                  *(undefined1 *)(puVar21 + 7) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x39) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x3a) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x3b) = uVar9;
                  *(undefined1 *)((long)puVar21 + 0x3c) = uVar6;
                  *(undefined1 *)((long)puVar21 + 0x3d) = uVar8;
                  *(undefined1 *)((long)puVar21 + 0x3e) = uVar7;
                  *(undefined1 *)((long)puVar21 + 0x3f) = uVar9;
                  puVar21 = puVar21 + 8;
                } while (uVar18 < uVar10);
                lVar17 = (ulong)uVar20 * 4;
                if (uVar20 != uVar30) {
                  *(undefined1 *)((long)puVar24 + lVar17) = *(undefined1 *)((long)puVar24 + -4);
                  *(undefined1 *)((long)puVar24 + lVar17 + 1) = *(undefined1 *)((long)puVar24 + -3);
                  *(undefined1 *)((long)puVar24 + lVar17 + 2) = *(undefined1 *)((long)puVar24 + -2);
                  *(undefined1 *)((long)puVar24 + lVar17 + 3) = *(undefined1 *)((long)puVar24 + -1);
                  if ((int)(uVar20 + 1) < (int)uVar30) {
                    *(undefined1 *)((long)puVar24 + lVar17 + 4) =
                         *(undefined1 *)((long)puVar24 + -4);
                    *(undefined1 *)((long)puVar24 + lVar17 + 5) =
                         *(undefined1 *)((long)puVar24 + -3);
                    *(undefined1 *)((long)puVar24 + lVar17 + 6) =
                         *(undefined1 *)((long)puVar24 + -2);
                    *(undefined1 *)((long)puVar24 + lVar17 + 7) =
                         *(undefined1 *)((long)puVar24 + -1);
                    if ((int)(uVar20 + 2) < (int)uVar30) {
                      *(undefined1 *)((long)puVar24 + lVar17 + 8) =
                           *(undefined1 *)((long)puVar24 + -4);
                      *(undefined1 *)((long)puVar24 + lVar17 + 9) =
                           *(undefined1 *)((long)puVar24 + -3);
                      *(undefined1 *)((long)puVar24 + lVar17 + 10) =
                           *(undefined1 *)((long)puVar24 + -2);
                      *(undefined1 *)((long)puVar24 + lVar17 + 0xb) =
                           *(undefined1 *)((long)puVar24 + -1);
                      if ((int)(uVar20 + 3) < (int)uVar30) {
                        *(undefined1 *)((long)puVar24 + lVar17 + 0xc) =
                             *(undefined1 *)((long)puVar24 + -4);
                        *(undefined1 *)((long)puVar24 + lVar17 + 0xd) =
                             *(undefined1 *)((long)puVar24 + -3);
                        *(undefined1 *)((long)puVar24 + lVar17 + 0xe) =
                             *(undefined1 *)((long)puVar24 + -2);
                        *(undefined1 *)((long)puVar24 + lVar17 + 0xf) =
                             *(undefined1 *)((long)puVar24 + -1);
                        if ((int)(uVar20 + 4) < (int)uVar30) {
                          *(undefined1 *)((long)puVar24 + lVar17 + 0x10) =
                               *(undefined1 *)((long)puVar24 + -4);
                          *(undefined1 *)((long)puVar24 + lVar17 + 0x11) =
                               *(undefined1 *)((long)puVar24 + -3);
                          *(undefined1 *)((long)puVar24 + lVar17 + 0x12) =
                               *(undefined1 *)((long)puVar24 + -2);
                          *(undefined1 *)((long)puVar24 + lVar17 + 0x13) =
                               *(undefined1 *)((long)puVar24 + -1);
                          if ((int)(uVar20 + 5) < (int)uVar30) {
                            *(undefined1 *)((long)puVar24 + lVar17 + 0x14) =
                                 *(undefined1 *)((long)puVar24 + -4);
                            *(undefined1 *)((long)puVar24 + lVar17 + 0x15) =
                                 *(undefined1 *)((long)puVar24 + -3);
                            *(undefined1 *)((long)puVar24 + lVar17 + 0x16) =
                                 *(undefined1 *)((long)puVar24 + -2);
                            *(undefined1 *)((long)puVar24 + lVar17 + 0x17) =
                                 *(undefined1 *)((long)puVar24 + -1);
                            if ((int)(uVar20 + 6) < (int)uVar30) {
                              *(undefined1 *)((long)puVar24 + lVar17 + 0x18) =
                                   *(undefined1 *)((long)puVar24 + -4);
                              *(undefined1 *)((long)puVar24 + lVar17 + 0x19) =
                                   *(undefined1 *)((long)puVar24 + -3);
                              *(undefined1 *)((long)puVar24 + lVar17 + 0x1a) =
                                   *(undefined1 *)((long)puVar24 + -2);
                              *(undefined1 *)((long)puVar24 + lVar17 + 0x1b) =
                                   *(undefined1 *)((long)puVar24 + -1);
                              if ((int)(uVar20 + 7) < (int)uVar30) {
                                *(undefined1 *)((long)puVar24 + lVar17 + 0x1c) =
                                     *(undefined1 *)((long)puVar24 + -4);
                                *(undefined1 *)((long)puVar24 + lVar17 + 0x1d) =
                                     *(undefined1 *)((long)puVar24 + -3);
                                *(undefined1 *)((long)puVar24 + lVar17 + 0x1e) =
                                     *(undefined1 *)((long)puVar24 + -2);
                                *(undefined1 *)((long)puVar24 + lVar17 + 0x1f) =
                                     *(undefined1 *)((long)puVar24 + -1);
                                if ((int)(uVar20 + 8) < (int)uVar30) {
                                  *(undefined1 *)((long)puVar24 + lVar17 + 0x20) =
                                       *(undefined1 *)((long)puVar24 + -4);
                                  *(undefined1 *)((long)puVar24 + lVar17 + 0x21) =
                                       *(undefined1 *)((long)puVar24 + -3);
                                  *(undefined1 *)((long)puVar24 + lVar17 + 0x22) =
                                       *(undefined1 *)((long)puVar24 + -2);
                                  *(undefined1 *)((long)puVar24 + lVar17 + 0x23) =
                                       *(undefined1 *)((long)puVar24 + -1);
                                  if ((int)(uVar20 + 9) < (int)uVar30) {
                                    *(undefined1 *)((long)puVar24 + lVar17 + 0x24) =
                                         *(undefined1 *)((long)puVar24 + -4);
                                    *(undefined1 *)((long)puVar24 + lVar17 + 0x25) =
                                         *(undefined1 *)((long)puVar24 + -3);
                                    *(undefined1 *)((long)puVar24 + lVar17 + 0x26) =
                                         *(undefined1 *)((long)puVar24 + -2);
                                    *(undefined1 *)((long)puVar24 + lVar17 + 0x27) =
                                         *(undefined1 *)((long)puVar24 + -1);
                                    if ((int)(uVar20 + 10) < (int)uVar30) {
                                      *(undefined1 *)((long)puVar24 + lVar17 + 0x28) =
                                           *(undefined1 *)((long)puVar24 + -4);
                                      *(undefined1 *)((long)puVar24 + lVar17 + 0x29) =
                                           *(undefined1 *)((long)puVar24 + -3);
                                      *(undefined1 *)((long)puVar24 + lVar17 + 0x2a) =
                                           *(undefined1 *)((long)puVar24 + -2);
                                      *(undefined1 *)((long)puVar24 + lVar17 + 0x2b) =
                                           *(undefined1 *)((long)puVar24 + -1);
                                      if ((int)(uVar20 + 0xb) < (int)uVar30) {
                                        *(undefined1 *)((long)puVar24 + lVar17 + 0x2c) =
                                             *(undefined1 *)((long)puVar24 + -4);
                                        *(undefined1 *)((long)puVar24 + lVar17 + 0x2d) =
                                             *(undefined1 *)((long)puVar24 + -3);
                                        *(undefined1 *)((long)puVar24 + lVar17 + 0x2e) =
                                             *(undefined1 *)((long)puVar24 + -2);
                                        *(undefined1 *)((long)puVar24 + lVar17 + 0x2f) =
                                             *(undefined1 *)((long)puVar24 + -1);
                                        if ((int)(uVar20 + 0xc) < (int)uVar30) {
                                          *(undefined1 *)((long)puVar24 + lVar17 + 0x30) =
                                               *(undefined1 *)((long)puVar24 + -4);
                                          *(undefined1 *)((long)puVar24 + lVar17 + 0x31) =
                                               *(undefined1 *)((long)puVar24 + -3);
                                          *(undefined1 *)((long)puVar24 + lVar17 + 0x32) =
                                               *(undefined1 *)((long)puVar24 + -2);
                                          *(undefined1 *)((long)puVar24 + lVar17 + 0x33) =
                                               *(undefined1 *)((long)puVar24 + -1);
                                          if ((int)(uVar20 + 0xd) < (int)uVar30) {
                                            *(undefined1 *)((long)puVar24 + lVar17 + 0x34) =
                                                 *(undefined1 *)((long)puVar24 + -4);
                                            *(undefined1 *)((long)puVar24 + lVar17 + 0x35) =
                                                 *(undefined1 *)((long)puVar24 + -3);
                                            *(undefined1 *)((long)puVar24 + lVar17 + 0x36) =
                                                 *(undefined1 *)((long)puVar24 + -2);
                                            *(undefined1 *)((long)puVar24 + lVar17 + 0x37) =
                                                 *(undefined1 *)((long)puVar24 + -1);
                                            if ((int)(uVar20 + 0xe) < (int)uVar30) {
                                              *(undefined1 *)((long)puVar24 + lVar17 + 0x38) =
                                                   *(undefined1 *)((long)puVar24 + -4);
                                              *(undefined1 *)((long)puVar24 + lVar17 + 0x39) =
                                                   *(undefined1 *)((long)puVar24 + -3);
                                              *(undefined1 *)((long)puVar24 + lVar17 + 0x3a) =
                                                   *(undefined1 *)((long)puVar24 + -2);
                                              *(undefined1 *)((long)puVar24 + lVar17 + 0x3b) =
                                                   *(undefined1 *)((long)puVar24 + -1);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            lVar17 = (long)(int)uVar29;
            uVar30 = 0;
          }
          else if (uVar20 == 0x300) {
            uVar18 = uVar25 + uVar10;
            if ((iVar4 < (int)uVar18) || (iVar2 = uVar30 + uVar10, (int)uVar25 < iVar2)) break;
            puVar21 = (undefined8 *)((long)puVar24 - (long)iVar2);
            uVar29 = uVar10;
            uVar25 = uVar18;
            if ((uVar5 & 0xff) == 0) {
              lVar17 = 0;
              uVar30 = 0;
            }
            else {
              if ((0x10 - (long)iVar2 < 1 || puVar24 + 2 <= puVar21) && (0xf < uVar10)) {
                uVar30 = (uVar10 - 0x10 >> 4) + 1;
                uVar18 = 0;
                uVar20 = uVar30 * 0x10;
                puVar15 = puVar24;
                puVar31 = puVar21;
                do {
                  uVar32 = *puVar31;
                  uVar18 = uVar18 + 1;
                  puVar15[1] = puVar31[1];
                  *puVar15 = uVar32;
                  puVar15 = puVar15 + 2;
                  puVar31 = puVar31 + 2;
                } while (uVar18 < uVar30);
                uVar26 = (ulong)uVar20;
                if (((((uVar10 != uVar20) &&
                      (*(undefined1 *)((long)puVar24 + uVar26) =
                            *(undefined1 *)((long)puVar21 + uVar26), (int)(uVar20 + 1) < (int)uVar10
                      )) && (*(undefined1 *)((long)puVar24 + uVar26 + 1) =
                                  *(undefined1 *)((long)puVar21 + uVar26 + 1),
                            (int)(uVar20 + 2) < (int)uVar10)) &&
                    (((*(undefined1 *)((long)puVar24 + uVar26 + 2) =
                            *(undefined1 *)((long)puVar21 + uVar26 + 2),
                      (int)(uVar20 + 3) < (int)uVar10 &&
                      (*(undefined1 *)((long)puVar24 + uVar26 + 3) =
                            *(undefined1 *)((long)puVar21 + uVar26 + 3),
                      (int)(uVar20 + 4) < (int)uVar10)) &&
                     ((*(undefined1 *)((long)puVar24 + uVar26 + 4) =
                            *(undefined1 *)((long)puVar21 + uVar26 + 4),
                      (int)(uVar20 + 5) < (int)uVar10 &&
                      ((*(undefined1 *)((long)puVar24 + uVar26 + 5) =
                             *(undefined1 *)((long)puVar21 + uVar26 + 5),
                       (int)(uVar20 + 6) < (int)uVar10 &&
                       (*(undefined1 *)((long)puVar24 + uVar26 + 6) =
                             *(undefined1 *)((long)puVar21 + uVar26 + 6),
                       (int)(uVar20 + 7) < (int)uVar10)))))))) &&
                   (((*(undefined1 *)((long)puVar24 + uVar26 + 7) =
                           *(undefined1 *)((long)puVar21 + uVar26 + 7),
                     (int)(uVar20 + 8) < (int)uVar10 &&
                     ((((*(undefined1 *)((long)puVar24 + uVar26 + 8) =
                              *(undefined1 *)((long)puVar21 + uVar26 + 8),
                        (int)(uVar20 + 9) < (int)uVar10 &&
                        (*(undefined1 *)((long)puVar24 + uVar26 + 9) =
                              *(undefined1 *)((long)puVar21 + uVar26 + 9),
                        (int)(uVar20 + 10) < (int)uVar10)) &&
                       (*(undefined1 *)((long)puVar24 + uVar26 + 10) =
                             *(undefined1 *)((long)puVar21 + uVar26 + 10),
                       (int)(uVar20 + 0xb) < (int)uVar10)) &&
                      ((*(undefined1 *)((long)puVar24 + uVar26 + 0xb) =
                             *(undefined1 *)((long)puVar21 + uVar26 + 0xb),
                       (int)(uVar20 + 0xc) < (int)uVar10 &&
                       (*(undefined1 *)((long)puVar24 + uVar26 + 0xc) =
                             *(undefined1 *)((long)puVar21 + uVar26 + 0xc),
                       (int)(uVar20 + 0xd) < (int)uVar10)))))) &&
                    (*(undefined1 *)((long)puVar24 + uVar26 + 0xd) =
                          *(undefined1 *)((long)puVar21 + uVar26 + 0xd),
                    (int)(uVar20 + 0xe) < (int)uVar10)))) {
                  *(undefined1 *)((long)puVar24 + uVar26 + 0xe) =
                       *(undefined1 *)((long)puVar21 + uVar26 + 0xe);
                }
              }
              else {
                lVar17 = 0;
                do {
                  *(undefined1 *)((long)puVar24 + lVar17) = *(undefined1 *)((long)puVar21 + lVar17);
                  lVar17 = lVar17 + 1;
                } while ((int)lVar17 < (int)uVar10);
              }
              lVar17 = (long)(int)uVar10;
              uVar30 = 0;
            }
          }
          else {
            lVar17 = (long)(int)uVar29;
            uVar25 = uVar29 + uVar25;
          }
          puVar24 = (undefined8 *)((long)puVar24 + lVar17);
          if (iVar4 <= (int)uVar25) {
            if (uVar28 != 0) {
              iVar27 = iVar27 + 1;
            }
            bVar12 = iVar3 == iVar27;
            goto LAB_00007d10;
          }
        } while (iVar27 < iVar3);
      }
    }
  }
  bVar12 = false;
LAB_00007d10:
  if (lVar19 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(bVar12);
  }
  return;
}
