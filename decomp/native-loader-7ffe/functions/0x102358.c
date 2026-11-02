// rea decompile_all
// name: FUN_00102358
// address: 0x102358
// body: available
// range: 0x102358-0x1023ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00102358(undefined8 param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 unaff_w19;
  undefined4 unaff_w20;
  long unaff_x29;
  
  uVar1 = FUN_00105f34(param_1,0,unaff_w20,2,0x5f,1,7,unaff_w19);
  *(undefined1 *)(unaff_x29 + 0x10ff) = uVar1;
  *(undefined8 *)(unaff_x29 + 0x1068) = 0;
  *(undefined8 *)(unaff_x29 + 0x1060) = 0;
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    uVar1 = FUN_00103c6c(*(undefined8 *)(unaff_x29 + 0x48),
                         *(long *)(unaff_x29 + 0x40) + *(long *)(unaff_x29 + 0x10e8),
                         unaff_x29 + 0x1068,unaff_x29 + 0x1060,0,0);
    *(undefined1 *)(unaff_x29 + 0x10ff) = uVar1;
    if (*(char *)(unaff_x29 + 0x10ff) != '\x01') {
      uVar2 = _FINI_0();
      uVar1 = *(undefined1 *)(unaff_x29 + 0x10ff);
      FUN_001047cc(*(undefined8 *)(unaff_x29 + 0x48));
      uVar1 = FUN_00105f34(0,0,uVar2,2,0x6a,1,8,uVar1);
      *(undefined1 *)(unaff_x29 + 0x10ff) = uVar1;
    }
  }
  *(undefined8 *)(unaff_x29 + 0x10d8) = 0;
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    *(long *)(unaff_x29 + 0x10d8) =
         *(long *)(unaff_x29 + 0x1068) +
         (*(long *)(*(long *)(unaff_x29 + 0x10f0) + 0x28) - *(long *)(unaff_x29 + 0x10e8));
  }
  *(undefined8 *)(unaff_x29 + 0x10d0) = 0;
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    *(undefined4 *)(unaff_x29 + 0x1084) = 0x80000000;
    *(uint *)(unaff_x29 + 0x1080) = (uint)*(ushort *)(*(long *)(unaff_x29 + 0x10f0) + 0x3c);
    *(undefined4 *)(unaff_x29 + 0x10cc) = 0;
    while (*(int *)(unaff_x29 + 0x10cc) < *(int *)(unaff_x29 + 0x1080)) {
      *(long *)(unaff_x29 + 0x1078) =
           *(long *)(unaff_x29 + 0x10d8) + (long)*(int *)(unaff_x29 + 0x10cc) * 0x40;
      *(undefined4 *)(unaff_x29 + 0x105c) = 0;
      FUN_001046bc(unaff_x29 + 0x105c,*(long *)(unaff_x29 + 0x1078) + 4,4);
      if (*(int *)(*(long *)(unaff_x29 + 0x1078) + 4) == *(int *)(unaff_x29 + 0x1084)) {
        *(undefined8 *)(unaff_x29 + 0x10d0) = *(undefined8 *)(unaff_x29 + 0x1078);
        break;
      }
      *(int *)(unaff_x29 + 0x10cc) = *(int *)(unaff_x29 + 0x10cc) + 1;
    }
  }
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    if (*(long *)(unaff_x29 + 0x10d0) == 0) {
      uVar2 = _FINI_0();
      FUN_001047cc(*(undefined8 *)(unaff_x29 + 0x48));
      uVar1 = FUN_00105f34(0,0,uVar2,2,0x8e,1,9,0);
      *(undefined1 *)(unaff_x29 + 0x10ff) = uVar1;
    }
    if (*(ulong *)(*(long *)(unaff_x29 + 0x10d0) + 0x18) < *(ulong *)(unaff_x29 + 0x10e8)) {
      uVar2 = _FINI_0();
      uVar3 = *(ulong *)(unaff_x29 + 0x10e8);
      FUN_001047cc(*(undefined8 *)(unaff_x29 + 0x48));
      uVar1 = FUN_00105f34(0,0,uVar2,2,0x8f,1,10,uVar3 & 0xffffffff);
      *(undefined1 *)(unaff_x29 + 0x10ff) = uVar1;
    }
    if (*(long *)(*(long *)(unaff_x29 + 0x10d0) + 0x20) == 0) {
      uVar2 = _FINI_0();
      uVar3 = *(ulong *)(*(long *)(unaff_x29 + 0x10d0) + 0x20);
      FUN_001047cc(*(undefined8 *)(unaff_x29 + 0x48));
      uVar1 = FUN_00105f34(0,0,uVar2,2,0x90,1,0xb,uVar3 & 0xffffffff);
      *(undefined1 *)(unaff_x29 + 0x10ff) = uVar1;
    }
  }
  *(undefined8 *)(unaff_x29 + 0x10c0) = 0;
  *(undefined8 *)(unaff_x29 + 0x10b8) = 0;
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    *(long *)(unaff_x29 + 0x10c0) =
         *(long *)(unaff_x29 + 0x1068) +
         (*(long *)(*(long *)(unaff_x29 + 0x10d0) + 0x18) - *(long *)(unaff_x29 + 0x10e8));
    *(undefined8 *)(unaff_x29 + 0x10b8) = *(undefined8 *)(*(long *)(unaff_x29 + 0x10d0) + 0x20);
  }
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    *(undefined4 *)(unaff_x29 + 0x1074) = 0x23c;
    *(ulong *)(unaff_x29 + 0x10c0) =
         *(long *)(unaff_x29 + 0x10c0) + (ulong)*(uint *)(unaff_x29 + 0x1074);
    *(ulong *)(unaff_x29 + 0x10b8) =
         *(long *)(unaff_x29 + 0x10b8) - (ulong)*(uint *)(unaff_x29 + 0x1074);
  }
  if (*(char *)(unaff_x29 + 0x10ff) != '\0') {
    **(undefined8 **)(unaff_x29 + 0x38) = *(undefined8 *)(unaff_x29 + 0x10c0);
    **(undefined8 **)(unaff_x29 + 0x30) = *(undefined8 *)(unaff_x29 + 0x10b8);
    **(undefined8 **)(unaff_x29 + 0x28) = *(undefined8 *)(unaff_x29 + 0x1068);
    **(undefined8 **)(unaff_x29 + 0x20) = *(undefined8 *)(unaff_x29 + 0x1060);
  }
  return *(undefined1 *)(unaff_x29 + 0x10ff);
}

