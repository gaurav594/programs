#include<cstdio>
#include<queue>
#include<vector>
#include<cstring>
typedef long long int int64;
using namespace std;
unsigned sol[1000005];
int main()
{
	int f,s,t,u,g,n;
	scanf("%d %d %d %d %d",&f,&s,&t,&u,&g);
	queue <int> q;
	q.push(s);
	
	memset(sol,-1,sizeof(sol));
	sol[s]=0;
	while(!q.empty())
	{  int64 val=q.front();
        q.pop();
        if(val==t)
		{
			break;
		}
		
		int64 to=val+u;
		int64 to1=val-g;
		if(sol[to]==-1 && to<=f )
		{
			sol[to]=sol[val]+1;
			q.push(to);
		}
		if(sol[to1]==-1 && to1>=1)
		{
			sol[to1]=sol[val]+1;
			q.push(to1);
		}
		
	}
	if(sol[t]==-1)
	{
		printf("use the stairs\n");
	}
	else
	{
	printf("%d\n",sol[t]);
	}
	return 0;
}