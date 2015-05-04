#include<stdio.h>
#include<stdlib.h>
int lis(int arr[],int n)
{int *lis=(int*)calloc(n,sizeof(int));

int i,j,max=0;
  for ( i = 1; i < n; i++ )
      for ( j = 0; j < i; j++ )
         if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
            lis[i] = lis[j] + 1;
			
 for(i=0;i<n;i++)
 {
 if(max<lis[i])
 max=lis[i];
 }
 
return max;
			}
int main()
{
int arr[]={1,4,2,4,3};
int n=sizeof(arr)/arr[0];
printf("%d",lis(arr,n));
return 0;
}