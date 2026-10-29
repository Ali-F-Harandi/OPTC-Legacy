// rea decompile_all
// name: FUN_00202928
// address: 0x202928
// body: available
// range: 0x202928-0x202e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x202e40 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00202928(ulong *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ssize_t sVar5;
  ulong *puVar6;
  long lVar7;
  ulong unaff_x22;
  timeval local_88;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar1 = 0x2ce2edddaf334d81;
  if (param_1 != (ulong *)0x0) {
    lVar1 = -0x2ddd98d59c65e2d2;
  }
  puVar6 = param_1;
  lVar3 = 0x353e7cd16df664a2;
  do {
    while( true ) {
      while( true ) {
        while (lVar7 = lVar3, lVar3 = lVar7, lVar7 < -0x938e289074b7147) {
          if (lVar7 < -0x3768c81d078975fb) {
            if (lVar7 == -0x55b9520f58750739) {
              puVar6 = (ulong *)FUN_00212730(0,1,&DAT_0021fb24);
              lVar3 = -0x3768c81d078975fb;
              if ((int)puVar6 != 0) {
                lVar3 = -0x9c4c91856260990;
              }
            }
            else {
              lVar3 = 0x3b36a7a007b21166;
              if ((lVar7 != -0x408ee13b050179d2) && (lVar3 = lVar7, lVar7 == -0x3dc07bfa902cf42a)) {
                DAT_0021fb24 = 0;
                *param_1 = 0;
                puVar6 = (ulong *)FUN_001f351c(&DAT_0021ef58,0x80000,0);
                unaff_x22 = (ulong)puVar6 & 0xffffffff;
                lVar3 = 0x6b5051bf1aed633d;
                if ((int)puVar6 < 0) {
                  lVar3 = -0x938e289074b7147;
                }
              }
            }
          }
          else if (lVar7 < -0xab3a208b03543bf) {
            if (lVar7 == -0x3768c81d078975fb) {
              lVar3 = 0x52cde6c2dea1be4;
              if (DAT_0021fb25 == '\0') {
                lVar3 = -0xab3a208b03543bf;
              }
            }
            else if (lVar7 == -0x2ddd98d59c65e2d2) {
              lVar3 = -0x55b9520f58750739;
            }
          }
          else if (lVar7 == -0xab3a208b03543bf) {
            DAT_0021ef60 = DAT_0021ef60 ^ 0x8b;
            DAT_0021ef61 = DAT_0021ef61 ^ 0x8b;
            DAT_0021ef62 = DAT_0021ef62 ^ 0x8b;
            DAT_0021ef63 = DAT_0021ef63 ^ 0x8b;
            DAT_0021ef64 = DAT_0021ef64 ^ 0x8b;
            DAT_0021ef58 = DAT_0021ef58 ^ 0x8b8b8b8b8b8b8b8b;
            DAT_0021fb25 = '\x01';
            lVar3 = -0x3dc07bfa902cf42a;
          }
          else if (lVar7 == -0x9c4c91856260990) {
            lVar3 = -0x55b9520f58750739;
          }
        }
        if (0x312910f1547c7c76 < lVar7) break;
        if (lVar7 < 0x1cba5f82f77e481f) {
          lVar3 = 0x3b36a7a007b21166;
          if ((lVar7 != -0x938e289074b7147) && (lVar3 = lVar7, lVar7 == 0x52cde6c2dea1be4)) {
            lVar3 = -0x3dc07bfa902cf42a;
          }
        }
        else {
          lVar3 = 0x312910f1547c7c77;
          if ((lVar7 != 0x1cba5f82f77e481f) && (lVar3 = lVar7, lVar7 == 0x2ce2edddaf334d81)) {
            lVar3 = 0x312910f1547c7c77;
          }
        }
      }
      if (lVar7 < 0x3b36a7a007b21166) break;
      if (lVar7 == 0x3b36a7a007b21166) {
        gettimeofday(&local_88,(__timezone_ptr_t)0x0);
        uVar4 = getpid();
        puVar6 = (ulong *)(ulong)uVar4;
        *param_1 = (ulong)((uint)local_88.tv_sec ^ uVar4 << 0x10 ^ (uint)local_88.tv_usec);
        lVar3 = 0x312910f1547c7c77;
      }
      else if (lVar7 == 0x6b5051bf1aed633d) {
        sVar5 = read((int)unaff_x22,param_1,8);
        uVar4 = close((int)unaff_x22);
        puVar6 = (ulong *)(ulong)uVar4;
        lVar3 = 0x1cba5f82f77e481f;
        if (sVar5 != 8) {
          lVar3 = -0x408ee13b050179d2;
        }
      }
    }
    lVar3 = lVar1;
  } while ((lVar7 == 0x353e7cd16df664a2) || (lVar3 = lVar7, lVar7 != 0x312910f1547c7c77));
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar6);
  }
  return;
}

