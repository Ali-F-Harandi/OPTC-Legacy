// rea decompile_all
// name: FUN_001710a4
// address: 0x1710a4
// body: available
// range: 0x1710a4-0x1712bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001710a4(undefined4 *param_1,long *param_2,long param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 in_w10;
  
  lVar1 = -0xa857d4da3ca01d6;
  if (param_3 != 0) {
    lVar1 = 0x70aaef16e8748d67;
  }
  lVar3 = 0x1f2c3b62b1679b;
  while( true ) {
    while (-0xa857d4da3ca01d7 < lVar3) {
      if (lVar3 < 0x5f3fddf8e2fc9ebc) {
        if (lVar3 == -0xa857d4da3ca01d6) {
          in_w10 = 3;
          lVar3 = 0x5f3fddf8e2fc9ebc;
        }
        else if (lVar3 == 0x1f2c3b62b1679b) {
          lVar3 = lVar1;
        }
      }
      else if (lVar3 == 0x5f3fddf8e2fc9ebc) {
        *param_1 = in_w10;
        lVar3 = -0x4a68ccefe6d06158;
      }
      else if (lVar3 == 0x70aaef16e8748d67) {
        (**(code **)(*param_2 + 0x680))(param_2,param_3,param_4,param_5,param_6);
        lVar2 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar3 = -0x3cc2b3d163fe4027;
        if (lVar2 != 0) {
          lVar3 = -0x1efbf45246475358;
        }
      }
    }
    if (lVar3 == -0x4a68ccefe6d06158) break;
    if (lVar3 == -0x3cc2b3d163fe4027) {
      lVar3 = -0x4a68ccefe6d06158;
    }
    else if (lVar3 == -0x1efbf45246475358) {
      (**(code **)(*param_2 + 0x80))(param_2);
      (**(code **)(*param_2 + 0x88))(param_2);
      in_w10 = 0x1f;
      lVar3 = 0x5f3fddf8e2fc9ebc;
    }
  }
  return;
}

