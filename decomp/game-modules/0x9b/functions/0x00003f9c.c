
void FUN_00003f9c(char param_1,int *param_2,undefined8 param_3,long param_4,ulong param_5,
                 long param_6)

{
  int *piVar1;
  ulong *puVar2;
  long *plVar3;
  ushort uVar4;
  int iVar5;
  char cVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  int *piVar10;
  long *plVar11;
  ulong *puVar12;
  ulong *puVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  int local_44;
  long local_40;
  undefined8 local_38;
  undefined1 auStack_30 [40];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  uVar4 = *(ushort *)(param_4 + 0x38);
  piVar1 = (int *)(param_4 + *(long *)(param_4 + 0x20));
  iVar17 = (int)param_5;
  iVar5 = (int)param_6;
  uVar7 = param_5;
  if (uVar4 == 0) {
LAB_00004038:
    puVar12 = (ulong *)0x0;
    iVar14 = 0;
    puVar13 = (ulong *)0x0;
    iVar9 = 0;
    goto LAB_00004048;
  }
  piVar10 = piVar1;
  if (*(int *)(param_4 + *(long *)(param_4 + 0x20)) != 2) {
    do {
      piVar10 = piVar10 + 0xe;
      if (piVar10 == piVar1 + ((ulong)(uVar4 - 1) + 1) * 0xe) goto LAB_00004038;
    } while (*piVar10 != 2);
  }
  lVar8 = *(long *)(piVar10 + 4);
  if (param_1 == '\0') {
    iVar9 = (int)(*(ulong *)(piVar10 + 8) >> 4);
    if (0 < iVar9) goto LAB_00004284;
    param_4 = param_4 + param_5;
    cVar6 = FUN_00004450(auStack_30,param_4,param_6,1);
    if (cVar6 == '\0') goto LAB_000041e8;
  }
  else {
    iVar9 = (int)(*(ulong *)(piVar10 + 8) >> 4);
    lVar8 = *(long *)(piVar10 + 2);
    if (iVar9 < 1) {
      puVar12 = (ulong *)0x0;
      iVar9 = 0;
      iVar14 = 0;
      puVar13 = puVar12;
LAB_00004050:
      uVar7 = FUN_00003f30(piVar1,uVar4,param_5);
    }
    else {
LAB_00004284:
      plVar11 = (long *)(param_4 + lVar8);
      lVar8 = *plVar11;
      if (lVar8 == 0) {
        iVar14 = 0;
        puVar12 = (ulong *)0x0;
        puVar13 = (ulong *)0x0;
        iVar9 = iVar14;
LAB_00004048:
        if (param_1 != '\0') goto LAB_00004050;
      }
      else {
        if (param_1 != '\0') {
          puVar12 = (ulong *)0x0;
          uVar16 = 0;
          plVar3 = plVar11 + (ulong)(iVar9 - 1) * 2;
          uVar15 = 0;
          puVar13 = (ulong *)0x0;
          do {
            if (lVar8 == 7) {
              lVar8 = FUN_00003f30(piVar1,uVar4,plVar11[1]);
              puVar13 = (ulong *)(param_4 + lVar8);
            }
            else if (lVar8 == 8) {
              uVar15 = (ulong)plVar11[1] / 0x18;
            }
            else if (lVar8 == 0x17) {
              lVar8 = FUN_00003f30(piVar1,uVar4,plVar11[1]);
              puVar12 = (ulong *)(param_4 + lVar8);
            }
            else if (lVar8 == 2) {
              uVar16 = (ulong)plVar11[1] / 0x18;
            }
            iVar14 = (int)uVar15;
            iVar9 = (int)uVar16;
            if (plVar11 == plVar3) break;
            plVar11 = plVar11 + 2;
            lVar8 = *plVar11;
          } while (lVar8 != 0);
          goto LAB_00004048;
        }
        puVar12 = (ulong *)0x0;
        uVar15 = 0;
        uVar16 = 0;
        plVar3 = plVar11 + (ulong)(iVar9 - 1) * 2;
        puVar13 = (ulong *)0x0;
        do {
          if (lVar8 == 7) {
            puVar13 = (ulong *)(param_4 + plVar11[1]);
          }
          else if (lVar8 == 8) {
            uVar15 = (ulong)plVar11[1] / 0x18;
          }
          else if (lVar8 == 0x17) {
            puVar12 = (ulong *)(param_4 + plVar11[1]);
          }
          else if (lVar8 == 2) {
            uVar16 = (ulong)plVar11[1] / 0x18;
          }
          iVar9 = (int)uVar16;
          iVar14 = (int)uVar15;
          if (plVar11 == plVar3) break;
          plVar11 = plVar11 + 2;
          lVar8 = *plVar11;
        } while (lVar8 != 0);
      }
    }
    param_4 = param_4 + uVar7;
    cVar6 = FUN_00004450(auStack_30,param_4,param_6,1);
    if (cVar6 == '\0') {
LAB_000041e8:
      cVar6 = '\0';
      iVar9 = iVar17 + iVar5;
      goto LAB_000041f4;
    }
    if (0 < iVar14) {
      puVar2 = puVar13 + ((ulong)(iVar14 - 1) + 1) * 3;
      do {
        uVar7 = *puVar13;
        if (((uVar7 != 0) && (uVar7 < param_5 + param_6)) && (param_5 <= uVar7)) {
          cVar6 = FUN_000045a0(auStack_30,uVar7 - param_5,8,0);
        }
        puVar13 = puVar13 + 3;
      } while (puVar13 != puVar2);
      if (cVar6 == '\0') goto LAB_000041e8;
    }
    if (0 < iVar9) {
      cVar6 = '\x01';
      puVar13 = puVar12 + ((ulong)(iVar9 - 1) + 1) * 3;
      do {
        uVar7 = *puVar12;
        if (((uVar7 != 0) && (uVar7 < param_5 + param_6)) && (param_5 <= uVar7)) {
          cVar6 = FUN_000045a0(auStack_30,uVar7 - param_5,8,0);
        }
        puVar12 = puVar12 + 3;
      } while (puVar12 != puVar13);
      iVar9 = iVar17 + iVar5;
      if (cVar6 == '\0') goto LAB_000041f4;
    }
  }
  iVar9 = iVar17 + iVar5;
  while( true ) {
    local_40 = 0;
    local_38 = 0;
    cVar6 = FUN_00004728(auStack_30,&local_40,&local_38,1);
    if (cVar6 == '\0') break;
    local_44 = 0;
    cVar6 = FUN_00004920(param_4 + local_40,local_38,&local_44);
    if (cVar6 == '\0') goto LAB_000041f4;
    iVar9 = iVar9 + local_44 + (int)local_38;
  }
  cVar6 = '\x01';
LAB_000041f4:
  FUN_0000451c(auStack_30);
  if (param_2 != (int *)0x0) {
    *param_2 = iVar9;
  }
  if (local_8 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(cVar6);
  }
  return;
}
