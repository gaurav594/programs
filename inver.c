#include<stdio.h>
int main()
{
int n,i,k,j,count=0;
scanf("%d",&n);
	while(n--)
		{
			scanf("%d",&k);
			int arr[k];
				for(i=0;i<k;i++)
				{
					scanf("%d",&arr[i]);
				}
				for(i=0;i<k-1;i++)
				{
				for(j=i+1;j<k;j++)
					{
					if(arr[i]>arr[j])
					{
					count++;
					}
					}
				}
				printf("%d\n",count);
				count=0;
		}
return 0;
}