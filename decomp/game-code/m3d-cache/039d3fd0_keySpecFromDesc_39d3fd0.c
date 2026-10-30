// M3d: keySpecFromDesc_39d3fd0 @ 0x39d3fd0 (Ghidra decompile, true address)
#

long m3d_39d3fd0(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = func_0x03f30380(1,0x28);
  if (lVar3 != 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 8);
    uVar2 = *(uint *)(lVar7 + 0x18);
    uVar8 = uVar1 | 1;
    *(uint *)(lVar3 + 8) = uVar8;
    puVar4 = (undefined8 *)func_0x03f0cba0((ulong)uVar2 + 0x28);
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[4] = puVar4 + 5;
    uVar9 = *(undefined8 *)(lVar7 + 0x10);
    uVar6 = *(undefined8 *)(lVar7 + 0x20);
    *(uint *)(puVar4 + 3) = uVar2;
    puVar4[2] = uVar9;
    func_0x03f0b910(puVar4 + 5,uVar6,(ulong)uVar2);
    lVar7 = *(long *)(param_1 + 0x18);
    *(undefined8 **)(lVar3 + 0x10) = puVar4;
    if (lVar7 != 0) {
      uVar8 = uVar1 | 0x40000001;
      *(uint *)(lVar3 + 8) = uVar8;
      puVar4 = (undefined8 *)func_0x03f0cba0(0x220);
      func_0x03f0b910(puVar4,lVar7,0x108);
      puVar4[0x21] = puVar4 + 0x22;
      func_0x03f0b910(puVar4 + 0x22,*(undefined8 *)(lVar7 + 0x108),0x110);
      uVar9 = puVar4[0x3b];
      uVar6 = puVar4[0x3a];
      uVar11 = puVar4[0x3d];
      uVar10 = puVar4[0x3c];
      uVar13 = puVar4[0x3f];
      uVar12 = puVar4[0x3e];
      *(undefined8 **)(lVar3 + 0x18) = puVar4;
      puVar4[0x1d] = uVar13;
      puVar4[0x1c] = uVar12;
      puVar4[0x19] = uVar9;
      puVar4[0x18] = uVar6;
      puVar4[0x1b] = uVar11;
      puVar4[0x1a] = uVar10;
      *(undefined2 *)(puVar4 + 0x20) = 0;
      *(undefined8 *)((long)puVar4 + 0xf7) = *(undefined8 *)((long)puVar4 + 0x207);
      *(undefined8 *)((long)puVar4 + 0xef) = *(undefined8 *)((long)puVar4 + 0x1ff);
      puVar4[0x11] = puVar4[0x33];
      puVar4[0x10] = puVar4[0x32];
      puVar4[0x13] = puVar4[0x35];
      puVar4[0x12] = puVar4[0x34];
      puVar4[0x15] = puVar4[0x37];
      puVar4[0x14] = puVar4[0x36];
      puVar4[0x17] = puVar4[0x39];
      puVar4[0x16] = puVar4[0x38];
      puVar4[9] = puVar4[0x2b];
      puVar4[8] = puVar4[0x2a];
      puVar4[0xb] = puVar4[0x2d];
      puVar4[10] = puVar4[0x2c];
      puVar4[0xd] = puVar4[0x2f];
      puVar4[0xc] = puVar4[0x2e];
      puVar4[0xf] = puVar4[0x31];
      puVar4[0xe] = puVar4[0x30];
      puVar4[1] = puVar4[0x23];
      *puVar4 = puVar4[0x22];
      puVar4[3] = puVar4[0x25];
      puVar4[2] = puVar4[0x24];
      puVar4[5] = puVar4[0x27];
      puVar4[4] = puVar4[0x26];
      puVar4[7] = puVar4[0x29];
      puVar4[6] = puVar4[0x28];
    }
    puVar4 = *(undefined8 **)(param_1 + 0x20);
    if (puVar4 != (undefined8 *)0x0) {
      *(uint *)(lVar3 + 8) = uVar8 | 0x20000000;
      puVar5 = (undefined8 *)func_0x03f0cba0(0x2090);
      uVar6 = *puVar4;
      puVar5[1] = puVar4[1];
      *puVar5 = uVar6;
      uVar11 = puVar4[5];
      uVar10 = puVar4[4];
      uVar9 = puVar4[7];
      uVar6 = puVar4[6];
      uVar13 = puVar4[3];
      uVar12 = puVar4[2];
      puVar5[8] = puVar4[8];
      puVar5[5] = uVar11;
      puVar5[4] = uVar10;
      puVar5[7] = uVar9;
      puVar5[6] = uVar6;
      puVar5[3] = uVar13;
      puVar5[2] = uVar12;
      func_0x03f0b910(puVar5 + 9,puVar4 + 9,0x1000);
      *(undefined8 **)(lVar3 + 0x20) = puVar5;
    }
    *param_2 = lVar3;
  }
  return lVar3;
}


