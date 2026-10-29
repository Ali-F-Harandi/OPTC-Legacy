
undefined1 FORCED_0xdacc(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + 0x20) = param_1;
  if (*(char *)(unaff_x29 + 0x5f) != '\0') {
    if (DAT_000257e8 == 0) {
      uVar2 = FUN_0000ee68();
      uVar1 = FUN_000018dc(0,0,uVar2,1,0x82,1,2,0);
      *(undefined1 *)(unaff_x29 + 0x5f) = uVar1;
    }
    if (*(char *)(unaff_x29 + 0x5f) != '\0') {
      uVar1 = FUN_0000eb34(DAT_000257e8,*(undefined8 *)(unaff_x29 + 0x20),
                           *(undefined8 *)(unaff_x29 + 0x18));
      *(undefined1 *)(unaff_x29 + 0x5f) = uVar1;
    }
  }
  if ((*(char *)(unaff_x29 + 0x5f) != '\0') && (*(char *)(unaff_x29 + 0x17) != '\x01')) {
    if (DAT_000258f0 == 0) {
      uVar2 = FUN_0000ee68();
      uVar1 = FUN_000018dc(0,0,uVar2,1,0x8d,1,3,0);
      *(undefined1 *)(unaff_x29 + 0x5f) = uVar1;
    }
    if (*(char *)(unaff_x29 + 0x5f) != '\0') {
      uVar1 = FUN_0000fc30(*(undefined8 *)(unaff_x29 + 0x20),*(undefined8 *)(unaff_x29 + 0x18),
                           &DAT_000257f0,DAT_000258f0);
      *(undefined1 *)(unaff_x29 + 0x5f) = uVar1;
    }
  }
  if ((*(char *)(unaff_x29 + 0x5f) != '\0') && (*(char *)(unaff_x29 + 0x5f) != '\0')) {
    uVar1 = FUN_0000ecd8(*(undefined8 *)(unaff_x29 + 0x38),*(undefined8 *)(unaff_x29 + 0x30),
                         *(undefined8 *)(unaff_x29 + 0x20),*(ulong *)(unaff_x29 + 0x18) & 0xffffffff
                        );
    *(undefined1 *)(unaff_x29 + 0x5f) = uVar1;
  }
  if (*(long *)(unaff_x29 + 0x50) != 0) {
    FUN_000099b8(*(undefined8 *)(unaff_x29 + 0x50),*(undefined8 *)(unaff_x29 + 0x48));
  }
  return *(undefined1 *)(unaff_x29 + 0x5f);
}


