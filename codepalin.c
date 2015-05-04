#include<stdio.h>
#include<string.h>
int main()
{
int t,i;

scanf("%d",&t);
while(t--)
{ 
char arr[20];
scanf("%s",arr);
int len=strlen(arr);
int middle=0,end=0;
if(len==1)
{
printf("YES");
}
else if(len==2)
{
if(arr[0]==arr[1])
{
printf("YES\n");
}
else
{
printf("NO\n");
}
}
else
{
            if(len%2==0)
            {
                middle=len/2-1;
                end=len-1;
                for(i=0;i<=middle;i++)
                {
                    if(arr[i]==arr[end])
                        end=end-1;
                    else{
                        printf("NO\n");
                        break;
                    }
                }
                if(i==middle+1)
                    printf("YES\n");
            }
            else
            {
                middle=len/2;
                end=len-1;
                for(i=0;i<middle;i++)
                {
                    if(arr[i]==arr[end])
                        end=end-1;
                    else
                    {
                        printf("NO\n");
                        break;
                    }
                }
                if(i==middle)
                    printf("YES\n");
            }
        }
}
return 0;
}