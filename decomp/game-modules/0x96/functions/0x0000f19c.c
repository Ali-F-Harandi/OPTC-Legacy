
void FUN_0000f19c(long param_1,undefined8 param_2,ulong param_3)

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
  
  local_8 = *(long *)PTR_DAT_00029e38;
  local_18 = param_3;
  if (param_1 == 0) {
    cVar1 = '\0';
    goto LAB_0000f29c;
  }
  iVar2 = FUN_00012568(param_2,0);
  if (iVar2 < 0) {
    uVar4 = FUN_00010530();
    cVar1 = FUN_00012354(0,0,uVar4,2,0x15b,1,2,-iVar2,0,0);
    if (cVar1 != '\0') goto LAB_0000f1ec;
    cVar1 = '\0';
  }
  else {
LAB_0000f1ec:
LAB_0000f1f8:
    uVar7 = 0x80000;
    if (0x7ffff < local_18) {
      do {
        uVar7 = uVar7 + 0x80000;
      } while (uVar7 <= local_18);
    }
    lVar5 = FUN_0000ef9c(uVar7);
    if (lVar5 == 0) {
      uVar3 = FUN_00010530();
      piVar6 = (int *)thunk_FUN_000027d0();
      uVar4 = 5;
      if (*piVar6 != 0xc) {
        uVar4 = 1;
      }
      cVar1 = FUN_00012354(0,0,uVar3,2,0x17b,uVar4,3,uVar7 & 0xffffffff,0,0);
      local_9 = '\0';
      if (cVar1 != '\0') goto LAB_0000f228;
LAB_0000f32c:
      cVar1 = '\0';
      goto LAB_0000f278;
    }
LAB_0000f228:
    local_9 = '\0';
    cVar1 = FUN_0000f040(iVar2,lVar5,&local_18,uVar7,&local_9);
    if (cVar1 == '\0') {
      if (lVar5 == 0) goto LAB_0000f32c;
      FUN_0000eff8(lVar5,uVar7);
      goto LAB_0000f278;
    }
    if (local_9 != '\0') {
      if (lVar5 != 0) {
        FUN_0000eff8(lVar5,uVar7);
      }
      goto LAB_0000f1f8;
    }
    *(long *)(param_1 + 8) = lVar5;
    *(ulong *)(param_1 + 0x10) = local_18;
    *(ulong *)(param_1 + 0x18) = uVar7;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
LAB_0000f278:
  if (-1 < iVar2) {
    FUN_000124d8(0x39,(long)iVar2,0,0,0,0,0);
  }
LAB_0000f29c:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar1);
  }
  return;
}
