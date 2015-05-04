#include<stdio.h>
int main()
{
int l=5;
int display,i,j;
for(i=0;i<l;i++)
{
int t1=0;
int t2=1;
printf("%d",t2);
for(j=1;j<=i;j++)
{
display=t1+t2;
t1=t2;
t2=display;
printf("%d",display);
}
printf("\n");
}
return 0;
}
