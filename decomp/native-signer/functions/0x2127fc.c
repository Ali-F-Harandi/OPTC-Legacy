// rea decompile_all
// name: FUN_002127fc
// address: 0x2127fc
// body: available
// range: 0x2127fc-0x212c33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002127fc(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar1 = (uint)param_1;
  if (DAT_0021fb80 != 0) {
    return;
  }
  if (((uint)(param_1 >> 0x3e) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(ulong *)(param_2 + 0x10);
  }
  uVar5 = (param_1 & 0x8000000) >> 0x1a;
  if ((uVar4 & 0x80) != 0) {
    uVar5 = 6;
  }
  uVar5 = uVar5 | (ulong)(uVar1 << 3) & 0x400 | ((param_1 & 0x10) >> 4) << 0xf;
  uVar6 = uVar5 | 0x20;
  if ((uVar1 & 0xc0000) != 0xc0000) {
    uVar6 = uVar5;
  }
  uVar6 = (param_1 & 0x800000) >> 0x14 | (param_1 & 0x100000) >> 0x10 | uVar6;
  if ((param_1 & 0x200) != 0) {
    uVar6 = uVar6 | 0x10100;
  }
  uVar6 = (param_1 & 0x1000) >> 6 | (param_1 & 0x1000000) >> 7 | uVar6;
  if ((param_1 & 0x4000000) != 0) {
    uVar6 = uVar6 | 0x800000;
  }
  uVar6 = (ulong)(uVar1 << 6) & 0x800 | (param_1 & 8) << 0xb | uVar6;
  if ((param_1 & 0x40) != 0) {
    uVar6 = uVar6 | 0x1000;
  }
  uVar6 = (param_1 & 0x6000) << 7 | uVar6;
  if ((param_1 & 0x20000000) != 0) {
    uVar6 = uVar6 | 0x400000000000;
  }
  uVar6 = (param_1 & 0x10000000) << 0x15 | uVar6;
  uVar2 = uVar4 << 0x23;
  uVar5 = uVar2 & 0x2000000000;
  if ((uVar4 & 0x40000) != 0) {
    uVar6 = uVar6 | 0x180000000000;
  }
  if ((uVar4 & 0x400000) != 0) {
    uVar6 = uVar6 | 0x380000000000;
  }
  if ((uVar4 & 8) != 0) {
    uVar5 = 0x6000000000;
  }
  uVar6 = uVar2 & 0x8000000000 | uVar5 | uVar6;
  iVar3 = (int)uVar4;
  if ((uVar4 & 0x20) != 0) {
    uVar6 = uVar6 | 0x10000000000;
  }
  uVar5 = (param_1 & 0x100) >> 1 | uVar2 & 0x20000000000 | uVar6 | (uVar4 & 1) << 0x13;
  if ((uVar4 & 0x10000) != 0) {
    uVar5 = uVar5 | 1;
  }
  uVar5 = (ulong)(uint)(iVar3 << 10) & 0x2000000 |
          uVar4 >> 1 & 0x100000000 |
          uVar4 >> 4 & 0x10000000 | (ulong)(uint)(iVar3 << 0xd) & 0x4000000 | uVar5;
  if ((uVar4 & 0x100) != 0) {
    uVar5 = uVar5 | 0x1000000;
  }
  uVar5 = (uVar4 & 0x2000000) << 0x1e |
          (uVar4 & 0x1000000) << 0x20 |
          (uVar4 & 0x800000) << 0x13 |
          (uVar4 & 0x80000000) << 0x17 |
          (ulong)(uint)(iVar3 << 8) & 0x20000000 |
          (uVar4 & 0x20000) << 0x21 | (uVar4 & 0xe00) << 0x18 | uVar5;
  if ((uVar1 >> 0xb & 1) == 0) {
    if ((param_1 & 0x201) != 0) {
      uVar5 = uVar5 | 0x300;
    }
    if ((uVar4 & 1) != 0 || (param_1 & 0x10000) != 0) {
      uVar5 = uVar5 | 0x40000;
    }
    if ((param_1 & 0x4008000) != 0) {
      uVar5 = uVar5 | 0x400000;
    }
    uVar6 = (param_1 & 0x20000) >> 4;
    if ((uVar4 & 0x100004000) != 0) {
      uVar5 = uVar5 | 0x8000000;
    }
    uVar5 = (ulong)(uint)(iVar3 << 0x13) & 0x80000000 | uVar5;
    if ((uVar4 & 2) != 0 && (param_1 & 0x400000) != 0) {
      uVar5 = uVar5 | 0x1000000000;
    }
  }
  else {
    uVar4 = id_aa64pfr1_el1;
    if ((uVar4 & 0xf00) != 0) {
      uVar5 = uVar5 | 0x80000000000;
    }
    uVar6 = uVar5 | 0x1000000000000;
    if ((uVar4 & 0xf0) != 0x10) {
      uVar6 = uVar5;
    }
    uVar2 = id_aa64pfr0_el1;
    uVar5 = uVar6 | 0x200000000000000;
    if ((uVar4 & 0xf000000) != 0x2000000) {
      uVar5 = uVar6;
    }
    if ((~(uint)uVar2 & 0xf0000) != 0) {
      uVar5 = uVar5 | 0x300;
    }
    if ((uVar2 & 0xf00000000) != 0) {
      uVar4 = UnkSytemRegRead(3,0,0,4,4);
      if ((uVar4 & 0xf) == 1) {
        uVar5 = uVar5 | 0x1000000000;
      }
      else if ((uVar4 & 0xf) == 0) {
        uVar5 = uVar5 | 0x40000000;
      }
      if ((uVar4 & 0xf00000) != 0) {
        uVar5 = uVar5 | 0x80000000;
      }
    }
    uVar4 = id_aa64isar0_el1;
    if ((uVar4 & 0xf00000000) != 0) {
      uVar5 = uVar5 | 0x2000;
    }
    uVar4 = id_aa64isar1_el1;
    if ((uVar4 & 0xf) != 0) {
      uVar5 = uVar5 | 0x40000;
    }
    if ((uVar4 & 0xf00000) != 0) {
      uVar5 = uVar5 | 0x400000;
    }
    uVar6 = uVar5 | 0x800000000000;
    if ((uVar4 & 0xf0000000000) != 0x20000000000) {
      uVar6 = uVar5;
    }
    if ((uVar4 & 0xf00000000000) != 0) {
      uVar6 = uVar6 | 0x8000000;
    }
    if (uVar4 >> 0x3c == 0) goto LAB_00212c00;
    if (uVar4 >> 0x3d == 0) {
      DAT_0021fb80 = uVar6 | 0x408000000000000;
      return;
    }
    uVar5 = 0x38000000000000;
    if (uVar4 >> 0x3c < 3) {
      uVar5 = 0x18000000000000;
    }
  }
  uVar6 = uVar6 | uVar5;
LAB_00212c00:
  DAT_0021fb80 = uVar6 | 0x400000000000000;
  return;
}

