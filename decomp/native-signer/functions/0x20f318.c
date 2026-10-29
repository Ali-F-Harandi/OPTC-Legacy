// rea decompile_all
// name: FUN_0020f318
// address: 0x20f318
// body: available
// range: 0x20f318-0x20fe07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0020f318(uint *param_1,uint *param_2,int param_3,uint param_4,long param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  bool bVar8;
  uint *puVar9;
  uint *__ptr;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  uint *in_x17;
  undefined1 *puVar16;
  uint local_88;
  uint local_84;
  uint *local_80;
  uint *local_78;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar2 = (undefined1 *)0x8e3a3d610d847caf;
  if (3 < param_4) {
    puVar2 = (undefined1 *)0x418b7d3c908df894;
  }
  puVar3 = (undefined1 *)0x1cba5f82f77e481f;
  if ((param_4 & 3) != 0) {
    puVar3 = (undefined1 *)0xbf711ec4fafe862e;
  }
  puVar4 = (undefined1 *)0xf6c71d76f8b48eb9;
  if (param_4 != 0) {
    puVar4 = (undefined1 *)0x6b5051bf1aed633d;
  }
  uVar1 = param_4 + param_3;
  puVar10 = (uint *)(ulong)(param_4 >> 2);
  if (puVar10 < (uint *)0x2) {
    puVar10 = (uint *)0x1;
  }
  puVar9 = param_1;
  puVar5 = param_2;
  puVar6 = puVar10;
  puVar13 = (undefined1 *)0xf6c71d76f8b48eb9;
  puVar14 = (undefined1 *)0xc23f84056fd30bd6;
  uVar7 = uVar1;
LAB_0020f4dc:
  while( true ) {
    while( true ) {
      uVar12 = uVar7;
      puVar15 = puVar14;
      puVar11 = puVar6;
      __ptr = puVar5;
      puVar16 = (undefined1 *)((ulong)puVar13 & 0xffffffff);
      puVar14 = puVar15;
      puVar5 = __ptr;
      puVar6 = puVar11;
      uVar7 = uVar12;
      if (0x1cba5f82f77e481e < (long)puVar15) break;
      if ((long)puVar15 < -0x3dc07bfa902cf42a) {
        if ((long)puVar15 < -0x579a549dca8d1ccf) {
          if (puVar15 == (undefined1 *)0x8500be9b057d300e) {
            *param_1 = local_70;
            puVar13 = puVar16;
            puVar14 = (undefined1 *)0xc0f51250277e5cfd;
          }
          else {
            puVar13 = puVar16;
            puVar14 = (undefined1 *)0xc0f51250277e5cfd;
            if ((puVar15 != (undefined1 *)0x8e3a3d610d847caf) &&
               (puVar14 = puVar15, puVar15 == (undefined1 *)0x960858df0b0de441)) {
              local_78 = (uint *)0x0;
              puVar14 = (undefined1 *)0x36f07785a64d7584;
            }
          }
        }
        else if ((long)puVar15 < -0x408ee13b050179d2) {
          puVar5 = puVar9;
          puVar13 = (undefined1 *)(ulong)local_6c;
          puVar14 = (undefined1 *)0x58b842c6f86d5804;
          if ((puVar15 != (undefined1 *)0xa865ab623572e331) &&
             (puVar5 = __ptr, puVar13 = puVar16, puVar14 = puVar15,
             puVar15 == (undefined1 *)0xba8fbc7d3623138d)) {
            puVar14 = puVar2;
          }
        }
        else {
          if (puVar15 == (undefined1 *)0xbf711ec4fafe862e) {
            local_70 = 6;
            goto LAB_0020fb8c;
          }
          puVar13 = puVar16;
          if (puVar15 == (undefined1 *)0xc0f51250277e5cfd) {
            return;
          }
        }
      }
      else if ((long)puVar15 < -0x3768c81d078975fb) {
        puVar13 = puVar16;
        puVar14 = puVar4;
        if (((puVar15 != (undefined1 *)0xc23f84056fd30bd6) &&
            (puVar14 = (undefined1 *)0xc0f51250277e5cfd, puVar15 != &DAT_c45038db124ae016)) &&
           (puVar14 = puVar15, puVar15 == (undefined1 *)0xc879bc31bae5bb14)) {
          local_78 = local_80;
          puVar14 = (undefined1 *)0x36f07785a64d7584;
        }
      }
      else if ((long)puVar15 < -0x938e289074b7147) {
        puVar6 = in_x17;
        puVar13 = puVar16;
        puVar14 = (undefined1 *)0x52cde6c2dea1be4;
        uVar7 = local_68;
        if ((puVar15 != (undefined1 *)0xc89737e2f8768a05) &&
           (puVar6 = puVar11, puVar14 = puVar15, uVar7 = uVar12,
           puVar15 == (undefined1 *)0xedbefc38c6cf9bfe)) {
          puVar14 = (undefined1 *)0x7d8bf94548220fb8;
          if (*param_1 == 0 && 3 < param_4) {
            puVar14 = (undefined1 *)0x77f0428eaa711148;
          }
        }
      }
      else {
        puVar13 = puVar16;
        puVar14 = (undefined1 *)0xc0f51250277e5cfd;
        if ((puVar15 != (undefined1 *)0xf6c71d76f8b48eb9) &&
           (puVar14 = puVar15, puVar15 == (undefined1 *)0x52cde6c2dea1be4)) {
          puVar11[uVar12] = 0;
          puVar14 = (undefined1 *)0x49b9b00eeff4c15a;
          local_88 = uVar12;
          if (param_2[4] <= uVar12) {
            puVar14 = (undefined1 *)0x5ece82223eee3411;
          }
        }
      }
    }
    if ((long)puVar15 < 0x58b842c6f86d5804) break;
    if ((long)puVar15 < 0x75df443d79079721) {
      if (puVar15 == (undefined1 *)0x58b842c6f86d5804) {
        puVar9 = realloc(__ptr,(ulong)((int)puVar13 + 0x80) << 2);
        puVar14 = (undefined1 *)0x7e713fa43f38c582;
        if (puVar9 != (uint *)0x0) {
          puVar14 = (undefined1 *)0x75df443d79079721;
        }
        *(uint **)(param_2 + 2) = puVar9;
        puVar13 = (undefined1 *)((ulong)puVar13 & 0xffffffff);
      }
      else if (puVar15 == (undefined1 *)0x5ece82223eee3411) {
        param_2[4] = local_88 + 1;
        puVar13 = puVar16;
        puVar14 = (undefined1 *)0xedbefc38c6cf9bfe;
      }
      else {
        puVar13 = puVar16;
        if (puVar15 == (undefined1 *)0x6b5051bf1aed633d) {
          puVar14 = puVar3;
        }
      }
    }
    else if ((long)puVar15 < 0x7d8bf94548220fb8) {
      if (puVar15 == (undefined1 *)0x75df443d79079721) {
        local_6c = *param_2 + 0x80;
        *param_2 = local_6c;
        local_84 = *(int *)(*(long *)(param_2 + 6) + (ulong)(param_2[5] - 1) * 4) + (uVar1 - 1);
        puVar13 = puVar16;
        puVar14 = (undefined1 *)0x5039187a35dab08d;
        if (local_6c <= local_84) {
          puVar14 = (undefined1 *)0xa865ab623572e331;
        }
      }
      else {
        puVar13 = puVar16;
        if (puVar15 == (undefined1 *)0x77f0428eaa711148) {
LAB_0020f6c8:
          puVar13 = puVar16;
          puVar14 = (undefined1 *)0x960858df0b0de441;
        }
      }
    }
    else {
      puVar13 = puVar16;
      puVar14 = (undefined1 *)0xc0f51250277e5cfd;
      if ((puVar15 != (undefined1 *)0x7d8bf94548220fb8) &&
         (puVar14 = puVar15, puVar15 == (undefined1 *)0x7e713fa43f38c582)) {
        local_70 = 2;
LAB_0020fb8c:
        puVar13 = puVar16;
        puVar14 = (undefined1 *)0x8500be9b057d300e;
      }
    }
  }
  if ((long)puVar15 < 0x3b36a7a007b21166) {
    if (puVar15 != (undefined1 *)0x1cba5f82f77e481f) {
      puVar5 = in_x17;
      puVar13 = (undefined1 *)(ulong)local_64;
      puVar14 = (undefined1 *)0x58b842c6f86d5804;
      if ((puVar15 != (undefined1 *)0x312910f1547c7c77) &&
         (puVar5 = __ptr, puVar13 = puVar16, puVar14 = puVar15,
         puVar15 == (undefined1 *)0x36f07785a64d7584)) {
        local_80 = (uint *)((long)local_78 + 1);
        uVar12 = *(uint *)(*(long *)(param_2 + 2) + (ulong)(uint)((int)local_78 + param_3) * 4);
        puVar14 = &DAT_c45038db124ae016;
        if (local_80 != puVar10) {
          puVar14 = (undefined1 *)0xc879bc31bae5bb14;
        }
        uVar12 = (uVar12 & 0xff00ff00) >> 8 | (uVar12 & 0xff00ff) << 8;
        *(uint *)(param_5 + (long)local_78 * 4) = uVar12 >> 0x10 | uVar12 << 0x10;
      }
      goto LAB_0020f4dc;
    }
    local_64 = *param_2;
    puVar15 = (undefined1 *)0xba8fbc7d3623138d;
    bVar8 = uVar1 <= local_64;
    puVar14 = (undefined1 *)0x3b36a7a007b21166;
  }
  else {
    if (0x49b9b00eeff4c159 < (long)puVar15) {
      puVar13 = puVar16;
      puVar14 = (undefined1 *)0xedbefc38c6cf9bfe;
      if ((puVar15 != (undefined1 *)0x49b9b00eeff4c15a) &&
         (puVar14 = puVar15, puVar15 == (undefined1 *)0x5039187a35dab08d)) {
        puVar6 = puVar9;
        puVar14 = (undefined1 *)0x52cde6c2dea1be4;
        uVar7 = local_84;
      }
      goto LAB_0020f4dc;
    }
    if (puVar15 != (undefined1 *)0x3b36a7a007b21166) {
      puVar13 = puVar16;
      if (puVar15 == (undefined1 *)0x418b7d3c908df894) goto LAB_0020f6c8;
      goto LAB_0020f4dc;
    }
    in_x17 = *(uint **)(param_2 + 2);
    puVar15 = (undefined1 *)0x312910f1547c7c77;
    local_68 = *(int *)(*(long *)(param_2 + 6) + (ulong)(param_2[5] - 1) * 4) + (uVar1 - 1);
    bVar8 = local_64 <= local_68;
    puVar14 = (undefined1 *)0xc89737e2f8768a05;
  }
  puVar13 = puVar16;
  if (bVar8) {
    puVar14 = puVar15;
  }
  goto LAB_0020f4dc;
}

