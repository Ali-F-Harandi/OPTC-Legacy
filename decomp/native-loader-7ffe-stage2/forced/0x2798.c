
undefined1 FORCED_0x2798(void)

{
  undefined1 uVar1;
  long unaff_x29;
  
  *(undefined1 *)(unaff_x29 + 0x87f) = 0;
  do {
    do {
      if (*(char *)(unaff_x29 + 0x88f) == '\0') goto LAB_0000287c;
      if (*(char *)(unaff_x29 + 0x88f) != '\0') {
        uVar1 = FUN_00002240(*(undefined8 *)(unaff_x29 + 0x38),*(undefined8 *)(unaff_x29 + 0x28),
                             unaff_x29 + 0x48,unaff_x29 + 0x87f);
        *(undefined1 *)(unaff_x29 + 0x88f) = uVar1;
        if (*(char *)(unaff_x29 + 0x87f) != '\x01') goto LAB_0000287c;
      }
    } while (*(char *)(unaff_x29 + 0x88f) == '\0');
    *(long *)(unaff_x29 + 0x880) = unaff_x29 + 0x448;
    uVar1 = FUN_000023cc(unaff_x29 + 0x48,*(undefined8 *)(unaff_x29 + 0x30),
                         *(undefined8 *)(unaff_x29 + 0x880),unaff_x29 + 0x87f,
                         *(undefined1 *)(unaff_x29 + 0x17));
    *(undefined1 *)(unaff_x29 + 0x88f) = uVar1;
  } while ((*(char *)(unaff_x29 + 0x87f) != '\x01') || (*(char *)(unaff_x29 + 0x87f) == '\0'));
  if (*(long *)(unaff_x29 + 0x20) != 0) {
    FUN_0000bd64(*(undefined8 *)(unaff_x29 + 0x20),*(undefined8 *)(unaff_x29 + 0x880),0x430);
  }
LAB_0000287c:
  if (*(long *)(unaff_x29 + 0x18) != 0) {
    **(undefined1 **)(unaff_x29 + 0x18) = *(undefined1 *)(unaff_x29 + 0x87f);
  }
  return *(undefined1 *)(unaff_x29 + 0x88f);
}


