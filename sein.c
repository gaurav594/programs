#include<stdio.h>
int main()
{
	int k=0,ans,o,c,i;
	char s[20001];
while(1)
{   o=c=0;
	scanf("%s",s);
	if(s[0]=='-')
		break;
	i=0;
	while(s[i]!='\0')
	{
	if(s[i]=='{')
	{
		o++;
	}
	else
	{
		o--;
		if(o<0)
		{
			o=1;
			c++;
		}
	}
	i++;
	}
	
	ans = c+o/2;
    printf("%d. %d\n",k+1,ans);
	k++;
}
return 0;
}