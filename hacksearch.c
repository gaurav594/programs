#include<stdio.h>
#include<string.h>
int main()
{
int n,i=0,m,k,j=0;
scanf("%d",&n);
int arr1[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr1[i]);
}
scanf("%d",&m);
int arr2[m];
for(i=0;i<m;i++)
{
scanf("%d",&arr2[i]);
}
int ar1[10001],ar2[10001];
while(p<=sizeof(arr1)/sizeof(int))
{
ar1[arr1[i]]++;
p++;
}
for(o=0;o<i;k++)
{
printf("%d %d \n",arr1[i],ar1[i]);
}
while(i<=sizeof(arr2)/sizeof(int))
{
ar2[arr2[j]]++;
j++;
}
for(k=0;k<j;k++)
{
printf("%d %d \n",arr1[j],ar1[j]);
}
return 0;
}