// M3b: SD15918plane_vm2 @ 0x1ef4010 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8 SD15918plane_vm2(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,(long)param_2,0);
    return uVar2;
  }
  return 0xffffffff;
}
