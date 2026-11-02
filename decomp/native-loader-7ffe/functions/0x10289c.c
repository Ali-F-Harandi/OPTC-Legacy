// rea decompile_all
// name: FUN_0010289c
// address: 0x10289c
// body: available
// range: 0x10289c-0x10289f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0010289c(ulong param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_490 [40];
  ulong auStack_468 [134];
  char cStack_31;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  ulong *puStack_18;
  undefined1 *puStack_10;
  char cStack_1;
  
  cStack_1 = 1;
  puStack_10 = auStack_490;
  cStack_1 = FUN_001038d0(puStack_10);
  do {
    if (cStack_1 == '\0') goto LAB_00102a34;
    puStack_18 = auStack_468;
    if (cStack_1 != '\0') {
      cStack_31 = '\0';
      cStack_1 = FUN_00102c90(&cStack_31,puStack_18,puStack_10);
      if (cStack_31 != '\0') {
        uVar1 = FUN_00104054();
        cStack_1 = FUN_00105f34(0,0,uVar1,3,0x37,1,1,0,0,0);
        goto LAB_00102a34;
      }
    }
  } while (((cStack_1 == '\0') || (param_1 < *puStack_18)) ||
          (*puStack_18 + puStack_18[1] <= param_1));
  uStack_20 = FUN_001047cc((long)puStack_18 + 0x2c);
  uStack_28 = param_3 - 1;
  uStack_30 = uStack_28;
  if (uStack_20 < uStack_28) {
    uStack_30 = uStack_20;
  }
  FUN_00104e1c(param_2,(long)puStack_18 + 0x2c,uStack_30);
  *(undefined1 *)(param_2 + uStack_30) = 0;
LAB_00102a34:
  FUN_0010394c(puStack_10);
  return cStack_1;
}

