import java.util.*;
class Lexo
{
public static void main(String args[])
{
int i,k;
String temp;
Scanner st=new Scanner(System.in);
String s=st.nextLine();
StringTokenizer sr=new StringTokenizer(s,"");
int n=0;
String arr[]=new String[sr.countTokens()];
while(sr.hasMoreTokens())
{
arr[n]=sr.nextToken();
n=n+1;
}
for(i=0;i<n;i++)
{
for(k=i+1;k<n;k++)
{
if((arr[i].compareTo(arr[k]))>0)
{
temp=arr[i];
arr[i]=arr[k];
arr[k]=temp;
}
}
}
for(i=0;i<n;i++)
{
System.out.println(arr[i]);
}
}
}