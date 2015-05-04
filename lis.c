/* Dynamic Programming implementation of LIS problem */
#include<stdio.h>
#include<stdlib.h>
 
/* lis() returns the length of the longest increasing subsequence in 
    arr[] of size n */
int lis( int arr[], int n )
{
 int *lis=(int*)malloc(n*sizeof(int));
 int max=0;
 int i,j;
 for(i=0;i<n;i++)
 {
  lis[i]=1;
 }
 for(i=1;i<n;i++)
 {
 for(j=0;j<i;j++)
 {
 if(arr[i]>arr[j]&&lis[i]<lis[j]+1)
 {
 lis[i]=lis[j]+1;
 }
 }
 }
 for(i=0;i<n;i++)
 {
 if(lis[i]>max)
 max=lis[i];
 }
 for(i=0;i<n;i++)
 {
 printf("%d ",lis[i]);
 }
 return max;
 free(lis);
   return max;
}
 
/* Driver program to test above function */
int main()
{
int t,n,i;
int arr[100];
scanf("%d",&t);
for(i=0;i<t;i++)
{
  scanf("%d",&arr[i]);
  }

  printf("%d\n", lis( arr, t ) );
 
  return 0;
}