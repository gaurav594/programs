#include<stdio.h>

int main()
{
	
	int t;
	scanf("%d",&t);
	while(t--)
	{
	
	long long x,y,X,Y,i,j;
	scanf("%lld %lld",&x,&y);
    int arr[1000001]={0};
    for(i=2;i*i<=y;i++)
    {
    	if(x%(i*i)!=0)
    	X=x/(i*i)+1;
    	else
    	X=x/(i*i);
    
    	Y=y/(i*i);
    	
       	for(j=X;j<=Y;j++)
       	{
       		arr[i*i*j-x]=1;
       	}
       	
    }
    long long count=0;
	for(i=0;i<y-x+1;i++)
	if(!arr[i])
	count++;
	printf("%lld\n",count);
	
	
	}   
	return 0;
}