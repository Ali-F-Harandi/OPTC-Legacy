// rea decompile_all
// name: FUN_001a8ab8
// address: 0x1a8ab8
// body: available
// range: 0x1a8ab8-0x1a8de7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1a8de4 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a8ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  FUN_0010a148(param_1,param_4);
  lVar2 = 0x353e7cd16df664a2;
LAB_001a8bd0:
  do {
    while (lVar4 = lVar2, lVar2 = lVar4, lVar4 < -0x9c4c91856260990) {
      if (lVar4 < -0x2ddd98d59c65e2d2) {
        if (lVar4 == -0x55b9520f58750739) {
          FUN_0011a918(&local_6c,param_1,param_2,param_4 + 0x270);
          lVar2 = -0x9c4c91856260990;
          if (local_6c != 0) {
            lVar2 = -0x938e289074b7147;
          }
        }
        else if (lVar4 == -0x3dc07bfa902cf42a) {
          FUN_0010eda8(param_4);
          FUN_0010f978(param_4);
LAB_001a8ccc:
          FUN_0010eddc(param_4);
          FUN_0010f9ac(param_4);
          local_6c = 0;
          lVar2 = 0x6b5051bf1aed633d;
        }
      }
      else if (lVar4 == -0x2ddd98d59c65e2d2) {
        FUN_00110ab0(param_4);
        local_6c = 0;
        lVar2 = -0x55b9520f58750739;
      }
      else if (lVar4 == -0xab3a208b03543bf) {
        FUN_0010e4f0(param_4);
        FUN_0010ef74(param_4);
        lVar2 = 0x6b5051bf1aed633d;
      }
    }
    if (lVar4 < 0x2ce2edddaf334d81) {
      if (lVar4 == -0x9c4c91856260990) {
        FUN_0010dad4(param_4);
        FUN_0011b2a4(&local_6c,param_1,param_2,*(undefined8 *)(param_4 + 0x270),param_4 + 0x278);
        lVar2 = -0xab3a208b03543bf;
        if (local_6c != 0) {
          lVar2 = -0x3dc07bfa902cf42a;
        }
      }
      else if (lVar4 == -0x938e289074b7147) {
        FUN_0010e4a4(param_4);
        FUN_0010eda8(param_4);
        FUN_0010f978(param_4);
        FUN_0010e4d8(param_4);
        goto LAB_001a8ccc;
      }
      goto LAB_001a8bd0;
    }
    lVar2 = -0x55b9520f58750739;
    if (lVar4 != 0x2ce2edddaf334d81) {
      if (lVar4 == 0x353e7cd16df664a2) {
        uVar3 = FUN_0010f9c4(param_1,&local_6c,param_4,param_2,param_3);
        lVar2 = 0x2ce2edddaf334d81;
        if ((uVar3 & 1) == 0) {
          lVar2 = -0x2ddd98d59c65e2d2;
        }
      }
      else {
        lVar2 = lVar4;
        if (lVar4 == 0x6b5051bf1aed633d) {
          FUN_00119890(param_4);
          FUN_00119af0(param_1,param_4);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
  } while( true );
}

