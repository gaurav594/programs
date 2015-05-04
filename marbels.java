import java.io.PrintWriter;
import java.util.Scanner;

class Main {
    Scanner in = new Scanner(System.in);
    PrintWriter out = new PrintWriter(System.out);

    void run() throws Exception {
        int testcases = in.nextInt();
        while (testcases-- > 0) {
            int n = in.nextInt(), k = in.nextInt();
            out.println(combinations(n-1, k-1));
        }
        out.flush();
    }

    long combinations(int n , int k) {
        if (k > n-k)
            k = n-k;
        double result = 1.0;
        for (double i = n; i >= n-k+1; i--)
            result *= i / (i-n+k);
        return Math.round(result);
    }

    public static void main(String[] args) throws Exception {
        new Main().run();
    }
}