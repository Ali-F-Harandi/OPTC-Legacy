// M3b: DecPlane15912_vm1 @ 0x1f1ce78 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void DecPlane15912_vm1(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[1];
  *param_1 = lRam000000000419a570 + 0x10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x3f0b310);
  (*pcVar1)();
}
