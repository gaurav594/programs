#include<stdio.h>
int main()
{
long long int j=0,i;
long long int arr[1000000000];
for(i=0;i<1000000000;i++)
{
if(i%3==0||i%5==0)
{
arr[j]=i;
j++;
}
}
long long int c=0,t,a;
scanf("%lld",&t);
for(j=0;j<t;j++)
{
j=0;
scanf("%lld",&a);
while(arr[j]<a)
{
c=c+arr[j];
j++;
}
printf("%lld",c);
c=0;
}
return 0;
}
