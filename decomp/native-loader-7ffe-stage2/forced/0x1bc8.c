
undefined1 FORCED_0x1bc8(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + 0x78) = param_1;
  *(undefined4 *)(unaff_x29 + 0x74) = **(undefined4 **)(unaff_x29 + 0x18);
  *(undefined1 *)(unaff_x29 + 0x9e) = 0;
  uVar1 = FUN_00002b54();
  *(undefined1 *)(unaff_x29 + 0x9e) = uVar1;
  if (*(char *)(unaff_x29 + 0x9e) != '\0') {
    if (*(char *)(unaff_x29 + 0x9f) != '\0') {
      *(undefined4 *)(unaff_x29 + 0x58) = 0x4c245c86;
      *(undefined4 *)(unaff_x29 + 0x5c) = 0x6e84cc5c;
      *(undefined4 *)(unaff_x29 + 0x60) = 0x36dcac9c;
      *(undefined4 *)(unaff_x29 + 100) = 0x54e47e5e;
      *(undefined4 *)(unaff_x29 + 0x68) = 0x6e4e4694;
      *(undefined4 *)(unaff_x29 + 0x6c) = 0xe48c;
      uVar2 = FUN_0000d528(unaff_x29 + 0x58,0x18);
      *(undefined8 *)(unaff_x29 + 0x90) = uVar2;
      uVar1 = FUN_00001990(*(undefined8 *)(unaff_x29 + 0x90),*(undefined8 *)(unaff_x29 + 0x28),
                           unaff_x29 + 0x78,unaff_x29 + 0x74);
      *(undefined1 *)(unaff_x29 + 0x9f) = uVar1;
      FUN_0000d5ec(*(undefined8 *)(unaff_x29 + 0x90));
    }
    if (*(char *)(unaff_x29 + 0x9f) != '\0') {
      *(undefined4 *)(unaff_x29 + 0x40) = 0x4c245c86;
      *(undefined4 *)(unaff_x29 + 0x44) = 0x6e84cc5c;
      *(undefined4 *)(unaff_x29 + 0x48) = 0x36dcac9c;
      *(undefined4 *)(unaff_x29 + 0x4c) = 0x54e47e5e;
      *(undefined4 *)(unaff_x29 + 0x50) = 0x4e4694;
      uVar2 = FUN_0000d528(unaff_x29 + 0x40,0x14);
      *(undefined8 *)(unaff_x29 + 0x88) = uVar2;
      uVar1 = FUN_00001990(*(undefined8 *)(unaff_x29 + 0x88),*(undefined8 *)(unaff_x29 + 0x28),
                           unaff_x29 + 0x78,unaff_x29 + 0x74);
      *(undefined1 *)(unaff_x29 + 0x9f) = uVar1;
      FUN_0000d5ec(*(undefined8 *)(unaff_x29 + 0x88));
    }
  }
  if (*(char *)(unaff_x29 + 0x9f) != '\0') {
    *(undefined4 *)(unaff_x29 + 0x30) = 0x4c245c86;
    *(undefined4 *)(unaff_x29 + 0x34) = 0x6e84cc5c;
    *(undefined4 *)(unaff_x29 + 0x38) = 0x36dcac9c;
    *(undefined4 *)(unaff_x29 + 0x3c) = 0x5e;
    uVar2 = FUN_0000d528(unaff_x29 + 0x30,0x10);
    *(undefined8 *)(unaff_x29 + 0x80) = uVar2;
    uVar1 = FUN_00001990(*(undefined8 *)(unaff_x29 + 0x80),*(undefined8 *)(unaff_x29 + 0x28),
                         unaff_x29 + 0x78,unaff_x29 + 0x74);
    *(undefined1 *)(unaff_x29 + 0x9f) = uVar1;
    FUN_0000d5ec(*(undefined8 *)(unaff_x29 + 0x80));
  }
  **(undefined8 **)(unaff_x29 + 0x20) = *(undefined8 *)(unaff_x29 + 0x78);
  **(undefined4 **)(unaff_x29 + 0x18) = *(undefined4 *)(unaff_x29 + 0x74);
  return *(undefined1 *)(unaff_x29 + 0x9f);
}


