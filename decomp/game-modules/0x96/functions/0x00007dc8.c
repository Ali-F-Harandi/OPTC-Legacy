
void FUN_00007dc8(uint *param_1,int param_2,byte *param_3,undefined1 *param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint *puVar15;
  ulong uVar16;
  
  uVar16 = (ulong)((param_2 >> 1) - 1);
  uVar3 = (uint)param_3[3] ^ *param_1 ^ (uint)*param_3 << 0x18 ^ (uint)param_3[1] << 0x10 ^
          (uint)param_3[2] << 8;
  uVar4 = (uint)param_3[7] ^ param_1[1] ^ (uint)param_3[4] << 0x18 ^ (uint)param_3[5] << 0x10 ^
          (uint)param_3[6] << 8;
  uVar5 = (uint)param_3[0xb] ^ param_1[2] ^ (uint)param_3[8] << 0x18 ^ (uint)param_3[9] << 0x10 ^
          (uint)param_3[10] << 8;
  uVar6 = (uint)param_3[0xf] ^ param_1[3] ^ (uint)param_3[0xc] << 0x18 ^ (uint)param_3[0xd] << 0x10
          ^ (uint)param_3[0xe] << 8;
  puVar15 = param_1;
  while( true ) {
    puVar1 = puVar15 + 8;
    uVar7 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar3 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar4 & 0xff) * 4) ^ puVar15[4] ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar6 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar5 >> 8) & 0xff) * 4);
    uVar8 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar4 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar5 & 0xff) * 4) ^ puVar15[5] ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar3 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar6 >> 8) & 0xff) * 4);
    uVar9 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar5 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar6 & 0xff) * 4) ^ puVar15[6] ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar4 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar3 >> 8) & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar3 & 0xff) * 4) ^ puVar15[7] ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar5 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar4 >> 8) & 0xff) * 4);
    if (puVar1 == param_1 + (uVar16 + 1) * 8) break;
    uVar3 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar7 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar8 & 0xff) * 4) ^ *puVar1 ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar6 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4);
    uVar4 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar8 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar9 & 0xff) * 4) ^ puVar15[9] ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar7 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar6 >> 8) & 0xff) * 4);
    uVar5 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar9 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar6 & 0xff) * 4) ^ puVar15[10] ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar8 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar7 >> 8) & 0xff) * 4);
    uVar6 = *(uint *)(&DAT_00012dd0 + (ulong)(uVar6 >> 0x18) * 4) ^
            *(uint *)(&DAT_000129d0 + (ulong)(uVar7 & 0xff) * 4) ^ puVar15[0xb] ^
            *(uint *)(&DAT_000131d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4) ^
            *(uint *)(&DAT_000135d0 + ((ulong)(uVar8 >> 8) & 0xff) * 4);
    puVar15 = puVar1;
  }
  lVar2 = uVar16 + 1;
  uVar5 = param_1[lVar2 * 8];
  uVar10 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar6 >> 0x10) & 0xff) * 4);
  uVar11 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar9 >> 8) & 0xff) * 4);
  uVar4 = *(uint *)(&DAT_000149d0 + (ulong)(uVar7 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_000149d0 + (ulong)(uVar8 & 0xff) * 4) & 0xff ^ uVar5;
  uVar3 = *(uint *)(&DAT_000149d0 + (ulong)(uVar8 >> 0x18) * 4);
  uVar12 = *(uint *)(&DAT_000149d0 + (ulong)(uVar9 & 0xff) * 4);
  param_4[3] = (char)uVar4;
  uVar13 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar7 >> 0x10) & 0xff) * 4);
  *param_4 = (char)(uVar4 >> 0x18);
  param_4[1] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar10 >> 0x10);
  param_4[2] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar11 >> 8);
  uVar10 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar6 >> 8) & 0xff) * 4);
  uVar5 = param_1[lVar2 * 8 + 1];
  uVar4 = uVar3 & 0xff000000 ^ uVar12 & 0xff ^ uVar5;
  uVar3 = *(uint *)(&DAT_000149d0 + (ulong)(uVar6 & 0xff) * 4);
  uVar12 = *(uint *)(&DAT_000149d0 + (ulong)(uVar9 >> 0x18) * 4);
  param_4[7] = (char)uVar4;
  uVar11 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar8 >> 0x10) & 0xff) * 4);
  param_4[4] = (char)(uVar4 >> 0x18);
  param_4[5] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar13 >> 0x10);
  param_4[6] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar10 >> 8);
  uVar5 = param_1[lVar2 * 8 + 2];
  uVar10 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar7 >> 8) & 0xff) * 4);
  uVar4 = uVar12 & 0xff000000 ^ uVar3 & 0xff ^ uVar5;
  uVar13 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar9 >> 0x10) & 0xff) * 4);
  uVar3 = *(uint *)(&DAT_000149d0 + (ulong)(uVar7 & 0xff) * 4);
  uVar6 = *(uint *)(&DAT_000149d0 + (ulong)(uVar6 >> 0x18) * 4);
  param_4[0xb] = (char)uVar4;
  uVar14 = *(undefined4 *)(&DAT_000149d0 + ((ulong)(uVar8 >> 8) & 0xff) * 4);
  param_4[8] = (char)(uVar4 >> 0x18);
  param_4[9] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar11 >> 0x10);
  param_4[10] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar10 >> 8);
  uVar5 = param_1[lVar2 * 8 + 3];
  uVar4 = uVar6 & 0xff000000 ^ uVar3 & 0xff ^ uVar5;
  param_4[0xc] = (char)(uVar4 >> 0x18);
  param_4[0xd] = (byte)(uVar5 >> 0x10) ^ (byte)((uint)uVar13 >> 0x10);
  param_4[0xe] = (byte)(uVar5 >> 8) ^ (byte)((uint)uVar14 >> 8);
  param_4[0xf] = (char)uVar4;
  return;
}
