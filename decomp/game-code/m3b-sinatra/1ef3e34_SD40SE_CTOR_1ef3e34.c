// M3b: SD40SE_CTOR_1ef3e34 @ 0x1ef3e34 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void SD40SE_CTOR_1ef3e34(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = lRam000000000419a160;
  param_1[2] = 0;
  param_1[3] = (long)param_2;
  param_1[5] = 0;
  *param_1 = lVar3 + 0x10;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((long)param_1 + 0x14f) = 0;
  *(undefined8 *)((long)param_1 + 0x147) = 0;
  plVar1 = (long *)SUB_3f0b124(0x38);
  lVar3 = lRam0000000004187ac8 + 0x10;
  plVar1[4] = 0;
  plVar1[3] = 0;
  plVar1[6] = 0;
  plVar1[5] = 0;
  uVar2 = *(undefined8 *)(param_3 + 8);
  *plVar1 = lVar3;
  plVar1[2] = 0;
  plVar1[1] = 0;
  lVar3 = rObject23updateCharacterPositionE10ARENA_TEAM(uVar2);
  plVar1[1] = lVar3;
  param_1[4] = (long)plVar1;
  itionE10ARENA_TEAM();
  lVar3 = (**(code **)(*param_2 + 0x38))(param_2);
  param_1[0x2c] = lVar3;
  return;
}
