#include<cstdio>
#include<vector>
#include<algorithm>
#include<cassert>
#define MAXN 10000
#define MCAL 100000
#define MAXL 1000000000
using namespace std;
int main()
{
	int t,a,b,n,c1,c2,i,m;
	scanf("%d",&t);
	while(t--)
	{   c1=0,c2=0;
		scanf("%d %d %d",&a,&b,&n);
		assert(n>0 && n<=MAXN);
		assert(a>0 && a<=MCAL);
		assert(b>0 && b<=MCAL);
		vector<int> arr;
		for(i=0;i<n;i++)
		{
			scanf("%d",&m);
			assert(m>0 && m<=MAXL);
			arr.push_back(m);
		}
		
		sort(arr.begin(),arr.begin()+n);
		for(i=0;i<n;i++)
		{
			if(a>arr[i])
			{
				a=a-arr[i];
				c1++;
			}
			if(b>=arr[i])
			{
				b=b-arr[i];
				c2++;
			}
		}
		if(c1>c2)
		{
			printf("Raghu Won\n");
		}
		else if(c2>c1)
		{
			printf("Sayan Won\n");
		}
		else
		{
			printf("Tie\n");
		}
	}
}