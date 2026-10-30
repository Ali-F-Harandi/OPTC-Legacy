
void FUN_00002c80(undefined4 param_1,undefined8 *param_2,ulong *param_3,undefined8 param_4)

{
  char cVar1;
  long local_10;
  long local_8;
  
  local_10 = 0;
  local_8 = *(long *)PTR_DAT_0001cfe0;
  cVar1 = FUN_00002b2c(param_1,&local_10,param_4);
  if ((cVar1 != '\0') && (local_10 != 0)) {
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = *(undefined8 *)(local_10 + 0x10);
    }
    if (param_3 != (ulong *)0x0) {
      *param_3 = (ulong)*(uint *)(local_10 + 0xc);
    }
  }
  if (local_8 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac();
}
