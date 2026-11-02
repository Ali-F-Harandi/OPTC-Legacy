
undefined1 FORCED_0xa00c(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x29;
  
  uVar3 = FUN_0000fb68();
  *(undefined8 *)(unaff_x29 + 0x1050) = uVar3;
  if (*(long *)(unaff_x29 + 0x30) == 0) {
    *(long *)(unaff_x29 + 0x30) = unaff_x29 + 0x48;
    *(undefined8 *)(unaff_x29 + 0x20) = 0x1000;
  }
  *(undefined1 *)(unaff_x29 + 0x106e) = 0;
  *(undefined8 *)(unaff_x29 + 0x1060) = 0;
  *(undefined8 *)(unaff_x29 + 0x1058) = 0;
  do {
    do {
      if (*(char *)(unaff_x29 + 0x106f) == '\0') goto LAB_0000a188;
      uVar3 = FUN_0000fb68(0x3f,(long)*(int *)(unaff_x29 + 0x3c),
                           *(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x1058),
                           *(long *)(unaff_x29 + 0x20) - *(long *)(unaff_x29 + 0x1058),0,0,0);
      *(undefined8 *)(unaff_x29 + 0x1048) = uVar3;
      if (*(long *)(unaff_x29 + 0x1048) < 0) {
        uVar2 = FUN_0000b100();
        uVar1 = FUN_000018dc(0,0,uVar2,2,0x114,1,1,0);
        *(undefined1 *)(unaff_x29 + 0x106f) = uVar1;
        goto LAB_0000a188;
      }
      if (*(long *)(unaff_x29 + 0x1048) == 0) goto LAB_0000a188;
    } while (*(long *)(unaff_x29 + 0x1048) < 1);
    *(long *)(unaff_x29 + 0x1058) = *(long *)(unaff_x29 + 0x1058) + *(long *)(unaff_x29 + 0x1048);
    *(long *)(unaff_x29 + 0x1060) = *(long *)(unaff_x29 + 0x1060) + *(long *)(unaff_x29 + 0x1048);
  } while (*(long *)(unaff_x29 + 0x20) != *(long *)(unaff_x29 + 0x1058));
  *(undefined1 *)(unaff_x29 + 0x106e) = 1;
LAB_0000a188:
  if (*(long *)(unaff_x29 + 0x28) != 0) {
    **(undefined8 **)(unaff_x29 + 0x28) = *(undefined8 *)(unaff_x29 + 0x1060);
  }
  if (*(long *)(unaff_x29 + 0x18) != 0) {
    **(undefined1 **)(unaff_x29 + 0x18) = *(undefined1 *)(unaff_x29 + 0x106e);
  }
  return *(undefined1 *)(unaff_x29 + 0x106f);
}


