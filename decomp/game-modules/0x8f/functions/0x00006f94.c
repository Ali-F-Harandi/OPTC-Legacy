
void FUN_00006f94(long param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong local_18;
  char local_9;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  local_18 = param_3;
  if (param_1 == 0) {
    cVar1 = '\0';
    goto LAB_00007094;
  }
  iVar2 = FUN_00009c78(param_2,0);
  if (iVar2 < 0) {
    uVar4 = FUN_00007c70();
    cVar1 = FUN_00009700(0,0,uVar4,2,0x15b,1,2,-iVar2,0,0);
    if (cVar1 != '\0') goto LAB_00006fe4;
    cVar1 = '\0';
  }
  else {
LAB_00006fe4:
LAB_00006ff0:
    uVar7 = 0x80000;
    if (0x7ffff < local_18) {
      do {
        uVar7 = uVar7 + 0x80000;
      } while (uVar7 <= local_18);
    }
    lVar5 = FUN_00006d94(uVar7);
    if (lVar5 == 0) {
      uVar3 = FUN_00007c70();
      piVar6 = (int *)thunk_FUN_00001400();
      uVar4 = 5;
      if (*piVar6 != 0xc) {
        uVar4 = 1;
      }
      cVar1 = FUN_00009700(0,0,uVar3,2,0x17b,uVar4,3,uVar7 & 0xffffffff,0,0);
      local_9 = '\0';
      if (cVar1 != '\0') goto LAB_00007020;
LAB_00007124:
      cVar1 = '\0';
      goto LAB_00007070;
    }
LAB_00007020:
    local_9 = '\0';
    cVar1 = FUN_00006e38(iVar2,lVar5,&local_18,uVar7,&local_9);
    if (cVar1 == '\0') {
      if (lVar5 == 0) goto LAB_00007124;
      FUN_00006df0(lVar5,uVar7);
      goto LAB_00007070;
    }
    if (local_9 != '\0') {
      if (lVar5 != 0) {
        FUN_00006df0(lVar5,uVar7);
      }
      goto LAB_00006ff0;
    }
    *(long *)(param_1 + 8) = lVar5;
    *(ulong *)(param_1 + 0x10) = local_18;
    *(ulong *)(param_1 + 0x18) = uVar7;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
LAB_00007070:
  if (-1 < iVar2) {
    FUN_00009be8(0x39,(long)iVar2,0,0,0,0,0);
  }
LAB_00007094:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar1);
  }
  return;
}
