#include <stdio.h>
int main()
{
  int array[10001], n, c, temp,i,j,u;
  int o=0;
  scanf("%d", &n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for(i=1;i<n;i++)
  {temp=array[i];
   j=i-1;
   while(temp<array[j]&&j>0)
   {
    array[j+1]=array[j];
   j--;
    }
	array[j+1]=temp;
	
	for(u=0;u<n;u++)
	printf("%d ",array[u]);
	printf("\n");
	
   
  }
 
 
  return 0;
}