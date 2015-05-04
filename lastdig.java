import java.math.*;
import java.util.*;
class Big{

public static void main(String[] args) {
    int t,i;
	Scanner s=new Scanner(System.in);
	t=s.nextInt();
	for(i=0;i<t;i++)
	{
	BigInteger a=s.nextBigInteger();
	int b=s.nextInt();
	BigInteger c=a.pow(b);
	BigInteger d=c.mod(BigInteger.valueOf(10));
	System.out.println(d);
	}
  
    }
}