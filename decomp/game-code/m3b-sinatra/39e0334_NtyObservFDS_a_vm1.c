// M3b: NtyObservFDS_a_vm1 @ 0x39e0334 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void NtyObservFDS_a_vm1(long *param_1)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = lRam00000000041b6248 + 200;
  *param_1 = lRam00000000041b6248 + 0x10;
  param_1[3] = lVar1;
  ayer16explanationShow4Ev(param_1 + 4);
  param_1[8] = lRam000000000419a598 + 0x10;
  if ((long *)param_1[9] != (long *)0x0) {
    (**(code **)(*(long *)param_1[9] + 8))();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)UndefinedInstructionException(0,0x3f0b310);
  (*pcVar2)();
}
