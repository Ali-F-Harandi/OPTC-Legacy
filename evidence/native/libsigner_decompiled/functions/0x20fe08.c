// rea decompile_all
// name: FUN_0020fe08
// address: 0x20fe08
// body: available
// range: 0x20fe08-0x2102ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0020fe08(uint *param_1,uint *param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  ulong uVar8;
  uint *puVar9;
  uint *__ptr;
  ulong uVar10;
  ulong uVar11;
  uint *in_x11;
  uint *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x20;
  uint *puVar15;
  int iVar16;
  ulong uVar17;
  ulong unaff_x27;
  uint local_6c;
  
  uVar6 = *param_2;
  uVar2 = *(int *)(*(long *)(param_2 + 6) + (ulong)(param_2[5] - 1) * 4) + param_3;
  puVar15 = *(uint **)(param_2 + 2);
  uVar4 = 0x34ee749c3dc3cf5c;
  if (uVar6 <= uVar2) {
    uVar4 = 0x87b1ff2df68e38ae;
  }
  puVar9 = param_1;
  puVar7 = param_2;
  uVar10 = uVar4;
  uVar8 = 0x34ee749c3dc3cf5c;
  uVar5 = 0xe7622641fcb090c6;
  do {
    while( true ) {
      while( true ) {
        uVar13 = uVar5;
        puVar12 = in_x11;
        uVar11 = uVar8;
        __ptr = puVar7;
        uVar14 = uVar11 & 0xffffffff;
        uVar17 = uVar10 & 0xffffffff;
        iVar16 = (int)uVar10;
        puVar7 = __ptr;
        uVar10 = uVar17;
        uVar8 = uVar14;
        in_x11 = puVar12;
        if (0x22f3f9cf91cbb9a5 < (long)uVar13) break;
        if ((long)uVar13 < -0x189dd9be034f6f3a) {
          puVar7 = puVar15;
          uVar10 = (ulong)uVar6;
          uVar5 = 0x940bdddd24f52ce3;
          if (uVar13 != 0x87b1ff2df68e38ae) {
            if (uVar13 == 0x940bdddd24f52ce3) {
              puVar9 = realloc(__ptr,(ulong)(iVar16 + 0x80) << 2);
              uVar5 = 0x3007aa9d32d99be8;
              if (puVar9 != (uint *)0x0) {
                uVar5 = 0xfb13253120e52d5;
              }
              *(uint **)(param_2 + 2) = puVar9;
              puVar7 = __ptr;
              uVar10 = uVar17;
            }
            else {
              puVar7 = __ptr;
              uVar10 = uVar17;
              uVar5 = uVar13;
              if (uVar13 == 0xe48eaf6f29f5caa2) {
                param_2[4] = local_6c + 1;
                uVar5 = 0x32f4713bcaf93571;
              }
            }
          }
        }
        else {
          uVar5 = uVar4;
          if (uVar13 != 0xe7622641fcb090c6) {
            puVar7 = puVar9;
            uVar10 = unaff_x20 & 0xffffffff;
            uVar5 = 0x940bdddd24f52ce3;
            if ((uVar13 != 0xfda5c16090bb3af4) &&
               (puVar7 = __ptr, uVar10 = uVar17, uVar5 = uVar13, uVar13 == 0xfb13253120e52d5)) {
              uVar1 = *param_2 + 0x80;
              unaff_x20 = (ulong)uVar1;
              *param_2 = uVar1;
              uVar3 = *(int *)(*(long *)(param_2 + 6) + (ulong)(param_2[5] - 1) * 4) + param_3;
              unaff_x27 = (ulong)uVar3;
              uVar5 = 0x31b9d74c89a90fe3;
              if (uVar1 <= uVar3) {
                uVar5 = 0xfda5c16090bb3af4;
              }
            }
          }
        }
      }
      if (0x31b9d74c89a90fe2 < (long)uVar13) break;
      uVar5 = 0x32f4713bcaf93571;
      if (uVar13 != 0x22f3f9cf91cbb9a6) {
        if (uVar13 == 0x29ff0ff794febe2e) {
          puVar12[uVar14] = param_4;
          local_6c = (uint)uVar11;
          uVar5 = 0x22f3f9cf91cbb9a6;
          if (param_2[4] <= local_6c) {
            uVar5 = 0xe48eaf6f29f5caa2;
          }
        }
        else {
          uVar5 = uVar13;
          if (uVar13 == 0x3007aa9d32d99be8) {
            *param_1 = 2;
            uVar5 = 0x32f4713bcaf93571;
          }
        }
      }
    }
    uVar8 = unaff_x27 & 0xffffffff;
    in_x11 = puVar9;
    uVar5 = 0x29ff0ff794febe2e;
  } while (((uVar13 == 0x31b9d74c89a90fe3) ||
           (uVar8 = (ulong)uVar2, in_x11 = puVar15, uVar13 == 0x34ee749c3dc3cf5c)) ||
          (uVar8 = uVar14, in_x11 = puVar12, uVar5 = uVar13, uVar13 != 0x32f4713bcaf93571));
  return;
}

