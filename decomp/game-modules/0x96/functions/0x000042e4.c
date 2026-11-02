
undefined8 FUN_000042e4(long param_1,int param_2,int param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  code *pcVar3;
  int iVar4;
  ulong *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  iVar4 = (int)*(undefined8 *)(param_1 + 0x60);
  if (0 < iVar4) {
    lVar9 = 0;
    uVar6 = 0;
    puVar2 = (ulong *)(*(long *)(param_1 + 0x58) + (ulong)(iVar4 - 1) * 0x10 + 0x18);
    puVar5 = (ulong *)(*(long *)(param_1 + 0x58) + 8);
    do {
      while( true ) {
        puVar1 = puVar5 + 2;
        iVar4 = (int)puVar5[-1];
        uVar7 = (uint)*puVar5;
        if (iVar4 != param_2) break;
        if (param_3 == iVar4) {
          uVar6 = uVar7;
        }
        lVar9 = *(long *)(param_1 + 0x20) + (*puVar5 & 0xffffffff);
        puVar5 = puVar1;
        if (puVar1 == puVar2) goto LAB_00004360;
      }
      if (param_3 == iVar4) {
        uVar6 = uVar7;
      }
      puVar5 = puVar1;
    } while (puVar1 != puVar2);
LAB_00004360:
    if (uVar6 >> 3 != 0) {
      lVar8 = 0;
      do {
        pcVar3 = *(code **)(lVar9 + lVar8 * 8);
        lVar8 = lVar8 + 1;
        if ((pcVar3 != Reset) && (lVar9 != -1)) {
          (*pcVar3)();
        }
      } while ((int)lVar8 < (int)(uVar6 >> 3));
    }
  }
  return 1;
}
