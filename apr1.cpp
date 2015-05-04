#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i,l1,l2,c,d;
char a[100000];
char b[100000];
char a1[26];
char b1[26];
scanf("%d",&t);
gets(a);
while(t--)
{ c=0,d=0;
	for(i=0;i<26;i++)
	{
		a1[i]=0;
		b1[i]=0;
	}
	gets(a);
    gets(b);
	int l1=strlen(a);
	int l2=strlen(b);
	for(i=0;i<l1;i++)
	{
		a1[a[i]-97]++;
	}
	for(i=0;i<l2;i++)
	{
		b1[b[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(a1[i]>b[i])
		{
			c=c+1;
		}
		else if(b1[i]>a1[i])
		{
			d=d+1;
		}
	}
	if(c>d)
	{
		printf("You win some.");
	}
	else if(d>c)
	{
		printf("You loose some.");
	}
	else
	{
		printf("You draw some.");
	}
}
return 0;
}