
undefined8 FORCED_0xfe24(long param_1)

{
  long unaff_x29;
  
  while( true ) {
    *(uint *)(param_1 + 0xc) =
         *(uint *)(*(long *)(unaff_x29 + 0x88) + 0xc) ^ *(uint *)(*(long *)(unaff_x29 + 0x80) + 0xc)
    ;
    *(undefined8 *)(unaff_x29 + 0x50) = *(undefined8 *)(unaff_x29 + 0x80);
    *(undefined8 *)(unaff_x29 + 0x80) = *(undefined8 *)(unaff_x29 + 0x78);
    *(undefined8 *)(unaff_x29 + 0x78) = *(undefined8 *)(unaff_x29 + 0x50);
    *(int *)(unaff_x29 + 0x74) = *(int *)(unaff_x29 + 0x74) + 1;
    *(long *)(unaff_x29 + 0x88) = *(long *)(unaff_x29 + 0x88) + 0x10;
    if (*(int *)(unaff_x29 + 0x5c) <= *(int *)(unaff_x29 + 0x74)) break;
    **(undefined4 **)(unaff_x29 + 0x78) = **(undefined4 **)(unaff_x29 + 0x88);
    *(undefined4 *)(*(long *)(unaff_x29 + 0x78) + 4) =
         *(undefined4 *)(*(long *)(unaff_x29 + 0x88) + 4);
    *(undefined4 *)(*(long *)(unaff_x29 + 0x78) + 8) =
         *(undefined4 *)(*(long *)(unaff_x29 + 0x88) + 8);
    *(undefined4 *)(*(long *)(unaff_x29 + 0x78) + 0xc) =
         *(undefined4 *)(*(long *)(unaff_x29 + 0x88) + 0xc);
    FUN_0000ff24(*(long *)(unaff_x29 + 0x60) + 4,*(undefined2 *)(*(long *)(unaff_x29 + 0x60) + 2),
                 *(undefined8 *)(unaff_x29 + 0x78),*(undefined8 *)(unaff_x29 + 0x88));
    **(uint **)(unaff_x29 + 0x88) = **(uint **)(unaff_x29 + 0x88) ^ **(uint **)(unaff_x29 + 0x80);
    *(uint *)(*(long *)(unaff_x29 + 0x88) + 4) =
         *(uint *)(*(long *)(unaff_x29 + 0x88) + 4) ^ *(uint *)(*(long *)(unaff_x29 + 0x80) + 4);
    *(uint *)(*(long *)(unaff_x29 + 0x88) + 8) =
         *(uint *)(*(long *)(unaff_x29 + 0x88) + 8) ^ *(uint *)(*(long *)(unaff_x29 + 0x80) + 8);
    param_1 = *(long *)(unaff_x29 + 0x88);
  }
  return 1;
}


