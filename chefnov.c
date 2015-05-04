#include<stdio.h>
long long int arr[100001];
long long int a[100001];
int main()
{
int t,n,i,j;
long long int sum;
scanf("%d",&t);
while(t--)
	{   
	
	    sum=0;	
		j=0;
	    scanf("%d ",&n);
	

		    for(i=0;i<n;i++)
			{
				scanf("%lld",&arr[i]);
			}
		    for(i=0;i<n;i++)
			{
				if(arr[i]<0)
				{  
					sum=0;
					a[i]=0;
					while(sum!=abs(arr[i])&&j<n)
					{
					if(arr[j]<0&&j!=n){ j=j+1; a[j]=0; continue;}
					if(sum+arr[j]>abs(arr[i]))
					{
					int k=abs(arr[i])-sum;
					a[i]=abs(j-i)*k;
					arr[j]=arr[j]-k;
					break;
					}
					sum=sum+arr[j];
					a[j]=abs((i-j)*arr[j]);
					j=j+1;
					}
				}
			}
			long long int s=0;
			for(i=0;i<n;i++)
			{	
		      printf("%d ",a[i]);
			if(a[i]>=0)
				s=s+a[i];
				a[i]=0;
			}
			printf("%lld\n",s);
			
	}
	
return 0;
}