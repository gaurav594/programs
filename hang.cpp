#include<cstdio>
#include <cmath>
using namespace std;
int main()
{    int i;
	float t,sum,m;
	scanf("%.2f",&t);
	while(t!=0.0000)
	{   i=1;
		sum=0;
		while(sum<=t)
		{   m=(float)(1/(1+i));
			sum=sum+m;
			i++;
		}
		printf("%d card(s)",i-1);
		sum=0;
		scanf("%f",&t);
	}
	printf("%f",t);
	return 0;
}