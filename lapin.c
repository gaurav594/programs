#include<stdio.h>
#include<string.h>
 #include <stdlib.h>
char arr[2001];
void sorte()
{
    char  temp;
    int n, i, j,middle,k,l;
	
    n = strlen(arr);
	middle=n/2-1;

    for (i=0; i<middle; i++)
    {
        for (j=i+1; j<=middle; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	 for (k=middle+1; k<n; i++)
    {
        for (l=i+1; l<=n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
	 printf("\n%s", arr);
}

int main()
{
    int t,middle,len,end,i,f;
  
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",arr);
        len=strlen(arr);
        if(len==1)
            printf("YES\n");
        else if(len==2)
        {
            if(arr[0]==arr[1])
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            if(len%2==0)
            {   sorte();
                middle=len/2-1;
                end=len-1;
                for(i=0;i<=middle;i++)
                {
                  	
		if(arr[i]==arr[middle+1])
			{
			middle=middle+1;
			}
                    else{
                        printf("NO\n");
                        break;
                    }
                }
                if(i==end)
                    printf("YES\n");
            }
            else
            {
                middle=len/2;
                end=len-1;
	f=middle+1;
                for(i=0;i<middle;i++)
                {
                    if(arr[i]==arr[end])
			{
                        end=end-1;
			}
		
			else if(arr[i]==arr[f])
			{
			f=f+1;
			}
                    else
                    {
                        printf("NO\n");
                        break;
                    }
                }
                if(i==middle||i==end)
                    printf("YES\n");
            }
        }
    }
    return 0;
}
