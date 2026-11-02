
long FUN_0000c4d0(byte *param_1,uint *param_2,long param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  uint uVar11;
  
  if (param_2 != (uint *)0x0) {
    uVar11 = param_2[2];
    uVar8 = (ulong)*param_2;
    uVar1 = (ulong)uVar11;
    if ((uVar11 - 1 & uVar11) == 0) {
      uVar6 = (uint)*param_1;
      if (*param_1 == 0) {
        uVar6 = 5;
        uVar4 = 0x54;
        uVar7 = 0x1505;
      }
      else {
        uVar7 = 0x1505;
        pbVar10 = param_1;
        do {
          uVar7 = uVar6 + uVar7 * 0x21;
          pbVar10 = pbVar10 + 1;
          uVar6 = (uint)*pbVar10;
        } while (uVar6 != 0);
        uVar6 = uVar7 & 0x3f;
        uVar4 = uVar7 >> 6;
      }
      if ((*(ulong *)(param_2 + (ulong)(uVar4 & uVar11 - 1) * 2 + 4) >> uVar6 &
           *(ulong *)(param_2 + (ulong)(uVar4 & uVar11 - 1) * 2 + 4) >>
           (uVar7 >> (ulong)(param_2[3] & 0x1f) & 0x3f) & 1) != 0) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar7 / uVar8;
        }
        uVar11 = param_2[uVar1 * 2 + ((ulong)uVar7 - uVar5 * uVar8) + 4];
        if (uVar11 != 0) {
          lVar9 = uVar8 - param_2[1];
          do {
            uVar8 = (ulong)uVar11;
            lVar2 = param_3 + uVar8 * 0x18;
            if (((((int)(uint)*(byte *)(lVar2 + 4) >> 4) - 1U < 2) && (*(short *)(lVar2 + 6) != 0))
               && (uVar5 = (ulong)*(uint *)(param_3 + uVar8 * 0x18), uVar5 <= param_5)) {
              uVar6 = param_2[uVar1 * 2 + lVar9 + uVar8 + 4];
              if ((uVar6 ^ uVar7) >> 1 == 0) {
                iVar3 = FUN_00010b64(param_4 + uVar5,param_1);
                if (((iVar3 == 0) && (((int)(uint)*(byte *)(lVar2 + 4) >> 4) - 1U < 2)) &&
                   (*(short *)(lVar2 + 6) != 0)) {
                  return lVar2;
                }
                uVar6 = param_2[uVar1 * 2 + lVar9 + uVar8 + 4];
              }
            }
            else {
              uVar6 = param_2[uVar1 * 2 + lVar9 + uVar8 + 4];
            }
            uVar11 = uVar11 + 1;
          } while ((uVar6 & 1) == 0);
        }
      }
    }
  }
  return 0;
}
