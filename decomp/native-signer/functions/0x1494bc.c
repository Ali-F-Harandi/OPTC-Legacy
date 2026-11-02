// rea decompile_all
// name: FUN_001494bc
// address: 0x1494bc
// body: available
// range: 0x1494bc-0x14a18b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001494bc(long param_1,float *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  long local_80;
  long local_78;
  
  lVar1 = -0x7fe67905f346fbfb;
  if (param_3 == (ulong *)0x0 || param_1 == 0) {
    lVar1 = -0x4308634030dadfc6;
  }
  lVar4 = 0x764d1aa6a849ae9d;
LAB_001495e4:
  while (lVar3 = lVar4, lVar4 = lVar3, -0x10ffda6f409a7278 < lVar3) {
    if (lVar3 < 0x3a8994928addba7d) {
      if (lVar3 < 0x1682af0300b33bde) {
        if (lVar3 < -0x41676e674455260) {
          if (lVar3 == -0x10ffda6f409a7277) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f534);
            lVar4 = -0x5e82c6dc9be364b7;
            if (iVar2 != 0) {
              lVar4 = -0x20f0bb65759b1f53;
            }
          }
          else if (lVar3 == -0x4d1add0c8ce16b9) {
            iVar2 = FUN_00212730(0,1,&DAT_0021f534);
            lVar4 = 0x3a8994928addba7d;
            if (iVar2 != 0) {
              lVar4 = 0x1e2ac18295de71ca;
            }
          }
        }
        else {
          lVar4 = 0x56b61d7befbb4276;
          if (((lVar3 != -0x41676e674455260) &&
              (lVar4 = -0x10ffda6f409a7277, lVar3 != 0x3873d4157b1e028)) &&
             (lVar4 = lVar3, lVar3 == 0x5c4c7d2dbe47334)) {
            lVar4 = -0x72caa1f7965e5517;
LAB_00149ca0:
            DAT_0021d364 = DAT_0021d364 ^ 0x87;
            DAT_0021d363 = DAT_0021d363 ^ 0x87;
            DAT_0021d362 = DAT_0021d362 ^ 0x87;
            DAT_0021d361 = DAT_0021d361 ^ 0x87;
            DAT_0021d360 = DAT_0021d360 ^ 0x87;
            DAT_0021d365 = DAT_0021d365 ^ 0x87;
            DAT_0021f706 = '\x01';
          }
        }
      }
      else if (lVar3 < 0x1ec5d44aeecbdb89) {
        lVar4 = 0x6be480eb46dfe305;
        if ((lVar3 != 0x1682af0300b33bde) && (lVar4 = lVar3, lVar3 == 0x1e2ac18295de71ca)) {
          lVar4 = -0x4d1add0c8ce16b9;
        }
      }
      else {
        lVar4 = 0x2c73ee228b994b16;
        if (((lVar3 != 0x1ec5d44aeecbdb89) &&
            (lVar4 = -0x72caa1f7965e5517, lVar3 != 0x1f070b39977eec97)) &&
           (lVar4 = lVar3, lVar3 == 0x2c73ee228b994b16)) {
          DAT_0021f538 = 0;
          lVar3 = FUN_001e238c(*(undefined8 *)(param_1 + 0x20),&DAT_0021d368);
          lVar4 = -0x3b3572ff5ecc858a;
          if (lVar3 != 0) {
            lVar4 = -0x6c0e8f09bc789a5c;
          }
        }
      }
    }
    else if (lVar3 < 0x6be480eb46dfe305) {
      if (lVar3 < 0x4ec78c8c2497ab98) {
        if (lVar3 == 0x3a8994928addba7d) {
          lVar4 = -0x5b35d7a439489480;
          if (DAT_0021f706 == '\0') {
            lVar4 = -0x7fde11595d30b2a4;
          }
        }
        else {
          lVar4 = -0x3de3ec445ed7c619;
          if ((lVar3 != 0x41a63a6e69305a09) && (lVar4 = lVar3, lVar3 == 0x46b39d706f3d90dc)) {
            DAT_0021f534 = 0;
            lVar3 = FUN_001e238c(local_80,&DAT_0021d360);
            lVar4 = -0x532cdeef776fc327;
            if (lVar3 != 0) {
              lVar4 = 0x41a63a6e69305a09;
            }
          }
        }
      }
      else {
        lVar4 = -0x4fb2612493a4dfb4;
        if (((lVar3 != 0x4ec78c8c2497ab98) &&
            (lVar4 = -0x3de3ec445ed7c619, lVar3 != 0x598d5359013bf1ba)) &&
           (lVar4 = lVar3, lVar3 == 0x56b61d7befbb4276)) {
          return;
        }
      }
    }
    else if (lVar3 < 0x7340613049dd68b8) {
      if (lVar3 == 0x6be480eb46dfe305) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f538);
        lVar4 = 0x6e1c39d50b0a951c;
        if (iVar2 != 0) {
          lVar4 = 0x1682af0300b33bde;
        }
      }
      else if (lVar3 == 0x6e1c39d50b0a951c) {
        lVar4 = 0x1ec5d44aeecbdb89;
        if (DAT_0021f707 == '\0') {
          lVar4 = -0x5525cd3368227be7;
        }
      }
    }
    else if (lVar3 == 0x7340613049dd68b8) {
      DAT_0021f538 = 0;
      lVar3 = FUN_001e238c(*(undefined8 *)(param_1 + 0x10),&DAT_0021d368);
      lVar4 = -0x723c9840b10f1bc0;
      if (lVar3 != 0) {
        lVar4 = -0x38a93e0289669b16;
      }
    }
    else {
      lVar4 = 0x7340613049dd68b8;
      if ((lVar3 != 0x7b7caf96eded0aa0) && (lVar4 = lVar3, lVar3 == 0x764d1aa6a849ae9d)) {
        lVar4 = lVar1;
      }
    }
  }
  if (lVar3 < -0x4fb2612493a4dfb4) {
    if (lVar3 < -0x5e82c6dc9be364b7) {
      if (lVar3 < -0x72caa1f7965e5517) {
        if (lVar3 == -0x7fe67905f346fbfb) {
          local_78 = *(long *)(param_1 + 0x10);
          lVar4 = 0x4ec78c8c2497ab98;
          if (local_78 != 0) {
            lVar4 = 0x3873d4157b1e028;
          }
        }
        else if (lVar3 == -0x7fde11595d30b2a4) {
          lVar4 = 0x46b39d706f3d90dc;
          goto LAB_00149ca0;
        }
      }
      else if (lVar3 == -0x72caa1f7965e5517) {
        DAT_0021f534 = 0;
        lVar3 = FUN_001e238c(local_78,&DAT_0021d360);
        lVar4 = -0x59c75e716609c136;
        if (lVar3 != 0) {
          lVar4 = 0x598d5359013bf1ba;
        }
      }
      else {
        lVar4 = -0x4fb2612493a4dfb4;
        if ((lVar3 != -0x723c9840b10f1bc0) && (lVar4 = lVar3, lVar3 == -0x6c0e8f09bc789a5c)) {
          lVar4 = -0x3de3ec445ed7c619;
        }
      }
      goto LAB_001495e4;
    }
    if (lVar3 < -0x59c75e716609c136) {
      if (lVar3 == -0x5e82c6dc9be364b7) {
        lVar4 = 0x1f070b39977eec97;
        if (DAT_0021f706 == '\0') {
          lVar4 = 0x5c4c7d2dbe47334;
        }
      }
      else if (lVar3 == -0x5b35d7a439489480) {
        lVar4 = 0x46b39d706f3d90dc;
      }
      goto LAB_001495e4;
    }
    lVar4 = -0x170811264074a33e;
    if (lVar3 == -0x59c75e716609c136) goto LAB_001495e4;
    if (lVar3 != -0x5525cd3368227be7) {
      lVar4 = lVar3;
      if (lVar3 == -0x532cdeef776fc327) {
        lVar4 = 0x6be480eb46dfe305;
      }
      goto LAB_001495e4;
    }
    lVar4 = 0x2c73ee228b994b16;
  }
  else {
    if (lVar3 < -0x38a93e0289669b16) {
      if (lVar3 < -0x4308634030dadfc6) {
        if (lVar3 == -0x4fb2612493a4dfb4) {
          local_80 = *(long *)(param_1 + 0x20);
          lVar4 = -0x41676e674455260;
          if (local_80 != 0) {
            lVar4 = -0x17e3cf1fceb3f39f;
          }
        }
        else if (lVar3 == -0x4c6b693cae2d817e) {
          lVar4 = -0x170811264074a33e;
        }
      }
      else {
        lVar4 = 0x56b61d7befbb4276;
        if (lVar3 != -0x4308634030dadfc6) {
          if (lVar3 == -0x3de3ec445ed7c619) {
            fVar5 = *param_2;
            *param_3 = *param_3 | 0x10000000;
            *param_2 = fVar5 + (1.0 - fVar5);
            lVar4 = 0x56b61d7befbb4276;
          }
          else {
            lVar4 = lVar3;
            if (lVar3 == -0x3b3572ff5ecc858a) {
              lVar4 = 0x56b61d7befbb4276;
            }
          }
        }
      }
      goto LAB_001495e4;
    }
    if (lVar3 < -0x17e3cf1fceb3f39f) {
      lVar4 = -0x3de3ec445ed7c619;
      if (lVar3 != -0x38a93e0289669b16) {
        if (lVar3 == -0x31af3d6298c4bda3) {
          lVar4 = 0x7b7caf96eded0aa0;
          if (DAT_0021f707 == '\0') {
            lVar4 = -0x17d66c71fcff144c;
          }
        }
        else {
          lVar4 = lVar3;
          if (lVar3 == -0x20f0bb65759b1f53) {
            lVar4 = -0x10ffda6f409a7277;
          }
        }
      }
      goto LAB_001495e4;
    }
    lVar4 = -0x4d1add0c8ce16b9;
    if (lVar3 == -0x17e3cf1fceb3f39f) goto LAB_001495e4;
    if (lVar3 != -0x17d66c71fcff144c) {
      lVar4 = lVar3;
      if (lVar3 == -0x170811264074a33e) {
        iVar2 = FUN_00212730(0,1,&DAT_0021f538);
        lVar4 = -0x31af3d6298c4bda3;
        if (iVar2 != 0) {
          lVar4 = -0x4c6b693cae2d817e;
        }
      }
      goto LAB_001495e4;
    }
    lVar4 = 0x7340613049dd68b8;
  }
  DAT_0021d36d = DAT_0021d36d ^ 0x67;
  DAT_0021d36c = DAT_0021d36c ^ 0x67;
  DAT_0021d36b = DAT_0021d36b ^ 0x67;
  DAT_0021d36a = DAT_0021d36a ^ 0x67;
  DAT_0021d369 = DAT_0021d369 ^ 0x67;
  DAT_0021d368 = DAT_0021d368 ^ 0x67;
  DAT_0021d36e = DAT_0021d36e ^ 0x67;
  DAT_0021f707 = '\x01';
  goto LAB_001495e4;
}

