
#include<stdio.h>
#define MOD 1000000007
#define LL long long int
int main() {
    int t,N,i;
	long long int f[100010];
	f[0]=0,f[1]=0,f[2]=1;
	for(i=3;i<100010;i++) f[i]=(f[i-1]+f[i-2]+f[i-3])%MOD;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&N);
		printf("%lld\n",f[N+2]);
	}
	return 0;
}


