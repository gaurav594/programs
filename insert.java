import java.util.Scanner;
class Insertion
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
for(i=1;i<a;i++)
{temp=arr[i];
j=i-1;
while(temp<arr[j]&&j>0)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
for(i=0;i<a;i++)
{
System.out.println(arr[i]);
}
}
}