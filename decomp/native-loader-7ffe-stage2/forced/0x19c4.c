
undefined8 FORCED_0x19c4(char param_1)

{
  undefined8 uVar1;
  long unaff_x29;
  
  if (param_1 == '\x01') {
    *(undefined8 *)(unaff_x29 + 0x48) = **(undefined8 **)(unaff_x29 + 0x18);
    *(undefined4 *)(unaff_x29 + 0x44) = **(undefined4 **)(unaff_x29 + 0x10);
    uVar1 = FUN_0000be74(*(undefined8 *)(unaff_x29 + 0x28));
    *(undefined8 *)(unaff_x29 + 0x38) = uVar1;
    if (*(long *)(unaff_x29 + 0x20) != 0) {
      *(long *)(unaff_x29 + 0x30) = *(long *)(unaff_x29 + 0x20) + *(long *)(unaff_x29 + 0x48);
      FUN_0000c440(*(undefined8 *)(unaff_x29 + 0x30),*(undefined8 *)(unaff_x29 + 0x28));
      if (*(char *)(*(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x38) + -1) == '/') {
        *(undefined1 *)(*(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x38) + -1) = 0;
      }
    }
    *(long *)(unaff_x29 + 0x48) = *(long *)(unaff_x29 + 0x38) + *(long *)(unaff_x29 + 0x48) + 1;
    *(int *)(unaff_x29 + 0x44) = *(int *)(unaff_x29 + 0x44) + 1;
    **(undefined8 **)(unaff_x29 + 0x18) = *(undefined8 *)(unaff_x29 + 0x48);
    **(undefined4 **)(unaff_x29 + 0x10) = *(undefined4 *)(unaff_x29 + 0x44);
  }
  return 1;
}


