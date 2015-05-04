import java.util.Scanner;
class Smax
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
int a=st.nextInt();
int arr[]=new int[a];
int i;
for(i=0;i<a;i++)
{
arr[i]=st.nextInt(); 
}
int max=arr[0];
int smax=arr[1];
for(i=1;i<a;i++)
{
if(arr[i]>max)
{
smax=max;
max=arr[i];
}
else if(arr[i]>smax)
{
smax=arr[i];
}
}
System.out.println("second largest "+smax);
}
}