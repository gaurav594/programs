#include<stdio.h>
#define mod 1000000007
int arr[1000000];
int main()
{
  int n,k,i,j;
  long long ans;
  scanf("%d%d",&n,&k);
  
 for(i=1;i<n;i++)
{
scanf("%d",&h);
if(h>=0&&h<=k)
{
arr[i]=h;
}
}
  
  ans=0;
  for(i=0;i<n-1;i++)
  {
   
    for(j=i+1;j<n;j++)
	{
	  if(arr[j]<arr[i])
	  {
	     ans += (j-i)+1;
		 ans%=mod;
		break;
	  }
	
	}

   
  }
  printf("%lld\n",ans%mod);
  return 0;  
}