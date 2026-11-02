// rea decompile_all
// name: FUN_00206a18
// address: 0x206a18
// body: available
// range: 0x206a18-0x207133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x207130 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00206a18(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ssize_t sVar5;
  undefined1 *puVar6;
  sockaddr *unaff_x24;
  undefined8 *unaff_x25;
  int unaff_w26;
  uint unaff_w27;
  undefined2 local_c0 [8];
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 *local_88;
  uint local_7c;
  long local_78;
  
  local_a8 = tpidr_el0;
  local_78 = *(long *)(local_a8 + 0x28);
  uStack_98 = 100000;
  local_a0 = 0;
  puVar3 = (undefined8 *)auStack_b0;
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  local_88 = param_1;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (puVar6 = puVar2, uVar1 = local_a0, puVar2 = puVar6,
                  (long)puVar6 < 0x52cde6c2dea1be4) {
              if ((long)puVar6 < -0x2ddd98d59c65e2d2) {
                if ((long)puVar6 < -0x3dc07bfa902cf42a) {
                  if (puVar6 == (undefined1 *)0xaa46adf0a78af8c7) {
                    unaff_w27 = 0;
                    puVar2 = (undefined1 *)0xbf711ec4fafe862e;
                  }
                  else if (puVar6 == (undefined1 *)0xbf711ec4fafe862e) {
                    FUN_001f3aa0(unaff_w26);
                    puVar2 = (undefined1 *)0x1cba5f82f77e481f;
                    local_7c = unaff_w27;
                  }
                }
                else {
                  puVar2 = (undefined1 *)0xf54c5df74fcabc41;
                  if ((puVar6 != (undefined1 *)0xc23f84056fd30bd6) &&
                     (puVar2 = puVar6, puVar6 == (undefined1 *)0xc89737e2f8768a05)) {
                    puVar2 = (undefined1 *)0x52cde6c2dea1be4;
                    if (DAT_0021fb6e == '\0') {
                      puVar2 = (undefined1 *)0xf6c71d76f8b48eb9;
                    }
                  }
                }
              }
              else if ((long)puVar6 < -0x9ea7f7bbe4e2504) {
                if (puVar6 == (undefined1 *)0xd222672a639a1d2e) {
                  unaff_x25[1] = uStack_98;
                  *unaff_x25 = uVar1;
                  setsockopt(unaff_w26,1,0x14,unaff_x25,0x10);
                  iVar4 = connect(unaff_w26,unaff_x24,0x10);
                  puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
                  if (iVar4 != -1) {
                    puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
                  }
                }
                else if (puVar6 == (undefined1 *)0xf54c5df74fcabc41) {
                  iVar4 = FUN_00212730(0,1,&DAT_0021fb64);
                  puVar2 = (undefined1 *)0xc89737e2f8768a05;
                  if (iVar4 != 0) {
                    puVar2 = (undefined1 *)0xc23f84056fd30bd6;
                  }
                }
              }
              else if (puVar6 == &DAT_f615808441b1dafc) {
                iVar4 = FUN_00212730(0,1,&DAT_0021fb60);
                puVar2 = (undefined1 *)0x3b36a7a007b21166;
                if (iVar4 != 0) {
                  puVar2 = (undefined1 *)0x125dd2cc844aecb4;
                }
              }
              else {
                puVar2 = (undefined1 *)0xf54c5df74fcabc41;
                if ((puVar6 != (undefined1 *)0xf63b36e7a9d9f670) &&
                   (puVar2 = puVar6, puVar6 == (undefined1 *)0xf6c71d76f8b48eb9)) {
                  DAT_0021f024 = DAT_0021f024 ^ 0xfb;
                  DAT_0021f025 = DAT_0021f025 ^ 0xfb;
                  DAT_0021f026 = DAT_0021f026 ^ 0xfb;
                  DAT_0021f028 = DAT_0021f028 ^ 0xfb;
                  DAT_0021f029 = DAT_0021f029 ^ 0xfb;
                  DAT_0021f02a = DAT_0021f02a ^ 0xfb;
                  DAT_0021f027 = DAT_0021f027 ^ 0xfb;
                  DAT_0021fb6e = '\x01';
                  puVar2 = (undefined1 *)0x6b5051bf1aed633d;
                }
              }
            }
            if ((long)puVar6 < 0x312910f1547c7c77) break;
            if ((long)puVar6 < 0x3b36a7a007b21166) {
              puVar2 = (undefined1 *)0x353e7cd16df664a2;
              if ((puVar6 != (undefined1 *)0x312910f1547c7c77) &&
                 (puVar2 = puVar6, puVar6 == (undefined1 *)0x353e7cd16df664a2)) {
                unaff_x24 = (sockaddr *)(puVar3 + -2);
                DAT_0021fb60 = 0;
                unaff_x25 = puVar3 + -4;
                FUN_001e38f8(unaff_x24,0,0x10);
                *(undefined2 *)(puVar3 + -2) = 2;
                inet_aton((char *)&DAT_0021f018,(in_addr *)((long)puVar3 + -0xc));
                *(undefined2 *)((long)puVar3 + -0xe) = 0xa269;
                unaff_w26 = socket(2,1,0);
                puVar3 = unaff_x25;
                puVar2 = (undefined1 *)0x2ce2edddaf334d81;
                if (-1 < unaff_w26) {
                  puVar2 = (undefined1 *)0xd222672a639a1d2e;
                }
              }
            }
            else if (puVar6 == (undefined1 *)0x3b36a7a007b21166) {
              puVar2 = (undefined1 *)0x312910f1547c7c77;
              if (DAT_0021fb6d == '\0') {
                puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
              }
            }
            else if (puVar6 == (undefined1 *)0x696b554ab6b2c8c5) {
              DAT_0021f020 = DAT_0021f020 ^ 0xb4;
              DAT_0021f021 = DAT_0021f021 ^ 0xb4;
              DAT_0021f018 = DAT_0021f018 ^ 0xb4b4b4b4b4b4b4b4;
              DAT_0021fb6d = '\x01';
              puVar2 = (undefined1 *)0x353e7cd16df664a2;
            }
            else if (puVar6 == (undefined1 *)0x6b5051bf1aed633d) {
              DAT_0021fb64 = 0;
              sendto(unaff_w26,&DAT_0021f024,6,0,(sockaddr *)0x0,0);
              FUN_001e38f8(puVar3 + -0x20,0,0x100);
              sVar5 = recvfrom(unaff_w26,puVar3 + -0x20,0x100,0,(sockaddr *)0x0,(socklen_t *)0x0);
              unaff_w27 = (uint)(sVar5 == 0);
              puVar2 = (undefined1 *)0xbf711ec4fafe862e;
            }
          }
          if (0x125dd2cc844aecb3 < (long)puVar6) break;
          puVar2 = (undefined1 *)0x6b5051bf1aed633d;
          if ((puVar6 != (undefined1 *)0x52cde6c2dea1be4) &&
             (puVar2 = puVar6, puVar6 == (undefined1 *)0x887e73b2c28c6a1)) {
            puVar2 = &DAT_f615808441b1dafc;
          }
        }
        puVar2 = &DAT_f615808441b1dafc;
      } while (puVar6 == (undefined1 *)0x125dd2cc844aecb4);
      if (puVar6 != (undefined1 *)0x2ce2edddaf334d81) break;
      local_7c = 0;
      *local_88 = 6;
      puVar2 = (undefined1 *)0x1cba5f82f77e481f;
    }
    puVar2 = puVar6;
  } while (puVar6 != (undefined1 *)0x1cba5f82f77e481f);
  if (*(long *)(local_a8 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_7c & 1;
}

