#include<cstdio>
#include<vector>
using namespace std;
int main()
{
int t,temp,i,j,n,k,o,f,a;
vector<int> arr;
scanf("%d",&t);
while(t--)
{
	temp=1;
scanf("%d%d",&n,&k);
for(j=0;j<n;j++)
{
scanf("%d",&a);
arr.push_back(a);
}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]<arr[i+1])
		{
			arr.erase(i);
			temp=0;
		}
	}

if(temp==1)
{
	arr.push_back(0);
}
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
printf("\n");
}
return 0;
}