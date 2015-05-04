#include<stdio.h>
long long int fact(long long int);
long long int ncr(long long int n,long long int r)
{long long int k;
if((fact( r)*fact(n- r))!=0)
{
  k=fact( n) / (fact( r) * fact(n- r)) ;
 }
 return k;
}
long long int fact(long long int n)
{
long long int f=1;
long long int i;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f%1000000007;
}
int main()
{
int t;
long long int sum,d,i;
scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%lld",&d);
for(i=1;i<=d;i++)
{
sum=sum+ncr(d,i);
}
printf("%lld\n",sum);
}
return 0;
}