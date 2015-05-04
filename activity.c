#include<stdio.h>
#include<stdlib.h>
#define MAX 100000
void mergeSort(int arr[],int f[],int low,int mid,int high);
void partition(int arr[],int f[],int low,int high);
void partition(int arr[],int f[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,f,low,mid);
         partition(arr,f,mid+1,high);
         mergeSort(arr,f,low,mid,high);
    }
}

void mergeSort(int arr[],int f[],int low,int mid,int high){

    int i,m,k,l,temp[MAX],tem[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
			 tem[i]=f[l];
             l++;
         }
         else{
             temp[i]=arr[m];
			 tem[i]=f[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
			 tem[i]=f[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
			 tem[i]=f[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
		 f[k]=tem[k];
    }
}
int printMaxActivities(int s[], int f[], int n)
{
    int i, j,c=0;
 
   
 
    // The first activity always gets selected
    i = 0;
    c++;
 
    // Consider rest of the activities
    for (j = 1; j < n; j++)
    {
      // If this activity has start time greater than or equal to the finish
      // time of previously selected activity, then select it
      if (s[j] >= f[i])
      {
          c++;
          i = j;
      }
    }
	if(c==1)
	return 0;
	else
	return c;
}
 
// driver program to test above function
int main()
{
int t,n,i,k;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
    int *s=(int*)malloc(n*sizeof(int));
    int *f=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	    scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
	scanf("%d",&k);
	f[i]=k+s[i];
	}
	partition(s,f,0,n-1);
    int o=printMaxActivities(s, f, n);
	printf("%d\n",n-o);
}
    return 0;
}