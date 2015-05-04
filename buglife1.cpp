#include<bits/std++.h>
#include<String.h>
using namespace std;
int main()
{
int t,k;
scanf("%d",&t);
while(t--)
{
	k++;
	int n,n,flag=0;
	scanf("%d %d",&n,&m);
	vector<int> graph[n+1];
	for(i=0;i<m;i++)
	{
	int a,b;
	scanf("%d %d",&a,&b);
	graph[a].push_back(b);
	graph[b].push_back(a);
	}
	int *list=(int*)calloc(n+1,sizeof(int));
	memset(list,2,sizeof(list));
	 int *mark=(int *)calloc(n+1,sizeof(int));
	 for(i=1;i<=n;i++)
	 {
	 if(mark[i]==0)
	 {
	 queue<int> q;
	 q.push(i);
	 list[i]=1;
	 while(q.size()!=0)
	 {
	 int temp=q.front();
	 for(int j=0;j<graph[temp].size();j++)
		{
		if(list[graph[temp][j]]==2)
		{
		list[graph[temp][j]]=!list[temp];
		}
		else if(list[graph[temp][j]]==list[temp])
		{
			flag=1;
            break;
		}
		 if (mark[graph[temp][j]]==0)
                            q.push(graph[temp][j]);
		}
		   q.pop();
                    mark[temp]=1;
                    if (flag==1)
                        break;
	 }
	 if (flag==1)
                break;
	 }
	 }
}
return 0;
}