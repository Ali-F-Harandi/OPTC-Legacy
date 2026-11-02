// M3d: volumeAcquire_39def6c @ 0x39def6c (Ghidra decompile, true address)
#

undefined8 m3d_39def6c(long param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x58) != '\0') {
    if (*(uint *)(param_1 + 0x4b0) <= param_3) {
      return 0xa0000002;
    }
    do {
      if ((param_4 >> 2 & 1) == 0) {
        if ((param_4 >> 1 & 1) == 0) {
          plVar8 = *(long **)(param_1 + 0x10);
          if (plVar8 == (long *)0x0) {
            return 0xa0000001;
          }
          plVar2 = (long *)func_0x03f0b2e0(0x28);
          lVar7 = lRam00000000041b6230;
          *(undefined4 *)(plVar2 + 2) = 0;
          plVar2[3] = (long)plVar8;
          plVar2[4] = 0;
          *plVar2 = lVar7 + 0x10;
          lVar7 = *plVar8;
          plVar2[1] = -0x8000000000000000;
          (**(code **)(lVar7 + 0x80))(plVar8);
          if (param_3 < *(uint *)(param_1 + 0x4b0)) {
            lVar5 = *(long *)(param_1 + 0x4a0);
            lVar7 = lVar5;
            uVar6 = param_3;
            if ((int)param_3 < 1) {
              lVar7 = *(long *)(lVar5 + 8);
              iVar9 = *(int *)(lVar7 + 0x268);
            }
            else {
              do {
                plVar1 = (long *)(lVar7 + 0x10);
                uVar6 = uVar6 - 1;
                lVar7 = *plVar1;
              } while (uVar6 != 0);
              iVar9 = *(int *)(*(long *)(*plVar1 + 8) + 0x268);
              uVar6 = param_3;
              do {
                lVar5 = *(long *)(lVar5 + 0x10);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              lVar7 = *(long *)(lVar5 + 8);
            }
            iVar10 = *(int *)(lVar7 + 0x26c);
          }
          else {
            iVar9 = 0;
            iVar10 = 0;
          }
          lVar7 = (**(code **)(*plVar8 + 0x30))(plVar8,(long)iVar9,0);
          uVar3 = 0;
          plVar2[4] = lVar7;
          if (((param_4 >> 0xf & 1) == 0) && (param_3 < *(uint *)(param_1 + 0x4b0))) {
            lVar7 = *(long *)(param_1 + 0x4a0);
            if (0 < (int)param_3) {
              do {
                lVar7 = *(long *)(lVar7 + 0x10);
                param_3 = param_3 - 1;
              } while (param_3 != 0);
            }
            uVar3 = *(undefined4 *)(*(long *)(lVar7 + 8) + 0x270);
          }
          uVar4 = func_0x03fa2b60(plVar2,iVar9,iVar10 + iVar9,uVar3);
        }
        else {
          plVar8 = (long *)func_0x03f2cc80((char *)(param_1 + 0x58),0x40000000);
          if (plVar8 == (long *)0x0) {
            return 0xa0000001;
          }
          if (param_3 < *(uint *)(param_1 + 0x4b0)) {
            lVar5 = *(long *)(param_1 + 0x4a0);
            lVar7 = lVar5;
            uVar6 = param_3;
            if ((int)param_3 < 1) {
              lVar7 = *(long *)(lVar5 + 8);
              iVar9 = *(int *)(lVar7 + 0x268);
            }
            else {
              do {
                plVar2 = (long *)(lVar7 + 0x10);
                uVar6 = uVar6 - 1;
                lVar7 = *plVar2;
              } while (uVar6 != 0);
              iVar9 = *(int *)(*(long *)(*plVar2 + 8) + 0x268);
              uVar6 = param_3;
              do {
                lVar5 = *(long *)(lVar5 + 0x10);
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
              lVar7 = *(long *)(lVar5 + 8);
            }
            iVar10 = *(int *)(lVar7 + 0x26c);
          }
          else {
            iVar9 = 0;
            iVar10 = 0;
          }
          (**(code **)(*plVar8 + 0x30))(plVar8,(long)iVar9,0);
          uVar3 = 0;
          if (((param_4 >> 0xf & 1) == 0) && (param_3 < *(uint *)(param_1 + 0x4b0))) {
            lVar7 = *(long *)(param_1 + 0x4a0);
            if (0 < (int)param_3) {
              do {
                lVar7 = *(long *)(lVar7 + 0x10);
                param_3 = param_3 - 1;
              } while (param_3 != 0);
            }
            uVar3 = *(undefined4 *)(*(long *)(lVar7 + 8) + 0x270);
          }
          uVar4 = func_0x03fa2b60(plVar8,iVar9,iVar10 + iVar9,uVar3);
        }
        goto code_r0x039defd8;
      }
      lVar7 = *(long *)(param_1 + 0x10);
      *param_2 = 0;
      uVar6 = 0;
      if (lVar7 == 0) {
        uVar6 = 2;
      }
      param_4 = uVar6 | param_4 & 0xfffffffb;
    } while (*(char *)(param_1 + 0x58) != '\0');
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
code_r0x039defd8:
  *param_2 = uVar4;
  return 0;
}


