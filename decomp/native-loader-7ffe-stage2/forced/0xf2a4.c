
ushort FUN_0000f2a4(undefined8 param_1,long param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  uint local_10;
  uint local_c;
  uint local_8;
  
  uVar3 = FUN_0000f1b4(param_1);
  puVar1 = (ushort *)(param_2 + (long)(int)(uVar3 & 0xff) * 3);
  if ((*puVar1 & 0x8000) == 0) {
    local_8 = (uint)(byte)puVar1[1];
    uVar2 = *puVar1;
    local_10 = 1 << (ulong)(local_8 & 0x1f);
    while( true ) {
      local_8 = local_8 + 1;
      local_c = uVar2 & 0x7fff;
      puVar1 = (ushort *)(param_2 + (long)(int)(local_c + ((local_10 & uVar3) != 0)) * 3);
      if ((*puVar1 & 0x8000) != 0) break;
      uVar2 = *puVar1;
      local_10 = local_10 << 1;
    }
    uVar2 = *puVar1;
  }
  else {
    local_8 = (uint)(byte)puVar1[1];
    uVar2 = *puVar1;
  }
  FUN_0000f200(param_1,local_8);
  return uVar2 & 0x7fff;
}


