
void FUN_00002f68(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 *in_x5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001fe30;
  cVar1 = FUN_00002910();
  if (cVar1 == '\0') {
LAB_00002f9c:
    uVar3 = FUN_00002f60();
    cVar1 = FUN_0000baa8(0,0,uVar3,1,0x5e,1,1,param_2,0,0);
    if (cVar1 == '\0') {
      *in_x5 = 1;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      uStack_10 = 0;
      FUN_0000bb1c(&local_58);
      FUN_00008f50(&local_58);
      cVar1 = FUN_00008870(0x80000000000);
      bVar2 = 0;
      if (cVar1 != '\0') {
        bVar2 = FUN_0000bb10();
        bVar2 = bVar2 ^ 1;
      }
      goto LAB_00003014;
    }
  }
  else {
    cVar1 = FUN_0000bc8c();
    if (cVar1 != '\0') {
      *in_x5 = 0;
    }
    cVar1 = FUN_0000bc14();
    if (cVar1 == '\0') goto LAB_00002f9c;
    cVar1 = FUN_0000b730();
    if (cVar1 != '\0') goto LAB_00002f9c;
    cVar1 = FUN_0000bc8c();
    if (cVar1 != '\0') {
      FUN_0000bc74();
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_30 = 0;
      local_28 = 0;
      uStack_20 = 0;
      local_18 = 0;
      uStack_10 = 0;
      FUN_0000bb1c(&local_58);
      FUN_00008f50(&local_58);
    }
  }
  bVar2 = 1;
LAB_00003014:
  FUN_0000bad4();
  if (local_8 == *(long *)PTR_DAT_0001fe30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0000bf54(bVar2);
}
