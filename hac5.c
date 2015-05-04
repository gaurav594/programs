#include<stdio.h>
int main()
{
int arr[100000];
int t,min,l,r,x,q,k,c=0,i,j,o;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d",&q);
for(i=0;i<q;i++)
{
scanf("%d%d%d",&l,&r,&x);
 min=arr[l-1]^x;
for(j=l;j<=r-1;j++)
{
k=arr[j]^x;
if(k<min)
{
min=arr[j]^x;
o=arr[j];
c++;
}
}
printf("%d %d\n",o,c);
c=0;
k=0;
}
return 0;
}