
void FUN_00003f40(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_2 == 0) {
    uVar8 = FUN_000029ec();
    cVar4 = FUN_00012354(0,0,uVar8,1,0xf9,1,2,0,0,0);
    if (cVar4 != '\0') goto LAB_00003f80;
LAB_000040e4:
    iVar6 = FUN_0000e600(0xf,0,0,0);
    if (-1 < iVar6) {
      thunk_FUN_000027d0(0x27);
    }
  }
  else {
LAB_00003f80:
    if ((param_3 >> 8 & 1) != 0) {
      FUN_00003e60(1);
    }
    cVar4 = FUN_00004608(param_1);
    if ((((cVar4 == '\0') ||
         (cVar4 = FUN_00004c1c(*(undefined8 *)(param_1 + 0x518),*(undefined4 *)(param_1 + 0x520)),
         cVar4 == '\0')) || (cVar4 = FUN_00005a38(param_2), cVar4 == '\0')) ||
       (cVar4 = FUN_00006e98(param_2), cVar4 == '\0')) goto LAB_000040e4;
    local_14 = 0x4454fc64;
    local_18 = 0x4cdcfc05;
    local_10 = 0x4c64f4;
    uVar9 = FUN_000117fc(&local_18,0xc);
    lVar10 = FUN_0000c27c(param_2,uVar9);
    FUN_00011844(uVar9);
    local_18 = 0xdccccc05;
    local_14 = 0xec5c;
    uVar9 = FUN_000117fc(&local_18,8);
    lVar11 = FUN_0000c27c(param_2,uVar9);
    FUN_00011844(uVar9);
    FUN_000108e0(lVar10,0,lVar11 - lVar10);
    iVar6 = FUN_0000e600(0xf,0,0,0);
    if ((-1 < iVar6) && (iVar6 = thunk_FUN_000027d0(0x27), iVar6 != -1)) {
      iVar3 = iVar6;
      if ((param_3 >> 3 & 1) == 0) goto LAB_000042ac;
joined_r0x00004094:
      if ((param_3 >> 1 & 1) == 0) {
        lVar10 = *(long *)(param_2 + 0x20);
        iVar6 = (int)*(undefined8 *)(param_2 + 0x38);
        piVar15 = *(int **)(param_2 + 0x30);
        if (0 < iVar6) {
          iVar14 = 1;
          do {
            if (*piVar15 == 1) {
              lVar16 = *(long *)(piVar15 + 4);
              lVar13 = *(long *)(piVar15 + 10);
              lVar11 = FUN_000117d4(lVar10 + lVar16,(long)iVar3,0);
              lVar13 = FUN_000117d4(lVar10 + lVar16 + lVar13,(long)iVar3,1);
              uVar2 = piVar15[1];
              uVar12 = 0;
              if ((uVar2 & 1) != 0) {
                uVar12 = 4;
              }
              uVar12 = uVar12 | uVar2 & 2;
              uVar1 = uVar12 | 1;
              if ((uVar2 & 4) == 0) {
                uVar1 = uVar12;
              }
              uVar12 = uVar1 | 2;
              if ((param_3 & 4) == 0) {
                uVar12 = uVar1;
              }
              if (uVar12 == 3) goto LAB_000041a0;
              iVar7 = FUN_000124d8(0xe2,lVar11,lVar13 - lVar11,uVar12,0,0,0);
              if (iVar7 == 0) goto LAB_000041a0;
              uVar8 = FUN_000029ec();
              cVar5 = FUN_00012354(0,0,uVar8,1,0x8b,1,1,lVar13 - lVar11 & 0xffffffff,0,0);
              if (iVar6 <= iVar14) {
                if (cVar5 != '\0') break;
                goto LAB_00004108;
              }
              if (cVar5 == '\0') goto LAB_00004108;
            }
            else {
LAB_000041a0:
              if (iVar6 <= iVar14) break;
            }
            piVar15 = piVar15 + 0xe;
            iVar14 = iVar14 + 1;
          } while( true );
        }
      }
      cVar5 = cVar4;
      if ((param_3 & 1) == 0) {
        cVar5 = FUN_000043a8(param_2);
      }
      goto LAB_00004108;
    }
    iVar6 = 0x1000;
    iVar3 = 0x1000;
    if ((param_3 >> 3 & 1) != 0) goto joined_r0x00004094;
LAB_000042ac:
    cVar5 = FUN_00004534(param_2,iVar6);
    iVar3 = iVar6;
    if (cVar5 != '\0') goto joined_r0x00004094;
  }
  cVar5 = '\0';
LAB_00004108:
  FUN_00004608(0);
  FUN_00004c1c(0,0);
  FUN_00005a38(0);
  FUN_00003e60(0);
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar5);
  }
  return;
}
