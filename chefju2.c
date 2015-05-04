#include<stdio.h>
void merge(int *arr,int *ar,int,int,int);
void part(int arr[],int ar[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,ar,min,mid);
   part(arr,ar,mid+1,max);
   merge(arr,ar,min,mid,max);
 }

}


void merge(int arr[],int ar[],int min,int mid,int max)
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
int n,k,p,i,o,a,b;
scanf("%d%d%d",&n,&k,&p);
int arr[n];
int ar[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
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
for(i=0;i<n;i++)
{
printf("%d",ar[i]);
}
for(i=0;i<p;i++)
{
scanf("%d%d",&a,&b);
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