// M3b: NtyObservFDS_a_vm7 @ 0x39e05a0 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8 NtyObservFDS_a_vm7(long param_1)

{
  undefined8 uVar1;
  
  rand(*(long *)(param_1 + 0x48) + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  wcrtomb(*(long *)(param_1 + 0x48) + 8);
  return uVar1;
}
