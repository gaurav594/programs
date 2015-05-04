#include<stdio.h>
int main()
{
int i,j,k,o;
for(i=5;i>=1;i--)
{
for(j=i-1;j>=1;j--)
{
printf("*");
}
o=1;
for(k=i-j;k<=5;k++)
{
printf("%d",o);
o++;
}
printf("\n");
}
return 0;
}