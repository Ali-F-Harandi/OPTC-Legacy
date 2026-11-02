// M3d: IO_FileStream_open @ 0x39f3a88 (Ghidra decompile, true address)
#

long * m3d_39f3a88(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)func_0x03fa3660();
  plStack_40 = plVar2;
  uVar3 = (**(code **)(*plVar2 + 0x80))(plVar2,param_1,param_2);
  if ((uVar3 & 1) == 0) {
    func_0x03fa3680(&plStack_40,1);
    plVar2 = (long *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return plVar2;
  }
  plVar2 = (long *)func_0x03f0b330();
  uVar3 = (**(code **)(*plVar2 + 0x80))();
  if ((uVar3 & 1) == 0) {
    plVar2 = (long *)0x0;
  }
  return plVar2;
}


