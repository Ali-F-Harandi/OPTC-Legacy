
long FUN_0000c3a8(byte *param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  
  if ((param_2 != (uint *)0x0) && (uVar2 = *param_2, uVar2 != 0)) {
    bVar4 = *param_1;
    lVar7 = 8;
    uVar10 = (ulong)uVar2;
    if (bVar4 != 0) {
      uVar6 = 0;
      pbVar9 = param_1;
      do {
        uVar1 = uVar6 * 0x10 + (ulong)bVar4;
        uVar8 = uVar1 & 0xf0000000;
        pbVar9 = pbVar9 + 1;
        bVar4 = *pbVar9;
        uVar6 = uVar1 ^ uVar8 >> 0x18;
        if (uVar8 == 0) {
          uVar6 = uVar1;
        }
        uVar6 = uVar6 & (uVar8 ^ 0xffffffffffffffff);
      } while (bVar4 != 0);
      uVar1 = 0;
      if (uVar10 != 0) {
        uVar1 = uVar6 / uVar10;
      }
      lVar7 = (uVar6 - uVar1 * uVar10) * 4 + 8;
    }
    for (uVar3 = *(uint *)((long)param_2 + lVar7); uVar3 != 0;
        uVar3 = param_2[(ulong)uVar3 + (ulong)uVar2 + 2]) {
      lVar7 = param_3 + (ulong)uVar3 * 0x18;
      if ((((((int)(uint)*(byte *)(lVar7 + 4) >> 4) - 1U < 2) && (*(short *)(lVar7 + 6) != 0)) &&
          (uVar10 = (ulong)*(uint *)(param_3 + (ulong)uVar3 * 0x18), uVar10 <= param_5)) &&
         (iVar5 = FUN_00010b64(param_4 + uVar10,param_1), iVar5 == 0)) {
        return lVar7;
      }
    }
  }
  return 0;
}
