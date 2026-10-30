
void FUN_00012000(undefined8 param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,ulong param_8,char *param_9,uint param_10)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulong uStack_18;
  long local_8;
  
  piVar2 = DAT_0002a860;
  piVar1 = (int *)0x2a810;
  if (DAT_0002a860 != (int *)0x0) {
    piVar1 = DAT_0002a860;
  }
  local_8 = *(long *)PTR_DAT_00029e38;
  if (*piVar1 != 0) goto LAB_000122c8;
  puVar3 = (uint *)thunk_FUN_000027d0();
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_58 = param_8 & 0xffffffff;
  local_20 = CONCAT44(param_5 & 0xffff | param_4 << 0x10 | param_3 << 0x18,param_5);
  uStack_18 = (ulong)*puVar3;
  if (param_9 != (char *)0x0) {
    if (param_10 == 0) {
      if (*param_9 != '\0') {
        lVar4 = 0;
        do {
          lVar4 = lVar4 + 1;
        } while (param_9[lVar4] != '\0');
        param_10 = (uint)lVar4;
        goto LAB_000120f0;
      }
LAB_000122f4:
      uVar7 = (ulong)param_10;
      if (param_10 != 0) {
        uVar8 = uVar7;
        if (uVar7 == 0) {
          uVar8 = 1;
        }
        lVar4 = (uVar8 - 0x10 >> 4) + 1;
        uVar6 = lVar4 * 0x10;
        if (0xf < uVar7) {
          uStack_48 = *(undefined8 *)(param_9 + 8);
          local_50 = *(undefined8 *)param_9;
          if (lVar4 != 1) goto LAB_00012118;
          goto LAB_00012140;
        }
        uVar6 = 0;
        pcVar5 = (char *)&local_50;
        goto LAB_00012154;
      }
    }
    else {
LAB_000120f0:
      if (param_10 < 0x24) goto LAB_000122f4;
      uVar8 = 0x24;
      uVar6 = 0x20;
      uStack_48 = *(undefined8 *)(param_9 + 8);
      local_50 = *(undefined8 *)param_9;
      uVar7 = 0x24;
      lVar4 = 2;
LAB_00012118:
      uStack_38 = *(undefined8 *)(param_9 + 0x18);
      local_40 = *(undefined8 *)(param_9 + 0x10);
      if (lVar4 != 2) {
        uStack_28 = *(undefined8 *)(param_9 + 0x28);
        local_30 = *(undefined8 *)(param_9 + 0x20);
      }
LAB_00012140:
      param_9 = param_9 + uVar6;
      pcVar5 = (char *)((long)&local_50 + uVar6);
      if (uVar6 != uVar8) {
LAB_00012154:
        *pcVar5 = *param_9;
        if (((((uVar6 + 1 < uVar7) && (pcVar5[1] = param_9[1], uVar6 + 2 < uVar7)) &&
             (pcVar5[2] = param_9[2], uVar6 + 3 < uVar7)) &&
            ((((pcVar5[3] = param_9[3], uVar6 + 4 < uVar7 &&
               (pcVar5[4] = param_9[4], uVar6 + 5 < uVar7)) &&
              ((pcVar5[5] = param_9[5], uVar6 + 6 < uVar7 &&
               ((pcVar5[6] = param_9[6], uVar6 + 7 < uVar7 &&
                (pcVar5[7] = param_9[7], uVar6 + 8 < uVar7)))))) &&
             (pcVar5[8] = param_9[8], uVar6 + 9 < uVar7)))) &&
           ((((pcVar5[9] = param_9[9], uVar6 + 10 < uVar7 &&
              (pcVar5[10] = param_9[10], uVar6 + 0xb < uVar7)) &&
             (pcVar5[0xb] = param_9[0xb], uVar6 + 0xc < uVar7)) &&
            ((pcVar5[0xc] = param_9[0xc], uVar6 + 0xd < uVar7 &&
             (pcVar5[0xd] = param_9[0xd], uVar6 + 0xe < uVar7)))))) {
          pcVar5[0xe] = param_9[0xe];
        }
      }
    }
  }
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x2a810;
  }
  *(ulong *)(piVar2 + 2) = local_58;
  *(ulong *)piVar2 = CONCAT44(param_7,param_6);
  *(undefined8 *)(piVar2 + 6) = uStack_48;
  *(undefined8 *)(piVar2 + 4) = local_50;
  *(undefined8 *)(piVar2 + 10) = uStack_38;
  *(undefined8 *)(piVar2 + 8) = local_40;
  *(undefined8 *)(piVar2 + 0xe) = uStack_28;
  *(undefined8 *)(piVar2 + 0xc) = local_30;
  *(ulong *)(piVar2 + 0x12) = uStack_18;
  *(undefined8 *)(piVar2 + 0x10) = local_20;
LAB_000122c8:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(0);
  }
  return;
}
