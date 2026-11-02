
undefined1 FORCED_0xde18(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long unaff_x29;
  
  if (param_1 != 0) {
    *(undefined4 *)(unaff_x29 + 0x53c4) = DAT_000257e8;
    *(uint *)(unaff_x29 + 0x53fc) =
         *(int *)(unaff_x29 + 0x53fc) +
         ((uint)(*(int *)(unaff_x29 + 0x53c4) * *(int *)(unaff_x29 + 0x53c4)) >> 0x11);
    *(uint *)(unaff_x29 + 0x53fc) =
         *(uint *)(unaff_x29 + 0x53fc) ^
         *(int *)(unaff_x29 + 0x53c4) * *(int *)(unaff_x29 + 0x53c4) * 0x800;
    *(undefined4 *)(unaff_x29 + 0x53c4) = 0;
  }
  *(undefined4 *)(unaff_x29 + 0x53f8) = 0;
  if (*(char *)(unaff_x29 + 0x540f) != '\0') {
    *(undefined4 *)(unaff_x29 + 0x534c) = 0;
    FUN_0000bd64(unaff_x29 + 0x534c,*(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x5400),4);
    uVar2 = FUN_0000176c(*(undefined4 *)(unaff_x29 + 0x534c));
    *(undefined4 *)(unaff_x29 + 0x534c) = uVar2;
    *(int *)(unaff_x29 + 0x534c) =
         *(int *)(unaff_x29 + 0x53fc) * -0x784cc84 +
         (-0x5de204c6 << (ulong)(*(uint *)(unaff_x29 + 0x53fc) & 7)) + *(int *)(unaff_x29 + 0x534c);
    *(undefined4 *)(unaff_x29 + 0x53f8) = *(undefined4 *)(unaff_x29 + 0x534c);
    *(long *)(unaff_x29 + 0x5400) = *(long *)(unaff_x29 + 0x5400) + 4;
  }
  if (*(int *)(unaff_x29 + 0x53f8) == 0) {
    uVar1 = *(undefined1 *)(unaff_x29 + 0x540f);
  }
  else {
    *(undefined4 *)(unaff_x29 + 0x53f4) = 0;
    *(undefined1 *)(unaff_x29 + 0x53f3) = 0;
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      *(undefined4 *)(unaff_x29 + 0x53c0) = 0;
      *(undefined4 *)(unaff_x29 + 0x53bc) = 0;
      *(undefined4 *)(unaff_x29 + 0x5348) = 0;
      FUN_0000bd64(unaff_x29 + 0x5348,*(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x5400),4)
      ;
      uVar2 = FUN_0000176c(*(undefined4 *)(unaff_x29 + 0x5348));
      *(undefined4 *)(unaff_x29 + 0x5348) = uVar2;
      *(uint *)(unaff_x29 + 0x5348) =
           (0x416e2af2 >> (*(uint *)(unaff_x29 + 0x53fc) & 0xd)) + *(int *)(unaff_x29 + 0x53fc) +
           0xbd19c63cU ^ *(uint *)(unaff_x29 + 0x5348);
      *(undefined4 *)(unaff_x29 + 0x53bc) = *(undefined4 *)(unaff_x29 + 0x5348);
      *(uint *)(unaff_x29 + 0x53f4) = *(uint *)(unaff_x29 + 0x53bc) & 0xff;
      *(uint *)(unaff_x29 + 0x53c0) = *(uint *)(unaff_x29 + 0x53bc) >> 8 & 0xff;
      if (*(int *)(unaff_x29 + 0x53c0) == 1) {
        *(undefined1 *)(unaff_x29 + 0x53f3) = 1;
      }
      else {
        *(undefined1 *)(unaff_x29 + 0x53f3) = 0;
      }
      *(long *)(unaff_x29 + 0x5400) = *(long *)(unaff_x29 + 0x5400) + 4;
    }
    if ((*(char *)(unaff_x29 + 0x540f) != '\0') && (0x100 < *(uint *)(unaff_x29 + 0x53f4))) {
      uVar2 = FUN_0000ee68();
      uVar1 = FUN_000018dc(0,0,uVar2,1,0x14a,1,7,*(undefined4 *)(unaff_x29 + 0x53f4));
      *(undefined1 *)(unaff_x29 + 0x540f) = uVar1;
    }
    *(undefined4 *)(unaff_x29 + 0x53ec) = 0;
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      *(undefined4 *)(unaff_x29 + 0x5344) = 0;
      FUN_0000bd64(unaff_x29 + 0x5344,*(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x5400),4)
      ;
      uVar2 = FUN_0000176c(*(undefined4 *)(unaff_x29 + 0x5344));
      *(undefined4 *)(unaff_x29 + 0x5344) = uVar2;
      *(uint *)(unaff_x29 + 0x5344) =
           ((0x643a3a3b << (ulong)(*(uint *)(unaff_x29 + 0x53fc) & 0xb)) -
           (*(uint *)(unaff_x29 + 0x53fc) ^ 0x3b2bf538)) + *(int *)(unaff_x29 + 0x5344);
      *(undefined4 *)(unaff_x29 + 0x53ec) = *(undefined4 *)(unaff_x29 + 0x5344);
      *(long *)(unaff_x29 + 0x5400) = *(long *)(unaff_x29 + 0x5400) + 4;
    }
    FUN_0000bc40(unaff_x29 + 0x840,0,0x1b00);
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      FUN_0000bd64(unaff_x29 + 0x840,*(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x5400),
                   *(undefined4 *)(unaff_x29 + 0x53ec));
      *(long *)(unaff_x29 + 0x53b0) = unaff_x29 + 0x840;
      *(uint *)(unaff_x29 + 0x53ac) = *(uint *)(unaff_x29 + 0x53ec) >> 2;
      *(undefined4 *)(unaff_x29 + 0x53e8) = 0;
      while (*(uint *)(unaff_x29 + 0x53e8) < *(uint *)(unaff_x29 + 0x53ac)) {
        *(ulong *)(unaff_x29 + 0x53a0) =
             *(long *)(unaff_x29 + 0x53b0) + (ulong)*(uint *)(unaff_x29 + 0x53e8) * 4;
        *(undefined4 *)(unaff_x29 + 0x539c) = **(undefined4 **)(unaff_x29 + 0x53a0);
        uVar2 = FUN_0000176c(*(undefined4 *)(unaff_x29 + 0x539c));
        *(undefined4 *)(unaff_x29 + 0x539c) = uVar2;
        **(undefined4 **)(unaff_x29 + 0x53a0) = *(undefined4 *)(unaff_x29 + 0x539c);
        *(int *)(unaff_x29 + 0x53e8) = *(int *)(unaff_x29 + 0x53e8) + 1;
      }
      *(undefined4 *)(unaff_x29 + 0x53e4) = 0;
      while (*(uint *)(unaff_x29 + 0x53e4) < *(uint *)(unaff_x29 + 0x53ec)) {
        *(undefined4 *)(unaff_x29 + 0x5398) = 0;
        *(int *)(unaff_x29 + 0x5398) =
             *(int *)(unaff_x29 + 0x5398) +
             ((*(int *)(unaff_x29 + 0x53fc) + -0xe34a47f) * *(int *)(unaff_x29 + 0x53fc) <<
             (ulong)(*(uint *)(unaff_x29 + 0x53e4) & 0x1b));
        uVar2 = FUN_0000176c(*(undefined4 *)(unaff_x29 + 0x5398));
        *(undefined4 *)(unaff_x29 + 0x5398) = uVar2;
        *(uint *)(unaff_x29 + 0x5398) =
             *(int *)(unaff_x29 + 0x5398) -
             ((uint)((*(int *)(unaff_x29 + 0x53fc) + -0x31e7c682) * *(int *)(unaff_x29 + 0x53fc)) >>
             (ulong)(*(uint *)(unaff_x29 + 0x53e4) & 0x17));
        *(uint *)(unaff_x29 + 0x5398) =
             *(uint *)(unaff_x29 + 0x5398) >> (ulong)(*(uint *)(unaff_x29 + 0x53e4) & 0x1f);
        *(char *)(unaff_x29 + 0x840 + (ulong)*(uint *)(unaff_x29 + 0x53e4)) =
             *(char *)(unaff_x29 + 0x840 + (ulong)*(uint *)(unaff_x29 + 0x53e4)) +
             (char)*(undefined4 *)(unaff_x29 + 0x5398);
        *(int *)(unaff_x29 + 0x53e4) = *(int *)(unaff_x29 + 0x53e4) + 1;
      }
      *(ulong *)(unaff_x29 + 0x5400) =
           *(long *)(unaff_x29 + 0x5400) + (ulong)*(uint *)(unaff_x29 + 0x53ec);
      uVar3 = FUN_0000d45c(*(undefined8 *)(unaff_x29 + 0x5400),4,1);
      *(undefined8 *)(unaff_x29 + 0x5400) = uVar3;
    }
    *(long *)(unaff_x29 + 0x5390) = unaff_x29 + 0x5350;
    FUN_0000bc40(*(undefined8 *)(unaff_x29 + 0x5390),0,0xc);
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      **(long **)(unaff_x29 + 0x5390) = unaff_x29 + 0x840;
      *(undefined4 *)(*(long *)(unaff_x29 + 0x5390) + 8) = *(undefined4 *)(unaff_x29 + 0x53ec);
    }
    FUN_0000bc40(unaff_x29 + 0x40,0,0x800);
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      *(ulong *)(unaff_x29 + 0x5388) = (ulong)*(uint *)(unaff_x29 + 0x53f4) << 3;
      FUN_0000bd64(unaff_x29 + 0x40,*(long *)(unaff_x29 + 0x30) + *(long *)(unaff_x29 + 0x5400),
                   *(undefined8 *)(unaff_x29 + 0x5388));
      *(long *)(unaff_x29 + 0x5380) = unaff_x29 + 0x40;
      *(undefined8 *)(unaff_x29 + 0x53d8) = 0;
      while (*(ulong *)(unaff_x29 + 0x53d8) < *(ulong *)(unaff_x29 + 0x5388)) {
        *(long *)(unaff_x29 + 0x5378) =
             *(long *)(unaff_x29 + 0x5380) + *(long *)(unaff_x29 + 0x53d8);
        *(undefined4 *)(unaff_x29 + 0x5374) = **(undefined4 **)(unaff_x29 + 0x5378);
        *(uint *)(unaff_x29 + 0x5374) =
             *(uint *)(unaff_x29 + 0x5374) ^
             (*(int *)(unaff_x29 + 0x53fc) + -0x4ce0bae4) * *(int *)(unaff_x29 + 0x53fc) <<
             (ulong)(((uint)*(undefined8 *)(unaff_x29 + 0x53d8) & 3) + 3);
        uVar2 = FUN_0000176c(*(undefined4 *)(unaff_x29 + 0x5374));
        *(undefined4 *)(unaff_x29 + 0x5374) = uVar2;
        *(uint *)(unaff_x29 + 0x5374) =
             *(int *)(unaff_x29 + 0x5374) +
             ((uint)((*(int *)(unaff_x29 + 0x53fc) + 0x30ef5cef) * *(int *)(unaff_x29 + 0x53fc)) >>
             (ulong)(((uint)*(undefined8 *)(unaff_x29 + 0x53d8) & 7) + 5));
        **(undefined4 **)(unaff_x29 + 0x5378) = *(undefined4 *)(unaff_x29 + 0x5374);
        *(long *)(unaff_x29 + 0x53d8) = *(long *)(unaff_x29 + 0x53d8) + 4;
      }
      *(long *)(unaff_x29 + 0x5400) = *(long *)(unaff_x29 + 0x5400) + *(long *)(unaff_x29 + 0x5388);
    }
    *(undefined4 *)(unaff_x29 + 0x53fc) = 0;
    *(undefined8 *)(unaff_x29 + 0x53d0) = 0;
    *(undefined1 *)(unaff_x29 + 0x53cf) = 0;
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      if ((*(long *)(unaff_x29 + 0x20) == 0) || (**(long **)(unaff_x29 + 0x20) == 0)) {
        uVar3 = FUN_00009944(*(undefined4 *)(unaff_x29 + 0x53f8));
        *(undefined8 *)(unaff_x29 + 0x53d0) = uVar3;
        if (*(long *)(unaff_x29 + 0x53d0) == 0) {
          uVar2 = FUN_0000ee68();
          uVar1 = FUN_000018dc(0,0,uVar2,1,0x1b0,1,8,*(undefined4 *)(unaff_x29 + 0x53f8));
          *(undefined1 *)(unaff_x29 + 0x540f) = uVar1;
        }
        if (*(char *)(unaff_x29 + 0x540f) != '\0') {
          *(undefined1 *)(unaff_x29 + 0x53cf) = 1;
        }
      }
      else if (*(char *)(unaff_x29 + 0x540f) != '\0') {
        *(undefined8 *)(unaff_x29 + 0x53d0) = **(undefined8 **)(unaff_x29 + 0x20);
        *(int *)(unaff_x29 + 0x53f8) = (int)**(undefined8 **)(unaff_x29 + 0x18);
      }
    }
    *(long *)(unaff_x29 + 0x5368) = unaff_x29 + 0x2340;
    FUN_0000bc40(*(undefined8 *)(unaff_x29 + 0x5368),0,0x30);
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      *(undefined4 *)(unaff_x29 + 0x53c8) = 0;
      while (*(uint *)(unaff_x29 + 0x53c8) < *(uint *)(unaff_x29 + 0x53f4)) {
        *(ulong *)(unaff_x29 + 0x5360) =
             *(long *)(unaff_x29 + 0x5368) + (ulong)*(uint *)(unaff_x29 + 0x53c8) * 0x30;
        **(undefined8 **)(unaff_x29 + 0x5360) = *(undefined8 *)(unaff_x29 + 0x5390);
        *(undefined8 *)(*(long *)(unaff_x29 + 0x5360) + 8) = *(undefined8 *)(unaff_x29 + 0x53d0);
        *(ulong *)(*(long *)(unaff_x29 + 0x5360) + 0x10) = (ulong)*(uint *)(unaff_x29 + 0x53f8);
        *(ulong *)(*(long *)(unaff_x29 + 0x5360) + 0x18) =
             *(long *)(unaff_x29 + 0x30) +
             (ulong)*(uint *)(unaff_x29 + 0x40 + (ulong)*(uint *)(unaff_x29 + 0x53c8) * 8);
        *(ulong *)(*(long *)(unaff_x29 + 0x5360) + 0x20) =
             (ulong)*(uint *)(unaff_x29 + (ulong)*(uint *)(unaff_x29 + 0x53c8) * 8 + 0x44);
        *(undefined1 *)(*(long *)(unaff_x29 + 0x5360) + 0x28) = *(undefined1 *)(unaff_x29 + 0x53f3);
        *(int *)(unaff_x29 + 0x53c8) = *(int *)(unaff_x29 + 0x53c8) + 1;
      }
    }
    if (*(char *)(unaff_x29 + 0x540f) != '\0') {
      uVar1 = FUN_0000dc5c(*(undefined8 *)(unaff_x29 + 0x5368),*(undefined4 *)(unaff_x29 + 0x53f4));
      *(undefined1 *)(unaff_x29 + 0x540f) = uVar1;
    }
    if (*(char *)(unaff_x29 + 0x540f) != '\x01') {
      if ((*(char *)(unaff_x29 + 0x53cf) != '\0') && (*(long *)(unaff_x29 + 0x53d0) != 0)) {
        FUN_000099b8(*(undefined8 *)(unaff_x29 + 0x53d0),*(undefined4 *)(unaff_x29 + 0x53f8));
      }
      *(undefined8 *)(unaff_x29 + 0x53d0) = 0;
      *(undefined4 *)(unaff_x29 + 0x53f8) = 0;
    }
    if (*(long *)(unaff_x29 + 0x20) != 0) {
      **(undefined8 **)(unaff_x29 + 0x20) = *(undefined8 *)(unaff_x29 + 0x53d0);
    }
    if (*(long *)(unaff_x29 + 0x18) != 0) {
      **(ulong **)(unaff_x29 + 0x18) = (ulong)*(uint *)(unaff_x29 + 0x53f8);
    }
    uVar1 = *(undefined1 *)(unaff_x29 + 0x540f);
  }
  return uVar1;
}


