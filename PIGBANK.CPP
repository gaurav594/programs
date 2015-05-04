#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<cmath>
#include<cassert>
 
using namespace std;
 
#define mod 1000000007
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
#define X first
#define Y second
#define pb push_back
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define all(c) c.begin(),c.end()
#define MAXN 100010
#define INF 1000000000
 
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef vector<int> vi;
typedef pair<int,int> pii;
 
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		vector<int> dp(10050,INF);
		int E,F,W;
		scanf("%d %d",&E,&F);
		W=F-E;
		int N;
		scanf("%d",&N);
		for(int i=0;i<N;i++){
			int p,w;
			scanf("%d %d",&p,&w);
			if(dp[w]>p){
				dp[w]=p;
				for(int j=1;j<=W-w;j++){
					if(dp[j+w]>dp[j]+dp[w])
					    dp[j+w]=dp[j]+dp[w];
				}
			}
		}
		if(dp[W]!=INF) printf("The minimum amount of money in the piggy-bank is %d.\n",dp[W]);
		else printf("This is imposssible.\n");
	}
    getchar();getchar();
    return 0;
}
 