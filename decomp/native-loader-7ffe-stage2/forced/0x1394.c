
undefined1 FORCED_0x1394(long param_1,long param_2)

{
  long unaff_x29;
  
  *(long *)(*(long *)(unaff_x29 + 0x28) + 0x98) = param_2 + param_1;
  *(ulong *)(*(long *)(unaff_x29 + 0x28) + 0xa0) =
       (ulong)*(uint *)(*(long *)(unaff_x29 + 0x40) + 0x2c);
  if (*(char *)(unaff_x29 + 0x4f) != '\0') {
    *(undefined8 *)(*(long *)(unaff_x29 + 0x28) + 0x20) = *(undefined8 *)(unaff_x29 + 0x20);
    *(undefined8 *)(*(long *)(unaff_x29 + 0x28) + 0x10) = *(undefined8 *)(unaff_x29 + 0x20);
    *(undefined8 *)(*(long *)(unaff_x29 + 0x28) + 0x18) = *(undefined8 *)(unaff_x29 + 0x18);
  }
  return *(undefined1 *)(unaff_x29 + 0x4f);
}


