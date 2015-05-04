/* Author : Vamsi Kavala */
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)	
#define mod 1000000007
#define MAXN 1000010

typedef pair<int,int>   PI;
typedef vector<int> VI;
typedef long long int LL;

int dp[250][250];
int a[250][250];

void floyd(int n)
{
	//floyd warshall to compute shortest distance between all pairs of vertices
	REP(i,n)
		REP(j,n)
		{
			dp[i][j]=a[i][j];
			if(j==i)
				dp[i][j]=0;
		}
	REP(k,n)
		REP(i,n)
			REP(j,n)
				dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);

	return;
}

int main()
{
	int n,m,s,g,d;
	scanf("%d",&n);

	REP(i,n)
		REP(j,n)
			scanf("%d",&a[i][j]);

	scanf("%d",&m);

	floyd(n);

	REP(i,m)
	{
		scanf("%d%d%d",&s,&g,&d);
		int t1=dp[s][g]+dp[g][d];
		int t2=dp[s][d];

		printf("%d %d\n",t1,t1-t2);
	}
}
