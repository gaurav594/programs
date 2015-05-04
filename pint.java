import java.util.*;
class Cod
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
int t=st.nextInt();
int sum=0;
for(int i=0;i<t;i++)
{
int n=st.nextInt();
int w=st.nextInt();
for(i=0;i<n;i++)
{
int a=st.nextInt();
int b=st.nextInt();
int c=st.nextInt();
if((c+a)<w)
{
sum=sum+(a*b);
}
}
System.out.println(sum);
sum=0;
}
}
}
