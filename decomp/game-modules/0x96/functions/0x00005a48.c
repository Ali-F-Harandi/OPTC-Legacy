
void FUN_00005a48(undefined8 param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  char local_9;
  long local_8;
  
  local_9 = '\0';
  local_8 = *(long *)PTR_DAT_00029e38;
  cVar1 = FUN_00003e74();
  if (cVar1 != '\0') {
    uVar2 = FUN_00004618();
    lVar3 = FUN_0000c2d8(uVar2,param_1);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != 0)) {
      local_9 = '\x01';
      uVar2 = FUN_0000c258(uVar2);
      goto LAB_00005a84;
    }
  }
  uVar2 = 0;
LAB_00005a84:
  if (local_9 == '\0') {
    uVar2 = FUN_00005bfc(DAT_0002a620,param_1,&local_9);
    if (local_9 == '\0') {
      uVar2 = FUN_00004618();
      uVar2 = FUN_00006430(uVar2,param_1,&local_9);
    }
  }
  if (param_2 != (char *)0x0) {
    *param_2 = local_9;
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar2);
}
