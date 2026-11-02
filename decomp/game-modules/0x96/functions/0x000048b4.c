
void FUN_000048b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,long param_5
                 )

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char local_411;
  undefined8 local_410;
  undefined1 auStack_408 [1024];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  uVar5 = 1;
  cVar1 = FUN_0000e45c();
  if (cVar1 != '\0') goto LAB_00004980;
  if (param_4 == (int *)0x0) {
    iVar7 = 0;
    uVar3 = FUN_000035b0(param_1,param_2);
    if (uVar3 == 0) goto LAB_00004980;
LAB_0000492c:
    uVar5 = 1;
    uVar6 = 0;
    do {
      uVar4 = FUN_000035bc(uVar6,param_1,param_2);
      if (uVar5 == 0) {
LAB_00004958:
        local_410 = 0;
        uVar5 = (uint)param_5;
        if (param_5 != 0) {
LAB_00004960:
          uVar5 = 0;
        }
      }
      else {
        cVar1 = FUN_000039e8(uVar4,param_3);
        local_410 = 0;
        if (cVar1 == '\0') goto LAB_00004958;
        local_411 = '\0';
        bVar2 = FUN_00003b78(&local_410,&local_411);
        uVar5 = (uint)bVar2;
        if (local_411 != '\0') {
          if (param_5 == 0) {
LAB_00004a38:
            if (uVar5 != 0) {
              iVar7 = iVar7 + 1;
            }
            goto LAB_00004964;
          }
          thunk_FUN_000108e0(auStack_408,0,0x400);
          if (uVar5 != 0) {
            bVar2 = FUN_00003ba0(auStack_408,0x400);
            uVar5 = (uint)bVar2;
            if (uVar5 == 0) goto LAB_00004964;
            bVar2 = FUN_0000baf4(local_410,param_5 + (long)iVar7 * 0x518,auStack_408);
            uVar5 = (uint)bVar2;
            goto LAB_00004a38;
          }
          goto LAB_00004960;
        }
      }
LAB_00004964:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar3);
    if (param_4 == (int *)0x0) goto LAB_00004980;
  }
  else {
    iVar7 = *param_4;
    uVar3 = FUN_000035b0(param_1,param_2);
    if (uVar3 != 0) goto LAB_0000492c;
  }
  *param_4 = iVar7;
LAB_00004980:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(uVar5);
  }
  return;
}
