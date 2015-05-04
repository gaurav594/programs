import java.math.*;
import java.util.Scanner;
class Julka
{
public static void main(String args[])
{int i;
for(i=1;i<=10;i++)
{
try
{
Scanner st=new Scanner(System.in);
BigInteger a=st.nextBigInteger();
BigInteger b=st.nextBigInteger();
BigInteger c=new BigInteger("0");
BigInteger s=new BigInteger("0");
BigInteger o=new BigInteger("2");
c=(a.add(b)).divide(o);
s=a.subtract(c);
System.out.println(c);
System.out.println(s);
}
catch(Exception e)
{

}
}
}
}