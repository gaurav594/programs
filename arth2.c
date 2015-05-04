#include<stdio.h>
#include<string.h>	
int main()
{
int t,k,i,a,b,j,d;
char str[1000000];
char oper[1000000];
scanf("%d ",&t);
while(t--)
{k=1; i=0;a=0;b=0;
char ch;
	gets(str);
	int len=strlen(str);
	 while(str[i]!='*' && str[i]!='+'&&str[i]!='-'&&str[i]!='/')
	 {
		 if(str[i]!=' ')
		 {
			 d=str[i]-'0';
			 a=a*10+d;
		 }
		 i++;
	 }
	 oper[0]=str[i];
	 for(j=i+1;j<len-1;j++)
	 {
		  while(str[j]!='*'&&str[j]!='+'&&str[j]!='-'&&str[j]!='/'&&str[j]!='=')
		 {
			 if(str[j]!=' ')
			 {
				 d=str[j]-'0';
				 b=b*10+d;
			 }
			 j++;
		 }
		if(str[j]!='=')
		{
			oper[k]=str[j];
		}
		ch=oper[k-1];
		if(ch=='+')
		{
			a=a+b;
		}
		else if(ch=='-')
		{
			a=a-b;
		}
		else if(ch=='*')
		{
			a=a*b;
		}
		else if(ch=='/')
		{
			a=a/b;
		}
		b=0;
		k=k+1;
	 }
	 printf("%d\n",a);
	gets(str);
}
return 0;
}