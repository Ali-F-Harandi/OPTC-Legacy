// rea decompile_all
// name: FUN_001b2864
// address: 0x1b2864
// body: available
// range: 0x1b2864-0x1b388f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b388c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001b2864(undefined4 *param_1,char *param_2)

{
  dirent *pdVar1;
  char *pcVar2;
  long lVar3;
  dirent *pdVar4;
  dirent *pdVar5;
  dirent *pdVar6;
  bool bVar7;
  int iVar8;
  dirent *__dirp;
  long lVar9;
  ssize_t sVar10;
  dirent *extraout_x1;
  dirent *pdVar11;
  dirent *pdVar12;
  dirent *pdVar13;
  dirent *pdVar14;
  dirent *pdVar15;
  dirent *local_20b8;
  uint local_20ac;
  char *local_20a8;
  dirent *local_20a0;
  dirent *local_2098;
  uint local_2084;
  char acStack_2080 [4096];
  char acStack_1080 [4096];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  __dirp = (dirent *)opendir(param_2);
  pdVar1 = (dirent *)0xba8fbc7d3623138d;
  if (__dirp != (dirent *)0x0) {
    pdVar1 = (dirent *)0xedbefc38c6cf9bfe;
  }
  pdVar4 = __dirp;
  pdVar5 = extraout_x1;
  pdVar6 = pdVar1;
  pdVar15 = (dirent *)0x5039187a35dab08d;
LAB_001b29a4:
  pdVar14 = pdVar15;
  pdVar12 = pdVar6;
  pdVar11 = pdVar5;
  pdVar13 = pdVar4;
  pdVar4 = pdVar13;
  pdVar5 = pdVar11;
  pdVar6 = pdVar12;
  pdVar15 = pdVar14;
  if ((long)pdVar14 < -0x111819a4994f0fa) {
    if ((long)pdVar14 < -0x378643ce451a44ec) {
      if ((long)pdVar14 < -0x5412c5352f1dc37a) {
        if ((long)pdVar14 < -0x6bf42222db0ad31d) {
          pdVar15 = (dirent *)0xc0f51250277e5cfd;
          if (pdVar14 != (dirent *)0x8500be9b057d300e) {
            if (pdVar14 == (dirent *)0x87b1ff2df68e38ae) {
              DAT_0021e848 = DAT_0021e848 ^ 0x6d;
              DAT_0021e849 = DAT_0021e849 ^ 0x6d;
              DAT_0021e84a = DAT_0021e84a ^ 0x6d;
              DAT_0021faed = '\x01';
              pdVar15 = (dirent *)0x34ee749c3dc3cf5c;
            }
            else {
              pdVar15 = pdVar14;
              if (pdVar14 == (dirent *)0x8e3a3d610d847caf) {
                iVar8 = FUN_00212730(0,1,&DAT_0021fac0);
                pdVar13 = (dirent *)0x960858df0b0de441;
                pdVar15 = (dirent *)0x1db468c64d6a7ed0;
                bVar7 = iVar8 == 0;
                goto LAB_001b2998;
              }
            }
          }
        }
        else {
          if (pdVar14 == (dirent *)0x940bdddd24f52ce3) {
LAB_001b3304:
            local_2084 = 0;
            goto LAB_001b3618;
          }
          pdVar15 = (dirent *)0x8e3a3d610d847caf;
          if ((pdVar14 != (dirent *)0x960858df0b0de441) &&
             (pdVar15 = pdVar14, pdVar14 == (dirent *)0xa952fa75448bcb41)) {
            pdVar15 = (dirent *)0x3b16db62a3c2f4fb;
          }
        }
        goto LAB_001b29a4;
      }
      if ((long)pdVar14 < -0x3f0aedafd881a303) {
        pdVar15 = (dirent *)0xce95d05271a8da34;
        if (pdVar14 == (dirent *)0xabed3acad0e23c86) goto LAB_001b29a4;
        if (pdVar14 == (dirent *)0xba8fbc7d3623138d) {
          local_20ac = 0;
          *param_1 = 7;
          pdVar15 = (dirent *)0xd6afb11c30d2a9cd;
          goto LAB_001b29a4;
        }
        pdVar15 = pdVar14;
        if (pdVar14 != (dirent *)0xbfa497f00132becf) goto LAB_001b29a4;
        local_20b8 = readdir((DIR *)__dirp);
        bVar7 = local_20b8 == (dirent *)0x0;
        pdVar13 = (dirent *)0x5eda44100212fa2c;
        pdVar15 = (dirent *)0xd108a90e38b691a1;
      }
      else {
        if (pdVar14 != (dirent *)0xc0f51250277e5cfd) {
          pdVar15 = (dirent *)0xc879bc31bae5bb14;
          if ((pdVar14 != (dirent *)0xc33cd820d1133e3a) &&
             (pdVar15 = pdVar14, pdVar14 == (dirent *)&DAT_c45038db124ae016)) {
            pdVar15 = (dirent *)0x22f3f9cf91cbb9a6;
          }
          goto LAB_001b29a4;
        }
        iVar8 = FUN_00212730(0,1,&DAT_0021fac8);
        bVar7 = iVar8 == 0;
        pdVar13 = (dirent *)0xe7622641fcb090c6;
        pdVar15 = (dirent *)0x54c2b837d86711b8;
      }
    }
    else {
      if ((long)pdVar14 < -0x29504ee3cf2d5633) {
        if ((long)pdVar14 < -0x2ef756f1c7496e5f) {
          if (pdVar14 == (dirent *)0xc879bc31bae5bb14) {
            local_20a8 = pdVar12->d_name;
            DAT_0021fac0 = 0;
            iVar8 = FUN_001e2ed0(local_20a8,&DAT_0021e844);
            bVar7 = iVar8 == 0;
            pdVar13 = (dirent *)0x8500be9b057d300e;
            pdVar15 = (dirent *)&DAT_c45038db124ae016;
            goto LAB_001b2998;
          }
          if (pdVar14 == (dirent *)0xcb31a60e6206eed1) {
            pdVar15 = (dirent *)0xbfa497f00132becf;
          }
          else if (pdVar14 == (dirent *)0xce95d05271a8da34) {
            DAT_0021facc = 0;
            FUN_001e0fd8(acStack_1080,0x1000,&DAT_0021e84c,param_2,local_20a8);
            memset(acStack_2080,0,0x1000);
            sVar10 = readlink(acStack_1080,acStack_2080,0xfff);
            pdVar15 = (dirent *)0xcb31a60e6206eed1;
            if (-1 < sVar10) {
              pdVar15 = (dirent *)0x65536dc2a8308acd;
            }
          }
        }
        else {
          if (pdVar14 == (dirent *)0xd108a90e38b691a1) goto LAB_001b3304;
          pdVar15 = (dirent *)0x34ee749c3dc3cf5c;
          if ((pdVar14 != (dirent *)0xd14700cedc0a1544) &&
             (pdVar15 = pdVar14, pdVar14 == (dirent *)0xd1a28e2b92bbcc90)) {
            pdVar15 = (dirent *)0xa952fa75448bcb41;
            if (DAT_0021faef == '\0') {
              pdVar15 = (dirent *)0xfeee7e65b66b0f06;
            }
          }
        }
        goto LAB_001b29a4;
      }
      if ((long)pdVar14 < -0x12e0f8e15901e122) {
        pdVar4 = local_2098;
        pdVar15 = (dirent *)0x3007aa9d32d99be8;
        if (((pdVar14 != (dirent *)0xe48eaf6f29f5caa2) &&
            (pdVar4 = pdVar13, pdVar15 = (dirent *)0xc0f51250277e5cfd,
            pdVar14 != (dirent *)0xe7622641fcb090c6)) &&
           (pdVar15 = pdVar14, pdVar14 == (dirent *)0xd6afb11c30d2a9cd)) {
          if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_20ac & 1;
        }
        goto LAB_001b29a4;
      }
      pdVar15 = (dirent *)0xbfa497f00132becf;
      if (pdVar14 == (dirent *)0xed1f071ea6fe1ede) goto LAB_001b29a4;
      if (pdVar14 == (dirent *)0xedbefc38c6cf9bfe) {
        local_20a0 = readdir((DIR *)__dirp);
        bVar7 = local_20a0 == (dirent *)0x0;
        pdVar13 = (dirent *)0x77f0428eaa711148;
        pdVar15 = (dirent *)0x7d8bf94548220fb8;
        goto LAB_001b2998;
      }
      pdVar15 = pdVar14;
      if (pdVar14 != (dirent *)0xfda5c16090bb3af4) goto LAB_001b29a4;
      iVar8 = FUN_00212730(0,1,&DAT_0021facc);
      bVar7 = iVar8 == 0;
      pdVar13 = (dirent *)0x31b9d74c89a90fe3;
      pdVar15 = (dirent *)0x55dcd19dee737a1a;
    }
  }
  else {
    if (0x36f07785a64d7583 < (long)pdVar14) {
      if ((long)pdVar14 < 0x54c2b837d86711b8) {
        if ((long)pdVar14 < 0x418b7d3c908df894) {
          if (pdVar14 == (dirent *)0x36f07785a64d7584) {
            DAT_0021e844 = DAT_0021e844 ^ 0xb1;
            DAT_0021e845 = DAT_0021e845 ^ 0xb1;
            DAT_0021faeb = '\x01';
            pdVar15 = (dirent *)0xc879bc31bae5bb14;
          }
          else if (pdVar14 == (dirent *)0x3ace195dd3930386) {
            local_2084 = 1;
LAB_001b3618:
            pdVar5 = pdVar11;
            pdVar15 = (dirent *)0x483dcbc36ada42c4;
          }
          else if (pdVar14 == (dirent *)0x3b16db62a3c2f4fb) {
            DAT_0021fad0 = 0;
            lVar9 = FUN_001e43f0(acStack_2080,0x2f);
            pcVar2 = acStack_2080;
            if (lVar9 != 0) {
              pcVar2 = (char *)(lVar9 + 1);
            }
            lVar9 = FUN_001e238c(pcVar2,&DAT_0021e858);
            pdVar15 = (dirent *)0xed1f071ea6fe1ede;
            if (lVar9 != 0) {
              pdVar15 = (dirent *)0x3ace195dd3930386;
            }
          }
        }
        else {
          pdVar6 = pdVar11;
          pdVar15 = (dirent *)0x8e3a3d610d847caf;
          if (pdVar14 != (dirent *)0x418b7d3c908df894) {
            if (pdVar14 == (dirent *)0x483dcbc36ada42c4) {
              closedir((DIR *)__dirp);
              local_20ac = local_2084;
              pdVar6 = pdVar12;
              pdVar15 = (dirent *)0xd6afb11c30d2a9cd;
            }
            else {
              pdVar6 = pdVar12;
              pdVar15 = pdVar14;
              if (pdVar14 == (dirent *)0x5039187a35dab08d) {
                pdVar15 = pdVar1;
              }
            }
          }
        }
      }
      else if ((long)pdVar14 < 0x65536dc2a8308acd) {
        if (pdVar14 == (dirent *)0x54c2b837d86711b8) {
          pdVar15 = (dirent *)0xd14700cedc0a1544;
          if (DAT_0021faed == '\0') {
            pdVar15 = (dirent *)0x87b1ff2df68e38ae;
          }
        }
        else if (pdVar14 == (dirent *)0x55dcd19dee737a1a) {
          pdVar15 = (dirent *)0xabed3acad0e23c86;
          if (DAT_0021faee == '\0') {
            pdVar15 = (dirent *)0x32f4713bcaf93571;
          }
        }
        else if (pdVar14 == (dirent *)0x5eda44100212fa2c) {
          pdVar4 = local_20b8;
          pdVar15 = (dirent *)0x3007aa9d32d99be8;
        }
      }
      else {
        pdVar15 = (dirent *)0xc7bf249d1db72b2;
        if (((pdVar14 != (dirent *)0x65536dc2a8308acd) &&
            (pdVar5 = local_20a0, pdVar15 = (dirent *)0x418b7d3c908df894,
            pdVar14 != (dirent *)0x77f0428eaa711148)) &&
           (pdVar5 = pdVar11, pdVar15 = pdVar14, pdVar14 == (dirent *)0x7d8bf94548220fb8))
        goto LAB_001b3304;
      }
      goto LAB_001b29a4;
    }
    if ((long)pdVar14 < 0x27963d1423e000f6) {
      if ((long)pdVar14 < 0xfb13253120e52d5) {
        if (pdVar14 == (dirent *)0xfeee7e65b66b0f06) {
          DAT_0021e860 = DAT_0021e860 ^ 0x16;
          DAT_0021e858 = DAT_0021e858 ^ 0x1616161616161616;
          DAT_0021faef = '\x01';
          pdVar15 = (dirent *)0x3b16db62a3c2f4fb;
        }
        else if (pdVar14 == (dirent *)0xc7bf249d1db72b2) {
          iVar8 = FUN_00212730(0,1,&DAT_0021fad0);
          pdVar15 = (dirent *)0xd1a28e2b92bbcc90;
          if (iVar8 != 0) {
            pdVar15 = (dirent *)0x27963d1423e000f6;
          }
        }
      }
      else if (pdVar14 == (dirent *)0xfb13253120e52d5) {
        pdVar15 = (dirent *)0xfda5c16090bb3af4;
      }
      else if (pdVar14 == (dirent *)0x1db468c64d6a7ed0) {
        pdVar15 = (dirent *)0xc33cd820d1133e3a;
        if (DAT_0021faeb == '\0') {
          pdVar15 = (dirent *)0x36f07785a64d7584;
        }
      }
      else if (pdVar14 == (dirent *)0x22f3f9cf91cbb9a6) {
        local_2098 = readdir((DIR *)__dirp);
        pdVar15 = (dirent *)0x940bdddd24f52ce3;
        if (local_2098 != (dirent *)0x0) {
          pdVar15 = (dirent *)0xe48eaf6f29f5caa2;
        }
      }
      goto LAB_001b29a4;
    }
    if ((long)pdVar14 < 0x31b9d74c89a90fe3) {
      pdVar15 = (dirent *)0xc7bf249d1db72b2;
      if (((pdVar14 != (dirent *)0x27963d1423e000f6) &&
          (pdVar15 = (dirent *)0x22f3f9cf91cbb9a6, pdVar14 != (dirent *)0x29ff0ff794febe2e)) &&
         (pdVar15 = pdVar14, pdVar14 == (dirent *)0x3007aa9d32d99be8)) {
        pdVar5 = pdVar13;
        pdVar15 = (dirent *)0x418b7d3c908df894;
      }
      goto LAB_001b29a4;
    }
    pdVar15 = (dirent *)0xfda5c16090bb3af4;
    if (pdVar14 == (dirent *)0x31b9d74c89a90fe3) goto LAB_001b29a4;
    if (pdVar14 == (dirent *)0x32f4713bcaf93571) {
      DAT_0021e84d = DAT_0021e84d ^ 0xa7;
      DAT_0021e84c = DAT_0021e84c ^ 0xa7;
      DAT_0021e84e = DAT_0021e84e ^ 0xa7;
      DAT_0021e84f = DAT_0021e84f ^ 0xa7;
      DAT_0021e850 = DAT_0021e850 ^ 0xa7;
      DAT_0021e851 = DAT_0021e851 ^ 0xa7;
      DAT_0021faee = '\x01';
      pdVar15 = (dirent *)0xce95d05271a8da34;
      goto LAB_001b29a4;
    }
    pdVar15 = pdVar14;
    if (pdVar14 != (dirent *)0x34ee749c3dc3cf5c) goto LAB_001b29a4;
    DAT_0021fac8 = 0;
    iVar8 = FUN_001e2ed0(local_20a8,&DAT_0021e848);
    bVar7 = iVar8 == 0;
    pdVar13 = (dirent *)0xfb13253120e52d5;
    pdVar15 = (dirent *)0x29ff0ff794febe2e;
  }
LAB_001b2998:
  if (!bVar7) {
    pdVar15 = pdVar13;
  }
  goto LAB_001b29a4;
}

