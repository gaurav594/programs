#include<cstdio>
using namespace std;
int arr[1000001];
int main()
{
	int t,i;
	
	scanf("%d",&t);
	int x=0;
	for(i=0;i<t;i++)
	{
	  scanf("%d",&arr[i]);
	}
	for(i=0;i<t;i++)
	{
		x^=arr[i];
	}
	printf("%d",x);
	return 0;
}