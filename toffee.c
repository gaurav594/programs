#include <stdio.h>
#include <stdlib.h>
void shellsort(int numbers[], int array_size)
{
  int i, j, increment, temp;

  increment = 3;
  while (increment > 0)
  {
    for (i=0; i < array_size; i++)
    {
      j = i;
      temp = numbers[i];
      while ((j >= increment) && (numbers[j-increment] > temp))
      {
        numbers[j] = numbers[j - increment];
        j = j - increment;
      }
      numbers[j] = temp;
    }
    if (increment/2 != 0)
      increment = increment/2;
    else if (increment == 1)
      increment = 0;
    else
      increment = 1;
  }
}
void printRepeating(int arr[], int size)
{
  int i,c=0;
  int ar[size];
  for (i = 0; i < size; i++)
  {
    if (arr[abs(arr[i])] >= 0)
	{
      arr[abs(arr[i])] = -arr[abs(arr[i])];
	  printf("%d ",abs(arr[i]));
	  ar[c]=abs(arr[i]);
	  c++;
	  }
    
  }
  printf("\n");

  for(i=c-1;i>=0;i--)
  {
  printf("%d ",abs(ar[i]));
  }
printf("\n");
}
 
int main()
{
int i,n;
scanf("%d",&n);
int *arr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
  scanf("%d",&arr[i]);

}
 shellsort(arr,n);
  printRepeating(arr,n);
  return 0;
  
}