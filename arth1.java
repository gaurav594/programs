import java.io.*;
import java.util.*;
class Machula
{	
public static void main(String args[]) throws IOException
{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(in.readLine());
int k,i,a,b,j,d;

char ch;
while(t-->0)
{k=1; i=0;a=0;b=0;
	String s=in.readLine();
	int len=s.length();
	char oper[]=new char[len];
	char str[]= s.toCharArray();
	 while(str[i]!='*' && str[i]!='+'&&str[i]!='-'&&str[i]!='/')
	 {
		 if(str[i]!=' ')
		 {
			 d=str[i]-'0';
			 a=a*10+d;
		 }
		 i++;
	 }
	 oper[0]=str[i];
	 for(j=i+1;j<len-1;j++)
	 {
		  while(str[j]!='*'&&str[j]!='+'&&str[j]!='-'&&str[j]!='/'&&str[j]!='=')
		 {
			 if(str[j]!=' ')
			 {
				 d=str[j]-'0';
				 b=b*10+d;
			 }
			 j++;
		 }
		if(str[j]!='=')
		{
			oper[k]=str[j];
		}
		ch=oper[k-1];
		if(ch=='+')
		{
			a=a+b;
		}
		else if(ch=='-')
		{
			a=a-b;
		}
		else if(ch=='*')
		{
			a=a*b;
		}
		else if(ch=='/')
		{
			a=a/b;
		}
		b=0;
		k=k+1;
	 }
	 System.out.println(a);
	 
}
}
}