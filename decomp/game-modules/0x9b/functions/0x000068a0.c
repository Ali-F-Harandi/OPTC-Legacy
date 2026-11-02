
undefined8 FUN_000068a0(long param_1,short param_2,undefined8 param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = *(long *)(param_1 + 0xe8);
  lVar5 = *(long *)(param_1 + 0xe0);
  lVar6 = *(long *)(param_1 + 0xb8);
  if (lVar9 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar8 = 0;
    uVar3 = 0xffffffff;
    do {
      if (*(short *)(lVar5 + 4) == param_2) {
        uVar2 = *(ushort *)(lVar5 + 6);
        puVar4 = (uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 0xc));
        if ((ulong)uVar2 != 0) {
          uVar1 = *(uint *)(lVar5 + (ulong)*(uint *)(lVar5 + 0xc));
          uVar7 = 0;
          while( true ) {
            uVar7 = uVar7 + 1;
            uVar3 = FUN_0000ac88(lVar6 + (ulong)uVar1,param_3);
            if ((int)uVar3 == 0) {
              return uVar3;
            }
            puVar4 = (uint *)((long)puVar4 + (ulong)puVar4[1]);
            if (uVar2 == uVar7) break;
            uVar1 = *puVar4;
          }
        }
      }
      lVar8 = lVar8 + 1;
      lVar5 = lVar5 + (ulong)*(uint *)(lVar5 + 0x10);
    } while (lVar8 != lVar9);
  }
  return uVar3;
}
