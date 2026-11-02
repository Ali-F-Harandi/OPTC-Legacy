
undefined8 FUN_0000eb34(uint param_1,long param_2,ulong param_3)

{
  uint *puVar1;
  undefined4 local_34;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0x7b48238;
  local_8 = 0xe34eac63;
  local_34 = param_1;
  for (local_c = 0; (int)local_c < (int)(param_3 >> 2); local_c = local_c + 1) {
    puVar1 = (uint *)(param_2 + (long)(int)local_c * 4);
    local_4 = (local_4 + 0xe9fa57e4) * local_4 + local_34 + -0x71b6a98d << (ulong)(local_c & 7);
    local_8 = (local_8 + 0x4f8b1bca) * local_8 + local_34 + 0x72f6fcbe >>
              (ulong)(local_c * local_c & 0xf);
    local_34 = local_4 ^ local_8;
    *puVar1 = *puVar1 + (local_c & 0xd) * -0x4bc46451;
    *puVar1 = *puVar1 ^ (local_c & 3) * -0x50a80805;
    *puVar1 = *puVar1 - local_34;
    *puVar1 = *puVar1 ^ local_34;
  }
  return 1;
}


