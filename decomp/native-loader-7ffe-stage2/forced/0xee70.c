
undefined1
FUN_0000ee70(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_28;
  uint local_20;
  undefined8 local_18;
  uint local_10;
  uint local_8;
  undefined1 local_1;
  
  local_1 = 1;
  if (param_3 == param_5) {
    FUN_0000bd64(param_2,param_4,param_5);
  }
  else {
    local_28 = param_2;
    local_20 = param_3;
    local_18 = param_4;
    local_10 = param_5;
    iVar1 = FUN_0000f420(param_1,&local_18,&local_28);
    local_1 = iVar1 != 0;
    if (!(bool)local_1) {
      local_8 = param_3 << 0x10 | param_5 & 0xffff;
      uVar2 = FUN_0000ee68();
      local_1 = FUN_000018dc(0,0,uVar2,2,0x37,1,1,local_8,0,0);
    }
  }
  return local_1;
}


