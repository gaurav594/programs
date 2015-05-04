#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
char s[50001];
long long int d[50001];
int i;
while(1)
{
	scanf("%s",s);
	if(s[0]=='0')
	{
		break;
	}
	d[0]=d[1]=1;
	int L=strlen(s);
	for(i=2;i<=L;i++)
	{    d[i]=0;
		int c1=s[i-2]-'0';
	    int c2=s[i-1]-'0';
		if(c1==1 || (c1==2 && c2 <=6))
			d[i]+=d[i-2];
		if(c2!=0)
			d[i]+=d[i-1];
	}
	printf("%lld\n",d[L]);
}
return 0;
}