#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
int n,c,m,d,k,o;
while(t--)
{
scanf("%d%d%d",&n,&c,&m);
d=n/c;
k=d/m;
while(d>=m)
{
k=k+d%m;
}
o=d+k;
printf("%d\n",o);
}
return 0;
}