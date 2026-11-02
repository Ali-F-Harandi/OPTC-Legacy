// rea decompile_all
// name: FUN_001435c4
// address: 0x1435c4
// body: available
// range: 0x1435c4-0x1439ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001435c4(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = 0x55536219551f45;
  if (param_1 != 0) {
    lVar1 = 0x43b5eeafd2e1ff93;
  }
  lVar2 = 0x2bef79588c25b284;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < 0x2bef79588c25b284) {
            if (lVar4 < -0x34434486eeb04da6) {
              if (lVar4 == -0x61890485beeddb76) {
                DAT_0021c590 = DAT_0021c590 ^ 0x44;
                DAT_0021c588 = DAT_0021c588 ^ 0x4444444444444444;
                DAT_0021f65c = '\x01';
                lVar2 = 0x58a9e2f33cee85af;
              }
              else if (lVar4 == -0x578594bb223808b4) {
                lVar2 = 0x20fc03a23bd2b6cc;
                if (DAT_0021f65c == '\0') {
                  lVar2 = -0x61890485beeddb76;
                }
              }
              else if (lVar4 == -0x46ebd6ab40c8fd09) {
                fVar5 = *param_2;
                *param_3 = *param_3 | 0x4000;
                *param_2 = fVar5 + (1.0 - fVar5);
                lVar2 = 0x36e0def00706dcd8;
              }
            }
            else if (lVar4 < 0x25ec24d3cec37a6) {
              if (lVar4 == -0x34434486eeb04da6) {
                iVar3 = FUN_00212730(0,1,&DAT_0021f28c);
                lVar2 = -0x578594bb223808b4;
                if (iVar3 != 0) {
                  lVar2 = 0x5b3e00137363b623;
                }
              }
              else if (lVar4 == 0x55536219551f45) {
                lVar2 = 0x36e0def00706dcd8;
              }
            }
            else {
              lVar2 = 0x36e0def00706dcd8;
              if ((lVar4 != 0x25ec24d3cec37a6) && (lVar2 = lVar4, lVar4 == 0x20fc03a23bd2b6cc)) {
                lVar2 = 0x58a9e2f33cee85af;
              }
            }
          }
          if (0x36e0def00706dcd7 < lVar4) break;
          lVar2 = lVar1;
          if (((lVar4 != 0x2bef79588c25b284) &&
              (lVar2 = 0x36e0def00706dcd8, lVar4 != 0x2d45ddb959f05951)) &&
             (lVar2 = lVar4, lVar4 == 0x33cb6bebebf6f44b)) {
            lVar2 = -0x34434486eeb04da6;
          }
        }
        if (lVar4 < 0x58a9e2f33cee85af) break;
        if (lVar4 == 0x58a9e2f33cee85af) {
          DAT_0021f28c = 0;
          lVar4 = FUN_001e238c(unaff_x24,&DAT_0021c588);
          lVar2 = 0x2d45ddb959f05951;
          if (lVar4 != 0) {
            lVar2 = -0x46ebd6ab40c8fd09;
          }
        }
        else if (lVar4 == 0x5b3e00137363b623) {
          lVar2 = -0x34434486eeb04da6;
        }
      }
      if (lVar4 != 0x43b5eeafd2e1ff93) break;
      unaff_x24 = *(long *)(param_1 + 0x18);
      lVar2 = 0x33cb6bebebf6f44b;
      if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
        lVar2 = 0x25ec24d3cec37a6;
      }
    }
  } while (lVar4 != 0x36e0def00706dcd8);
  return;
}

