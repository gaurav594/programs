import java.util.*;
class Code
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
Scanner ss=new Scanner(System.in);
int a=st.nextInt();
for(int i=0;i<a;i++)
{
long sum=0;
long l=ss.nextLong();
long r=ss.nextLong();
int ll = String.valueOf(l).length();
int lr = String.valueOf(r).length();
if(lr==ll)
{
sum=((r-l+1)/2*(l+r))*ll;
}
else
{
for(long j=l;j<=r;j++)
{
int length = String.valueOf(j).length();
sum=sum+(length*j);
}
sum=sum%1000000007;
System.out.println(sum);
}
}
}
}