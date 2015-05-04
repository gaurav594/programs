#include <stdio.h>

int main()
{
    int t;
    long long a, b, c;
    unsigned long long ans;
    
    scanf("%d",&t);
    while( t-- )
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        ans = a*a - 2*b;
        printf("%llu\n",ans);
    }
    
    return 0;
}