#include<stdio.h>
int main()
{
	int t,n,i,k;
	scanf("%d",&t);
	while(t--)
	{     
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		
		k=1;
		while(arr[k-1]!=0)
		{   if(arr[k-1]==0)
			{
				break;
			}
			printf("%d\n",arr[k-1]);
			k=2*k+1;
		}
		k=2;
		while(arr[k-1]!=0)
		{   if(arr[k-1]==0)
			{
				break;
			}
			printf("%d\n",arr[k-1]);
			k=2*k;
		}
		printf("\n");
	}
	return 0;
}