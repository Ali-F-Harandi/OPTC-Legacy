
void FUN_00005f2c(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte local_d;
  int local_c;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if (param_2 != (byte *)0x0) {
    *param_2 = 0;
  }
  iVar3 = FUN_0000e600(5,0,0,0);
  if ((iVar3 < 0) || (cVar2 = FUN_00005e9c(), cVar2 == '\0')) {
    lVar6 = 0;
  }
  else {
    iVar3 = 0;
    local_c = 0;
    lVar4 = FUN_00004c34();
    if (0 < local_c) {
      bVar1 = local_d;
      do {
        local_d = bVar1;
        lVar7 = lVar4 + (long)iVar3 * 0x518;
        lVar6 = lVar7 + 0x118;
        lVar5 = FUN_00010ddc(lVar6,0x2f);
        if (lVar5 != 0) {
          lVar5 = lVar5 + 1;
        }
        lVar5 = thunk_FUN_000027d0(lVar5,5);
        if ((lVar5 == 0) &&
           ((((cVar2 = FUN_00003e74(), cVar2 == '\0' || (cVar2 = FUN_0000e45c(), cVar2 != '\0')) ||
             (cVar2 = FUN_00003cf0(lVar6), cVar2 == '\0')) ||
            (lVar5 = thunk_FUN_000027d0(lVar6,5), lVar5 == 0)))) {
          local_d = 0;
          lVar6 = FUN_00005ca8(lVar7,param_1,&local_d);
        }
        else {
          local_d = 0;
          thunk_FUN_000027d0();
          lVar6 = thunk_FUN_000027d0(lVar5,param_1);
          lVar7 = thunk_FUN_000027d0();
          if ((lVar6 != 0) && (lVar7 == 0)) {
            local_d = 1;
          }
          thunk_FUN_000027d0(lVar5);
        }
        bVar1 = local_d;
        if (local_d != 0) goto joined_r0x000060b0;
        iVar3 = iVar3 + 1;
        bVar1 = 0;
      } while (iVar3 < local_c);
    }
    lVar6 = 0;
    bVar1 = 0;
joined_r0x000060b0:
    if (param_2 != (byte *)0x0) {
      *param_2 = bVar1;
    }
  }
  if (local_8 == *(long *)PTR_DAT_00029e38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0001249c(lVar6);
}
