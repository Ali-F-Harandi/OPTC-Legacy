
char FUN_0000ae54(undefined8 *param_1)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  char local_1;
  
  local_1 = '\x01';
  if (param_1 == (undefined8 *)0x0) {
    local_1 = '\0';
  }
  else {
    local_18 = 0;
    local_20 = 0;
    local_38 = 0x6c5c7486;
    local_34 = 0xbc547ee4;
    local_30 = 0xbc76c49c;
    local_2c = 0x54a4448c;
    local_28 = 0x8484;
    local_10 = FUN_0000d528(&local_38,0x14);
    FUN_0000b31c(local_10,0,&local_18,&local_20,0,0);
    FUN_0000d5ec(local_10);
    if (local_1 != '\0') {
      *param_1 = local_18;
      param_1[1] = local_20;
    }
  }
  return local_1;
}


