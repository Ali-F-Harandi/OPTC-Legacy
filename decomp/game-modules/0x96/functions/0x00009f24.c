
long FUN_00009f24(long param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar6;
  
  if (param_2 == (byte *)0x0) {
    uVar7 = 0;
    uVar10 = uVar7;
  }
  else if (*param_2 == 0) {
    uVar7 = 0;
    uVar10 = (uint)*param_2;
  }
  else {
    lVar4 = 0;
    do {
      lVar4 = lVar4 + 1;
    } while (param_2[lVar4] != 0);
    uVar10 = (uint)lVar4;
    uVar7 = uVar10;
    if (uVar10 != 0) {
      uVar7 = 0;
      pbVar6 = param_2;
      do {
        pbVar5 = pbVar6 + 1;
        uVar7 = (uint)*pbVar6 + uVar7 * 0x1f;
        pbVar6 = pbVar5;
      } while (pbVar5 != param_2 + (ulong)(uVar10 - 1) + 1);
    }
  }
  lVar9 = *(long *)(param_1 + 0x38);
  uVar1 = *(int *)(param_1 + 0x34) - 1;
  uVar7 = uVar7 & uVar1;
  uVar8 = (ulong)uVar7;
  uVar3 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4;
  lVar4 = *(long *)(lVar9 + uVar3);
  if (lVar4 != 0) {
    do {
      if ((*(ushort *)(lVar9 + uVar3 + 8) == uVar10) &&
         (iVar2 = thunk_FUN_00010a7c(lVar4,param_2,(long)(int)uVar10), iVar2 == 0)) {
        return (long)((int)uVar8 + 10000);
      }
      uVar7 = (int)uVar8 + 1U & uVar1;
      uVar8 = (ulong)uVar7;
      uVar3 = -(ulong)(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar8 << 4;
      lVar4 = *(long *)(lVar9 + uVar3);
    } while (lVar4 != 0);
  }
  return lVar4;
}
