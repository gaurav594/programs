#include<stdio.h>
int main()
{
int arr[]={10,9,12,25,7,0,22};
int arrr[5]={10};
int k=arr[0];
int j=1;
int i;
for(i=1;i<7;i++)
{
if(arrr[0]<arr[i])
{
arrr[j]=arr[i];
j++;
}
}
j=0;
while(arrr[j]!='\0')
{
printf("%d\n",arrr[j]);
j++;
}
return 0;
}