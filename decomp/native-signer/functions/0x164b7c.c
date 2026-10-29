// rea decompile_all
// name: FUN_00164b7c
// address: 0x164b7c
// body: available
// range: 0x164b7c-0x16521b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00164b7c(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  uint unaff_w20;
  long *unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  ulong uVar7;
  ulong local_c0;
  long local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  long local_70;
  ulong local_68;
  
  uVar1 = 0xf128cc9dd6e0d6aa;
  if ((param_3 == 0 || param_2 == 0) || param_1 == 0) {
    uVar1 = 0x4320265a0e0b4940;
  }
  uVar2 = 0x4320265a0e0b4940;
  uVar3 = 0x5c636cdb5951a311;
LAB_00164d3c:
  do {
    while( true ) {
      uVar6 = uVar3;
      uVar5 = uVar2;
      uVar2 = uVar5;
      uVar3 = uVar6;
      if (-0xed73362291f2957 < (long)uVar6) break;
      if ((long)uVar6 < -0x36dcb37ed4084a75) {
        if ((long)uVar6 < -0x61f666045bf9becd) {
          uVar2 = local_68;
          uVar3 = 0xde830b9fb3ba414f;
          if (((uVar6 != 0x9a3d6d6282224885) &&
              (uVar2 = uVar5, uVar3 = uVar6, uVar6 == 0x9d033f895790cb55)) &&
             (local_78 = local_70, uVar3 = 0xc8ff3c96d2e36694, local_b8 = unaff_x24, unaff_x24 != 0)
             ) {
            uVar3 = 0x14e634c4449150f4;
          }
        }
        else if (uVar6 == 0x9e0999fba4064133) {
          unaff_w20 = 1;
LAB_00165004:
          uVar3 = 0x6da4bcdee695d086;
        }
        else if (uVar6 == 0xb3da50a0745bbd27) {
          iVar4 = FUN_001e17a8(local_b8,local_98);
          uVar3 = 0x9e0999fba4064133;
          if (iVar4 != 0) {
            uVar3 = 0x3275b6c7afaad336;
          }
        }
        else if (uVar6 == 0xc8ff3c96d2e36694) {
          uVar3 = 0x22ea23eb52a1f5df;
        }
      }
      else if ((long)uVar6 < -0x217cf4604c45beb1) {
        if (uVar6 == 0xc9234c812bf7b58b) {
          local_70 = 0;
          unaff_x24 = local_90;
LAB_00164fa8:
          uVar3 = 0x9d033f895790cb55;
        }
        else if ((uVar6 == 0xcb015d1ea2708cc9) || (uVar6 == 0xd82c30cafd409537)) goto LAB_00164de4;
      }
      else if (uVar6 == 0xde830b9fb3ba414f) {
        local_a8 = local_b0 + 1;
        uVar3 = 0xea2dd8ad406d04ff;
        local_c0 = uVar5;
        if (uVar5 <= local_a8) {
          uVar3 = 0xd82c30cafd409537;
        }
      }
      else {
        uVar3 = 0x22ea23eb52a1f5df;
        if ((uVar6 != 0xe0b46597fe3489b3) &&
           (uVar5 = local_c0, uVar3 = uVar6, uVar7 = local_a8, uVar6 == 0xea2dd8ad406d04ff)) {
LAB_00164d28:
          uVar3 = 0x18c088cfda32a41d;
          unaff_x25 = uVar7;
          local_80 = uVar5;
        }
      }
    }
    if (0x22ea23eb52a1f5de < (long)uVar6) {
      if ((long)uVar6 < 0x5c636cdb5951a311) {
        if (uVar6 == 0x22ea23eb52a1f5df) {
          local_a0 = local_78 + 1;
          uVar3 = 0x136bc6163ac24f7e;
          if (local_a0 != param_3) {
            uVar3 = 0xfe03b1f1470ad5e2;
          }
        }
        else {
          uVar3 = 0x22ea23eb52a1f5df;
          if ((uVar6 != 0x3275b6c7afaad336) && (uVar3 = uVar6, uVar6 == 0x4320265a0e0b4940)) {
LAB_00164de4:
            unaff_w20 = 0;
            goto LAB_00165004;
          }
        }
      }
      else {
        uVar3 = uVar1;
        if (uVar6 != 0x5c636cdb5951a311) {
          if (uVar6 == 0x7c9ff41fdc85ba8c) {
            uVar5 = local_88;
            uVar7 = 0;
            goto LAB_00164d28;
          }
          uVar3 = uVar6;
          if (uVar6 == 0x6da4bcdee695d086) {
            return unaff_w20 & 1;
          }
        }
      }
      goto LAB_00164d3c;
    }
    if ((long)uVar6 < 0x136bc6163ac24f7e) {
      if (uVar6 == 0xf128cc9dd6e0d6aa) {
        local_88 = *(ulong *)(param_1 + 0x870);
        uVar3 = 0xcb015d1ea2708cc9;
        if (local_88 != 0) {
          uVar3 = 0x7c9ff41fdc85ba8c;
        }
      }
      else if (uVar6 == 0xfe03b1f1470ad5e2) {
        unaff_x24 = *unaff_x23;
        local_70 = local_a0;
        goto LAB_00164fa8;
      }
    }
    else if (uVar6 == 0x136bc6163ac24f7e) {
      uVar2 = *(ulong *)(param_1 + 0x870);
      uVar3 = 0xde830b9fb3ba414f;
    }
    else if (uVar6 == 0x14e634c4449150f4) {
      local_98 = *(long *)(param_2 + local_78 * 8);
      uVar3 = 0xe0b46597fe3489b3;
      if (local_98 != 0) {
        uVar3 = 0xb3da50a0745bbd27;
      }
    }
    else if (uVar6 == 0x18c088cfda32a41d) {
      local_68 = local_80;
      unaff_x23 = (long *)(param_1 + unaff_x25 * 0x10 + 0x70);
      local_90 = *unaff_x23;
      uVar3 = 0x9a3d6d6282224885;
      local_b0 = unaff_x25;
      if (local_90 != 0) {
        uVar3 = 0xc9234c812bf7b58b;
      }
    }
  } while( true );
}

