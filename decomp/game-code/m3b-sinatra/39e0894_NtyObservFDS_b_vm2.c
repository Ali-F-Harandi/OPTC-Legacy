// M3b: NtyObservFDS_b_vm2 @ 0x39e0894 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

int NtyObservFDS_b_vm2(long param_1)

{
  int iVar1;
  
  rand(*(long *)(param_1 + 0x30) + 8);
  iVar1 = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x20) < 1) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x20) = iVar1;
  wcrtomb(*(long *)(param_1 + 0x30) + 8);
  return iVar1;
}
