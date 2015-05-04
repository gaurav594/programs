#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int n,m;
    scanf(" %d %d", &n, &m);
    vector <int> adj[n];
    for(int i = 0; i < m; i ++)
    {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    bool visited[n];
    for(int i = 0; i < n; i ++)
        visited[i] = false;
    queue <int> q;
    q.push(0);
    while(!q.empty())
    {
        int curr = q.front();
        visited[curr] = true;
        q.pop();
        for(int i = 0; i < adj[curr].size(); i ++)
		
        {
            if(!visited[adj[curr][i]])
            {    printf("%d",adj[curr][i]+1);
                q.push(adj[curr][i]);
                visited[adj[curr][i]] = true;
				
            }
        }
    }
    return 0;
}