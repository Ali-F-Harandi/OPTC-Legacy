
void FUN_0001186c(char *param_1,long param_2,long param_3,long *param_4,undefined1 *param_5)

{
  long lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_10 [2];
  long local_8;
  
  lVar5 = *param_4;
  pcVar6 = (char *)(param_3 + lVar5);
  local_8 = *(long *)PTR_DAT_00029e38;
  if (*(char *)(param_3 + lVar5) == '\0') {
    param_1 = (char *)0x0;
  }
  else {
    local_10[0] = 0xa0d;
    if (param_2 + -1 != 0) {
      lVar1 = lVar5 + param_2 + -1;
      pcVar7 = param_1;
      do {
        iVar4 = FUN_00010b04(pcVar6,local_10,2);
        if (iVar4 == 0) {
          lVar5 = lVar5 + 2;
LAB_00011900:
          uVar3 = 0;
          param_1 = pcVar7;
          goto LAB_00011904;
        }
        cVar2 = *pcVar6;
        if ((cVar2 == '\r') || (cVar2 == '\n')) {
          lVar5 = lVar5 + 1;
          goto LAB_00011900;
        }
        if (cVar2 == '\0') goto LAB_00011900;
        lVar5 = lVar5 + 1;
        param_1 = pcVar7 + 1;
        *pcVar7 = cVar2;
        pcVar6 = pcVar6 + 1;
        pcVar7 = param_1;
      } while (lVar5 != lVar1);
    }
    uVar3 = 1;
LAB_00011904:
    *param_1 = '\0';
    *param_4 = lVar5;
    if (param_5 != (undefined1 *)0x0) {
      *param_5 = uVar3;
    }
  }
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(param_1);
  }
  return;
}
