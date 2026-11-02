// M3b: NtyObservFDS_a_vm2 @ 0x39e039c (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8
NtyObservFDS_a_vm2(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  if (1 < (int)param_1[7]) {
    rand(param_1[9] + 8);
  }
  uVar1 = (**(code **)(*param_1 + 0xa0))(param_1,param_2,param_3,param_4);
  if (1 < (int)param_1[7]) {
    wcrtomb(param_1[9] + 8);
  }
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return uVar1;
  }
  lVar2 = GOTUNRES_41b8540(uVar1);
  if ((1 < *(int *)(lVar2 + 0x38)) &&
     (rand(*(long *)(lVar2 + 0x48) + 8), 1 < *(int *)(lVar2 + 0x38))) {
    wcrtomb(*(long *)(lVar2 + 0x48) + 8);
  }
  return 0xffffffffffffffff;
}
