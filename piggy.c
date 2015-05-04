#include <stdio.h>
int main()
{
	int t ;
	scanf("%d",&t);
	while (t--)
	{
		int e, f, n, wt[10001], i, j, T, p, w;
		scanf("%d %d",&e,&f);
		T = f - e;
		wt[0] = 0;
		for (i = 1; i <= T; i++)
		  wt[i] = 1000000000;
		scanf("%d",&n);
		for (i = 0; i < n; i++)
		{
			scanf("%d %d",&p,&w);
			for (j = 0; j+w <= T; j++)
			{
				if (wt[j] != 1000000000 && wt[j+w] > wt[j] + p)
				  wt[j+w] = wt[j] + p;
			}
		}
		for(i=0;i<T;i++)
		printf ("%d  ",wt[i]);
		if (wt[T] == 1000000000)
		  printf ("This is impossible.\n");
		else
		  printf ("The minimum amount of money in the piggy-bank is %d.\n", wt[T]);
	}
	return 0;
} 