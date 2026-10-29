// rea decompile_all
// name: FUN_002063b4
// address: 0x2063b4
// body: available
// range: 0x2063b4-0x206a17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x206a14 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_002063b4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined *unaff_x19;
  undefined *unaff_x22;
  undefined8 *unaff_x23;
  long unaff_x26;
  long local_b8;
  undefined8 *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  uint local_74;
  ulong local_70;
  long local_68;
  
  puVar3 = PTR_PTR_0021e8c8;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = (undefined8 *)0x125dd2cc844aecb4;
  if (PTR_PTR_0021e8c8 != (undefined *)0x0) {
    puVar1 = (undefined8 *)&DAT_f615808441b1dafc;
  }
  puVar4 = (undefined8 *)&DAT_f615808441b1dafc;
  puVar5 = (undefined8 *)0x887e73b2c28c6a1;
LAB_00206564:
  while( true ) {
    puVar9 = puVar5;
    puVar7 = puVar4;
    lVar6 = param_1;
    param_1 = lVar6;
    puVar4 = puVar7;
    puVar5 = puVar9;
    if (0x887e73b2c28c6a0 < (long)puVar9) break;
    if ((long)puVar9 < -0xab3a208b03543bf) {
      if ((long)puVar9 < -0x3dc07bfa902cf42a) {
        puVar5 = (undefined8 *)0xf6c71d76f8b48eb9;
        if ((puVar9 != (undefined8 *)0xaa46adf0a78af8c7) &&
           (puVar5 = puVar9, puVar9 == (undefined8 *)0xbf711ec4fafe862e)) {
LAB_002067f4:
          puVar5 = (undefined8 *)0x1cba5f82f77e481f;
        }
      }
      else if (puVar9 == (undefined8 *)0xc23f84056fd30bd6) {
        local_74 = 1;
LAB_00206820:
        puVar5 = (undefined8 *)0xc89737e2f8768a05;
      }
      else if (puVar9 == (undefined8 *)0xd222672a639a1d2e) {
        local_b8 = local_80;
        puVar5 = (undefined8 *)0xf63b36e7a9d9f670;
        unaff_x19 = unaff_x22;
        if (local_88 <= unaff_x22) {
          puVar5 = (undefined8 *)0xaa46adf0a78af8c7;
        }
      }
      else if (puVar9 == (undefined8 *)0xc89737e2f8768a05) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_74 & 1;
      }
    }
    else if ((long)puVar9 < -0x9c4c91856260990) {
      puVar5 = (undefined8 *)0xf6c71d76f8b48eb9;
      if ((puVar9 != (undefined8 *)0xf54c5df74fcabc41) &&
         (puVar5 = puVar9, puVar9 == (undefined8 *)&DAT_f615808441b1dafc)) {
        param_1 = 0;
        puVar4 = (undefined8 *)puVar3;
        puVar5 = (undefined8 *)0x696b554ab6b2c8c5;
      }
    }
    else if (puVar9 == (undefined8 *)0xf63b36e7a9d9f670) {
      local_70 = 0;
      uVar8 = (long)local_88 - (long)unaff_x19;
      if (7 < uVar8) {
        uVar8 = 8;
      }
      __memcpy_chk(&local_70,unaff_x19,uVar8,8);
      puVar5 = (undefined8 *)0xc23f84056fd30bd6;
      if ((local_70 & 0xfffffc1fff000000) != 0xd61f000058000000) {
        puVar5 = (undefined8 *)0xf54c5df74fcabc41;
      }
    }
    else if (puVar9 == (undefined8 *)0xf6c71d76f8b48eb9) {
      local_a0 = local_b8 + 1;
      local_a8 = (undefined *)local_b0[local_a0];
      puVar5 = (undefined8 *)0xbf711ec4fafe862e;
      if (local_a8 != (undefined *)0x0) {
        puVar5 = (undefined8 *)0x6b5051bf1aed633d;
      }
    }
  }
  if ((long)puVar9 < 0x312910f1547c7c77) {
    if ((long)puVar9 < 0x1cba5f82f77e481f) {
      puVar5 = puVar1;
      if ((puVar9 != (undefined8 *)0x887e73b2c28c6a1) &&
         (puVar5 = puVar9, puVar9 == (undefined8 *)0x125dd2cc844aecb4)) goto LAB_00206810;
      goto LAB_00206564;
    }
    if (puVar9 == (undefined8 *)0x1cba5f82f77e481f) {
      unaff_x26 = local_90 + 1;
      unaff_x23 = (undefined8 *)(&PTR_PTR_0021e8c8)[unaff_x26];
      puVar5 = (undefined8 *)0x312910f1547c7c77;
      if (unaff_x23 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x3b36a7a007b21166;
      }
      goto LAB_00206564;
    }
    if (puVar9 != (undefined8 *)0x2ce2edddaf334d81) goto LAB_00206564;
    local_80 = 0;
    local_88 = (&PTR_LAB_0021e938)[local_90];
    unaff_x22 = local_98;
  }
  else {
    if ((long)puVar9 < 0x3b36a7a007b21166) {
      if (puVar9 == (undefined8 *)0x312910f1547c7c77) {
LAB_00206810:
        local_74 = 0;
        goto LAB_00206820;
      }
      if (puVar9 == (undefined8 *)0x353e7cd16df664a2) goto LAB_002067f4;
      goto LAB_00206564;
    }
    param_1 = unaff_x26;
    puVar4 = unaff_x23;
    puVar5 = (undefined8 *)0x696b554ab6b2c8c5;
    if (puVar9 == (undefined8 *)0x3b36a7a007b21166) goto LAB_00206564;
    if (puVar9 == (undefined8 *)0x696b554ab6b2c8c5) {
      local_98 = (undefined *)*puVar7;
      param_1 = lVar6;
      puVar4 = puVar7;
      puVar5 = (undefined8 *)0x353e7cd16df664a2;
      local_b0 = puVar7;
      local_90 = lVar6;
      if (local_98 != (undefined *)0x0) {
        puVar5 = (undefined8 *)0x2ce2edddaf334d81;
      }
      goto LAB_00206564;
    }
    param_1 = lVar6;
    puVar4 = puVar7;
    puVar5 = puVar9;
    if (puVar9 != (undefined8 *)0x6b5051bf1aed633d) goto LAB_00206564;
    local_80 = local_a0;
    unaff_x22 = local_a8;
  }
  param_1 = lVar6;
  puVar4 = puVar7;
  puVar5 = (undefined8 *)0xd222672a639a1d2e;
  goto LAB_00206564;
}

