
void FUN_00006990(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,byte param_10)

{
  byte bVar1;
  uint local_10;
  int local_c;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  local_10 = 0;
  local_c = 0;
  bVar1 = FUN_00007ab8(param_6,param_7,param_8,param_9,&local_10,&local_c);
  if (bVar1 < param_10) {
    bVar1 = FUN_00009700(param_1,param_2,param_3,param_4,param_5,1,2,local_10 | local_c << 0x10,
                         param_6,0);
  }
  if (local_8 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(bVar1);
}
