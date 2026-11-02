// rea decompile_all
// name: FUN_00201f60
// address: 0x201f60
// body: available
// range: 0x201f60-0x20204f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_00201f60(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte in_w15;
  long lVar6;
  
  uVar4 = (uint)((ulong)param_3 >> 0x20);
  uVar5 = (uint)((ulong)param_1 >> 0x20);
  bVar2 = param_4 <= param_2;
  if (uVar5 != uVar4) {
    bVar2 = uVar4 < uVar5;
  }
  lVar1 = -0x405b680ffecd4131;
  if ((int)param_1 != (int)param_3) {
    lVar1 = -0x12e0f8e15901e122;
  }
  lVar3 = 0x3ace195dd3930386;
  do {
    while (lVar6 = lVar3, lVar6 < 0x3ace195dd3930386) {
      if (lVar6 == -0x405b680ffecd4131) {
        lVar3 = 0x5eda44100212fa2c;
        in_w15 = bVar2;
      }
      else {
        lVar3 = lVar6;
        if (lVar6 == -0x12e0f8e15901e122) {
          lVar3 = 0x5eda44100212fa2c;
          in_w15 = 0;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar6 == 0x3ace195dd3930386) || (lVar3 = lVar6, lVar6 != 0x5eda44100212fa2c));
  return in_w15 & 1;
}

