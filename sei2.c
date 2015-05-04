#include<stdio.h>
int main()
{
int t;
scanf("%d",&t);
int a;
while(t--)
{
    scanf("%d",&a);
    if(a%2==0)
	printf("%d\n",a/2);
	else
	printf("%d\n",(a/2+1));
}
return 0;
}