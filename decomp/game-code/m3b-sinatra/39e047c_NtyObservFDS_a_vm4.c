// M3b: NtyObservFDS_a_vm4 @ 0x39e047c (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8 NtyObservFDS_a_vm4(long param_1)

{
  if ((1 < *(int *)(param_1 + 0x38)) &&
     (rand(*(long *)(param_1 + 0x48) + 8), 1 < *(int *)(param_1 + 0x38))) {
    wcrtomb(*(long *)(param_1 + 0x48) + 8);
  }
  return 0xffffffffffffffff;
}
