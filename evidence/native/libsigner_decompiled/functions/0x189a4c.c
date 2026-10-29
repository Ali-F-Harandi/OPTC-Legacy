// rea decompile_all
// name: FUN_00189a4c
// address: 0x189a4c
// body: available
// range: 0x189a4c-0x18a757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00189a4c(int *param_1,long *param_2,long param_3,long param_4,undefined1 *param_5)

{
  long lVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long unaff_x24;
  byte unaff_w26;
  long unaff_x28;
  long local_a8;
  long local_88;
  int local_7c;
  long local_78;
  
  lVar1 = -0x2623773697ce2f56;
  if (param_4 == 0 || param_3 == 0) {
    lVar1 = -0xe1b00f7d7270e57;
  }
  lVar5 = -0x72d5b2dc4548f4e5;
LAB_00189b2c:
  while (lVar4 = lVar5, lVar5 = lVar4, lVar4 < -0xe1b00f7d7270e57) {
    if (lVar4 < -0x4fca7899ba80477b) {
      if (lVar4 < -0x6cde44c0d957bcbf) {
        if (lVar4 < -0x741f3f9b9c8e017e) {
          lVar5 = -0x64d7f846fafd15e9;
          if ((lVar4 != -0x7c1629b7e1ab1463) && (lVar5 = lVar4, lVar4 == -0x790ef64f56af8f9f)) {
            lVar5 = 0x4bc7ca523bdd439e;
          }
        }
        else if (lVar4 == -0x741f3f9b9c8e017e) {
          lVar5 = -0x4adf6fd3f1f8a6fe;
          if (local_78 != 0) {
            lVar5 = 0x48e2320e4e47af28;
          }
        }
        else {
          lVar5 = lVar1;
          if ((lVar4 != -0x72d5b2dc4548f4e5) && (lVar5 = lVar4, lVar4 == -0x71f1103100ca2c32)) {
            lVar5 = -0x1e203c4aceef0b3f;
            if (DAT_0021f9ff == '\0') {
              lVar5 = 0x2969b6bc69e32041;
            }
          }
        }
      }
      else if (lVar4 < -0x5a275988820244ab) {
        if (lVar4 == -0x6cde44c0d957bcbf) {
          DAT_0021f8dc = 0;
          lVar5 = -0x1f66f0e1a299fcd5;
        }
        else {
          if (lVar4 == -0x64d7f846fafd15e9) {
            (**(code **)(*param_2 + 0x80))(param_2);
            (**(code **)(*param_2 + 0x88))(param_2);
            goto LAB_0018a0a8;
          }
          if (lVar4 == -0x64a14186f99a34cd) {
            return;
          }
        }
      }
      else if (lVar4 == -0x5a275988820244ab) {
        *param_1 = local_7c;
        lVar5 = -0x6b0b3269d90ff18;
        unaff_x20 = unaff_x24;
        unaff_w26 = param_2 != (long *)0x0;
      }
      else {
        lVar5 = 0xe21fedf0419cc21;
        if ((lVar4 != -0x567bacb4e5314217) && (lVar5 = lVar4, lVar4 == -0x538353fa8fdb8a5d)) {
          lVar5 = -0x6cde44c0d957bcbf;
        }
      }
    }
    else if (lVar4 < -0x2623773697ce2f56) {
      if (lVar4 < -0x4214afa598482cc0) {
        if (lVar4 == -0x4fca7899ba80477b) {
          DAT_0021dff0 = ~DAT_0021dff0;
          DAT_0021dff1 = ~DAT_0021dff1;
          DAT_0021dff2 = ~DAT_0021dff2;
          DAT_0021dff4 = ~DAT_0021dff4;
          DAT_0021dff3 = ~DAT_0021dff3;
          DAT_0021dff5 = ~DAT_0021dff5;
          _DAT_0021dfe0 =
               CONCAT17(~(byte)((ulong)_DAT_0021dfe0 >> 0x38),
                        CONCAT16(~(byte)((ulong)_DAT_0021dfe0 >> 0x30),
                                 CONCAT15(~(byte)((ulong)_DAT_0021dfe0 >> 0x28),
                                          CONCAT14(~(byte)((ulong)_DAT_0021dfe0 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)_DAT_0021dfe0 >> 0x18),
                                                            CONCAT12(~(byte)((ulong)_DAT_0021dfe0 >>
                                                                            0x10),
                                                                     CONCAT11(~(byte)((ulong)
                                                  _DAT_0021dfe0 >> 8),~(byte)_DAT_0021dfe0)))))));
          uRam000000000021dfe8 =
               CONCAT17(~(byte)((ulong)uRam000000000021dfe8 >> 0x38),
                        CONCAT16(~(byte)((ulong)uRam000000000021dfe8 >> 0x30),
                                 CONCAT15(~(byte)((ulong)uRam000000000021dfe8 >> 0x28),
                                          CONCAT14(~(byte)((ulong)uRam000000000021dfe8 >> 0x20),
                                                   CONCAT13(~(byte)((ulong)uRam000000000021dfe8 >>
                                                                   0x18),
                                                            CONCAT12(~(byte)((ulong)
                                                  uRam000000000021dfe8 >> 0x10),
                                                  CONCAT11(~(byte)((ulong)uRam000000000021dfe8 >> 8)
                                                           ,~(byte)uRam000000000021dfe8)))))));
          DAT_0021fa00 = '\x01';
          lVar5 = -0x6cde44c0d957bcbf;
        }
        else if (lVar4 == -0x4adf6fd3f1f8a6fe) {
          unaff_w26 = 1;
          lVar5 = -0x6b0b3269d90ff18;
          unaff_x20 = unaff_x28;
LAB_0018a530:
          *param_1 = 0x21;
        }
      }
      else if (lVar4 == -0x4214afa598482cc0) {
        local_78 = (**(code **)(*param_2 + 0x538))(param_2,param_4);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar5 = -0x741f3f9b9c8e017e;
        if (lVar4 != 0) {
          lVar5 = 0x692695899e1ee24e;
        }
      }
      else {
        lVar5 = -0x1f66f0e1a299fcd5;
        if ((lVar4 != -0x3abd9295c1093e37) && (lVar5 = lVar4, lVar4 == -0x379fb395c80eae78)) {
          lVar5 = 0x4bc7ca523bdd439e;
        }
      }
    }
    else if (lVar4 < -0x1f66f0e1a299fcd5) {
      if (lVar4 == -0x2623773697ce2f56) {
        unaff_x28 = (**(code **)(*param_2 + 0xf8))(param_2,param_3);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar5 = 0x3a9954ad82ffa048;
        if (lVar4 != 0) {
          lVar5 = 0x4d5d29824f4967f5;
        }
      }
      else if (lVar4 == -0x1fede5bdb1d15a28) {
        lVar5 = -0x1ce5e6a4847571dc;
        if (local_88 != 0) {
          lVar5 = -0x4214afa598482cc0;
        }
      }
    }
    else if (lVar4 == -0x1f66f0e1a299fcd5) {
      iVar3 = FUN_00212730(0,1,&DAT_0021f8d8);
      lVar5 = -0x71f1103100ca2c32;
      if (iVar3 != 0) {
        lVar5 = -0x3abd9295c1093e37;
      }
    }
    else {
      lVar5 = 0x722232e8301a113f;
      if ((lVar4 != -0x1e203c4aceef0b3f) && (lVar5 = lVar4, lVar4 == -0x1ce5e6a4847571dc)) {
LAB_0018a0a8:
        local_7c = 0x11;
        lVar5 = -0x5a275988820244ab;
        unaff_x24 = unaff_x28;
      }
    }
  }
  if (lVar4 < 0x3a9954ad82ffa048) {
    if (0xe21fedf0419cc20 < lVar4) {
      if (lVar4 < 0x2969b6bc69e32041) {
        if (lVar4 == 0xe21fedf0419cc21) {
          lVar5 = 0x4111780a0b694329;
          if (*param_1 != 0) {
            lVar5 = 0x4272471328575692;
          }
        }
        else if (lVar4 == 0x27a4ecd09cc7862b) {
          (**(code **)(*param_2 + 0xb8))(param_2,local_a8);
          lVar5 = 0xe21fedf0419cc21;
        }
      }
      else if (lVar4 == 0x2969b6bc69e32041) {
        DAT_0021dfd0 = DAT_0021dfd0 ^ 0x3b;
        DAT_0021dfd1 = DAT_0021dfd1 ^ 0x3b;
        DAT_0021dfd2 = DAT_0021dfd2 ^ 0x3b;
        DAT_0021dfd3 = DAT_0021dfd3 ^ 0x3b;
        DAT_0021dfc8 = DAT_0021dfc8 ^ 0x3b3b3b3b3b3b3b3b;
        DAT_0021f9ff = '\x01';
        lVar5 = 0x722232e8301a113f;
      }
      else if (lVar4 == 0x2b796aef8b8ff357) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f8dc);
        lVar5 = 0x2e664d2afca28034;
        if (iVar3 != 0) {
          lVar5 = 0x6be1775ce9fb66b;
        }
      }
      else if (lVar4 == 0x2e664d2afca28034) {
        lVar5 = -0x538353fa8fdb8a5d;
        if (DAT_0021fa00 == '\0') {
          lVar5 = -0x4fca7899ba80477b;
        }
      }
      goto LAB_00189b2c;
    }
    if (lVar4 < -0x6b0b3269d90ff18) {
      if (lVar4 == -0xe1b00f7d7270e57) {
        unaff_x24 = 0;
        local_7c = 3;
        lVar5 = -0x5a275988820244ab;
      }
      else if (lVar4 == -0xd077a2d9bcf09a1) goto LAB_0018a0a8;
      goto LAB_00189b2c;
    }
    if (lVar4 == -0x6b0b3269d90ff18) {
      lVar5 = 0x27a4ecd09cc7862b;
      local_a8 = unaff_x20;
      if ((unaff_w26 & unaff_x20 != 0) == 0) {
        lVar5 = -0x567bacb4e5314217;
      }
      goto LAB_00189b2c;
    }
    lVar5 = 0x2b796aef8b8ff357;
    if ((lVar4 == 0x6be1775ce9fb66b) || (lVar5 = lVar4, lVar4 != 0x8e29227462b7f14))
    goto LAB_00189b2c;
  }
  else {
    if (lVar4 < 0x4bc7ca523bdd439e) {
      if (lVar4 < 0x4272471328575692) {
        if (lVar4 == 0x3a9954ad82ffa048) {
          lVar5 = -0xd077a2d9bcf09a1;
          if (unaff_x28 != 0) {
            lVar5 = 0x4ae0fee2b7817c09;
          }
        }
        else if (lVar4 == 0x4111780a0b694329) {
          lVar5 = -0x64a14186f99a34cd;
        }
      }
      else if (lVar4 == 0x4272471328575692) {
        *param_5 = 0;
        lVar5 = -0x64a14186f99a34cd;
      }
      else if (lVar4 == 0x48e2320e4e47af28) {
        uVar2 = (**(code **)(*param_2 + 0x128))(param_2,param_3,local_88,local_78);
        *param_5 = uVar2;
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar5 = -0x790ef64f56af8f9f;
        if (lVar4 != 0) {
          lVar5 = 0x69ffe6f6a23ee570;
        }
      }
      else if (lVar4 == 0x4ae0fee2b7817c09) {
        lVar5 = 0x2b796aef8b8ff357;
      }
      goto LAB_00189b2c;
    }
    if (0x692695899e1ee24d < lVar4) {
      if (lVar4 == 0x692695899e1ee24e) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        lVar5 = 0x8e29227462b7f14;
        if (local_78 != 0) {
          lVar5 = -0x379fb395c80eae78;
        }
        goto LAB_0018a530;
      }
      if (lVar4 == 0x69ffe6f6a23ee570) {
        (**(code **)(*param_2 + 0x80))(param_2);
        (**(code **)(*param_2 + 0x88))(param_2);
        *param_1 = 0x1b;
        lVar5 = 0x4bc7ca523bdd439e;
      }
      else if (lVar4 == 0x722232e8301a113f) {
        DAT_0021f8d8 = 0;
        local_88 = (**(code **)(*param_2 + 0x108))(param_2,unaff_x28,&DAT_0021dfc8,&DAT_0021dfe0);
        lVar4 = (**(code **)(*param_2 + 0x78))(param_2);
        lVar5 = -0x1fede5bdb1d15a28;
        if (lVar4 != 0) {
          lVar5 = -0x7c1629b7e1ab1463;
        }
      }
      goto LAB_00189b2c;
    }
    if (lVar4 != 0x4bc7ca523bdd439e) {
      if (lVar4 == 0x4d5d29824f4967f5) {
        lVar5 = -0x64d7f846fafd15e9;
      }
      goto LAB_00189b2c;
    }
    (**(code **)(*param_2 + 0xb8))(param_2,local_78);
  }
  unaff_w26 = 1;
  lVar5 = -0x6b0b3269d90ff18;
  unaff_x20 = unaff_x28;
  goto LAB_00189b2c;
}

