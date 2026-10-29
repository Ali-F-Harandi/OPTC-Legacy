// rea decompile_all
// name: FUN_001ea9ac
// address: 0x1ea9ac
// body: available
// range: 0x1ea9ac-0x1ebd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_001ea9ac(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4,ulong *param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  byte bVar19;
  ulong *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong *in_x12;
  ulong *puVar27;
  ulong *in_x13;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong *puVar28;
  ulong *unaff_x24;
  ulong *unaff_x27;
  ulong *puVar29;
  uint uVar30;
  uint uVar31;
  ulong *local_170;
  ulong *puStack_168;
  ulong local_160;
  ulong local_110;
  ulong *local_108;
  ulong *puStack_100;
  ulong *local_f8;
  ulong *puStack_f0;
  uint local_74;
  
  puVar1 = (ulong *)((long)param_2 + 7);
  puVar9 = (ulong *)0x659bc0912b2dc829;
  if (((ulong)puVar1 & 7) != 0) {
    puVar9 = (ulong *)0x722c2ae06bb40e9c;
  }
  puVar2 = (ulong *)((long)param_2 + 6);
  puVar3 = (ulong *)((long)param_2 + 5);
  puVar10 = (ulong *)0x1de6a73eeda120cb;
  if (((ulong)puVar2 & 7) != 0) {
    puVar10 = (ulong *)0x52c814419a3e3185;
  }
  puVar11 = (ulong *)0xf21e169530a10686;
  if (((ulong)puVar3 & 7) != 0) {
    puVar11 = (ulong *)0x8fdefe1e43f978d6;
  }
  puVar4 = (ulong *)((long)param_2 + 4);
  puVar5 = (ulong *)((long)param_2 + 3);
  puVar12 = (ulong *)0x69eee68980841545;
  if (((ulong)puVar4 & 7) != 0) {
    puVar12 = (ulong *)0xe0d1ab4b25797623;
  }
  puVar6 = (ulong *)((long)param_2 + 1);
  puVar13 = (ulong *)0xb8018ea309b833b9;
  if (((ulong)puVar5 & 7) != 0) {
    puVar13 = (ulong *)0xd33b60bc6a4d0bc5;
  }
  puVar7 = (ulong *)((long)param_2 + 2);
  puVar14 = (ulong *)0xd71eb1304d55700e;
  if (((ulong)puVar7 & 7) != 0) {
    puVar14 = (ulong *)0x23fbc284d6daefc6;
  }
  puVar15 = (ulong *)0xcc3523426ea8456c;
  if (((ulong)puVar6 & 7) != 0) {
    puVar15 = (ulong *)0x3d520d52a04eb0a3;
  }
  puVar16 = (ulong *)0xd0ccc911e9db88e3;
  if (((ulong)param_2 & 7) != 0) {
    puVar16 = (ulong *)0x91eea1399732ba6b;
  }
  puVar8 = (ulong *)((long)param_1 + 6);
  local_74 = 0;
  puVar21 = param_1;
  puVar24 = (ulong *)0xc8d957cd1a6d248c;
  puVar20 = puVar8;
  puVar18 = (ulong *)0xe418c3fe6fa7e30;
  uVar31 = 0;
  puVar17 = (ulong *)0xc8d957cd1a6d248c;
  if ((((uint)param_2 ^ (uint)param_1) & 7) != 0) {
    puVar24 = (ulong *)0x4969e3b2df5c1737;
    puVar17 = (ulong *)0x4969e3b2df5c1737;
  }
LAB_001eac94:
  uVar30 = uVar31;
  puVar29 = unaff_x27;
  puVar28 = unaff_x21;
  puVar27 = in_x12;
  puVar26 = puVar18;
  puVar25 = puVar20;
  puVar23 = param_5;
  puVar22 = param_3;
  param_3 = puVar22;
  param_5 = puVar23;
  puVar20 = puVar25;
  in_x12 = puVar27;
  unaff_x21 = puVar28;
  unaff_x27 = puVar29;
  uVar31 = uVar30;
  if ((long)puVar26 < -0xde1e96acf5ef97a) {
    if (-0x2f3336ee1624771e < (long)puVar26) {
      if ((long)puVar26 < -0x18b4a505155ad4de) {
        if (-0x28e14ecfb2aa8ff3 < (long)puVar26) {
          param_3 = (ulong *)((long)param_1 + 2U);
          puVar18 = (ulong *)0x3a9f795766717164;
          unaff_x21 = puVar7;
          if (((puVar26 != (ulong *)0xd71eb1304d55700e) &&
              (param_3 = puVar22, puVar18 = (ulong *)0x850ac13a66551b94, unaff_x21 = puVar28,
              puVar26 != (ulong *)0xde3f399c94d511f5)) &&
             (puVar18 = puVar26, puVar26 == (ulong *)0xe0d1ab4b25797623)) {
            puVar18 = (ulong *)0x5f42b99ecf1d09fd;
            if (*(byte *)puVar4 != 0) {
              puVar18 = (ulong *)0x4d6661f53ed8cd69;
            }
            *(byte *)((long)param_1 + 4U) = *(byte *)puVar4;
          }
          goto LAB_001eac94;
        }
        param_3 = param_1;
        puVar18 = (ulong *)0x3a9f795766717164;
        unaff_x21 = param_2;
        if (puVar26 == (ulong *)0xd0ccc911e9db88e3) goto LAB_001eac94;
        if (puVar26 == (ulong *)0xd33b60bc6a4d0bc5) {
          puVar18 = (ulong *)0x2eb2cb94985f61db;
          if (*(byte *)puVar5 != 0) {
            puVar18 = (ulong *)0x8f83e0501cdcd638;
          }
          *(byte *)((long)param_1 + 3U) = *(byte *)puVar5;
          param_3 = puVar22;
          unaff_x21 = puVar28;
          goto LAB_001eac94;
        }
        param_3 = puVar22;
        puVar18 = puVar26;
        unaff_x21 = puVar28;
        if (puVar26 != (ulong *)0xd47f8d10d9448a20) goto LAB_001eac94;
      }
      else {
        if (-0x1579c5d94e757e2e < (long)puVar26) {
          puVar18 = (ulong *)0x850ac13a66551b94;
          if (((puVar26 != (ulong *)0xea863a26b18a81d3) &&
              (puVar18 = puVar10, puVar26 != (ulong *)0xeb33e5b9123168b2)) &&
             (puVar18 = puVar26, puVar26 == (ulong *)0xeb79f250076f87a4)) {
            local_110 = local_160;
            local_108 = in_x13;
            puStack_100 = puVar21;
LAB_001eb9a0:
            puVar18 = (ulong *)0x802e5ea4af9f9ba6;
          }
          goto LAB_001eac94;
        }
        puVar18 = (ulong *)0x850ac13a66551b94;
        if (puVar26 == (ulong *)0xe74b5afaeaa52b22) goto LAB_001eac94;
        if (puVar26 == (ulong *)0xe7810e8e859413e6) {
          puVar18 = (ulong *)0xa07504f1e430b854;
          if (uVar30 != 0) {
            puVar18 = (ulong *)0x65731e0d60addaaa;
          }
          *(byte *)puVar27 = (byte)uVar30;
          local_170 = puVar23;
          puStack_168 = puVar27;
          goto LAB_001eac94;
        }
        puVar18 = puVar26;
        if (puVar26 != (ulong *)0xe82b60694570ddd4) goto LAB_001eac94;
      }
      param_3 = puVar22;
      puVar18 = (ulong *)0x850ac13a66551b94;
      unaff_x21 = puVar28;
      goto LAB_001eac94;
    }
    if ((long)puVar26 < -0x601688af67ee5367) {
      if ((long)puVar26 < -0x702101e1bc06872a) {
        if (puVar26 == (ulong *)0x802e5ea4af9f9ba6) {
          puStack_f0 = puStack_100 + 1;
          *puStack_100 = local_110;
          local_f8 = local_108 + 1;
          unaff_x20 = *local_f8;
          puVar18 = (ulong *)0x34d64510914e178a;
          if ((unaff_x20 + 0xfefefefefefefeff & (unaff_x20 ^ 0xffffffffffffffff) &
              0x8080808080808080) != 0) {
            puVar18 = (ulong *)0x5d226faf8da10c63;
          }
        }
        else {
          puVar18 = puVar12;
          if ((puVar26 != (ulong *)0x8f83e0501cdcd638) &&
             (puVar18 = puVar26, puVar26 == (ulong *)0x850ac13a66551b94)) {
            return param_1;
          }
        }
      }
      else if (puVar26 == (ulong *)0x8fdefe1e43f978d6) {
        puVar18 = (ulong *)0xd47f8d10d9448a20;
        if (*(byte *)puVar3 != 0) {
          puVar18 = (ulong *)0xeb33e5b9123168b2;
        }
        *(byte *)((long)param_1 + 5U) = *(byte *)puVar3;
      }
      else {
        param_3 = param_1 + 1;
        puVar18 = (ulong *)0x3a9f795766717164;
        unaff_x21 = param_2 + 1;
        if ((puVar26 != (ulong *)0x9112024959edccb7) &&
           (param_3 = puVar22, puVar18 = puVar26, unaff_x21 = puVar28,
           puVar26 == (ulong *)0x91eea1399732ba6b)) {
          puVar18 = (ulong *)0x4ec987089f77069e;
          if ((byte)*param_2 != 0) {
            puVar18 = (ulong *)0x9fe977509811ac99;
          }
          *(byte *)param_1 = (byte)*param_2;
        }
      }
    }
    else if ((long)puVar26 < -0x387c63e2c119ecd0) {
      puVar18 = puVar15;
      if (((puVar26 != (ulong *)0x9fe977509811ac99) &&
          (puVar18 = (ulong *)0x850ac13a66551b94, puVar26 != (ulong *)0xa07504f1e430b854)) &&
         (puVar18 = puVar26, puVar26 == (ulong *)0xb8018ea309b833b9)) {
        param_3 = (ulong *)((long)param_1 + 3U);
        puVar18 = (ulong *)0x3a9f795766717164;
        unaff_x21 = puVar5;
      }
    }
    else {
      puVar18 = puVar9;
      if (((puVar26 != (ulong *)0xc7839c1d3ee61330) &&
          (puVar18 = puVar16, puVar26 != (ulong *)0xc8d957cd1a6d248c)) &&
         (puVar18 = puVar26, puVar26 == (ulong *)0xcc3523426ea8456c)) {
        param_3 = (ulong *)((long)param_1 + 1U);
        puVar18 = (ulong *)0x3a9f795766717164;
        unaff_x21 = puVar6;
      }
    }
    goto LAB_001eac94;
  }
  if ((long)puVar26 < 0x4d6661f53ed8cd69) {
    if ((long)puVar26 < 0x24c67f5d9b83fa28) {
      if ((long)puVar26 < 0xe418c3fe6fa7e30) {
        param_3 = (ulong *)((long)param_1 + 5U);
        puVar18 = (ulong *)0x3a9f795766717164;
        unaff_x21 = puVar3;
        if (((puVar26 != (ulong *)0xf21e169530a10686) &&
            (param_3 = puVar22, puVar20 = puVar24, puVar18 = (ulong *)0x9db9300eb2a7174,
            unaff_x21 = puVar28, unaff_x27 = unaff_x24, puVar26 != (ulong *)0x3bb1d6c9375a841)) &&
           (puVar20 = puVar25, puVar18 = puVar26, unaff_x27 = puVar29,
           puVar26 == (ulong *)0x9db9300eb2a7174)) {
          bVar19 = *(byte *)((long)puVar25 + 1U);
          puVar18 = (ulong *)0x5f09e106069dc7a6;
          if (bVar19 != 0) {
            puVar18 = (ulong *)0x3bb1d6c9375a841;
          }
          unaff_x24 = (ulong *)((long)puVar29 + 1);
          *(byte *)unaff_x24 = bVar19;
          puVar24 = (ulong *)((long)puVar25 + 1U);
        }
      }
      else {
        puVar18 = puVar17;
        if (((puVar26 != (ulong *)0xe418c3fe6fa7e30) &&
            (param_3 = puVar8, puVar18 = (ulong *)0x3a9f795766717164, unaff_x21 = puVar2,
            puVar26 != (ulong *)0x1de6a73eeda120cb)) &&
           (param_3 = puVar22, puVar18 = puVar26, unaff_x21 = puVar28,
           puVar26 == (ulong *)0x23fbc284d6daefc6)) {
          puVar18 = (ulong *)0xde3f399c94d511f5;
          if (*(byte *)puVar7 != 0) {
            puVar18 = (ulong *)0x5d165584104b931b;
          }
          *(byte *)((long)param_1 + 2U) = *(byte *)puVar7;
        }
      }
      goto LAB_001eac94;
    }
    if ((long)puVar26 < 0x3a9f795766717164) {
      puVar18 = puVar14;
      if (((puVar26 != (ulong *)0x24c67f5d9b83fa28) &&
          (puVar18 = (ulong *)0x850ac13a66551b94, puVar26 != (ulong *)0x2eb2cb94985f61db)) &&
         (puVar18 = puVar26, puVar26 == (ulong *)0x34d64510914e178a)) {
        local_108 = local_f8;
        puStack_100 = puStack_f0;
        local_110 = unaff_x20;
        goto LAB_001eb9a0;
      }
      goto LAB_001eac94;
    }
    if (puVar26 == (ulong *)0x3a9f795766717164) {
      local_160 = *puVar28;
      local_74 = (uint)local_160 & 0xff;
      puVar21 = puVar22;
      puVar18 = (ulong *)0xeb79f250076f87a4;
      in_x13 = puVar28;
      if ((local_160 + 0xfefefefefefefeff & (local_160 ^ 0xffffffffffffffff) & 0x8080808080808080)
          != 0) {
        puVar18 = (ulong *)0x581147dc809bae3d;
      }
      goto LAB_001eac94;
    }
    if (puVar26 == (ulong *)0x3d520d52a04eb0a3) {
      puVar18 = (ulong *)0xea863a26b18a81d3;
      if (*(byte *)puVar6 != 0) {
        puVar18 = (ulong *)0x24c67f5d9b83fa28;
      }
      *(byte *)((long)param_1 + 1U) = *(byte *)puVar6;
      goto LAB_001eac94;
    }
    puVar18 = puVar26;
    if (puVar26 != (ulong *)0x4969e3b2df5c1737) goto LAB_001eac94;
    uVar31 = (uint)(byte)*param_2;
    param_5 = param_2;
    in_x12 = param_1;
  }
  else {
    if (0x5f09e106069dc7a5 < (long)puVar26) {
      if ((long)puVar26 < 0x659bc0912b2dc829) {
        puVar18 = (ulong *)0x850ac13a66551b94;
        if (((puVar26 != (ulong *)0x5f09e106069dc7a6) && (puVar26 != (ulong *)0x5f42b99ecf1d09fd))
           && (puVar18 = puVar26, puVar26 == (ulong *)0x65731e0d60addaaa)) {
          puVar20 = local_170;
          puVar18 = (ulong *)0x9db9300eb2a7174;
          unaff_x27 = puStack_168;
        }
      }
      else {
        param_3 = (ulong *)((long)param_1 + 7U);
        puVar18 = (ulong *)0x3a9f795766717164;
        unaff_x21 = puVar1;
        if (((puVar26 != (ulong *)0x659bc0912b2dc829) &&
            (param_3 = (ulong *)((long)param_1 + 4U), unaff_x21 = puVar4,
            puVar26 != (ulong *)0x69eee68980841545)) &&
           (param_3 = puVar22, puVar18 = puVar26, unaff_x21 = puVar28,
           puVar26 == (ulong *)0x722c2ae06bb40e9c)) {
          puVar18 = (ulong *)0xe74b5afaeaa52b22;
          if (*(byte *)puVar1 != 0) {
            puVar18 = (ulong *)0x9112024959edccb7;
          }
          *(byte *)((long)param_1 + 7U) = *(byte *)puVar1;
        }
      }
      goto LAB_001eac94;
    }
    if ((long)puVar26 < 0x581147dc809bae3d) {
      puVar18 = puVar11;
      if (((puVar26 != (ulong *)0x4d6661f53ed8cd69) &&
          (puVar18 = (ulong *)0x850ac13a66551b94, puVar26 != (ulong *)0x4ec987089f77069e)) &&
         (puVar18 = puVar26, puVar26 == (ulong *)0x52c814419a3e3185)) {
        puVar18 = (ulong *)0xe82b60694570ddd4;
        if (*(byte *)puVar2 != 0) {
          puVar18 = (ulong *)0xc7839c1d3ee61330;
        }
        *(byte *)puVar8 = *(byte *)puVar2;
      }
      goto LAB_001eac94;
    }
    param_5 = in_x13;
    puVar18 = (ulong *)0xe7810e8e859413e6;
    in_x12 = puVar21;
    uVar31 = local_74;
    if (((puVar26 == (ulong *)0x581147dc809bae3d) ||
        (param_5 = puVar23, puVar18 = puVar13, in_x12 = puVar27, uVar31 = uVar30,
        puVar26 == (ulong *)0x5d165584104b931b)) ||
       (puVar18 = puVar26, puVar26 != (ulong *)0x5d226faf8da10c63)) goto LAB_001eac94;
    uVar31 = (uint)unaff_x20 & 0xff;
    param_5 = local_f8;
    in_x12 = puStack_f0;
  }
  puVar18 = (ulong *)0xe7810e8e859413e6;
  goto LAB_001eac94;
}

