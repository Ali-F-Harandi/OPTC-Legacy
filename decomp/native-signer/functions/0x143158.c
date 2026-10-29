// rea decompile_all
// name: FUN_00143158
// address: 0x143158
// body: available
// range: 0x143158-0x1435b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00143158(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long unaff_x24;
  float fVar5;
  
  lVar1 = 0x1252adc4bf08f935;
  if (param_1 != 0) {
    lVar1 = -0x6537cd062662e11a;
  }
  lVar2 = 0x4bb92aa8fd87d9f;
  do {
    while( true ) {
      while( true ) {
        while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < 0x4bb92aa8fd87d9f) {
          if (lVar4 < -0x193680af91dec1cf) {
            if (lVar4 == -0x6537cd062662e11a) {
              unaff_x24 = *(long *)(param_1 + 0x18);
              lVar2 = -0x21c89b5d578ba2e8;
              if (unaff_x24 == 0 || param_3 == (ulong *)0x0) {
                lVar2 = 0x6e202156fd348ce;
              }
            }
            else if (lVar4 == -0x57bf3d08bc3763e2) {
              iVar3 = FUN_00212730(0,1,&DAT_0021f4f8);
              lVar2 = -0x108e783a983b623d;
              if (iVar3 != 0) {
                lVar2 = 0x3e51e4b6291bea0;
              }
            }
            else if (lVar4 == -0x21c89b5d578ba2e8) {
              lVar2 = -0x57bf3d08bc3763e2;
            }
          }
          else if (lVar4 < -0xf6dfedc0344244) {
            if (lVar4 == -0x193680af91dec1cf) {
              fVar5 = *param_2;
              *param_3 = *param_3 | 0x2000;
              *param_2 = fVar5 + (1.0 - fVar5);
              lVar2 = 0x1729d5e4bf3ba9a5;
            }
            else if (lVar4 == -0x108e783a983b623d) {
              lVar2 = 0x2273fdf57e9c1f3a;
              if (DAT_0021f6f7 == '\0') {
                lVar2 = -0xf6dfedc0344244;
              }
            }
          }
          else if (lVar4 == -0xf6dfedc0344244) {
            DAT_0021d210 = DAT_0021d210 ^ 0x71;
            DAT_0021d212 = DAT_0021d212 ^ 0x71;
            DAT_0021d211 = DAT_0021d211 ^ 0x71;
            DAT_0021d208 = DAT_0021d208 ^ 0x7171717171717171;
            DAT_0021f6f7 = '\x01';
            lVar2 = 0x2b076ac9ee8eb2d4;
          }
          else if (lVar4 == 0x3e51e4b6291bea0) {
            lVar2 = -0x57bf3d08bc3763e2;
          }
        }
        if (0x1729d5e4bf3ba9a4 < lVar4) break;
        lVar2 = lVar1;
        if (((lVar4 != 0x4bb92aa8fd87d9f) &&
            (lVar2 = 0x1729d5e4bf3ba9a5, lVar4 != 0x6e202156fd348ce)) &&
           (lVar2 = lVar4, lVar4 == 0x1252adc4bf08f935)) {
          lVar2 = 0x1729d5e4bf3ba9a5;
        }
      }
      if (lVar4 < 0x2b076ac9ee8eb2d4) break;
      if (lVar4 == 0x2b076ac9ee8eb2d4) {
        DAT_0021f4f8 = 0;
        lVar4 = FUN_001e238c(unaff_x24,&DAT_0021d208);
        lVar2 = 0x3c6047a73784c8dd;
        if (lVar4 != 0) {
          lVar2 = -0x193680af91dec1cf;
        }
      }
      else if (lVar4 == 0x3c6047a73784c8dd) {
        lVar2 = 0x1729d5e4bf3ba9a5;
      }
    }
    lVar2 = 0x2b076ac9ee8eb2d4;
  } while ((lVar4 == 0x2273fdf57e9c1f3a) || (lVar2 = lVar4, lVar4 != 0x1729d5e4bf3ba9a5));
  return;
}

