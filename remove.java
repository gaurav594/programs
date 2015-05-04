import java.io.*;
import java.util.*;
class Main{
public static void main(String args[])throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(in.readLine());
while(t-->0)
	{
		String st=in.readLine();
		StringTokenizer token=new StringTokenizer(st);
		int m=Integer.parseInt(token.nextToken());
		int n=Integer.parseInt(token.nextToken());
		LinkedList l1 = new LinkedList();
		int k=0,flag=1,i;
		String sr=in.readLine();
		StringTokenizer tok=new StringTokenizer(sr);
		for(i=0;i<m;i++)
		{
			int s=Integer.parseInt(tok.nextToken());
			l1.add(s);
		}
		Iterator itr = L1.iterator();
		for(i=0;i<m-2;i++)
		{
		int a1=(int)l1.get(i);
		int a2=(int)l1.get(i+1);
		if(a1<a2)
		{
		l1.remove(i);
		flag=0;
		k++;
		}
		if(k==n)
		{
		break;
		}
		if(k<n&&i==m-2)
		{
		i=0;
		continue;
		}
		
		}
		System.out.println(l1);	
	}
}
}