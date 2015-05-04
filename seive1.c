#include<stdio.h>
#define max 36567
int arr[max];
int prime[max];
int seive()
{    int i,j;
	for(i=0;i<=max;i++)
	{
	 arr[i]=i+2;
	}
	for(i=0;i<=max;i++)
	{
	for(j=2*arr[i]-2;i<=max;i+=numbers[i])
	{
		arr[j]=-1;
	}
	}
	j=0;
	for(i=0;i<=max;i++)
	{
		if(arr[i]!=-1)
		{
			primes[j]=arr[i];
			j++;
		}
	}
	
}
int main()
{
int t;
scanf("%d",&t);
seive();
while(t--)
{
scanf("%d%d",&n,&m);


}
return 0;
}