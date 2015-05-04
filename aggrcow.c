#include<stdio.h>
 int arr[100001];
int c,n;
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
int check(int x){
	int cowsplaced=1;
	int i;
	long long int lastpos=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]-lastpos>=x){
			cowsplaced++;
            
			if(cowsplaced==c)
			  return 1;
              lastpos=arr[i];
		  }
	  }
	  return 0;
  }
 int binary(){
	 int start=0,end=arr[n-1];
	 
	while(start<end){
		int mid=(start+end)/2;
		printf("%d",mid);
		if(check(mid)==1)
		    start=mid+1;
		else
		    end=mid;
		}
		return start-1;
	}
int main(){
	int t,i;
	scanf("%d",&t);
	
	while(t--){
		scanf("%d %d",&n,&c);
		
		for(i=0;i<n;i++)
		  scanf("%d",&arr[i]);
          shellsort(arr,n-1);
		
		printf("%d\n",binary());
     }
 }