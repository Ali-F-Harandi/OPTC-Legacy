
/* WARNING: Type propagation algorithm not settling */

void FUN_00003a94(char *param_1)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  char local_19;
  long local_18 [3];
  
  local_18[2] = *(long *)PTR_DAT_0001cfe0;
  if (DAT_00020b00 == '\0') {
    local_18[0] = 0;
    local_18[1] = 0;
    local_19 = DAT_00020b00;
    cVar2 = FUN_00002c80(8,local_18,local_18 + 1,&local_19);
    if (cVar2 == '\0') goto LAB_00003ad0;
    if ((local_19 != '\0') && (local_18[0] != 0)) {
      lVar3 = 0;
      uVar4 = 0;
      DAT_00020b00 = local_19;
      if (DAT_0001e420 != 0) {
        do {
          pcVar1 = (char *)(local_18[0] + lVar3);
          lVar3 = lVar3 + 1;
          if (*pcVar1 != '\0') {
            uVar4 = uVar4 + 1;
          }
        } while ((uint)lVar3 < DAT_0001e420);
        DAT_00020b00 = DAT_0001e420 == uVar4;
      }
    }
    if (param_1 != (char *)0x0) {
      *param_1 = DAT_00020b00;
      goto LAB_00003ad0;
    }
  }
  else if (param_1 != (char *)0x0) {
    cVar2 = '\x01';
    *param_1 = '\x01';
    goto LAB_00003ad0;
  }
  cVar2 = '\x01';
LAB_00003ad0:
  if (local_18[2] != *(long *)PTR_DAT_0001cfe0) {
                    /* WARNING: Subroutine does not return */
    FUN_00009bac(cVar2);
  }
  return;
}
