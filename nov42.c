#include<stdio.h>
#define m 1000000007
int poww(int b, int e)
{
int remainder;
int x = 1;

while (e != 0)
{
remainder = e % 2;
e= e/2;

if (remainder == 1)
x = (x*b)%m;
b=(b*b)%m;
}
return x-1;
}
int main()
{
int t,n;
int sum;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
sum=poww(2,n);
printf("%d\n",sum);
}
return 0;
}