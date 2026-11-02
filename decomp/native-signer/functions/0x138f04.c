// rea decompile_all
// name: FUN_00138f04
// address: 0x138f04
// body: available
// range: 0x138f04-0x13943f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_00138f04(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_10000020;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long in_x7;
  ulong uVar9;
  ulong uVar10;
  uint in_w11;
  uint uVar11;
  ulong uVar13;
  ulong in_x13;
  ulong in_x14;
  long in_x15;
  uint uVar14;
  ulong unaff_x19;
  ulong unaff_x22;
  ulong unaff_x28;
  long unaff_x29;
  ulong uVar12;
  
  uVar1 = 0xd0baaea440c3989d;
  if (param_4 != 0 && param_2 != 0) {
    uVar1 = 0xf7ef68c164075705;
  }
  lVar4 = param_1;
  lVar3 = param_2;
  uVar7 = param_4;
  uVar9 = uVar1;
  uVar10 = 0xd0baaea440c3989d;
  uVar2 = 0x7972999f9795f813;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          uVar11 = in_w11;
          uVar13 = uVar2;
          uVar12 = unaff_10000020;
          lVar5 = lVar3;
          uVar6 = uVar12 & 0xffffffff;
          uVar8 = uVar9 & 0xffffffff;
          uVar14 = (uint)unaff_x19;
          uVar2 = uVar13;
          lVar3 = lVar5;
          uVar9 = uVar8;
          in_w11 = uVar11;
          if ((long)uVar13 < -0xcf6788a5020c598) break;
          in_w11 = (uint)uVar12;
          unaff_10000020 = uVar6;
          if ((long)uVar13 < 0x21281ee096a3242c) {
            if (uVar13 == 0xf3098775afdf3a68) {
              unaff_x29 = *(long *)(param_1 + lVar5 * 8);
              lVar4 = lVar5;
              uVar2 = 0x21281ee096a3242c;
              unaff_x19 = uVar8;
              if (in_x15 != *(long *)(unaff_x29 + 0x10)) {
                uVar2 = 0xd1bf403b36ce4ca5;
              }
            }
            else if (uVar13 == 0xf7ef68c164075705) {
              uVar10 = 0;
              in_x14 = 0;
              uVar2 = 0xe2741540bd3d4e54;
            }
            else if (uVar13 == 0xc9021a26c4b3849) {
              in_x14 = uVar7 & 0xffffffff;
              uVar10 = unaff_x28;
              unaff_10000020 = uVar12 & 0xffffffff;
              uVar2 = 0xe2741540bd3d4e54;
            }
          }
          else if ((long)uVar13 < 0x6fb48459fbb1f88b) {
            if (uVar13 == 0x21281ee096a3242c) {
              uVar2 = 0x6fb48459fbb1f88b;
              in_w11 = uVar11;
              if (*(long *)(unaff_x29 + 0x28) != 1) {
                uVar2 = 0x8d72353b0183b015;
              }
            }
            else {
              unaff_10000020 = (ulong)uVar11;
              in_w11 = uVar11;
              if (uVar13 == 0x5fc3b46b3312d8fa) {
                unaff_x28 = in_x13 + 1;
                unaff_10000020 = uVar6;
                uVar2 = 0xe79a6113466d2f57;
                if (unaff_x28 != param_4) {
                  uVar2 = 0xc9021a26c4b3849;
                }
              }
            }
          }
          else if (uVar13 == 0x6fb48459fbb1f88b) {
            if (*(long *)(unaff_x29 + 8) == 0x100007f) {
              uVar14 = uVar14 + 1;
            }
            unaff_10000020 = (ulong)uVar14;
            uVar2 = 0x88825823de26177a;
            in_w11 = uVar14;
          }
          else if (uVar13 == 0x7972999f9795f813) {
            uVar2 = uVar1;
          }
        }
        if (-0x2e40bfc4c931b35c < (long)uVar13) break;
        if ((long)uVar13 < -0x30f19d77ed6a57d0) {
          if (uVar13 == 0x88825823de26177a) {
            in_x7 = lVar4 + 1;
            uVar7 = (ulong)uVar11;
            uVar2 = 0x5fc3b46b3312d8fa;
            if (in_x7 != param_2) {
              uVar2 = 0xcf0e62881295a830;
            }
            unaff_10000020 = (ulong)uVar11;
          }
          else {
            unaff_10000020 = (ulong)uVar11;
            if (uVar13 == 0x8d72353b0183b015) {
              unaff_10000020 = unaff_x19 & 0xffffffff;
              uVar2 = 0x88825823de26177a;
              in_w11 = uVar14;
            }
          }
        }
        else {
          lVar3 = in_x7;
          uVar9 = uVar7 & 0xffffffff;
          unaff_10000020 = (ulong)uVar11;
          uVar2 = 0xf3098775afdf3a68;
          if ((uVar13 != 0xcf0e62881295a830) &&
             (lVar3 = lVar5, uVar9 = uVar8, unaff_10000020 = (ulong)uVar11, uVar2 = uVar13,
             uVar13 == 0xd0baaea440c3989d)) {
            unaff_x22 = 0;
            unaff_10000020 = (ulong)uVar11;
            uVar2 = 0xded9d27d62983aca;
          }
        }
      }
      if ((long)uVar13 < -0x1d8beabf42c2b1ac) break;
      if (uVar13 == 0xe2741540bd3d4e54) {
        in_x15 = *(long *)(*(long *)(param_3 + uVar10 * 8) + 0x10);
        lVar3 = 0;
        uVar9 = in_x14 & 0xffffffff;
        unaff_10000020 = (ulong)uVar11;
        uVar2 = 0xf3098775afdf3a68;
        in_x13 = uVar10;
      }
      else {
        unaff_10000020 = (ulong)uVar11;
        if (uVar13 == 0xe79a6113466d2f57) {
          unaff_x22 = uVar7 & 0xffffffff;
          unaff_10000020 = (ulong)uVar11;
          uVar2 = 0xded9d27d62983aca;
        }
      }
    }
    unaff_10000020 = unaff_x19 & 0xffffffff;
    uVar2 = 0x88825823de26177a;
    in_w11 = uVar14;
  } while ((uVar13 == 0xd1bf403b36ce4ca5) ||
          (unaff_10000020 = (ulong)uVar11, uVar2 = uVar13, in_w11 = uVar11,
          uVar13 != 0xded9d27d62983aca));
  return unaff_x22 & 0xffffffff;
}

