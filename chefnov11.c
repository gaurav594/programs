#include<stdio.h>
#include<math.h>
long long int arr[100001];
long long int a[100001];
int main()
{
int t,n,i,j,k,p;
long long int sum;
scanf("%d",&t);
while(t--)
	{   
	
	    sum=0;	
		j=0;
		k=0;
		p=0;
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
					p=abs(arr[i]);
					while(sum!=p&&j<n)
					{
					if(arr[j]<=0&&j!=n){ j=j+1; a[j]=0; continue;}
					if(abs(arr[i])>arr[j])
					{
						
						k=abs(arr[i])-arr[j];
						
						a[j]=abs((i-j)*arr[j]);
						
						arr[i]=-k;
						sum=sum+arr[j];
				
						if(sum!=p)
						{
						j=j+1;
						}
						else
					    {
						break;
						}
						
					}
					if(arr[j]>abs(arr[i]))
					{
			
						k=arr[j]-abs(arr[i]);
						
						a[i]=abs((arr[j]-k)*(j-i));
						
						
						sum=sum+(arr[j]-k);
							arr[j]=k;
						
						if(sum!=p)
						{
						j=j+1;
						}
						else
					    {
						break;
						}
					}
					if(arr[j]==abs(arr[i]))
					{
						sum=sum+arr[j];
					a[j]=abs((i-j)*arr[j]);
					j=j+1;
						
					}
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