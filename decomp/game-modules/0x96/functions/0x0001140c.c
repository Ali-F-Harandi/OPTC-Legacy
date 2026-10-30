
void FUN_0001140c(char *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_18 [2];
  undefined1 local_16;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_1 != (char *)0x0) {
    local_27 = 0;
    local_28 = 0x2e;
    local_18[0] = 0x2e;
    local_16 = 0;
    iVar1 = FUN_00010b64(param_1,&local_28);
    if ((iVar1 == 0) || (iVar1 = FUN_00010b64(param_1,local_18), iVar1 == 0)) goto LAB_00011454;
    if (*param_1 != '\0') {
      lVar2 = 0;
      do {
        lVar3 = lVar2;
        lVar2 = lVar3 + 1;
      } while (param_1[lVar2] != '\0');
      if ((lVar2 != 0) && (param_1[lVar3] != '/')) {
        lVar2 = FUN_00010ddc(param_1,0x2f);
        if (lVar2 != 0) {
          param_1 = (char *)(lVar2 + 1);
        }
        goto LAB_00011454;
      }
    }
  }
  param_1 = (char *)0x0;
LAB_00011454:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(param_1);
  }
  return;
}
