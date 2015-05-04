#include<stdio.h>
#include<stdlib.h>
int main()
{
int t,i,temp,d;
scanf("%d",&t);
while(t--)
{
scanf("%d",&d);
int *arr=malloc(sizeof(int)*d);
temp=d;
while(temp%3!=0&&temp>=5)
{
temp=temp-5;
}
if(temp%3!=0)
{
printf("%d\n",-1);
continue;
}
for(i=0;i<temp;i++)
{
arr[i]=5;
}
for(i=temp;i<d;i++)
{
arr[i]=3;
}
for(i=0;i<d;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
return 0;
}