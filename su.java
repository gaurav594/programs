import java.io.*;
import java.util.*;
import java.math.*;
class SPOTWO
{
	static long MD=1000000007;
	static long arr[]=new long[600001];
	static PrintWriter out=new PrintWriter(System.out);
	static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	static BufferedOutputStream bos=new BufferedOutputStream(System.out);	
	
	static long mulmod(long a,long b) 
	{ 
		long x=0,y=a%MD;
		//BigInteger x =new BigInteger("0"),y=a.mod(md);
		while(b>0)
		{
			if(b%2==1)
			{
				//x=(x.add(y)).mod(md);
				x = (x+y)%MD;
			}
			//y=(y.multiply(TWO)).mod(md);
			y = (y*2)%MD;
			//b=b.divide(TWO);			
			b /= 2;
		}
		return x%MD;
	}

	static long modulo(long a,long b)
	{
		long x=1,y=a;
		//BigInteger x=BigInteger.ONE,y=a; // long long is taken to avoid overflow of intermediate results 
		while(b>0)
		{ 
			if((b%2)==1)
			{ //x=(x*y)%md; 
				x=mulmod(x,y);
			} //y = (y*y)%md; // squaring the base 
			y=mulmod(y,y);
			b=b/2;
		}
		return x%MD;
	}
	
		
	static int fin()throws IOException
	{
		char ch;
		int num=0,value;
		value=br.read();
		ch=(char)value;
		while(ch<'0'||ch>'9')
			ch=(char)(br.read());
		while((ch>='0')&&(ch<='9'))
		{
			num=(num<<3)+(num<<1)+(ch-'0');
			ch=(char)(br.read());
		}
		return num;
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
			//out.println(i+" "+arr[i]);
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
	
	public static void fout(long n)throws IOException
	{
		long rev=n,count=0;
		while((rev%10)==0)
		{
			count++;
			rev/=10;
			if(rev==0)
				break;
		}
		rev=0;
		while(n!=0)
		{
			rev=(rev<<3)+(rev<<1)+(n%10);
			n/=10;
		}
		while(rev!=0)
		{
			bos.write((String.valueOf(rev%10)).getBytes());
			rev/=10;
		}
		while((count--)>0)
			bos.write("0".getBytes());
		bos.write("\n".getBytes());
	}

	public static void main(String arg[])throws IOException
	{
		initialise();
		int n=0;
		String x;
		int t=fin();		
		//int t=Integer.parseInt(br.readLine());
		for(int i=0;i<t;i++)
		{
			n=fin();
			//fout(arr[n]);
			//n=Integer.parseInt(br.readLine());
			out.println(arr[n]);
		}
		//bos.close();
		out.close();
	}
}