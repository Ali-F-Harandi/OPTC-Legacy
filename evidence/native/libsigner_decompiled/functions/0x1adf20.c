// rea decompile_all
// name: FUN_001adf20
// address: 0x1adf20
// body: available
// range: 0x1adf20-0x1ae713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001adf20(int *param_1,long param_2,long *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong __nmemb;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  void *pvVar11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong unaff_x28;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  
  puVar12 = (uint *)*param_3;
  uVar9 = puVar12[2];
  uVar5 = *puVar12;
  uVar7 = puVar12[1];
  uVar6 = puVar12[5];
  __nmemb = (ulong)uVar6;
  uVar8 = puVar12[6];
  *param_3 = (long)(puVar12 + 7);
  *param_3 = *(long *)(param_2 + 8) + (ulong)uVar5;
  FUN_001ad07c();
  uVar1 = 0x53e14c28908eeeeb;
  if (uVar6 != 0) {
    uVar1 = 0xfbd7ef6ff797a0b8;
  }
  uVar2 = 0x483dcbc36ada42c4;
  if (uVar7 != 0) {
    uVar2 = 0xd6afb11c30d2a9cd;
  }
  uVar3 = 0xcb31a60e6206eed1;
  if (*param_1 != 0) {
    uVar3 = 0xd108a90e38b691a1;
  }
  uVar10 = uVar3;
  uVar4 = 0x5eda44100212fa2c;
  uVar15 = __nmemb;
LAB_001ae064:
  do {
    while( true ) {
      while (uVar14 = uVar4, uVar13 = uVar10, uVar10 = uVar13, -0x2e5d71d46d443371 < (long)uVar14) {
        if ((long)uVar14 < 0x483dcbc36ada42c4) {
          if ((long)uVar14 < -0x428109008685f48) {
            uVar4 = 0xa952fa75448bcb41;
            if (uVar14 != 0xd1a28e2b92bbcc90) {
              if (uVar14 == 0xd6afb11c30d2a9cd) {
                pvVar11 = calloc((ulong)uVar7,0x30);
                uVar4 = 0x1db468c64d6a7ed0;
                if (pvVar11 != (void *)0x0) {
                  uVar4 = 0xc33cd820d1133e3a;
                }
                *(void **)(param_4 + 0x18) = pvVar11;
              }
              else {
                uVar4 = uVar14;
                if (uVar14 == 0xdbb3f7f9e121c35a) {
                  uVar4 = 0x8243cdd12671c505;
                }
              }
            }
          }
          else if (uVar14 == 0xfbd7ef6ff797a0b8) {
            pvVar11 = calloc(__nmemb,0x30);
            uVar4 = 0xdbb3f7f9e121c35a;
            if (pvVar11 != (void *)0x0) {
              uVar4 = 0x4101bf80446bdc20;
            }
            *(void **)(param_4 + 0x28) = pvVar11;
          }
          else {
            uVar4 = 0x8243cdd12671c505;
            if ((uVar14 != 0x1db468c64d6a7ed0) && (uVar4 = uVar14, uVar14 == 0x4101bf80446bdc20)) {
              uVar10 = 0;
              uVar4 = 0xa6454b078cdf6a1e;
            }
          }
        }
        else if ((long)uVar14 < 0x54cc8c62117e2258) {
          uVar4 = 0xa952fa75448bcb41;
          if (((uVar14 != 0x483dcbc36ada42c4) &&
              (uVar4 = 0x62ccc994e2cb7da3, uVar14 != 0x53e14c28908eeeeb)) &&
             (uVar4 = uVar14, uVar14 == 0x54c2b837d86711b8)) {
            puVar12 = (uint *)(*(long *)(param_2 + 8) + (ulong)uVar9 + uVar15 * 4);
            uVar5 = *puVar12;
            *param_3 = (long)(puVar12 + 1);
            *param_3 = *(long *)(param_2 + 8) + (ulong)uVar5;
            FUN_001adf20(param_1,param_2,param_3,*(long *)(param_4 + 0x18) + uVar15 * 0x30);
            uVar4 = 0x55dcd19dee737a1a;
            local_90 = uVar15;
            if (*param_1 != 0) {
              uVar4 = 0xd14700cedc0a1544;
            }
          }
        }
        else if ((long)uVar14 < 0x5eda44100212fa2c) {
          uVar4 = 0x89359d8ef6b8d8b5;
          if ((uVar14 != 0x54cc8c62117e2258) && (uVar4 = uVar14, uVar14 == 0x55dcd19dee737a1a)) {
            local_88 = local_90 + 1;
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            uVar4 = 0xd1a28e2b92bbcc90;
            if (local_88 != uVar7) {
              uVar4 = 0xabed3acad0e23c86;
            }
          }
        }
        else {
          uVar4 = uVar3;
          if ((uVar14 != 0x5eda44100212fa2c) && (uVar4 = uVar14, uVar14 == 0x62ccc994e2cb7da3)) {
            return;
          }
        }
      }
      if ((long)uVar14 < -0x50e54cd80f265318) break;
      if ((long)uVar14 < -0x34ce59f19df9112f) {
        uVar10 = unaff_x28;
        uVar4 = 0xa6454b078cdf6a1e;
        if (uVar14 != 0xaf1ab327f0d9ace8) {
          if (uVar14 == 0xc33cd820d1133e3a) {
            uVar15 = 0;
            uVar10 = uVar13;
            uVar4 = 0x54c2b837d86711b8;
          }
          else {
            uVar10 = uVar13;
            uVar4 = uVar14;
            if (uVar14 == 0xca62b1ef4c4443c4) {
LAB_001ae050:
              uVar10 = uVar13;
              uVar4 = 0x62ccc994e2cb7da3;
            }
          }
        }
      }
      else {
        uVar4 = uVar2;
        if (((uVar14 != 0xcb31a60e6206eed1) &&
            (uVar4 = 0x89359d8ef6b8d8b5, uVar14 != 0xd108a90e38b691a1)) &&
           (uVar4 = uVar14, uVar14 == 0xd14700cedc0a1544)) {
          uVar4 = 0x89359d8ef6b8d8b5;
        }
      }
    }
    if ((long)uVar14 < -0x59bab4f8732095e2) {
      if (uVar14 == 0x8243cdd12671c505) {
        *param_1 = 2;
        uVar4 = 0x89359d8ef6b8d8b5;
      }
      else {
        if (uVar14 == 0x89359d8ef6b8d8b5) {
          FUN_001ad6cc(param_4);
          goto LAB_001ae050;
        }
        uVar4 = uVar14;
        if (uVar14 == 0x8bb818770b2cd537) {
          unaff_x28 = local_98 + 1;
          *(int *)(param_4 + 0x20) = *(int *)(param_4 + 0x20) + 1;
          uVar4 = 0xca62b1ef4c4443c4;
          if (unaff_x28 != __nmemb) {
            uVar4 = 0xaf1ab327f0d9ace8;
          }
        }
      }
      goto LAB_001ae064;
    }
    if (uVar14 == 0xa6454b078cdf6a1e) {
      puVar12 = (uint *)(*(long *)(param_2 + 8) + (ulong)uVar8 + uVar13 * 4);
      uVar5 = *puVar12;
      *param_3 = (long)(puVar12 + 1);
      *param_3 = *(long *)(param_2 + 8) + (ulong)uVar5;
      FUN_001ad07c(param_1,param_2,param_3,*(long *)(param_4 + 0x28) + uVar13 * 0x30);
      uVar4 = 0x8bb818770b2cd537;
      local_98 = uVar13;
      if (*param_1 != 0) {
        uVar4 = 0x54cc8c62117e2258;
      }
    }
    else {
      uVar4 = uVar1;
      if ((uVar14 != 0xa952fa75448bcb41) && (uVar4 = uVar14, uVar14 == 0xabed3acad0e23c86)) {
        uVar4 = 0x54c2b837d86711b8;
        uVar15 = local_88;
      }
    }
  } while( true );
}

