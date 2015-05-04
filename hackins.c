#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *ar) {
int i,temp,j,u;
         for(u=0;u<ar_size;u++)
	     printf("%d ",ar[u]);
    for(i=1;i<ar_size;i++)
    {
        temp=ar[i];
        j=i-1;
        while(temp<ar[j]&&j>0)
            {
            ar[i+1]=ar[i];
            }
        ar[i+1]=temp;
		  for(u=0;u<ar_size;u++)
	     printf("%d ",ar[u]);
	     printf("\n");
	
    }	
  

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}
