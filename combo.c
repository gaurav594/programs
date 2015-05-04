#include<stdio.h>
int min(int a, int b)
{
return (a < b)? a : b;
}  
long long C(int n, int r)
{
    if (r==0) return 1;
    else return C(n-1,r-1) * n / r;
}
 
int main()
{
    int n,r,m,t;
	long long int sum;
	scanf("%d",&t);
    while (t--)
    {    sum=0;
	    scanf("%d",&n);
		for(r=1;r<=n;r++)
		{
	    sum=sum+C(n, min(r,n-r));
		}
        printf("%lld\n",sum%1000000007);
    }
}