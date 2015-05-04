#include<stdio.h>
int main()
{
int t,n,sum,k,p;
scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%d",&n);
p=n;
while(p>0)
{
k=p%10;
if(n%k==0)
{
sum=sum+1;
}
p=p/10;
}
printf("%d",sum);
}
return 0;
}