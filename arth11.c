#include<stdio.h>
#include<string.h>
int main()
{
int t,i,k,j,a,b,temp,len,d;
char ch;
char str[1000000];
char oper[1000000];
scanf("%d",&t);
while(t--)
{	
i=0,k=1,temp=0,len=0;
gets(str);
len=strlen(str);
		while(str[i]!='*'&&str[i]!='+'&&str[i]!='-'&&str[i]!='/')
		{
			if(str[i]!=' ')
			{
				d=str[i]-'0';
				a=a*10+d;
			}
			i++;
		}
		oper[0]=str[i];
	for(j=i+1;j<len;j++)
	{
	while(str[j]!='*'&&str[j]!='+'&&str[j]!='-'&&str[j]!='/')
	{
		if(str[j]!=' ')
		{
			d=str[j]-'0';
			b=b*10+d;
		}
		j++;
	}
	if(str[j]!='=')
		oper[k]=str[i];
	ch=oper[k-1];
	if(ch='+')
	{
		temp=a+b;
	}
	if(ch='-')
	{
		temp=a-b;
	}
	if(ch=='*')
	{
		temp=a*b;
	}	
	if(ch=='/')
	{
		temp=a/b;
	}
	a=temp;
	b=0;
	k=k+1;
}
printf("%d",a);
gets(str);
}
return 0;
}