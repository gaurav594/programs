#include<stdio.h>
int main()
{
int t,n,i;
long long int arr[1000];
long long int k=1;
for(i=0;i<1000;i++)
{
arr[i]=k;
k=k+3;
}
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
printf("%lld\n",arr[n-1]);
}
return 0;
}