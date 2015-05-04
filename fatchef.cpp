#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );
char arr[100001]={};
int ar[100001];
int main()
{
int t,j,n,m,y=0;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&m);
int i=0;
char c;
for(i=1;i<=m;i++)
{
scanf(" %c",&c);
scanf(" %d",&y);
ar[i]=y;
   arr[y]=c;
   
   }
arr[n+1]='\0';
part(ar,1,m);	 
for(j=1;j<=m;j++)
printf("%d",ar[j]);

}
return 0;
}
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
