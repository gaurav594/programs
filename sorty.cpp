#include<cstdio>    
#include<algorithm>    
#include<vector>   
#include<cmath>   
using namespace std;
bool myfunction (int i,int j) { return (i<j); }
int main () {
   int n,a,flag;
   flag=0;
   scanf("%d",&n);
 long long int arr[n];    
   for(int i=0;i<n;i++)
   {scanf("%lld",&arr[i]);
	 
	  if(arr[i]<0)
	  {
		  flag=1;
	  }
   }
     sort(arr,arr+n, myfunction); 

           if(flag==1)
		   {
			 printf("%lld\n",abs(arr[0]*arr[n-1])); 
		   }			   
		   else{
			    printf("%lld\n",arr[n-2]*arr[n-1]);
		   }

  return 0;
}