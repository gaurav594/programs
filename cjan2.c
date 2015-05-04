#include<stdio.h>
int gcd(int a,int b)
{
if(b==0)return a;
else
return gcd(b,a%b);
}
int main()
{
int t,i,n,q,result,l,r,j,k1,k2,oi;
scanf("%d",&t);
while(t--)
{   
	scanf("%d%d",&n,&q);
	int arr[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	
	for(i=0;i<q;i++)
	{
	oi=0;
	 scanf("%d%d",&l,&r);
	     if (l-1==0)
		 {
		 result=arr[r];
		 j=r;
		 }
		 else
		 {
		 result =arr[0];
		 j=1;
		 }
	    
      while(j!=n)
	  { if(j==l-1)
	  {
	  while(j!=r)
	  {
	  j++;
	  }
	  if(j==n)
	  {
	  oi=1;
	  break;
	  }
	  }
	  if(oi==1)
	  {
	  break;
	  }
	 
       result = gcd(result,arr[j]);
	   j++;
	  }
     printf("%d\n",result);
	}
}
return 0;
}