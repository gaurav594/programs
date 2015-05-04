#include<stdio.h>
#define C 1000000007
int poww(int a,int b)
{
int i,k=1;
for(i=1;i<=b;i++)
{
k=((k%C)*(a%C))%C;
}
return k-1;
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