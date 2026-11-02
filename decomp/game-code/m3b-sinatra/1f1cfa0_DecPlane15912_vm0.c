// M3b: DecPlane15912_vm0 @ 0x1f1cfa0 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void DecPlane15912_vm0(long *param_1)

{
  *param_1 = lRam000000000419a570 + 0x10;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  return;
}
