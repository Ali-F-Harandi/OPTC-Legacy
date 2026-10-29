// rea decompile_all
// name: FUN_0016a0a4
// address: 0x16a0a4
// body: available
// range: 0x16a0a4-0x16a9bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16a9bc to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016a0a4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long unaff_x27;
  long local_a0;
  long local_90;
  long local_88;
  int local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_7c = 0;
  local_88 = 0;
  local_90 = 0;
  FUN_00197d28(&local_7c,param_1,&local_88);
  lVar1 = -0x6903657938965e20;
  if (local_7c != 0) {
    lVar1 = -0x5eeca92aa1d20d9c;
  }
  lVar3 = -0x3dd7d4b8d4ad43c1;
  do {
    while( true ) {
      while (lVar5 = lVar3, lVar3 = lVar5, lVar5 < -0x3dd7d4b8d4ad43c1) {
        if (lVar5 < -0x56b23faa51cb195d) {
          if (lVar5 < -0x5eeca92aa1d20d9c) {
            if (lVar5 < -0x6903657938965e20) {
              if (lVar5 == -0x7884282f36914699) {
                (**(code **)(*param_1 + 0xb8))(param_1,local_a0);
                lVar3 = -0x61500652ba05ebc5;
              }
              else if (lVar5 == -0x7934d643122e3604) {
                if (*(long *)(lVar2 + 0x28) == local_78) {
                  return;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail(local_7c);
              }
            }
            else if (lVar5 == -0x6903657938965e20) {
              FUN_00199504(&local_7c,param_1,local_88,&local_90);
              lVar3 = -0x433d88a998c28763;
              if (local_7c != 0) {
                lVar3 = 0x3c5465952377ba98;
              }
            }
            else if (lVar5 == -0x61500652ba05ebc5) {
              local_90 = 0;
              lVar3 = -0x58b3b6c239382b4f;
              unaff_x27 = local_88;
              if (local_88 == 0 || param_1 == (long *)0x0) {
                lVar3 = -0x1d53cad8e4c3dc7e;
              }
            }
          }
          else {
            lVar3 = -0x4fa23741bc0751c5;
            if (((lVar5 != -0x5eeca92aa1d20d9c) &&
                (lVar3 = -0x56b23faa51cb195d, lVar5 != -0x59e4a8acc9e60ad5)) &&
               (lVar3 = lVar5, lVar5 == -0x58b3b6c239382b4f)) {
              (**(code **)(*param_1 + 0xb8))(param_1,unaff_x27);
              lVar3 = -0x7934d643122e3604;
            }
          }
        }
        else if (lVar5 < -0x4ceb317b18ee5870) {
          if (lVar5 == -0x56b23faa51cb195d) {
            iVar4 = FUN_00212730(0,1,&DAT_0021f620);
            lVar3 = -0x425079671b027466;
            if (iVar4 != 0) {
              lVar3 = -0x59e4a8acc9e60ad5;
            }
          }
          else {
            lVar3 = -0xe746af78dcad0b3;
            if ((lVar5 != -0x50a560cf848f390b) && (lVar3 = lVar5, lVar5 == -0x4fa23741bc0751c5)) {
              local_a0 = local_90;
              lVar3 = -0x7884282f36914699;
              if (local_90 == 0 || param_1 == (long *)0x0) {
                lVar3 = 0x2fa9c1d0d3f1b96a;
              }
            }
          }
        }
        else if (lVar5 < -0x425079671b027466) {
          if (lVar5 == -0x4ceb317b18ee5870) {
            DAT_0021d7d0 = DAT_0021d7d0 ^ 0xcd;
            DAT_0021d7d1 = DAT_0021d7d1 ^ 0xcd;
            DAT_0021d7d2 = DAT_0021d7d2 ^ 0xcd;
            DAT_0021d7d3 = DAT_0021d7d3 ^ 0xcd;
            DAT_0021d7d4 = DAT_0021d7d4 ^ 0xcd;
            DAT_0021d7c8 = DAT_0021d7c8 ^ 0xcdcdcdcdcdcdcdcd;
            DAT_0021f73e = '\x01';
            lVar3 = -0x337d153ac24d65d4;
          }
          else if (lVar5 == -0x433d88a998c28763) {
            lVar3 = -0x56b23faa51cb195d;
          }
        }
        else if (lVar5 == -0x425079671b027466) {
          lVar3 = 0x56333496cf5171c3;
          if (DAT_0021f73d == '\0') {
            lVar3 = -0x2c77a9f026d7f873;
          }
        }
        else if (lVar5 == -0x41b5fa2ad809ca2a) goto LAB_0016a770;
      }
      if (0x38b9c46d6a75890b < lVar5) break;
      if (lVar5 < -0x1d53cad8e4c3dc7e) {
        lVar3 = lVar1;
        if (lVar5 != -0x3dd7d4b8d4ad43c1) {
          if (lVar5 == -0x337d153ac24d65d4) {
            DAT_0021f624 = 0;
            FUN_0018eb84(&local_7c,param_1,local_90,&DAT_0021d7c8,param_2 + 100);
            lVar3 = 0x49e1fa2ebcbec12d;
            if (local_7c != 0) {
              lVar3 = -0x41b5fa2ad809ca2a;
            }
          }
          else {
            lVar3 = lVar5;
            if (lVar5 == -0x2c77a9f026d7f873) {
              DAT_0021d7c0 = DAT_0021d7c0 ^ 0x67;
              DAT_0021d7c1 = DAT_0021d7c1 ^ 0x67;
              DAT_0021d7c2 = DAT_0021d7c2 ^ 0x67;
              DAT_0021d7c3 = DAT_0021d7c3 ^ 0x67;
              DAT_0021d7b8 = DAT_0021d7b8 ^ 0x6767676767676767;
              DAT_0021f73d = '\x01';
              lVar3 = 0x73f7e81cc796b4b9;
            }
          }
        }
      }
      else if (lVar5 < -0xe746af78dcad0b3) {
        lVar3 = -0x7934d643122e3604;
        if ((lVar5 != -0x1d53cad8e4c3dc7e) && (lVar3 = lVar5, lVar5 == -0x18a2b34b366db28a)) {
LAB_0016a770:
          local_7c = 0x1c;
          lVar3 = -0x4fa23741bc0751c5;
        }
      }
      else if (lVar5 == -0xe746af78dcad0b3) {
        iVar4 = FUN_00212730(0,1,&DAT_0021f624);
        lVar3 = 0x5e1d6c9bdc6b678b;
        if (iVar4 != 0) {
          lVar3 = -0x50a560cf848f390b;
        }
      }
      else if (lVar5 == 0x2fa9c1d0d3f1b96a) {
        lVar3 = -0x61500652ba05ebc5;
      }
    }
    if (lVar5 < 0x5250280c0869023c) {
      lVar3 = -0xe746af78dcad0b3;
      if (((lVar5 != 0x38b9c46d6a75890c) &&
          (lVar3 = -0x4fa23741bc0751c5, lVar5 != 0x3c5465952377ba98)) &&
         (lVar3 = lVar5, lVar5 == 0x49e1fa2ebcbec12d)) {
        lVar3 = -0x4fa23741bc0751c5;
      }
    }
    else if (lVar5 < 0x5e1d6c9bdc6b678b) {
      lVar3 = -0x337d153ac24d65d4;
      if ((lVar5 != 0x5250280c0869023c) && (lVar3 = lVar5, lVar5 == 0x56333496cf5171c3)) {
        lVar3 = 0x73f7e81cc796b4b9;
      }
    }
    else if (lVar5 == 0x5e1d6c9bdc6b678b) {
      lVar3 = 0x5250280c0869023c;
      if (DAT_0021f73e == '\0') {
        lVar3 = -0x4ceb317b18ee5870;
      }
    }
    else if (lVar5 == 0x73f7e81cc796b4b9) {
      DAT_0021f620 = 0;
      FUN_0018eb84(&local_7c,param_1,local_90,&DAT_0021d7b8,param_2 + 0x60);
      lVar3 = 0x38b9c46d6a75890c;
      if (local_7c != 0) {
        lVar3 = -0x18a2b34b366db28a;
      }
    }
  } while( true );
}

