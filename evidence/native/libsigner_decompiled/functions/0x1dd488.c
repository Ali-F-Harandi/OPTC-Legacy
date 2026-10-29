// rea decompile_all
// name: FUN_001dd488
// address: 0x1dd488
// body: available
// range: 0x1dd488-0x1de54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1de54c to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001dd488(int *param_1,long *param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long *unaff_x21;
  long local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  long local_b0;
  uint local_a4;
  undefined1 *local_a0;
  char *local_98;
  long *local_90;
  long *local_88;
  long *local_80;
  long local_78;
  
  local_c8 = param_4;
  uStack_c0 = param_5;
  local_d0 = tpidr_el0;
  local_78 = *(long *)(local_d0 + 0x28);
  plVar2 = &local_d0;
  plVar1 = param_2;
  puVar7 = (undefined1 *)0x887e73b2c28c6a1;
LAB_001dd57c:
  puVar6 = puVar7;
  plVar5 = plVar1;
  puVar7 = puVar6;
  plVar1 = plVar5;
  if ((long)puVar6 < 0x887e73b2c28c6a1) {
    if (-0x3bafc724edb51feb < (long)puVar6) {
      if ((long)puVar6 < -0x124103c739306402) {
        if ((long)puVar6 < -0x2ddd98d59c65e2d2) {
          puVar7 = (undefined1 *)0xc0f51250277e5cfd;
          if (puVar6 != &DAT_c45038db124ae016) {
            if (puVar6 == (undefined1 *)0xc879bc31bae5bb14) {
              iVar4 = *param_1;
              *unaff_x21 = 0;
              puVar7 = (undefined1 *)0x8500be9b057d300e;
              if (iVar4 != 0) {
                puVar7 = &DAT_c45038db124ae016;
              }
            }
            else {
              puVar7 = puVar6;
              if (puVar6 == (undefined1 *)0xc89737e2f8768a05) {
                FUN_00189a4c(param_1,param_2,param_3,local_88,local_98);
                bVar3 = *param_1 == 0;
                puVar7 = (undefined1 *)0x49b9b00eeff4c15a;
                puVar6 = (undefined1 *)0x52cde6c2dea1be4;
                goto LAB_001ddf60;
              }
            }
          }
        }
        else if (puVar6 == (undefined1 *)0xd222672a639a1d2e) {
          iVar4 = FUN_00212730(0,1,&DAT_0021fafc);
          puVar7 = (undefined1 *)0x29ff0ff794febe2e;
          if (iVar4 != 0) {
            puVar7 = (undefined1 *)0xaa46adf0a78af8c7;
          }
        }
        else if (puVar6 == (undefined1 *)0xe48eaf6f29f5caa2) {
          puVar7 = (undefined1 *)0x940bdddd24f52ce3;
          if (DAT_0021fafe == '\0') {
            puVar7 = (undefined1 *)0xa865ab623572e331;
          }
        }
        else if (puVar6 == (undefined1 *)0xe7622641fcb090c6) {
          if (*(long *)(local_d0 + 0x28) == local_78) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
      }
      else if ((long)puVar6 < -0x9c4c91856260990) {
        plVar1 = local_80;
        puVar7 = (undefined1 *)0xbf711ec4fafe862e;
        if (puVar6 != (undefined1 *)0xedbefc38c6cf9bfe) {
          if (puVar6 == (undefined1 *)0xf54c5df74fcabc41) {
            DAT_0021fafc = 0;
            local_90 = (long *)FUN_001e4578(local_a0,&DAT_0021eeec);
            plVar1 = plVar5;
            puVar7 = (undefined1 *)0xc23f84056fd30bd6;
            if (local_90 != (long *)0x0) {
              puVar7 = (undefined1 *)0xf6c71d76f8b48eb9;
            }
          }
          else {
            plVar1 = plVar5;
            puVar7 = puVar6;
            if (puVar6 == &DAT_f615808441b1dafc) {
              iVar4 = FUN_00212730(0,1,&DAT_0021faf8);
              puVar7 = (undefined1 *)0x87b1ff2df68e38ae;
              if (iVar4 != 0) {
                puVar7 = (undefined1 *)0x125dd2cc844aecb4;
              }
            }
          }
        }
      }
      else if (puVar6 == (undefined1 *)0xf63b36e7a9d9f670) {
        puVar7 = (undefined1 *)0xf54c5df74fcabc41;
LAB_001de48c:
        DAT_0021eeec = DAT_0021eeec ^ 0x33;
        DAT_0021eeed = DAT_0021eeed ^ 0x33;
        DAT_0021fafe = '\x01';
      }
      else {
        plVar1 = local_90;
        puVar7 = (undefined1 *)0xbf711ec4fafe862e;
        if ((puVar6 != (undefined1 *)0xf6c71d76f8b48eb9) &&
           (plVar1 = plVar5, puVar7 = puVar6, puVar6 == (undefined1 *)0x52cde6c2dea1be4))
        goto LAB_001ddcc4;
      }
      goto LAB_001dd57c;
    }
    if (-0x579a549dca8d1cd0 < (long)puVar6) {
      if ((long)puVar6 < -0x408ee13b050179d2) {
        if (puVar6 == (undefined1 *)0xa865ab623572e331) {
          puVar7 = (undefined1 *)0x5039187a35dab08d;
          goto LAB_001de48c;
        }
        puVar7 = (undefined1 *)0xd222672a639a1d2e;
        if ((puVar6 == (undefined1 *)0xaa46adf0a78af8c7) ||
           (puVar7 = puVar6, puVar6 != (undefined1 *)0xba8fbc7d3623138d)) goto LAB_001dd57c;
      }
      else {
        if (puVar6 == (undefined1 *)0xbf711ec4fafe862e) {
          local_a4 = FUN_0010adcc(param_1,param_2,plVar5,unaff_x21);
          local_88 = plVar5;
          puVar7 = (undefined1 *)0x3b36a7a007b21166;
          if (*param_1 != 0) {
            puVar7 = (undefined1 *)0x1cba5f82f77e481f;
          }
          goto LAB_001dd57c;
        }
        if (puVar6 == (undefined1 *)0xc0f51250277e5cfd) {
          free(local_b8);
          puVar7 = (undefined1 *)0xe7622641fcb090c6;
          goto LAB_001dd57c;
        }
        if (puVar6 != (undefined1 *)0xc23f84056fd30bd6) goto LAB_001dd57c;
      }
LAB_001ddcc4:
      plVar1 = plVar5;
      puVar7 = (undefined1 *)0xc0f51250277e5cfd;
      goto LAB_001dd57c;
    }
    if (-0x71c5c29ef27b8352 < (long)puVar6) {
      if (puVar6 == (undefined1 *)0x8e3a3d610d847caf) {
        (*local_c8)(param_1,param_2,local_88,*unaff_x21,uStack_c0);
        local_b0 = *unaff_x21;
        bVar3 = *unaff_x21 == 0 || param_2 == (long *)0x0;
        puVar7 = (undefined1 *)0x36f07785a64d7584;
        puVar6 = (undefined1 *)0x960858df0b0de441;
        goto LAB_001dd574;
      }
      puVar7 = (undefined1 *)0x5039187a35dab08d;
      if ((puVar6 != (undefined1 *)0x940bdddd24f52ce3) &&
         (puVar7 = puVar6, puVar6 == (undefined1 *)0x960858df0b0de441)) {
LAB_001ddf08:
        puVar7 = (undefined1 *)0xc879bc31bae5bb14;
      }
      goto LAB_001dd57c;
    }
    puVar7 = (undefined1 *)0x58b842c6f86d5804;
    if ((puVar6 == (undefined1 *)0x8500be9b057d300e) ||
       (puVar7 = puVar6, puVar6 != (undefined1 *)0x87b1ff2df68e38ae)) goto LAB_001dd57c;
    puVar7 = (undefined1 *)0x34ee749c3dc3cf5c;
    bVar3 = DAT_0021fafd == '\0';
    puVar6 = (undefined1 *)0x696b554ab6b2c8c5;
  }
  else {
    if (0x418b7d3c908df893 < (long)puVar6) {
      if ((long)puVar6 < 0x696b554ab6b2c8c5) {
        if (0x5039187a35dab08c < (long)puVar6) {
          if (puVar6 == (undefined1 *)0x5039187a35dab08d) {
            DAT_0021fafc = 0;
            local_80 = (long *)FUN_001e4578(local_a0,&DAT_0021eeec);
            puVar7 = (undefined1 *)0x77f0428eaa711148;
            if (local_80 != (long *)0x0) {
              puVar7 = (undefined1 *)0xedbefc38c6cf9bfe;
            }
          }
          else {
            puVar7 = (undefined1 *)0x7e713fa43f38c582;
            if ((puVar6 != (undefined1 *)0x58b842c6f86d5804) &&
               (puVar7 = puVar6, puVar6 == (undefined1 *)0x5ece82223eee3411)) {
              puVar7 = (undefined1 *)0x58b842c6f86d5804;
            }
          }
          goto LAB_001dd57c;
        }
        puVar7 = (undefined1 *)0x8e3a3d610d847caf;
        if ((puVar6 == (undefined1 *)0x418b7d3c908df894) ||
           (puVar7 = puVar6, puVar6 != (undefined1 *)0x49b9b00eeff4c15a)) goto LAB_001dd57c;
        puVar7 = (undefined1 *)0x5ece82223eee3411;
        bVar3 = *local_98 == '\0';
        puVar6 = (undefined1 *)0x7d8bf94548220fb8;
      }
      else {
        if ((long)puVar6 < 0x77f0428eaa711148) {
          if (puVar6 == (undefined1 *)0x696b554ab6b2c8c5) {
            _DAT_0021e9b0 = _DAT_0021e9b0 ^ 0x1616161616161616;
            uRam000000000021e9b8 = uRam000000000021e9b8 ^ 0x1616161616161616;
            _DAT_0021e9c0 = _DAT_0021e9c0 ^ 0x1616161616161616;
            uRam000000000021e9c8 = uRam000000000021e9c8 ^ 0x1616161616161616;
            _DAT_0021e9d0 = _DAT_0021e9d0 ^ 0x1616161616161616;
            uRam000000000021e9d8 = uRam000000000021e9d8 ^ 0x1616161616161616;
            _DAT_0021e9e0 = _DAT_0021e9e0 ^ 0x1616161616161616;
            uRam000000000021e9e8 = uRam000000000021e9e8 ^ 0x1616161616161616;
            DAT_0021eee8 = DAT_0021eee8 ^ 0x16;
            _DAT_0021e9f0 = _DAT_0021e9f0 ^ 0x1616161616161616;
            uRam000000000021e9f8 = uRam000000000021e9f8 ^ 0x1616161616161616;
            _DAT_0021ea00 = _DAT_0021ea00 ^ 0x1616161616161616;
            uRam000000000021ea08 = uRam000000000021ea08 ^ 0x1616161616161616;
            DAT_0021fafd = '\x01';
            _DAT_0021ea10 = _DAT_0021ea10 ^ 0x1616161616161616;
            uRam000000000021ea18 = uRam000000000021ea18 ^ 0x1616161616161616;
            _DAT_0021ea20 = _DAT_0021ea20 ^ 0x1616161616161616;
            uRam000000000021ea28 = uRam000000000021ea28 ^ 0x1616161616161616;
            _DAT_0021ea30 = _DAT_0021ea30 ^ 0x1616161616161616;
            uRam000000000021ea38 = uRam000000000021ea38 ^ 0x1616161616161616;
            _DAT_0021ea40 = _DAT_0021ea40 ^ 0x1616161616161616;
            uRam000000000021ea48 = uRam000000000021ea48 ^ 0x1616161616161616;
            _DAT_0021ea50 = _DAT_0021ea50 ^ 0x1616161616161616;
            uRam000000000021ea58 = uRam000000000021ea58 ^ 0x1616161616161616;
            _DAT_0021ea60 = _DAT_0021ea60 ^ 0x1616161616161616;
            uRam000000000021ea68 = uRam000000000021ea68 ^ 0x1616161616161616;
            _DAT_0021ea70 = _DAT_0021ea70 ^ 0x1616161616161616;
            uRam000000000021ea78 = uRam000000000021ea78 ^ 0x1616161616161616;
            _DAT_0021ea80 = _DAT_0021ea80 ^ 0x1616161616161616;
            uRam000000000021ea88 = uRam000000000021ea88 ^ 0x1616161616161616;
            _DAT_0021ea90 = _DAT_0021ea90 ^ 0x1616161616161616;
            uRam000000000021ea98 = uRam000000000021ea98 ^ 0x1616161616161616;
            _DAT_0021eaa0 = _DAT_0021eaa0 ^ 0x1616161616161616;
            uRam000000000021eaa8 = uRam000000000021eaa8 ^ 0x1616161616161616;
            _DAT_0021eab0 = _DAT_0021eab0 ^ 0x1616161616161616;
            uRam000000000021eab8 = uRam000000000021eab8 ^ 0x1616161616161616;
            _DAT_0021eac0 = _DAT_0021eac0 ^ 0x1616161616161616;
            uRam000000000021eac8 = uRam000000000021eac8 ^ 0x1616161616161616;
            _DAT_0021ead0 = _DAT_0021ead0 ^ 0x1616161616161616;
            uRam000000000021ead8 = uRam000000000021ead8 ^ 0x1616161616161616;
            _DAT_0021eae0 = _DAT_0021eae0 ^ 0x1616161616161616;
            uRam000000000021eae8 = uRam000000000021eae8 ^ 0x1616161616161616;
            _DAT_0021eaf0 = _DAT_0021eaf0 ^ 0x1616161616161616;
            uRam000000000021eaf8 = uRam000000000021eaf8 ^ 0x1616161616161616;
            _DAT_0021eb00 = _DAT_0021eb00 ^ 0x1616161616161616;
            uRam000000000021eb08 = uRam000000000021eb08 ^ 0x1616161616161616;
            _DAT_0021eb10 = _DAT_0021eb10 ^ 0x1616161616161616;
            uRam000000000021eb18 = uRam000000000021eb18 ^ 0x1616161616161616;
            _DAT_0021eb20 = _DAT_0021eb20 ^ 0x1616161616161616;
            uRam000000000021eb28 = uRam000000000021eb28 ^ 0x1616161616161616;
            _DAT_0021eb30 = _DAT_0021eb30 ^ 0x1616161616161616;
            uRam000000000021eb38 = uRam000000000021eb38 ^ 0x1616161616161616;
            _DAT_0021eb40 = _DAT_0021eb40 ^ 0x1616161616161616;
            uRam000000000021eb48 = uRam000000000021eb48 ^ 0x1616161616161616;
            _DAT_0021eb50 = _DAT_0021eb50 ^ 0x1616161616161616;
            uRam000000000021eb58 = uRam000000000021eb58 ^ 0x1616161616161616;
            _DAT_0021eb60 = _DAT_0021eb60 ^ 0x1616161616161616;
            uRam000000000021eb68 = uRam000000000021eb68 ^ 0x1616161616161616;
            _DAT_0021eb70 = _DAT_0021eb70 ^ 0x1616161616161616;
            uRam000000000021eb78 = uRam000000000021eb78 ^ 0x1616161616161616;
            _DAT_0021eb80 = _DAT_0021eb80 ^ 0x1616161616161616;
            uRam000000000021eb88 = uRam000000000021eb88 ^ 0x1616161616161616;
            _DAT_0021eb90 = _DAT_0021eb90 ^ 0x1616161616161616;
            uRam000000000021eb98 = uRam000000000021eb98 ^ 0x1616161616161616;
            _DAT_0021eba0 = _DAT_0021eba0 ^ 0x1616161616161616;
            uRam000000000021eba8 = uRam000000000021eba8 ^ 0x1616161616161616;
            _DAT_0021ebb0 = _DAT_0021ebb0 ^ 0x1616161616161616;
            uRam000000000021ebb8 = uRam000000000021ebb8 ^ 0x1616161616161616;
            _DAT_0021ebc0 = _DAT_0021ebc0 ^ 0x1616161616161616;
            uRam000000000021ebc8 = uRam000000000021ebc8 ^ 0x1616161616161616;
            _DAT_0021ebd0 = _DAT_0021ebd0 ^ 0x1616161616161616;
            uRam000000000021ebd8 = uRam000000000021ebd8 ^ 0x1616161616161616;
            _DAT_0021ebe0 = _DAT_0021ebe0 ^ 0x1616161616161616;
            uRam000000000021ebe8 = uRam000000000021ebe8 ^ 0x1616161616161616;
            _DAT_0021ebf0 = _DAT_0021ebf0 ^ 0x1616161616161616;
            uRam000000000021ebf8 = uRam000000000021ebf8 ^ 0x1616161616161616;
            _DAT_0021ec00 = _DAT_0021ec00 ^ 0x1616161616161616;
            uRam000000000021ec08 = uRam000000000021ec08 ^ 0x1616161616161616;
            _DAT_0021ec10 = _DAT_0021ec10 ^ 0x1616161616161616;
            uRam000000000021ec18 = uRam000000000021ec18 ^ 0x1616161616161616;
            _DAT_0021ec20 = _DAT_0021ec20 ^ 0x1616161616161616;
            uRam000000000021ec28 = uRam000000000021ec28 ^ 0x1616161616161616;
            _DAT_0021ec30 = _DAT_0021ec30 ^ 0x1616161616161616;
            uRam000000000021ec38 = uRam000000000021ec38 ^ 0x1616161616161616;
            _DAT_0021ec40 = _DAT_0021ec40 ^ 0x1616161616161616;
            uRam000000000021ec48 = uRam000000000021ec48 ^ 0x1616161616161616;
            _DAT_0021ec50 = _DAT_0021ec50 ^ 0x1616161616161616;
            uRam000000000021ec58 = uRam000000000021ec58 ^ 0x1616161616161616;
            _DAT_0021ec60 = _DAT_0021ec60 ^ 0x1616161616161616;
            uRam000000000021ec68 = uRam000000000021ec68 ^ 0x1616161616161616;
            _DAT_0021ec70 = _DAT_0021ec70 ^ 0x1616161616161616;
            uRam000000000021ec78 = uRam000000000021ec78 ^ 0x1616161616161616;
            _DAT_0021ec80 = _DAT_0021ec80 ^ 0x1616161616161616;
            uRam000000000021ec88 = uRam000000000021ec88 ^ 0x1616161616161616;
            _DAT_0021ec90 = _DAT_0021ec90 ^ 0x1616161616161616;
            uRam000000000021ec98 = uRam000000000021ec98 ^ 0x1616161616161616;
            _DAT_0021eca0 = _DAT_0021eca0 ^ 0x1616161616161616;
            uRam000000000021eca8 = uRam000000000021eca8 ^ 0x1616161616161616;
            _DAT_0021ecb0 = _DAT_0021ecb0 ^ 0x1616161616161616;
            uRam000000000021ecb8 = uRam000000000021ecb8 ^ 0x1616161616161616;
            _DAT_0021ecc0 = _DAT_0021ecc0 ^ 0x1616161616161616;
            uRam000000000021ecc8 = uRam000000000021ecc8 ^ 0x1616161616161616;
            _DAT_0021ecd0 = _DAT_0021ecd0 ^ 0x1616161616161616;
            uRam000000000021ecd8 = uRam000000000021ecd8 ^ 0x1616161616161616;
            _DAT_0021ece0 = _DAT_0021ece0 ^ 0x1616161616161616;
            uRam000000000021ece8 = uRam000000000021ece8 ^ 0x1616161616161616;
            _DAT_0021ecf0 = _DAT_0021ecf0 ^ 0x1616161616161616;
            uRam000000000021ecf8 = uRam000000000021ecf8 ^ 0x1616161616161616;
            _DAT_0021ed00 = _DAT_0021ed00 ^ 0x1616161616161616;
            uRam000000000021ed08 = uRam000000000021ed08 ^ 0x1616161616161616;
            _DAT_0021ed10 = _DAT_0021ed10 ^ 0x1616161616161616;
            uRam000000000021ed18 = uRam000000000021ed18 ^ 0x1616161616161616;
            _DAT_0021ed20 = _DAT_0021ed20 ^ 0x1616161616161616;
            uRam000000000021ed28 = uRam000000000021ed28 ^ 0x1616161616161616;
            _DAT_0021ed30 = _DAT_0021ed30 ^ 0x1616161616161616;
            uRam000000000021ed38 = uRam000000000021ed38 ^ 0x1616161616161616;
            _DAT_0021ed40 = _DAT_0021ed40 ^ 0x1616161616161616;
            uRam000000000021ed48 = uRam000000000021ed48 ^ 0x1616161616161616;
            _DAT_0021ed50 = _DAT_0021ed50 ^ 0x1616161616161616;
            uRam000000000021ed58 = uRam000000000021ed58 ^ 0x1616161616161616;
            _DAT_0021ed60 = _DAT_0021ed60 ^ 0x1616161616161616;
            uRam000000000021ed68 = uRam000000000021ed68 ^ 0x1616161616161616;
            _DAT_0021ed70 = _DAT_0021ed70 ^ 0x1616161616161616;
            uRam000000000021ed78 = uRam000000000021ed78 ^ 0x1616161616161616;
            _DAT_0021ed80 = _DAT_0021ed80 ^ 0x1616161616161616;
            uRam000000000021ed88 = uRam000000000021ed88 ^ 0x1616161616161616;
            _DAT_0021ed90 = _DAT_0021ed90 ^ 0x1616161616161616;
            uRam000000000021ed98 = uRam000000000021ed98 ^ 0x1616161616161616;
            _DAT_0021eda0 = _DAT_0021eda0 ^ 0x1616161616161616;
            uRam000000000021eda8 = uRam000000000021eda8 ^ 0x1616161616161616;
            _DAT_0021edb0 = _DAT_0021edb0 ^ 0x1616161616161616;
            uRam000000000021edb8 = uRam000000000021edb8 ^ 0x1616161616161616;
            _DAT_0021edc0 = _DAT_0021edc0 ^ 0x1616161616161616;
            uRam000000000021edc8 = uRam000000000021edc8 ^ 0x1616161616161616;
            _DAT_0021edd0 = _DAT_0021edd0 ^ 0x1616161616161616;
            uRam000000000021edd8 = uRam000000000021edd8 ^ 0x1616161616161616;
            _DAT_0021ede0 = _DAT_0021ede0 ^ 0x1616161616161616;
            uRam000000000021ede8 = uRam000000000021ede8 ^ 0x1616161616161616;
            _DAT_0021edf0 = _DAT_0021edf0 ^ 0x1616161616161616;
            uRam000000000021edf8 = uRam000000000021edf8 ^ 0x1616161616161616;
            _DAT_0021ee00 = _DAT_0021ee00 ^ 0x1616161616161616;
            uRam000000000021ee08 = uRam000000000021ee08 ^ 0x1616161616161616;
            _DAT_0021ee10 = _DAT_0021ee10 ^ 0x1616161616161616;
            uRam000000000021ee18 = uRam000000000021ee18 ^ 0x1616161616161616;
            _DAT_0021ee20 = _DAT_0021ee20 ^ 0x1616161616161616;
            uRam000000000021ee28 = uRam000000000021ee28 ^ 0x1616161616161616;
            _DAT_0021ee30 = _DAT_0021ee30 ^ 0x1616161616161616;
            uRam000000000021ee38 = uRam000000000021ee38 ^ 0x1616161616161616;
            _DAT_0021ee40 = _DAT_0021ee40 ^ 0x1616161616161616;
            uRam000000000021ee48 = uRam000000000021ee48 ^ 0x1616161616161616;
            _DAT_0021ee50 = _DAT_0021ee50 ^ 0x1616161616161616;
            uRam000000000021ee58 = uRam000000000021ee58 ^ 0x1616161616161616;
            _DAT_0021ee60 = _DAT_0021ee60 ^ 0x1616161616161616;
            uRam000000000021ee68 = uRam000000000021ee68 ^ 0x1616161616161616;
            _DAT_0021ee70 = _DAT_0021ee70 ^ 0x1616161616161616;
            uRam000000000021ee78 = uRam000000000021ee78 ^ 0x1616161616161616;
            _DAT_0021ee80 = _DAT_0021ee80 ^ 0x1616161616161616;
            uRam000000000021ee88 = uRam000000000021ee88 ^ 0x1616161616161616;
            _DAT_0021ee90 = _DAT_0021ee90 ^ 0x1616161616161616;
            uRam000000000021ee98 = uRam000000000021ee98 ^ 0x1616161616161616;
            _DAT_0021eea0 = _DAT_0021eea0 ^ 0x1616161616161616;
            uRam000000000021eea8 = uRam000000000021eea8 ^ 0x1616161616161616;
            _DAT_0021eeb0 = _DAT_0021eeb0 ^ 0x1616161616161616;
            uRam000000000021eeb8 = uRam000000000021eeb8 ^ 0x1616161616161616;
            _DAT_0021eec0 = _DAT_0021eec0 ^ 0x1616161616161616;
            uRam000000000021eec8 = uRam000000000021eec8 ^ 0x1616161616161616;
            _DAT_0021eed0 = _DAT_0021eed0 ^ 0x1616161616161616;
            uRam000000000021eed8 = uRam000000000021eed8 ^ 0x1616161616161616;
            DAT_0021eee0 = DAT_0021eee0 ^ 0x1616161616161616;
            puVar7 = (undefined1 *)0x353e7cd16df664a2;
          }
          else if (puVar6 == (undefined1 *)0x6b5051bf1aed633d) {
            *param_1 = 2;
            puVar7 = (undefined1 *)0xe7622641fcb090c6;
          }
          else if (puVar6 == (undefined1 *)0x75df443d79079721) {
            puVar7 = (undefined1 *)0x7e713fa43f38c582;
          }
          goto LAB_001dd57c;
        }
        puVar7 = (undefined1 *)0xc0f51250277e5cfd;
        if (puVar6 == (undefined1 *)0x77f0428eaa711148) goto LAB_001dd57c;
        if (puVar6 != (undefined1 *)0x7d8bf94548220fb8) {
          puVar7 = puVar6;
          if (puVar6 == (undefined1 *)0x7e713fa43f38c582) {
            iVar4 = FUN_00212730(0,1,&DAT_0021fafc);
            puVar7 = (undefined1 *)0xe48eaf6f29f5caa2;
            if (iVar4 != 0) {
              puVar7 = (undefined1 *)0x75df443d79079721;
            }
          }
          goto LAB_001dd57c;
        }
        FUN_0018a758(param_1,param_2,param_3,local_88,unaff_x21);
        bVar3 = *param_1 == 0;
        puVar7 = (undefined1 *)0x418b7d3c908df894;
        puVar6 = (undefined1 *)0xba8fbc7d3623138d;
      }
LAB_001ddf60:
      if (!bVar3) {
        puVar7 = puVar6;
      }
      goto LAB_001dd57c;
    }
    if ((long)puVar6 < 0x2ce2edddaf334d81) {
      if ((long)puVar6 < 0x1cba5f82f77e481f) {
        puVar7 = &DAT_f615808441b1dafc;
        if ((puVar6 != (undefined1 *)0x887e73b2c28c6a1) &&
           (puVar7 = puVar6, puVar6 == (undefined1 *)0x125dd2cc844aecb4)) {
          puVar7 = &DAT_f615808441b1dafc;
        }
        goto LAB_001dd57c;
      }
      puVar7 = (undefined1 *)0xc0f51250277e5cfd;
      if (((puVar6 == (undefined1 *)0x1cba5f82f77e481f) ||
          (puVar7 = (undefined1 *)0xf54c5df74fcabc41, puVar6 == (undefined1 *)0x22f3f9cf91cbb9a6))
         || (puVar7 = puVar6, puVar6 != (undefined1 *)0x29ff0ff794febe2e)) goto LAB_001dd57c;
      puVar7 = (undefined1 *)0x22f3f9cf91cbb9a6;
      bVar3 = DAT_0021fafe == '\0';
      puVar6 = (undefined1 *)0xf63b36e7a9d9f670;
    }
    else {
      if ((long)puVar6 < 0x353e7cd16df664a2) {
        puVar7 = (undefined1 *)0xd222672a639a1d2e;
        if (((puVar6 != (undefined1 *)0x2ce2edddaf334d81) &&
            (puVar7 = (undefined1 *)0x8e3a3d610d847caf, puVar6 != (undefined1 *)0x312910f1547c7c77))
           && (puVar7 = puVar6, puVar6 == (undefined1 *)0x34ee749c3dc3cf5c)) {
          puVar7 = (undefined1 *)0x353e7cd16df664a2;
        }
        goto LAB_001dd57c;
      }
      if (puVar6 == (undefined1 *)0x353e7cd16df664a2) {
        DAT_0021faf8 = 0;
        local_98 = (char *)((long)plVar2 + -0x10);
        unaff_x21 = (long *)((long)plVar2 + -0x20);
        *(undefined1 *)((long)plVar2 + -0x10) = 0;
        *(undefined8 *)((long)plVar2 + -0x20) = 0;
        local_a0 = (undefined1 *)((long)plVar2 + -0x30);
        local_b8 = (void *)FUN_001e5154(&DAT_0021e9b0);
        *(void **)((long)plVar2 + -0x30) = local_b8;
        puVar7 = (undefined1 *)0x6b5051bf1aed633d;
        if (local_b8 != (void *)0x0) {
          puVar7 = (undefined1 *)0x2ce2edddaf334d81;
        }
        plVar2 = (long *)((long)plVar2 + -0x30);
        goto LAB_001dd57c;
      }
      if (puVar6 == (undefined1 *)0x36f07785a64d7584) {
        (**(code **)(*param_2 + 0xb8))(param_2,local_b0);
        goto LAB_001ddf08;
      }
      if (puVar6 != (undefined1 *)0x3b36a7a007b21166) goto LAB_001dd57c;
      bVar3 = (local_a4 & 1) == 0;
      puVar7 = (undefined1 *)0x312910f1547c7c77;
      puVar6 = (undefined1 *)0xc89737e2f8768a05;
    }
  }
LAB_001dd574:
  if (bVar3) {
    puVar7 = puVar6;
  }
  goto LAB_001dd57c;
}

