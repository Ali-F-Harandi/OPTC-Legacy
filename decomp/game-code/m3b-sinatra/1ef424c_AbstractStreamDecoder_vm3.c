// M3b: AbstractStreamDecoder_vm3 @ 0x1ef424c (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

int AbstractStreamDecoder_vm3(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iStack_5c;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  iVar5 = param_3;
  if (0x1f < param_3) {
    iVar5 = 0x20;
  }
  iStack_5c = 0;
  lVar4 = SUB_1ef4338(param_1,iVar5,&iStack_5c);
  if (lVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      iVar1 = iStack_5c;
      lVar6 = (long)iStack_5c;
      strtoull(param_2,lVar4,lVar6);
      param_3 = param_3 - iVar1;
      iVar5 = iVar1 + iVar5;
      if (param_3 == 0) break;
      iVar1 = param_3;
      if (0x1f < param_3) {
        iVar1 = 0x20;
      }
      param_2 = param_2 + lVar6;
      iStack_5c = 0;
      lVar4 = SUB_1ef4338(param_1,iVar1,&iStack_5c);
    } while (lVar4 != 0);
  }
  if (*(long *)(lVar3 + 0x28) != lStack_58) {
    GOTUNRES_41b8540();
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x3f2c5d0);
    (*pcVar2)();
  }
  return iVar5;
}
