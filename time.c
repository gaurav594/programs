#include<stdio.h>
int main()
{
int a1[100],a2[100],b1[100],b2[100];
int t,i,j;
char s[12];
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%s",s);
a1[i]=(s[0]-'0')*10+(s[1]-'0');
a2[i]=(s[3]-'0')*10+(s[4]-'0');
b1[i]=(s[6]-'0')*10+(s[7]-'0');
b2[i]=(s[9]-'0')*10+(s[10]-'0');
}
i=0;
for(j=1;j<t;j++)
{
if(a1[j]>=b1[i]&&a2[j]>=b2[i])
{
printf("Who needs a moderator?\n");
i=j;
}
else
{
printf( "Will need a moderator!");
}
}
return 0;
}