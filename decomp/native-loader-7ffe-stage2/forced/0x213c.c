
undefined1 FORCED_0x213c(void)

{
  undefined1 uVar1;
  long unaff_x29;
  
  uVar1 = FUN_000018dc();
  *(undefined1 *)(unaff_x29 + 0x3f) = uVar1;
  if (*(char *)(unaff_x29 + 0x3f) != '\0') {
    uVar1 = FUN_00001db0(*(undefined8 *)(unaff_x29 + 0x18),*(undefined8 *)(unaff_x29 + 0x30),
                         unaff_x29 + 0x28,unaff_x29 + 0x24);
    *(undefined1 *)(unaff_x29 + 0x3f) = uVar1;
  }
  if (*(char *)(unaff_x29 + 0x3f) != '\0') {
    **(undefined8 **)(unaff_x29 + 0x10) = *(undefined8 *)(unaff_x29 + 0x30);
    *(undefined8 *)(*(long *)(unaff_x29 + 0x10) + 8) = *(undefined8 *)(unaff_x29 + 0x28);
    *(undefined4 *)(*(long *)(unaff_x29 + 0x10) + 0x10) = *(undefined4 *)(unaff_x29 + 0x24);
    *(undefined4 *)(*(long *)(unaff_x29 + 0x10) + 0x14) = 0;
    *(undefined8 *)(*(long *)(unaff_x29 + 0x10) + 0x18) = 0;
  }
  return *(undefined1 *)(unaff_x29 + 0x3f);
}


