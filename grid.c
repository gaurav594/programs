#include<stdio.h>
char a[1001][1001];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,j;
        unsigned long long s=0;
        for(i=0;i<n;++i)
            scanf("%s",&a[i]);

        for(i=n-1;i>=0;--i)
        {
            for(j=n-1;j>=0;--j)
            {
                if(a[i][j]=='.')
                    a[i][j]='0';
                else
                    break;
            }
        }
		for(i=0;i<=n-1;i++)
        {
            for(j=0;j<=n-1;j++)
            {
                printf("%c",a[i][j]);
            }
			printf("\n");
        }
        for(i=n-1;i>=0;--i)
        {
            for(j=n-1;j>=0;--j)
            {
                if(a[j][i]=='#')
                    break;
                else if(a[j][i]=='0')
                    s++;
            }
        }
        printf("%llu\n",s);
    }
}
 