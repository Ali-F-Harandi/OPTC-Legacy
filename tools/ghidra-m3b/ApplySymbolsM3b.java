import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;

import java.io.BufferedReader;
import java.io.FileReader;

public class ApplySymbolsM3b extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        String symFile = args[0];
        String gotFile = args[1];

        BufferedReader r = new BufferedReader(new FileReader(symFile));
        String line;
        int nf = 0, bad = 0;
        while ((line = r.readLine()) != null) {
            String[] p = line.split("\t");
            if (p.length < 4 || !p[0].equals("FUNC")) continue;
            long addr = Long.parseLong(p[1], 16);
            long size = Long.parseLong(p[2]);
            String name = p[3];
            try {
                Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
                AddressSet body = new AddressSet(a, a.add(Math.max(4, size) - 1));
                Function f = currentProgram.getFunctionManager().getFunctionAt(a);
                if (f == null) {
                    f = createFunction(a, name);
                    if (f == null) { bad++; continue; }
                }
                f.setBody(body);
                try { f.setName(name, SourceType.IMPORTED); } catch (Exception e) { }
                nf++;
            } catch (Exception e) { bad++; }
            if ((nf % 10000) == 0) { println("funcs " + nf); }
        }
        r.close();
        println("APPLIED funcs=" + nf + " bad=" + bad);

        r = new BufferedReader(new FileReader(gotFile));
        int ng = 0;
        while ((line = r.readLine()) != null) {
            String[] p = line.split("\t");
            if (p.length < 3 || !p[0].equals("GOT")) continue;
            long addr = Long.parseLong(p[1], 16);
            String name = p[2];
            try {
                Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
                createLabel(a, name, true, ghidra.program.model.symbol.SourceType.IMPORTED);
                ng++;
            } catch (Exception e) { }
        }
        r.close();
        println("APPLIED got labels=" + ng);
    }
}
