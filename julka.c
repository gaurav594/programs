#include<stdio.h>
int main()
{
int i;
for(i=1;i<=10;i++)
{long long int a,b,c,d;
scanf("%lld",&a);
scanf("%lld",&b);
c=(a+b)/2;
if(a>b)
d=a-c;
else
d=b-c;
printf("%lld\n",c);
printf("%lld",d);
printf("\n");
}
return 0;
}


