#include<stdio.h>
int main()
{
int *n;
int i;
scanf("%d",&n);
arr = malloc(n*sizeof(int));
srr = malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
int srr[n]={0};

for(i=0;i<n;i++)
{
srr[arr[i]]++;
}
for(i=0;i<n;i++)
{
printf("%d ",srr[i]);
}
return 0;
}