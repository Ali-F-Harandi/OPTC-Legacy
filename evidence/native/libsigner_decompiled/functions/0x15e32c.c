// rea decompile_all
// name: FUN_0015e32c
// address: 0x15e32c
// body: available
// range: 0x15e32c-0x15ee57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_0015e32c(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte local_84;
  
  lVar1 = -0x4f3fbd6f7ec79ad2;
  if (param_1 != 0) {
    lVar1 = 0x528648c6eb65cabb;
  }
  lVar3 = -0xfcbdea2e79773d8;
LAB_0015e484:
  do {
    while (lVar4 = lVar3, lVar3 = lVar4, lVar4 < -0xfcbdea2e79773d8) {
      if (lVar4 < -0x38e2c9e9019ccd32) {
        if (lVar4 < -0x4ddf4599c5262c30) {
          if (lVar4 < -0x60debec3107f709d) {
            lVar3 = 0x3495f2477d0b8487;
            if ((lVar4 != -0x73f38c16f8b17b09) && (lVar3 = lVar4, lVar4 == -0x6d30640616ffac36)) {
              lVar3 = 0x29b30160caa7dd77;
            }
          }
          else {
            lVar3 = -0x394a7c220d96fd;
            if ((lVar4 != -0x60debec3107f709d) && (lVar3 = lVar4, lVar4 == -0x4f3fbd6f7ec79ad2)) {
LAB_0015e470:
              local_84 = 0;
              lVar3 = 0x50b52e1503475108;
            }
          }
        }
        else if (lVar4 < -0x4122b55fff768cc7) {
          lVar3 = 0xa218405adae4e8b;
          if ((lVar4 != -0x4ddf4599c5262c30) && (lVar3 = lVar4, lVar4 == -0x453b2a8238e31774)) {
            lVar3 = -0x4122b55fff768cc7;
            if (DAT_0021f739 == '\0') {
              lVar3 = 0x5484e26557ca9d67;
            }
          }
        }
        else {
          lVar3 = -0x237df10d3c496a09;
          if ((lVar4 != -0x4122b55fff768cc7) && (lVar3 = lVar4, lVar4 == -0x3b95476422f9fd45)) {
            lVar3 = -0x6d30640616ffac36;
            if (DAT_0021f737 == '\0') {
              lVar3 = -0x132c93e44294a4d0;
            }
          }
        }
      }
      else if (lVar4 < -0x241e65d300f6c660) {
        if (lVar4 < -0x318132bd6254f3f5) {
          if (lVar4 == -0x38e2c9e9019ccd32) {
            DAT_0021d758 = DAT_0021d758 ^ 0xfb;
            DAT_0021d75a = DAT_0021d75a ^ 0xfb;
            DAT_0021d759 = DAT_0021d759 ^ 0xfb;
            DAT_0021d750 = DAT_0021d750 ^ 0xfbfbfbfbfbfbfbfb;
            DAT_0021f738 = '\x01';
            lVar3 = 0xa218405adae4e8b;
          }
          else if (lVar4 == -0x31bd467047e05d2e) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f608);
            lVar3 = 0xcbadeb571d2df4f;
            if (iVar2 != 0) {
              lVar3 = -0x241e65d300f6c660;
            }
          }
        }
        else if (lVar4 == -0x318132bd6254f3f5) {
          DAT_0021f600 = 0;
          lVar4 = FUN_001e238c(*(undefined8 *)(param_1 + 0x20),&DAT_0021d734);
          lVar3 = -0x311b11772aee8d5f;
          if (lVar4 != 0) {
            lVar3 = -0x60debec3107f709d;
          }
        }
        else if (lVar4 == -0x311b11772aee8d5f) {
          lVar3 = -0x950d7b68e85da87;
        }
      }
      else if (lVar4 < -0x1b80c56fd57f0efd) {
        lVar3 = -0x31bd467047e05d2e;
        if ((lVar4 != -0x241e65d300f6c660) && (lVar3 = lVar4, lVar4 == -0x237df10d3c496a09)) {
          DAT_0021f60c = 0;
          lVar3 = FUN_001e238c(*(undefined8 *)(param_1 + 0x30),&DAT_0021d760);
          local_84 = lVar3 != 0;
          lVar3 = 0x50b52e1503475108;
        }
      }
      else if (lVar4 == -0x1b80c56fd57f0efd) {
        DAT_0021d734 = DAT_0021d734 ^ 0x3f;
        DAT_0021d735 = DAT_0021d735 ^ 0x3f;
        DAT_0021d736 = DAT_0021d736 ^ 0x3f;
        DAT_0021d737 = DAT_0021d737 ^ 0x3f;
        DAT_0021d738 = DAT_0021d738 ^ 0x3f;
        DAT_0021d739 = DAT_0021d739 ^ 0x3f;
        DAT_0021f736 = '\x01';
        lVar3 = -0x318132bd6254f3f5;
      }
      else if (lVar4 == -0x132c93e44294a4d0) {
        DAT_0021d748 = DAT_0021d748 ^ 0x70;
        DAT_0021d740 = DAT_0021d740 ^ 0x7070707070707070;
        DAT_0021f737 = '\x01';
        lVar3 = 0x29b30160caa7dd77;
      }
      else if (lVar4 == -0x1267ea568aea6c30) {
        lVar3 = -0x31bd467047e05d2e;
      }
    }
    if (0x39678d34046d2de0 < lVar4) {
      if (lVar4 < 0x50b52e1503475108) {
        if (lVar4 < 0x437828a66e59845f) {
          lVar3 = -0x950d7b68e85da87;
          if ((lVar4 != 0x39678d34046d2de1) && (lVar3 = lVar4, lVar4 == 0x3969ad82d46cc7b0)) {
            lVar3 = -0x318132bd6254f3f5;
          }
        }
        else {
          lVar3 = -0x394a7c220d96fd;
          if ((lVar4 != 0x437828a66e59845f) && (lVar3 = lVar4, lVar4 == 0x504b1908ce7f9b1f)) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f600);
            lVar3 = 0x6af7b67bbf505558;
            if (iVar2 != 0) {
              lVar3 = 0xa7e1637f17ae866;
            }
          }
        }
      }
      else if (lVar4 < 0x6a348e2fd0cbd3b8) {
        lVar3 = 0x504b1908ce7f9b1f;
        if (lVar4 != 0x528648c6eb65cabb) {
          if (lVar4 == 0x5484e26557ca9d67) {
            DAT_0021d768 = DAT_0021d768 ^ 0x5f;
            DAT_0021d769 = DAT_0021d769 ^ 0x5f;
            DAT_0021d76a = DAT_0021d76a ^ 0x5f;
            DAT_0021d76b = DAT_0021d76b ^ 0x5f;
            DAT_0021d76c = DAT_0021d76c ^ 0x5f;
            DAT_0021d76d = DAT_0021d76d ^ 0x5f;
            DAT_0021d760 = DAT_0021d760 ^ 0x5f5f5f5f5f5f5f5f;
            DAT_0021f739 = '\x01';
            lVar3 = -0x237df10d3c496a09;
          }
          else {
            lVar3 = lVar4;
            if (lVar4 == 0x50b52e1503475108) {
              return local_84 & 1;
            }
          }
        }
      }
      else {
        if (lVar4 == 0x6a348e2fd0cbd3b8) goto LAB_0015e470;
        if (lVar4 == 0x6af7b67bbf505558) {
          lVar3 = 0x3969ad82d46cc7b0;
          if (DAT_0021f736 == '\0') {
            lVar3 = -0x1b80c56fd57f0efd;
          }
        }
      }
      goto LAB_0015e484;
    }
    if (lVar4 < 0xa218405adae4e8b) {
      if (lVar4 < -0x78d01c5b8251217) {
        lVar3 = lVar1;
        if ((lVar4 != -0xfcbdea2e79773d8) && (lVar3 = lVar4, lVar4 == -0x950d7b68e85da87)) {
          iVar2 = FUN_00212730(0,1,&DAT_0021f604);
          lVar3 = -0x3b95476422f9fd45;
          if (iVar2 != 0) {
            lVar3 = 0x39678d34046d2de1;
          }
        }
      }
      else {
        lVar3 = -0x394a7c220d96fd;
        if ((lVar4 != -0x78d01c5b8251217) && (lVar3 = lVar4, lVar4 == -0x394a7c220d96fd)) {
          lVar3 = 0x3495f2477d0b8487;
        }
      }
    }
    else if (lVar4 < 0xcbadeb571d2df4f) {
      if (lVar4 == 0xa218405adae4e8b) {
        DAT_0021f608 = 0;
        lVar4 = FUN_001e238c(*(undefined8 *)(param_1 + 0x20),&DAT_0021d750);
        lVar3 = 0x6a348e2fd0cbd3b8;
        if (lVar4 != 0) {
          lVar3 = 0x437828a66e59845f;
        }
      }
      else if (lVar4 == 0xa7e1637f17ae866) {
        lVar3 = 0x504b1908ce7f9b1f;
      }
    }
    else if (lVar4 == 0xcbadeb571d2df4f) {
      lVar3 = -0x4ddf4599c5262c30;
      if (DAT_0021f738 == '\0') {
        lVar3 = -0x38e2c9e9019ccd32;
      }
    }
    else if (lVar4 == 0x29b30160caa7dd77) {
      DAT_0021f604 = 0;
      lVar4 = FUN_001e238c(*(undefined8 *)(param_1 + 0x20),&DAT_0021d740);
      lVar3 = -0x1267ea568aea6c30;
      if (lVar4 != 0) {
        lVar3 = -0x78d01c5b8251217;
      }
    }
    else if (lVar4 == 0x3495f2477d0b8487) {
      iVar2 = FUN_00212730(0,1,&DAT_0021f60c);
      lVar3 = -0x453b2a8238e31774;
      if (iVar2 != 0) {
        lVar3 = -0x73f38c16f8b17b09;
      }
    }
  } while( true );
}

