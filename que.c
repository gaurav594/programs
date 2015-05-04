#include<stdio.h>
int main()
{
int n,k,h,i;
int t=0;
int sum=0;
scanf("%d%d",&n,&k);
int arr[n];
for(i=1;i<n;i++)
{
scanf("%d",&h);
if(h>=0&&h<=k)
{
arr[i]=h;
}
}
for(i=0;i<n;i++)
{
if(arr[i]<=arr[i+1])
{
t++;
}
else
{
sum=sum+(i+1)-i+1;
break;
}
if(t==n)
{
sum=0;
}
}
printf("%d\n",sum%1000000007);
return 0;
}