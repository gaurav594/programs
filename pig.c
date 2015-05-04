#include <stdio.h>
int min(int a, int b) { return (a < b)? a : b; }
int dp[100000];
int main()
{
	int e, f,i,j, t, n;
	
	scanf("%d",&t);
	
	while (t--) {
		scanf("%d%d%d",&e,&f,&n);
		int w[n + 1], p[n + 1];
		int c=-1;
		int d=sizeof(dp);
		void *memset(int *dp,int c, int d);
		dp[0] = 0;
		
		for (i = 1; i <= n; i++) {
			scanf("%d%d",&p[i],&w[i]);
			if (dp[w[i]] == -1) {
				dp[w[i]] = p[i];
			} else {
				dp[w[i]] = min(dp[w[i]] , p[i]);
			}
		}
		
		for (i = 0; i <= f-e; i++) {
			
				if (dp[i] == -1) {
					continue;
				}
			for (j = 1; j <= n; j++) {
				if (i + w[j] <= f) {
					if(dp[i+w[j]] == -1)
					{ dp[i + w[j]] = dp[i] + p[j];}
					else
					{dp[i +w[j]] = min (dp[i+w[j]], dp[i] + p[j]);}
				}
			}
		}
		if (dp[f - e] != -1)
		printf("The minimum amount of money in the piggy-bank is %d.\n",dp[f-e]);
		else 
		printf( "This is impossible.\n");
	}
	
	return 0;
}