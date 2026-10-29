// rea decompile_all
// name: FUN_001e30ac
// address: 0x1e30ac
// body: available
// range: 0x1e30ac-0x1e3447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_001e30ac(byte *param_1,byte *param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  uint uVar6;
  byte *in_x10;
  uint uVar7;
  uint uVar8;
  byte *in_x15;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long unaff_x25;
  byte *unaff_x26;
  byte *pbVar12;
  byte *unaff_x27;
  long unaff_x28;
  byte *unaff_x29;
  byte *unaff_x30;
  
  uVar5 = 0x55dcd19dee737a1a;
  uVar6 = 0;
  uVar8 = 0;
  uVar1 = uVar5;
  if (param_3 != 0) {
    uVar1 = 0xabed3acad0e23c86;
  }
  pbVar4 = param_2;
  uVar2 = 0xd14700cedc0a1544;
  uVar3 = 0;
  uVar10 = 0;
  uVar11 = 0;
LAB_001e31a0:
  while( true ) {
    while( true ) {
      while (uVar7 = uVar3, pbVar12 = unaff_x26, uVar9 = uVar2, uVar2 = uVar9, unaff_x26 = pbVar12,
            uVar3 = uVar7, (long)uVar9 < -0x244c08061ede3ca6) {
        if ((long)uVar9 < -0x5412c5352f1dc37a) {
          if (uVar9 == 0xa6454b078cdf6a1e) {
            uVar2 = 0x54cc8c62117e2258;
            unaff_x26 = unaff_x30;
            uVar3 = 0;
          }
          else if (uVar9 == 0xa952fa75448bcb41) {
            uVar2 = 0x54cc8c62117e2258;
            unaff_x26 = param_2;
            uVar3 = 0;
          }
          else if (uVar9 == 0x8bb818770b2cd537) {
            return uVar5 & 0xffffffff;
          }
        }
        else if (uVar9 == 0xabed3acad0e23c86) {
          uVar6 = (uint)*param_1;
          uVar2 = 0xa952fa75448bcb41;
          if (uVar6 != 0) {
            uVar2 = 0xd1a28e2b92bbcc90;
          }
        }
        else {
          uVar2 = uVar1;
          if ((uVar9 != 0xd14700cedc0a1544) && (uVar2 = uVar9, uVar9 == 0xd1a28e2b92bbcc90)) {
            in_x10 = param_2;
            uVar2 = 0x53e14c28908eeeeb;
            unaff_x25 = param_3;
            unaff_x29 = param_1;
            uVar11 = uVar6;
          }
        }
      }
      if (0x53e14c28908eeeea < (long)uVar9) break;
      if (uVar9 == 0xdbb3f7f9e121c35a) {
        unaff_x30 = pbVar4 + 1;
        unaff_x27 = in_x15 + 1;
        uVar8 = (uint)*unaff_x27;
        uVar2 = 0xa6454b078cdf6a1e;
        if (uVar8 != 0) {
          uVar2 = 0x4101bf80446bdc20;
        }
      }
      else {
        uVar2 = 0x54cc8c62117e2258;
        unaff_x26 = pbVar4;
        uVar3 = uVar10;
        if ((uVar9 != 0xfbd7ef6ff797a0b8) &&
           (uVar2 = uVar9, unaff_x26 = pbVar12, uVar3 = uVar7, uVar9 == 0x4101bf80446bdc20)) {
          in_x10 = unaff_x30;
          uVar2 = 0x53e14c28908eeeeb;
          unaff_x25 = unaff_x28;
          unaff_x29 = unaff_x27;
          uVar11 = uVar8;
        }
      }
    }
    if (uVar9 != 0x53e14c28908eeeeb) break;
    unaff_x28 = unaff_x25 + -1;
    pbVar4 = in_x10;
    in_x15 = unaff_x29;
    uVar2 = 0xdbb3f7f9e121c35a;
    uVar10 = uVar11;
    if ((uVar11 != *in_x10 || unaff_x28 == 0) || *in_x10 == 0) {
      uVar2 = 0xfbd7ef6ff797a0b8;
    }
  }
  if (uVar9 != 0x54cc8c62117e2258) goto code_r0x001e32e8;
  uVar7 = uVar7 - *pbVar12;
  goto LAB_001e318c;
code_r0x001e32e8:
  if (uVar9 == 0x55dcd19dee737a1a) {
    uVar7 = 0;
LAB_001e318c:
    uVar5 = (ulong)uVar7;
    uVar2 = 0x8bb818770b2cd537;
  }
  goto LAB_001e31a0;
}

