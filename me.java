import java.io.*;
import java.util.*;
import java.math.BigInteger;
class Mod {
static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
static PrintWriter out=new PrintWriter(System.out);
    public static void main(String[] args)throws IOException
	{
	   int c,k;
	
	   int t=Integer.parseInt(br.readLine());
     for(int i=0;i<t;i++)
	 { 
           String s="";	 
       	  int n=Integer.parseInt(br.readLine());
	     for (c =31; c >= 0; c--)
          {
            k=n>>c;
			
		  int o=k&1; 
            if (o!=0)
            s=s+1;
           else
            s=s+0;
          }
    
        BigInteger a = new BigInteger("2");
        BigInteger b2 =new BigInteger(s);
		BigInteger b1 =new BigInteger("2");
		BigInteger b =b1.multiply(b2);
        BigInteger m = new BigInteger("1000000007");
		BigInteger l=a.modPow(b, m);
        System.out.println(l);
		}
		out.close();
System.exit(0);
    }
}