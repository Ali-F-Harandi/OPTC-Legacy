// rea decompile_all
// name: FUN_001b0700
// address: 0x1b0700
// body: available
// range: 0x1b0700-0x1b0a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1b0a3c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b0700(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x21;
  undefined4 unaff_w22;
  int local_6c;
  long local_68;
  
  lVar4 = DAT_0021fa98;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = &DAT_9e2090a1498a3988;
  if (DAT_0021fa98 != 0) {
    puVar1 = (undefined1 *)0x5ef7b9568d6b3c0a;
  }
  puVar2 = (undefined1 *)0x5602aba7b2fd1776;
  if (DAT_0021fa90 < 0x1c || DAT_0021fa98 != 0) {
    puVar2 = (undefined1 *)0xb2d9bc6161ff7d2e;
  }
  local_6c = 0;
  lVar5 = param_1;
  puVar6 = (undefined1 *)0xcbd3ad62bd885e21;
LAB_001b080c:
  do {
    while (puVar8 = puVar6, lVar7 = lVar5, lVar5 = lVar7, 0x225f8dd9081ebc42 < (long)puVar8) {
      if ((long)puVar8 < 0x5602aba7b2fd1776) {
        if (puVar8 == (undefined1 *)0x225f8dd9081ebc43) {
          unaff_w22 = __system_property_get(param_1,param_2);
LAB_001b07f4:
          puVar6 = (undefined1 *)0x9069f9d096a544a9;
        }
        else {
          puVar6 = puVar8;
          if (puVar8 == (undefined1 *)0x255edd958a6bac09) {
            puVar6 = (undefined1 *)0x225f8dd9081ebc43;
          }
        }
      }
      else if (puVar8 == (undefined1 *)0x5602aba7b2fd1776) {
        unaff_x21 = FUN_001af584(&local_6c);
        puVar6 = (undefined1 *)0x700353e7f52f2541;
        DAT_0021fa98 = unaff_x21;
        if (unaff_x21 == 0 || local_6c != 0) {
          puVar6 = (undefined1 *)0x255edd958a6bac09;
        }
      }
      else {
        lVar5 = lVar4;
        puVar6 = (undefined1 *)0xf237c2013c1c6fa2;
        if ((puVar8 != (undefined1 *)0x5ef7b9568d6b3c0a) &&
           (lVar5 = lVar7, puVar6 = puVar8, puVar8 == (undefined1 *)0x700353e7f52f2541)) {
          lVar5 = unaff_x21;
          puVar6 = (undefined1 *)0xf237c2013c1c6fa2;
        }
      }
    }
    if (-0x342c529d4277a1e0 < (long)puVar8) {
      puVar6 = puVar2;
      if ((puVar8 != (undefined1 *)0xcbd3ad62bd885e21) &&
         (puVar6 = puVar8, puVar8 == (undefined1 *)0xf237c2013c1c6fa2)) {
        unaff_w22 = FUN_001afc50(lVar7,param_1,param_2);
        goto LAB_001b07f4;
      }
      goto LAB_001b080c;
    }
    puVar6 = (undefined1 *)0x225f8dd9081ebc43;
    if (((puVar8 != &DAT_9e2090a1498a3988) &&
        (puVar6 = puVar1, puVar8 != (undefined1 *)0xb2d9bc6161ff7d2e)) &&
       (puVar6 = puVar8, puVar8 == (undefined1 *)0x9069f9d096a544a9)) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return unaff_w22;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}

