
void FUN_00002e04(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  char local_11;
  undefined4 *local_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  local_10 = (undefined4 *)0x0;
  local_11 = '\0';
  cVar1 = FUN_00002b2c(param_1,&local_10,&local_11);
  if (local_11 == '\0') {
    if (cVar1 != '\0') {
      cVar1 = FUN_00002b2c(0,&local_10,&local_11);
      if (local_10 == (undefined4 *)0x0) {
        uVar2 = FUN_0000159c();
        cVar1 = FUN_00009700(0,0,uVar2,0x40,0x103,1,5,param_1 & 0xffffffff,0,0);
      }
      if (cVar1 != '\0') {
        *local_10 = (int)param_1;
        goto LAB_00002e98;
      }
    }
    cVar1 = '\0';
  }
  else {
    if (cVar1 == '\0') goto LAB_00002e64;
LAB_00002e98:
    *(undefined8 *)(local_10 + 4) = param_2;
    cVar1 = '\x01';
    local_10[3] = param_3;
  }
LAB_00002e64:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar1);
  }
  return;
}
