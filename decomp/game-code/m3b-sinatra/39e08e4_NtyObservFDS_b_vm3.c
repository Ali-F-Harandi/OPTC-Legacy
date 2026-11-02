// M3b: NtyObservFDS_b_vm3 @ 0x39e08e4 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

int NtyObservFDS_b_vm3(long param_1)

{
  int iVar1;
  
  rand(*(long *)(param_1 + 0x30) + 8);
  iVar1 = *(int *)(param_1 + 0x20) + 1;
  *(int *)(param_1 + 0x20) = iVar1;
  wcrtomb(*(long *)(param_1 + 0x30) + 8);
  return iVar1;
}
