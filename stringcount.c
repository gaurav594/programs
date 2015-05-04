#include<stdio.h>
#include<string.h>
int main()
{
int i;
char string1[120];
int alpha[26];
scanf("%s",string1);
int l=strlen(string1);
int c=0;
for(i=0;i<26;i++)
{
alpha[i]=0;
}
for(i=0;i<l;i++)
{
alpha[string1[i]-97]++;

}
int visited[26];
for(i=0;i<26;i++)
{
visited[i]=0;
}
for(i=0;i<l;i++)
{
if(!visited[string1[i]-97])
{
printf("%c%d",string1[i],alpha[string1[i]-97]);
visited[string1[i]-97]=1;
}
}

return 0;
}