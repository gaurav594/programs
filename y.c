#include<stdio.h>
int main()
{
int i,j,l;
int k=9;
for(i=0;i<5;i++)
{
for(l=0;l<i;l++)
{
printf(" ");
}
for(j=0;j<k;j++)
{
printf("*");
}
k=k-2;
printf("\n");

}
return 0;
}