#include<stdio.h>
#include<math.h>
#define LIMIT 31627
int main()
{
 int i,j;
	  int primes[LIMIT],numbers[LIMIT];
	int a,pa;
	long long int h=0;
    for (i=0;i<LIMIT;i++){
        numbers[i]=i+2;
    }

    for (i=0;i<LIMIT;i++){
        if (numbers[i]!=-1){
            for (j=2*numbers[i]-2;j<LIMIT;j+=numbers[i])
                numbers[j]=-1;
        }
    }


    j = 0;
    for (i=0;i<LIMIT&&j<LIMIT;i++)
        if (numbers[i]!=-1)
            primes[j++] = numbers[i];
			
			int t,n,k;
			scanf("%d",&t);
			while(t--)
			{j=0;
			k=0;
			scanf("%d",&n);
			while(primes[j]<=n)
			{
			k++;
			j++;
			}
			printf("%d\n",k);
			}
return 0;
}
