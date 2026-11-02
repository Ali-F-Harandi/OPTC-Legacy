// M3b: NtyObservFDS_b_vm0 @ 0x39e07c8 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void NtyObservFDS_b_vm0(long *param_1)

{
  long lVar1;
  
  lVar1 = lRam00000000041b6248 + 200;
  param_1[-3] = lRam00000000041b6248 + 0x10;
  *param_1 = lVar1;
  ayer16explanationShow4Ev(param_1 + 1);
  param_1[5] = lRam000000000419a598 + 0x10;
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
    param_1[6] = 0;
  }
  return;
}
