#include<stdio.h>
#define MAX 2001

void mergeSort(int arr[],int wt[],int low,int mid,int high);
void partition(int arr[],int wt[],int low,int high);
void partition(int arr[],int wt[],int low,int high){

    int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,wt,low,mid);
         partition(arr,wt,mid+1,high);
         mergeSort(arr,wt,low,mid,high);
    }
}

void mergeSort(int arr[],int wt[],int low,int mid,int high){

    int i,m,k,l,tmp[MAX];
	int temp[MAX];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
			 tmp[i]=wt[l];
             l++;
         }
         else{
             temp[i]=arr[m];
			 tmp[i]=wt[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
			 tmp[i]=wt[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
			 tmp[i]=wt[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
		 wt[k]=tmp[k];
    }
}
int max(int a,int b) { return (a > b)? a : b; }

int knapSack(int W, int wt[],int val[], int n)
{
   int i, w,j;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);
           else
                 K[i][w] = K[i-1][w];
       }
   }
 
   return K[n][W];
}
 
int main()
{
    int n,w,i;
	int wt[2000];
	int val[2000];
	scanf("%d %d",&n,&w);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&val[i],&wt[i]);
	}
	partition(val,wt,0,n-1);
	
	int t=9;
	int prime[]={2,3,5,7,11,13,17,19,23,29};
	for(i=n-1;i>=0;i--)
	{
	val[i]=val[i]*prime[t];
	t--;
	}
    printf("%d\n", knapSack(w, wt, val, n));
    return 0;
}