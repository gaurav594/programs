import java.io.*;
import java.util.*;
class Main{
public static void main(String args[]) throws IOException
{
int i=0,j=0,sum=0,max=0,t=0;
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
t=Integer.parseInt(in.readLine());
while(t-->0)
	{  String s1=in.readLine();
	StringTokenizer tk=new StringTokenizer(s1);
		int n=Integer.parseInt(tk.nextToken());
		int m=Integer.parseInt(tk.nextToken());
		int arr[]=new int[n];
		 sum=0;	
		 String s2=in.readLine();
		 StringTokenizer ts=new StringTokenizer(s2);
		    for(i=0;i<n;i++)
			{
				arr[i]=Integer.parseInt(ts.nextToken());
				sum=sum+arr[i];
			}
		     max=arr[0];
		    for(i=1;i<n;i++)
			{
				if(max<arr[i])
					{
						max=arr[i];
					}
			}
	        int k=max*n;
			int flag=k-sum;

			if(flag==m||((m-flag)%n==0))
			{
				out.println("Yes");
			}
			else
			{
				out.println("No");
			}
		
	}
		out.flush();
}
}