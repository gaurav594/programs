import java.math.BigInteger;
public class PowMod {
    public static void main(String[] args){
	    
        BigInteger a = new BigInteger("2");
        BigInteger b = new BigInteger("1000000000");
        BigInteger m = new BigInteger("1000000007");
 
        System.out.println(a.modPow(b, m));
    }
}