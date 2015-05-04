#include <stdio.h>
 
int inp()
{
	int n=0,s=1;
	char c;
	for(c=getchar_unlocked();c<48||c>58;c=getchar_unlocked())
	if(c=='-')s=-1;
	for(;c>47&&c<59;c=getchar_unlocked())
	n=n*10+c-48;
	return n*s;
}
 
int gcd(int u, int v)
{
     int shift, uz, vz;
     if ( u == 0) return v;
     if ( v == 0) return u;
     uz = __builtin_ctz(u);
     vz = __builtin_ctz(v);
     shift = uz > vz ? vz : uz;
     u >>= uz;
 
     do {
       v >>= vz;
       long long int diff = v ;
       diff -= u;
       vz = __builtin_ctz(diff);
       if ( diff == 0 ) break;
       if ( diff <  0 ) 
         u = v;
       v = abs(diff);
 
     } while( 1 );
     return u << shift;
}
 
int main()
{
	int len,max_len,i,t,n,j;
	t=inp();
	for(j=1;j<=t;j++)
	{
		n=inp();
		int a[n+1];
		len=0;
		max_len=0;
		for(i=1;i<=n;i++)
			a[i]=inp();
		//int pro=a[1];
		for(i=n-1;i>0;--i)
		{
			if(gcd(a[i],a[i+1])==1)
			{
				len=i;
				break;
			}
		}
		if(len==0)
			printf("-1\n");
		else
			printf("%d\n",n);
	}
	return 0;
} 