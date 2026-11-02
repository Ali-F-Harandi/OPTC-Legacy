
void FUN_00003130(undefined8 param_1,long *param_2,undefined8 param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  undefined1 local_418;
  undefined1 local_417;
  undefined1 local_408 [1024];
  long local_8;
  
  iVar7 = *(int *)((long)param_2 + 0x14);
  iVar2 = (int)param_2[2];
  local_8 = *(long *)PTR_DAT_00029e38;
  local_417 = 0;
  local_418 = 0x2f;
  lVar9 = *param_2;
  lVar6 = param_2[3];
  iVar8 = iVar7;
  if (iVar7 < iVar2) {
    do {
      lVar1 = lVar9 + lVar6;
      iVar7 = iVar7 + 1;
      lVar4 = FUN_00010ad4(lVar1);
      local_408[0] = 0;
      lVar6 = lVar6 + lVar4 + 1;
      FUN_00010fe0(local_408,lVar1);
      FUN_00010fe0(local_408,&local_418);
      FUN_00010fe0(local_408,param_1);
      cVar3 = FUN_0000edd8(local_408,0);
      if (cVar3 != '\0') {
        FUN_00010f38(param_3,local_408);
        uVar5 = 1;
        iVar8 = iVar7;
        goto LAB_00003220;
      }
      iVar8 = iVar2;
    } while (iVar7 != iVar2);
  }
  uVar5 = 0;
LAB_00003220:
  *(int *)((long)param_2 + 0x14) = iVar8;
  param_2[3] = lVar6;
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar5;
  }
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(1);
  }
  return;
}
