
bool FORCED_0xcf54(char *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uStack0000000000000008;
  undefined8 uStack0000000000000010;
  char *pcStack0000000000000018;
  char cStack0000000000000028;
  
  cStack0000000000000028 = '\0';
  uStack0000000000000008 = param_3;
  uStack0000000000000010 = param_2;
  pcStack0000000000000018 = param_1;
  for (; *param_1 != '\0'; param_1 = param_1 + lVar3 + 1) {
    lVar3 = FUN_0000c25c(param_1,0x2f);
    if (lVar3 == 0) {
      lVar3 = FUN_0000be74(param_1);
    }
    else {
      lVar3 = lVar3 - (long)param_1;
    }
    if (lVar3 != 0) {
      FUN_0000c4c4(&stack0x00001028,param_1,lVar3);
      (&stack0x00001028)[lVar3] = 0;
      iVar2 = FUN_0000bf80(&stack0x00001028,&stack0x00002038);
      if (iVar2 != 0) {
        iVar2 = FUN_0000bf80(&stack0x00001028,&stack0x00002028);
        if (iVar2 == 0) {
          FUN_0000cef0(&stack0x00000028);
        }
        else {
          FUN_0000c548(&stack0x00000028,&stack0x00002048);
          FUN_0000c548(&stack0x00000028,&stack0x00001028);
        }
      }
    }
    if (param_1[lVar3] == '\0') break;
  }
  if (cStack0000000000000028 == '\0') {
    FUN_0000c548(&stack0x00000028,&stack0x00002048);
  }
  uVar4 = FUN_0000be74(&stack0x00000028);
  bVar1 = uVar4 <= uStack0000000000000008;
  if (bVar1) {
    FUN_0000c4c4(uStack0000000000000010,&stack0x00000028,uStack0000000000000008);
  }
  return bVar1;
}


