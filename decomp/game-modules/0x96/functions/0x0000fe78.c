
void FUN_0000fe78(char *param_1,long param_2,ulong param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  bool bVar9;
  char *pcVar10;
  undefined1 auStack_3098 [16];
  uint local_3088;
  undefined1 local_3018;
  undefined1 local_3017;
  char acStack_3009 [4096];
  char acStack_2009 [4097];
  char local_1008 [4096];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  bVar9 = param_2 == 0 || param_3 == 0;
  if (param_2 == 0 || param_3 == 0) {
    bVar9 = false;
    goto LAB_0000fedc;
  }
  local_3018 = 0x2f;
  local_3017 = bVar9;
  iVar3 = FUN_00010b64(param_1,&local_3018);
  if (iVar3 == 0) {
    bVar9 = true;
    FUN_00010f38(param_2,&local_3018);
    goto LAB_0000fedc;
  }
  if (*param_1 == '/') {
    uVar5 = FUN_00010ad4(param_1);
    if (0x1000 < uVar5) goto LAB_0000fedc;
    FUN_00010f38(acStack_3009 + 1,param_1);
  }
  else {
    pcVar8 = acStack_3009 + 1;
    lVar4 = FUN_000124d8(0x11,pcVar8,0x1000,0,0,0,0);
    if (lVar4 == 0) goto LAB_0000fedc;
    lVar4 = FUN_00010ad4(pcVar8);
    if ((lVar4 != 0) && (acStack_3009[lVar4] != '/')) {
      FUN_00010fe0(pcVar8,&local_3018);
    }
    FUN_00010fe0(acStack_3009 + 1,param_1);
  }
  pcVar8 = acStack_3009 + 1;
  cVar2 = FUN_00011750(pcVar8,0x1000);
  if (cVar2 == '\0') goto LAB_0000fedc;
  pcVar10 = acStack_2009 + 1;
  FUN_000108e0(pcVar10,0,0x1000);
  if (acStack_3009[1] == '\0') {
    if (acStack_2009[1] == '\0') goto LAB_000101e0;
  }
  else {
    do {
      lVar4 = FUN_00010d78(pcVar8,0x2f);
      if (lVar4 == 0) {
        lVar4 = FUN_00010ad4(pcVar8);
      }
      else {
        lVar4 = lVar4 - (long)pcVar8;
      }
      if (lVar4 != 0) {
        FUN_00010fe0(pcVar10,&local_3018);
        FUN_00011018(pcVar10,pcVar8,lVar4);
        if (cVar2 != '\0') {
          iVar3 = FUN_000124d8(0x4f,0xffffffffffffff9c,pcVar10,auStack_3098,0x100,0,0);
          if (iVar3 == 0) {
            if ((local_3088 & 0xf000) == 0xa000) {
              iVar3 = FUN_000124d8(0x4e,0xffffffffffffff9c,pcVar10,local_1008,0x1000,0,0);
              if (iVar3 < 0) {
                cVar2 = acStack_2009[1];
                if (acStack_2009[1] != '\0') goto LAB_0000fedc;
                goto LAB_000101e0;
              }
              local_1008[iVar3] = '\0';
              if (local_1008[0] == '/') {
                FUN_00010f38(pcVar10);
              }
              else {
                puVar6 = (undefined1 *)FUN_00010ddc(pcVar10,0x2f);
                if (puVar6 != (undefined1 *)0x0) {
                  *puVar6 = 0;
                }
                FUN_00010fe0(pcVar10,&local_3018);
                FUN_00010fe0(pcVar10,local_1008);
                cVar2 = FUN_00011750(pcVar10,0x1000);
              }
              lVar7 = FUN_00010ad4(pcVar10);
              if ((lVar7 != 0) && (pcVar10[lVar7 + -1] == '/')) {
                pcVar10[lVar7 + -1] = '\0';
              }
            }
          }
          else {
            cVar2 = '\0';
          }
        }
      }
    } while ((pcVar8[lVar4] != '\0') &&
            (pcVar1 = pcVar8 + lVar4 + 1, pcVar8 = pcVar8 + lVar4 + 1, *pcVar1 != '\0'));
    if (acStack_2009[1] == '\0') {
LAB_000101e0:
      FUN_00010f38(acStack_2009 + 1,&local_3018);
    }
    if (cVar2 == '\0') goto LAB_0000fedc;
  }
  pcVar8 = acStack_3009 + 1;
  FUN_00010f38(pcVar8,acStack_2009 + 1);
  uVar5 = FUN_00010ad4(pcVar8);
  if (uVar5 <= param_3) {
    bVar9 = true;
    FUN_00010f38(param_2,pcVar8);
  }
LAB_0000fedc:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(bVar9);
  }
  return;
}
