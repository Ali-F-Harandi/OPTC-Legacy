
bool FUN_00009388(void)

{
  int *piVar1;
  
  piVar1 = DAT_000235f0;
  if (DAT_000235f0 == (int *)0x0) {
    piVar1 = (int *)&DAT_000235a0;
  }
  return *piVar1 != 0;
}
