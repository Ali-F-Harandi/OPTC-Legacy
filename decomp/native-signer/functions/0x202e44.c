// rea decompile_all
// name: FUN_00202e44
// address: 0x202e44
// body: available
// range: 0x202e44-0x203297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00202e44(long param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  undefined1 *puVar6;
  long unaff_x19;
  long unaff_x21;
  
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (param_2 != 0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  lVar3 = param_2;
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          puVar6 = puVar2;
          lVar5 = lVar3;
          lVar3 = lVar5;
          if (-0x938e289074b7148 < (long)puVar6) break;
          if ((long)puVar6 < -0xab3a208b03543bf) {
            if (puVar6 == (undefined1 *)0xaa46adf0a78af8c7) {
              DAT_0021ef80 = DAT_0021ef80 ^ 0xe4;
              _DAT_0021ef70 = _DAT_0021ef70 ^ 0xe4e4e4e4e4e4e4e4;
              uRam000000000021ef78 = uRam000000000021ef78 ^ 0xe4e4e4e4e4e4e4e4;
              DAT_0021fb29 = '\x01';
              puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
            }
            else {
              puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
              if ((puVar6 != (undefined1 *)0xc23f84056fd30bd6) &&
                 (puVar2 = puVar6, puVar6 == (undefined1 *)0xd222672a639a1d2e)) {
                puVar2 = (undefined1 *)0x2ce2edddaf334d81;
              }
            }
          }
          else {
            lVar3 = unaff_x21;
            puVar2 = (undefined1 *)0x353e7cd16df664a2;
            if (puVar6 != (undefined1 *)0xf54c5df74fcabc41) {
              if (puVar6 == &DAT_f615808441b1dafc) {
                lVar3 = 0;
              }
              else {
                lVar3 = lVar5;
                puVar2 = puVar6;
                if (puVar6 == (undefined1 *)0xf63b36e7a9d9f670) {
                  DAT_0021fb28 = 0;
                  unaff_x21 = unaff_x19 + 1;
                  puVar6 = (undefined1 *)(param_3 + unaff_x19 * 2);
                  puVar2 = (undefined1 *)0xc23f84056fd30bd6;
                  if (unaff_x21 != param_2) {
                    puVar2 = (undefined1 *)0xf54c5df74fcabc41;
                  }
                  *puVar6 = (&DAT_0021ef70)[*(byte *)(param_1 + unaff_x19) >> 4];
                  puVar6[1] = (&DAT_0021ef70)[(ulong)*(byte *)(param_1 + unaff_x19) & 0xf];
                }
              }
            }
          }
        }
        if (0x2ce2edddaf334d80 < (long)puVar6) break;
        if (puVar6 == (undefined1 *)0xf6c71d76f8b48eb9) {
          puVar2 = (undefined1 *)0x6b5051bf1aed633d;
          if (DAT_0021fb29 == '\0') {
            puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
          }
        }
        else {
          puVar2 = puVar1;
          if ((puVar6 != (undefined1 *)0x887e73b2c28c6a1) &&
             (puVar2 = puVar6, puVar6 == (undefined1 *)0x125dd2cc844aecb4)) {
            puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
          }
        }
      }
      if (0x696b554ab6b2c8c4 < (long)puVar6) break;
      if (puVar6 == (undefined1 *)0x2ce2edddaf334d81) {
        iVar4 = FUN_00212730(0,1,&DAT_0021fb28);
        puVar2 = (undefined1 *)0xf6c71d76f8b48eb9;
        if (iVar4 != 0) {
          puVar2 = (undefined1 *)0xd222672a639a1d2e;
        }
      }
      else {
        puVar2 = puVar6;
        if (puVar6 == (undefined1 *)0x353e7cd16df664a2) {
          puVar2 = (undefined1 *)0x2ce2edddaf334d81;
          unaff_x19 = lVar5;
        }
      }
    }
    puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
  } while ((puVar6 == (undefined1 *)0x6b5051bf1aed633d) ||
          (puVar2 = puVar6, puVar6 != (undefined1 *)0x696b554ab6b2c8c5));
  *(undefined1 *)(param_3 + param_2 * 2) = 0;
  return;
}

