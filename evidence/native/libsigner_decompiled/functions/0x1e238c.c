// rea decompile_all
// name: FUN_001e238c
// address: 0x1e238c
// body: available
// range: 0x1e238c-0x1e2ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_001e238c(byte *param_1,byte *param_2,byte *param_3,byte *param_4,byte *param_5)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *in_x12;
  byte *pbVar13;
  byte *in_x13;
  long in_x15;
  long lVar14;
  undefined1 *puVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  byte *unaff_x25;
  byte *pbVar19;
  uint uVar20;
  uint local_c4;
  byte *local_c0;
  byte *pbStack_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_98;
  long local_90;
  long local_88;
  undefined8 local_78;
  byte *local_70;
  uint local_64;
  
  uVar10 = 0;
  uVar11 = 0;
  local_78 = 0;
  local_64 = 0;
  puVar15 = &DAT_c45038db124ae016;
  pbVar3 = param_3;
  uVar1 = 0;
  uVar2 = 0;
  uVar4 = 0;
  uVar5 = 0;
LAB_001e2470:
  do {
    uVar16 = uVar5;
    uVar20 = uVar4;
    uVar9 = uVar2;
    uVar18 = uVar1;
    pbVar19 = unaff_x25;
    pbVar17 = pbVar3;
    lVar14 = in_x15;
    pbVar13 = in_x12;
    pbVar8 = param_5;
    pbVar7 = param_4;
    puVar12 = puVar15;
    puVar15 = puVar12;
    param_4 = pbVar7;
    param_5 = pbVar8;
    in_x12 = pbVar13;
    in_x15 = lVar14;
    pbVar3 = pbVar17;
    unaff_x25 = pbVar19;
    uVar1 = uVar18;
    uVar2 = uVar9;
    uVar4 = uVar20;
    uVar5 = uVar16;
    if ((long)puVar12 < 0xc7bf249d1db72b2) {
      if ((long)puVar12 < -0x316a2fad8e5725cc) {
        if ((long)puVar12 < -0x405b680ffecd4131) {
          if (puVar12 == (undefined1 *)0x8500be9b057d300e) {
            local_a8 = pbVar17 + 1;
            bVar6 = *pbVar17 == 0;
            puVar12 = (undefined1 *)0xc0f51250277e5cfd;
            puVar15 = (undefined1 *)0xe7622641fcb090c6;
            local_b0 = pbVar17;
LAB_001e2464:
            if (!bVar6) {
              puVar15 = puVar12;
            }
            goto LAB_001e2470;
          }
          if (puVar12 != (undefined1 *)0x87b1ff2df68e38ae) {
            if (puVar12 == (undefined1 *)0x940bdddd24f52ce3) {
              local_88 = lVar14 + -1;
              uVar11 = (uint)*pbVar8;
              puVar15 = (undefined1 *)0xfb13253120e52d5;
              local_c4 = uVar18;
              local_c0 = pbVar19;
              pbStack_b8 = pbVar8;
              local_64 = uVar18;
              if (local_88 == 0 || uVar11 == 0) {
                puVar15 = (undefined1 *)0x3007aa9d32d99be8;
              }
            }
            goto LAB_001e2470;
          }
        }
        else if (puVar12 != (undefined1 *)0xbfa497f00132becf) {
          puVar15 = (undefined1 *)0x8500be9b057d300e;
          pbVar3 = local_a8;
          if ((puVar12 != (undefined1 *)0xc0f51250277e5cfd) &&
             (puVar15 = puVar12, pbVar3 = pbVar17, puVar12 == &DAT_c45038db124ae016)) {
            puVar15 = (undefined1 *)0x8500be9b057d300e;
          }
          goto LAB_001e2470;
        }
        local_98 = (byte *)0x0;
        pbVar7 = local_98;
LAB_001e2c98:
        local_98 = pbVar7;
        puVar15 = (undefined1 *)0x5eda44100212fa2c;
        param_5 = pbVar8;
        in_x15 = lVar14;
        unaff_x25 = pbVar19;
        uVar1 = uVar18;
        goto LAB_001e2470;
      }
      if ((long)puVar12 < -0x12e0f8e15901e122) {
        puVar15 = (undefined1 *)0x65536dc2a8308acd;
        if (((puVar12 != (undefined1 *)0xce95d05271a8da34) &&
            (puVar15 = (undefined1 *)0x940bdddd24f52ce3, param_4 = pbVar13, param_5 = param_3,
            in_x15 = local_90, unaff_x25 = pbVar13, uVar1 = uVar16,
            puVar12 != (undefined1 *)0xe48eaf6f29f5caa2)) &&
           (puVar15 = puVar12, param_4 = pbVar7, param_5 = pbVar8, in_x15 = lVar14,
           unaff_x25 = pbVar19, uVar1 = uVar18, puVar12 == (undefined1 *)0xe7622641fcb090c6)) {
          local_90 = (long)local_b0 - (long)param_3;
          uVar10 = (uint)*param_2;
          puVar15 = (undefined1 *)0x87b1ff2df68e38ae;
          if (uVar10 != 0) {
            puVar15 = (undefined1 *)0x34ee749c3dc3cf5c;
          }
        }
      }
      else {
        puVar15 = (undefined1 *)0xe48eaf6f29f5caa2;
        in_x12 = in_x13;
        uVar5 = local_78._4_4_;
        if (((puVar12 != (undefined1 *)0xed1f071ea6fe1ede) &&
            (puVar15 = (undefined1 *)0x65536dc2a8308acd, in_x12 = pbVar13, uVar5 = uVar16,
            puVar12 != (undefined1 *)0xfda5c16090bb3af4)) &&
           (puVar15 = puVar12, puVar12 == (undefined1 *)0xfeee7e65b66b0f06)) {
          if (0xffffffe5 < uVar20 - 0x5b) {
            uVar20 = uVar20 | 0x20;
          }
          if (0xffffffe5 < uVar9 - 0x5b) {
            uVar9 = uVar9 | 0x20;
          }
          puVar15 = (undefined1 *)0x3b16db62a3c2f4fb;
          if (uVar20 != uVar9) {
            puVar15 = (undefined1 *)0x3ace195dd3930386;
          }
        }
      }
      goto LAB_001e2470;
    }
    if (0x31b9d74c89a90fe2 < (long)puVar12) {
      if ((long)puVar12 < 0x3ace195dd3930386) {
        if (puVar12 == (undefined1 *)0x31b9d74c89a90fe3) {
          uVar1 = local_c4;
          if (0xffffffe5 < local_c4 - 0x5b) {
            uVar1 = local_c4 | 0x20;
          }
          uVar2 = uVar11;
          if (0xffffffe5 < uVar11 - 0x5b) {
            uVar2 = uVar11 | 0x20;
          }
          bVar6 = uVar1 == uVar2;
          puVar15 = (undefined1 *)0xce95d05271a8da34;
          puVar12 = (undefined1 *)0x32f4713bcaf93571;
        }
        else {
          puVar15 = (undefined1 *)0xfeee7e65b66b0f06;
          uVar2 = uVar11;
          uVar4 = local_64;
          if ((puVar12 == (undefined1 *)0x32f4713bcaf93571) ||
             (puVar15 = puVar12, uVar2 = uVar9, uVar4 = uVar20,
             puVar12 != (undefined1 *)0x34ee749c3dc3cf5c)) goto LAB_001e2470;
          bVar6 = local_90 == 0;
          puVar15 = (undefined1 *)0x22f3f9cf91cbb9a6;
          puVar12 = (undefined1 *)0x29ff0ff794febe2e;
        }
LAB_001e2e08:
        param_5 = pbVar8;
        in_x15 = lVar14;
        unaff_x25 = pbVar19;
        uVar1 = uVar18;
        uVar2 = uVar9;
        uVar4 = uVar20;
        if (!bVar6) {
          puVar15 = puVar12;
        }
        goto LAB_001e2470;
      }
      if ((long)puVar12 < 0x5eda44100212fa2c) {
        if (puVar12 == (undefined1 *)0x3ace195dd3930386) {
          in_x13 = pbVar7 + 1;
          local_78 = (ulong)CONCAT14(*in_x13,(uint)local_78);
          puVar15 = (undefined1 *)0xbfa497f00132becf;
          if (*in_x13 != 0) {
            puVar15 = (undefined1 *)0xed1f071ea6fe1ede;
          }
        }
        else if (puVar12 == (undefined1 *)0x3b16db62a3c2f4fb) goto LAB_001e2c98;
      }
      else {
        if (puVar12 == (undefined1 *)0x65536dc2a8308acd) {
          param_1 = local_c0 + 1;
          local_70 = pbStack_b8 + 1;
          local_78 = CONCAT44(local_78._4_4_,(uint)*param_1);
          bVar6 = *param_1 == 0;
          puVar12 = (undefined1 *)0xc7bf249d1db72b2;
          puVar15 = (undefined1 *)0x27963d1423e000f6;
          goto LAB_001e2464;
        }
        if (puVar12 == (undefined1 *)0x5eda44100212fa2c) {
          return local_98;
        }
      }
      goto LAB_001e2470;
    }
    if ((long)puVar12 < 0x27963d1423e000f6) {
      puVar15 = (undefined1 *)0x940bdddd24f52ce3;
      param_5 = local_70;
      in_x15 = local_88;
      unaff_x25 = param_1;
      uVar1 = (uint)local_78;
      if (puVar12 != (undefined1 *)0xc7bf249d1db72b2) {
        if (puVar12 == (undefined1 *)0xfb13253120e52d5) {
          bVar6 = local_64 == uVar11;
          puVar15 = (undefined1 *)0xfda5c16090bb3af4;
          puVar12 = (undefined1 *)0x31b9d74c89a90fe3;
          goto LAB_001e2e08;
        }
        puVar15 = puVar12;
        param_5 = pbVar8;
        in_x15 = lVar14;
        unaff_x25 = pbVar19;
        uVar1 = uVar18;
        pbVar7 = param_2;
        if (puVar12 == (undefined1 *)0x22f3f9cf91cbb9a6) goto LAB_001e2c98;
      }
      goto LAB_001e2470;
    }
    if (puVar12 == (undefined1 *)0x27963d1423e000f6) {
      uVar20 = (uint)*local_70;
      uVar9 = 0;
    }
    else {
      puVar15 = (undefined1 *)0xe48eaf6f29f5caa2;
      in_x12 = param_2;
      uVar5 = uVar10;
      if ((puVar12 == (undefined1 *)0x29ff0ff794febe2e) ||
         (puVar15 = puVar12, in_x12 = pbVar13, uVar20 = uVar11, uVar9 = local_64, uVar5 = uVar16,
         puVar12 != (undefined1 *)0x3007aa9d32d99be8)) goto LAB_001e2470;
    }
    puVar15 = (undefined1 *)0xfeee7e65b66b0f06;
    in_x12 = pbVar13;
    uVar2 = uVar20;
    uVar4 = uVar9;
    uVar5 = uVar16;
  } while( true );
}

