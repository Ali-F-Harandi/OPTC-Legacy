// M3b: SD40SE_vm0 @ 0x1ef45b4 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void SD40SE_vm0(long *param_1)

{
  long lVar1;
  
  *param_1 = lRam000000000419a160 + 0x10;
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
    param_1[4] = 0;
  }
  param_1[9] = 0;
  if ((param_1[6] != 0) && (param_1[5] != 0)) {
    nanosleep();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  lVar1 = lRam000000000419a168;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[7] = 0;
  *param_1 = lVar1 + 0x10;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  return;
}
