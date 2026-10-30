// M3b: NtyObservFDS_a_vm8 @ 0x39e05e0 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

long NtyObservFDS_a_vm8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  rand(*(long *)(param_1 + 0x48) + 8);
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 == -1) {
    lVar3 = (**(code **)(**(long **)(param_1 + 0x20) + 0x40))();
    *(long *)(param_1 + 0x30) = lVar3;
  }
  wcrtomb(*(long *)(param_1 + 0x48) + 8);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return lVar3;
  }
  GOTUNRES_41b8540();
  lVar1 = func_0x01a79244();
  return lVar1;
}
