
void FUN_000031b4(long param_1)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  long local_30;
  ulong local_28;
  long local_20;
  ulong local_18;
  ulong local_10;
  long local_8;
  
  local_30 = 0;
  local_28 = 0;
  local_8 = *(long *)PTR_DAT_0001fe30;
  cVar3 = FUN_00003890(&local_30,&local_28,0);
  uVar10 = local_28;
  lVar1 = local_30;
  if (cVar3 == '\0') {
    local_20 = 0;
    local_18 = 0;
  }
  else {
    if (local_30 == 0) goto LAB_000032d8;
    local_20 = 0;
    cVar3 = FUN_000033a4();
    local_18 = 0;
    if (cVar3 != '\0') {
      uVar10 = uVar10 >> 3;
      cVar3 = FUN_000030c0(lVar1,uVar10 & 0xffffffff,local_20,0,&local_18);
      uVar2 = local_18;
      if (cVar3 != '\0') {
        if (local_18 != 0) {
          lVar7 = FUN_0000a0cc(local_18);
          if (lVar7 == 0) {
            uVar6 = FUN_00003888();
            cVar4 = FUN_0000baa8(0,0,uVar6,0x11,0x77,1,1,uVar2 & 0xffffffff,0,0);
            if (cVar4 == '\0') goto LAB_00003314;
          }
          local_10 = local_18;
          cVar4 = FUN_000030c0(lVar1,uVar10 & 0xffffffff,local_20,lVar7);
          uVar2 = local_18;
          if (cVar4 == '\0') goto LAB_00003314;
          iVar5 = thunk_FUN_000021f0(lVar7,local_18,5);
          if (iVar5 != 0) {
            uVar6 = FUN_00003888();
            cVar4 = FUN_0000baa8(0,0,uVar6,0x11,0x89,1,1,uVar2 & 0xffffffff,0,0);
            if (cVar4 == '\0') {
              FUN_00003944();
              cVar3 = '\0';
              goto LAB_000032d8;
            }
          }
          if ((int)uVar10 != 0) {
            puVar8 = (uint *)(lVar1 + 4);
            do {
              puVar9 = puVar8 + 2;
              *(undefined8 *)(param_1 + (ulong)*puVar8) =
                   *(undefined8 *)(local_20 + (ulong)puVar8[-1] * 0x20 + 0x18);
              puVar8 = puVar9;
            } while (puVar9 != (uint *)(lVar1 + (ulong)((int)uVar10 - 1) * 8 + 0xc));
          }
        }
        FUN_00003944();
        goto LAB_000032d8;
      }
    }
  }
LAB_00003314:
  cVar3 = '\0';
  FUN_00003944();
LAB_000032d8:
  if (local_8 != *(long *)PTR_DAT_0001fe30) {
                    /* WARNING: Subroutine does not return */
    FUN_0000bf54(cVar3);
  }
  return;
}
