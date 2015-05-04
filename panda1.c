#include<stdio.h>
int main()
{
int t,n,x,p,k,i;
scanf("%d",&t);
while(t--)
{
k=1,p=0;
scanf("%d%d",&n,&x);
for(i=1;i<=n;i++)
{
	k=(k*i)%1000006;
}
p=k*x;
printf("%d\n",p);
}
return 0;
}