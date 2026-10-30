// M3d: gnpK @ 0x3a010f0 (Ghidra decompile, true address)
#

/* WARNING: Removing unreachable block (ram,0x03a0119c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 m3d_3a010f0(long param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 in_x9;
  undefined8 in_x10;
  undefined8 in_x11;
  long unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x21 + 0x34) = in_x9;
  *(undefined1 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x21 + 0x6c) = in_x9;
  *(undefined1 *)(unaff_x29 + -0x80) = 0;
  *(undefined8 *)(unaff_x21 + 0xa4) = in_x9;
  *(undefined1 *)(unaff_x29 + -0x48) = 0;
  *(undefined8 *)(unaff_x21 + 0xdc) = in_x9;
  *(undefined2 *)(unaff_x29 + -0x18) = 0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  *(undefined1 *)(unaff_x29 + -0xc4) = 0;
  *(undefined8 *)(unaff_x29 + -0x100) = in_x10;
  *(undefined8 *)(unaff_x29 + -0xf8) = in_x11;
  *(undefined8 *)(unaff_x29 + -0xc0) = unaff_x22;
  *(undefined1 *)(unaff_x29 + -0x8c) = 0;
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x23;
  *(undefined1 *)(unaff_x29 + -0x54) = 0;
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x25;
  *(undefined1 *)(unaff_x29 + -0x1c) = 0;
  *(undefined4 *)(unaff_x29 + -0x14) = 0;
  *(undefined1 *)(unaff_x29 + -0xf0) = 0;
  iVar3 = func_0x03fa3eb0(uVar5);
  if (iVar3 < 0) {
    func_0x03fa2550(&stack0x00000010);
    uVar4 = func_0x03fa3f00(*unaff_x26,&stack0x00000010,&stack0x00000008);
  }
  else {
    uVar4 = 0;
  }
  *(long *)(unaff_x29 + -0x100) = unaff_x24 + 0x10;
  if ((*(char *)(unaff_x29 + -0x1c) != '\0') && (*(long *)(unaff_x29 + -0x50) != 0)) {
    func_0x03f0ca10();
  }
  *(undefined8 *)(unaff_x29 + -0x50) = unaff_x25;
  uVar5 = _s__01460058;
  cVar1 = *(char *)(unaff_x29 + -0x54);
  *(undefined1 *)(unaff_x29 + -0x1c) = 0;
  *(undefined4 *)(unaff_x29 + -0x28) = 0x20;
  *(undefined8 *)(unaff_x21 + 0xdc) = uVar5;
  *(undefined1 *)(unaff_x29 + -0x48) = 0;
  if ((cVar1 != '\0') && (*(long *)(unaff_x29 + -0x88) != 0)) {
    func_0x03f0ca10();
  }
  cVar1 = *(char *)(unaff_x29 + -0x8c);
  *(undefined8 *)(unaff_x29 + -0x88) = unaff_x23;
  *(undefined4 *)(unaff_x29 + -0x60) = 0x20;
  *(undefined1 *)(unaff_x29 + -0x54) = 0;
  *(undefined8 *)(unaff_x21 + 0xa4) = uVar5;
  *(undefined1 *)(unaff_x29 + -0x80) = 0;
  if ((cVar1 != '\0') && (*(long *)(unaff_x29 + -0xc0) != 0)) {
    func_0x03f0ca10();
  }
  *(undefined8 *)(unaff_x29 + -0xc0) = unaff_x22;
  *(undefined4 *)(unaff_x29 + -0x98) = 0x20;
  cVar1 = *(char *)(unaff_x29 + -0xc4);
  *(undefined1 *)(unaff_x29 + -0x8c) = 0;
  *(undefined8 *)(unaff_x21 + 0x6c) = uVar5;
  *(undefined1 *)(unaff_x29 + -0xb8) = 0;
  if ((cVar1 != '\0') && (*(long *)(unaff_x29 + -0xf8) != 0)) {
    func_0x03f0ca10();
  }
  if (*(long *)(unaff_x20 + 0x28) != *(long *)(unaff_x29 + -0x10)) {
    func_0x03f0b330();
    if (*plRam00000000041b64a8 == 0) {
      return 0xc0000002;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x3fa3f50);
    (*pcVar2)();
  }
  return uVar4;
}


