#include<stdio.h>
int rev(int n)
{   int k,d,rev=0; 
    k=n;
	while(k!=0)
	{
		d=k%10;
		rev=rev*10+d;
		k=k/10;
	}
	return rev;
}
int main()
{
int t,n,m,sum,o;
scanf("%d",&t);
while(t--)
{   sum=0;
	scanf("%d %d",&n,&m);
	sum=rev(n)+rev(m);
	o=rev(sum);
	printf("%d\n",o);
}
return 0;
}