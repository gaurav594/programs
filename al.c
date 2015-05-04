#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,flag;
	char s[100001];
	scanf("%d",&t);
	while(t--)
 	{
		scanf("%s",s);
		l=strlen(s);
		flag=0;
		
			if(l==4)
			{
				if(s[0]==s[2] && s[1]==s[3] && s[0]!=s[1])
				{
					printf("YES\n");
				}
				else 
				{
					printf("NO\n");
				}
			}
			else if(l==2 || l==3)
			{
				if(s[0]!=s[1])
				{
					printf("YES\n");
				}
				else
					printf("NO\n");
			}
		    else
			{
			for(i=0;i<l-4;i++)
			{
				if(s[i]==s[i+2] && s[i+1]==s[i+3] && s[i]!=s[i+1])
				{
					flag=1;
				}
				else
				{
					flag=0;
				}
			}
             if(flag==1)
			 {
				 printf("YES\n");
			 }
              else
              {
				  printf("NO\n");
			  }				  
			}
		
	}
return 0;
}