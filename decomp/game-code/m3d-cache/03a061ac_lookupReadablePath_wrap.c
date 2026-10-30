// M3d: lookupReadablePath_wrap @ 0x3a061ac (Ghidra decompile, true address)
#

undefined4 m3d_3a061ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  func_0x03fa40c0();
  uVar4 = *(undefined8 *)(param_3 + 8);
  plVar1 = (long *)func_0x03f25160();
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,uVar4);
  uVar3 = 0;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x80000000;
  }
  return uVar3;
}


