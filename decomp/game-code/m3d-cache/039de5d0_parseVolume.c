// M3d: parseVolume @ 0x39de5d0 (Ghidra decompile, true address)
#

void m3d_39de5d0(long param_1)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  ulong uVar24;
  long *plVar25;
  ulong uVar26;
  ulong uVar27;
  uint *puVar28;
  uint uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  long lStack_200;
  long *plStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long lStack_160;
  byte *pbStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long lStack_140;
  long lStack_138;
  undefined1 auStack_130 [192];
  long lStack_70;
  
  lVar8 = tpidr_el0;
  lStack_70 = *(long *)(lVar8 + 0x28);
  iVar9 = *(int *)(param_1 + 0x20);
  lVar18 = *(long *)(param_1 + 0x4a0);
  if (0 < iVar9) {
    do {
      lVar18 = *(long *)(lVar18 + 0x10);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  lVar18 = *(long *)(lVar18 + 8);
  lStack_138 = lVar18;
  if ((*(long *)(lVar18 + 0x210) == 0) && (*(uint *)(lVar18 + 0x208) <= *(uint *)(lVar18 + 0x20c)))
  {
    lVar12 = (**(code **)(**(long **)(param_1 + 8) + 0x38))();
    lVar12 = (ulong)*(uint *)(lVar18 + 0x208) - lVar12;
    if ((lVar12 < 0xc1) &&
       (lVar13 = (**(code **)(**(long **)(param_1 + 8) + 0x18))
                           (*(long **)(param_1 + 8),auStack_130,lVar12), lVar18 = lStack_138,
       lVar12 == lVar13)) {
      uVar5 = *(int *)(lStack_138 + 0x20c) - *(int *)(lStack_138 + 0x208);
      uVar24 = (ulong)uVar5;
      plVar14 = (long *)func_0x03f0b2e0(0x30);
      uVar26 = (ulong)(uVar5 + 0xf & 0xfffffff0);
      lVar12 = func_0x03f0cba0(uVar26 | 8);
      plVar14[1] = lVar12;
      plVar14[2] = uVar26;
      *plVar14 = lVar12;
      func_0x03f0c950(lVar12,0,uVar26);
      plVar14[4] = 0;
      plVar14[5] = 0;
      *(undefined1 *)(plVar14 + 3) = 1;
      *(long **)(lVar18 + 0x210) = plVar14;
      if (0 < (int)uVar5) {
        uVar19 = uVar24 & 0x7ffffff8;
        uVar27 = plVar14[2];
        uVar26 = uVar19 + 8;
        if ((lVar12 == 0) || (uVar27 <= uVar26)) {
          if (lVar12 == 0) {
            lVar12 = func_0x03f0cba0(uVar19 + 0x10);
            plVar14[1] = lVar12;
            plVar14[2] = uVar26;
            *plVar14 = lVar12;
          }
          else {
            lVar13 = func_0x03f0cba0((int)uVar19 + 8);
            func_0x03f0b910(lVar13,lVar12,uVar27);
            func_0x03f0cbe0(lVar12);
            lVar18 = *(long *)(lVar18 + 0x210);
            *plVar14 = lVar13;
            plVar14[1] = lVar13;
            plVar14[2] = uVar26;
            lVar12 = *(long *)(lVar18 + 8);
          }
        }
        plVar14[4] = uVar24;
      }
      uVar26 = (**(code **)(**(long **)(param_1 + 8) + 0x18))(*(long **)(param_1 + 8),lVar12,uVar24)
      ;
      lVar18 = lRam00000000041b6228;
      if (uVar26 == uVar24) {
        if (*(long **)(lStack_138 + 0x228) == (long *)0x0) {
          puVar16 = *(undefined8 **)(lStack_138 + 0x238);
          plStack_148 = (long *)*puVar16;
          lStack_140 = puVar16[1];
        }
        else {
          lStack_140 = lStack_138 + 0x218;
          plVar14 = *(long **)(lStack_138 + 0x228);
          do {
            plStack_148 = plVar14;
            plVar14 = (long *)plStack_148[1];
          } while ((long *)plStack_148[1] != (long *)0x0);
          puVar16 = *(undefined8 **)(lStack_138 + 0x238);
        }
        if (plStack_148 != (long *)*puVar16) {
          lVar12 = lRam000000000419a188 + 0x10;
          do {
            plVar14 = plStack_148;
            if (plStack_148 != (long *)0x0) {
              plVar14 = *(long **)(*plStack_148 + 8);
            }
            if (*(char *)((long)plVar14 + 0xc) != '\0') {
              uVar5 = (int)plVar14[2] - *(int *)(lStack_138 + 0x208);
              *(uint *)(plVar14 + 2) = uVar5;
              if ((*(char *)((long)plVar14 + 0xc) == '\x01') &&
                 (((*(int *)((long)plVar14 + 4) == 10 || (*(int *)((long)plVar14 + 4) == 5)) &&
                  (plVar14[4] = *(long *)(*(long *)(lStack_138 + 0x210) + 8) + (ulong)uVar5,
                  (*(uint *)(plVar14 + 1) & 0x7fffffff) != 0)))) {
                uVar24 = 0;
                do {
                  lVar13 = uVar24 * 4;
                  uVar24 = uVar24 + 1;
                  uVar5 = *(uint *)(plVar14[4] + lVar13);
                  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
                  *(uint *)(plVar14[4] + lVar13) = uVar5 >> 0x10 | uVar5 << 0x10;
                } while (uVar24 < (uint)((int)plVar14[1] << 1));
              }
            }
            iVar9 = (int)*plVar14;
            if (iVar9 < 0x8827) {
              if (iVar9 < 0x117) {
                if (iVar9 == 0x10e) {
                  uVar5 = *(uint *)((long)plVar14 + 0x14);
                  uVar24 = (ulong)uVar5;
                  pbStack_158 = (byte *)(*(long *)(*(long *)(lStack_138 + 0x210) + 8) +
                                        (ulong)*(uint *)(plVar14 + 2));
                  *(byte **)(lStack_138 + 0x250) = pbStack_158;
                  if (uVar5 == 0) {
                    iVar9 = 0;
                  }
                  else {
                    do {
                      uVar24 = uVar24 - 1;
                      *pbStack_158 = *(byte *)(lVar18 + (ulong)*pbStack_158);
                      pbStack_158 = pbStack_158 + 1;
                    } while (uVar24 != 0);
                    iVar9 = *(int *)((long)plVar14 + 0x14);
                    pbStack_158 = *(byte **)(lStack_138 + 0x250);
                  }
                  *(int *)(lStack_138 + 600) = iVar9;
                  uStack_150 = 0;
                  lStack_160 = lVar12;
                  uStack_150 = func_0x03f0b2d0();
                  func_0x03fa2b40(param_1 + 0x4b8,&lStack_160,&lStack_138);
                }
                else if (iVar9 == 0x111) {
                  *(int *)(lStack_138 + 0x268) = (int)plVar14[4];
                }
              }
              else if (iVar9 == 0x117) {
                *(int *)(lStack_138 + 0x26c) = (int)plVar14[4];
              }
              else if ((iVar9 == 0x211) && ((int)plVar14[1] == 2)) {
                *(undefined4 *)(lStack_138 + 0x278) = *(undefined4 *)plVar14[4];
                *(undefined4 *)(lStack_138 + 0x274) = *(undefined4 *)(plVar14[4] + 4);
                *(undefined4 *)(lStack_138 + 0x27c) = *(undefined4 *)(plVar14[4] + 8);
              }
            }
            else if (iVar9 < 0x885e) {
              if (iVar9 == 0x8827) {
                *(uint *)(lStack_138 + 0x270) = (uint)*(ushort *)(plVar14 + 4);
              }
              else if (iVar9 == 0x885c) {
                *(int *)(lStack_138 + 0x25c) = (int)plVar14[4];
              }
            }
            else if (iVar9 == 0x885e) {
              *(int *)(lStack_138 + 0x260) = (int)plVar14[4];
            }
            else if (iVar9 == 0xa432) {
              if ((int)plVar14[1] == 2) {
                *(undefined4 *)(lStack_138 + 0x280) = *(undefined4 *)plVar14[4];
                *(undefined4 *)(lStack_138 + 0x284) = *(undefined4 *)(plVar14[4] + 4);
                *(undefined4 *)(lStack_138 + 0x288) = *(undefined4 *)(plVar14[4] + 8);
              }
            }
            else if ((iVar9 == 0xc62f) && (*(long *)(param_1 + 0x28) == 0)) {
              *(ulong *)(param_1 + 0x28) =
                   *(long *)(*(long *)(lStack_138 + 0x210) + 8) + (ulong)*(uint *)(plVar14 + 2);
            }
            lVar13 = func_0x03fa2b50(lStack_140,&plStack_148);
            if (lVar13 == 0) {
              plStack_148 = (long *)0x0;
            }
          } while (plStack_148 != (long *)**(undefined8 **)(lStack_138 + 0x238));
        }
        goto code_r0x039de63c;
      }
      plVar14 = *(long **)(lStack_138 + 0x210);
      if (plVar14 == (long *)0x0) goto code_r0x039de7f4;
      if ((plVar14[1] != 0) && (*plVar14 != 0)) {
        func_0x03f0cbe0();
      }
      func_0x03f0b310(plVar14);
      uVar11 = 0x80000000;
      *(undefined8 *)(lStack_138 + 0x210) = 0;
    }
    else {
code_r0x039de7f4:
      uVar11 = 0x80000000;
    }
  }
  else {
code_r0x039de63c:
    uVar11 = 0;
  }
  if (*(long *)(lVar8 + 0x28) == lStack_70) {
    return;
  }
  auVar31 = func_0x03f0b330(uVar11);
  lVar12 = auVar31._8_8_;
  lVar18 = auVar31._0_8_;
  lVar8 = tpidr_el0;
  lStack_1d8 = *(long *)(lVar8 + 0x28);
  if ((lVar12 != 0) && (*(long *)(lVar12 + 8) != 0)) {
    *(undefined8 *)(lVar18 + 0x48) = 0;
    *(undefined8 *)(lVar18 + 0x50) = 0;
    plVar14 = (long *)(lVar18 + 0x457);
    puVar28 = *(uint **)(lVar12 + 8);
    plVar22 = *(long **)(lVar18 + 0x28);
    uVar5 = *puVar28;
    *(undefined8 *)(lVar18 + 0x48e) = 0;
    *(undefined8 *)(lVar18 + 0x486) = 0;
    *(undefined8 *)(lVar18 + 0x46f) = 0;
    *(undefined8 *)(lVar18 + 0x467) = 0;
    *(undefined8 *)(lVar18 + 0x47f) = 0;
    *(undefined8 *)(lVar18 + 0x477) = 0;
    *(undefined8 *)(lVar18 + 0x45f) = 0;
    *plVar14 = 0;
    uVar30 = *(undefined8 *)(puVar28 + 7);
    uVar11 = *(undefined8 *)(puVar28 + 5);
    lVar12 = *(long *)(puVar28 + 1);
    uVar10 = puVar28[9];
    *(undefined8 *)(lVar18 + 0x45f) = *(undefined8 *)(puVar28 + 3);
    *plVar14 = lVar12;
    *(undefined8 *)(lVar18 + 0x46f) = uVar30;
    *(undefined8 *)(lVar18 + 0x467) = uVar11;
    *(uint *)(lVar18 + 0x477) = uVar10;
    if ((((*plVar14 == *plVar22 && *(long *)(lVar18 + 0x45f) == plVar22[1]) &&
         *(long *)(lVar18 + 0x467) == plVar22[2]) && *(long *)(lVar18 + 0x46f) == plVar22[3]) &&
        uVar10 == *(uint *)(plVar22 + 4)) {
      uVar10 = puVar28[10];
      uVar3 = puVar28[0xb];
      uVar29 = puVar28[0xc];
      uStack_1e0 = 0;
      iVar9 = func_0x03f24990(&uStack_1e0,plVar14,0x20,0x40000000);
      if (-1 < iVar9) {
        puVar15 = (uint *)func_0x03f0cba0((ulong)(uVar10 + 1) + 7 & 0x1fffffff8);
        if (puVar15 == (uint *)0x0) {
          iVar9 = func_0x03f2c5f0(uStack_1e0,puVar28 + 0xd,0,uVar10);
          if (-1 < iVar9) goto code_r0x039debf0;
        }
        else {
          func_0x03f0c950(puVar15,0,(ulong)(uVar10 + 1));
          iVar9 = func_0x03f2c5f0(uStack_1e0,puVar28 + 0xd,puVar15,uVar10);
          if (-1 < iVar9) {
code_r0x039debf0:
            func_0x03f256e0(&uStack_1e0);
            uVar10 = func_0x03fa2630(0,puVar15,uVar10);
            if (uVar3 == uVar10) {
              plVar20 = *(long **)(lVar18 + 0x498);
              puVar16 = (undefined8 *)(lVar18 + 0x498);
              plVar25 = *(long **)(lVar18 + 0x4a0);
              plVar23 = (long *)*plVar20;
              plVar22 = (long *)(lVar18 + 0x4a0);
              if ((puVar16 != (undefined8 *)plVar20[1]) || (plVar25 != plVar23)) {
                do {
                  if ((long *)plVar25[1] != (long *)0x0) {
                    (**(code **)(*(long *)plVar25[1] + 8))();
                    plVar20 = (long *)*puVar16;
                    plVar23 = (long *)*plVar20;
                  }
                  plVar25 = (long *)plVar25[2];
                } while ((puVar16 != (undefined8 *)plVar20[1]) || (plVar25 != plVar23));
                plVar25 = (long *)*plVar22;
              }
              while (plVar25 != (long *)0x0) {
                plVar23 = (long *)plVar25[2];
                (**(code **)(*plVar25 + 8))(plVar25);
                plVar25 = plVar23;
              }
              *plVar22 = 0;
              *(undefined8 *)(lVar18 + 0x4a8) = 0;
              *(undefined4 *)(lVar18 + 0x4b0) = 0;
              func_0x03fa2a80(lVar18 + 0x4b8);
              *(undefined8 *)(lVar18 + 0x28) = 0;
              func_0x03f2c2c0(lVar18 + 0x10);
              if (uVar29 != 0) {
                plVar23 = (long *)(lVar18 + 0x4a8);
                lVar12 = lRam00000000041b6208 + 0x10;
                lVar13 = lRam00000000041b6210 + 0x10;
                lVar1 = lRam000000000419a188 + 0x10;
                puVar28 = puVar15;
                do {
                  plVar25 = (long *)func_0x03f0b2e0(0x290);
                  plVar25[0x44] = 0;
                  plVar25[0x46] = 0;
                  *plVar25 = lVar12;
                  plVar25[0x45] = 0;
                  puVar16 = (undefined8 *)func_0x03f0b2e0(0x10);
                  *puVar16 = 0;
                  puVar16[1] = plVar25 + 0x43;
                  plVar25[0x47] = (long)puVar16;
                  *(undefined4 *)(plVar25 + 0x4e) = 0;
                  plVar20 = plVar25 + 1;
                  plVar25[2] = 0;
                  *plVar20 = 0;
                  plVar25[0x3e] = 0;
                  plVar25[0x3d] = 0;
                  *(undefined8 *)((long)plVar25 + 0x1ff) = 0;
                  *(undefined8 *)((long)plVar25 + 0x1f7) = 0;
                  *(undefined8 *)((long)plVar25 + 0x284) = 0;
                  *(undefined8 *)((long)plVar25 + 0x27c) = 0;
                  *(undefined8 *)((long)plVar25 + 0x274) = 0;
                  uVar10 = *puVar28;
                  plVar25[0x49] = 0;
                  plVar25[0x48] = 0;
                  plVar25[0x4b] = 0;
                  plVar25[0x4a] = 0;
                  plVar25[0x4d] = 0;
                  plVar25[0x4c] = 0;
                  plVar25[0x41] = 0xffffffff;
                  plVar25[0x42] = 0;
                  plVar25[4] = 0;
                  plVar25[3] = 0;
                  plVar25[6] = 0;
                  plVar25[5] = 0;
                  plVar25[8] = 0;
                  plVar25[7] = 0;
                  plVar25[10] = 0;
                  plVar25[9] = 0;
                  plVar25[0xc] = 0;
                  plVar25[0xb] = 0;
                  plVar25[0xe] = 0;
                  plVar25[0xd] = 0;
                  plVar25[0x10] = 0;
                  plVar25[0xf] = 0;
                  plVar25[0x12] = 0;
                  plVar25[0x11] = 0;
                  plVar25[0x14] = 0;
                  plVar25[0x13] = 0;
                  plVar25[0x16] = 0;
                  plVar25[0x15] = 0;
                  plVar25[0x18] = 0;
                  plVar25[0x17] = 0;
                  plVar25[0x1a] = 0;
                  plVar25[0x19] = 0;
                  plVar25[0x1c] = 0;
                  plVar25[0x1b] = 0;
                  plVar25[0x1e] = 0;
                  plVar25[0x1d] = 0;
                  plVar25[0x20] = 0;
                  plVar25[0x1f] = 0;
                  plVar25[0x22] = 0;
                  plVar25[0x21] = 0;
                  plVar25[0x24] = 0;
                  plVar25[0x23] = 0;
                  plVar25[0x26] = 0;
                  plVar25[0x25] = 0;
                  plVar25[0x28] = 0;
                  plVar25[0x27] = 0;
                  plVar25[0x2a] = 0;
                  plVar25[0x29] = 0;
                  plVar25[0x2c] = 0;
                  plVar25[0x2b] = 0;
                  plVar25[0x2e] = 0;
                  plVar25[0x2d] = 0;
                  plVar25[0x30] = 0;
                  plVar25[0x2f] = 0;
                  plVar25[0x32] = 0;
                  plVar25[0x31] = 0;
                  plVar25[0x34] = 0;
                  plVar25[0x33] = 0;
                  plVar25[0x36] = 0;
                  plVar25[0x35] = 0;
                  plVar25[0x38] = 0;
                  plVar25[0x37] = 0;
                  plVar25[0x3a] = 0;
                  plVar25[0x39] = 0;
                  plVar25[0x3c] = 0;
                  plVar25[0x3b] = 0;
                  plStack_1e8 = plVar25;
                  if ((char)uVar10 != -0x34) {
code_r0x039def0c:
                    func_0x03fa2aa0(lVar18);
                    if (plStack_1e8 != (long *)0x0) {
                      (**(code **)(*plStack_1e8 + 8))();
                    }
                    goto code_r0x039def28;
                  }
                  uVar7 = *(undefined4 *)((long)puVar28 + 1);
                  *(undefined4 *)(plVar25 + 0x4b) = uVar7;
                  func_0x03f11c80(plVar20,(long)puVar28 + 5,uVar7,0x288);
                  puVar2 = (uint *)((long)puVar28 + 5 + (ulong)*(uint *)(plVar25 + 0x4b));
                  uVar3 = puVar2[3];
                  *(uint *)((long)plVar25 + 0x264) = puVar2[2];
                  uVar10 = puVar2[4];
                  uVar4 = puVar2[5];
                  *(uint *)(plVar25 + 0x4d) = uVar3;
                  uVar3 = puVar2[6];
                  *(uint *)(plVar25 + 0x4e) = uVar4;
                  uVar4 = puVar2[7];
                  *(uint *)((long)plVar25 + 0x26c) = uVar10;
                  uVar10 = *puVar2;
                  *(uint *)(plVar25 + 0x4f) = uVar3;
                  uVar3 = puVar2[1];
                  *(uint *)((long)plVar25 + 0x274) = uVar4;
                  uVar4 = puVar2[8];
                  *(uint *)((long)plVar25 + 0x25c) = uVar10;
                  *(uint *)(plVar25 + 0x4c) = uVar3;
                  *(uint *)((long)plVar25 + 0x27c) = uVar4;
                  if (uVar5 < 2) {
                    puVar28 = puVar2 + 9;
                  }
                  else {
                    uVar4 = puVar2[10];
                    uVar6 = puVar2[0xb];
                    puVar28 = puVar2 + 0xc;
                    *(uint *)(plVar25 + 0x50) = puVar2[9];
                    *(uint *)((long)plVar25 + 0x284) = uVar4;
                    *(uint *)(plVar25 + 0x51) = uVar6;
                  }
                  plVar25[0x4a] = (long)plVar20;
                  if ((((*(uint *)(plVar25 + 0x4b) == 0) || ((char)plVar25[1] == '\0')) ||
                      (uVar10 == 0)) || ((uVar10 & 0x20000000) == 0 && uVar3 == 0))
                  goto code_r0x039def0c;
                  plVar17 = (long *)func_0x03f0b2e0(0x20);
                  plVar17[2] = 0;
                  plVar17[3] = 0;
                  lVar21 = *plVar22;
                  *plVar17 = lVar13;
                  plVar17[1] = (long)plVar25;
                  if (lVar21 == 0) {
                    *plVar23 = (long)plVar17;
                    plVar25 = plVar22;
                  }
                  else {
                    lVar21 = *plVar23;
                    *(long **)(lVar21 + 0x10) = plVar17;
                    plVar17[3] = lVar21;
                    plVar25 = plVar23;
                  }
                  iVar9 = *(int *)(lVar18 + 0x4b0);
                  *plVar25 = (long)plVar17;
                  uStack_1f0 = 0;
                  *(int *)(lVar18 + 0x4b0) = iVar9 + 1;
                  lStack_200 = lVar1;
                  plStack_1f8 = plVar20;
                  uStack_1f0 = func_0x03f2cbd0(plVar20,0x288);
                  func_0x03fa2b40(lVar18 + 0x4b8,&lStack_200,&plStack_1e8);
                  uVar29 = uVar29 - 1;
                } while (uVar29 != 0);
              }
              *(long **)(lVar18 + 0x28) = plVar14;
              if (puVar15 != (uint *)0x0) {
                func_0x03f0cbe0(puVar15);
              }
              uVar11 = 0;
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
  uVar11 = 0x80000000;
code_r0x039deb3c:
  if (*(long *)(lVar8 + 0x28) != lStack_1d8) {
    func_0x03f0b330(uVar11);
    return;
  }
  return;
}


