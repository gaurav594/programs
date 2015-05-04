#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,t,k;
scanf("%d",&n);
while(n--)
{
int t;
scanf("%d",&t);
int *arr=(int*)malloc(t*sizeof(int));
for(i=0;i<t;i++)
{
scanf("%d",arr[i]);
}
for(i=0;i<t;i++)
{
k=(i+1);
printf("%d\n",arr[k]);
k=k*2+1;
}
for(i=0;i<t;i++)
{
k=(i+1);
k=k*2;
printf("%d\n",arr[k]);

}
}
return 0;
}