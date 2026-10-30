// M3b: SD40SE_vm2 @ 0x1ef46d4 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8 SD40SE_vm2(long param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < 0x100) {
    iVar1 = 0;
  }
  else {
    iVar1 = ((int)param_2 / 0xff) * 0xff;
  }
  *(uint *)(param_1 + 0x158) = param_2 - iVar1;
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
            (*(long **)(param_1 + 0x18),*(long *)(param_1 + 0x160) + (long)iVar1,0);
  itionE10ARENA_TEAM(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8));
  return 0;
}
