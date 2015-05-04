#include<stdio.h>
int main()
{
int t,n,m,i,j;
scanf("%d",&t);
int arr[1000][1000];
while(t--)
{
scanf("%d %d",&n,&m);
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=m-1;j>=0;j--)
{
printf("%d",arr[i][j]);
}
}
}
return 0;
}