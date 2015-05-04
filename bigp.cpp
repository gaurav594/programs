#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
int main()
{int n,m,i,u,v,k=1,cur;
scanf("%d%d",&n,&m);
vector <int> adj[n];
for(i=0;i<m;i++)
{
scanf("%d %d",&u,&v);
adj[u].push_back(v);
adj[v].push_back(u);
}
bool visited[n];
for(i=0;i<n;i++)
{
	visited[i]=false;
}
queue <int> q;
q.push(0);
int ar[n];
ar[0]=0;
while(!q.empty())
{
	cur=q.front();
	visited[cur]=true;
	q.pop();
	for(i=0;i<adj[cur].size();i++)
	{
		if(!visited[adj[cur][i]])
		{ 
	     
			ar[adj[cur][i]]=ar[cur]+1;
			q.push(adj[cur][i]);
			visited[adj[cur][i]]=true;
			
		}
		
	}
}
for(i=1;i<n;i++)
{
	printf("%d\n",ar[i]);
}
return 0;
}