
void FUN_00004958(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  char local_461;
  undefined1 auStack_460 [40];
  long local_438;
  long local_430;
  long local_428;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  char local_40c [1028];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_0001cfe0;
  cVar1 = FUN_0000367c();
  if ((cVar1 != '\0') && (cVar1 = FUN_000075f0(auStack_460), cVar1 != '\0')) {
    iVar8 = 1;
    iVar6 = 0;
LAB_00004b38:
    local_461 = '\0';
    cVar1 = FUN_000071ac(&local_461,&local_438,auStack_460);
    do {
      if (local_461 != '\0') {
        if (iVar6 == 0) {
LAB_00004bf0:
          if ((cVar1 == '\0') || (iVar8 == 0)) {
LAB_00004c64:
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
LAB_00004bfc:
            lVar9 = FUN_00006d94((long)iVar8);
            if (lVar9 != 0) goto LAB_00004c0c;
            uVar4 = FUN_0000159c();
            cVar1 = FUN_00009700(0,0,uVar4,0x51,0x60,1,2,iVar8,0,0);
          }
          if (cVar1 == '\0') goto LAB_000049ac;
          lVar9 = 0;
        }
        else {
          if (cVar1 == '\0') goto LAB_00004c64;
          lVar10 = FUN_00006d94((long)iVar6 * 0x38);
          if (lVar10 == 0) {
            uVar4 = FUN_0000159c();
            cVar1 = FUN_00009700(0,0,uVar4,0x51,0x59,1,1,iVar6,0,0);
            goto LAB_00004bf0;
          }
          if (iVar8 != 0) goto LAB_00004bfc;
          lVar9 = 0;
        }
LAB_00004c0c:
        cVar1 = FUN_000076d0(auStack_460);
        if (iVar6 == 0) goto LAB_000049ec;
        goto LAB_000049b8;
      }
      if (cVar1 == '\0') goto LAB_000049a8;
      iVar6 = iVar6 + 1;
      if (local_40c[0] == '\0') goto LAB_00004b38;
      iVar3 = FUN_00008214(local_40c);
      iVar8 = iVar3 + iVar8 + 1;
      local_461 = '\0';
      cVar1 = FUN_000071ac(&local_461,&local_438,auStack_460);
    } while( true );
  }
  iVar8 = 0;
  iVar6 = 0;
LAB_000049a8:
  lVar10 = 0;
LAB_000049ac:
  lVar9 = 0;
  cVar1 = '\0';
  if (iVar6 != 0) {
LAB_000049b8:
    iVar3 = 0;
    iVar7 = 1;
    plVar5 = (long *)(lVar10 + 0x30);
    do {
      if (cVar1 != '\0') {
        local_461 = '\0';
        cVar1 = FUN_000071ac(&local_461,&local_438,auStack_460);
        if (local_461 != '\0') break;
        if (cVar1 != '\0') {
          plVar5[-5] = local_430;
          *(undefined4 *)(plVar5 + -3) = local_420;
          plVar5[-6] = local_438;
          *(undefined4 *)((long)plVar5 + -0x14) = local_41c;
          plVar5[-4] = local_428;
          *(undefined4 *)(plVar5 + -2) = local_418;
          *(undefined4 *)((long)plVar5 + -0xc) = local_414;
          *(undefined4 *)(plVar5 + -1) = local_410;
          if (local_40c[0] == '\0') {
            *plVar5 = lVar9;
          }
          else {
            FUN_00008678(lVar9 + iVar7,local_40c);
            *plVar5 = lVar9 + iVar7;
            iVar2 = FUN_00008214(local_40c);
            iVar7 = iVar2 + iVar7 + 1;
          }
        }
      }
      iVar3 = iVar3 + 1;
      plVar5 = plVar5 + 7;
    } while (iVar3 < iVar6);
LAB_000049ec:
    if (cVar1 != '\0') {
      DAT_00021430 = lVar10;
      DAT_00021438 = iVar6;
      DAT_00021440 = lVar9;
      DAT_00021448 = iVar8;
    }
  }
  FUN_00007690(auStack_460);
  FUN_0000394c();
  if (local_8 == *(long *)PTR_DAT_0001cfe0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00009bac(cVar1);
}
