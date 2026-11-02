
void FUN_000028d4(undefined8 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (DAT_00020198 == (undefined4 *)0x0) {
    local_30 = 0xec56dcd4;
    local_38 = 0x7c4cfc05;
    local_34 = 0x4cf4fc7c;
    local_2c = 5;
    uVar4 = FUN_000091ec(&local_38,0x10);
    lVar5 = thunk_FUN_00001400();
    if (lVar5 == 0) {
      puVar6 = (undefined4 *)FUN_00006d94(0x28c);
      if (puVar6 == (undefined4 *)0x0) {
        uVar3 = FUN_0000159c();
        cVar1 = FUN_00009700(0,0,uVar3,0x40,0x4d,1,1,0x28c,0,0);
        if (cVar1 != '\0') goto LAB_000029f0;
      }
      else {
LAB_000029f0:
        *puVar6 = 0x1b;
        local_40 = 0x241c76d6;
        local_28 = 0;
        uStack_20 = 0;
        local_18 = 0;
        uStack_10 = 0;
        local_3c = 0;
        uVar7 = FUN_000091ec(&local_40,8);
        cVar1 = FUN_00005e88(&local_28,0x20,uVar7,puVar6);
        FUN_00009234(uVar7);
        if (cVar1 != '\0') {
          iVar2 = thunk_FUN_00001400(uVar4,&local_28,1);
          if (iVar2 != 0) {
            uVar3 = FUN_0000159c();
            cVar1 = FUN_00009700(0,0,uVar3,0x40,0x69,1,2,0,&local_28,0);
            if (cVar1 == '\0') goto LAB_00002a94;
          }
LAB_000029bc:
          FUN_00009234(uVar4);
          goto LAB_000029c4;
        }
      }
LAB_00002a94:
      FUN_00009234(uVar4);
      uVar4 = 0;
      goto LAB_00002930;
    }
    puVar6 = (undefined4 *)FUN_00008f24(lVar5,0,0x10);
    if (puVar6 != (undefined4 *)0x0) goto LAB_000029bc;
    uVar3 = FUN_0000159c();
    cVar1 = FUN_00009700(0,0,uVar3,0x40,0x73,1,3,0,lVar5,0);
    FUN_00009234(uVar4);
    if (cVar1 == '\0') {
      uVar4 = 0;
      goto LAB_00002930;
    }
LAB_000029c4:
    DAT_00020198 = puVar6 + 1;
    DAT_000201a0 = *puVar6;
  }
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = DAT_00020198;
  }
  if (param_2 == (undefined4 *)0x0) {
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    *param_2 = DAT_000201a0;
  }
LAB_00002930:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(uVar4);
  }
  return;
}
