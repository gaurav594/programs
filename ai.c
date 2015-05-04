#include<stdio.h>
int main()
{
char str[]="12345";
int i=0;
int res=0;
while(str[i]!='\0')
{
res=(res*10)+str[i]-'0';
i++;
}
printf("%d\n",res);
return 0;
}