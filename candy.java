import java.io.*;
class Candy
{
public static void main(String args[])throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int n;
while((n=Integer.parseInt(in.readLine()))!=-1)
{
int moves=0;
int avg=0;
int sum=0;
int arr[]=new int[n];
for(int i=0;i<n;i++)
{
arr[i]=Integer.parseInt(in.readLine());
sum=sum+arr[i];
}
if(sum%n!=0)
{
System.out.println(-1);
}
else
{
avg=sum/n;
for(int i=0;i<n;i++)
{
if(arr[i]<avg)
moves+=avg-arr[i];
}
System.out.println(moves);
}
System.out.flush();
}
} 
}