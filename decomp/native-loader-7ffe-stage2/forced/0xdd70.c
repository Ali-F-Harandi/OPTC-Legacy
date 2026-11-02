
char FUN_0000dd70(undefined1 param_1,long param_2,undefined8 param_3,long *param_4,ulong *param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint auStack_53d0 [512];
  char acStack_4bd0 [6912];
  undefined1 auStack_30d0 [12292];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0 [2];
  long *local_b0;
  undefined1 *local_a8;
  uint local_9c;
  uint *local_98;
  uint *local_90;
  ulong local_88;
  undefined8 *local_80;
  uint local_78;
  undefined4 local_74;
  char *local_70;
  uint local_64;
  char *local_60;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  char local_41;
  long local_40;
  ulong local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  bool local_1d;
  uint local_1c;
  uint local_18;
  uint local_14;
  long local_10;
  char local_1;
  
  local_1 = '\x01';
  local_10 = 0;
  local_14 = (uint)(DAT_000257e8 * DAT_000257e8) >> 0x11 ^ DAT_000257e8 * DAT_000257e8 * 0x800;
  local_4c = 0;
  local_18 = 0;
  local_c4 = 0;
  DAT_000256d8 = param_1;
  FUN_0000bd64(&local_c4,param_2,4);
  iVar1 = FUN_0000176c(local_c4);
  local_c4 = local_14 * -0x784cc84 + (-0x5de204c6 << (ulong)(local_14 & 7)) + iVar1;
  local_10 = local_10 + 4;
  if (local_c4 != 0) {
    local_1c = 0;
    local_1d = false;
    local_18 = local_c4;
    if (local_1 != '\0') {
      local_50 = 0;
      local_54 = 0;
      local_c8 = 0;
      FUN_0000bd64(&local_c8,param_2 + local_10,4);
      local_c8 = FUN_0000176c(local_c8);
      local_c8 = (0x416e2af2 >> (local_14 & 0xd)) + local_14 + 0xbd19c63c ^ local_c8;
      local_1c = local_c8 & 0xff;
      local_50 = local_c8 >> 8 & 0xff;
      local_1d = local_50 == 1;
      local_10 = local_10 + 4;
      local_54 = local_c8;
    }
    if ((local_1 != '\0') && (0x100 < local_1c)) {
      uVar2 = FUN_0000ee68();
      local_1 = FUN_000018dc(0,0,uVar2,1,0x14a,1,7,local_1c,0,0);
    }
    local_24 = 0;
    if (local_1 != '\0') {
      local_cc = 0;
      FUN_0000bd64(&local_cc,param_2 + local_10,4);
      iVar1 = FUN_0000176c(local_cc);
      local_cc = ((0x643a3a3b << (ulong)(local_14 & 0xb)) - (local_14 ^ 0x3b2bf538)) + iVar1;
      local_10 = local_10 + 4;
      local_24 = local_cc;
    }
    FUN_0000bc40(acStack_4bd0,0,0x1b00);
    if (local_1 != '\0') {
      FUN_0000bd64(acStack_4bd0,param_2 + local_10,local_24);
      local_60 = acStack_4bd0;
      local_64 = local_24 >> 2;
      for (local_28 = 0; local_28 < local_64; local_28 = local_28 + 1) {
        local_70 = local_60 + (ulong)local_28 * 4;
        local_74 = *(undefined4 *)local_70;
        local_74 = FUN_0000176c(local_74);
        *(undefined4 *)local_70 = local_74;
      }
      for (local_2c = 0; local_2c < local_24; local_2c = local_2c + 1) {
        local_78 = (local_14 + 0xf1cb5b81) * local_14 << (ulong)(local_2c & 0x1b);
        iVar1 = FUN_0000176c(local_78);
        local_78 = iVar1 - ((local_14 + 0xce18397e) * local_14 >> (ulong)(local_2c & 0x17)) >>
                   (ulong)(local_2c & 0x1f);
        acStack_4bd0[local_2c] = acStack_4bd0[local_2c] + (char)local_78;
      }
      local_10 = local_10 + (ulong)local_24;
      local_10 = FUN_0000d45c(local_10,4,1);
    }
    local_80 = local_c0;
    FUN_0000bc40(local_80,0,0xc);
    if (local_1 != '\0') {
      *local_80 = acStack_4bd0;
      *(uint *)(local_80 + 1) = local_24;
    }
    FUN_0000bc40(auStack_53d0,0,0x800);
    if (local_1 != '\0') {
      local_88 = (ulong)local_1c << 3;
      FUN_0000bd64(auStack_53d0,param_2 + local_10,local_88);
      local_90 = auStack_53d0;
      for (local_38 = 0; local_38 < local_88; local_38 = local_38 + 4) {
        local_98 = (uint *)((long)local_90 + local_38);
        local_9c = *local_98 ^
                   (local_14 + 0xb31f451c) * local_14 << (ulong)(((uint)local_38 & 3) + 3);
        iVar1 = FUN_0000176c(local_9c);
        local_9c = iVar1 + ((local_14 + 0x30ef5cef) * local_14 >> (ulong)(((uint)local_38 & 7) + 5))
        ;
        *local_98 = local_9c;
      }
      local_10 = local_10 + local_88;
    }
    local_14 = 0;
    local_40 = 0;
    local_41 = '\0';
    if (local_1 != '\0') {
      if ((param_4 == (long *)0x0) || (*param_4 == 0)) {
        local_40 = FUN_00009944(local_18);
        if (local_40 == 0) {
          uVar2 = FUN_0000ee68();
          local_1 = FUN_000018dc(0,0,uVar2,1,0x1b0,1,8,local_18,0,0);
        }
        if (local_1 != '\0') {
          local_41 = '\x01';
        }
      }
      else if (local_1 != '\0') {
        local_40 = *param_4;
        local_18 = (uint)*param_5;
      }
    }
    local_a8 = auStack_30d0;
    FUN_0000bc40(local_a8,0,0x30);
    if (local_1 != '\0') {
      for (local_48 = 0; local_48 < local_1c; local_48 = local_48 + 1) {
        local_b0 = (long *)(local_a8 + (ulong)local_48 * 0x30);
        *local_b0 = (long)local_80;
        local_b0[1] = local_40;
        local_b0[2] = (ulong)local_18;
        local_b0[3] = param_2 + (ulong)auStack_53d0[(ulong)local_48 * 2];
        local_b0[4] = (ulong)auStack_53d0[(ulong)local_48 * 2 + 1];
        *(bool *)(local_b0 + 5) = local_1d;
      }
    }
    if (local_1 != '\0') {
      local_1 = FUN_0000dc5c(local_a8,local_1c);
    }
    if (local_1 != '\x01') {
      if ((local_41 != '\0') && (local_40 != 0)) {
        FUN_000099b8(local_40,local_18);
      }
      local_40 = 0;
      local_18 = 0;
    }
    if (param_4 != (long *)0x0) {
      *param_4 = local_40;
    }
    if (param_5 != (ulong *)0x0) {
      *param_5 = (ulong)local_18;
    }
  }
  return local_1;
}


