import java.util.*;
import java.lang.*;
class Nov2
{
static long LIMIT=100001;
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
Scanner ss=new Scanner(System.in);
long arr[]=new long[100001];
long i;
for(i=0;i<LIMIT;i++)
{
arr[i]=((long)i*i)+L;
}
long a,s,b,k,o;
int t,c;
t=st.nextInt();
for(o=0;o<t;o++)
{
c=0;
a=ss.nextLong();
b=ss.nextLong();
for(i=(int)Math.sqrt(a);arr[i]<=b;i++)
{
if(arr[i]>=a)
{
k=arr[i];
while(k!=0)
{
s=k%10;
if(s==0||s==1||s==4||s==9)
{
k=k/10;
}
else
{
break;
}
}
if(k==0)
{
c=c+1;
}
}
}
System.out.println(c);
}
}
}