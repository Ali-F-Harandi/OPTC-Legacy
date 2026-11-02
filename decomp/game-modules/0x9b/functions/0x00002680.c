
undefined8 FUN_00002680(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    lVar6 = (long)param_2 + (ulong)param_2[3];
    uVar2 = param_2[2];
    lVar8 = *(long *)(param_1 + 0xa8);
    lVar9 = *(long *)(param_1 + 0xb8);
    if (uVar1 != 0) {
      lVar5 = 0;
      lVar7 = (long)param_2 + (ulong)param_2[1];
      do {
        while( true ) {
          lVar4 = lVar5 * 4;
          lVar5 = lVar5 + 1;
          lVar4 = (ulong)*(uint *)((long)param_2 + lVar4 + (ulong)uVar2) * 0x18;
          FUN_0000ab28(lVar8 + lVar4,lVar7);
          uVar3 = (ulong)*(uint *)(lVar8 + lVar4);
          if (*(char *)(lVar9 + uVar3) != '\0') break;
          FUN_0000b05c(lVar9 + uVar3,lVar6);
          lVar4 = FUN_0000abf8(lVar6);
          lVar6 = lVar6 + lVar4 + 1;
          lVar7 = lVar7 + 0x18;
          if (uVar1 <= (uint)lVar5) {
            return 1;
          }
        }
        lVar4 = FUN_0000abf8(lVar6);
        lVar6 = lVar6 + lVar4 + 1;
        lVar7 = lVar7 + 0x18;
      } while ((uint)lVar5 < uVar1);
    }
  }
  return 1;
}
