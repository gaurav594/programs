#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,j;
	char str[1000005];
	scanf("%d",&t);
	while(t--)
	{
		j=-1;
		scanf("%s",str);
		int l=strlen(str);
		long long c=0;
		for(i=l-1;i>=0;i--)
		{
			if(str[i]=='a'||str[i]=='z')
			{
				c+=l-i;
				j=i;
			}
			else if(j!=-1)
				c+=l-j;
		}
		printf("%lld\n",c);
	}
	return 0;
}