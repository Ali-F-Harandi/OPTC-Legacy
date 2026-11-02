
void FUN_000064c4(undefined8 param_1,char *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  char local_d;
  int local_c;
  long local_8;
  
  local_c = 0;
  local_8 = *(long *)PTR_DAT_00029e38;
  lVar1 = FUN_00004c34(&local_c);
  if (0 < local_c) {
    iVar4 = 0;
    do {
      local_d = '\0';
      uVar2 = FUN_00005ca8(lVar1,param_1,&local_d);
      cVar3 = local_d;
      if (local_d != '\0') goto LAB_0000654c;
      iVar4 = iVar4 + 1;
      lVar1 = lVar1 + 0x518;
    } while (iVar4 < local_c);
  }
  cVar3 = '\0';
  uVar2 = 0;
LAB_0000654c:
  if (param_2 != (char *)0x0) {
    *param_2 = cVar3;
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar2);
}
