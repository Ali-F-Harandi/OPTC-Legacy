
void FUN_000053a4(char param_1,long param_2,long param_3,long param_4,int param_5)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  uint local_18;
  undefined4 local_14;
  uint local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_1 == '\0') {
    lVar16 = *(long *)(param_2 + 0x98);
    uVar13 = *(uint *)(param_2 + 0xa0);
  }
  else {
    lVar16 = *(long *)(param_2 + 0x88);
    uVar13 = *(uint *)(param_2 + 0x90);
  }
  lVar7 = *(long *)(param_2 + 0xa8);
  if (0 < (int)uVar13) {
    iVar6 = 0;
    lVar11 = lVar16 + 8;
    uVar1 = 0;
    do {
      while (uVar10 = uVar1, uVar8 = (ulong)*(uint *)(lVar11 + 4), uVar8 == 0) {
        lVar11 = lVar11 + 0x18;
        uVar1 = uVar10 + 1;
        if (uVar10 + 1 == uVar13) goto LAB_00005454;
      }
      iVar14 = (int)*(undefined8 *)(param_2 + 0xb0);
      if ((iVar14 != 0) && (cVar2 = FUN_00003e74(), cVar2 != '\0')) {
        uVar15 = (ulong)(iVar14 - 1);
        uVar1 = *(int *)PTR_DAT_00029f50 * *(int *)PTR_DAT_00029f50;
        uVar5 = (ulong)((uVar1 >> (ulong)(uVar10 & 0x1b)) + 0x1bc5 |
                       (uVar1 << (ulong)(uVar10 & 3)) + 0x2048);
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar5 / uVar15;
        }
        uVar9 = ((uVar15 - 1) + uVar8) - (uVar5 - uVar9 * uVar15);
        uVar8 = uVar9 - uVar15;
        if (uVar9 < uVar15) {
          uVar8 = uVar9;
        }
        uVar8 = uVar8 + 1;
      }
      lVar11 = lVar11 + 0x18;
      if (*(long *)(lVar7 + uVar8 * 0x18 + 8) != 0) {
        iVar6 = iVar6 + 1;
      }
      uVar1 = uVar10 + 1;
    } while (uVar10 + 1 != uVar13);
LAB_00005454:
    if (0x63f < iVar6) {
      cVar2 = FUN_00004c50(param_2,param_3,param_4,lVar16,uVar10 + 1);
      goto LAB_00005478;
    }
  }
  FUN_000108e0(&local_38,0,0x30);
  local_14 = 0;
  local_38 = param_3;
  local_30 = param_4;
  local_28 = param_2;
  local_20 = lVar16;
  local_18 = uVar13;
  local_10 = uVar13;
  cVar2 = FUN_000051c4(&local_38);
LAB_00005478:
  if (cVar2 != '\0') {
    lVar16 = *(long *)(param_2 + 0xb8);
    puVar12 = *(uint **)(param_2 + 0xa8);
    if (param_5 != 0) {
      lVar7 = 0;
      do {
        uVar13 = *(uint *)(param_4 + lVar7 * 4);
        if ((uVar13 & 1) != 0) {
          uVar13 = uVar13 >> 1 & 1;
          local_38 = CONCAT71(local_38._1_7_,(char)uVar13);
          if (uVar13 == 0) {
            lVar11 = lVar16 + (ulong)*puVar12;
            uVar4 = FUN_0000610c(lVar11,&local_38);
            cVar3 = FUN_000035ec();
            if ((cVar3 == '\0') && (cVar3 = FUN_00008e00(2), cVar3 != '\0')) {
              if ((char)local_38 == '\0') {
                uVar4 = FUN_000064c4(lVar11,&local_38);
                if ((char)local_38 == '\0') {
                  uVar4 = FUN_00005f2c(lVar11,&local_38);
LAB_00005654:
                  if ((char)local_38 == '\0') {
                    uVar4 = FUN_00006590(lVar11,&local_38);
                    if ((char)local_38 == '\0') goto LAB_000054f0;
                  }
                }
              }
            }
            else if ((char)local_38 == '\0') {
              uVar4 = FUN_00005f2c(lVar11,&local_38);
              if ((char)local_38 == '\0') {
                uVar4 = FUN_000064c4(lVar11,&local_38);
                goto LAB_00005654;
              }
            }
            *(uint *)(param_4 + lVar7 * 4) = *(uint *)(param_4 + lVar7 * 4) | 2;
            *(undefined8 *)(param_3 + lVar7 * 8) = uVar4;
          }
        }
LAB_000054f0:
        lVar7 = lVar7 + 1;
        puVar12 = puVar12 + 6;
      } while (lVar7 != (ulong)(param_5 - 1) + 1);
    }
  }
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar2);
  }
  return;
}
