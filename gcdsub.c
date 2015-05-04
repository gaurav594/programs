#include<stdio.h>
int GCD(int a,int b);
int main()
{
int t,n,i,ans,fg;
scanf("%d",&t);
while(t--)
{
fg=0;
scanf("%d",&n);
int a[n+5];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
ans=a[0];
for(i=1;i<n;i++)
{
ans=GCD(ans,a[i]);
if(ans==1)
{
fg=1;
break;
}
}
if(fg==1)
{
printf("%d\n",n);
}
else
{
printf("-1\n");
}
}
return 0;
}
int GCD(int a,int b)
{
if(b!=0)
{
return GCD(b,a%b);
}
return a;
} 