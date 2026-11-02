
void FUN_00006e74(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_0001fe30;
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00006d6c();
  }
  if (lVar2 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(uVar1);
}
