#include<stdio.h>
void quicksort(long int [],int ,int );
int main()
{
int t,i,k=0,d=0;
scanf("%d",&t);
int arr[t];
for(i=0;i<t;i++)
{
scanf("%d",&arr[i]);
}

if(arr[1]!=2&&arr[0]==1)
{
k=1;
}
if(arr[1]==2&&arr[0]==1)
{
k=2;
}
for(i=k;i<t;i++)
{
if((k==1&&(arr[i]%2)!=0)||k==2)
{
d=d+1;
}
}
printf("%d\n",d);
return 0;
}
void quicksort(long int x[],int first,int last){
    int pivot,j,temp,i;
 
     if(first<last){
         pivot=first;
         i=first;
         j=last;
 
         while(i<j)
         {
             while(x[i]>=x[pivot]&&i<last)
                 i++;
             while(x[j]<x[pivot])
                 j--;
             if(i<j)
             {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
             }
         }
 
         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);
 
    }
}