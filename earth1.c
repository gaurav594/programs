#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	long long int n;
    	scanf("%d",&n);
    	long long int e=0,o=0;
    	for(int i=0;i<n;i++)
    	{
    		int k;
    		scanf("%d",&k);
    		if(k%2==0)
    			e++;
    		else
    			o++;
    	}
    	printf("%lld\n",e*o);
    }
    return 0;
}
