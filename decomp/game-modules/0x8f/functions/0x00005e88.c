
void FUN_00005e88(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR_DAT_0001cfe0;
  if ((param_1 == 0) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00005d80();
  }
  if (lVar2 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(uVar1);
}
