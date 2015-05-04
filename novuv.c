#include<stdio.h>
int main()
{
int t,n,k,c;
scanf("%d",&t);
while(t--)
{

scanf("%d%d",&n,&c);
if(n<c)
{
printf("%d\n",0);
}
else
{
k=(n-c)/c;
if(k==0)
printf("%d\n",1);
else
printf("%d\n",k);
}
}
return 0;
}