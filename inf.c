#include<stdio.h>
#include<string.h>
int main()
{
char arr[100];
int t;
scanf("%d",&t);
while(t--)
{
int k=1;
scanf("%s",arr);
int l=strlen(arr);
int ars[26]={0};

int i;
for(i=0;i<l;i++)
{
ars[arr[i]-97]++;
}

for(i=0;i<26;i++)
{
if(ars[i]==0)
{
k=0;
}
}
if(k==0)
printf("NO\n");
else
printf("YES\n");
}
return 0;
}