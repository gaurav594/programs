#include<cstdio>
#include<vector>
using namespace std;
int main()
{
int t,temp,i,j,n,k,o,f;
int arr[10000];
int ar[10000];
scanf("%d",&t);
while(t--)
{
	temp=1;
scanf("%d%d",&n,&k);
for(j=0;j<n;j++)
{
scanf("%d",&arr[j]);
}
	for(i=0;i<n-1;i++)
	{
		if(arr[i]<arr[i+1] && arr[i]!=0)
		{
			arr[i]=0;
			temp=0;
		}
	}

if(temp==1)
{
	arr[n-1]=0;
}
for(i=0;i<n;i++)
{
	printf("%d",arr[i]);
}
printf("\n");
}
return 0;
}