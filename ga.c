#include<stdio.h>
#define OUT 0
#define IN 1
int main()
{
char st[20];
scanf("%s",st);
int state=OUT;
int i=0;
int wc=0;
while(st[i]!='\0')
{
if(st[i]==' ' || st[i]=='\n'|| st[i]=='\t')
{
state=OUT;
}
else if(state==OUT)
{
state=IN;
}
if (state==IN)
{
++wc;
}
i++;
}
printf("%d",wc);
return 0;
}