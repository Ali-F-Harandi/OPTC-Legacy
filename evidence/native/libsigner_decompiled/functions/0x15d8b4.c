// rea decompile_all
// name: FUN_0015d8b4
// address: 0x15d8b4
// body: available
// range: 0x15d8b4-0x15ddf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_0015d8b4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  byte unaff_w19;
  
  lVar3 = 0x5b7c3d82cb212c97;
LAB_0015d9c0:
  do {
    while (lVar2 = lVar3, lVar3 = lVar2, lVar2 < 0x63917c9c368bdc5) {
      if (lVar2 < -0x29068d7f87831e07) {
        if (lVar2 < -0x6f90a2962968a372) {
          if (lVar2 == -0x7b6df44a823a7061) {
            iVar1 = FUN_00212730(0,1,&DAT_0021f5f8);
            lVar3 = -0x716dcc0c4fd0af4c;
            if (iVar1 != 0) {
              lVar3 = -0x29068d7f87831e07;
            }
          }
          else if (lVar2 == -0x716dcc0c4fd0af4c) {
            lVar3 = -0x4329cd16891a440e;
            if (DAT_0021f5f9 == '\0') {
              lVar3 = 0x25f288e26408887c;
            }
          }
        }
        else if (lVar2 == -0x6f90a2962968a372) {
          lVar3 = -0x1d6cd5968c149c33;
LAB_0015d9b4:
          DAT_0021d728 = DAT_0021d728 ^ 2;
          DAT_0021d727 = DAT_0021d727 ^ 2;
          DAT_0021d726 = DAT_0021d726 ^ 2;
          DAT_0021d725 = DAT_0021d725 ^ 2;
          DAT_0021d724 = DAT_0021d724 ^ 2;
          DAT_0021d729 = DAT_0021d729 ^ 2;
          DAT_0021f5f9 = '\x01';
        }
        else if (lVar2 == -0x4329cd16891a440e) {
          lVar3 = 0xdb9a73ae30e7fb8;
        }
      }
      else if (lVar2 < -0x110d6a0def310f77) {
        lVar3 = -0x7b6df44a823a7061;
        if ((lVar2 != -0x29068d7f87831e07) && (lVar3 = lVar2, lVar2 == -0x1d6cd5968c149c33)) {
          DAT_0021f5f8 = 0;
          lVar3 = FUN_001e238c(*param_1,&DAT_0021d724);
          unaff_w19 = lVar3 != 0;
          lVar3 = 0x390120d80e9e0738;
        }
      }
      else if (lVar2 == -0x110d6a0def310f77) {
        lVar3 = 0x46a5f9a1a9ee2080;
        if (DAT_0021f5f9 == '\0') {
          lVar3 = -0x6f90a2962968a372;
        }
      }
      else if (lVar2 == -0xaf37da11bd01bcb) {
        lVar3 = 0x5207a42e3b5b8fa0;
      }
    }
    if (lVar2 < 0x46a5f9a1a9ee2080) {
      if (lVar2 < 0x25f288e26408887c) {
        if (lVar2 == 0x63917c9c368bdc5) {
          unaff_w19 = 1;
          lVar3 = 0x390120d80e9e0738;
        }
        else if (lVar2 == 0xdb9a73ae30e7fb8) {
          DAT_0021f5f8 = 0;
          lVar2 = FUN_001e238c(param_1[4],&DAT_0021d724);
          lVar3 = -0xaf37da11bd01bcb;
          if (lVar2 != 0) {
            lVar3 = 0x63917c9c368bdc5;
          }
        }
      }
      else {
        if (lVar2 == 0x25f288e26408887c) {
          lVar3 = 0xdb9a73ae30e7fb8;
          goto LAB_0015d9b4;
        }
        if (lVar2 == 0x390120d80e9e0738) {
          return unaff_w19 & 1;
        }
      }
      goto LAB_0015d9c0;
    }
    if (lVar2 < 0x5b7c3d82cb212c97) {
      lVar3 = -0x1d6cd5968c149c33;
      if ((lVar2 != 0x46a5f9a1a9ee2080) && (lVar3 = lVar2, lVar2 == 0x5207a42e3b5b8fa0)) {
        iVar1 = FUN_00212730(0,1,&DAT_0021f5f8);
        lVar3 = -0x110d6a0def310f77;
        if (iVar1 != 0) {
          lVar3 = 0x6af753da62f392e8;
        }
      }
    }
    else {
      lVar3 = 0x5207a42e3b5b8fa0;
      if ((lVar2 != 0x6af753da62f392e8) && (lVar3 = lVar2, lVar2 == 0x5b7c3d82cb212c97)) {
        lVar3 = -0x7b6df44a823a7061;
      }
    }
  } while( true );
}

