// M3b: SD15918plane_vm1 @ 0x1ef3fc8 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void SD15918plane_vm1(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  *param_1 = lRam000000000419a168 + 0x10;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0,0x3f0b310);
  (*pcVar1)();
}
