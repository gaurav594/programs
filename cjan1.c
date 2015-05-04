#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,n,m,i,k,max,di;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&m);
int *arr=(int*)malloc(n*sizeof(int));
int *ar=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);


}
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
di=m/arr[i];
k=arr[i]*di;
if(arr[i]>m)
{
ar[i]=0;
}
else if(k>m)
{
ar[i]=ar[i];
}
else
{
ar[i]=di*ar[i];
}

}
max=0;
for(i=0;i<n;i++)
{
if(arr[i]!=0)
{
if(ar[i]>max)
{
max=ar[i];
}
}
}
printf("%d\n",max);
}
return 0;
}