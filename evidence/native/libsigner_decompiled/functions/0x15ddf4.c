// rea decompile_all
// name: FUN_0015ddf4
// address: 0x15ddf4
// body: available
// range: 0x15ddf4-0x15e32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_0015ddf4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte unaff_w24;
  
  lVar3 = 0x74c44f5a5180ca67;
LAB_0015df10:
  do {
    while (lVar2 = lVar3, lVar3 = lVar2, 0x31756b1f6c359746 < lVar2) {
      if (lVar2 < 0x56c1d20550f38d16) {
        if (lVar2 < 0x47b6666515b9ed1e) {
          if (lVar2 == 0x31756b1f6c359747) {
            lVar3 = -0x5ee2ceb7351e2b91;
            if (DAT_0021f5fd == '\0') {
              lVar3 = 0x525c20dd716a2391;
            }
          }
          else if (lVar2 == 0x3adc9deef7a4e12b) {
            lVar3 = -0x44fb6164137ed888;
          }
        }
        else if (lVar2 == 0x47b6666515b9ed1e) {
          DAT_0021f5fc = 0;
          lVar3 = FUN_001e238c(*(undefined8 *)(param_1 + 0x18),&DAT_0021d72c);
          unaff_w24 = lVar3 != 0;
          lVar3 = -0x2ad3a4f3360a3321;
        }
        else if (lVar2 == 0x525c20dd716a2391) {
          lVar3 = 0x56c1d20550f38d16;
LAB_0015df00:
          DAT_0021d72f = DAT_0021d72f ^ 0xab;
          DAT_0021d72e = DAT_0021d72e ^ 0xab;
          DAT_0021d72d = DAT_0021d72d ^ 0xab;
          DAT_0021d72c = DAT_0021d72c ^ 0xab;
          DAT_0021d730 = DAT_0021d730 ^ 0xab;
          DAT_0021f5fd = '\x01';
        }
      }
      else if (lVar2 < 0x7343cfdced339916) {
        if (lVar2 == 0x56c1d20550f38d16) {
          DAT_0021f5fc = 0;
          lVar2 = FUN_001e238c(*(undefined8 *)(param_1 + 8),&DAT_0021d72c);
          lVar3 = 0x3adc9deef7a4e12b;
          if (lVar2 != 0) {
            lVar3 = 0x7343cfdced339916;
          }
        }
        else if (lVar2 == 0x588381463b68e217) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f5fc);
          lVar3 = 0x31756b1f6c359747;
          if (iVar1 != 0) {
            lVar3 = -0x77b72efdc70c97ec;
          }
        }
      }
      else if (lVar2 == 0x7343cfdced339916) {
        unaff_w24 = 1;
        lVar3 = -0x2ad3a4f3360a3321;
      }
      else if (lVar2 == 0x74c44f5a5180ca67) {
        lVar3 = 0x588381463b68e217;
      }
    }
    if (-0x474f9523de08d29f < lVar2) {
      if (lVar2 < -0x3f669b5baa46dc0d) {
        if (lVar2 == -0x474f9523de08d29e) {
          lVar3 = -0x61078a1d26bd5007;
          if (DAT_0021f5fd == '\0') {
            lVar3 = -0x3f669b5baa46dc0d;
          }
        }
        else if (lVar2 == -0x44fb6164137ed888) {
          iVar1 = FUN_00212730(0,1,&DAT_0021f5fc);
          lVar3 = -0x474f9523de08d29e;
          if (iVar1 != 0) {
            lVar3 = -0x5e829a917c434c18;
          }
        }
      }
      else {
        if (lVar2 == -0x3f669b5baa46dc0d) {
          lVar3 = 0x47b6666515b9ed1e;
          goto LAB_0015df00;
        }
        if (lVar2 == -0x2ad3a4f3360a3321) {
          return unaff_w24 & 1;
        }
      }
      goto LAB_0015df10;
    }
    if (lVar2 < -0x5ee2ceb7351e2b91) {
      lVar3 = 0x588381463b68e217;
      if ((lVar2 != -0x77b72efdc70c97ec) && (lVar3 = lVar2, lVar2 == -0x61078a1d26bd5007)) {
        lVar3 = 0x47b6666515b9ed1e;
      }
    }
    else {
      lVar3 = 0x56c1d20550f38d16;
      if ((lVar2 != -0x5ee2ceb7351e2b91) && (lVar3 = lVar2, lVar2 == -0x5e829a917c434c18)) {
        lVar3 = -0x44fb6164137ed888;
      }
    }
  } while( true );
}

