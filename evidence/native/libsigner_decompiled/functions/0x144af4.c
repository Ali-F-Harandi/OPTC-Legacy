// rea decompile_all
// name: FUN_00144af4
// address: 0x144af4
// body: available
// range: 0x144af4-0x144f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00144af4(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = -0x565d3f9f390e31f8;
  if (param_1 != 0) {
    lVar1 = 0x464fff414fe94363;
  }
  lVar2 = -0x5a29a71200787f91;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, 0x2eb656586ae1c09b < lVar4) {
          if (lVar4 < 0x55a7512c4f9fb3b1) {
            if (lVar4 == 0x2eb656586ae1c09c) {
              lVar2 = 0x19d182fb2a0d48c0;
              if (DAT_0021f65e == '\0') {
                lVar2 = 0x1b227b4075b5ff91;
              }
            }
            else if (lVar4 == 0x464fff414fe94363) {
              unaff_x24 = *(long *)(param_1 + 0x40);
              lVar2 = 0x7f485bc7ca918184;
              if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                lVar2 = 0x5defe1ba657c8727;
              }
            }
            else if (lVar4 == 0x51706970709dc699) {
              lVar2 = -0x1908bdf94340ff80;
            }
          }
          else if (lVar4 < 0x7f485bc7ca918184) {
            if (lVar4 == 0x55a7512c4f9fb3b1) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f294);
              lVar2 = 0x2eb656586ae1c09c;
              if (iVar3 != 0) {
                lVar2 = -0x170ef0d4f8bd410d;
              }
            }
            else if (lVar4 == 0x5defe1ba657c8727) {
              lVar2 = -0x1908bdf94340ff80;
            }
          }
          else {
            lVar2 = 0x55a7512c4f9fb3b1;
            if ((lVar4 != 0x7f485bc7ca918184) && (lVar2 = lVar4, lVar4 == 0x7f4b48ec98e337a2)) {
              fVar5 = *param_2;
              *param_3 = *param_3 | 0x20000;
              *param_2 = fVar5 + (1.0 - fVar5);
              lVar2 = -0x1908bdf94340ff80;
            }
          }
        }
        if (-0x1908bdf94340ff81 < lVar4) break;
        if (lVar4 == -0x788425b0aaae11f0) {
          DAT_0021f294 = 0;
          lVar4 = FUN_001e238c(unaff_x24,&DAT_0021c5a4);
          lVar2 = 0x51706970709dc699;
          if (lVar4 != 0) {
            lVar2 = 0x7f4b48ec98e337a2;
          }
        }
        else {
          lVar2 = lVar1;
          if ((lVar4 != -0x5a29a71200787f91) && (lVar2 = lVar4, lVar4 == -0x565d3f9f390e31f8)) {
            lVar2 = -0x1908bdf94340ff80;
          }
        }
      }
      if (lVar4 < 0x19d182fb2a0d48c0) break;
      lVar2 = -0x788425b0aaae11f0;
      if ((lVar4 != 0x19d182fb2a0d48c0) && (lVar2 = lVar4, lVar4 == 0x1b227b4075b5ff91)) {
        DAT_0021c5a4 = DAT_0021c5a4 ^ 0xcb;
        DAT_0021c5a5 = DAT_0021c5a5 ^ 0xcb;
        DAT_0021c5a6 = DAT_0021c5a6 ^ 0xcb;
        DAT_0021c5a8 = DAT_0021c5a8 ^ 0xcb;
        DAT_0021c5a9 = DAT_0021c5a9 ^ 0xcb;
        DAT_0021c5aa = DAT_0021c5aa ^ 0xcb;
        DAT_0021c5a7 = DAT_0021c5a7 ^ 0xcb;
        DAT_0021f65e = '\x01';
        lVar2 = -0x788425b0aaae11f0;
      }
    }
    lVar2 = 0x55a7512c4f9fb3b1;
  } while ((lVar4 == -0x170ef0d4f8bd410d) || (lVar2 = lVar4, lVar4 != -0x1908bdf94340ff80));
  return;
}

