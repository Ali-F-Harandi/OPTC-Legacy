
undefined8 FUN_00001990(long param_1,long param_2,long *param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  
  if ((param_1 != 0) && (cVar2 = FUN_0000b0b8(param_1), cVar2 == '\x01')) {
    lVar3 = *param_3;
    iVar1 = *param_4;
    lVar4 = FUN_0000be74(param_1);
    if (param_2 != 0) {
      param_2 = param_2 + lVar3;
      FUN_0000c440(param_2,param_1);
      if (*(char *)(param_2 + lVar4 + -1) == '/') {
        *(undefined1 *)(param_2 + lVar4 + -1) = 0;
      }
    }
    *param_3 = lVar4 + lVar3 + 1;
    *param_4 = iVar1 + 1;
  }
  return 1;
}


