
undefined8 FUN_00004d10(undefined1 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar6 = 1;
  if (DAT_0002144c < DAT_00021438) {
    if (param_2 != (undefined8 *)0x0) {
      lVar1 = DAT_00021430 + (long)DAT_0002144c * 0x38;
      uVar10 = *(undefined8 *)(DAT_00021430 + (long)DAT_0002144c * 0x38);
      uVar9 = *(undefined8 *)(lVar1 + 8);
      uVar8 = *(undefined8 *)(lVar1 + 0x10);
      uVar2 = *(undefined4 *)(lVar1 + 0x18);
      uVar3 = *(undefined4 *)(lVar1 + 0x1c);
      uVar4 = *(undefined4 *)(lVar1 + 0x20);
      uVar5 = *(undefined4 *)(lVar1 + 0x24);
      uVar7 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(lVar1 + 0x28);
      *param_2 = uVar10;
      param_2[1] = uVar9;
      param_2[2] = uVar8;
      *(undefined4 *)(param_2 + 3) = uVar2;
      *(undefined4 *)((long)param_2 + 0x1c) = uVar3;
      *(undefined4 *)(param_2 + 4) = uVar4;
      *(undefined4 *)((long)param_2 + 0x24) = uVar5;
      FUN_00008678((long)param_2 + 0x2c,uVar7);
    }
    DAT_0002144c = DAT_0002144c + 1;
    uVar6 = 0;
  }
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = uVar6;
  }
  return 1;
}
