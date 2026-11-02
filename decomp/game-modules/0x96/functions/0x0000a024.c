
void FUN_0000a024(undefined4 *param_1,undefined8 param_2,uint *param_3,ulong *param_4,ulong *param_5
                 ,long *param_6,ulong *param_7,ulong *param_8)

{
  int iVar1;
  ushort uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  byte local_28;
  byte local_27;
  byte local_26;
  byte local_25;
  ushort local_e;
  ushort local_c;
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  uVar4 = FUN_00009934(param_1 + 0xd,param_1 + 0xe,param_2);
  if (-1 < (int)uVar4) {
    lVar12 = *(long *)(param_1 + 2);
    lVar8 = *(long *)(*(long *)(param_1 + 0xe) +
                     (-(uVar4 >> 0x1f & 1) & 0xfffffff000000000 | (uVar4 & 0xffffffff) << 4));
    uVar2 = *(ushort *)(lVar8 + -0x24);
    if (param_3 != (uint *)0x0) {
      *param_3 = (uint)uVar2;
    }
    if (param_7 != (ulong *)0x0) {
      *param_7 = (ulong)((uint)*(byte *)(lVar8 + -0x20) << 0x10 |
                         (uint)*(byte *)(lVar8 + -0x21) << 8 | (uint)*(byte *)(lVar8 + -0x22) |
                        (uint)*(byte *)(lVar8 + -0x1f) << 0x18);
    }
    if (param_8 != (ulong *)0x0) {
      *param_8 = (ulong)((uint)*(byte *)(lVar8 + -0x1c) << 0x10 |
                         (uint)*(byte *)(lVar8 + -0x1d) << 8 | (uint)*(byte *)(lVar8 + -0x1e) |
                        (uint)*(byte *)(lVar8 + -0x1b) << 0x18);
    }
    uVar4 = (ulong)((uint)*(byte *)(lVar8 + -0x18) << 0x10 | (uint)*(byte *)(lVar8 + -0x19) << 8 |
                    (uint)*(byte *)(lVar8 + -0x1a) | (uint)*(byte *)(lVar8 + -0x17) << 0x18);
    if (param_5 != (ulong *)0x0) {
      *param_5 = uVar4;
    }
    uVar11 = (ulong)((uint)*(byte *)(lVar8 + -0x14) << 0x10 | (uint)*(byte *)(lVar8 + -0x15) << 8 |
                     (uint)*(byte *)(lVar8 + -0x16) | (uint)*(byte *)(lVar8 + -0x13) << 0x18);
    if (param_4 != (ulong *)0x0) {
      *param_4 = uVar11;
    }
    if (param_6 == (long *)0x0) {
      uVar7 = 0;
      goto LAB_0000a264;
    }
    uVar9 = 0x22d;
    uVar10 = (ulong)((uint)*(byte *)(lVar8 + -2) << 0x10 | (uint)*(byte *)(lVar8 + -3) << 8 |
                     (uint)*(byte *)(lVar8 + -4) | (uint)*(byte *)(lVar8 + -1) << 0x18);
    if ((long)(uVar10 + 0x1e) < lVar12) {
      uVar5 = thunk_FUN_000027d0(*param_1,uVar10,0);
      uVar9 = 0x233;
      if (uVar5 == uVar10) {
        do {
          lVar8 = thunk_FUN_000027d0(*param_1,&local_28,0x1e);
          if (lVar8 != -1) {
            if (lVar8 == 0x1e) {
              if (((uint)local_26 << 0x10 | (uint)local_27 << 8 | (uint)local_28 |
                  (uint)local_25 << 0x18) != 0x4034b50) {
                uVar9 = 0x23f;
                goto LAB_0000a29c;
              }
              lVar8 = uVar10 + 0x1e + (ulong)local_e + (ulong)local_c;
              uVar9 = 0x246;
              if ((lVar12 <= lVar8) || (uVar9 = 0x24d, lVar12 < (long)(lVar8 + uVar4)))
              goto LAB_0000a29c;
              if ((uVar2 == 0) && (lVar12 < (long)(lVar8 + uVar11))) {
                uVar9 = 0x255;
                goto LAB_0000a29c;
              }
              *param_6 = lVar8;
              uVar7 = 0;
              goto LAB_0000a264;
            }
            break;
          }
          piVar6 = (int *)thunk_FUN_000027d0();
        } while (*piVar6 == 4);
        uVar9 = 0x239;
      }
    }
LAB_0000a29c:
    puVar3 = PTR_DAT_00029fa8;
    iVar1 = *(int *)PTR_DAT_00029fa8;
    *(undefined4 *)PTR_DAT_00029f18 = uVar9;
    if (iVar1 == 0) {
      *(undefined4 *)puVar3 = uVar9;
    }
  }
  uVar7 = 0xffffffff;
LAB_0000a264:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(uVar7);
  }
  return;
}
