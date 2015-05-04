#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)return a;
else
return gcd(b,a%b);
}
int main()
{   
int n,result,i,j;
int arr[10];
    scanf("%d",&n);
   for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	result =arr[0];
	i=1;
      while(i!=n)
	  {
	  printf("%d %d",result,arr[i]);
       result = gcd(result,arr[i]);
	    i++;
	  }
     
     printf("%d\n",result);
	return 0;
}