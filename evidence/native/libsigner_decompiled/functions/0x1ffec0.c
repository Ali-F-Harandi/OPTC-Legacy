// rea decompile_all
// name: FUN_001ffec0
// address: 0x1ffec0
// body: available
// range: 0x1ffec0-0x2006ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_001ffec0(undefined1 *param_1,void *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  undefined1 *puVar11;
  undefined1 *in_x10;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *unaff_x19;
  undefined1 *unaff_x22;
  long unaff_x24;
  void *unaff_x27;
  undefined1 *local_d8;
  undefined1 *local_c8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  void *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  void *local_88;
  undefined1 *local_78;
  void *local_70;
  
  puVar1 = &DAT_001030a0;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  puVar2 = (undefined1 *)0x125dd2cc844aecb4;
  if (param_2 == (void *)0x0 || param_1 == (undefined1 *)0x0) {
    puVar2 = &DAT_f615808441b1dafc;
  }
  puVar3 = param_1;
  pvVar4 = param_2;
  puVar5 = puVar2;
  puVar6 = (undefined1 *)0x125dd2cc844aecb4;
  puVar14 = (undefined1 *)0x887e73b2c28c6a1;
LAB_001fffa4:
  while( true ) {
    while (puVar15 = puVar14, puVar12 = in_x10, puVar11 = puVar6, puVar13 = puVar5, pvVar10 = pvVar4
          , puVar7 = puVar3, puVar3 = puVar7, pvVar4 = pvVar10, puVar5 = puVar13, puVar6 = puVar11,
          in_x10 = puVar12, puVar14 = puVar15, 0x887e73b2c28c6a0 < (long)puVar15) {
      if ((long)puVar15 < 0x353e7cd16df664a2) {
        if ((long)puVar15 < 0x1cba5f82f77e481f) {
          puVar14 = puVar2;
          if ((puVar15 != (undefined1 *)0x887e73b2c28c6a1) &&
             (puVar14 = puVar15, puVar15 == (undefined1 *)0x125dd2cc844aecb4)) {
            puVar7 = (undefined1 *)FUN_001e16c4(param_2);
            puVar13 = (undefined1 *)0x353e7cd16df664a2;
            puVar14 = (undefined1 *)0x696b554ab6b2c8c5;
            local_90 = puVar7;
            goto LAB_001fff98;
          }
        }
        else {
          puVar3 = param_1;
          pvVar4 = local_70;
          puVar14 = (undefined1 *)0x52cde6c2dea1be4;
          if (puVar15 != (undefined1 *)0x1cba5f82f77e481f) {
            if (puVar15 == (undefined1 *)0x2ce2edddaf334d81) {
              puVar3 = puVar7;
              pvVar4 = pvVar10;
              puVar5 = local_d8;
              puVar6 = (undefined1 *)0x0;
              puVar14 = (undefined1 *)0xaa46adf0a78af8c7;
            }
            else {
              puVar3 = puVar7;
              pvVar4 = pvVar10;
              puVar14 = puVar15;
              if (puVar15 == (undefined1 *)0x312910f1547c7c77) {
                local_98 = local_c8;
                local_a8 = unaff_x19;
                local_a0 = unaff_x27;
                goto LAB_00200334;
              }
            }
          }
        }
      }
      else if ((long)puVar15 < 0x49b9b00eeff4c15a) {
        if (puVar15 == (undefined1 *)0x353e7cd16df664a2) {
          unaff_x24 = FUN_001e16c4(puVar1);
          local_d8 = (undefined1 *)FUN_001ef4b4(param_1,param_2);
          puVar14 = (undefined1 *)0xd222672a639a1d2e;
          if (local_d8 != (undefined1 *)0x0) {
            puVar14 = (undefined1 *)0x2ce2edddaf334d81;
          }
        }
        else if (puVar15 == (undefined1 *)0x3b36a7a007b21166) {
          local_c8 = local_98 + -1;
          lVar9 = FUN_001ef4b4(local_a8,param_2);
          lVar8 = FUN_001ebd44(local_a0,local_a8,lVar9 - (long)local_a8);
          lVar8 = FUN_001ea9ac(lVar8 + (lVar9 - (long)local_a8),puVar1);
          unaff_x19 = local_90 + lVar9;
          unaff_x27 = (void *)(lVar8 + unaff_x24);
          puVar14 = (undefined1 *)0xc89737e2f8768a05;
          if (local_c8 != (undefined1 *)0x0) {
            puVar14 = (undefined1 *)0x312910f1547c7c77;
          }
        }
      }
      else {
        if (puVar15 == (undefined1 *)0x696b554ab6b2c8c5) goto LAB_0020045c;
        if (puVar15 == (undefined1 *)0x6b5051bf1aed633d) {
          puVar14 = (undefined1 *)0x1cba5f82f77e481f;
          if (local_b0 != (undefined1 *)0x0) {
            puVar14 = (undefined1 *)0xbf711ec4fafe862e;
          }
        }
        else if (puVar15 == (undefined1 *)0x49b9b00eeff4c15a) {
          return local_88;
        }
      }
    }
    if (-0xab3a208b03543c0 < (long)puVar15) break;
    if ((long)puVar15 < -0x3dc07bfa902cf42a) {
      if (puVar15 == (undefined1 *)0xaa46adf0a78af8c7) {
        unaff_x22 = puVar11 + 1;
        puVar7 = (undefined1 *)FUN_001ef4b4(puVar13 + (long)local_90,param_2);
        puVar13 = (undefined1 *)0xf63b36e7a9d9f670;
        puVar14 = (undefined1 *)0xf54c5df74fcabc41;
        local_78 = puVar7;
LAB_001fff98:
        if (puVar7 != (undefined1 *)0x0) {
          puVar14 = puVar13;
        }
      }
      else if (puVar15 == (undefined1 *)0xbf711ec4fafe862e) {
        local_98 = local_b0;
        local_a0 = local_70;
        local_a8 = param_1;
LAB_00200334:
        puVar3 = puVar7;
        pvVar4 = pvVar10;
        puVar14 = (undefined1 *)0x3b36a7a007b21166;
      }
    }
    else if (puVar15 == (undefined1 *)0xc23f84056fd30bd6) {
      lVar9 = FUN_001e16c4(param_1);
      local_70 = calloc(lVar9 + (unaff_x24 - (long)local_90) * (long)puVar12 + 1,1);
      puVar14 = (undefined1 *)0xf6c71d76f8b48eb9;
      local_b0 = puVar12;
      if (local_70 != (void *)0x0) {
        puVar14 = (undefined1 *)0x6b5051bf1aed633d;
      }
    }
    else {
      puVar3 = unaff_x19;
      pvVar4 = unaff_x27;
      puVar14 = (undefined1 *)0x52cde6c2dea1be4;
      if ((puVar15 != (undefined1 *)0xc89737e2f8768a05) &&
         (puVar3 = puVar7, pvVar4 = pvVar10, puVar14 = puVar15,
         puVar15 == (undefined1 *)0xd222672a639a1d2e)) {
        in_x10 = (undefined1 *)0x0;
        puVar14 = (undefined1 *)0xc23f84056fd30bd6;
      }
    }
  }
  if ((long)puVar15 < -0x9c4c91856260990) {
    in_x10 = unaff_x22;
    puVar14 = (undefined1 *)0xc23f84056fd30bd6;
    if ((puVar15 == (undefined1 *)0xf54c5df74fcabc41) ||
       (in_x10 = puVar12, puVar14 = puVar15, puVar15 != &DAT_f615808441b1dafc)) goto LAB_001fffa4;
  }
  else {
    puVar5 = local_78;
    puVar6 = unaff_x22;
    puVar14 = (undefined1 *)0xaa46adf0a78af8c7;
    if (puVar15 == (undefined1 *)0xf63b36e7a9d9f670) goto LAB_001fffa4;
    if (puVar15 != (undefined1 *)0xf6c71d76f8b48eb9) {
      puVar5 = puVar13;
      puVar6 = puVar11;
      puVar14 = puVar15;
      if (puVar15 == (undefined1 *)0x52cde6c2dea1be4) {
        FUN_001ea9ac(pvVar10,puVar7);
        local_88 = local_70;
        puVar14 = (undefined1 *)0x49b9b00eeff4c15a;
      }
      goto LAB_001fffa4;
    }
  }
LAB_0020045c:
  local_88 = (void *)0x0;
  puVar5 = puVar13;
  puVar6 = puVar11;
  in_x10 = puVar12;
  puVar14 = (undefined1 *)0x49b9b00eeff4c15a;
  goto LAB_001fffa4;
}

