// rea decompile_all
// name: FUN_00138d88
// address: 0x138d88
// body: available
// range: 0x138d88-0x138f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00138d88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = -0x5d4f5f4ae909129f;
  if (((uint)((ulong)param_2 >> 0x18) & 0xff) != 1 || ((uint)((ulong)param_1 >> 0x18) & 0xff) == 1)
  {
    lVar1 = 0x7a95b11d6cd70979;
  }
  lVar2 = -0x10e82560a42dc9a5;
  if ((((uint)param_2 ^ (uint)param_1) & 0xffffff) != 0) {
    lVar2 = 0x5f469bbce37b4e46;
  }
  lVar3 = -0x4022e60db29d08bd;
  do {
    while( true ) {
      while (lVar4 = lVar3, lVar4 < -0x10e82560a42dc9a5) {
        if (lVar4 == -0x5d4f5f4ae909129f) {
          param_2 = 1;
          lVar3 = 0x2cfdc6d466d500b;
        }
        else {
          lVar3 = lVar2;
          if ((lVar4 != -0x4022e60db29d08bd) && (lVar3 = lVar4, lVar4 == -0x2111cc06df94c18b)) {
            param_2 = 0;
            lVar3 = 0x2cfdc6d466d500b;
          }
        }
      }
      if (lVar4 < 0x5f469bbce37b4e46) break;
      if (lVar4 == 0x7a95b11d6cd70979) {
        lVar3 = -0x2111cc06df94c18b;
      }
      else {
        lVar3 = lVar4;
        if (lVar4 == 0x5f469bbce37b4e46) {
          lVar3 = -0x2111cc06df94c18b;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar4 == -0x10e82560a42dc9a5) || (lVar3 = lVar4, lVar4 != 0x2cfdc6d466d500b));
  return (uint)param_2 & 1;
}

