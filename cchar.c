#include<stdio.h>
#define OUT 0
#define IN 1
int main()
{
char aw[20];
int i;
int count=0;
int state=OUT;
scanf("%s",aw);
while(aw[i]!='\0')
{
if(aw[i]=='\n'||aw[i]=='\t'|| aw[i]==' ')
{
state=OUT;
}
else if(state==OUT)
{
state=IN;
count++;
}
i++;
}
printf("%d",count);
return 0;
}