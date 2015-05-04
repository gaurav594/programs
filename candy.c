#include<stdio.h>
int main()
{
int t;
long long int n,k,b,c;
scanf("%d",&t);
while(t--)
{
scanf("%lld%lld",&n,&k);
if(k==0)
{
b=0;
c=n;
}
else
{
b=n/k;
c=n-(k*b);

}
printf("%lld %lld\n",b,c);
}
return 0;
}