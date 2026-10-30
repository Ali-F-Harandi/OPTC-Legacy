// M3b: AbstractStreamDecoder_vm2 @ 0x1ef41e8 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8 AbstractStreamDecoder_vm2(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = param_2 & 0x1f;
  uVar2 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  lVar3 = 0;
  if (0x20 < param_2) {
    lVar3 = (long)(int)(uVar2 & 0xffffffe0);
  }
  if ((int)param_2 < 1) {
    uVar1 = -(-param_2 & 0x1f);
  }
  lVar4 = **(long **)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(uint *)(param_1 + 0x4c) = uVar1;
  (**(code **)(lVar4 + 0x30))(*(long **)(param_1 + 0x18),*(long *)(param_1 + 0x50) + lVar3,0);
  return 0;
}
