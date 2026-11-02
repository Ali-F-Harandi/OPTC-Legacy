
undefined8 FORCED_0x9994(void)

{
  undefined8 uVar1;
  long unaff_x29;
  
  uVar1 = FUN_0000fb68();
  *(undefined8 *)(unaff_x29 + 0x28) = uVar1;
  if (*(long *)(unaff_x29 + 0x28) == -1) {
    *(undefined8 *)(unaff_x29 + 0x28) = 0;
  }
  return *(undefined8 *)(unaff_x29 + 0x28);
}


