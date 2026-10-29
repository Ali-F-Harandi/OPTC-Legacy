
undefined1 FUN_00001aa0(undefined1 *param_1)

{
  int iVar1;
  undefined1 *local_428;
  undefined1 auStack_420 [1024];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  int local_8;
  undefined1 local_1;
  
  local_8 = FUN_0000be74(param_1);
  local_428 = param_1;
  if ((0 < local_8) && (param_1[(long)local_8 + -1] == '/')) {
    FUN_0000c440(auStack_420,param_1);
    auStack_420[local_8 + -1] = 0;
    local_428 = auStack_420;
  }
  local_1 = 0;
  local_20 = 0x4c245c86;
  local_1c = 0x6e84cc5c;
  local_18 = 0x36dcac9c;
  local_14 = 0x5e;
  local_10 = FUN_0000d528(&local_20,0x10);
  iVar1 = FUN_0000bf80(local_428,local_10);
  if (iVar1 == 0) {
    local_1 = 1;
  }
  FUN_0000d5ec(local_10);
  return local_1;
}


