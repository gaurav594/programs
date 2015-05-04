#include<stdio.h>
#include<stdlib.h>
 void printKMax(int arr[], int n, int k)
{
    int j,i, max;
 
    for (i = 0; i <= n-k; i++)
    {
        max = arr[i];
 
        for (j = 1; j < k; j++)
        {
            if (arr[i+j] > max)
               max = arr[i+j];
        }
        printf("%d ", max);
    }
	
}
 
int main()
{
  int n,i,k;
  scanf("%d",&n);
  int *arr=(int*)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    printKMax(arr, n, k);
    return 0;
}