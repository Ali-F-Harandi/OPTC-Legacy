// rea decompile_all
// name: FUN_0010adcc
// address: 0x10adcc
// body: available
// range: 0x10adcc-0x10b36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0010adcc(undefined4 *param_1,long *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint unaff_w20;
  
  puVar1 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (puVar5 = puVar1, puVar1 = puVar5, 0x887e73b2c28c6a0 < (long)puVar5) {
              if ((long)puVar5 < 0x312910f1547c7c77) {
                if ((long)puVar5 < 0x1cba5f82f77e481f) {
                  puVar1 = &DAT_f615808441b1dafc;
                  if ((puVar5 != (undefined1 *)0x887e73b2c28c6a1) &&
                     (puVar1 = puVar5, puVar5 == (undefined1 *)0x125dd2cc844aecb4)) {
                    puVar1 = &DAT_f615808441b1dafc;
                  }
                }
                else if (puVar5 == (undefined1 *)0x1cba5f82f77e481f) {
                  puVar1 = (undefined1 *)0x3b36a7a007b21166;
                  if (DAT_0021f189 == '\0') {
                    puVar1 = (undefined1 *)0x696b554ab6b2c8c5;
                  }
                }
                else if (puVar5 == (undefined1 *)0x2ce2edddaf334d81) {
                  unaff_w20 = 0;
                  puVar1 = (undefined1 *)0xbf711ec4fafe862e;
                }
              }
              else if ((long)puVar5 < 0x3b36a7a007b21166) {
                if (puVar5 == (undefined1 *)0x312910f1547c7c77) {
                  puVar1 = (undefined1 *)0xc89737e2f8768a05;
                  if (DAT_0021f18a == '\0') {
                    puVar1 = (undefined1 *)0xf54c5df74fcabc41;
                  }
                }
                else if (puVar5 == (undefined1 *)0x353e7cd16df664a2) {
                  DAT_0021f0ec = 0;
                  iVar2 = FUN_001e2ed0(param_3,&DAT_0021be00);
                  puVar1 = (undefined1 *)0xd222672a639a1d2e;
                  if (iVar2 != 0) {
                    puVar1 = (undefined1 *)0x2ce2edddaf334d81;
                  }
                }
              }
              else {
                puVar1 = (undefined1 *)0x353e7cd16df664a2;
                if (puVar5 != (undefined1 *)0x3b36a7a007b21166) {
                  if (puVar5 == (undefined1 *)0x696b554ab6b2c8c5) {
                    DAT_0021be08 = DAT_0021be08 ^ 0xb5;
                    DAT_0021be09 = DAT_0021be09 ^ 0xb5;
                    DAT_0021be00 = DAT_0021be00 ^ 0xb5b5b5b5b5b5b5b5;
                    DAT_0021f189 = '\x01';
                    puVar1 = (undefined1 *)0x353e7cd16df664a2;
                  }
                  else {
                    puVar1 = puVar5;
                    if (puVar5 == (undefined1 *)0x6b5051bf1aed633d) {
                      unaff_w20 = 0;
                      *param_1 = 0x21;
                      puVar1 = (undefined1 *)0xbf711ec4fafe862e;
                    }
                  }
                }
              }
            }
            if ((long)puVar5 < -0xab3a208b03543bf) break;
            if ((long)puVar5 < -0x9c4c91856260990) {
              if (puVar5 == (undefined1 *)0xf54c5df74fcabc41) {
                DAT_0021be10 = DAT_0021be10 ^ 0x4343434343434343;
                DAT_0021f18a = '\x01';
                puVar1 = (undefined1 *)0xc23f84056fd30bd6;
              }
              else if (puVar5 == &DAT_f615808441b1dafc) {
                iVar2 = FUN_00212730(0,1,&DAT_0021f0ec);
                puVar1 = (undefined1 *)0x1cba5f82f77e481f;
                if (iVar2 != 0) {
                  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
                }
              }
            }
            else {
              puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
              if ((puVar5 != (undefined1 *)0xf63b36e7a9d9f670) &&
                 (puVar1 = puVar5, puVar5 == (undefined1 *)0xf6c71d76f8b48eb9)) {
                unaff_w20 = 1;
                puVar1 = (undefined1 *)0xbf711ec4fafe862e;
              }
            }
          }
          if ((long)puVar5 < -0x3768c81d078975fb) break;
          puVar1 = (undefined1 *)0xc23f84056fd30bd6;
          if ((puVar5 != (undefined1 *)0xc89737e2f8768a05) &&
             (puVar1 = puVar5, puVar5 == (undefined1 *)0xd222672a639a1d2e)) {
            puVar1 = (undefined1 *)0xaa46adf0a78af8c7;
          }
        }
        if (puVar5 != (undefined1 *)0xaa46adf0a78af8c7) break;
        iVar2 = FUN_00212730(0,1,&DAT_0021f0f0);
        puVar1 = (undefined1 *)0x312910f1547c7c77;
        if (iVar2 != 0) {
          puVar1 = (undefined1 *)0xf63b36e7a9d9f670;
        }
      }
      if (puVar5 != (undefined1 *)0xc23f84056fd30bd6) break;
      DAT_0021f0f0 = 0;
      uVar3 = (**(code **)(*param_2 + 0x538))(param_2,&DAT_0021be10);
      *param_4 = uVar3;
      uVar4 = FUN_0016de70(param_2);
      puVar1 = (undefined1 *)0x6b5051bf1aed633d;
      if ((uVar4 & 1) == 0) {
        puVar1 = (undefined1 *)0xf6c71d76f8b48eb9;
      }
    }
  } while (puVar5 != (undefined1 *)0xbf711ec4fafe862e);
  return unaff_w20 & 1;
}

