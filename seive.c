#include<stdio.h>
#include<math.h>
#define LIMIT 100000
int main()
{
long long int primes[LIMIT],numbers[LIMIT],i,j;

for(i=0;i<LIMIT;i++)
	{
		numbers[i]=i+2;
	}
for(i=0;i<LIMIT;i++)
	{
		if(numbers[i]!=-1)
			{
				for(j=2*numbers[i]-2;j<LIMIT;j+=numbers[i])
					{
						numbers[j]=-1;
					}
			}
	}
	
	j=0;
	for(i=0;i<LIMIT	&&j<LIMIT;i++)
		{
		if (numbers[i]!=-1)
            primes[j++] = numbers[i];
		}
		long long int t,k;
		scanf("%d",&t);
		while(t--)
		{
		scanf("%lld",&k);
		printf("%lld\n",primes[k-1]);
		}
		return 0;
}