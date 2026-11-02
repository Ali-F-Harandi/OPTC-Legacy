// rea decompile_all
// name: FUN_00170dd0
// address: 0x170dd0
// body: available
// range: 0x170dd0-0x1710a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00170dd0(int *param_1,long *param_2,undefined4 param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  
  lVar3 = (**(code **)(*param_2 + 0x580))(param_2,param_3);
  *param_4 = lVar3;
  lVar3 = (**(code **)(*param_2 + 0x78))(param_2);
  puVar1 = (undefined1 *)0xae2afb10eb6df44e;
  if (lVar3 != 0) {
    puVar1 = (undefined1 *)0x635f31928f91aac5;
  }
  puVar2 = (undefined1 *)0x4dc5ede807dc3016;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar4 = puVar2, puVar2 = puVar4, (long)puVar4 < -0x84c52306e77ef0a) {
            if ((long)puVar4 < -0x51d504ef14920bb2) {
              if (puVar4 == (undefined1 *)0x8d9cde8a92cc3625) {
                *param_4 = 0;
                puVar2 = (undefined1 *)0xf7b3adcf918810f6;
              }
              else if (puVar4 == (undefined1 *)0x939eea0b05eec05c) {
                puVar2 = (undefined1 *)0x8d9cde8a92cc3625;
              }
            }
            else if (puVar4 == (undefined1 *)0xae2afb10eb6df44e) {
              puVar2 = (undefined1 *)0xec0931088cffa169;
              if (*param_4 != 0) {
                puVar2 = (undefined1 *)0xfd0967b6e414afde;
              }
            }
            else {
              puVar2 = (undefined1 *)0xf7b3adcf918810f6;
              if ((puVar4 != &DAT_c4c956bc7e2b1c5a) &&
                 (puVar2 = puVar4, puVar4 == (undefined1 *)0xec0931088cffa169)) {
                puVar2 = (undefined1 *)0x236d10b4e1dc5a1e;
              }
            }
          }
          if ((long)puVar4 < 0x4dc5ede807dc3016) break;
          if (puVar4 == (undefined1 *)0x635f31928f91aac5) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            puVar2 = (undefined1 *)0x236d10b4e1dc5a1e;
          }
          else if (puVar4 == (undefined1 *)0x4dc5ede807dc3016) {
            puVar2 = puVar1;
          }
        }
        if (puVar4 != (undefined1 *)0xfd0967b6e414afde) break;
        puVar2 = &DAT_c4c956bc7e2b1c5a;
        if (*param_1 != 0) {
          puVar2 = (undefined1 *)0x939eea0b05eec05c;
        }
      }
      if (puVar4 != (undefined1 *)0x236d10b4e1dc5a1e) break;
      *param_1 = 0x1e;
      puVar2 = (undefined1 *)0x8d9cde8a92cc3625;
    }
  } while (puVar4 != (undefined1 *)0xf7b3adcf918810f6);
  return;
}

