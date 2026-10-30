import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;

import java.io.BufferedReader;
import java.io.FileReader;

public class ApplyPltM3b extends GhidraScript {
    @Override
    public void run() throws Exception {
        String[] args = getScriptArgs();
        BufferedReader r = new BufferedReader(new FileReader(args[0]));
        String line;
        int nth = 0, nimp = 0, nown = 0, nun = 0;
        while ((line = r.readLine()) != null) {
            String[] p = line.split("\t");
            if (p.length < 5 || !p[0].equals("PLT")) continue;
            long addr = Long.parseLong(p[1], 16);
            String kind = p[2];
            long tgt = Long.parseLong(p[3], 16);
            String name = p[4];
            try {
                Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(addr);
                Function f = currentProgram.getFunctionManager().getFunctionAt(a);
                if (f == null) {
                    f = createFunction(a, name);
                }
                if (f == null) continue;
                if (kind.equals("own")) {
                    Address ta = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(tgt);
                    Function tf = currentProgram.getFunctionManager().getFunctionAt(ta);
                    if (tf != null) {
                        try { f.setThunkedFunction(tf); } catch (Exception e) { }
                    }
                }
                try { f.setName(name, ghidra.program.model.symbol.SourceType.IMPORTED); } catch (Exception e) { }
                if (kind.equals("own")) nown++; else if (kind.equals("import")) nimp++; else nun++;
                nth++;
            } catch (Exception e) { }
            if (nth % 10000 == 0) println("plt " + nth);
        }
        r.close();
        println("APPLIED plt=" + nth + " own=" + nown + " import=" + nimp + " unres=" + nun);
    }
}
