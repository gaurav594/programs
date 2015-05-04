#include<stdio.h>
int main()
{
int t,rem=0,bin=0,a,j=1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
a=a/10;
bin=bin+rem*j;
j=j*2;
}
printf("%d\n",bin);
bin=0;
rem=0;
j=1;
}
return 0;
}