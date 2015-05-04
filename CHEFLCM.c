#include<stdio.h>
int main()
{
int t,sum,i,n;
scanf("%d",&t);
while(t--)
{ sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	printf("%d\n",sum);
}
return 0;
}