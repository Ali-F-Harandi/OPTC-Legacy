// rea decompile_all
// name: FUN_001e3668
// address: 0x1e3668
// body: available
// range: 0x1e3668-0x1e38f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_001e3668(byte *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint in_w7;
  ulong uVar3;
  ulong uVar4;
  byte *in_x12;
  long unaff_x19;
  uint unaff_w20;
  byte *unaff_x21;
  byte *unaff_x22;
  byte *unaff_x24;
  long unaff_x25;
  byte *unaff_x26;
  byte *pbVar5;
  byte *unaff_x27;
  byte *pbVar6;
  long unaff_x28;
  long lVar7;
  
  uVar3 = 0xed4378afd4d50792;
  uVar1 = uVar3;
  if (param_3 != 0) {
    uVar1 = 0xa0df104a46d1908c;
  }
  uVar2 = 0xf111d00f6a8edda;
LAB_001e3798:
  do {
    while (lVar7 = unaff_x28, pbVar6 = unaff_x27, pbVar5 = unaff_x26, uVar4 = uVar2,
          unaff_x26 = pbVar5, unaff_x27 = pbVar6, unaff_x28 = lVar7, 0xf111d00f6a8edd9 < (long)uVar4
          ) {
      if ((long)uVar4 < 0x6bbc6b8cc56478f1) {
        uVar2 = uVar1;
        if ((uVar4 != 0xf111d00f6a8edda) && (uVar2 = uVar4, uVar4 == 0x1b4ac2f1f22e2589)) {
          unaff_x19 = unaff_x25 + -1;
          unaff_x21 = unaff_x24 + 1;
          unaff_x22 = in_x12 + 1;
          uVar2 = 0x7ffb850a0e6ed38d;
          if (unaff_x19 != 0) {
            uVar2 = 0xe07e50eb5d9c155d;
          }
        }
      }
      else if (uVar4 == 0x6bbc6b8cc56478f1) {
        uVar3 = (ulong)((in_w7 & 0xff) - (unaff_w20 & 0xff));
LAB_001e3784:
        uVar2 = 0xce7f13e2503182ae;
        unaff_x26 = pbVar5;
        unaff_x27 = pbVar6;
        unaff_x28 = lVar7;
      }
      else {
        uVar2 = uVar4;
        if (uVar4 == 0x7ffb850a0e6ed38d) goto LAB_001e3778;
      }
    }
    if (-0x1f81af14a263eaa4 < (long)uVar4) {
      uVar2 = 0xd8fe0846a86e956a;
      unaff_x26 = unaff_x22;
      unaff_x27 = unaff_x21;
      unaff_x28 = unaff_x19;
      if ((uVar4 != 0xe07e50eb5d9c155d) &&
         (uVar2 = uVar4, unaff_x26 = pbVar5, unaff_x27 = pbVar6, unaff_x28 = lVar7,
         uVar4 == 0xed4378afd4d50792)) {
LAB_001e3778:
        uVar3 = 0;
        goto LAB_001e3784;
      }
      goto LAB_001e3798;
    }
    uVar2 = 0xd8fe0846a86e956a;
    unaff_x26 = param_2;
    unaff_x27 = param_1;
    unaff_x28 = param_3;
    if (uVar4 != 0xa0df104a46d1908c) {
      if (uVar4 == 0xd8fe0846a86e956a) {
        in_w7 = (uint)*pbVar6;
        unaff_w20 = (uint)*pbVar5;
        uVar2 = 0x1b4ac2f1f22e2589;
        in_x12 = pbVar5;
        unaff_x24 = pbVar6;
        unaff_x25 = lVar7;
        unaff_x26 = pbVar5;
        unaff_x27 = pbVar6;
        unaff_x28 = lVar7;
        if (*pbVar6 != *pbVar5) {
          uVar2 = 0x6bbc6b8cc56478f1;
        }
      }
      else {
        uVar2 = uVar4;
        unaff_x26 = pbVar5;
        unaff_x27 = pbVar6;
        unaff_x28 = lVar7;
        if (uVar4 == 0xce7f13e2503182ae) {
          return uVar3 & 0xffffffff;
        }
      }
    }
  } while( true );
}

