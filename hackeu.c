#include<stdio.h>
int main()
{
int arr[60];
int i,n;
n=1;
arr[0]=1;
arr[1]=2;
for(i=2;i<=60;i++)
{
if(i%2!=0)
{
arr[i]=arr[i-1]+arr[i-1];
}
else
{
arr[i]=arr[i-1]+1;
}
}
int t,u;
scanf("%d",&t);
while(t--)
{
scanf("%d",&u);
printf("%d\n",arr[u]);
}
return 0;
}