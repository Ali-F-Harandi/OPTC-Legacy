
undefined8 FORCED_0x165c(void)

{
  undefined4 uVar1;
  long unaff_x29;
  
  while( true ) {
    *(undefined4 *)(unaff_x29 + 0x3c) = **(undefined4 **)(unaff_x29 + 0x40);
    *(undefined4 *)(unaff_x29 + 0x38) = *(undefined4 *)(unaff_x29 + 0x3c);
    *(uint *)(unaff_x29 + 0x3c) =
         *(uint *)(unaff_x29 + 0x3c) ^
         (uint)(*(int *)(unaff_x29 + 0x5c) * *(int *)(unaff_x29 + 0x5c)) >> 3;
    uVar1 = FUN_0000176c(*(undefined4 *)(unaff_x29 + 0x3c));
    *(undefined4 *)(unaff_x29 + 0x3c) = uVar1;
    *(uint *)(unaff_x29 + 0x3c) =
         *(uint *)(unaff_x29 + 0x3c) ^
         (*(int *)(unaff_x29 + 0x4c) + -0x6909f48f) * *(int *)(unaff_x29 + 0x4c) <<
         (ulong)(*(int *)(unaff_x29 + 0x24) + 1U & 3);
    *(int *)(unaff_x29 + 0x3c) =
         *(int *)(unaff_x29 + 0x3c) +
         ((int)*(undefined8 *)(unaff_x29 + 0x50) + 1) * 0x79934cf6 + *(int *)(unaff_x29 + 0x4c);
    *(uint *)(unaff_x29 + 0x3c) =
         *(int *)(unaff_x29 + 0x3c) -
         ((uint)((*(int *)(unaff_x29 + 0x4c) + -0x626498c3) * *(int *)(unaff_x29 + 0x4c)) >>
         (ulong)((int)*(undefined8 *)(unaff_x29 + 0x50) + 3U & 5));
    *(undefined4 *)(unaff_x29 + 0x5c) = *(undefined4 *)(unaff_x29 + 0x38);
    **(undefined4 **)(unaff_x29 + 0x40) = *(undefined4 *)(unaff_x29 + 0x3c);
    *(long *)(unaff_x29 + 0x50) = *(long *)(unaff_x29 + 0x50) + 4;
    if (0x5b < *(ulong *)(unaff_x29 + 0x50)) break;
    *(long *)(unaff_x29 + 0x40) = *(long *)(unaff_x29 + 0x18) + *(long *)(unaff_x29 + 0x50);
  }
  return 1;
}


