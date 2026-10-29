
undefined8 FUN_0000fc30(uint *param_1,ulong param_2,undefined2 *param_3)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_60 [8];
  uint *local_40;
  int local_34;
  undefined2 *local_30;
  uint *local_28;
  int local_1c;
  uint *local_18;
  uint *local_10;
  uint *local_8;
  
  if (param_1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else if (param_3 == (undefined2 *)0x0) {
    uVar4 = 0;
  }
  else if (param_1 == (uint *)0x0) {
    uVar4 = 0;
  }
  else if (param_3 == (undefined2 *)0x0) {
    uVar4 = 0;
  }
  else {
    local_30 = param_3;
    local_28 = param_1;
    cVar2 = FUN_0000fe94(*param_3);
    if (cVar2 == '\x01') {
      uVar3 = FUN_0000fecc(*local_30);
      if (uVar3 == (ushort)local_30[1]) {
        local_60[0] = 0;
        local_60[1] = 0;
        local_60[2] = 0;
        local_60[3] = 0;
        local_60[4] = 0;
        local_60[5] = 0;
        local_60[6] = 0;
        local_60[7] = 0;
        local_8 = local_28;
        local_10 = local_60;
        local_18 = local_60 + 4;
        local_34 = (int)(param_2 >> 4);
        for (local_1c = 0; local_1c < local_34; local_1c = local_1c + 1) {
          *local_18 = *local_8;
          local_18[1] = local_8[1];
          local_18[2] = local_8[2];
          local_18[3] = local_8[3];
          FUN_0000ff24(local_30 + 2,local_30[1],local_18,local_8);
          puVar1 = local_10;
          *local_8 = *local_8 ^ *local_10;
          local_8[1] = local_8[1] ^ local_10[1];
          local_8[2] = local_8[2] ^ local_10[2];
          local_8[3] = local_8[3] ^ local_10[3];
          local_40 = local_10;
          local_10 = local_18;
          local_18 = puVar1;
          local_8 = local_8 + 4;
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


