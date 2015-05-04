import java.io.*;
import java.util.*;
class Main{
public static void main(String args[])throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(in.readLine());
while(t-->0)
	{
	int k=1;
	String s=in.readLine();
	StringTokenizer token=new StringTokenizer(s);
	int n=Integer.parseInt(token.nextToken());
	int m=Integer.parseInt(token.nextToken());
	String arr[]=new String[n];
	Set<String> set = new HashSet<String>();
	for(int i=0;i<n;i++)
		{
		arr[i]=in.readLine();
		set.add(arr[i]);
		}

		if(set.size()==n)
		{
		System.out.println("Yes");
		}
		else
		{
		System.out.println("No");
		}
		
	}
}
}