#include<stdio.h>
#include<string.h>
int main()
{
    int t,middle,len,end,i;
    char arr[1000001];
    scanf("%d",&t);
    while(t--)
    {
	int c=0;
        scanf("%s",arr);
        len=strlen(arr);
        if(len==1)
            printf("%d\n",0);
        else if(len==2)
        {
           
                while(arr[0]!=arr[1])
				{
				 if(arr[0]>arr[1])
				 {
				 arr[0]--;
				 c++;
				 }
				 else
				 {
				 arr[1]--;
				 c++;
				 }
				}
				printf("%d\n",c);
				c=0;
				
				
        }
        else
        {
            if(len%2==0)
            {
                middle=len/2-1;
                end=len-1;
                for(i=0;i<=middle;i++)
                {
                   
                        while(arr[i]!=arr[end])
						{
						if(arr[i]>arr[end])
						{
						arr[i]--;
						c++;
						}
						else
						{
						arr[end]--;
						c++;
						}
						}
						end=end-1;
                    
                }
               
					 printf("%d\n",c);
					 c=0;
            }
            else
            {
                middle=len/2;
                end=len-1;
                for(i=0;i<middle;i++)
                {
                   
                        while(arr[i]!=arr[end])
						{
						if(arr[i]>arr[end])
						{
						arr[i]--;
						c++;
						}
						else
						{
						arr[end]--;
						c++;
						}
						}
						end=end-1;
                    
                }
					 printf("%d\n",c);
					 c=0;
            }
        }
    }
    return 0;
}
