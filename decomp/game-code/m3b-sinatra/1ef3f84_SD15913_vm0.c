// M3b: SD15913_vm0 @ 0x1ef3f84 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void SD15913_vm0(long *param_1)

{
  *param_1 = lRam000000000419a168 + 0x10;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  return;
}
