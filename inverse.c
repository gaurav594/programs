#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,k,n,t;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	int *arr=(int*)malloc(sizeof(int));
	for(i=1;i<=n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
	if(arr[arr[i]]==(arr[i]))
	{
	k=1;
	}
	else
	{
	k=0;
	break;
	}
	}
	if(k)
	{
	printf("inverse\n");
	}
	else
	{
	printf("not inverse\n");
	}
}
return 0;
}