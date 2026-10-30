// M3d: findVolumeIndexByName @ 0x1ef1784 (Ghidra decompile, true address)
#

int m3d_1ef1784(byte *param_1,long param_2)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  
  iVar2 = *(int *)(param_2 + 0x4b0);
  if (iVar2 != 0) {
    uVar7 = *(ulong *)(param_1 + 8);
    pbVar1 = *(byte **)(param_1 + 0x10);
    lVar10 = *(long *)(param_2 + 0x4a0);
    iVar5 = 0;
    lVar4 = lVar10;
    iVar8 = iVar5;
    if ((*param_1 & 1) == 0) {
      pbVar1 = param_1 + 1;
      uVar7 = (ulong)(*param_1 >> 1);
    }
    do {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        lVar4 = *(long *)(lVar4 + 0x10);
      }
      uVar9 = *(undefined8 *)(*(long *)(lVar4 + 8) + 0x250);
      uVar6 = func_0x03f0b2d0(uVar9);
      if (uVar6 == uVar7) {
        if (uVar7 == 0xffffffffffffffff) {
          func_0x01a8c860(param_1);
          auVar11 = func_0x01a79244();
          uVar7 = func_0x03f21a20(auVar11._0_8_ + 8);
          if ((uVar7 & 0xffffffff) <= auVar11._8_8_) {
            return 0;
          }
                    /* WARNING: Does not return */
          pcVar3 = (code *)UndefinedInstructionException(0,0x3f21a30);
          (*pcVar3)();
        }
        iVar5 = func_0x03f0b3f0(pbVar1,uVar9,uVar7);
        if (iVar5 == 0) {
          return iVar8;
        }
      }
      iVar5 = iVar8 + 1;
      lVar4 = lVar10;
      iVar8 = iVar5;
    } while (iVar5 != iVar2);
  }
  return -1;
}


