// rea decompile_all
// name: FUN_00124d64
// address: 0x124d64
// body: available
// range: 0x124d64-0x125517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00124d64(ulong param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  lVar1 = -0x4d4dcbd80fd19894;
  if (param_3 != 0) {
    lVar1 = -0x36e4cdbc7cc71415;
  }
  lVar2 = -0x32d703b40f5d730;
  if (0 < param_3) {
    lVar2 = 0x938f423e0738fad;
  }
  lVar3 = -0x4a22762196dcf52b;
  if (2 < param_3) {
    lVar3 = 0x445951b18d5b174b;
  }
  lVar4 = 0x34635787a9c7ccb;
  if (1 < param_3) {
    lVar4 = -0x22f14540dee57f60;
  }
  lVar5 = 0x481cca618a76367;
  if (4 < param_3) {
    lVar5 = 0x2a013c5b8fe43319;
  }
  lVar6 = 0x43e0716434a8db96;
  if (6 < param_3) {
    lVar6 = -0x6f8d7fffc25548a2;
  }
  lVar7 = -0x44f265b911991ae8;
  if (5 < param_3) {
    lVar7 = -0x1ae8faa2f14c4ad8;
  }
  lVar8 = 0x162b6d1217ca8b80;
  if (3 < param_3) {
    lVar8 = 0x279ec6686ef78dc7;
  }
  lVar9 = -0x1444b5cce6f35eae;
  if (param_3 != 8) {
    lVar9 = 0x5a56e7690d0d7c54;
  }
  lVar10 = 0xa75b20cda966d6f;
  if (7 < param_3) {
    lVar10 = 0x2eb1b3fa991fd0c3;
  }
  lVar11 = 0x7ad01f4ce7fcfd0;
  if (param_3 != 8 && param_2 == 0) {
    lVar11 = 0x4a846006da9a83ad;
  }
  lVar12 = -0x77727add0cfc4ea3;
  if (param_1 != 0) {
    lVar12 = 0x1ed7d5e602d25831;
  }
  uVar14 = param_1;
  lVar15 = -0x509477aabdb8c18b;
LAB_00125010:
  do {
    while (lVar16 = lVar15, lVar15 = lVar16, 0x481cca618a76366 < lVar16) {
      if (lVar16 < 0x279ec6686ef78dc7) {
        if (lVar16 < 0xa75b20cda966d6f) {
          if (lVar16 == 0x481cca618a76367) {
            iVar13 = FUN_001e2ed0(param_1,param_2);
LAB_0012544c:
            uVar14 = (ulong)(iVar13 == 0);
            lVar15 = -0x1b60f53f68465216;
          }
          else if (lVar16 == 0x7ad01f4ce7fcfd0) {
            lVar15 = -0x248efbab039ee777;
          }
          else if (lVar16 == 0x938f423e0738fad) {
            uVar14 = FUN_00200ad4(param_1,param_2);
            lVar15 = -0x1b60f53f68465216;
          }
        }
        else if (lVar16 == 0xa75b20cda966d6f) {
          uVar14 = FUN_002009b8(param_1,param_2);
          lVar15 = -0x1b60f53f68465216;
        }
        else {
          lVar15 = lVar4;
          if ((lVar16 != 0x162b6d1217ca8b80) && (lVar15 = lVar16, lVar16 == 0x1ed7d5e602d25831)) {
            lVar15 = lVar11;
          }
        }
      }
      else if (lVar16 < 0x43e0716434a8db96) {
        lVar15 = lVar7;
        if (lVar16 != 0x279ec6686ef78dc7) {
          if (lVar16 == 0x2a013c5b8fe43319) {
            uVar14 = FUN_002006ac(param_1,param_2);
            lVar15 = -0x1b60f53f68465216;
          }
          else {
            lVar15 = lVar16;
            if (lVar16 == 0x2eb1b3fa991fd0c3) {
              lVar15 = lVar9;
            }
          }
        }
      }
      else if (lVar16 < 0x4a846006da9a83ad) {
        if (lVar16 == 0x43e0716434a8db96) {
          uVar14 = FUN_00200830(param_1,param_2);
          lVar15 = -0x1b60f53f68465216;
        }
        else if (lVar16 == 0x445951b18d5b174b) {
          uVar14 = FUN_00200de0(param_1,param_2);
          lVar15 = -0x1b60f53f68465216;
        }
      }
      else if (lVar16 == 0x4a846006da9a83ad) {
LAB_001253bc:
        uVar14 = 0;
        lVar15 = -0x1b60f53f68465216;
      }
      else if (lVar16 == 0x5a56e7690d0d7c54) goto LAB_001254e0;
    }
    if (lVar16 < -0x248efbab039ee777) {
      if (lVar16 < -0x4d4dcbd80fd19894) {
        if (lVar16 == -0x77727add0cfc4ea3) goto LAB_001253bc;
        lVar15 = lVar10;
        if ((lVar16 != -0x6f8d7fffc25548a2) && (lVar15 = lVar16, lVar16 == -0x509477aabdb8c18b)) {
          lVar15 = lVar12;
        }
      }
      else if (lVar16 < -0x44f265b911991ae8) {
        if (lVar16 == -0x4d4dcbd80fd19894) {
          iVar13 = FUN_001e17a8(param_1,param_2);
          goto LAB_0012544c;
        }
        if (lVar16 == -0x4a22762196dcf52b) {
          uVar14 = FUN_00200c58(param_1,param_2);
          lVar15 = -0x1b60f53f68465216;
        }
      }
      else {
        lVar15 = lVar5;
        if ((lVar16 != -0x44f265b911991ae8) && (lVar15 = lVar16, lVar16 == -0x36e4cdbc7cc71415)) {
LAB_001254e0:
          lVar15 = -0x1b60f53f68465216;
        }
      }
      goto LAB_00125010;
    }
    if (lVar16 < -0x1444b5cce6f35eae) {
      if (lVar16 < -0x1b60f53f68465216) {
        lVar15 = lVar8;
        if ((lVar16 != -0x248efbab039ee777) && (lVar15 = lVar16, lVar16 == -0x22f14540dee57f60)) {
          lVar15 = lVar3;
        }
      }
      else {
        lVar15 = lVar6;
        if ((lVar16 != -0x1ae8faa2f14c4ad8) && (lVar15 = lVar16, lVar16 == -0x1b60f53f68465216)) {
          return (uint)uVar14 & 1;
        }
      }
    }
    else if (lVar16 == -0x1444b5cce6f35eae) {
      lVar15 = FUN_001e16c4(param_1);
      uVar14 = (ulong)(lVar15 != 0);
      lVar15 = -0x1b60f53f68465216;
    }
    else {
      lVar15 = lVar1;
      if ((lVar16 != -0x32d703b40f5d730) && (lVar15 = lVar16, lVar16 == 0x34635787a9c7ccb)) {
        lVar15 = lVar2;
      }
    }
  } while( true );
}

