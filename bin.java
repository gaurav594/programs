import java.math.BigInteger;
class Gen
{ 
public static void main(String args[])
{
 int i, c, k,o;
 BigInteger arr[]=new BigInteger[600001];
 String ss="";
 for(i=1;i<=600000;i++)
 {
  for (c = 31; c >= 0; c--)
  {
    k = i >> c;
    o=k&1; 
    if (o!=0)
      ss=ss+1;
    else
      ss=ss+0;
  }
ss=ss.replaceFirst("^0+(?!$)", "");
BigInteger v = new BigInteger("0");
BigInteger a = new BigInteger("2");
BigInteger b2 =new BigInteger(ss);
BigInteger b1 =new BigInteger("2");
BigInteger b =b1.multiply(b2);
BigInteger m = new BigInteger("1000000007");
BigInteger l=a.modPow(b, m);
arr[i]=l;
ss="";
}
for(i=1;i<=600000;i++)
{
System.out.print('"');
System.out.print(arr[i]);
System.out.print('"'+",");
}
}
}