#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int n,a[100010];
bool dp[10010];
void init()
{
    scanf("%d",&n);
    for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
}
void solve()
{
    memset(dp,false,sizeof(dp));
    dp[0]=true;
    for(int i=0;i<n;++i)
    {
        for(int j=10000;j>=a[i];--j)
        {
            if(dp[j-a[i]])
            {
                if(dp[j]){puts("YES");return ;}
                else dp[j]=true;
            }
        }
    }
    puts("NO");
}
int main()
{
//    freopen("in.txt","r",stdin);
    int t;
    for(scanf("%d",&t);t--;)
    {
        init();
        if(n>100)
        {
            puts("YES");continue;
        }
        solve();
    }
    return 0;
}