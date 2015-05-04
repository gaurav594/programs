import java.util.Scanner;
class fibo
{
public static void main(String args[])
{int b,i,f,n;
int a[]=new int[10011];
    char s[]=new char[1011];
    Scanner st=new Scanner(System.in);
    int t=st.nextInt();
    a[0]=0;
    a[1]=1;
    for(i=2;i<5000;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
	
}
}