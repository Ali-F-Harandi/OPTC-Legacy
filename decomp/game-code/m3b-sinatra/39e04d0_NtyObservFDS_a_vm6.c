// M3b: NtyObservFDS_a_vm6 @ 0x39e04d0 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8 NtyObservFDS_a_vm6(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (1 < (int)param_1[7]) {
    param_3 = param_3 & 0xffffffff;
    rand(param_1[9] + 8);
  }
  uVar1 = (**(code **)(*param_1 + 0x98))(param_1,param_2,param_3);
  if (1 < (int)param_1[7]) {
    wcrtomb(param_1[9] + 8);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return uVar1;
  }
  lVar2 = GOTUNRES_41b8540(uVar1);
  rand(*(long *)(lVar2 + 0x48) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  wcrtomb(*(long *)(lVar2 + 0x48) + 8);
  return uVar1;
}
