#include<stdio.h>
int main()
{
int t,h,n,m,d,count,i;
scanf("%d",&t);
while(t--)
{
	count=0;
	scanf("%d%d%d",&n,&m,&d);
	for(i=0;i<n;i++)
	{
		scanf("%d",&h);
		while(h>0 && h>d)
		{
			h=h-d;
			count++;
		}
		count-1;
	}
	if(count>=m)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
return 0;
}