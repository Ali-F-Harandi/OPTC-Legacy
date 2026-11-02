
undefined8 FUN_00007928(uint param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (int)(param_3 >> 2);
  if (0 < iVar1) {
    lVar3 = 0;
    uVar5 = 0xe34eac63;
    uVar4 = 0x7b48238;
    do {
      uVar2 = (uint)lVar3;
      uVar5 = param_1 + 0x72f6fcbe + (uVar5 + 0x4f8b1bca) * uVar5 >> (ulong)(uVar2 * uVar2 & 0xf);
      uVar4 = param_1 + 0x8e495673 + (uVar4 + 0xe9fa57e4) * uVar4 << (ulong)(uVar2 & 7);
      param_1 = uVar5 ^ uVar4;
      *(uint *)(param_2 + lVar3 * 4) =
           (*(int *)(param_2 + lVar3 * 4) + (uVar2 & 0xd) * -0x4bc46451 ^ (uVar2 & 3) * -0x50a80805)
           - param_1 ^ param_1;
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < iVar1);
  }
  return 1;
}
