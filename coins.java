import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

class Main {
    private static Map<Integer, Long> table = new HashMap<Integer, Long>();

    public static void main(String[] args) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line;
        while ((line = in.readLine()) != null) {
            int n = Integer.parseInt(line);
            System.out.println(maxDollars(n));
        }
        System.out.flush();
    }

 
    public static long maxDollars(int n) {
        if (n < 12)
            return n;
        if (table.containsKey(n))
            return table.get(n);
        long maxDollarsOfNCoins = maxDollars(n/2)+maxDollars(n/3)+maxDollars(n/4);
        table.put(n, maxDollarsOfNCoins);

        return maxDollarsOfNCoins;
    }
}