
undefined8 FUN_00004534(long param_1,int param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  
  puVar7 = *(ulong **)(param_1 + 0x30);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x38);
  if (0 < iVar6) {
    puVar2 = puVar7 + ((ulong)(iVar6 - 1) + 1) * 7;
    do {
      while ((*puVar7 & 0x1ffffffff) == 0x100000001) {
        puVar1 = puVar7 + 2;
        uVar8 = puVar7[5];
        puVar7 = puVar7 + 7;
        lVar3 = *(long *)(param_1 + 0x20) + *puVar1;
        uVar4 = FUN_000117d4(lVar3,(long)param_2,0);
        uVar5 = FUN_000117d4(lVar3 + uVar8,(long)param_2,1);
        FUN_00004454(uVar4,uVar5);
        if (puVar7 == puVar2) {
          return 1;
        }
      }
      puVar7 = puVar7 + 7;
    } while (puVar7 != puVar2);
  }
  return 1;
}
