#include <stdio.h>

int main()
{
int n,x,i;
scanf("%d",&n);
for(i=0;i<n;i++)
printf("*");
printf("\n");
for(x=n-2;x>0;x--)
{
for(i=0;i<x;i++)
printf(" ");
printf("*\n");
}
for(i=0;i<n;i++)
printf("*");

return 0;
}