#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
if(b==0)return a;
else
return gcd(b,a%b);
}
int main()
{
int t,c,k,a,b,m,n;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&m,&n);
if(abs(m)>abs(n))
{
k=abs(m-n);
a=abs(m);
b=abs(n);
c=gcd(a,b);

}
else
{
k=abs(n-m);
a=abs(n);
b=abs(m);
c=gcd(a,b);

}
printf("%d\n",k/c);
}
return 0;
}