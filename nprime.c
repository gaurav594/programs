#include<stdio.h>
#include<math.h>
#define LIMIT 100
int main()
{
int i,j;
int primes[LIMIT],numbers[LIMIT];

for(i=0;i<LIMIT;i++)
	  numbers[i]=i+2;
	 
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
for(i=0;i<LIMIT&&j<LIMIT;i++)
	{
	 if (numbers[i]!=-1)
            primes[j++] = numbers[i];
	}
	
	int n;
	scanf("%d",&n);
	printf("%d\n",primes[n-1]);

return 0;
}