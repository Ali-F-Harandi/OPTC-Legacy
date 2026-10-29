// rea decompile_all
// name: FUN_00203298
// address: 0x203298
// body: available
// range: 0x203298-0x20413f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00203298(char *param_1,char *param_2,void *param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  bool bVar10;
  int iVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *local_b0;
  char *local_98;
  char *local_80;
  uint local_6c;
  char *local_68;
  
  pcVar1 = (char *)((ulong)param_2 & 1);
  pcVar2 = (char *)0x7d8bf94548220fb8;
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &DAT_c45038db124ae016;
  }
  pcVar3 = (char *)0x312910f1547c7c77;
  if ((char *)0x2 < param_2) {
    pcVar3 = (char *)0xc89737e2f8768a05;
  }
  pcVar14 = param_4 + -1;
  pcVar4 = (char *)0x1cba5f82f77e481f;
  if (pcVar1 + ((ulong)param_2 >> 1) <= param_4) {
    pcVar4 = (char *)0x3b36a7a007b21166;
  }
  pcVar5 = param_1;
  pcVar6 = param_2;
  pcVar7 = pcVar4;
  pcVar8 = pcVar14;
  pcVar9 = pcVar2;
  pcVar19 = (char *)0xbf711ec4fafe862e;
LAB_002033f8:
  while (pcVar18 = pcVar19, pcVar17 = pcVar9, pcVar15 = pcVar8, pcVar13 = pcVar7, pcVar12 = pcVar6,
        pcVar16 = pcVar5, pcVar5 = pcVar16, pcVar6 = pcVar12, pcVar7 = pcVar13, pcVar8 = pcVar15,
        pcVar9 = pcVar17, pcVar19 = pcVar18, (long)pcVar18 < 0x22f3f9cf91cbb9a6) {
    if ((long)pcVar18 < -0x3bafc724edb51fea) {
      if ((long)pcVar18 < -0x69f7a720f4f21bbf) {
        if ((long)pcVar18 < -0x71c5c29ef27b8351) {
          if (pcVar18 == (char *)0x8500be9b057d300e) {
            iVar11 = FUN_00212730(0,1,&DAT_0021fb30);
            pcVar19 = (char *)0x31b9d74c89a90fe3;
            if (iVar11 != 0) {
              pcVar19 = (char *)0xc0f51250277e5cfd;
            }
          }
          else if (pcVar18 == (char *)0x87b1ff2df68e38ae) {
            DAT_0021fb30 = 0;
            iVar11 = sscanf(param_1,(char *)&DAT_0021ef8c,local_98);
            pcVar19 = (char *)0x29ff0ff794febe2e;
            if (iVar11 != 1) {
              pcVar19 = (char *)0x34ee749c3dc3cf5c;
            }
          }
        }
        else if (pcVar18 == (char *)0x8e3a3d610d847caf) {
          pcVar19 = (char *)0x960858df0b0de441;
LAB_002040d4:
          DAT_0021ef88 = DAT_0021ef88 ^ 0x2b;
          DAT_0021ef87 = DAT_0021ef87 ^ 0x2b;
          DAT_0021ef86 = DAT_0021ef86 ^ 0x2b;
          DAT_0021ef85 = DAT_0021ef85 ^ 0x2b;
          DAT_0021ef84 = DAT_0021ef84 ^ 0x2b;
          DAT_0021ef89 = DAT_0021ef89 ^ 0x2b;
          DAT_0021fb31 = '\x01';
          pcVar5 = pcVar16;
          pcVar6 = pcVar12;
        }
        else if (pcVar18 == (char *)0x940bdddd24f52ce3) {
          pcVar19 = (char *)0x3007aa9d32d99be8;
          if (DAT_0021fb31 == '\0') {
            pcVar19 = (char *)0x58b842c6f86d5804;
          }
        }
      }
      else if ((long)pcVar18 < -0x45704382c9dcec73) {
        if (pcVar18 == (char *)0x960858df0b0de441) {
          DAT_0021fb2c = 0;
          iVar11 = sscanf(param_1,(char *)&DAT_0021ef84,local_98);
          pcVar19 = (char *)0xc879bc31bae5bb14;
          if (iVar11 != 1) {
            pcVar19 = (char *)0x36f07785a64d7584;
          }
        }
        else if (pcVar18 == (char *)0xa865ab623572e331) {
          local_80 = pcVar17 + -2;
          local_68 = pcVar15 + -1;
          pcVar19 = (char *)0xedbefc38c6cf9bfe;
          if (local_80 != (char *)0x0 && pcVar17 != pcVar1) {
            pcVar19 = (char *)0x5039187a35dab08d;
          }
        }
      }
      else if (pcVar18 == (char *)0xba8fbc7d3623138d) {
        iVar11 = FUN_00212730(0,1,&DAT_0021fb2c);
        pcVar19 = (char *)0xfb13253120e52d5;
        if (iVar11 != 0) {
          pcVar19 = (char *)0x418b7d3c908df894;
        }
      }
      else {
        pcVar19 = pcVar4;
        if ((pcVar18 != (char *)0xbf711ec4fafe862e) &&
           (pcVar19 = pcVar18, pcVar18 == (char *)0xc0f51250277e5cfd)) {
          pcVar19 = (char *)0x8500be9b057d300e;
        }
      }
    }
    else if ((long)pcVar18 < -0x124103c739306402) {
      if ((long)pcVar18 < -0x3768c81d078975fb) {
        pcVar19 = (char *)0x8500be9b057d300e;
        if ((pcVar18 != &DAT_c45038db124ae016) &&
           (pcVar19 = pcVar18, pcVar18 == (char *)0xc879bc31bae5bb14)) {
LAB_00203c70:
          pcVar19 = (char *)0x22f3f9cf91cbb9a6;
        }
      }
      else {
        pcVar5 = pcVar14;
        pcVar6 = param_2 + -2;
        pcVar19 = (char *)0x52cde6c2dea1be4;
        if (pcVar18 != (char *)0xc89737e2f8768a05) {
          if (pcVar18 == (char *)0xe7622641fcb090c6) {
            DAT_0021ef8d = DAT_0021ef8d ^ 0x25;
            DAT_0021ef8c = DAT_0021ef8c ^ 0x25;
            DAT_0021ef8e = DAT_0021ef8e ^ 0x25;
            DAT_0021ef8f = DAT_0021ef8f ^ 0x25;
            DAT_0021ef90 = DAT_0021ef90 ^ 0x25;
            DAT_0021ef91 = DAT_0021ef91 ^ 0x25;
            DAT_0021fb32 = '\x01';
            pcVar5 = pcVar16;
            pcVar6 = pcVar12;
            pcVar19 = (char *)0x87b1ff2df68e38ae;
          }
          else {
            pcVar5 = pcVar16;
            pcVar6 = pcVar12;
            pcVar19 = pcVar18;
            if (pcVar18 == (char *)0xe48eaf6f29f5caa2) {
              return local_6c & 1;
            }
          }
        }
      }
    }
    else if ((long)pcVar18 < 0x52cde6c2dea1be4) {
      pcVar7 = local_68;
      pcVar19 = (char *)0x77f0428eaa711148;
      if ((pcVar18 != (char *)0xedbefc38c6cf9bfe) &&
         (pcVar7 = pcVar13, pcVar19 = pcVar18, pcVar18 == (char *)0xfda5c16090bb3af4)) {
        pcVar19 = (char *)0x960858df0b0de441;
      }
    }
    else {
      pcVar8 = pcVar16;
      pcVar9 = pcVar12;
      pcVar19 = (char *)0x49b9b00eeff4c15a;
      if (pcVar18 != (char *)0x52cde6c2dea1be4) {
        if (pcVar18 == (char *)0xfb13253120e52d5) {
          pcVar8 = pcVar15;
          pcVar9 = pcVar17;
          pcVar19 = (char *)0xfda5c16090bb3af4;
          if (DAT_0021fb31 == '\0') {
            pcVar19 = (char *)0x8e3a3d610d847caf;
          }
        }
        else {
          pcVar8 = pcVar15;
          pcVar9 = pcVar17;
          pcVar19 = pcVar18;
          if (pcVar18 == (char *)0x1cba5f82f77e481f) goto LAB_00203bfc;
        }
      }
    }
  }
  if ((long)pcVar18 < 0x418b7d3c908df894) {
    if ((long)pcVar18 < 0x31b9d74c89a90fe3) {
      if (0x3007aa9d32d99be7 < (long)pcVar18) {
        pcVar19 = (char *)0x7e713fa43f38c582;
        if ((pcVar18 != (char *)0x3007aa9d32d99be8) &&
           (pcVar19 = pcVar18, pcVar18 == (char *)0x312910f1547c7c77)) {
          pcVar7 = pcVar14;
          pcVar19 = (char *)0x77f0428eaa711148;
        }
        goto LAB_002033f8;
      }
      if (pcVar18 != (char *)0x22f3f9cf91cbb9a6) {
        if (pcVar18 == (char *)0x29ff0ff794febe2e) goto LAB_00203c70;
        goto LAB_002033f8;
      }
      memset(param_3,0,(size_t)local_b0);
      local_6c = 1;
    }
    else {
      if ((long)pcVar18 < 0x34ee749c3dc3cf5c) {
        if (pcVar18 == (char *)0x31b9d74c89a90fe3) {
          pcVar19 = (char *)0x32f4713bcaf93571;
          if (DAT_0021fb32 == '\0') {
            pcVar19 = (char *)0xe7622641fcb090c6;
          }
        }
        else if (pcVar18 == (char *)0x32f4713bcaf93571) {
          pcVar19 = (char *)0x87b1ff2df68e38ae;
        }
        goto LAB_002033f8;
      }
      if ((pcVar18 != (char *)0x34ee749c3dc3cf5c) && (pcVar18 != (char *)0x36f07785a64d7584)) {
        if (pcVar18 == (char *)0x3b36a7a007b21166) {
          pcVar19 = pcVar3;
        }
        goto LAB_002033f8;
      }
LAB_00203bfc:
      local_6c = 0;
    }
    pcVar8 = pcVar15;
    pcVar9 = pcVar17;
    pcVar19 = (char *)0xe48eaf6f29f5caa2;
    goto LAB_002033f8;
  }
  if ((long)pcVar18 < 0x5ece82223eee3411) {
    if (0x5039187a35dab08c < (long)pcVar18) {
      pcVar5 = local_68;
      pcVar6 = local_80;
      pcVar19 = (char *)0x52cde6c2dea1be4;
      if ((pcVar18 != (char *)0x5039187a35dab08d) &&
         (pcVar5 = pcVar16, pcVar6 = pcVar12, pcVar19 = pcVar18,
         pcVar18 == (char *)0x58b842c6f86d5804)) {
        pcVar19 = (char *)0x7e713fa43f38c582;
        goto LAB_002040d4;
      }
      goto LAB_002033f8;
    }
    pcVar19 = (char *)0xba8fbc7d3623138d;
    if ((pcVar18 == (char *)0x418b7d3c908df894) ||
       (pcVar19 = pcVar18, pcVar18 != (char *)0x49b9b00eeff4c15a)) goto LAB_002033f8;
    iVar11 = FUN_00212730(0,1,&DAT_0021fb2c);
    bVar10 = iVar11 == 0;
    pcVar19 = (char *)0x940bdddd24f52ce3;
    pcVar16 = (char *)0x5ece82223eee3411;
  }
  else {
    if ((long)pcVar18 < 0x77f0428eaa711148) {
      pcVar19 = (char *)0x49b9b00eeff4c15a;
      if ((pcVar18 != (char *)0x5ece82223eee3411) &&
         (pcVar19 = pcVar18, pcVar18 == (char *)0x75df443d79079721)) goto LAB_00203bfc;
      goto LAB_002033f8;
    }
    if (pcVar18 == (char *)0x77f0428eaa711148) {
      local_98 = (char *)((long)param_3 + (long)pcVar13);
      pcVar19 = pcVar2;
      local_b0 = pcVar13;
      goto LAB_002033f8;
    }
    pcVar19 = (char *)0xba8fbc7d3623138d;
    if ((pcVar18 == (char *)0x7d8bf94548220fb8) ||
       (pcVar19 = pcVar18, pcVar18 != (char *)0x7e713fa43f38c582)) goto LAB_002033f8;
    DAT_0021fb2c = 0;
    iVar11 = sscanf(param_1 + (long)pcVar17,(char *)&DAT_0021ef84,
                    (char *)((long)param_3 + (long)pcVar15));
    bVar10 = iVar11 == 1;
    pcVar19 = (char *)0xa865ab623572e331;
    pcVar16 = (char *)0x75df443d79079721;
  }
  if (!bVar10) {
    pcVar19 = pcVar16;
  }
  goto LAB_002033f8;
}

