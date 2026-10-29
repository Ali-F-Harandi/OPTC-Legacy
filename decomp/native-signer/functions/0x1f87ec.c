// rea decompile_all
// name: FUN_001f87ec
// address: 0x1f87ec
// body: available
// range: 0x1f87ec-0x1f9353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001f87ec(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  void *local_d0;
  void *local_c8;
  void *local_c0;
  void *local_b8;
  void *local_b0;
  void *local_a8;
  void *local_a0;
  void *local_98;
  void *local_90;
  void *local_88;
  void *local_80;
  void *local_78;
  
  plVar5 = param_1 + 4;
  pvVar8 = (void *)*plVar5;
  plVar6 = param_1 + 2;
  pvVar1 = (void *)0x7f50ebff22c297c5;
  if (pvVar8 != (void *)0x0) {
    pvVar1 = (void *)0x25b6416ea5aab4b6;
  }
  pvVar2 = pvVar1;
  pvVar3 = pvVar8;
  pvVar9 = (void *)0x141117e41a694bd2;
LAB_001f88f0:
  do {
    while (pvVar11 = pvVar9, pvVar7 = pvVar3, pvVar10 = pvVar2, pvVar9 = pvVar11, pvVar2 = pvVar10,
          pvVar3 = pvVar7, (long)pvVar11 < 0xbacab81abb31f89) {
      if ((long)pvVar11 < -0x3827f0da3b71cf9b) {
        if ((long)pvVar11 < -0x6bccf2492602d436) {
          if ((long)pvVar11 < -0x760fdc1afc98096c) {
            pvVar2 = local_88;
            pvVar9 = (void *)0x94330db6d9fd2bca;
            if ((pvVar11 != (void *)0x826084944760e32d) &&
               (pvVar2 = pvVar10, pvVar9 = pvVar11, pvVar11 == (void *)0x8504bb7181474a59)) {
              pvVar9 = (void *)0x89f023e50367f694;
            }
          }
          else {
            if (pvVar11 == (void *)0x8a394bc643ca81dc) {
              free(local_a0);
              local_80 = (void *)*plVar6;
              pvVar9 = (void *)0xd1ed160c559152c;
              bVar4 = local_80 == (void *)0x0;
              pvVar7 = (void *)0x5e1d9776c3346af9;
              goto LAB_001f91d4;
            }
            if (pvVar11 == (void *)0x8d1827dc1a4a6c3d) {
              free(local_98);
              local_d0 = (void *)*plVar5;
              pvVar9 = (void *)0xd6be5df8ffe8c004;
              bVar4 = local_d0 == (void *)0x0;
              pvVar7 = (void *)0xc18376c52d7997c;
              goto LAB_001f91d4;
            }
            if (pvVar11 == (void *)0x89f023e50367f694) {
              *param_1 = 0;
              param_1[1] = (long)param_1;
              return;
            }
          }
        }
        else if ((long)pvVar11 < -0x52bf327ff4ce5fc6) {
          if (pvVar11 == (void *)0x94330db6d9fd2bca) {
            pvVar9 = (void *)0x33953cc7b3e45706;
            if (*(long *)((long)pvVar10 + 0x10) != 0) {
              pvVar9 = (void *)0xcef823e016836cd1;
            }
            *param_1 = *(long *)((long)pvVar10 + 0x10);
            local_a8 = pvVar10;
          }
          else if (pvVar11 == (void *)0x970bbbdf7d885b25) {
            free(local_b0);
            goto LAB_001f8de4;
          }
        }
        else {
          pvVar9 = (void *)0x8a394bc643ca81dc;
          if (((pvVar11 != (void *)0xad40cd800b31a03a) &&
              (pvVar2 = local_78, pvVar9 = (void *)0x94330db6d9fd2bca,
              pvVar11 != (void *)0xba9a7601b99fed1e)) &&
             (pvVar2 = pvVar10, pvVar9 = pvVar11, pvVar11 == (void *)0xc72cb3f414890b56)) {
            free(local_a8);
            local_88 = (void *)*param_1;
            bVar4 = local_88 == (void *)0x0;
            pvVar9 = (void *)0x5408d3bc6061f1d1;
            pvVar7 = (void *)0x826084944760e32d;
            goto LAB_001f91d4;
          }
        }
      }
      else if ((long)pvVar11 < -0x23a331cb12cbc9d0) {
        if ((long)pvVar11 < -0x2ad17e01cf2bd6a8) {
          if (pvVar11 == (void *)0xc7d80f25c48e3065) {
            pvVar9 = (void *)0x7a9bcd40c6c39be5;
            if (*(long *)((long)pvVar7 + 0x10) != 0) {
              pvVar9 = (void *)0xdc5cce34ed343630;
            }
            *plVar6 = *(long *)((long)pvVar7 + 0x10);
            local_a0 = pvVar7;
          }
          else if (pvVar11 == (void *)0xcef823e016836cd1) {
            pvVar9 = (void *)0x952495cae57ae98;
          }
        }
        else if (pvVar11 == (void *)0xd52e81fe30d42958) {
          local_98 = local_90;
          pvVar9 = (void *)0x83143bad6ce781d;
          if (*(long *)((long)local_90 + 0x10) != 0) {
            pvVar9 = (void *)0x1908e88881fd4b8;
          }
          *plVar5 = *(long *)((long)local_90 + 0x10);
        }
        else if (pvVar11 == (void *)0xd6be5df8ffe8c004) {
          pvVar9 = (void *)0x5cda4d8cdcc78c0e;
        }
      }
      else if ((long)pvVar11 < 0x1908e88881fd4b8) {
        pvVar9 = (void *)0x42e31b9b931691d4;
        if ((pvVar11 != (void *)0xdc5cce34ed343630) &&
           (pvVar9 = pvVar11, pvVar11 == (void *)0xf468ea47686082cd)) {
          local_78 = (void *)*param_1;
          param_1[2] = 0;
          pvVar9 = (void *)0x8504bb7181474a59;
          if (local_78 != (void *)0x0) {
            pvVar9 = (void *)0xba9a7601b99fed1e;
          }
LAB_001f9190:
          param_1[3] = (long)plVar6;
        }
      }
      else {
        pvVar9 = (void *)0x27a5ffe384dbadcc;
        if (pvVar11 != (void *)0x1908e88881fd4b8) {
          if (pvVar11 == (void *)0x83143bad6ce781d) goto LAB_001f9130;
          pvVar9 = pvVar11;
          if (pvVar11 == (void *)0x952495cae57ae98) {
            local_c8 = *(void **)((long)local_a8 + 8);
            pvVar9 = (void *)0x18950f5f9acbc40c;
            bVar4 = local_c8 == (void *)0x0;
            pvVar7 = (void *)0x51f9122c645eb44b;
LAB_001f91d4:
            pvVar2 = pvVar10;
            if (!bVar4) {
              pvVar9 = pvVar7;
            }
          }
        }
      }
    }
    if ((long)pvVar11 < 0x42e31b9b931691d4) {
      if ((long)pvVar11 < 0x18950f5f9acbc40c) {
        if (0xd1ed160c559152b < (long)pvVar11) {
          pvVar9 = (void *)0xf468ea47686082cd;
          if ((pvVar11 != (void *)0xd1ed160c559152c) &&
             (pvVar9 = pvVar11, pvVar11 == (void *)0x141117e41a694bd2)) {
            pvVar9 = pvVar1;
          }
          goto LAB_001f88f0;
        }
        if (pvVar11 == (void *)0xbacab81abb31f89) {
          free(local_b8);
          pvVar9 = (void *)0x8a394bc643ca81dc;
          goto LAB_001f88f0;
        }
        pvVar10 = local_d0;
        if (pvVar11 != (void *)0xc18376c52d7997c) goto LAB_001f88f0;
      }
      else {
        if (0x27a5ffe384dbadcb < (long)pvVar11) {
          if (pvVar11 == (void *)0x27a5ffe384dbadcc) {
            local_b0 = *(void **)((long)local_98 + 8);
            pvVar9 = (void *)0x7fd4f688afe2e0bc;
            bVar4 = local_b0 == (void *)0x0;
            pvVar7 = (void *)0x970bbbdf7d885b25;
            goto LAB_001f91d4;
          }
          if (pvVar11 == (void *)0x33953cc7b3e45706) {
            param_1[1] = (long)param_1;
            pvVar9 = (void *)0x952495cae57ae98;
          }
          else if (pvVar11 == (void *)0x39af1ae683ec7d89) {
            pvVar9 = (void *)0xf468ea47686082cd;
          }
          goto LAB_001f88f0;
        }
        pvVar9 = (void *)0xc72cb3f414890b56;
        if ((pvVar11 == (void *)0x18950f5f9acbc40c) ||
           (pvVar10 = pvVar8, pvVar9 = pvVar11, pvVar11 != (void *)0x25b6416ea5aab4b6))
        goto LAB_001f88f0;
      }
      pvVar9 = (void *)0xd52e81fe30d42958;
      local_90 = pvVar10;
      goto LAB_001f88f0;
    }
    if ((long)pvVar11 < 0x5e1d9776c3346af9) {
      if ((long)pvVar11 < 0x5408d3bc6061f1d1) {
        if (pvVar11 == (void *)0x42e31b9b931691d4) {
          local_b8 = *(void **)((long)local_a0 + 8);
          pvVar9 = (void *)0xad40cd800b31a03a;
          if (local_b8 != (void *)0x0) {
            pvVar9 = (void *)0xbacab81abb31f89;
          }
        }
        else if (pvVar11 == (void *)0x51f9122c645eb44b) {
          free(local_c8);
          pvVar9 = (void *)0xc72cb3f414890b56;
        }
      }
      else {
        pvVar9 = (void *)0x89f023e50367f694;
        if ((pvVar11 != (void *)0x5408d3bc6061f1d1) &&
           (pvVar9 = pvVar11, pvVar11 == (void *)0x5cda4d8cdcc78c0e)) {
          local_c0 = (void *)param_1[2];
          param_1[4] = 0;
          pvVar9 = (void *)0x39af1ae683ec7d89;
          if (local_c0 != (void *)0x0) {
            pvVar9 = (void *)0x71a1b60c2d3020c3;
          }
LAB_001f9130:
          param_1[5] = (long)plVar5;
        }
      }
    }
    else if ((long)pvVar11 < 0x7a9bcd40c6c39be5) {
      pvVar3 = local_80;
      pvVar9 = (void *)0xc7d80f25c48e3065;
      if ((pvVar11 != (void *)0x5e1d9776c3346af9) &&
         (pvVar3 = pvVar7, pvVar9 = pvVar11, pvVar11 == (void *)0x71a1b60c2d3020c3)) {
        pvVar3 = local_c0;
        pvVar9 = (void *)0xc7d80f25c48e3065;
      }
    }
    else {
      if (pvVar11 == (void *)0x7a9bcd40c6c39be5) {
        pvVar9 = (void *)0x42e31b9b931691d4;
        goto LAB_001f9190;
      }
      pvVar9 = (void *)0x5cda4d8cdcc78c0e;
      if ((pvVar11 != (void *)0x7f50ebff22c297c5) &&
         (pvVar9 = pvVar11, pvVar11 == (void *)0x7fd4f688afe2e0bc)) {
LAB_001f8de4:
        pvVar9 = (void *)0x8d1827dc1a4a6c3d;
      }
    }
  } while( true );
}

