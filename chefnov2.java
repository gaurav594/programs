import java.io.*;
import java.util.*;
class Main{
public static void main(String args[]) throws IOException
{
int i=0,t=0;
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
t=Integer.parseInt(in.readLine());
while(t-->0)
	{ try{
		int n=Integer.parseInt(in.readLine());
		long arr[]=new long[n];
		long a[]=new long[n];
		long sum=0;
		int j=0;	
		 String s2=in.readLine();
		 StringTokenizer ts=new StringTokenizer(s2);
		    for(i=0;i<n;i++)
			{
				arr[i]=Long.parseLong(ts.nextToken());
			}
		     
			for(i=0;i<n;i++)
			{
				if(arr[i]<0)
				{  
					sum=0;
					a[i]=0;
					while(sum!=Math.abs(arr[i])&&j<n)
					{
					if(arr[j]<0&&j!=n){ j=j+1; a[i]=0;continue;}
					sum=sum+arr[j];
					a[j]=Math.abs((i-j)*arr[j]);
					j=j+1;
					}
				}
			}
			int s=0;
			for(i=0;i<n;i++)
			{
				s=s+a[i];
			}
			out.println(s);
			}
			catch(Exception e){}
	}
		out.flush();
}
}