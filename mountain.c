#include<stdio.h>
int main()
{
int t,i,j,n,m;
int min=1000000;
int sub;
int a[1000],b[1000];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&m);
for(i=0;i<m;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
sub=a[i]-b[j];
sub=sub>0?sub:-sub;
min=min>sub?sub:min;
if(min==0)
{
break;
}
}
if(min==0)
{
break;
}
}
printf("%d\n",min);
}
return 0;
}