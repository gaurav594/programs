#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5};
int i,j,k;
for(i=0;i<=4;i++)
{
for(j=0;j<=4;j++)
{
k=1;
printf("%d\n",j);
if(arr[j]==3)
{
k=0;
break;
}
}
if(k==0)
{
printf("breaked\n");
break;
}
}
return 0;
}