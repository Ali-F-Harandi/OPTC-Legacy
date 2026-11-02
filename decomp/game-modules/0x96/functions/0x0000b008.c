
long FUN_0000b008(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  short sVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar7 = 0;
  lVar6 = 0;
  lVar3 = param_1;
  do {
    lVar5 = (lVar3 + 0x10) - param_1;
    lVar1 = lVar3 + (ulong)*(uint *)(lVar3 + 8);
    if (lVar6 < lVar5) {
      lVar6 = lVar5;
    }
    if (*(short *)(lVar3 + 2) != 0) {
      uVar2 = *(uint *)(lVar1 + 0xc);
      lVar5 = (lVar1 + 0x10) - param_1;
      sVar4 = 0;
      if (lVar6 < lVar5) {
        lVar6 = lVar5;
      }
      while (uVar2 != 0) {
        sVar4 = sVar4 + 1;
        lVar1 = lVar1 + (ulong)uVar2;
        lVar5 = (lVar1 + 0x10) - param_1;
        if (sVar4 == *(short *)(lVar3 + 2)) break;
        uVar2 = *(uint *)(lVar1 + 0xc);
        if (lVar6 < lVar5) {
          lVar6 = lVar5;
        }
      }
    }
    if (*(uint *)(lVar3 + 0xc) == 0) {
      return lVar6;
    }
    lVar7 = lVar7 + 1;
    lVar3 = lVar3 + (ulong)*(uint *)(lVar3 + 0xc);
    if (lVar7 == param_2) {
      return lVar6;
    }
  } while( true );
}
