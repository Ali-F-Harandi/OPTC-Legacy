// rea decompile_all
// name: Java_com_adjust_sdk_sig_NativeLibHelper_nOnResume
// address: 0x1a894c
// body: available
// range: 0x1a894c-0x1a894f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Java_com_adjust_sdk_sig_NativeLibHelper_nOnResume(void)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  itimerspec iStack_110;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  long lStack_70;
  
  lVar1 = tpidr_el0;
  lStack_70 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      do {
        while( true ) {
          while (puVar4 = puVar2, puVar2 = puVar4, 0x125dd2cc844aecb3 < (long)puVar4) {
            if ((long)puVar4 < 0x353e7cd16df664a2) {
              if (puVar4 == (undefined1 *)0x125dd2cc844aecb4) {
                FUN_001e38f8(auStack_f0,0,0x40);
                FUN_001b0d08();
                FUN_001e38f8(auStack_b0,0,0x40);
                FUN_001e38f8(&iStack_110,0,0x20);
                iStack_110.it_value.tv_sec = 1;
                auStack_b0._12_4_ = 2;
                iStack_110.it_interval.tv_sec = 1;
                auStack_b0._16_8_ = FUN_001b0d08;
                auStack_b0._24_8_ = (void *)0x0;
                iVar3 = timer_create(1,(sigevent *)auStack_b0,&DAT_0021fab0);
                puVar2 = (undefined1 *)0x696b554ab6b2c8c5;
                if (iVar3 != -1) {
                  puVar2 = (undefined1 *)0x353e7cd16df664a2;
                }
              }
              else if (puVar4 == (undefined1 *)0x2ce2edddaf334d81) {
                puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
              }
            }
            else if (puVar4 == (undefined1 *)0x353e7cd16df664a2) {
              iVar3 = timer_settime(DAT_0021fab0,0,&iStack_110,(itimerspec *)0x0);
              puVar2 = (undefined1 *)0x2ce2edddaf334d81;
              if (iVar3 != -1) {
                puVar2 = (undefined1 *)0xd222672a639a1d2e;
              }
            }
            else if (puVar4 == (undefined1 *)0x696b554ab6b2c8c5) {
              puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
            }
          }
          if (-0x9ea7f7bbe4e2505 < (long)puVar4) break;
          if (puVar4 == (undefined1 *)0xaa46adf0a78af8c7) {
            puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
          }
          else if (puVar4 == (undefined1 *)0xd222672a639a1d2e) {
            DAT_0021faa8 = '\x01';
            puVar2 = (undefined1 *)0xaa46adf0a78af8c7;
          }
        }
        puVar2 = (undefined1 *)0xf63b36e7a9d9f670;
      } while (puVar4 == &DAT_f615808441b1dafc);
      if (puVar4 != (undefined1 *)0x887e73b2c28c6a1) break;
      puVar2 = &DAT_f615808441b1dafc;
      if (DAT_0021faa8 == '\0') {
        puVar2 = (undefined1 *)0x125dd2cc844aecb4;
      }
    }
    puVar2 = puVar4;
  } while (puVar4 != (undefined1 *)0xf63b36e7a9d9f670);
  if (*(long *)(lVar1 + 0x28) != lStack_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

