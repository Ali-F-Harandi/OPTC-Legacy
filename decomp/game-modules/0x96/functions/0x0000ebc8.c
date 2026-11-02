
void FUN_0000ebc8(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_00029e38;
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0000eac0();
  }
  if (lVar2 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar1);
}
