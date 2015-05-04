#include<bits/stdc++.h>
using namespace std;
int dp[1009][1009][2]={};
// dp[i][j][0] = 1 if the horizontal right section is empty from (i,j)
// dp[i][j][1] = 1 if the vertical down section is empty from (i,j)
// if dp[i][j][0]=1, then if (i,j-1) is empty, dp[i][j-1][0] is also 1
// if dp[i][j][1]=1, then if (i-1,j) is empty, dp[i-1][j][1] is also 1
// we make the dp array using these properties
// mirror can be placed at (i,j) if dp[i][j][0] and dp[i][j][1], both are 1
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,j,flag=0,fl=0,k,ans=0;
        string arr[1009];
        cin >> n;
        memset(dp,-1,sizeof(dp));
        for(i=0; i<n; i++)
            cin >> arr[i];
        for(i=n-1; i>=0; i--)
            for(j=n-1; j>=0; j--)
            {
                if(arr[i][j]=='#')continue;
                if(i==j && i==n-1)dp[i][j][0]=dp[i][j][1]=1;
                else if(j==(n-1))
                {
                    dp[i][j][0]=1;
                    if(dp[i+1][j][1]==1)dp[i][j][1]=1;
                }
                else if(i==(n-1))
                {
                    dp[i][j][1]=1;
                    if(dp[i][j+1][0]==1)dp[i][j][0]=1;
                }
                else
                {
                    if(dp[i+1][j][1]==1)dp[i][j][1]=1;
                    if(dp[i][j+1][0]==1)dp[i][j][0]=1;
                }
            }
       for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                if(dp[i][j][0]==1 && dp[i][j][1]==1)ans++;
        cout << ans << endl;
    }
    return 0;
}