
undefined8 FUN_00004400(long *param_1,ulong param_2,char param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = (uint)param_2 & 7;
  lVar3 = *param_1;
  lVar2 = (long)(int)(param_2 >> 3);
  if (param_3 == '\0') {
    *(byte *)(lVar3 + lVar2) = *(byte *)(lVar3 + lVar2) & ((byte)(1 << (ulong)uVar1) ^ 0xff);
    return 1;
  }
  *(byte *)(lVar3 + lVar2) = (byte)(1 << (ulong)uVar1) | *(byte *)(lVar3 + lVar2);
  return 1;
}
