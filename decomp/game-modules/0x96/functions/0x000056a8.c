
char FUN_000056a8(long param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  DAT_0002a610 = 0;
  uVar7 = *(ulong *)(param_1 + 0xb0);
  DAT_0002a618 = 0;
  uVar15 = (uint)uVar7;
  if (uVar7 == 0) {
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x90);
    if (0 < (int)uVar9) {
      lVar8 = *(long *)(param_1 + 0x88) + 8;
      uVar7 = 0;
      uVar13 = 0;
      do {
        while( true ) {
          uVar15 = (uint)uVar7;
          uVar5 = (ulong)*(uint *)(lVar8 + 4);
          lVar8 = lVar8 + 0x18;
          if (uVar5 == 0) break;
          iVar12 = (int)*(undefined8 *)(param_1 + 0xb0);
          if (iVar12 != 0) {
            cVar2 = FUN_00003e74();
            uVar14 = (ulong)(iVar12 - 1);
            if (cVar2 != '\0') {
              uVar10 = *(int *)PTR_DAT_00029f50 * *(int *)PTR_DAT_00029f50;
              uVar4 = (ulong)((uVar10 >> (ulong)(uVar13 & 0x1b)) + 0x1bc5 |
                             (uVar10 << (ulong)(uVar13 & 3)) + 0x2048);
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar4 / uVar14;
              }
              uVar6 = ((uVar14 - 1) + uVar5) - (uVar4 - uVar6 * uVar14);
              uVar5 = uVar6 - uVar14;
              if (uVar6 < uVar14) {
                uVar5 = uVar6;
              }
              uVar5 = uVar5 + 1;
            }
          }
          uVar13 = uVar13 + 1;
          if (uVar7 < uVar5) {
            uVar15 = (uint)uVar5;
          }
          uVar7 = (ulong)uVar15;
          if (uVar13 == uVar9) goto LAB_0000580c;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar9);
    }
LAB_0000580c:
    uVar7 = 0;
    uVar9 = 0;
    uVar13 = (uint)*(undefined8 *)(param_1 + 0xa0);
    if (0 < (int)uVar13) {
      lVar8 = *(long *)(param_1 + 0x98) + 8;
      uVar10 = 0;
      do {
        while( true ) {
          uVar9 = (uint)uVar7;
          uVar5 = (ulong)*(uint *)(lVar8 + 4);
          lVar8 = lVar8 + 0x18;
          if (uVar5 == 0) break;
          iVar12 = (int)*(undefined8 *)(param_1 + 0xb0);
          if (iVar12 != 0) {
            cVar2 = FUN_00003e74();
            uVar14 = (ulong)(iVar12 - 1);
            if (cVar2 != '\0') {
              uVar1 = *(int *)PTR_DAT_00029f50 * *(int *)PTR_DAT_00029f50;
              uVar4 = (ulong)((uVar1 >> (ulong)(uVar10 & 0x1b)) + 0x1bc5 |
                             (uVar1 << (ulong)(uVar10 & 3)) + 0x2048);
              uVar6 = 0;
              if (uVar14 != 0) {
                uVar6 = uVar4 / uVar14;
              }
              uVar6 = ((uVar14 - 1) + uVar5) - (uVar4 - uVar6 * uVar14);
              uVar5 = uVar6 - uVar14;
              if (uVar6 < uVar14) {
                uVar5 = uVar6;
              }
              uVar5 = uVar5 + 1;
            }
          }
          uVar10 = uVar10 + 1;
          if (uVar7 < uVar5) {
            uVar9 = (uint)uVar5;
          }
          uVar7 = (ulong)uVar9;
          if (uVar10 == uVar13) goto LAB_00005868;
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar13);
    }
LAB_00005868:
    if (uVar9 < uVar15) {
      uVar9 = uVar15;
    }
    uVar7 = (ulong)uVar9;
    if (uVar9 == 0) goto LAB_000056e4;
LAB_00005874:
    lVar8 = FUN_0000ef9c((uVar7 & 0xffffffff) << 3);
    if (lVar8 != 0) {
LAB_00005888:
      lVar11 = FUN_0000ef9c((uVar7 & 0xffffffff) << 2);
      if (lVar11 == 0) {
        uVar3 = FUN_000029ec();
        cVar2 = FUN_00012354(0,0,uVar3,0x18,0x1fd,1,5,uVar7 & 0xffffffff,0,0);
        if (cVar2 == '\0') {
          lVar11 = 0;
          goto LAB_000057a8;
        }
      }
      goto LAB_000056ec;
    }
    uVar3 = FUN_000029ec();
    cVar2 = FUN_00012354(0,0,uVar3,0x18,0x1f6,1,4,uVar7 & 0xffffffff,0,0);
    if (cVar2 != '\0') goto LAB_00005888;
    lVar11 = 0;
  }
  else {
    if (uVar15 != 0) goto LAB_00005874;
LAB_000056e4:
    lVar11 = 0;
    lVar8 = 0;
LAB_000056ec:
    cVar2 = FUN_000053a4(1,param_1,lVar8,lVar11,uVar7 & 0xffffffff);
    if (cVar2 != '\0') {
      cVar2 = FUN_000053a4(0,param_1,lVar8,lVar11,uVar7 & 0xffffffff);
      if (cVar2 != '\0') {
        DAT_0002a618 = (undefined4)uVar7;
        DAT_0002a610 = lVar8;
      }
      goto LAB_00005738;
    }
  }
LAB_000057a8:
  cVar2 = '\0';
LAB_00005738:
  if (lVar11 != 0) {
    FUN_0000eff8(lVar11,uVar7 & 0xffffffff);
  }
  return cVar2;
}
