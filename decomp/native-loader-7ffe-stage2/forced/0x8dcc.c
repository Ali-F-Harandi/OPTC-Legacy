
bool FORCED_0x8dcc(void)

{
  bool bVar1;
  char cVar2;
  long unaff_x29;
  
  cVar2 = FUN_00008ce4();
  if (cVar2 == '\x01') {
    *(undefined8 *)(unaff_x29 + 0x28) = *(undefined8 *)(unaff_x29 + 0x18);
    bVar1 = *(char *)(*(long *)(unaff_x29 + 0x28) + 5) == '\x01';
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


