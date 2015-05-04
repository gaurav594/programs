#include<stdio.h>
int main()
{
int t,temp,i,j,n,k,o,f;
int arr[10000];
int ar[10000];
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);
for(j=0;j<n;j++)
{
scanf("%d",&arr[j]);
}
for(i=0;i<n;i++)
{
o=0;
if(arr[i]<arr[i+1])
{
arr[i]=0;
o++;
}
else
arr[i+1]=arr[i];
if(o==k)
break;
}
for(i=0;i<n;i++)
{
if(arr[i]!=0)
printf("%d ",arr[i]);
}
printf("\n");
}

return 0;
}