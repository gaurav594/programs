import java.io.*;
import java.util.*;
class Main
{
public static void main(String args[])throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
String input=in.readLine();
StringTokenizer op=new StringTokenizer(input);
int n=Integer.parseInt(op.nextToken());
int m=Integer.parseInt(op.nextToken());
int arr[]=new int[n];
	int k;
	String so=in.readLine();
	StringTokenizer to=new StringTokenizer(so);
	
	for(int i=0;i<n;i++)
		{
		arr[i]=Integer.parseInt(to.nextToken());
		}
	StringBuilder sb = new StringBuilder(arr.length);
    for (int i : arr) {
                     sb.append(i);
                      }
       String s = sb.toString();
	   int l=s.length();
	for(int j=0;j<m;j++)
	{
	String st=in.readLine();
	if(st.charAt(0)=='R')
	{
	k=(int)(st.charAt(2))-'0';
	System.out.println(s.charAt(k-1));
	}
	else if(st.charAt(0)=='C')
	{
	k=(int)(st.charAt(2))-'0';
	String kr=s;
	s=s.substring(k)+kr.substring(0,(k));
	}
	else if(st.charAt(0)=='A')
	{
	k=(int)(st.charAt(2))-'0';
	String kr=s;
	int o=l-k;
	s=s.substring(o)+kr.substring(0,(o));
	
	}
	}
}
}