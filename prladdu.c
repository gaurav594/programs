#include<stdio.h>
int main(void)
{
    int t=0,n=0,i=0,j=0;
	long long int dnv=0,grass=0;
    int d[100000];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        scanf("%d",&d[j]);

        for(j=0; j<n; j++) {
            dnv+=d[j];
            if(dnv>0)
                grass=grass+dnv;
            else
                grass=grass-dnv;
        }
        printf("%lld\n",grass);
        grass=dnv=0;
    }

    return 0;
}