
void FUN_0000f040(int param_1,undefined1 *param_2,long *param_3,long param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_1008 [4096];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  FUN_000124d8(0x3e,(long)param_1,0,0,0,0,0);
  if (param_2 == (undefined1 *)0x0) {
    param_4 = 0x1000;
    param_2 = auStack_1008;
  }
  lVar5 = 0;
  lVar6 = 0;
  while( true ) {
    lVar3 = FUN_000124d8(0x3f,(long)param_1,param_2 + lVar5,param_4 - lVar5,0,0,0);
    if (lVar3 < 0) {
      uVar2 = FUN_00010530();
      uVar1 = FUN_00012354(0,0,uVar2,2,0x114,1,1,0,0,0);
      uVar4 = 0;
      goto LAB_0000f0f8;
    }
    if (lVar3 == 0) break;
    lVar5 = lVar5 + lVar3;
    lVar6 = lVar6 + lVar3;
    if (param_4 == lVar5) {
      uVar4 = 1;
      uVar1 = 1;
LAB_0000f0f8:
      if (param_3 != (long *)0x0) {
        *param_3 = lVar6;
      }
      if (param_5 != (undefined1 *)0x0) {
        *param_5 = uVar4;
      }
      if (local_8 == *(long *)PTR_DAT_00029e38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0001249c(uVar1);
    }
  }
  uVar4 = 0;
  uVar1 = 1;
  goto LAB_0000f0f8;
}
