import java.util.Scanner;
class Bubble
{
public static void main(String args[])
{
System.out.println("enter the no of elements");
Scanner c=new Scanner(System.in);
int a=c.nextInt();
int arr[]=new int[a];
int i,j,n,temp;
for(i=0;i<a;i++)
{
arr[i]=c.nextInt();
}
for(i=0;i<a-1;i++)
{
for(j=0;j<a-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<a;i++)
{
System.out.println(arr[i]);
}
}
}