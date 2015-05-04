#include<stdio.h>
int main()
{
long long int t;
scanf("%lld",&t);
while(t>1)
{
	if(t%2==0)
	{
		t=t/2;
	}
	else
	{
		break;
	}
}
if(t==1)
{
	printf("TAK\n");
}
else
{
	printf("NIE\n");
}
return 0;
}