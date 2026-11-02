
void FORCED_0xfff4(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  uint *in_stack_00000018;
  int iStack000000000000003c;
  uint uStack0000000000000040;
  uint uStack0000000000000044;
  uint uStack0000000000000048;
  uint uStack000000000000004c;
  
  uStack0000000000000044 =
       param_1 << 0x18 ^ (uint)*(byte *)(in_stack_00000008 + 9) << 0x10 ^
       (uint)*(byte *)(in_stack_00000008 + 10) << 8 ^ (uint)*(byte *)(in_stack_00000008 + 0xb) ^
       in_stack_00000018[2];
  uStack0000000000000040 =
       (uint)*(byte *)(in_stack_00000008 + 0xc) << 0x18 ^
       (uint)*(byte *)(in_stack_00000008 + 0xd) << 0x10 ^
       (uint)*(byte *)(in_stack_00000008 + 0xe) << 8 ^ (uint)*(byte *)(in_stack_00000008 + 0xf) ^
       in_stack_00000018[3];
  iStack000000000000003c = in_stack_00000010._4_4_ >> 1;
  while( true ) {
    uVar2 = *(uint *)(&DAT_00011d10 + (ulong)(uStack000000000000004c >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(uStack0000000000000040 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(uStack0000000000000044 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(uStack0000000000000048 & 0xff) * 4) ^
            in_stack_00000018[4];
    uVar3 = *(uint *)(&DAT_00011d10 + (ulong)(uStack0000000000000048 >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(uStack000000000000004c >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(uStack0000000000000040 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(uStack0000000000000044 & 0xff) * 4) ^
            in_stack_00000018[5];
    uVar4 = *(uint *)(&DAT_00011d10 + (ulong)(uStack0000000000000044 >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(uStack0000000000000048 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(uStack000000000000004c >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(uStack0000000000000040 & 0xff) * 4) ^
            in_stack_00000018[6];
    uVar5 = *(uint *)(&DAT_00011d10 + (ulong)(uStack0000000000000040 >> 0x18) * 4) ^
            *(uint *)(&DAT_00012110 + (ulong)(uStack0000000000000044 >> 0x10 & 0xff) * 4) ^
            *(uint *)(&DAT_00012510 + (ulong)(uStack0000000000000048 >> 8 & 0xff) * 4) ^
            *(uint *)(&DAT_00012910 + (ulong)(uStack000000000000004c & 0xff) * 4) ^
            in_stack_00000018[7];
    puVar1 = in_stack_00000018 + 8;
    iStack000000000000003c = iStack000000000000003c + -1;
    if (iStack000000000000003c == 0) break;
    uStack000000000000004c =
         *(uint *)(&DAT_00011d10 + (ulong)(uVar2 >> 0x18) * 4) ^
         *(uint *)(&DAT_00012110 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) ^
         *(uint *)(&DAT_00012510 + (ulong)(uVar4 >> 8 & 0xff) * 4) ^
         *(uint *)(&DAT_00012910 + (ulong)(uVar3 & 0xff) * 4) ^ *puVar1;
    uStack0000000000000048 =
         *(uint *)(&DAT_00011d10 + (ulong)(uVar3 >> 0x18) * 4) ^
         *(uint *)(&DAT_00012110 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) ^
         *(uint *)(&DAT_00012510 + (ulong)(uVar5 >> 8 & 0xff) * 4) ^
         *(uint *)(&DAT_00012910 + (ulong)(uVar4 & 0xff) * 4) ^ in_stack_00000018[9];
    uStack0000000000000044 =
         *(uint *)(&DAT_00011d10 + (ulong)(uVar4 >> 0x18) * 4) ^
         *(uint *)(&DAT_00012110 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) ^
         *(uint *)(&DAT_00012510 + (ulong)(uVar2 >> 8 & 0xff) * 4) ^
         *(uint *)(&DAT_00012910 + (ulong)(uVar5 & 0xff) * 4) ^ in_stack_00000018[10];
    uStack0000000000000040 =
         *(uint *)(&DAT_00011d10 + (ulong)(uVar5 >> 0x18) * 4) ^
         *(uint *)(&DAT_00012110 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) ^
         *(uint *)(&DAT_00012510 + (ulong)(uVar3 >> 8 & 0xff) * 4) ^
         *(uint *)(&DAT_00012910 + (ulong)(uVar2 & 0xff) * 4) ^ in_stack_00000018[0xb];
    in_stack_00000018 = puVar1;
  }
  uVar6 = *(uint *)(&DAT_00012d10 + (ulong)(uVar2 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar5 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar4 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar3 & 0xff) * 4) & 0xff ^ *puVar1;
  *in_stack_00000000 = (char)(uVar6 >> 0x18);
  in_stack_00000000[1] = (char)(uVar6 >> 0x10);
  in_stack_00000000[2] = (char)(uVar6 >> 8);
  in_stack_00000000[3] = (char)uVar6;
  uVar6 = *(uint *)(&DAT_00012d10 + (ulong)(uVar3 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar2 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar5 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar4 & 0xff) * 4) & 0xff ^ in_stack_00000018[9];
  in_stack_00000000[4] = (char)(uVar6 >> 0x18);
  in_stack_00000000[5] = (char)(uVar6 >> 0x10);
  in_stack_00000000[6] = (char)(uVar6 >> 8);
  in_stack_00000000[7] = (char)uVar6;
  uVar6 = *(uint *)(&DAT_00012d10 + (ulong)(uVar4 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar3 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar2 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar5 & 0xff) * 4) & 0xff ^ in_stack_00000018[10];
  in_stack_00000000[8] = (char)(uVar6 >> 0x18);
  in_stack_00000000[9] = (char)(uVar6 >> 0x10);
  in_stack_00000000[10] = (char)(uVar6 >> 8);
  in_stack_00000000[0xb] = (char)uVar6;
  uVar2 = *(uint *)(&DAT_00012d10 + (ulong)(uVar5 >> 0x18) * 4) & 0xff000000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar4 >> 0x10 & 0xff) * 4) & 0xff0000 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar3 >> 8 & 0xff) * 4) & 0xff00 ^
          *(uint *)(&DAT_00012d10 + (ulong)(uVar2 & 0xff) * 4) & 0xff ^ in_stack_00000018[0xb];
  in_stack_00000000[0xc] = (char)(uVar2 >> 0x18);
  in_stack_00000000[0xd] = (char)(uVar2 >> 0x10);
  in_stack_00000000[0xe] = (char)(uVar2 >> 8);
  in_stack_00000000[0xf] = (char)uVar2;
  return;
}


