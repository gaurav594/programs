#include<stdio.h>
#include<string.h>
int main()
{
int i;
char str[4];
char str1[2];
char str2[2];
for(i=0;i<2;i++)
scanf("%d",&str1[i]);
for(i=0;i<2;i++)
scanf("%d",&str2[i]);
for(i=0;i<2;i++)
{
str[i]=str1[i];
}
for(i=2;i<4;i++)
{
str[i]=str2[i-2];
}
for(i=0;i<4;i++)
{
printf("%d",str[i]);
}
return 0;
}