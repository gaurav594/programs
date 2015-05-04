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
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<2;j++)
{
scanf("%lld",&arr[i][j]);

}
if(arr[i][0]>arr[i][1])
{
arr[i][0]=0;
}
}
big=arr[0][1];
for(j=0;j<n;j++)
{
if(arr[j][0]>big)
{
big=arr[j][0];
k=j;
}
}
bbig=arr[0][1];
sbig=arr[1][1];
for(i=0;i<n;i++)
{
if(arr[i][1]>bbig)
{
sbig=bbig;
bbig=arr[i][1];
}
else if(arr[i][1]>sbig)
{
sbig=arr[i][1];
}
}

if(big>sbig)
{
printf("%d\n",k+1);
}
else
{
printf("%d\n",-1);
} 
}
return 0;
}