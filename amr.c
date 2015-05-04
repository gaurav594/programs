#include<stdio.h>
int main()
{
int t,n,a,d,k,s,i,o;
scanf("%d",&t);
while(t--)
{
scanf("%d %d %d",&n,&a,&d);
s=a;
k=0;
o=0;
for(i=0;i<n;i++)
{
s=s+o;
k=k+s;
o=d;
}
printf("%d\n",k);
}
return 0;
}