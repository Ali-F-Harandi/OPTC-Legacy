// rea decompile_all
// name: FUN_001b6390
// address: 0x1b6390
// body: available
// range: 0x1b6390-0x1b6c47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b6c44 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001b6390(char *param_1,undefined8 *param_2,ulong param_3)

{
  undefined1 *puVar1;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  char *__file;
  int *piVar7;
  undefined8 *puVar8;
  undefined8 *in_x7;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int unaff_w19;
  undefined1 *puVar14;
  undefined1 *unaff_x24;
  ulong uVar15;
  ulong unaff_x27;
  undefined1 *puVar16;
  char *local_100;
  undefined8 *local_f8;
  stat sStack_f0;
  
  lVar2 = tpidr_el0;
  sStack_f0.__unused[1] = *(long *)(lVar2 + 0x28);
  pcVar12 = (char *)*param_2;
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (pcVar12 != (char *)0x0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  pcVar3 = param_1;
  puVar4 = param_2;
  puVar9 = puVar1;
  puVar11 = &DAT_f615808441b1dafc;
  puVar5 = (undefined1 *)0x887e73b2c28c6a1;
LAB_001b6528:
  do {
    while( true ) {
      puVar13 = puVar5;
      puVar10 = puVar11;
      puVar8 = puVar4;
      __file = pcVar3;
      puVar14 = (undefined1 *)((ulong)puVar10 & 0xffffffff);
      puVar16 = (undefined1 *)((ulong)puVar9 & 0xffffffff);
      uVar15 = param_3 & 0xffffffff;
      pcVar3 = __file;
      puVar4 = puVar8;
      param_3 = uVar15;
      puVar9 = puVar16;
      puVar11 = puVar14;
      puVar5 = puVar13;
      if (0x125dd2cc844aecb3 < (long)puVar13) break;
      if ((long)puVar13 < -0xab3a208b03543bf) {
        if ((long)puVar13 < -0x3dc07bfa902cf42a) {
          if (puVar13 == (undefined1 *)0xaa46adf0a78af8c7) {
            puVar5 = (undefined1 *)0xf54c5df74fcabc41;
            if (unaff_w19 != 0x14) {
              puVar5 = (undefined1 *)0xf63b36e7a9d9f670;
            }
          }
          else if (puVar13 == (undefined1 *)0xbf711ec4fafe862e) {
            puVar5 = (undefined1 *)0x3b36a7a007b21166;
            if (1 < unaff_w19 - 1U) {
              puVar5 = (undefined1 *)0x1cba5f82f77e481f;
            }
          }
        }
        else if (puVar13 == (undefined1 *)0xc23f84056fd30bd6) {
          puVar5 = (undefined1 *)0x6b5051bf1aed633d;
          if (unaff_w19 != 0xd) {
            puVar5 = (undefined1 *)0xf6c71d76f8b48eb9;
          }
        }
        else if (puVar13 == (undefined1 *)0xc89737e2f8768a05) {
          puVar11 = (undefined1 *)0x1;
LAB_001b6b10:
          puVar5 = (undefined1 *)0x58b842c6f86d5804;
        }
        else if ((puVar13 == (undefined1 *)0xd222672a639a1d2e) &&
                (puVar5 = (undefined1 *)0xc23f84056fd30bd6, 0x13 < unaff_w19)) {
          puVar5 = (undefined1 *)0xaa46adf0a78af8c7;
        }
      }
      else if ((long)puVar13 < -0x938e289074b7147) {
        puVar9 = (undefined1 *)(unaff_x27 & 0xffffffff);
        puVar5 = (undefined1 *)0x52cde6c2dea1be4;
        if (puVar13 != (undefined1 *)0xf54c5df74fcabc41) {
          if (puVar13 == &DAT_f615808441b1dafc) {
            pcVar3 = pcVar12;
            puVar4 = (undefined8 *)0x0;
            param_3 = 0;
            puVar9 = puVar16;
            puVar5 = (undefined1 *)0x696b554ab6b2c8c5;
          }
          else {
            puVar9 = puVar16;
            puVar5 = puVar13;
            if (puVar13 == (undefined1 *)0xf63b36e7a9d9f670) {
LAB_001b6504:
              puVar9 = puVar16;
              puVar5 = (undefined1 *)0x312910f1547c7c77;
            }
          }
        }
      }
      else {
        puVar5 = (undefined1 *)0x312910f1547c7c77;
        if (puVar13 != (undefined1 *)0xf6c71d76f8b48eb9) {
          if (puVar13 == (undefined1 *)0x52cde6c2dea1be4) {
            local_f8 = (undefined8 *)((long)in_x7 + 1);
            local_100 = (char *)param_2[(long)local_f8];
            puVar5 = (undefined1 *)0x5ece82223eee3411;
            unaff_x24 = puVar16;
            if (local_100 != (char *)0x0) {
              puVar5 = (undefined1 *)0x49b9b00eeff4c15a;
            }
          }
          else {
            puVar5 = puVar13;
            if (puVar13 == (undefined1 *)0x887e73b2c28c6a1) {
              puVar5 = puVar1;
            }
          }
        }
      }
    }
    if ((long)puVar13 < 0x3b36a7a007b21166) {
      if ((long)puVar13 < 0x2ce2edddaf334d81) {
        if (puVar13 == (undefined1 *)0x125dd2cc844aecb4) {
          puVar11 = (undefined1 *)0x0;
          goto LAB_001b6b10;
        }
        if (puVar13 == (undefined1 *)0x1cba5f82f77e481f) goto LAB_001b6504;
      }
      else if (puVar13 == (undefined1 *)0x2ce2edddaf334d81) {
        puVar5 = (undefined1 *)0xbf711ec4fafe862e;
        if (0xc < unaff_w19) {
          puVar5 = (undefined1 *)0xd222672a639a1d2e;
        }
      }
      else if (puVar13 == (undefined1 *)0x312910f1547c7c77) {
        param_1[0] = '\n';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        puVar9 = (undefined1 *)0x1;
        puVar5 = (undefined1 *)0x52cde6c2dea1be4;
      }
      else if (puVar13 == (undefined1 *)0x353e7cd16df664a2) {
        piVar7 = (int *)__errno();
        unaff_w19 = *piVar7;
        puVar5 = (undefined1 *)0x2ce2edddaf334d81;
      }
      goto LAB_001b6528;
    }
    if ((long)puVar13 < 0x5ece82223eee3411) {
      puVar9 = (undefined1 *)(unaff_x27 & 0xffffffff);
      puVar5 = (undefined1 *)0x52cde6c2dea1be4;
      if (puVar13 != (undefined1 *)0x3b36a7a007b21166) {
        pcVar3 = local_100;
        puVar4 = local_f8;
        param_3 = (ulong)unaff_x24 & 0xffffffff;
        puVar9 = puVar16;
        puVar5 = (undefined1 *)0x696b554ab6b2c8c5;
        if ((puVar13 != (undefined1 *)0x49b9b00eeff4c15a) &&
           (pcVar3 = __file, puVar4 = puVar8, param_3 = uVar15, puVar5 = puVar13,
           puVar13 == (undefined1 *)0x58b842c6f86d5804)) {
          if (*(long *)(lVar2 + 0x28) != sStack_f0.__unused[1]) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return ((uint)puVar10 ^ 1) & 1;
        }
      }
    }
    else {
      puVar11 = (undefined1 *)((ulong)unaff_x24 & 0xffffffff);
      puVar5 = (undefined1 *)0x58b842c6f86d5804;
      if (puVar13 != (undefined1 *)0x5ece82223eee3411) {
        if (puVar13 == (undefined1 *)0x696b554ab6b2c8c5) {
          iVar6 = stat(__file,&sStack_f0);
          in_x7 = puVar8;
          puVar11 = puVar14;
          puVar5 = (undefined1 *)0x353e7cd16df664a2;
          unaff_x27 = uVar15;
          if (iVar6 != -1) {
            puVar5 = (undefined1 *)0xc89737e2f8768a05;
          }
        }
        else {
          puVar11 = puVar14;
          puVar5 = puVar13;
          if (puVar13 == (undefined1 *)0x6b5051bf1aed633d) {
            puVar9 = (undefined1 *)(unaff_x27 & 0xffffffff);
            puVar5 = (undefined1 *)0x52cde6c2dea1be4;
          }
        }
      }
    }
  } while( true );
}

