#include<stdio.h>
#include<string.h>
int main()
{
char c[1005];
unsigned long long int b,a,ans,l,t,i;
scanf("%llu",&t);
for(i=0;i<t;i++)
{
scanf("%s",c);
l=strlen(c);
a=c[l-1]-'0';
scanf("%llu",&b);
if(a==0)
{
ans=0;
}
else if(a==5)
{
ans=5;
}
else if(b==0&&a!=0)
{
ans=1;
}
else
{
switch(b%4)
{
case 0: ans=a%2!=0? 1:6;
break;
case 1: ans=a;
break;
case 2: ans=a*a%10;
break;
default : ans=a*a*a%10;
break; 
}

}
printf("%d\n",ans);
}
return 0;
}