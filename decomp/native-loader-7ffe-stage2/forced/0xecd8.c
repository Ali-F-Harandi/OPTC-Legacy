
char FUN_0000ecd8(undefined8 param_1,long param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  uint local_24;
  char local_1;
  
  local_1 = '\x01';
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  iVar4 = *param_3;
  local_24 = 0;
  uVar5 = param_3[1];
  local_28 = 0;
  while( true ) {
    if (uVar5 <= local_28) {
      return local_1;
    }
    piVar1 = (int *)((long)param_3 + (ulong)local_28 * 0x10 + (ulong)uVar2);
    iVar6 = piVar1[2];
    if (local_1 != '\0') {
      local_1 = FUN_0000ee70(param_1,param_2 + (ulong)(uint)(*piVar1 + iVar4),piVar1[1],
                             (long)param_3 + (ulong)local_24 + (ulong)uVar3,iVar6);
    }
    local_24 = local_24 + iVar6;
    if (local_1 != '\x01') break;
    local_28 = local_28 + 1;
  }
  return local_1;
}


