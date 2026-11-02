
/* WARNING: Type propagation algorithm not settling */

void FUN_00006b44(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,byte param_10)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint local_18;
  int local_14 [3];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  local_14[2] = 0x7ee4;
  local_14[1] = 0x6c5c7486;
  uVar3 = FUN_0000b6a8(local_14 + 1,8);
  uVar4 = FUN_0000abf8();
  iVar2 = FUN_0000ac28(uVar3,param_6,uVar4);
  FUN_0000b6f0(uVar3);
  local_18 = 0;
  local_14[0] = 0;
  if (iVar2 == 0) {
    bVar1 = FUN_0000a4a4(param_6,param_7,param_8,param_9,&local_18,local_14);
  }
  else {
    bVar1 = FUN_0000a320();
  }
  if (bVar1 < param_10) {
    bVar1 = FUN_0000baa8(param_1,param_2,param_3,param_4,param_5,1,1,local_18 | local_14[0] << 0x10,
                         param_6,0);
  }
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(bVar1);
}
