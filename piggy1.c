#include<stdio.h>27628337
#define INF 100000000
int min(int a,int b)  {return (a>b) ? b:a;}
int knapSack(int W, int wt[], int val[], int n)
{
   int  i,w,j;
   int dp[W+1];
   for( i=0;i<=W;i++)
   {
       dp[i]=INF;
   }
   dp[0]=0;
 
   for( i=1;i<=W;i++)
   {
       for( j=0;j<n;j++)
       {
           if(wt[j]<=i)
            {
               dp[i]=min(dp[i-wt[j]]+val[j],dp[i]);
           }
       }
   }
   return dp[W];
}
 
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w1,w2,i;
        scanf("%d%d",&w1,&w2);
        int W=w2-w1;
 
        int n,wt[501],val[501];
        scanf("%d",&n);
        for( i=0;i<n;i++)
        {
            scanf("%d%d",&val[i],&wt[i]);
        }
 
        int ans=knapSack(W,wt,val,n);
        if(ans==INF)
        {
            printf("This is impossible.\n");
        }
        else
        {
            printf("The minimum amount of money in the piggy-bank is %d.\n",ans);
        }
    }
    return 0;
} 