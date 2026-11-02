
int FUN_0000a888(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  return (uVar1 | uVar1 >> 0x10) + 1;
}
