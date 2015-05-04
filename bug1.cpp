#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
int main()
{
	int t,k,n,m,u,v,flag,i;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{  flag=1;
		scanf("%d %d",&n,&m);
		vector <int> adj[n];
		for(i=0;i<m;i++)
		{
			scanf("%d %d",&u,&v);
			adj[u-1].push_back(v-1);
			adj[v-1].push_back(u-1);
		}
		bool visited[n];
		for(i=0;i<n;i++)
		{
			visited[i]=0;
		}
		queue <int> q;
		q.push(0);
		while(!q.empty())
		{
			int cur=q.front();
			visited[cur]=true;
			q.pop();
			for(i=0;i<adj[cur].size();i++)
			{
				if(!visited[adj[cur][i]])
				{
					flag=1;
					q.push(adj[cur][i]);
					visited[adj[cur][i]]=true;
				}
				else
				{
					flag=0;
					break;
				}
			}
			if(flag==0)
			{
				break;
			}
		}
		if(flag)
		{
			printf("Scenario #%d:\n",k+1);
			printf("No suspicious bugs found!\n");
		}
		else
		{
			printf("Scenario #%d:\n",k+1);
			printf("Suspicious bugs found!\n");
		}
	}
	return 0;
}