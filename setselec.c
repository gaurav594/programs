#include<stdio.h>
void merge(int arr[],int min,int mid,int max);
void part(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}


void merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m; 
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
}
int main()
{
    int sum=0,i,n,q,j,s,l,flag,w[1000],d[10000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    scanf("%d",&w[i]);
	
    scanf("%d",&q);
	for(j=0;j<q;j++)
	{
    scanf("%d",&d[j]);
	}
    part(w,0,n-1);
	for(j=0;j<q;j++)
	{
	flag=0;
	 s=0;
	 l=n-1;
		while(s<l)
		{
		if(w[s]==d[j])
		{
		 printf("Yes\n");
		 flag=1;
		 break;
		}
		else if(w[s]+w[l]==d[j])
		 {
		 printf("Yes\n");
		 flag=1;
		 break;
		 }
		 else if(w[s]+w[l]<d[j])
		 {
		 l++;
		 }
		 else if(w[s]+w[l]>d[j])
		 {
		 s++;
		 }
		}
	if(flag==0)
	{
	printf("No\n");
	}
	}
    return 0;
}