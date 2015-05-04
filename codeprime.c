#include<stdio.h>
#include<string.h>
int main()
{
int n,i,l;
char str[20];
scanf("%d",&n);
while(n--)
{
scanf("%s",str);
int l=strlen(str);
for(i=l-1;i>=0;i--)
{
printf("%c",str[i]);
}
printf("\n");
}
return 0;
}