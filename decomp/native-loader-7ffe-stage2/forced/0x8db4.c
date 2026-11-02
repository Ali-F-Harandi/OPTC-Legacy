
bool FUN_00008db4(long param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = FUN_00008ce4(param_1,param_2);
  if (cVar2 == '\x01') {
    bVar1 = *(char *)(param_1 + 5) == '\x01';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


