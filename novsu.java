import java.io.*;
import java.util.*;
import java.math.*;
class Stwo
{
	static long MD=1000000007;
	static long arr[]=new long[600001];
	static PrintWriter out=new PrintWriter(System.out);
	static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	static BufferedOutputStream bos=new BufferedOutputStream(System.out);	
	
	static long modd(long a,long b) 
	{ 
		long x=0,y=a%MD;
		while(b>0)
		{
			if(b%2==1)
			{
				x = (x+y)%MD;
			}
		
			y = (y*2)%MD;		
			b /= 2;
		}
		return x%MD;
	}

	static long modulo(long a,long b)
	{
		long x=1,y=a;
		while(b>0)
		{ 
			if((b%2)==1)
			{  
				x=modd(x,y);
			}  
			y=modd(y,y);
			b=b/2;
		}
		return x%MD;
	}
	public static void initialise()
	{
		int a;
		arr[1]=4;
		arr[2]=1048576;
		arr[3]=4194304;
		for(int i=4;i<=600000;i++)
		{
			String x="";
			manipulate(i,x);
			int len=Integer.numberOfTrailingZeros(i);
			a=(int)Math.pow(2,(double)len);
			
		}
	}
	
	public static void manipulate(int i,String x)
	{
		int rem,xx,yy;
		int hone=Integer.highestOneBit(i);
		int diff=i-hone;
		if(diff==0)
		{
			rem=Integer.highestOneBit(hone-1);
			xx=rem;
			arr[i]=modulo(arr[xx],10);
		}
		else
		{
			xx=diff;
			yy=hone;
			arr[i]=(arr[yy]*arr[xx])%MD;
		}
	}
	
	public static void main(String arg[])throws IOException
	{
		initialise();
		int n=0;
		String x;
		int t=Integer.parseInt(br.readLine());		
		for(int i=0;i<t;i++)
		{
			n=Integer.parseInt(br.readLine());
			out.println(arr[n]);
		}
		out.close();
	}
}