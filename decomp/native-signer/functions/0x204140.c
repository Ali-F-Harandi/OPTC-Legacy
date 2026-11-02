// rea decompile_all
// name: FUN_00204140
// address: 0x204140
// body: available
// range: 0x204140-0x2047bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2047bc to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00204140(long param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *extraout_x1;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *unaff_x21;
  undefined8 local_8e0;
  undefined8 uStack_8d8;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined1 *local_8a0;
  undefined1 *puStack_898;
  undefined8 *puStack_890;
  undefined8 uStack_888;
  char acStack_880 [1024];
  undefined1 auStack_480 [1024];
  long local_80;
  
  puStack_898 = &stack0xfffffffffffff740;
  puStack_890 = &local_8e0;
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uStack_888 = 0xffffff80ffffffe0;
  local_8e0 = param_5;
  uStack_8d8 = param_6;
  local_8d0 = param_7;
  uStack_8c8 = param_8;
  local_8a0 = (undefined1 *)register0x00000008;
  memset(auStack_480,0,0x400);
  memset(acStack_880,0,0x400);
  vsnprintf(acStack_880,0x400,param_4,&local_8a0);
  puVar1 = &DAT_f615808441b1dafc;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  }
  puVar3 = extraout_x1;
  puVar4 = (undefined1 *)0x887e73b2c28c6a1;
LAB_002042dc:
  do {
    while( true ) {
      while (puVar7 = puVar4, puVar6 = puVar3, puVar3 = puVar6, puVar4 = puVar7,
            0x887e73b2c28c6a0 < (long)puVar7) {
        if ((long)puVar7 < 0x353e7cd16df664a2) {
          if ((long)puVar7 < 0x1cba5f82f77e481f) {
            puVar4 = puVar1;
            if ((puVar7 != (undefined1 *)0x887e73b2c28c6a1) &&
               (puVar4 = puVar7, puVar7 == (undefined1 *)0x125dd2cc844aecb4)) {
              puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
            }
          }
          else if (puVar7 == (undefined1 *)0x1cba5f82f77e481f) {
            puVar4 = (undefined1 *)0x3b36a7a007b21166;
            if (DAT_0021fb46 == '\0') {
              puVar4 = (undefined1 *)0xc23f84056fd30bd6;
            }
          }
          else if (puVar7 == (undefined1 *)0x2ce2edddaf334d81) {
            DAT_0021efa0 = DAT_0021efa0 ^ 4;
            DAT_0021ef98 = DAT_0021ef98 ^ 0x404040404040404;
            DAT_0021fb45 = '\x01';
            puVar4 = (undefined1 *)0xd222672a639a1d2e;
          }
        }
        else if ((long)puVar7 < 0x696b554ab6b2c8c5) {
          puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
          if ((puVar7 != (undefined1 *)0x353e7cd16df664a2) &&
             (puVar4 = puVar7, puVar7 == (undefined1 *)0x3b36a7a007b21166)) {
            puVar4 = (undefined1 *)0xf6c71d76f8b48eb9;
          }
        }
        else if (puVar7 == (undefined1 *)0x696b554ab6b2c8c5) {
          iVar5 = FUN_00212730(0,1,&DAT_0021fb34);
          puVar4 = (undefined1 *)0x6b5051bf1aed633d;
          if (iVar5 != 0) {
            puVar4 = (undefined1 *)0x353e7cd16df664a2;
          }
        }
        else if (puVar7 == (undefined1 *)0x6b5051bf1aed633d) {
          puVar4 = (undefined1 *)0xbf711ec4fafe862e;
          if (DAT_0021fb45 == '\0') {
            puVar4 = (undefined1 *)0x2ce2edddaf334d81;
          }
        }
      }
      if (-0xab3a208b03543c0 < (long)puVar7) break;
      if ((long)puVar7 < -0x3dc07bfa902cf42a) {
        puVar3 = unaff_x21;
        puVar4 = (undefined1 *)0xf63b36e7a9d9f670;
        if ((puVar7 != (undefined1 *)0xaa46adf0a78af8c7) &&
           (puVar3 = puVar6, puVar4 = puVar7, puVar7 == (undefined1 *)0xbf711ec4fafe862e)) {
          puVar4 = (undefined1 *)0xd222672a639a1d2e;
        }
      }
      else if (puVar7 == (undefined1 *)0xc23f84056fd30bd6) {
        DAT_0021efa4 = DAT_0021efa4 ^ 0x86;
        DAT_0021efa5 = DAT_0021efa5 ^ 0x86;
        DAT_0021efa6 = DAT_0021efa6 ^ 0x86;
        DAT_0021efa7 = DAT_0021efa7 ^ 0x86;
        DAT_0021efa9 = DAT_0021efa9 ^ 0x86;
        DAT_0021efa8 = DAT_0021efa8 ^ 0x86;
        DAT_0021efaa = DAT_0021efaa ^ 0x86;
        DAT_0021fb46 = '\x01';
        puVar4 = (undefined1 *)0xf6c71d76f8b48eb9;
      }
      else if (puVar7 == (undefined1 *)0xd222672a639a1d2e) {
        unaff_x21 = auStack_480;
        DAT_0021fb34 = 0;
        FUN_001e0fd8(auStack_480,0x400,&DAT_0021ef98,param_1,param_2);
LAB_002045f4:
        puVar4 = (undefined1 *)0xaa46adf0a78af8c7;
      }
    }
    if (-0x9c4c91856260991 < (long)puVar7) {
      if (puVar7 == (undefined1 *)0xf63b36e7a9d9f670) {
        iVar5 = FUN_00212730(0,1,&DAT_0021fb38);
        puVar4 = (undefined1 *)0x1cba5f82f77e481f;
        if (iVar5 != 0) {
          puVar4 = (undefined1 *)0xf54c5df74fcabc41;
        }
      }
      else if (puVar7 == (undefined1 *)0xf6c71d76f8b48eb9) {
        DAT_0021fb38 = 0;
        FUN_00205de0(param_3,&DAT_0021efa4,puVar6,acStack_880);
        FUN_0020540c(param_3,&DAT_0021efa4,puVar6,acStack_880);
        if (*(long *)(lVar2 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      goto LAB_002042dc;
    }
    puVar4 = (undefined1 *)0xf63b36e7a9d9f670;
    if ((puVar7 != (undefined1 *)0xf54c5df74fcabc41) &&
       (puVar4 = puVar7, puVar7 == &DAT_f615808441b1dafc)) {
      unaff_x21 = (undefined1 *)0x0;
      goto LAB_002045f4;
    }
  } while( true );
}

