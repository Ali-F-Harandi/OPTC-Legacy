// M3b: SD15918plane_vm3 @ 0x1ef4044 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

undefined8 SD15918plane_vm3(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
    return uVar2;
  }
  return 0xffffffff;
}
