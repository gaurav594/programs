#include<stdio.h>
#include<string.h>
int main()
{
int arr[]={1,2,3,4,5,6,1,1,2,3,4,5,1,2,2,3,4,5};
int y=3;
int arrr[6];
int input1=3;
int k=1;

int s=0;
int a=6;
int i,j,temp;
while(a!=3*input1)
{
for(i=k;i<=a;i++)
{temp=arr[i];
j=i-1;
while(temp<arr[j]&&j>0)
{
arr[j+1]=arr[j];
j--;
}
arr[j+1]=temp;
}
arrr[s]=arr[a];
k=k+6;
a=a+6;

s=s+1;
}
for(i=0;i<y;i++)
{
printf("%d",arrr[i]);
}
return 0;
}