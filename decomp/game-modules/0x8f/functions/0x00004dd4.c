
undefined1 FUN_00004dd4(undefined4 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)DAT_00021450;
  if (DAT_00021450 != 0) {
    if (DAT_00021460 == 0) {
      uVar3 = 1;
    }
    else if (DAT_00021470 == 0) {
      uVar3 = 2;
    }
    else if (DAT_00021480 == 0) {
      uVar3 = 3;
    }
    else if (DAT_00021490 == 0) {
      uVar3 = 4;
    }
    else if (DAT_000214a0 == 0) {
      uVar3 = 5;
    }
    else if (DAT_000214b0 == 0) {
      uVar3 = 6;
    }
    else if (DAT_000214c0 == 0) {
      uVar3 = 7;
    }
    else if (DAT_000214d0 == 0) {
      uVar3 = 8;
    }
    else if (DAT_000214e0 == 0) {
      uVar3 = 9;
    }
    else if (DAT_000214f0 == 0) {
      uVar3 = 10;
    }
    else if (DAT_00021500 == 0) {
      uVar3 = 0xb;
    }
    else if (DAT_00021510 == 0) {
      uVar3 = 0xc;
    }
    else if (DAT_00021520 == 0) {
      uVar3 = 0xd;
    }
    else if (DAT_00021530 == 0) {
      uVar3 = 0xe;
    }
    else {
      uVar3 = 0xf;
      if (DAT_00021540 != 0) {
        uVar2 = FUN_0000159c();
        uVar1 = FUN_00009700(0,0,uVar2,0x34,0x2f,1,1,0,0,0);
        return uVar1;
      }
    }
  }
  uVar3 = -(uVar3 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4;
  *(undefined4 *)((long)&DAT_00021450 + uVar3) = param_1;
  *(undefined8 *)(&DAT_00021458 + uVar3) = param_2;
  return 1;
}
