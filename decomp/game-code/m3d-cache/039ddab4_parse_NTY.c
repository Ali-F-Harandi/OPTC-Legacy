// M3d: parse_NTY @ 0x39ddab4 (Ghidra decompile, true address)
#

void m3d_39ddab4(long param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar12 = tpidr_el0;
  lStack_68 = *(long *)(lVar12 + 0x28);
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x48e) = 0;
  *(undefined8 *)(param_1 + 0x486) = 0;
  *(undefined8 *)(param_1 + 0x46f) = 0;
  *(undefined8 *)(param_1 + 0x467) = 0;
  *(undefined8 *)(param_1 + 0x47f) = 0;
  *(undefined8 *)(param_1 + 0x477) = 0;
  *(undefined8 *)(param_1 + 0x45f) = 0;
  *(undefined8 *)(param_1 + 0x457) = 0;
  lVar14 = *param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 **)(param_1 + 0x18) = (undefined8 *)(param_1 + 0x48);
  *(long **)(param_1 + 8) = param_2;
  lVar14 = (**(code **)(lVar14 + 0x18))(param_2,(undefined8 *)(param_1 + 0x34),2);
  uVar5 = 0;
  if (lVar14 != 2) goto code_r0x039ddf70;
  lVar14 = **(long **)(param_1 + 8);
  *(ushort *)(param_1 + 0x34) =
       *(ushort *)(param_1 + 0x34) >> 8 | (ushort)((*(ushort *)(param_1 + 0x34) & 0xff00ff) << 8);
  lVar14 = (**(code **)(lVar14 + 0x18))(*(long **)(param_1 + 8),param_1 + 0x36,2);
  if (lVar14 == 2) {
    lVar14 = **(long **)(param_1 + 8);
    *(ushort *)(param_1 + 0x36) =
         *(ushort *)(param_1 + 0x36) >> 8 | (ushort)((*(ushort *)(param_1 + 0x36) & 0xff00ff) << 8);
    lVar14 = (**(code **)(lVar14 + 0x18))(*(long **)(param_1 + 8),param_1 + 0x38,4);
    if (lVar14 == 4) {
      uVar5 = (*(uint *)(param_1 + 0x38) & 0xff00ff00) >> 8 |
              (*(uint *)(param_1 + 0x38) & 0xff00ff) << 8;
      lVar14 = **(long **)(param_1 + 8);
      *(uint *)(param_1 + 0x38) = uVar5 >> 0x10 | uVar5 << 0x10;
      lVar14 = (**(code **)(lVar14 + 0x18))(*(long **)(param_1 + 8),param_1 + 0x3c,2);
      if (lVar14 == 2) {
        lVar14 = **(long **)(param_1 + 8);
        *(ushort *)(param_1 + 0x3c) =
             *(ushort *)(param_1 + 0x3c) >> 8 |
             (ushort)((*(ushort *)(param_1 + 0x3c) & 0xff00ff) << 8);
        lVar14 = (**(code **)(lVar14 + 0x18))(*(long **)(param_1 + 8),param_1 + 0x40,4);
        if (lVar14 == 4) {
          uVar2 = *(undefined4 *)(param_1 + 0x38);
          uVar5 = (*(uint *)(param_1 + 0x40) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_1 + 0x40) & 0xff00ff) << 8;
          *(uint *)(param_1 + 0x40) = uVar5 >> 0x10 | uVar5 << 0x10;
          plVar6 = (long *)func_0x03f0b2e0(0x290);
          lVar14 = lRam00000000041b6208;
          plVar6[0x44] = 0;
          plVar6[0x46] = 0;
          plVar6[0x45] = 0;
          *plVar6 = lVar14 + 0x10;
          puVar7 = (undefined8 *)func_0x03f0b2e0(0x10);
          *puVar7 = 0;
          puVar7[1] = plVar6 + 0x43;
          plVar6[0x47] = (long)puVar7;
          *(undefined4 *)(plVar6 + 0x4e) = 0;
          plVar6[2] = 0;
          plVar6[1] = 0;
          plVar6[0x22] = 0;
          plVar6[0x21] = 0;
          plVar6[0x24] = 0;
          plVar6[0x23] = 0;
          plVar6[0x26] = 0;
          plVar6[0x25] = 0;
          plVar6[0x28] = 0;
          plVar6[0x27] = 0;
          plVar6[0x2a] = 0;
          plVar6[0x29] = 0;
          plVar6[0x2c] = 0;
          plVar6[0x2b] = 0;
          plVar6[0x2e] = 0;
          plVar6[0x2d] = 0;
          plVar6[0x30] = 0;
          plVar6[0x2f] = 0;
          plVar6[0x32] = 0;
          plVar6[0x31] = 0;
          plVar6[0x34] = 0;
          plVar6[0x33] = 0;
          plVar6[0x36] = 0;
          plVar6[0x35] = 0;
          plVar6[0x38] = 0;
          plVar6[0x37] = 0;
          plVar6[0x3a] = 0;
          plVar6[0x39] = 0;
          plVar6[0x3c] = 0;
          plVar6[0x3b] = 0;
          plVar6[0x3e] = 0;
          plVar6[0x3d] = 0;
          *(undefined8 *)((long)plVar6 + 0x1ff) = 0;
          *(undefined8 *)((long)plVar6 + 0x1f7) = 0;
          plVar6[0x49] = 0;
          plVar6[0x48] = 0;
          plVar6[0x4b] = 0;
          plVar6[0x4a] = 0;
          plVar6[0x4d] = 0;
          plVar6[0x4c] = 0;
          plVar6[0x41] = 0xffffffff;
          plVar6[0x42] = 0;
          plVar6[4] = 0;
          plVar6[3] = 0;
          plVar6[6] = 0;
          plVar6[5] = 0;
          plVar6[8] = 0;
          plVar6[7] = 0;
          plVar6[10] = 0;
          plVar6[9] = 0;
          plVar6[0xc] = 0;
          plVar6[0xb] = 0;
          plVar6[0xe] = 0;
          plVar6[0xd] = 0;
          plVar6[0x10] = 0;
          plVar6[0xf] = 0;
          plVar6[0x12] = 0;
          plVar6[0x11] = 0;
          plVar6[0x14] = 0;
          plVar6[0x13] = 0;
          plVar6[0x16] = 0;
          plVar6[0x15] = 0;
          plVar6[0x18] = 0;
          plVar6[0x17] = 0;
          plVar6[0x1a] = 0;
          plVar6[0x19] = 0;
          plVar6[0x1c] = 0;
          plVar6[0x1b] = 0;
          plVar6[0x1e] = 0;
          plVar6[0x1d] = 0;
          plVar6[0x20] = 0;
          plVar6[0x1f] = 0;
          *(undefined8 *)((long)plVar6 + 0x284) = 0;
          *(undefined8 *)((long)plVar6 + 0x27c) = 0;
          *(undefined8 *)((long)plVar6 + 0x274) = 0;
          plVar8 = (long *)func_0x03f0b2e0(0x20);
          lVar15 = lRam00000000041b6210;
          plVar1 = (long *)(param_1 + 0x4a8);
          lVar11 = *(long *)(param_1 + 0x4a0);
          plVar8[2] = 0;
          plVar8[3] = 0;
          *plVar8 = lVar15 + 0x10;
          plVar8[1] = (long)plVar6;
          plVar6 = (long *)(param_1 + 0x4a0);
          if (lVar11 == 0) {
            *plVar1 = (long)plVar8;
            plVar10 = plVar6;
          }
          else {
            lVar11 = *plVar1;
            *(long **)(lVar11 + 0x10) = plVar8;
            plVar8[3] = lVar11;
            plVar10 = plVar1;
          }
          iVar4 = *(int *)(param_1 + 0x4b0);
          *plVar10 = (long)plVar8;
          *(int *)(param_1 + 0x4b0) = iVar4 + 1;
          iVar3 = func_0x03fa2ad0(param_1,uVar2);
          iVar4 = *(int *)(param_1 + 0x20);
          lVar11 = *(long *)(param_1 + 0x4a0);
          iVar13 = iVar4;
          if (0 < iVar4) {
            do {
              lVar11 = *(long *)(lVar11 + 0x10);
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
          *(int *)(*(long *)(lVar11 + 8) + 0x264) = iVar4;
          iVar4 = func_0x03fa2ae0(param_1);
          if (-1 < iVar4) {
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
            if (iVar3 == 0) {
              uVar5 = 1;
            }
            else {
              if (param_3 != 0) {
                iVar4 = func_0x03fa2af0(param_1,param_3);
                if (-1 < iVar4) {
                  uVar5 = 1;
                  *(undefined1 *)(param_1 + 0x30) = 1;
                  goto code_r0x039ddf70;
                }
                if (*(int *)(param_1 + 0x4b0) != 0) {
                  func_0x03fa2aa0(param_1);
                }
                iVar3 = *(int *)(param_1 + 0x38);
                *(undefined4 *)(param_1 + 0x20) = 0;
              }
              uVar9 = func_0x03f0b2e0(0x290);
              func_0x03fa2b00();
              uStack_70 = uVar9;
              func_0x03fa2b10(param_1 + 0x498,&uStack_70);
              iVar4 = func_0x03fa2ad0(param_1,iVar3);
              if (iVar4 != 0) {
                do {
                  iVar3 = *(int *)(param_1 + 0x20);
                  lVar11 = *(long *)(param_1 + 0x4a0);
                  iVar13 = iVar3;
                  if (0 < iVar3) {
                    do {
                      lVar11 = *(long *)(lVar11 + 0x10);
                      iVar13 = iVar13 + -1;
                    } while (iVar13 != 0);
                  }
                  *(int *)(*(long *)(lVar11 + 8) + 0x264) = iVar3;
                  iVar3 = func_0x03fa2ae0(param_1);
                  if (iVar3 < 0) goto code_r0x039ddf6c;
                  plVar8 = (long *)func_0x03f0b2e0(0x290);
                  *plVar8 = lVar14 + 0x10;
                  plVar8[0x44] = 0;
                  plVar8[0x46] = 0;
                  plVar8[0x45] = 0;
                  puVar7 = (undefined8 *)func_0x03f0b2e0(0x10);
                  plVar8[0x47] = (long)puVar7;
                  *puVar7 = 0;
                  puVar7[1] = plVar8 + 0x43;
                  *(undefined4 *)(plVar8 + 0x4e) = 0;
                  plVar8[0x41] = 0xffffffff;
                  plVar8[2] = 0;
                  plVar8[1] = 0;
                  plVar8[0x22] = 0;
                  plVar8[0x21] = 0;
                  plVar8[0x24] = 0;
                  plVar8[0x23] = 0;
                  plVar8[0x26] = 0;
                  plVar8[0x25] = 0;
                  plVar8[0x28] = 0;
                  plVar8[0x27] = 0;
                  plVar8[0x2a] = 0;
                  plVar8[0x29] = 0;
                  plVar8[0x2c] = 0;
                  plVar8[0x2b] = 0;
                  plVar8[0x2e] = 0;
                  plVar8[0x2d] = 0;
                  plVar8[0x30] = 0;
                  plVar8[0x2f] = 0;
                  plVar8[0x32] = 0;
                  plVar8[0x31] = 0;
                  plVar8[0x34] = 0;
                  plVar8[0x33] = 0;
                  plVar8[0x36] = 0;
                  plVar8[0x35] = 0;
                  plVar8[0x38] = 0;
                  plVar8[0x37] = 0;
                  plVar8[0x3a] = 0;
                  plVar8[0x39] = 0;
                  plVar8[0x3c] = 0;
                  plVar8[0x3b] = 0;
                  plVar8[0x3e] = 0;
                  plVar8[0x3d] = 0;
                  *(undefined8 *)((long)plVar8 + 0x1ff) = 0;
                  *(undefined8 *)((long)plVar8 + 0x1f7) = 0;
                  plVar8[0x49] = 0;
                  plVar8[0x48] = 0;
                  plVar8[0x4b] = 0;
                  plVar8[0x4a] = 0;
                  plVar8[0x4d] = 0;
                  plVar8[0x4c] = 0;
                  plVar8[0x42] = 0;
                  plVar8[4] = 0;
                  plVar8[3] = 0;
                  plVar8[6] = 0;
                  plVar8[5] = 0;
                  plVar8[8] = 0;
                  plVar8[7] = 0;
                  plVar8[10] = 0;
                  plVar8[9] = 0;
                  plVar8[0xc] = 0;
                  plVar8[0xb] = 0;
                  plVar8[0xe] = 0;
                  plVar8[0xd] = 0;
                  plVar8[0x10] = 0;
                  plVar8[0xf] = 0;
                  plVar8[0x12] = 0;
                  plVar8[0x11] = 0;
                  plVar8[0x14] = 0;
                  plVar8[0x13] = 0;
                  plVar8[0x16] = 0;
                  plVar8[0x15] = 0;
                  plVar8[0x18] = 0;
                  plVar8[0x17] = 0;
                  plVar8[0x1a] = 0;
                  plVar8[0x19] = 0;
                  plVar8[0x1c] = 0;
                  plVar8[0x1b] = 0;
                  plVar8[0x1e] = 0;
                  plVar8[0x1d] = 0;
                  plVar8[0x20] = 0;
                  plVar8[0x1f] = 0;
                  *(undefined8 *)((long)plVar8 + 0x284) = 0;
                  *(undefined8 *)((long)plVar8 + 0x27c) = 0;
                  *(undefined8 *)((long)plVar8 + 0x274) = 0;
                  plVar10 = (long *)func_0x03f0b2e0(0x20);
                  lVar11 = *plVar6;
                  plVar10[2] = 0;
                  plVar10[3] = 0;
                  *plVar10 = lVar15 + 0x10;
                  plVar10[1] = (long)plVar8;
                  if (lVar11 == 0) {
                    *plVar1 = (long)plVar10;
                    plVar8 = plVar6;
                  }
                  else {
                    lVar11 = *plVar1;
                    *(long **)(lVar11 + 0x10) = plVar10;
                    plVar10[3] = lVar11;
                    plVar8 = plVar1;
                  }
                  iVar3 = *(int *)(param_1 + 0x4b0);
                  iVar13 = *(int *)(param_1 + 0x20);
                  *plVar8 = (long)plVar10;
                  *(int *)(param_1 + 0x4b0) = iVar3 + 1;
                  *(int *)(param_1 + 0x20) = iVar13 + 1;
                  iVar4 = func_0x03fa2ad0(param_1,iVar4);
                } while (iVar4 != 0);
              }
              iVar4 = *(int *)(param_1 + 0x20);
              lVar14 = *(long *)(param_1 + 0x4a0);
              iVar3 = iVar4;
              if (0 < iVar4) {
                do {
                  lVar14 = *(long *)(lVar14 + 0x10);
                  iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
              }
              *(int *)(*(long *)(lVar14 + 8) + 0x264) = iVar4;
              uVar5 = func_0x03fa2ae0(param_1);
              uVar5 = ~uVar5 >> 0x1f;
            }
            goto code_r0x039ddf70;
          }
        }
      }
    }
  }
code_r0x039ddf6c:
  uVar5 = 0;
code_r0x039ddf70:
  if (*(long *)(lVar12 + 0x28) != lStack_68) {
    auVar16 = func_0x03f0b330(uVar5);
    lVar14 = auVar16._0_8_;
    plVar8 = (long *)func_0x03f0b2e0(0x20);
    lVar12 = lRam00000000041b6210;
    lVar15 = *auVar16._8_8_;
    plVar8[2] = 0;
    plVar8[3] = 0;
    plVar6 = (long *)(lVar14 + 8);
    lVar11 = *plVar6;
    *plVar8 = lVar12 + 0x10;
    plVar8[1] = lVar15;
    plVar1 = (long *)(lVar14 + 0x10);
    if (lVar11 == 0) {
      *plVar1 = (long)plVar8;
    }
    else {
      lVar12 = *plVar1;
      *(long **)(lVar12 + 0x10) = plVar8;
      plVar8[3] = lVar12;
      plVar6 = plVar1;
    }
    iVar4 = *(int *)(lVar14 + 0x18);
    *plVar6 = (long)plVar8;
    *(int *)(lVar14 + 0x18) = iVar4 + 1;
    return;
  }
  return;
}


