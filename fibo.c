#include<stdio.h>
#include<math.h> 
int main()
{
    int t,a[10011]={0},b,i,f,n;
    char s[1011];
 
    scanf("%d",&t);
    a[0]=0;
    a[1]=1;
    for(i=2;i<5000;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    while(t--)
    {
        n=0;
        f=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            n*=10;
            n+=(s[i]-'0');
        }
 
        for(i=0;i<5000;i++)
        {
            if(n==a[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
 
    }
 
    return 0;
}