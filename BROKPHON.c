#include<stdio.h>
int main()
{
	int t,c,o,i,n,k;
	scanf("%d",&t);
	while(t--)
	{   c=0;
        k=-1;
		o=0;
		scanf("%d",&n);
		int arr[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n-1;i++)
		{
			if(arr[i]!=arr[i+1])
			{   
		        if(k==i)
				{
					o++;
				}
				else
				{
					c++;
				}
			    k=i+1;
				
				
			}
		}
		if(o!=0)
		{
			printf("%d\n",2*c+o);
		}
		else
		printf("%d\n",c*2);
	}
return 0;
}