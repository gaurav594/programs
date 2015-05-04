#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int main()
{
    int t,a1,b1,len1,len2,i,j,m,temp1,temp2;
    int arr1[2100];
    int arr2[2100];
	char str1[2100];
    char str2[2100];
    static int a[20001][2001];
    scanf("%d",&t);
    while(t--)
    {  scanf("%d",&a1);
	for(i=0;i<a1;i++)
	{
        scanf("%d",&arr1[i]);
	}
	for(i=0;i<a1;i++)
	{
	str1[i]=(char)arr1[i];
	}
		scanf("%d",&b1);
	for(i=0;i<b1;i++)
	{
        scanf("%d",arr2[i]);
	}
	for(i=0;i<b1;i++)
	{
	str2[i]=(char)arr2[i];
	}
	 len1=strlen(str1);
     len2=strlen(str2);
        for(i=0;i<=len1;i++)
            a[i][0]=i;
        for(i=1;i<=len2;i++)
            a[0][i]=i;
        for(i=1;i<=len1;i++)
        {
            for(j=1;j<=len2;j++)
            {
                m=(str1[i-1]==str2[j-1]) ? 0:1;
                temp1=min(a[i-1][j]+1,a[i][j-1]+1);
              temp2=a[i-1][j-1]+m;
              a[i][j]=min(temp1,temp2);
            }
        }
        printf("%d\n",a[len1][len2]);
    }
    return 0;
}
