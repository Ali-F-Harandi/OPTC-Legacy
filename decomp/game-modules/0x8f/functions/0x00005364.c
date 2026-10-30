
void FUN_00005364(undefined8 param_1,undefined4 param_2)

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
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  cVar1 = FUN_000052b0();
  if (cVar1 == '\0') {
LAB_00005398:
    uVar3 = FUN_0000535c();
    cVar1 = FUN_00009700(0,0,uVar3,1,0x5e,1,1,param_2,0,0);
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
      FUN_00009774(&local_58);
      FUN_000015a4(&local_58);
      cVar1 = FUN_00006b50(0x80000000000);
      bVar2 = 0;
      if (cVar1 != '\0') {
        bVar2 = FUN_00009768();
        bVar2 = bVar2 ^ 1;
      }
      goto LAB_00005410;
    }
  }
  else {
    cVar1 = FUN_000098e4();
    if (cVar1 != '\0') {
      *in_x5 = 0;
    }
    cVar1 = FUN_0000986c();
    if (cVar1 == '\0') goto LAB_00005398;
    cVar1 = FUN_00009388();
    if (cVar1 != '\0') goto LAB_00005398;
    cVar1 = FUN_000098e4();
    if (cVar1 != '\0') {
      FUN_000098cc();
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
      FUN_00009774(&local_58);
      FUN_000015a4(&local_58);
    }
  }
  bVar2 = 1;
LAB_00005410:
  FUN_0000972c();
  if (local_8 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(bVar2);
}
