#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
char string[10][50],temp[50];
printf("enter alphabets");
for(i=0;i<10;i++)
{
scanf("%s",&string[i]);
}
for(i=0;i<9;i++)
{
for(j=0;j<10-i-1;j++)
{
if(strcmp(string[i],string[i+1])>0)
{
strcpy(temp,string[i]);
strcpy(string[i],string[i+1]);
strcpy(string[i+1],temp);
}
}
}
for(i=0;i<10;i++)
{
printf("%s\n",string[i]);
}
return 0;
}