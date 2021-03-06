#include<bits/stdc++.h>
using namespace std;
int tree[1<<18+5];
bool flag[1<<18+5];
int max_level=0;
void left_print(int node, int cur_level)
{
	if(!flag[node] && max_level<cur_level)
	{
		printf("%d\n",tree[node]);
		flag[node]=true;
		max_level=cur_level;
	}
	if(tree[2*node]!=0)
		left_print(2*node, cur_level+1);
	if(tree[2*node+1]!=0)
		left_print(2*node+1, cur_level+1);
}
void right_print(int node, int cur_level)
{
	if(!flag[node] && max_level<cur_level)
	{
		printf("%d\n",tree[node]);
		flag[node]=true;
		max_level=cur_level;
	}
	if(tree[2*node+1]!=0)
		right_print(2*node+1, cur_level+1);
	if(tree[2*node]!=0)
		right_print(2*node, cur_level+1);
}
int main()
{
	int t;
	scanf("%d",&t);
	assert(t>=1 && t<=20);
	while(t--)
	{
		memset(flag,false,sizeof(flag));
		int n;
		scanf("%d",&n);
		assert(n>=3 && n<=(1<<18));
		int pow2=log2(n);
		assert(n==((1<<(pow2+1))-1));
		for(int i=1;i<=n;++i)
		{
			scanf("%d",&tree[i]);
			assert(tree[i]>=0 && tree[i]<=1000000);
		}
		max_level=0;
		right_print(1, 1);
		max_level=0;
		left_print(1, 1);
		printf("\n");
	}
	return 0;
}