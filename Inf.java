import java.util.Scanner;
class Inf
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
String s=st.nextLine();
int l=s.length();
int i;
String rev="";
char arr[]=s.toCharArray();
int visited[]=new int[26];
int ars[]=new int[26];
for(i=0;i<26;i++)
{
ars[i]=0;
}
for(i=0;i<l;i++)
{
ars[arr[i]-97]++;
}
for(i=0;i<26;i++)
{
visited[i]=0;
}
for(i=0;i<l;i++)
{
if(visited[arr[i]-97]==0)
{
rev=rev+arr[i];
visited[arr[i]-97]=1;
}
}
System.out.println(rev);
}
}