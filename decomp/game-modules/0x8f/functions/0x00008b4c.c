
void FUN_00008b4c(char *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_18 [2];
  undefined1 local_16;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  if (param_1 != (char *)0x0) {
    local_27 = 0;
    local_28 = 0x2e;
    local_18[0] = 0x2e;
    local_16 = 0;
    iVar1 = FUN_000082a4(param_1,&local_28);
    if ((iVar1 == 0) || (iVar1 = FUN_000082a4(param_1,local_18), iVar1 == 0)) goto LAB_00008b94;
    if (*param_1 != '\0') {
      lVar2 = 0;
      do {
        lVar3 = lVar2;
        lVar2 = lVar3 + 1;
      } while (param_1[lVar2] != '\0');
      if ((lVar2 != 0) && (param_1[lVar3] != '/')) {
        lVar2 = FUN_0000851c(param_1,0x2f);
        if (lVar2 != 0) {
          param_1 = (char *)(lVar2 + 1);
        }
        goto LAB_00008b94;
      }
    }
  }
  param_1 = (char *)0x0;
LAB_00008b94:
  if (local_8 != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(param_1);
  }
  return;
}
