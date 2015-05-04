#include<stdio.h>
#include<stdlib.h>
int main()
{
long long int n,m,a,b,k,p,s=0,i;
scanf("%lld%lld",&n,&m);
long long int *arr =calloc(n,sizeof(long long int));
while(m--)
{
scanf("%lld%lld%lld",&a,&b,&k);
s+=(b-a+1)*k;
}

p=s/n;
printf("%lld",p);
return 0;
}