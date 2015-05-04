#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
int main()
{
int n,m,cur,i;
scanf("%d %d",&n,&m);
vector <int> adj[n];
for(i=0;i<m;i++)
{
int u,v;
scanf("%d %d",&u,&v);
adj[u-1].push_back(v-1);
adj[v-1].push_back(u-1);
}
bool visited[n];
for(i=0;i<n;i++)
{
visited[i]=false;
}
queue <int> q;
q.push(0);
printf("%d",adj[0][0]);
while(!q.empty())
{
	cur=q.front();
	visited[cur]=true;
	q.pop();
	for(i=0;i<adj[cur].size();i++)
	{
		if(!visited[adj[cur][i]])
		{
			printf("%d",adj[cur][i]+1);
			q.push(adj[cur][i]);
			visited[adj[cur][i]]=true;
		}
	}
	printf("\n");
}
return 0;
}