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
for(i=1;i<n;i++)
{temp=arr[i];
j=i-1;
o=0;
f=0;
while(temp>arr[j]&&j>=0)
{
arr[j]=0;
j--;
o++;
if(o==k)
{
f=1;
break;
}
}

if(f==1)
{
break;
}

}
j=0;
for(i=0;i<n;i++)
{
if(arr[i]!=0)
{
ar[j]=arr[i];
j++;
}
}
for(i=0;i<n-k;i++)
{
printf("%d ",ar[i]);
}
printf("\n");
}
return 0;
}