#include<stdio.h>
int main()
{
int binary[20];
int n,q,t;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
if(n==0)
{
printf("%d",0);
}
q=n;
int i=0,j=0;
while(q!=0)
{
binary[i++]=q%2;
q=q/2;
}
for(j=i-1;j>=0;j--)
{
printf("%d\n",binary[j]);
}
}
return 0;
}