
int FUN_000083d8(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = (int)param_3;
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      pbVar1 = (byte *)(param_1 + lVar3);
      pbVar2 = (byte *)(param_2 + lVar3);
      lVar3 = lVar3 + 1;
      uVar4 = (uint)*pbVar1;
      uVar5 = (uint)*pbVar2;
      uVar6 = uVar4;
      if ((uVar4 - 0x61 & 0xff) < 0x1a) {
        uVar6 = uVar4 - 0x20 & 0xff;
      }
      uVar8 = uVar5;
      if ((uVar5 - 0x61 & 0xff) < 0x1a) {
        uVar8 = uVar5 - 0x20 & 0xff;
      }
      iVar7 = uVar6 - uVar8;
    } while ((((iVar7 == 0) && (uVar4 != 0)) && (uVar5 != 0)) && (lVar3 != param_3));
  }
  return iVar7;
}
