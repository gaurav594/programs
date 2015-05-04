#include<stdio.h>
int main()
{
int t,i;
long long int n,m,sum,ans;
scanf("%d",&t);
for(i=1;i<=t;i++)
{

scanf("%lld",&n);
sum=0;
ans=0;
while(n--)
{

scanf("%lld",&m);
sum=sum+m;
if(sum<0)
{
ans=ans-sum;
sum=0;
}
}
printf("Scenario #%d: %lld\n", i, ans + 1);
}
return 0;
}