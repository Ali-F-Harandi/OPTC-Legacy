
long FUN_00005740(long param_1,long param_2)

{
  long lVar1;
  short sVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 != 0) {
    lVar6 = 0;
    lVar5 = 0;
    lVar1 = param_1;
    do {
      lVar3 = (lVar1 + 0x14) - param_1;
      lVar4 = lVar1 + (ulong)*(uint *)(lVar1 + 0xc);
      if (lVar5 < lVar3) {
        lVar5 = lVar3;
      }
      if (*(short *)(lVar1 + 6) != 0) {
        sVar2 = 0;
        do {
          sVar2 = sVar2 + 1;
          lVar3 = (lVar4 + 8) - param_1;
          if (lVar5 < lVar3) {
            lVar5 = lVar3;
          }
          lVar4 = lVar4 + (ulong)*(uint *)(lVar4 + 4);
        } while (sVar2 != *(short *)(lVar1 + 6));
      }
      lVar6 = lVar6 + 1;
      lVar1 = lVar1 + (ulong)*(uint *)(lVar1 + 0x10);
    } while (lVar6 != param_2);
    return lVar5;
  }
  return 0;
}
