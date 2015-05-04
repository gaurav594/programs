#include<stdio.h>
int Comb(int n, int k)
{
    int result = 1;
	int i;
    for (i = 1; i <= k; i++)
    {
        result *= n - (k - i);
        result /= i;
    }

    return result;
}
int main()
{
int t,sum,k,n,c;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(k=1;k<=n;k++)
{
sum=0;
c=Comb(n,k);
sum=sum+c;
}
sum=sum%1000000007;
printf("%d\n",sum);
}
return 0;
}