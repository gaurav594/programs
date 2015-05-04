#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i,l1,l2;
char a[100000];
char b[100000];
char a1[26];
char b1[26];
scanf("%d",&t);
while(t--)
{
	for(i=0;i<26;i++)
	{
		a1[i]=0;
		b1[i]=0;
	}
	gets(a);
    gets(b);
	int l1=strlen(a);
	printf("%d",l1);
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
		printf("%d",a1[i]);
	}
}
return 0;
}