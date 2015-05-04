#include <stdio.h>
#define min(a,b) (a < b ? a : b)
long long int a[10000005];
int main()
{
    int t;

    scanf("%d",&t);

    while(t--) {
        long long int n, k, val, sum,i;

        scanf("%lld%lld", &n, &k);

        sum = 0;
        a[0] = 0;
        int max = 0;
        for(i = 1; i <= n; i++) {
                scanf("%lld", &val);
                sum += val;
                a[i] = sum;
        }
		for(i=0;i<=n;i++)
		{
		printf("%d ",a[i]);
		}
		printf("\n");
        int l = 1, r = 1;
        sum = 0;
        while (r <= n) {
        	if (a[r] - a[l - 1] <= k) {
        		sum = a[r] - a[l - 1];
				printf("%d\n",sum);
        		if (max == r - l + 1) {
				printf("%d %d %d\n",max,val,sum);
        			val = min(sum, val);
					
				
        		}
        		if(max < (r - l + 1)) {
        			max = r - l + 1;
        			val = sum;
        		
        		}
        		r++;
        		
        	} else {
        		
        		l++;
        	}
        }
        
       printf("%lld %d",val,max);

    }
}