
char FUN_00001db0(long param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined1 auStack_490 [1024];
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [20];
  undefined4 local_54;
  undefined8 local_50;
  char local_41;
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  long local_18;
  undefined1 *local_10;
  char local_1;
  
  local_1 = '\x01';
  local_50 = 0;
  local_54 = 0;
  if (param_1 != 0) {
    local_10 = auStack_490;
    FUN_0000c440(local_10,param_1);
    local_20 = (undefined1 *)FUN_0000c2ec(local_10,0x2f);
    if (local_20 == (undefined1 *)0x0) {
      local_10 = (undefined1 *)0x0;
    }
    else {
      *local_20 = 0;
    }
    local_1 = FUN_00001990(local_10,param_2,&local_50,&local_54);
  }
  if (local_1 != '\0') {
    local_28 = auStack_68;
    if (local_1 != '\0') {
      local_1 = FUN_0000ae54(local_28);
    }
    local_18 = 0;
    if (local_1 != '\0') {
      local_78 = 0x85f4d59d;
      local_74 = 0xdd5de5b5;
      local_70 = 0x65f42d6d;
      local_6c = 0xad55f5;
      local_30 = FUN_0000d528(&local_78,0x10);
      local_18 = FUN_0000af9c(local_28,local_30);
      FUN_0000d5ec(local_30);
    }
    if (local_1 != '\0') {
      if (local_18 == 0) {
        local_1 = FUN_00001ba4(param_2,&local_50,&local_54);
      }
      else {
        local_38 = auStack_90;
        local_40 = FUN_0000be74(local_18);
        if (local_1 != '\0') {
          local_1 = FUN_0000d7dc(local_38,local_18,local_40,0x3a);
        }
        while ((local_1 != '\0' && (lVar1 = FUN_0000d8a0(local_38,auStack_490,0x400), lVar1 != 0)))
        {
          local_41 = FUN_00001aa0(auStack_490);
          if (local_41 == '\0') {
            local_1 = FUN_00001990(auStack_490,param_2,&local_50,&local_54);
          }
          else {
            local_1 = FUN_00001ba4(param_2,&local_50,&local_54);
          }
        }
        FUN_0000d844(local_38);
      }
    }
    FUN_0000af40(local_28);
  }
  if (local_1 != '\0') {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = local_50;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_54;
    }
  }
  return local_1;
}


