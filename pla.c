#include <stdio.h>
#include <string.h>
int main(){
    char str[1000001];
    int l,i,length,mid,end;
	int t;
	scanf("%d ",&t);
	while(t--)
	{
	   scanf("%s",str);
	   l=strlen(str);
	   if(l==1)
	   {
		   printf("YES\n");
	   }
	   else if(l==2)
	   {
		   if(str[0]==str[1])
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
		   if(l%2==0)
		   {
			   mid=l/2-1;
			   end=l-1;
			   for(i=0;i<=mid;i++)
			   {
				   if(str[i]==str[end])
				   {
					   end=end-1;
				   }
				   else
				   {
					   printf("NO\n");
					   break;
				   }
			   }
			   if(i==mid+1)
			   {
				   printf("YES\n");
			   }
		   }
		   else
		   {
			   mid=l/2;
			   end=l-1;
			   for(i=0;i<mid;i++)
			   {
				   if(str[i]==str[end])
				   {
					   end=end-1;
				   }
				   else
				   {
					   printf("NO\n");
					   break;
				   }
			   }
			   if(i==mid)
			   {
				   printf("YES\n");
			   }
		   }
	   }
	}
    return 0;
}