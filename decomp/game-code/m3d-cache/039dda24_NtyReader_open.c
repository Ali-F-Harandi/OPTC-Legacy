// M3d: NtyReader_open @ 0x39dda24 (Ghidra decompile, true address)
#

ulong m3d_39dda24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = func_0x03f2cc80(param_2,0x40000000);
  if (uVar3 != 0) {
    lVar4 = func_0x03f0b2d0(param_2);
    lVar1 = 0x3fe;
    if (lVar4 + 1U < 0x3fe) {
      lVar1 = lVar4 + 1;
    }
    func_0x03f30520(param_1 + 0x58,param_2,lVar1,0x3ff);
    uVar2 = func_0x03fa2ac0(param_1,uVar3,param_3);
    func_0x03f2c2c0(param_1 + 8);
    uVar3 = (ulong)(uVar2 & 1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return uVar3;
}


