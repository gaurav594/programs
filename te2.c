#include<stdio.h>
#include<math.h>
#define max 31627
int arr[max];
int primes[max];
int main()
{
   int i,j;
	for(i=0;i<max;i++)
	{
	 arr[i]=i+2;
	}
	for(i=0;i<max;i++)
	{
		if(arr[i]!=-1)
		{
	for(j=2*arr[i]-2;j<max;j=j+arr[i])
	{
		arr[j]=-1;
	}
		}
	}
	j=0;
	for(i=0;i<max;i++)
	{
		if(arr[i]!=-1)
		{
			primes[j]=arr[i];
			j++;
		}
	}
	int t,m,n,flag,temp;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		if(m==1)
			m++;
		for(;m<=n;m++)
		{
			flag=0;
			temp=sqrt(m);
			for(i=0;primes[i]<=temp;i++)
			{
				if(m%primes[i]==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("%d\n",m);
			}
		}
		
       
	}	 
	return 0;
}