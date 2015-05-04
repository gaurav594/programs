#include<cstdio>
#include<queue>
#include<vector>
#include<cstring>
typedef long long int int64;
int arr[1005];
using namespace std;
int main()
{
	int t,tar,n,i;
	scanf("%d %d",&t,&tar);
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	queue <int> q;
	q.push(t);
	int sol[100005];
	memset(sol,-1,sizeof(sol));
	sol[t]=0;
	while(!q.empty())
	{  int64 val=q.front();
        q.pop();
        if(val==tar)
		{
			break;
		}
        for(i=0;i<n;i++)
		{
		int64 to=arr[i]*val;
		to%=100000;
		if(sol[to]==-1)
		{
			sol[to]=sol[val]+1;
			q.push(to);
		}
		}
	}
	printf("%d\n",sol[tar]);
	return 0;
}