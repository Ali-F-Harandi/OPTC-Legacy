
undefined8 FUN_0000fa20(undefined4 param_1,undefined8 param_2,char param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_0000f850(param_1,param_2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    if (param_3 == '\0') {
      if (((*(uint *)(lVar1 + 4) & 0x100) == 0) && ((*(uint *)(lVar1 + 4) & 1) == 0)) {
        *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 1;
        FUN_0000bc40(lVar2,0,*(undefined4 *)(lVar1 + 0x10));
        *(uint *)(lVar1 + 4) = *(uint *)(lVar1 + 4) | 2;
      }
    }
    else {
      if (((*(uint *)(lVar1 + 4) & 0x100) == 0) && (lVar2 != 0)) {
        FUN_000099b8(lVar2,*(undefined4 *)(lVar1 + 0x10));
      }
      FUN_0000bc40(lVar1,0,0x18);
    }
  }
  return 1;
}


