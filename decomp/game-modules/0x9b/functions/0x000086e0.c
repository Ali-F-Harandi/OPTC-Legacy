
/* WARNING: Removing unreachable block (ram,0x00008780) */

uint FUN_000086e0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 0x94511dd2;
  uVar6 = 0;
  do {
    uVar1 = uVar5 & 1;
    uVar3 = param_1 << 1;
    uVar5 = uVar5 >> 1;
    uVar2 = uVar6 ^ param_1;
    if (uVar1 == 0) {
      uVar2 = uVar6;
    }
    bVar4 = -1 < (int)param_1;
    param_1 = uVar3 ^ 0x579357eb;
    if (bVar4) {
      param_1 = uVar3;
    }
    uVar6 = uVar2;
  } while (uVar5 != 0);
  return uVar2;
}
