
void FUN_00002758(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  uVar1 = ctr_el0;
  lVar2 = (long)(4 << (ulong)((uint)((ulong)uVar1 >> 0x10) & 0xf));
  for (local_28 = -lVar2 & param_1; local_28 < param_2; local_28 = local_28 + lVar2) {
    DC_CVAU(local_28);
  }
  UnkSytemRegWrite(0,3,3,0xb,4,0);
  lVar2 = (long)(4 << (ulong)((uint)uVar1 & 0xf));
  for (local_20 = -lVar2 & param_1; local_20 < param_2; local_20 = local_20 + lVar2) {
    IC_IVAU(local_20);
  }
  UnkSytemRegWrite(0,3,3,0xb,4,0);
  InstructionSynchronizationBarrier();
  return;
}
