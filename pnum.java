import java.io.*;
import java.util.*;
class Test
{
	static long MOD=1000000007;
	static BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
	static PrintWriter out=new PrintWriter(System.out);
	public static void main(String arg[])throws IOException
	{
		String input[];
		int t,len1,len2;
		long sum=0,z,x,y,sum1=0;
		t=Integer.parseInt(br.readLine());
		for(int ij=0;ij<t;ij++)
		{
			sum=0;
			input=(br.readLine()).split(" ");
			x=Long.parseLong(input[0]);
			y=Long.parseLong(input[1]);
			len1=input[0].length();
			len2=input[1].length();
			sum=(((x+y)*((y-x)+1))/2)*len1;
			for(int i=len1;i<len2;i++)
			{
				z=(long)(Math.pow(10.0,(double)i));
				sum1=((z+y)*((y-z)+1))/2;
				sum=sum+sum1;
			}
			out.println(sum%MOD);
		}
		out.close();
		System.exit(0);
	}
} 