#include <cstdio>
#include<vector>
#include <queue>
using namespace std;
int main()
{
	  int t,i,flag,n,m,u,v,k;
	  scanf("%d",&t);
	  k=0;
	  while(t--)
	  {
		  k++;
	scanf("%d %d",&n,&m);
	vector<int> adj[n];
	bool visited[n];
	for(i=0;i<m;i++)
	{
		scanf("%d%d",&u,&v);
		adj[u-1].push_back(v-1);
		adj[v-1].push_back(u-1);
		
	}
    int colorArr[n];
	colorArr[0]= 1;
	for(i=0;i<n;i++)
	{
		visited[i]=false;
	}
    for (i=1;i<n;i++)
        colorArr[i] = -1;
    queue <int> q;
    q.push(0);
	flag=0;
	visited[0]=true;
    while (!q.empty())
    {
        int cur=q.front();
        q.pop();
        for (i=0;i<adj[cur].size();i++)
        {
            if (!visited[adj[cur][i]] && colorArr[adj[cur][i]] == -1)
            {
                colorArr[adj[cur][i]] = 1-colorArr[cur];
                q.push(adj[cur][i]);
				visited[adj[cur][i]]=true;
            }
            else if (colorArr[adj[cur][i]]==colorArr[cur])
			{
				flag=1;
				break;
			}
        }
		if(flag==1)
		{
			break;
		}
		
    }
        printf("Scenario #%d:\n",k);
        if (flag==1)
            printf("Suspicious bugs found!\n");
        else
            printf("No suspicious bugs found!\n");
	  }
	   return 0;
}
 
