
void FUN_0000820c(uint *param_1,ulong param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint local_28 [8];
  long local_8;
  
  local_8 = *(long *)PTR_DAT_00029e38;
  if ((param_1 != (uint *)0x0) && (param_3 != (undefined2 *)0x0)) {
    cVar5 = FUN_0000708c(*param_3);
    if (cVar5 != '\0') {
      uVar6 = FUN_000070b4(*param_3);
      uVar3 = param_3[1];
      if (uVar6 == uVar3) {
        iVar7 = (int)(param_2 >> 4);
        local_28[0] = 0;
        local_28[1] = 0;
        local_28[2] = 0;
        local_28[3] = 0;
        local_28[4] = 0;
        local_28[5] = 0;
        local_28[6] = 0;
        local_28[7] = 0;
        if (0 < iVar7) {
          puVar8 = param_1;
          puVar4 = local_28 + 4;
          puVar10 = local_28;
          while( true ) {
            puVar9 = puVar4;
            uVar6 = puVar8[3];
            uVar1 = *puVar8;
            uVar2 = puVar8[2];
            puVar9[1] = puVar8[1];
            puVar9[2] = uVar2;
            puVar9[3] = uVar6;
            *puVar9 = uVar1;
            FUN_00007dc8(param_3 + 2,uVar3,puVar9,puVar8);
            uVar6 = puVar10[1];
            uVar1 = puVar10[2];
            uVar2 = puVar10[3];
            *puVar8 = *puVar8 ^ *puVar10;
            puVar8[1] = puVar8[1] ^ uVar6;
            puVar8[2] = puVar8[2] ^ uVar1;
            puVar8[3] = puVar8[3] ^ uVar2;
            if (puVar8 + 4 == param_1 + ((ulong)(iVar7 - 1) + 1) * 4) break;
            uVar3 = param_3[1];
            puVar8 = puVar8 + 4;
            puVar4 = puVar10;
            puVar10 = puVar9;
          }
        }
        goto LAB_0000825c;
      }
    }
  }
  cVar5 = '\0';
LAB_0000825c:
  if (local_8 != *(long *)PTR_DAT_00029e38) {
                    /* WARNING: Subroutine does not return */
    FUN_0001249c(cVar5);
  }
  return;
}
