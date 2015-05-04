class Lis
{
public static void main(String args[])
{
int arr[]={10,22,9,33,21,50,41,60,80 };

int arrr[]=new int[10];
int j=0;
int l=6;
int c=0;
for(int i=0;i<l-1;i++)
{
if(arr[i]<arr[i+1])
{
arrr[j]=arr[i];
j++;
c++;
}
}
for(int i=0;i<c;i++)
{
System.out.println(arrr[i]);
}
}
}