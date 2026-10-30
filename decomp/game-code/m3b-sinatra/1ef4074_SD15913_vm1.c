// M3b: SD15913_vm1 @ 0x1ef4074 (true address, RTTI-verified)
// see notes/m3b-plt-rtti-cipher.md

void SD15913_vm1(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1ef4078);
  (*pcVar1)();
}
