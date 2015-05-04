#include<stdio.h>
#include<stdio.h>
int  main()
{
int t,a,b,c;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&a,&b);
c=b-a;
printf("%d\n",abs(c));
}
return 0;
}