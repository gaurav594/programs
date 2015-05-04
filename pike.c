#include<stdio.h>
int main()
{
int t,x,k,n,i;
int arr[1000];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d",&x);
	arr[i]=x;
	}
	k=n;
	
	for(i=1;i<n-1;)
	{    
		if(arr[i]!=arr[i+1]&&i+1!=n-1)
		{
		k=k+1;
		i=i+1;
		}
		else if(arr[i]%2!=0)
		{
		k=k+1;
		i++;
		}
		else
		{
		i=i+1;
		}
	}
	printf("%d\n",k);
}
return 0;
}
