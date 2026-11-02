// M3b: KEY_EXPANSION_FULL @ 0x39d3a30 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8
yLayer30deleteShipModifyRecoveryBackupEv
          (long *param_1,long param_2,uint param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  byte bVar19;
  uint uVar20;
  long lVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  
  uVar30 = (ulong)param_3;
  lVar9 = kill(1,0x28);
  if (lVar9 == 0) {
    uVar12 = 0x80000001;
  }
  else {
    *(undefined4 *)(lVar9 + 8) = 0x80000000;
    uVar20 = param_4 * 0x10 + 0x10;
    puVar10 = (undefined8 *)glActiveTexture((ulong)uVar20 + 0x28);
    uVar26 = param_3 >> 2;
    uVar18 = (ulong)uVar26;
    puVar11 = puVar10 + 5;
    puVar10[4] = puVar11;
    puVar10[1] = 0;
    *puVar10 = 0;
    puVar10[3] = 0;
    puVar10[2] = 0;
    *(int *)((long)puVar10 + 0x14) = param_4;
    *(uint *)(puVar10 + 3) = uVar20;
    *(uint *)(puVar10 + 2) = uVar26;
    strtoull(puVar11,param_2,uVar30);
    uVar20 = param_4 * 4 + 4;
    if (uVar26 < uVar20) {
      uVar27 = 1;
      do {
        uVar25 = 0;
        uVar24 = (uint)uVar18;
        if (uVar26 != 0) {
          uVar25 = uVar24 / uVar26;
        }
        uVar29 = *(uint *)((long)puVar11 + (ulong)(uVar24 - 1) * 4);
        if (uVar24 == uVar25 * uVar26) {
          uVar29 = CONCAT13(*(undefined1 *)
                             ((ulong)*(byte *)(((ulong)(uVar29 >> 0x10) & 0xff) + 0x14f7475) +
                             0x14f7375),
                            CONCAT12(*(undefined1 *)
                                      ((ulong)*(byte *)(((ulong)(uVar29 >> 8) & 0xff) + 0x14f7475) +
                                      0x14f7375),
                                     CONCAT11(*(undefined1 *)
                                               ((ulong)*(byte *)(((ulong)uVar29 & 0xff) + 0x14f7475)
                                               + 0x14f7375),
                                              *(undefined1 *)
                                               ((ulong)*(byte *)((ulong)(uVar29 >> 0x18) + 0x14f7475
                                                                ) + 0x14f7375)))) ^ (uint)uVar27;
          if (uVar27 != 0) {
            uVar25 = (uint)*(byte *)((ulong)*(byte *)(uVar27 + 0x14f7675) + 0x14f7375);
            iVar22 = 0x19;
            if (0xe5 < uVar25) {
              iVar22 = -0xe6;
            }
            uVar27 = (ulong)*(byte *)((ulong)*(byte *)((ulong)(iVar22 + uVar25) + 0x14f7575) +
                                     0x14f7375);
          }
        }
        else if ((0x1b < param_3) && (uVar24 - uVar25 * uVar26 == 4)) {
          uVar29 = CONCAT13(*(undefined1 *)
                             ((ulong)*(byte *)((ulong)(uVar29 >> 0x18) + 0x14f7475) + 0x14f7375),
                            CONCAT12(*(undefined1 *)
                                      ((ulong)*(byte *)(((ulong)(uVar29 >> 0x10) & 0xff) + 0x14f7475
                                                       ) + 0x14f7375),
                                     CONCAT11(*(undefined1 *)
                                               ((ulong)*(byte *)(((ulong)(uVar29 >> 8) & 0xff) +
                                                                0x14f7475) + 0x14f7375),
                                              *(undefined1 *)
                                               ((ulong)*(byte *)(((ulong)uVar29 & 0xff) + 0x14f7475)
                                               + 0x14f7375))));
        }
        *(uint *)((long)puVar11 + uVar18 * 4) =
             *(uint *)((long)puVar11 + (ulong)(uVar24 - uVar26) * 4) ^ uVar29;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar20);
    }
    *(undefined8 **)(lVar9 + 0x10) = puVar10;
    if ((param_5 >> 0x1e & 1) == 0) {
      uVar17 = 0xa0000000;
    }
    else {
      *(undefined4 *)(lVar9 + 8) = 0xc0000000;
      puVar11 = (undefined8 *)glActiveTexture(0x220);
      uVar33 = uRam00000000014f744d;
      uVar32 = uRam00000000014f7445;
      uVar31 = uRam00000000014f743d;
      uVar12 = uRam00000000014f7435;
      lVar21 = 0;
      bVar19 = 0;
      *(undefined8 **)(lVar9 + 0x18) = puVar11;
      puVar11[0x21] = puVar11 + 0x22;
      puVar11[0x19] = uVar31;
      puVar11[0x18] = uVar12;
      puVar11[0x1b] = uVar33;
      puVar11[0x1a] = uVar32;
      uVar33 = uRam00000000014f746d;
      uVar32 = uRam00000000014f7465;
      uVar31 = uRam00000000014f745d;
      uVar12 = uRam00000000014f7455;
      *(undefined2 *)(puVar11 + 0x20) = 0;
      puVar11[0x1d] = uVar31;
      puVar11[0x1c] = uVar12;
      puVar11[0x1f] = uVar33;
      puVar11[0x1e] = uVar32;
      uVar32 = uRam00000000014f740d;
      uVar31 = uRam00000000014f7405;
      uVar12 = uRam00000000014f73f5;
      puVar11[0x11] = uRam00000000014f73fd;
      puVar11[0x10] = uVar12;
      puVar11[0x13] = uVar32;
      puVar11[0x12] = uVar31;
      uVar32 = uRam00000000014f742d;
      uVar31 = uRam00000000014f7425;
      uVar12 = uRam00000000014f7415;
      puVar11[0x15] = uRam00000000014f741d;
      puVar11[0x14] = uVar12;
      puVar11[0x17] = uVar32;
      puVar11[0x16] = uVar31;
      uVar32 = uRam00000000014f73cd;
      uVar31 = uRam00000000014f73c5;
      uVar12 = uRam00000000014f73b5;
      puVar11[9] = uRam00000000014f73bd;
      puVar11[8] = uVar12;
      puVar11[0xb] = uVar32;
      puVar11[10] = uVar31;
      uVar32 = uRam00000000014f73ed;
      uVar31 = uRam00000000014f73e5;
      uVar12 = uRam00000000014f73d5;
      puVar11[0xd] = uRam00000000014f73dd;
      puVar11[0xc] = uVar12;
      puVar11[0xf] = uVar32;
      puVar11[0xe] = uVar31;
      uVar32 = uRam00000000014f738d;
      uVar31 = uRam00000000014f7385;
      uVar12 = uRam00000000014f7375;
      puVar11[1] = uRam00000000014f737d;
      *puVar11 = uVar12;
      puVar11[3] = uVar32;
      puVar11[2] = uVar31;
      uVar32 = uRam00000000014f73ad;
      uVar31 = uRam00000000014f73a5;
      uVar12 = uRam00000000014f7395;
      puVar11[5] = uRam00000000014f739d;
      puVar11[4] = uVar12;
      puVar11[7] = uVar32;
      puVar11[6] = uVar31;
      do {
        iVar22 = 0;
        if (param_3 != 0) {
          iVar22 = (int)lVar21 / (int)param_3;
        }
        cVar4 = *(char *)((long)puVar11 + lVar21);
        bVar19 = bVar19 + cVar4 + *(char *)(param_2 + (ulong)((int)lVar21 - iVar22 * param_3));
        *(undefined1 *)((long)puVar11 + lVar21) = *(undefined1 *)((long)puVar11 + (ulong)bVar19);
        lVar21 = lVar21 + 1;
        *(char *)((long)puVar11 + (ulong)bVar19) = cVar4;
      } while (lVar21 != 0x100);
      uVar32 = puVar11[4];
      uVar31 = puVar11[7];
      uVar12 = puVar11[6];
      uVar17 = 0xe0000000;
      uVar34 = puVar11[1];
      uVar33 = *puVar11;
      uVar36 = puVar11[3];
      uVar35 = puVar11[2];
      puVar10 = (undefined8 *)puVar11[0x21];
      puVar10[5] = puVar11[5];
      puVar10[4] = uVar32;
      puVar10[7] = uVar31;
      puVar10[6] = uVar12;
      puVar10[1] = uVar34;
      *puVar10 = uVar33;
      puVar10[3] = uVar36;
      puVar10[2] = uVar35;
      uVar32 = puVar11[0xc];
      uVar31 = puVar11[0xf];
      uVar12 = puVar11[0xe];
      uVar34 = puVar11[9];
      uVar33 = puVar11[8];
      uVar36 = puVar11[0xb];
      uVar35 = puVar11[10];
      puVar10[0xd] = puVar11[0xd];
      puVar10[0xc] = uVar32;
      puVar10[0xf] = uVar31;
      puVar10[0xe] = uVar12;
      puVar10[9] = uVar34;
      puVar10[8] = uVar33;
      puVar10[0xb] = uVar36;
      puVar10[10] = uVar35;
      uVar32 = puVar11[0x14];
      uVar31 = puVar11[0x17];
      uVar12 = puVar11[0x16];
      uVar34 = puVar11[0x11];
      uVar33 = puVar11[0x10];
      uVar36 = puVar11[0x13];
      uVar35 = puVar11[0x12];
      puVar10[0x15] = puVar11[0x15];
      puVar10[0x14] = uVar32;
      puVar10[0x17] = uVar31;
      puVar10[0x16] = uVar12;
      puVar10[0x11] = uVar34;
      puVar10[0x10] = uVar33;
      puVar10[0x13] = uVar36;
      puVar10[0x12] = uVar35;
      uVar36 = puVar11[0x1b];
      uVar35 = puVar11[0x1a];
      uVar32 = puVar11[0x1d];
      uVar31 = puVar11[0x1c];
      uVar12 = *(undefined8 *)((long)puVar11 + 0xef);
      uVar34 = puVar11[0x19];
      uVar33 = puVar11[0x18];
      *(undefined8 *)((long)puVar10 + 0xf7) = *(undefined8 *)((long)puVar11 + 0xf7);
      *(undefined8 *)((long)puVar10 + 0xef) = uVar12;
      puVar10[0x1b] = uVar36;
      puVar10[0x1a] = uVar35;
      puVar10[0x1d] = uVar32;
      puVar10[0x1c] = uVar31;
      puVar10[0x19] = uVar34;
      puVar10[0x18] = uVar33;
    }
    if ((param_5 >> 0x1d & 1) != 0) {
      *(undefined4 *)(lVar9 + 8) = uVar17;
      puVar10 = (undefined8 *)glActiveTexture(0x2090);
      uVar33 = uRam00000000014f78ad;
      uVar32 = uRam00000000014f78a5;
      uVar31 = uRam00000000014f789d;
      uVar12 = uRam00000000014f7895;
      puVar11 = puVar10 + 9;
      puVar10[8] = uRam00000000014f78b5;
      puVar10[5] = uVar31;
      puVar10[4] = uVar12;
      puVar10[7] = uVar33;
      puVar10[6] = uVar32;
      uVar32 = uRam00000000014f788d;
      uVar31 = uRam00000000014f7885;
      uVar12 = uRam00000000014f7875;
      puVar10[1] = uRam00000000014f787d;
      *puVar10 = uVar12;
      puVar10[3] = uVar32;
      puVar10[2] = uVar31;
      strtoull(puVar11,0x14f78bd,0x1000);
      uVar18 = 0;
      do {
        uVar27 = 0;
        if (uVar30 != 0) {
          uVar27 = uVar18 / uVar30;
        }
        uVar5 = 0;
        if (uVar30 != 0) {
          uVar5 = (uVar18 + 1) / uVar30;
        }
        uVar6 = 0;
        if (uVar30 != 0) {
          uVar6 = (uVar18 + 2) / uVar30;
        }
        uVar7 = 0;
        if (uVar30 != 0) {
          uVar7 = (uVar18 + 3) / uVar30;
        }
        *(uint *)((long)puVar10 + uVar18) =
             ((uint)*(byte *)(param_2 + (uVar18 - uVar27 * uVar30)) << 0x18 |
              (uint)*(byte *)(param_2 + ((uVar18 + 1) - uVar5 * uVar30)) << 0x10 |
              (uint)*(byte *)(param_2 + ((uVar18 + 2) - uVar6 * uVar30)) << 8 |
             (uint)*(byte *)(param_2 + ((uVar18 + 3) - uVar7 * uVar30))) ^
             *(uint *)((long)puVar10 + uVar18);
        uVar18 = uVar18 + 4;
      } while (uVar18 != 0x48);
      uVar30 = 0;
      uVar25 = 0;
      uVar24 = 0;
      uVar29 = 0;
      uVar20 = 0;
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar26 = 0;
      do {
        uVar23 = uVar25 << 0x18 | (uVar24 & 0xff) << 0x10 | (uVar29 & 0xff) << 8 | uVar20 & 0xff;
        lVar21 = 0;
        uVar20 = uVar15 << 0x18 | (uVar14 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 | uVar26 & 0xff;
        do {
          puVar1 = (uint *)((long)puVar10 + lVar21);
          lVar21 = lVar21 + 4;
          uVar26 = *puVar1 ^ uVar23;
          uVar23 = (*(int *)((long)puVar10 + (ulong)(uVar26 >> 0x10 & 0xff) * 4 + 0x448) +
                    *(int *)((long)puVar11 + (ulong)(uVar26 >> 0x18) * 4) ^
                   *(uint *)((long)puVar10 + (ulong)(uVar26 >> 8 & 0xff) * 4 + 0x848)) +
                   *(int *)((long)puVar10 + (ulong)(uVar26 & 0xff) * 4 + 0xc48) ^ uVar20;
          uVar20 = uVar26;
        } while (lVar21 != 0x3c);
        puVar1 = (uint *)((long)puVar10 + uVar30 * 4);
        bVar8 = uVar30 < 0x10;
        uVar30 = uVar30 + 2;
        uVar23 = *(uint *)((long)puVar10 + 0x3c) ^ uVar23;
        uVar20 = *(uint *)((long)puVar10 + 0x44) ^ uVar23;
        uVar25 = uVar20 >> 0x18;
        uVar24 = uVar20 >> 0x10;
        uVar29 = uVar20 >> 8;
        uVar26 = *(uint *)(puVar10 + 8) ^ uVar26 ^
                 (*(int *)((long)puVar10 + (ulong)(uVar23 >> 0x10 & 0xff) * 4 + 0x448) +
                  *(int *)((long)puVar11 + (ulong)(uVar23 >> 0x18) * 4) ^
                 *(uint *)((long)puVar10 + (ulong)(uVar23 >> 8 & 0xff) * 4 + 0x848)) +
                 *(int *)((long)puVar10 + (ulong)(uVar23 & 0xff) * 4 + 0xc48);
        uVar15 = uVar26 >> 0x18;
        uVar14 = uVar26 >> 0x10;
        uVar13 = uVar26 >> 8;
        *puVar1 = uVar20;
        puVar1[1] = uVar26;
      } while (bVar8);
      uVar23 = *(uint *)((long)puVar10 + 0x3c);
      uVar2 = *(uint *)(puVar10 + 8);
      uVar3 = *(uint *)((long)puVar10 + 0x44);
      lVar21 = 0;
      do {
        uVar30 = 0;
        do {
          uVar16 = uVar25 << 0x18 | (uVar24 & 0xff) << 0x10 | (uVar29 & 0xff) << 8 | uVar20 & 0xff;
          lVar28 = 0;
          uVar20 = uVar15 << 0x18 | (uVar14 & 0xff) << 0x10 | (uVar13 & 0xff) << 8 | uVar26 & 0xff;
          do {
            puVar1 = (uint *)((long)puVar10 + lVar28);
            lVar28 = lVar28 + 4;
            uVar26 = *puVar1 ^ uVar16;
            uVar16 = (*(int *)((long)puVar10 + (ulong)(uVar26 >> 0x10 & 0xff) * 4 + 0x448) +
                      *(int *)((long)puVar11 + (ulong)(uVar26 >> 0x18) * 4) ^
                     *(uint *)((long)puVar10 + (ulong)(uVar26 >> 8 & 0xff) * 4 + 0x848)) +
                     *(int *)((long)puVar10 + (ulong)(uVar26 & 0xff) * 4 + 0xc48) ^ uVar20;
            uVar20 = uVar26;
          } while (lVar28 != 0x3c);
          uVar16 = uVar16 ^ uVar23;
          uVar20 = uVar16 ^ uVar3;
          puVar1 = (uint *)((long)puVar11 + uVar30 * 4 + lVar21 * 0x400);
          uVar25 = uVar20 >> 0x18;
          bVar8 = uVar30 < 0xfe;
          uVar24 = uVar20 >> 0x10;
          uVar30 = uVar30 + 2;
          uVar29 = uVar20 >> 8;
          uVar26 = uVar2 ^ uVar26 ^
                   (*(int *)((long)puVar10 + (ulong)(uVar16 >> 0x10 & 0xff) * 4 + 0x448) +
                    *(int *)((long)puVar11 + (ulong)(uVar16 >> 0x18) * 4) ^
                   *(uint *)((long)puVar10 + (ulong)(uVar16 >> 8 & 0xff) * 4 + 0x848)) +
                   *(int *)((long)puVar10 + (ulong)(uVar16 & 0xff) * 4 + 0xc48);
          uVar15 = uVar26 >> 0x18;
          uVar14 = uVar26 >> 0x10;
          uVar13 = uVar26 >> 8;
          *puVar1 = uVar20;
          puVar1[1] = uVar26;
        } while (bVar8);
        lVar21 = lVar21 + 1;
      } while (lVar21 != 4);
      *(undefined8 **)(lVar9 + 0x20) = puVar10;
    }
    uVar12 = 0;
    *param_1 = lVar9;
  }
  return uVar12;
}
