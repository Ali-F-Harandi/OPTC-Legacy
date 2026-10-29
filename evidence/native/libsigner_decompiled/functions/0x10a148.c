// rea decompile_all
// name: FUN_0010a148
// address: 0x10a148
// body: available
// range: 0x10a148-0x10adab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10ada8 to 0x212d20 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a148(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  undefined8 *unaff_x20;
  undefined8 *unaff_x24;
  int *unaff_x27;
  undefined1 auStack_d0 [8];
  long local_c8;
  void *local_c0;
  long local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  long local_88;
  
  local_b0 = param_1;
  local_c8 = tpidr_el0;
  local_88 = *(long *)(local_c8 + 0x28);
  local_b8 = param_2 + 0x20;
  puVar5 = (undefined8 *)auStack_d0;
  puVar4 = (undefined1 *)0x887e73b2c28c6a1;
LAB_0010a22c:
  do {
    while (puVar11 = puVar4, puVar3 = local_90, puVar2 = local_98, puVar4 = puVar11,
          (long)puVar11 < 0x125dd2cc844aecb4) {
      if ((long)puVar11 < -0x3768c81d078975fb) {
        if ((long)puVar11 < -0x45704382c9dcec73) {
          if ((long)puVar11 < -0x579a549dca8d1ccf) {
            if (puVar11 == (undefined1 *)0x8e3a3d610d847caf) {
              puVar4 = (undefined1 *)0x960858df0b0de441;
              if (DAT_0021f0ea == '\0') {
                puVar4 = (undefined1 *)0xf54c5df74fcabc41;
              }
            }
            else if (puVar11 == (undefined1 *)0x960858df0b0de441) {
              puVar4 = (undefined1 *)0x6b5051bf1aed633d;
            }
          }
          else if (puVar11 == (undefined1 *)0xa865ab623572e331) {
            FUN_002083ac(local_b8,0x39);
            local_a8 = *(ulong *)(param_2 + 0x238) | 1;
LAB_0010aacc:
            puVar4 = (undefined1 *)0x5039187a35dab08d;
          }
          else if (puVar11 == (undefined1 *)0xaa46adf0a78af8c7) {
            iVar6 = FUN_00212730(0,1,&DAT_0021f0e4);
            puVar4 = (undefined1 *)0x8e3a3d610d847caf;
            if (iVar6 != 0) {
              puVar4 = (undefined1 *)0xf63b36e7a9d9f670;
            }
          }
        }
        else if ((long)puVar11 < -0x3dc07bfa902cf42a) {
          if (puVar11 == (undefined1 *)0xba8fbc7d3623138d) {
            puVar4 = (undefined1 *)0x418b7d3c908df894;
            if (DAT_0021f0e9 == '\0') {
              puVar4 = (undefined1 *)0x696b554ab6b2c8c5;
            }
          }
          else if (puVar11 == (undefined1 *)0xbf711ec4fafe862e) {
            puVar4 = (undefined1 *)0xa865ab623572e331;
          }
        }
        else if (puVar11 == (undefined1 *)0xc23f84056fd30bd6) {
          DAT_0021bdd9 = DAT_0021bdd9 ^ 0xbc;
          DAT_0021bdd8 = DAT_0021bdd8 ^ 0xbc;
          DAT_0021bddb = DAT_0021bddb ^ 0xbc;
          DAT_0021bdda = DAT_0021bdda ^ 0xbc;
          DAT_0021bddc = DAT_0021bddc ^ 0xbc;
          DAT_0021bdd0 = DAT_0021bdd0 ^ 0xbcbcbcbcbcbcbcbc;
          puVar4 = (undefined1 *)0xf6c71d76f8b48eb9;
        }
        else if (puVar11 == (undefined1 *)0xc879bc31bae5bb14) {
          puVar4 = (undefined1 *)0x52cde6c2dea1be4;
        }
      }
      else if ((long)puVar11 < -0x9ea7f7bbe4e2504) {
        if ((long)puVar11 < -0x124103c739306402) {
          if (puVar11 == (undefined1 *)0xc89737e2f8768a05) {
            DAT_0021bdf8 = DAT_0021bdf8 ^ 0x9c9c9c9c9c9c9c9c;
            DAT_0021f0eb = '\x01';
            puVar4 = (undefined1 *)0x52cde6c2dea1be4;
          }
          else if (puVar11 == (undefined1 *)0xd222672a639a1d2e) {
            puVar4 = (undefined1 *)0xaa46adf0a78af8c7;
          }
        }
        else {
          puVar4 = (undefined1 *)0x7d8bf94548220fb8;
          if ((puVar11 != (undefined1 *)0xedbefc38c6cf9bfe) &&
             (puVar4 = puVar11, puVar11 == (undefined1 *)0xf54c5df74fcabc41)) {
            _DAT_0021bdb0 = _DAT_0021bdb0 ^ 0xbcbcbcbcbcbcbcbc;
            uRam000000000021bdb8 = uRam000000000021bdb8 ^ 0xbcbcbcbcbcbcbcbc;
            _DAT_0021bdc0 = _DAT_0021bdc0 ^ 0xbcbcbcbcbcbcbcbc;
            uRam000000000021bdc8 = uRam000000000021bdc8 ^ 0xbcbcbcbcbcbcbcbc;
            DAT_0021f0ea = '\x01';
            puVar4 = (undefined1 *)0xc23f84056fd30bd6;
          }
        }
      }
      else if ((long)puVar11 < -0x938e289074b7147) {
        if (puVar11 == &DAT_f615808441b1dafc) {
          iVar6 = FUN_00212730(0,1,&DAT_0021f0e0);
          puVar4 = (undefined1 *)0xba8fbc7d3623138d;
          if (iVar6 != 0) {
            puVar4 = (undefined1 *)0x125dd2cc844aecb4;
          }
        }
        else if (puVar11 == (undefined1 *)0xf63b36e7a9d9f670) {
          puVar4 = (undefined1 *)0xaa46adf0a78af8c7;
        }
      }
      else if (puVar11 == (undefined1 *)0xf6c71d76f8b48eb9) {
        DAT_0021bdf1 = DAT_0021bdf1 ^ 0xbc;
        DAT_0021bdf0 = DAT_0021bdf0 ^ 0xbc;
        DAT_0021bdf2 = DAT_0021bdf2 ^ 0xbc;
        DAT_0021bdf4 = DAT_0021bdf4 ^ 0xbc;
        DAT_0021bdf3 = DAT_0021bdf3 ^ 0xbc;
        DAT_0021bdf5 = DAT_0021bdf5 ^ 0xbc;
        _DAT_0021bde0 = _DAT_0021bde0 ^ 0xbcbcbcbcbcbcbcbc;
        uRam000000000021bde8 = uRam000000000021bde8 ^ 0xbcbcbcbcbcbcbcbc;
        puVar4 = (undefined1 *)0x6b5051bf1aed633d;
      }
      else if (puVar11 == (undefined1 *)0x52cde6c2dea1be4) {
        DAT_0021f0e8 = 0;
        lVar8 = *local_a0;
        uVar9 = *local_90;
        uVar10 = *local_98;
        puVar5[-2] = unaff_x27;
        uVar7 = FUN_00208640(&DAT_0021bdf8,lVar8,unaff_x24,1,unaff_x20,1,uVar9,uVar10);
        puVar4 = (undefined1 *)0x5ece82223eee3411;
        if ((uVar7 & 1) == 0) {
          puVar4 = (undefined1 *)0x49b9b00eeff4c15a;
        }
      }
      else if (puVar11 == (undefined1 *)0x887e73b2c28c6a1) {
        puVar4 = &DAT_f615808441b1dafc;
      }
    }
    if (0x5039187a35dab08c < (long)puVar11) {
      if ((long)puVar11 < 0x6b5051bf1aed633d) {
        if ((long)puVar11 < 0x5ece82223eee3411) {
          if (puVar11 == (undefined1 *)0x5039187a35dab08d) {
            uVar9 = *local_90;
            *(ulong *)(param_2 + 0x238) = local_a8 | 0x200080000000000;
            FUN_001a5734(uVar9,*local_98);
            local_c0 = (void *)*local_a0;
            puVar4 = (undefined1 *)0xedbefc38c6cf9bfe;
            if ((void *)*local_a0 != (void *)0x0) {
              puVar4 = (undefined1 *)0x77f0428eaa711148;
            }
          }
          else if (puVar11 == (undefined1 *)0x58b842c6f86d5804) {
            puVar4 = (undefined1 *)0x75df443d79079721;
            if (*unaff_x27 != 0) {
              puVar4 = (undefined1 *)0x7e713fa43f38c582;
            }
          }
        }
        else if (puVar11 == (undefined1 *)0x5ece82223eee3411) {
          FUN_002083ac(local_b8,0x2b);
          *(ulong *)(param_2 + 0x238) = *(ulong *)(param_2 + 0x238) | 1;
          puVar4 = (undefined1 *)0x58b842c6f86d5804;
        }
        else if (puVar11 == (undefined1 *)0x696b554ab6b2c8c5) {
          DAT_0021bd88 = DAT_0021bd88 ^ 0x6d;
          DAT_0021bd8a = DAT_0021bd8a ^ 0x6d;
          DAT_0021bd89 = DAT_0021bd89 ^ 0x6d;
          DAT_0021bd80 = DAT_0021bd80 ^ 0x6d6d6d6d6d6d6d6d;
          DAT_0021f0e9 = '\x01';
          puVar4 = (undefined1 *)0x353e7cd16df664a2;
        }
      }
      else if ((long)puVar11 < 0x77f0428eaa711148) {
        if (puVar11 == (undefined1 *)0x6b5051bf1aed633d) {
          DAT_0021f0e4 = 0;
          *unaff_x20 = 5;
          *(undefined4 *)(unaff_x24 + 1) = 2;
          uVar9 = local_b0;
          *(undefined4 *)(unaff_x20 + 1) = 0;
          *unaff_x24 = 0x2600000004;
          unaff_x24[2] = &PTR_DAT_0021bd90;
          unaff_x24[3] = 3;
          unaff_x20[2] = &PTR_DAT_0021bd90;
          unaff_x20[3] = 3;
          FUN_001a1d18(unaff_x27,uVar9,puVar3,0x14,puVar2);
          puVar4 = (undefined1 *)0x1cba5f82f77e481f;
          if (*unaff_x27 != 0) {
            puVar4 = (undefined1 *)0xbf711ec4fafe862e;
          }
        }
        else if (puVar11 == (undefined1 *)0x75df443d79079721) {
          local_a8 = *(ulong *)(param_2 + 0x238);
          goto LAB_0010aacc;
        }
      }
      else if (puVar11 == (undefined1 *)0x77f0428eaa711148) {
        free(local_c0);
        puVar4 = (undefined1 *)0x7d8bf94548220fb8;
      }
      else {
        puVar4 = (undefined1 *)0xa865ab623572e331;
        if ((puVar11 != (undefined1 *)0x7e713fa43f38c582) &&
           (puVar4 = puVar11, puVar11 == (undefined1 *)0x7d8bf94548220fb8)) {
          if (*(long *)(local_c8 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
      goto LAB_0010a22c;
    }
    if ((long)puVar11 < 0x353e7cd16df664a2) {
      if ((long)puVar11 < 0x2ce2edddaf334d81) {
        puVar4 = &DAT_f615808441b1dafc;
        if ((puVar11 != (undefined1 *)0x125dd2cc844aecb4) &&
           (puVar4 = puVar11, puVar11 == (undefined1 *)0x1cba5f82f77e481f)) {
          puVar4 = (undefined1 *)0x3b36a7a007b21166;
        }
      }
      else {
        puVar4 = (undefined1 *)0xa865ab623572e331;
        if ((puVar11 != (undefined1 *)0x2ce2edddaf334d81) &&
           (puVar4 = puVar11, puVar11 == (undefined1 *)0x312910f1547c7c77)) {
          puVar4 = (undefined1 *)0x3b36a7a007b21166;
        }
      }
    }
    else if ((long)puVar11 < 0x3b36a7a007b21166) {
      if (puVar11 == (undefined1 *)0x353e7cd16df664a2) {
        unaff_x27 = (int *)(puVar5 + -2);
        DAT_0021f0e0 = 0;
        local_a0 = puVar5 + -4;
        local_90 = puVar5 + -6;
        local_98 = puVar5 + -8;
        unaff_x24 = puVar5 + -0xc;
        unaff_x20 = puVar5 + -0x10;
        uVar9 = *(undefined8 *)(param_2 + 0x10);
        *(undefined4 *)(puVar5 + -2) = 0;
        puVar5[-4] = 0;
        puVar5[-6] = 0;
        puVar5[-8] = 0;
        FUN_0018b510(unaff_x27,local_b0,uVar9,&DAT_0021bd80);
        piVar1 = (int *)(puVar5 + -2);
        puVar5 = unaff_x20;
        puVar4 = (undefined1 *)0xd222672a639a1d2e;
        if (*piVar1 != 0) {
          puVar4 = (undefined1 *)0x2ce2edddaf334d81;
        }
      }
      else if (puVar11 == (undefined1 *)0x36f07785a64d7584) {
        puVar4 = (undefined1 *)0xc879bc31bae5bb14;
        if (DAT_0021f0eb == '\0') {
          puVar4 = (undefined1 *)0xc89737e2f8768a05;
        }
      }
    }
    else if (puVar11 == (undefined1 *)0x3b36a7a007b21166) {
      iVar6 = FUN_00212730(0,1,&DAT_0021f0e8);
      puVar4 = (undefined1 *)0x36f07785a64d7584;
      if (iVar6 != 0) {
        puVar4 = (undefined1 *)0x312910f1547c7c77;
      }
    }
    else {
      puVar4 = (undefined1 *)0x353e7cd16df664a2;
      if ((puVar11 != (undefined1 *)0x418b7d3c908df894) &&
         (puVar4 = puVar11, puVar11 == (undefined1 *)0x49b9b00eeff4c15a)) {
        puVar4 = (undefined1 *)0x58b842c6f86d5804;
      }
    }
  } while( true );
}

