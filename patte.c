#include<stdio.h>
int main()
{int i,j,u,k=0;
for(i=1;i<=4;i++)
{
for(j=1;j<=i;j++)
{
k++;
u=k;
}
for(j=1;j<=i;j++)
{
printf("%d",k);
k--;
}
k=u;
printf("\n");
}
return 0;
}
