#include<stdio.h>
int main()
{
int t,i,n;
scanf("%d",&t);
while(t--)
{
	scanf("%d",&n);
	int arr[n+1];
	int ar[n+1];
	int kr[n+1];
	int c=0;
	int k=-1;
	for(i=0;i<=n;i++)
	{
		kr[i]=0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&arr[i],&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]==1 && kr[arr[i]]!=1 )
		{
			kr[arr[i]]=1;
			c++;
			if(c>k)
			{
			k=c;
			}
		}
		else if(ar[i]==0)
		{
			
			if(c>k)
			{
				k=c;
			}
			c=0;
		}
		else if(k==-1)
		{
			k=c;
		}
		
	}
	
	printf("%d\n",k);
}
return 0;
}