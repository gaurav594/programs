#include<stdio.h>
int main()
{
int t,max,i,n,m,sum,o;
scanf("%d",&t);
while(t--)
	{   
	sum=0;
	o=1;
	sum=0;	
	scanf("%d %d",&n,&m);
		int arr[n];
		for(i=0;i<n;i++)
			{
				scanf("%d",&arr[i]);
			}
		max=arr[0];
		for(i=1;i<n;i++)
			{
				if(max<arr[i])
					{
						max=arr[i];
					}
			}
			i=0;
		while(m!=0)
		{
			sum=max-arr[i];
			m=m-sum;
			arr[i]=arr[i]+sum;
		
			
			if(i==n-1)
			{
			arr[i]=arr[i]+m;
			break;
			}
		i++;
			}
			
			for(i=0;i<n;i++)
			{
			if(arr[i]==max)
			   o=1;
			else
				{
				o=0;
				break;
				}
			}
				
				if(o==1)
				printf("Yes\n");
				else
				{
				printf("No\n");
				}

	}
return 0;
}