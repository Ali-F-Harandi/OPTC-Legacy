// rea decompile_all
// name: FUN_001e0784
// address: 0x1e0784
// body: available
// range: 0x1e0784-0x1e0fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001e0784(char *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long in_x5;
  undefined1 *puVar4;
  long in_x10;
  long lVar5;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long unaff_x25;
  char *unaff_x26;
  char *local_90;
  long local_88;
  char *local_80;
  long local_70;
  long local_68;
  
  puVar1 = &DAT_f615808441b1dafc;
  if (param_1 != (char *)0x0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
LAB_001e08ec:
  while( true ) {
    lVar5 = in_x10;
    puVar4 = puVar2;
    puVar2 = puVar4;
    in_x10 = lVar5;
    if ((long)puVar4 < 0x1cba5f82f77e481f) break;
    if ((long)puVar4 < 0x5039187a35dab08d) {
      if ((long)puVar4 < 0x353e7cd16df664a2) {
        puVar2 = (undefined1 *)0x52cde6c2dea1be4;
        if (((puVar4 != (undefined1 *)0x1cba5f82f77e481f) &&
            (puVar2 = (undefined1 *)0xaa46adf0a78af8c7, in_x10 = in_x5,
            puVar4 != (undefined1 *)0x2ce2edddaf334d81)) &&
           (puVar2 = puVar4, in_x10 = lVar5, lVar6 = local_88,
           puVar4 == (undefined1 *)0x312910f1547c7c77)) {
LAB_001e0aa0:
          puVar2 = (undefined1 *)0xbf711ec4fafe862e;
          in_x10 = lVar5;
          unaff_x24 = lVar6;
        }
      }
      else if (puVar4 == (undefined1 *)0x353e7cd16df664a2) {
        in_x5 = FUN_001e16c4(param_1);
        in_x5 = in_x5 + -1;
        puVar2 = (undefined1 *)0xd222672a639a1d2e;
        if (in_x5 != 0) {
          puVar2 = (undefined1 *)0x2ce2edddaf334d81;
        }
      }
      else if (puVar4 == (undefined1 *)0x3b36a7a007b21166) {
        local_88 = local_70 + -1;
        puVar2 = (undefined1 *)0xc89737e2f8768a05;
        if (param_1[local_88] != '/') {
          puVar2 = (undefined1 *)0x312910f1547c7c77;
        }
      }
      else if (puVar4 == (undefined1 *)0x49b9b00eeff4c15a) {
        puVar2 = (undefined1 *)0x5ece82223eee3411;
        local_90 = unaff_x26;
      }
    }
    else if ((long)puVar4 < 0x696b554ab6b2c8c5) {
      puVar2 = (undefined1 *)0x75df443d79079721;
      if (((puVar4 != (undefined1 *)0x5039187a35dab08d) &&
          (puVar2 = (undefined1 *)0x5ece82223eee3411, puVar4 != (undefined1 *)0x58b842c6f86d5804))
         && (puVar2 = puVar4, puVar4 == (undefined1 *)0x5ece82223eee3411)) {
        iVar3 = FUN_00212730(0,1,&DAT_0021fb00);
        puVar2 = (undefined1 *)0xa865ab623572e331;
        if (iVar3 != 0) {
          puVar2 = (undefined1 *)0x58b842c6f86d5804;
        }
      }
    }
    else if ((long)puVar4 < 0x75df443d79079721) {
      if (puVar4 == (undefined1 *)0x696b554ab6b2c8c5) {
code_r0x001e0d9c:
        unaff_x26 = (char *)&DAT_0021eef0;
LAB_001e0da0:
        puVar2 = (undefined1 *)0x49b9b00eeff4c15a;
      }
      else {
        lVar6 = unaff_x25;
        if (puVar4 == (undefined1 *)0x6b5051bf1aed633d) goto LAB_001e0aa0;
      }
    }
    else if (puVar4 == (undefined1 *)0x7e713fa43f38c582) {
      DAT_0021eef0 = DAT_0021eef0 ^ 0xcc;
      DAT_0021eef1 = DAT_0021eef1 ^ 0xcc;
      DAT_0021fb01 = '\x01';
      puVar2 = (undefined1 *)0x75df443d79079721;
    }
    else if (puVar4 == (undefined1 *)0x75df443d79079721) {
      DAT_0021fb00 = 0;
      return local_90;
    }
  }
  if ((long)puVar4 < -0xab3a208b03543bf) {
    if ((long)puVar4 < -0x3dc07bfa902cf42a) {
      if (puVar4 == (undefined1 *)0xa865ab623572e331) {
        puVar2 = (undefined1 *)0x5039187a35dab08d;
        if (DAT_0021fb01 == '\0') {
          puVar2 = (undefined1 *)0x7e713fa43f38c582;
        }
      }
      else if (puVar4 == (undefined1 *)0xaa46adf0a78af8c7) {
        local_80 = param_1 + lVar5;
        puVar2 = (undefined1 *)0xf54c5df74fcabc41;
        local_68 = lVar5;
        if (*local_80 != '/') {
          puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
        }
      }
      else if ((puVar4 == (undefined1 *)0xbf711ec4fafe862e) &&
              (puVar2 = (undefined1 *)0x1cba5f82f77e481f, local_70 = unaff_x24, unaff_x24 != 0)) {
        puVar2 = (undefined1 *)0x3b36a7a007b21166;
      }
      goto LAB_001e08ec;
    }
    puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
    in_x10 = unaff_x23;
    if (((puVar4 == (undefined1 *)0xc23f84056fd30bd6) ||
        (puVar2 = (undefined1 *)0x52cde6c2dea1be4, in_x10 = lVar5,
        puVar4 == (undefined1 *)0xc89737e2f8768a05)) ||
       (puVar2 = puVar4, puVar4 != (undefined1 *)0xd222672a639a1d2e)) goto LAB_001e08ec;
LAB_001e0cbc:
    lVar6 = 0;
  }
  else {
    if (-0x938e289074b7148 < (long)puVar4) {
      if ((long)puVar4 < 0x887e73b2c28c6a1) {
        if (puVar4 == (undefined1 *)0xf6c71d76f8b48eb9) goto LAB_001e0cbc;
        if (puVar4 == (undefined1 *)0x52cde6c2dea1be4) {
          unaff_x26 = param_1 + local_70;
          goto LAB_001e0da0;
        }
      }
      else {
        puVar2 = puVar1;
        if (((puVar4 != (undefined1 *)0x887e73b2c28c6a1) &&
            (puVar2 = puVar4, puVar4 == (undefined1 *)0x125dd2cc844aecb4)) &&
           (puVar2 = (undefined1 *)0x696b554ab6b2c8c5, *param_1 != '\0')) {
          puVar2 = (undefined1 *)0x353e7cd16df664a2;
        }
      }
      goto LAB_001e08ec;
    }
    if (puVar4 == (undefined1 *)0xf54c5df74fcabc41) {
      unaff_x23 = local_68 + -1;
      puVar2 = (undefined1 *)0xf6c71d76f8b48eb9;
      if (unaff_x23 != 0) {
        puVar2 = (undefined1 *)0xc23f84056fd30bd6;
      }
      *local_80 = '\0';
      goto LAB_001e08ec;
    }
    if (puVar4 == &DAT_f615808441b1dafc) goto code_r0x001e0d9c;
    lVar6 = local_68;
    if (puVar4 != (undefined1 *)0xf63b36e7a9d9f670) goto LAB_001e08ec;
  }
  puVar2 = (undefined1 *)0x6b5051bf1aed633d;
  in_x10 = lVar5;
  unaff_x25 = lVar6;
  goto LAB_001e08ec;
}

