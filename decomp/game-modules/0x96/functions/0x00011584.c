
void FUN_00011584(char *param_1,undefined8 param_2,ulong param_3)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 local_2038;
  undefined1 local_2037;
  undefined1 local_2028;
  undefined1 local_2027;
  undefined1 local_2018;
  undefined1 local_2017;
  undefined1 local_2016;
  char local_2008 [4096];
  undefined1 auStack_1008 [4096];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  local_2038 = 0x2f;
  local_2037 = 0;
  local_2028 = 0x2e;
  local_2027 = 0;
  local_2018 = 0x2e;
  local_2017 = 0x2e;
  local_2016 = 0;
  local_2008[0] = '\0';
  if (*param_1 != '\0') {
    do {
      lVar3 = FUN_00010d78(param_1,0x2f);
      if (lVar3 == 0) {
        lVar3 = FUN_00010ad4(param_1);
      }
      else {
        lVar3 = lVar3 - (long)param_1;
      }
      if (lVar3 != 0) {
        FUN_00010fa4(auStack_1008,param_1,lVar3);
        auStack_1008[lVar3] = 0;
        iVar2 = FUN_00010b64(auStack_1008,&local_2028);
        if (iVar2 != 0) {
          iVar2 = FUN_00010b64(auStack_1008,&local_2018);
          if (iVar2 == 0) {
            puVar5 = (undefined1 *)FUN_00010ddc(local_2008,0x2f);
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = 0;
            }
          }
          else {
            FUN_00010fe0(local_2008,&local_2038);
            FUN_00010fe0(local_2008,auStack_1008);
          }
        }
      }
      if (param_1[lVar3] == '\0') break;
      pcVar1 = param_1 + lVar3 + 1;
      param_1 = param_1 + lVar3 + 1;
    } while (*pcVar1 != '\0');
    if (local_2008[0] != '\0') goto LAB_00011658;
  }
  FUN_00010fe0(local_2008,&local_2038);
LAB_00011658:
  uVar4 = FUN_00010ad4(local_2008);
  if (uVar4 <= param_3) {
    FUN_00010fa4(param_2,local_2008,param_3);
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(uVar4 <= param_3);
}
