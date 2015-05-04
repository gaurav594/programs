#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void merge(int [],int ,int ,int );
void part(int [],int ,int );

int main()
{
int t,j,n,m,y,p,k,i,o;
long long ans;
scanf("%d",&t);
while(t--)
{
p=0;k=0;i=0;o=1;y=0;n=0;m=0;
	  ans=1;
scanf("%d %d",&n,&m);
char arr[n+1];
int ar[m+1];
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
char A;
if(arr[ar[1]]>=65&&arr[ar[1]]<=90)
	{
	A=arr[ar[1]];
	}
	o=ar[1];
	for(i=2;i<=m;i++)
	{
	if(arr[ar[i]]>=65&&arr[ar[i]]<=90)
	{

	if(A!=arr[ar[i]])
		{
		p=ar[i];
		ans=(ans*(p-o))%1000000009;
		o=p;
		}
		else
		{
		p=ar[i];
		o=p;
		}
		A=arr[ar[i]];
	}
	
	}
printf("%lld\n",ans);
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
  int tmp[1000001];
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
