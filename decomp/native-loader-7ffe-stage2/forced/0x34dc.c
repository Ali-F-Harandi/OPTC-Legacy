
undefined1 FORCED_0x34dc(void)

{
  long unaff_x29;
  
  while (*(int *)(unaff_x29 + 0x5c) < *(int *)(unaff_x29 + 0x2c)) {
    *(undefined8 *)(unaff_x29 + 0x20) =
         *(undefined8 *)(*(long *)(unaff_x29 + 0x68) + (long)*(int *)(unaff_x29 + 0x5c) * 8);
    if ((*(long *)(unaff_x29 + 0x68) != -1) && (*(long *)(unaff_x29 + 0x20) != 0)) {
      (**(code **)(unaff_x29 + 0x20))();
    }
    *(int *)(unaff_x29 + 0x5c) = *(int *)(unaff_x29 + 0x5c) + 1;
  }
  return *(undefined1 *)(unaff_x29 + 0x5b);
}


