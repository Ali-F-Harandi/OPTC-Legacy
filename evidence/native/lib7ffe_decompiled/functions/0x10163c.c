// rea decompile_all
// name: FUN_0010163c
// address: 0x10163c
// body: available
// range: 0x10163c-0x1019ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: a842f0c28ed58e8f7f911995842ec7f25c5d06dbed538e576eb5d2d7c030f97f
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_0010163c(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 local_1480 [1024];
  undefined1 auStack_1080 [4100];
  int iStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  long lStack_50;
  int iStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  code *pcStack_28;
  ulong local_20;
  long local_18;
  undefined8 local_10;
  char local_1;
  
  local_1 = '\x01';
  local_10 = 0;
  local_58 = 0;
  local_10 = FUN_001012bc();
  local_1480[0] = 0;
  if ((local_1 != '\0') &&
     (local_1 = FUN_00102a50(local_10,local_1480,0x400,&local_58), local_1 != '\x01')) {
    uVar2 = _FINI_0();
    uVar3 = FUN_001047cc(local_1480);
    local_1 = FUN_00105f34(0,0,uVar2,1,0xa8,1,1,0,local_1480,uVar3);
  }
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  if ((local_1 != '\0') &&
     (local_1 = FUN_00101dd8(local_1480,local_58,&local_60,&local_68,&local_70,&local_78),
     local_1 != '\x01')) {
    uVar2 = _FINI_0();
    uVar3 = FUN_001047cc(local_1480);
    local_1 = FUN_00105f34(0,0,uVar2,1,0xb3,1,2,0,local_1480,uVar3);
  }
  local_30 = auStack_1080;
  if (local_1 != '\0') {
    FUN_001046bc(local_30,local_60,0x1000);
  }
  if ((local_1 != '\0') && (local_1 = FUN_001015f0(local_30,0x1000), local_1 != '\x01')) {
    uVar2 = _FINI_0();
    uVar3 = FUN_001047cc(local_1480);
    local_1 = FUN_00105f34(0,0,uVar2,1,0xbd,1,3,0,local_1480,uVar3);
  }
  local_18 = 0;
  local_20 = 0;
  if (local_1 != '\0') {
    local_20 = (ulong)*(uint *)(local_30 + 0xc);
    local_18 = FUN_001027dc(local_20);
    if (local_18 == 0) {
      uVar2 = _FINI_0();
      uVar4 = local_20 & 0xffffffff;
      uVar3 = FUN_001047cc(local_1480);
      local_1 = FUN_00105f34(0,0,uVar2,1,200,1,4,uVar4,local_1480,uVar3);
    }
  }
  if (local_1 != '\0') {
    FUN_001046bc(local_18,local_60 + (ulong)*(uint *)(local_30 + 8),local_20);
  }
  if (local_1 != '\0') {
    local_1 = FUN_00101520(*(undefined4 *)(local_30 + 0x10),local_18,local_20,0);
  }
  if (local_1 != '\0') {
    iStack_7c = 0x1000;
    FUN_001013b8(&iStack_7c);
    uStack_38 = FUN_00105b24(local_18,(long)iStack_7c,0);
    uStack_40 = FUN_00105b24(local_18 + local_20,(long)iStack_7c,1);
    FUN_001012d8(uStack_38,uStack_40);
  }
  if (local_1 != '\0') {
    uStack_44 = 7;
    iStack_48 = FUN_00105e3c(0xe2,local_18,*(undefined4 *)(local_30 + 0x18),7,0,0,0);
    if (local_1 != '\x01') {
      uVar2 = _FINI_0();
      iVar1 = -iStack_48;
      uVar3 = FUN_001047cc(local_1480);
      local_1 = FUN_00105f34(0,0,uVar2,1,0xea,1,5,iVar1,local_1480,uVar3);
    }
  }
  pcStack_28 = (code *)0x0;
  if (local_1 != '\0') {
    pcStack_28 = (code *)(local_18 + (ulong)*(uint *)(local_30 + 0x14));
    lStack_50 = *(uint *)(local_30 + 8) + local_20;
    lStack_50 = FUN_00105a88(lStack_50,4,1);
    local_60 = local_60 + lStack_50;
    local_68 = local_68 - lStack_50;
  }
  FUN_00104598(local_30,0,0x1000);
  if (local_1 != '\0') {
    local_1 = (*pcStack_28)(param_1,local_10,local_18,local_20,local_60,local_68,local_70,local_78);
  }
  if (local_1 != '\x01') {
    uVar2 = _FINI_0();
    local_1 = FUN_00105f34(0,0,uVar2,1,0xfb,1,6,0,0,0);
  }
  if (local_1 != '\0') {
    uVar2 = _FINI_0();
    local_1 = FUN_00105f34(0,0,uVar2,1,0xfc,1,7,0,0,0);
  }
  return local_1;
}

