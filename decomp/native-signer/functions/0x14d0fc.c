// rea decompile_all
// name: FUN_0014d0fc
// address: 0x14d0fc
// body: available
// range: 0x14d0fc-0x14da03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0014d0fc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint unaff_w23;
  ulong unaff_x24;
  long local_80;
  long local_78;
  ulong local_68;
  
  uVar1 = 0xb2733949bcef7151;
  if (param_1 != 0) {
    uVar1 = 0xe776506477d544fe;
  }
  uVar2 = uVar1;
  uVar5 = 0x3221982c8af227e7;
LAB_0014d20c:
  while (uVar6 = uVar5, uVar7 = uVar2, uVar2 = uVar7, uVar5 = uVar6, 0xb0a8a1be3b521a3 < (long)uVar6
        ) {
    if ((long)uVar6 < 0x645127bed22cc8dd) {
      if ((long)uVar6 < 0x3221982c8af227e7) {
        if ((long)uVar6 < 0x194f4c9e271d8bc6) {
          if (uVar6 == 0xb0a8a1be3b521a4) goto LAB_0014d59c;
          if (uVar6 == 0xe4e7e5123e7bc1f) {
            unaff_w23 = 1;
            goto LAB_0014d5a0;
          }
        }
        else if (uVar6 == 0x194f4c9e271d8bc6) {
          iVar3 = FUN_00212730(0,1,&DAT_0021f224);
          uVar5 = 0x78564c773b884662;
          if (iVar3 != 0) {
            uVar5 = 0xef8e6ae7c6143b67;
          }
        }
        else if (uVar6 == 0x1d5d3c098e2cf248) {
          DAT_0021f224 = 0;
          lVar4 = FUN_001e238c(local_80,&DAT_0021c2d8);
          uVar5 = 0xd5862dc3ddbe9b80;
          if (lVar4 != 0) {
            uVar5 = 0xe4e7e5123e7bc1f;
          }
        }
      }
      else if ((long)uVar6 < 0x4b230be80ad31ded) {
        uVar5 = uVar1;
        if ((uVar6 != 0x3221982c8af227e7) && (uVar5 = uVar6, uVar6 == 0x4651b16cb9472178)) {
          return unaff_w23 & 1;
        }
      }
      else {
        uVar5 = 0x645127bed22cc8dd;
        if ((uVar6 != 0x4b230be80ad31ded) && (uVar5 = uVar6, uVar6 == 0x4f3ca44d66c9633e)) {
          uVar5 = 0x645127bed22cc8dd;
        }
      }
    }
    else if ((long)uVar6 < 0x732b21b946f0412d) {
      if (uVar6 == 0x645127bed22cc8dd) {
        iVar3 = FUN_00212730(0,1,&DAT_0021f224);
        uVar5 = 0x8d36357c62c9ca8;
        if (iVar3 != 0) {
          uVar5 = 0x4b230be80ad31ded;
        }
      }
      else {
        uVar5 = 0xde5107e59839a941;
        if ((uVar6 != 0x68962bff82ad2f00) && (uVar5 = uVar6, uVar6 == 0x6ab25889ff927a65)) {
          uVar5 = 0xde5107e59839a941;
LAB_0014d920:
          DAT_0021c2e1 = DAT_0021c2e1 ^ 0xdd;
          DAT_0021c2e0 = DAT_0021c2e0 ^ 0xdd;
          DAT_0021c2d8 = DAT_0021c2d8 ^ 0xdddddddddddddddd;
          DAT_0021f642 = '\x01';
        }
      }
    }
    else if ((long)uVar6 < 0x78564c773b884662) {
      if (uVar6 == 0x732b21b946f0412d) {
        uVar7 = 0x74931dcc8b2a1b4b;
        lVar4 = *(long *)(param_1 + local_68 * 0x10 + 0x78);
        uVar5 = 0xcf90271e40b03904;
        local_80 = lVar4;
        goto LAB_0014d8e8;
      }
      if (uVar6 == 0x74931dcc8b2a1b4b) {
        uVar5 = 0x194f4c9e271d8bc6;
      }
    }
    else {
      if (uVar6 == 0x78564c773b884662) {
        uVar5 = 0xe5713f57a40472a2;
        uVar6 = 0xb399b0bbaea302ac;
        goto LAB_0014d86c;
      }
      if (uVar6 == 0x7cf072c09eec72c5) goto LAB_0014d1f8;
    }
  }
  if ((long)uVar6 < -0x2a79d23c22416480) {
    if ((long)uVar6 < -0x3d689f03c5cdf509) {
      if (uVar6 != 0xb2733949bcef7151) {
        if (uVar6 == 0xb399b0bbaea302ac) {
          uVar5 = 0x1d5d3c098e2cf248;
          goto LAB_0014d920;
        }
        if (uVar6 != 0xb406520438a63d72) goto LAB_0014d20c;
      }
LAB_0014d59c:
      unaff_w23 = 0;
LAB_0014d5a0:
      uVar5 = 0x4651b16cb9472178;
      goto LAB_0014d20c;
    }
    if ((long)uVar6 < -0x33c6a0f08f678741) {
      if (uVar6 == 0xc29760fc3a320af7) {
        unaff_x24 = local_68 + 1;
        uVar5 = 0x5950e7cdbab77a9;
        if (*(ulong *)(param_1 + 0x870) <= unaff_x24) {
          uVar5 = 0xb0a8a1be3b521a4;
        }
      }
      else if (uVar6 == 0xc8710e89952d04f6) {
        local_78 = *(long *)(param_1 + uVar7 * 0x10 + 0x70);
        uVar5 = 0x7cf072c09eec72c5;
        local_68 = uVar7;
        if (local_78 != 0) {
          uVar5 = 0x4f3ca44d66c9633e;
        }
      }
      goto LAB_0014d20c;
    }
    if (uVar6 == 0xcc395f0f709878bf) {
      uVar2 = 0;
      uVar5 = 0xc8710e89952d04f6;
      goto LAB_0014d20c;
    }
    if (uVar6 != 0xcf90271e40b03904) goto LAB_0014d20c;
  }
  else {
    if ((long)uVar6 < -0x1071951839ebc499) {
      if ((long)uVar6 < -0x1a8ec0a85bfb8d5e) {
        uVar5 = 0xc29760fc3a320af7;
        if ((uVar6 != 0xd5862dc3ddbe9b80) && (uVar5 = uVar6, uVar6 == 0xde5107e59839a941)) {
          DAT_0021f224 = 0;
          lVar4 = FUN_001e238c(local_78,&DAT_0021c2d8);
          uVar5 = 0xf907b47a0b449ac6;
          if (lVar4 != 0) {
            uVar5 = 0x732b21b946f0412d;
          }
        }
      }
      else {
        uVar5 = 0x1d5d3c098e2cf248;
        if ((uVar6 != 0xe5713f57a40472a2) && (uVar5 = uVar6, uVar6 == 0xe776506477d544fe)) {
          lVar4 = *(long *)(param_1 + 0x870);
          uVar7 = 0xcc395f0f709878bf;
          uVar5 = 0xb406520438a63d72;
LAB_0014d8e8:
          if (lVar4 != 0) {
            uVar5 = uVar7;
          }
        }
      }
      goto LAB_0014d20c;
    }
    if (0x5950e7cdbab77a8 < (long)uVar6) {
      uVar2 = unaff_x24;
      uVar5 = 0xc8710e89952d04f6;
      if ((uVar6 != 0x5950e7cdbab77a9) && (uVar2 = uVar7, uVar5 = uVar6, uVar6 == 0x8d36357c62c9ca8)
         ) {
        uVar5 = 0x68962bff82ad2f00;
        uVar6 = 0x6ab25889ff927a65;
LAB_0014d86c:
        uVar2 = uVar7;
        if (DAT_0021f642 == '\0') {
          uVar5 = uVar6;
        }
      }
      goto LAB_0014d20c;
    }
    uVar5 = 0x194f4c9e271d8bc6;
    if ((uVar6 == 0xef8e6ae7c6143b67) || (uVar5 = uVar6, uVar6 != 0xf907b47a0b449ac6))
    goto LAB_0014d20c;
  }
LAB_0014d1f8:
  uVar5 = 0xc29760fc3a320af7;
  goto LAB_0014d20c;
}

