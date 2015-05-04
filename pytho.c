#include<stdio.h>
int main()
{
int t,i,j,k,o=0,n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=1;i<=n;i++)
  for(j=0;j<=n;j++)
    for(k=0;k<=n;k++)
	    {
		 if(i>j&&i>k)
		   {
		    if(j*j+k*k==i*i)
			      o++;
		   }
		   else if(k>i&&k>j)
		   {
		   if(j*j+i*i==k*k)
			      o++;
		   }
		   else if(j>i&&j>k)
		   {
		   if(i*i+k*k==j*j)
			      o++;
		   }
		}
		
		printf("%d\n",o);
		o=0;
}
return 0;
}