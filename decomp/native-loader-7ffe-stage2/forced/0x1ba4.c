
char FUN_00001ba4(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  char local_2;
  char local_1;
  
  local_1 = '\x01';
  local_28 = *param_2;
  local_2c = *param_3;
  local_2 = 0;
  local_2 = FUN_00002b54();
  if (local_2 != '\0') {
    if (local_1 != '\0') {
      local_48 = 0x4c245c86;
      local_44 = 0x6e84cc5c;
      local_40 = 0x36dcac9c;
      local_3c = 0x54e47e5e;
      local_38 = 0x6e4e4694;
      local_34 = 0xe48c;
      local_10 = FUN_0000d528(&local_48,0x18);
      local_1 = FUN_00001990(local_10,param_1,&local_28,&local_2c);
      FUN_0000d5ec(local_10);
    }
    if (local_1 != '\0') {
      local_60 = 0x4c245c86;
      local_5c = 0x6e84cc5c;
      local_58 = 0x36dcac9c;
      local_54 = 0x54e47e5e;
      local_50 = 0x4e4694;
      local_18 = FUN_0000d528(&local_60,0x14);
      local_1 = FUN_00001990(local_18,param_1,&local_28,&local_2c);
      FUN_0000d5ec(local_18);
    }
  }
  if (local_1 != '\0') {
    local_70 = 0x4c245c86;
    local_6c = 0x6e84cc5c;
    local_68 = 0x36dcac9c;
    local_64 = 0x5e;
    local_20 = FUN_0000d528(&local_70,0x10);
    local_1 = FUN_00001990(local_20,param_1,&local_28,&local_2c);
    FUN_0000d5ec(local_20);
  }
  *param_2 = local_28;
  *param_3 = local_2c;
  return local_1;
}


