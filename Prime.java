import java.util.Scanner;
class Prime
{
public static void main(String args[])
{
int i,flag=0;
Scanner ab=new Scanner(System.in);
int n=ab.nextInt();
for(i=2;i<3=n-1;i++)
{
if(n%i==0)
flag=1;
break;
}
if(flag==0)
System.out.println("prime");
else
System.out.println("not prime");
}
}
