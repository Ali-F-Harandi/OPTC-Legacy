
void FUN_00007e20(int param_1,long *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 auStack_1008 [4096];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  lVar4 = 0;
  do {
    lVar1 = FUN_00009be8(0x3f,(long)param_1,auStack_1008,0x1000,0,0,0);
    if (lVar1 < 0) {
      uVar3 = 0x4e;
      uVar2 = 0;
LAB_00007ea8:
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uVar3;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = (int)lVar4;
      }
      if (local_8 == *(long *)PTR_DAT_0001cfe0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00009bac(uVar2);
    }
    if (lVar1 == 0) {
      lVar1 = FUN_00009be8(0x3e,(long)param_1,0,0,0,0,0);
      if (lVar1 < 0) {
        uVar3 = 0x55;
        uVar2 = 0;
      }
      else if (param_2 == (long *)0x0) {
        lVar4 = 0;
        uVar3 = 0;
        uVar2 = 1;
      }
      else {
        *param_2 = lVar4;
        uVar2 = 1;
        lVar4 = 0;
        uVar3 = 0;
      }
      goto LAB_00007ea8;
    }
    lVar4 = lVar4 + lVar1;
  } while( true );
}
