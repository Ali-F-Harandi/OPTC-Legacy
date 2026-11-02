
void FUN_0000ff24(uint *param_1,int param_2,byte *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *local_38;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = (uint)*param_3 << 0x18 ^ (uint)param_3[1] << 0x10 ^ (uint)param_3[2] << 8 ^
            (uint)param_3[3] ^ *param_1;
  local_8 = (uint)param_3[4] << 0x18 ^ (uint)param_3[5] << 0x10 ^ (uint)param_3[6] << 8 ^
            (uint)param_3[7] ^ param_1[1];
  local_c = (uint)param_3[8] << 0x18 ^ (uint)param_3[9] << 0x10 ^ (uint)param_3[10] << 8 ^
            (uint)param_3[0xb] ^ param_1[2];
  local_10 = (uint)param_3[0xc] << 0x18 ^ (uint)param_3[0xd] << 0x10 ^ (uint)param_3[0xe] << 8 ^
             (uint)param_3[0xf] ^ param_1[3];
  local_14 = param_2 >> 1;
  local_38 = param_1;
  while( true ) {
    uVar2 = *(uint *)(&DAT_00011d10 + (ulong)(local_4 >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(local_10 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(local_c >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(local_8 & 0xff) * 4) ^ local_38[4];
    uVar3 = *(uint *)(&DAT_00011d10 + (ulong)(local_8 >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(local_4 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(local_10 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(local_c & 0xff) * 4) ^ local_38[5];
    uVar4 = *(uint *)(&DAT_00011d10 + (ulong)(local_c >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(local_8 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(local_4 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(local_10 & 0xff) * 4) ^ local_38[6];
    uVar5 = *(uint *)(&DAT_00011d10 + (ulong)(local_10 >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(local_c >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(local_8 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(local_4 & 0xff) * 4) ^ local_38[7];
    puVar1 = local_38 + 8;
    local_14 = local_14 + -1;
    if (local_14 == 0) break;
    local_4 = *(uint *)(&DAT_00011d10 + (ulong)(uVar2 >> 0x18) * 4) ^
              *(uint *)(&DAT_00012110 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00012510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00012910 + (ulong)(uVar3 & 0xff) * 4) ^ *puVar1;
    local_8 = *(uint *)(&DAT_00011d10 + (ulong)(uVar3 >> 0x18) * 4) ^
              *(uint *)(&DAT_00012110 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00012510 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00012910 + (ulong)(uVar4 & 0xff) * 4) ^ local_38[9];
    local_c = *(uint *)(&DAT_00011d10 + (ulong)(uVar4 >> 0x18) * 4) ^
              *(uint *)(&DAT_00012110 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_00012510 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_00012910 + (ulong)(uVar5 & 0xff) * 4) ^ local_38[10];
    local_10 = *(uint *)(&DAT_00011d10 + (ulong)(uVar5 >> 0x18) * 4) ^
               *(uint *)(&DAT_00012110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_00012510 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_00012910 + (ulong)(uVar2 & 0xff) * 4) ^ local_38[0xb];
    local_38 = puVar1;
  }
  uVar6 = *(uint *)(&DAT_00012d10 + (ulong)(uVar2 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar4 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar3 & 0xff) * 4) & 0xff ^ *puVar1;
  *param_4 = (char)(uVar6 >> 0x18);
  param_4[1] = (char)(uVar6 >> 0x10);
  param_4[2] = (char)(uVar6 >> 8);
  param_4[3] = (char)uVar6;
  uVar6 = *(uint *)(&DAT_00012d10 + (ulong)(uVar3 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar5 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar4 & 0xff) * 4) & 0xff ^ local_38[9];
  param_4[4] = (char)(uVar6 >> 0x18);
  param_4[5] = (char)(uVar6 >> 0x10);
  param_4[6] = (char)(uVar6 >> 8);
  param_4[7] = (char)uVar6;
  uVar6 = *(uint *)(&DAT_00012d10 + (ulong)(uVar4 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar2 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar5 & 0xff) * 4) & 0xff ^ local_38[10];
  param_4[8] = (char)(uVar6 >> 0x18);
  param_4[9] = (char)(uVar6 >> 0x10);
  param_4[10] = (char)(uVar6 >> 8);
  param_4[0xb] = (char)uVar6;
  uVar2 = *(uint *)(&DAT_00012d10 + (ulong)(uVar5 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar3 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar2 & 0xff) * 4) & 0xff ^ local_38[0xb];
  param_4[0xc] = (char)(uVar2 >> 0x18);
  param_4[0xd] = (char)(uVar2 >> 0x10);
  param_4[0xe] = (char)(uVar2 >> 8);
  param_4[0xf] = (char)uVar2;
  return;
}


