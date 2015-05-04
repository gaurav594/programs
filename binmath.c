#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)
      return a;
else
      return gcd(b,a%b);
}
int main()
{
int t,a,b,c;
long long int x,y;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&a,&b);
c=gcd(a,b);
x=b/c; 
y=a/c;
printf("%lld %lld\n",x,y);
}
return 0;
}