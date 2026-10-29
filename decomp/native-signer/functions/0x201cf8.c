// rea decompile_all
// name: FUN_00201cf8
// address: 0x201cf8
// body: available
// range: 0x201cf8-0x201f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00201cf8(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int unaff_w24;
  int iVar9;
  long lVar10;
  
  lVar1 = 0x27963d1423e000f6;
  if (param_2 <= param_4) {
    lVar1 = -0x111819a4994f0fa;
  }
  uVar7 = (uint)((ulong)param_1 >> 0x20);
  uVar8 = (uint)((ulong)param_3 >> 0x20);
  lVar2 = 0x65536dc2a8308acd;
  if (uVar8 <= uVar7) {
    lVar2 = 0xc7bf249d1db72b2;
  }
  lVar3 = 0x32f4713bcaf93571;
  if (uVar7 <= uVar8) {
    lVar3 = -0x316a2fad8e5725cc;
  }
  lVar4 = -0x25a3e9f6f44c50c;
  if ((uint)param_3 <= (uint)param_1) {
    lVar4 = 0x31b9d74c89a90fe3;
  }
  lVar5 = 0x3007aa9d32d99be8;
  if ((uint)param_1 <= (uint)param_3) {
    lVar5 = 0xfb13253120e52d5;
  }
  lVar6 = -0x6bf42222db0ad31d;
LAB_00201e4c:
  do {
    while (iVar9 = unaff_w24, lVar10 = lVar6, lVar6 = lVar10, unaff_w24 = iVar9,
          lVar10 < 0x27963d1423e000f6) {
      if (lVar10 < -0x111819a4994f0fa) {
        lVar6 = lVar5;
        if (((lVar10 != -0x6bf42222db0ad31d) && (lVar6 = lVar2, lVar10 != -0x316a2fad8e5725cc)) &&
           (lVar6 = lVar10, lVar10 == -0x25a3e9f6f44c50c)) {
LAB_00201f24:
          lVar6 = 0x3b16db62a3c2f4fb;
          unaff_w24 = -1;
        }
      }
      else {
        lVar6 = 0x3b16db62a3c2f4fb;
        unaff_w24 = -(uint)(param_2 < param_4);
        if (((lVar10 != -0x111819a4994f0fa) &&
            (lVar6 = lVar1, unaff_w24 = iVar9, lVar10 != 0xc7bf249d1db72b2)) &&
           (lVar6 = lVar10, lVar10 == 0xfb13253120e52d5)) {
          lVar6 = lVar4;
        }
      }
    }
    if (lVar10 < 0x32f4713bcaf93571) {
      if ((lVar10 == 0x27963d1423e000f6) || (lVar10 == 0x3007aa9d32d99be8)) {
LAB_00201e38:
        lVar6 = 0x3b16db62a3c2f4fb;
        unaff_w24 = 1;
      }
      else if (lVar10 == 0x31b9d74c89a90fe3) {
        lVar6 = lVar3;
      }
      goto LAB_00201e4c;
    }
    if (lVar10 == 0x32f4713bcaf93571) goto LAB_00201e38;
    if (lVar10 == 0x65536dc2a8308acd) goto LAB_00201f24;
    if (lVar10 == 0x3b16db62a3c2f4fb) {
      return iVar9;
    }
  } while( true );
}

