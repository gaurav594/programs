#include<stdio.h>
int main()
{
int t;
int n,i,j;

long long int arr[1000][2];
scanf("%d",&t);
while(t--)
{
int big=0;
int bbig=0;
int sbig=0;
int k=0;
int s=0;
int o=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<2;j++)
{
scanf("%lld",&arr[i][j]);
}
}
big=arr[0][1];
for(j=0;j<n;j++)
{
if(arr[j][1]>big)
{
big=arr[j][1];
s=j;
}
}
bbig=arr[0][1];
for(i=0;i<n;i++)
{
if(arr[i][1]>bbig)
{
sbig=bbig;
bbig=arr[i][1];
k=i;
}
else if(arr[i][1]>sbig)
{
sbig=arr[i][1];
k=i;
}
}
printf("%d%d",k,s);
printf("%lld%lld",arr[k][1],arr[s][0]);
if(arr[k][1]<arr[s][0])
{
printf("%d\n",s+1);
}
else
{
printf("%d\n",-1);
} 
}
return 0;
}