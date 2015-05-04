import java.util.Scanner;
class project
{
public static void main(String args[])
{
long j=0,i;
long arr[]=new long[1000000000];
for(i=0;i<1000000000;i++)
{
if(i%3==0||i%5==0)
{
arr[j]=i;
j++;
}
}
long c=0;
Scanner st=new Scanner(System.in);
long t=st.nextLong();
for(j=0;j<t;j++)
{
j=0;
long a=st.nextLong();
while(arr[j]<a)
{
c=c+arr[j];
j++;
}
System.out.println(c);
c=0;
}
}
}