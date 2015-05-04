#include<stdio.h>
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int a1,b1,t,len1,len2,i,j,m,temp1,temp2;
    int str1[2100];
    int str2[2100];
    static int a[20001][2001];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a1);
		for(i=0;i<a1;i++)
		{
		scanf("%d",&str1[i]);
		}
        scanf("%d",&b1);
		for(i=0;i<b1;i++)
		{
		scanf("%d",&str2[i]);
		}
        for(i=0;i<=a1;i++)
            a[i][0]=i;
        for(i=1;i<=b1;i++)
            a[0][i]=i;
        for(i=1;i<=a1;i++)
        {
            for(j=1;j<=b1;j++)
            {  
                m=(str1[i-1]==str2[j-1]) ? 0:1;
                temp1=min(a[i-1][j]+1,a[i][j-1]+1);
              temp2=a[i-1][j-1]+m;
              a[i][j]=min(temp1,temp2);
            }
        }
        printf("%d\n",a[a1][b1]);
    }
    return 0;
}
