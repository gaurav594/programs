#include<stdio.h>
void merge(long long int *arr,long long int *ar,long long int,long long int,long long int);
void part(long long int arr[],long long int ar[],long long int min,long long int max)
{
long long int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,ar,min,mid);
   part(arr,ar,mid+1,max);
   merge(arr,ar,min,mid,max);
 }

}


void merge(long long int arr[],long long int ar[],long long int min,long long int mid,long long int max)
{
  int tmp[30],tmpp[30];
  int i,j,k,m; 
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]<=arr[m])
     {
         tmp[i]=arr[j];
		 tmpp[i]=ar[j];
         j++;
     }
     else
     {
         tmp[i]=arr[m];
		 tmpp[i]=ar[m];
         m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
		 tmpp[i]=ar[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
		tmpp[i]=ar[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
  {
     arr[k]=tmp[k];
	 ar[k]=tmpp[k];
	 }
}

int main()
{
long long int n,k,p,i,o,a,b;
scanf("%lld%lld%lld",&n,&k,&p);
long long int arr[n];
long long int ar[n];
for(i=0;i<n;i++)
{
scanf("%lld",&arr[i]);
ar[i]=i+1;
}

part(arr,ar,0,n-1);
for(i=n-1;i>=0;i--)
{
o=arr[i]-arr[i-1];
if(o>k)
{
arr[i]=0;
arr[i-1]=0;
}
else
{
arr[i]=1;
arr[i-1]=1;
}
}

for(i=0;i<p;i++)
{
scanf("%lld%lld",&a,&b);
if(arr[ar[a-1]-1]==0||arr[ar[b-1]-1]==0)
{
printf("No\n");
}
else
{
printf("Yes\n");
}
}
return 0;
}