#include<stdio.h>
int main()
{
int t,a,b,c;
scanf("%d",&t);
while(t--)
{
int o=0,k=0,f=0;
scanf("%d%d",&a,&b);
scanf("%d",&c);
if(c>a)
{
k=a;
while(k%c!=0)
{
k=k+b;
o=o+1;
if(k%c==0)
{
f=1;
break;
}
}
if(f==1)
{
printf("%d",o);
}
else
{
printf("%d",-1);
}
}

}
return 0;
}