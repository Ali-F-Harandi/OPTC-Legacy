
undefined8 FUN_000030c0(int *param_1,int param_2,long param_3,long param_4,undefined8 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  
  iVar5 = 1;
  puVar6 = (undefined8 *)(param_3 + 0x30);
  lVar7 = 0;
  do {
    while (param_2 == 0) {
LAB_00003128:
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 4;
      if (iVar5 == 9) goto LAB_00003138;
    }
    iVar1 = *param_1;
    piVar4 = param_1;
    while (iVar5 != iVar1) {
      if (piVar4 == param_1 + (ulong)(param_2 - 1) * 2) goto LAB_00003128;
      piVar4 = piVar4 + 2;
      iVar1 = *piVar4;
    }
    if (param_4 != 0) {
      FUN_0000ab28(param_4 + lVar7,puVar6[-1],*puVar6);
      puVar6[1] = param_4 + lVar7;
    }
    uVar2 = *puVar6;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 4;
    lVar3 = FUN_0000b630(uVar2,0x10,1);
    lVar7 = lVar7 + lVar3;
  } while (iVar5 != 9);
LAB_00003138:
  uVar2 = FUN_0000b630(lVar7,0x1000,1);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = uVar2;
  }
  return 1;
}
