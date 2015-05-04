#include<stdio.h>
int main()
{
int arr[1414];
int t,i,q,j,c=0,k,a,b;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&q);
for(j=0;j<q;j++)
{
scanf("%d%d",&a,&b);
if(a==b||a+1==b)
{
printf("%d\n",arr[a-1]);
}
else
{
if(a>b)
{
c=(a+b)-b;
}
else
{
c=(a+b)-a;
}
if(c%2==0)
{
c=(a-1)+c/2;
}
else
{
c=(a-1)+c/2+1;
}
printf("%d\n",arr[c-1]);
}
}
return 0;
}