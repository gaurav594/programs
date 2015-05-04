#include <stdio.h>
#include <math.h>
#include<stdlib.h>
int printPowerSet(int set[], int set_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
	int c=0;
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
		  {
            if(set[j]!=' ')
			{
			c=c+set[j];
			}
		  }
       }
    }
	return c;
}
 
/*Driver program to test printPowerSet*/
int main()
{
int t,n,i;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
int *arr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
	arr[i]=i+1;

    printf("%d\n",printPowerSet(arr,n));
 
}
    return 0;
}