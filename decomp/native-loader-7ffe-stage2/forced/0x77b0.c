
char FUN_000077b0(long param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  char local_1;
  
  if (param_1 == 0) {
    local_1 = '\0';
  }
  else {
    cVar1 = FUN_00008ce4(param_1,0x40);
    if (cVar1 == '\x01') {
      cVar1 = FUN_00008db4(param_1,0x40);
      if (cVar1 == '\x01') {
        FUN_0000bc40(param_3,0,0x518);
        *(undefined1 *)(param_3 + 0x22) = 0;
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = param_1;
        param_3[3] = param_2;
        param_3[5] = param_1;
        *(uint *)((long)param_3 + 0x114) = (uint)*(ushort *)(param_3[5] + 0x12);
        uVar2 = FUN_000073e8(param_3[5]);
        param_3[4] = uVar2;
        local_1 = FUN_00006634(param_3);
        if (local_1 != '\0') {
          local_1 = FUN_000067a8(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_000069d8(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00006a94(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00006b70(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00006c20(param_3);
        }
        if (local_1 != '\0') {
          local_1 = FUN_00007380(param_3);
        }
        if (local_1 != '\0') {
          uVar2 = FUN_000075dc(param_3);
          param_3[3] = uVar2;
          if (param_4 != 0) {
            FUN_0000c440(param_3 + 0x23,param_4);
          }
        }
      }
      else {
        local_1 = '\0';
      }
    }
    else {
      local_1 = '\0';
    }
  }
  return local_1;
}


