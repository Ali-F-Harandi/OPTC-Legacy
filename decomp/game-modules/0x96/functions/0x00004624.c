
void FUN_00004624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 int *param_5,long param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  char local_411;
  undefined8 local_410;
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_5 == (int *)0x0) {
    uVar2 = FUN_000035b0();
    iVar6 = 0;
    if (uVar2 == 0) {
      cVar1 = '\x01';
      goto LAB_00004728;
    }
LAB_00004688:
    uVar7 = 0;
LAB_00004698:
    uVar4 = FUN_000035bc(uVar7,param_1,param_2);
    cVar1 = FUN_0000311c(param_4);
    if (cVar1 != '\0') {
      if (param_6 == 0) {
        local_410 = 0;
        local_411 = '\0';
        iVar3 = FUN_0000e600(5,0,0,0);
        if (iVar3 < 0) goto LAB_0000486c;
        do {
          cVar1 = FUN_000035a0(uVar4,param_3,param_4,&local_410,auStack_408,&local_411);
          while( true ) {
            if (local_411 == '\0') goto LAB_000047d4;
            if (cVar1 == '\0') goto LAB_00004714;
            iVar6 = iVar6 + 1;
            local_410 = 0;
            local_411 = '\0';
            iVar3 = FUN_0000e600(5,0,0,0);
            if (-1 < iVar3) break;
LAB_0000486c:
            cVar1 = FUN_000035a8(uVar4,param_3,param_4,&local_410,auStack_408,&local_411);
          }
        } while( true );
      }
      lVar5 = param_6 + (long)iVar6 * 0x518;
      local_410 = 0;
      local_411 = '\0';
      iVar3 = FUN_0000e600(5,0,0,0);
      if (iVar3 < 0) goto LAB_000047ac;
      do {
        cVar1 = FUN_000035a0(uVar4,param_3,param_4,&local_410,auStack_408,&local_411);
        while( true ) {
          if (local_411 == '\0') goto LAB_000047d4;
          if ((cVar1 == '\0') || (cVar1 = FUN_0000baf4(local_410,lVar5,auStack_408), cVar1 == '\0'))
          goto LAB_00004714;
          iVar6 = iVar6 + 1;
          lVar5 = lVar5 + 0x518;
          local_410 = 0;
          local_411 = '\0';
          iVar3 = FUN_0000e600(5,0,0,0);
          if (-1 < iVar3) break;
LAB_000047ac:
          cVar1 = FUN_000035a8(uVar4,param_3,param_4,&local_410,auStack_408,&local_411);
        }
      } while( true );
    }
    goto LAB_00004714;
  }
  iVar6 = *param_5;
  uVar2 = FUN_000035b0();
  if (uVar2 != 0) goto LAB_00004688;
  cVar1 = '\x01';
  goto LAB_00004720;
LAB_000047d4:
  if (cVar1 != '\0') {
    cVar1 = FUN_0000311c(param_4);
    if ((cVar1 == '\0') || (uVar7 = uVar7 + 1, uVar2 <= uVar7)) goto LAB_00004718;
    goto LAB_00004698;
  }
LAB_00004714:
  cVar1 = '\0';
LAB_00004718:
  if (param_5 == (int *)0x0) goto LAB_00004728;
LAB_00004720:
  *param_5 = iVar6;
LAB_00004728:
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(cVar1);
}
