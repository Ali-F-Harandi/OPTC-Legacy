
void FUN_000066d8(ulong param_1,long param_2,long param_3,undefined8 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char local_439;
  ulong local_438;
  long local_430;
  undefined8 local_428;
  undefined1 auStack_40c [1028];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  cVar1 = FUN_00004d00();
  if (cVar1 == '\0') {
LAB_0000674c:
    uVar4 = 0;
    cVar1 = '\0';
  }
  else {
    do {
      local_439 = '\0';
      cVar1 = FUN_00004d10(&local_439,&local_438);
      if (local_439 != '\0') {
        uVar2 = FUN_00006838();
        uVar4 = 0;
        cVar1 = FUN_00009700(0,0,uVar2,0xb,0x42,1,1,0,0,0);
        if (cVar1 == '\0') goto LAB_00006754;
        goto LAB_000067e8;
      }
      if (cVar1 == '\0') goto LAB_0000674c;
    } while ((param_1 < local_438) || (local_438 + local_430 <= param_1));
    uVar3 = FUN_00008214(auStack_40c);
    if (param_3 - 1U < uVar3) {
      uVar3 = param_3 - 1U;
    }
    FUN_000086e4(param_2,auStack_40c,uVar3);
    *(undefined1 *)(param_2 + uVar3) = 0;
    uVar4 = local_428;
LAB_000067e8:
    cVar1 = FUN_00004d00();
  }
LAB_00006754:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = uVar4;
  }
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar1);
  }
  return;
}
