#include<stdio.h>
void quicksort(long int[],int,int );
int main()
{
int t,n,k,i,j;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&n,&k);
long int total[n];
for(i=0;i<n;i++)
{
scanf("%ld",&total[i]);
}
quicksort(total,0,n-1);
long int diff[n-k+1];
for(j=k-1,i=0;i<n-k+1;j++,i++)
{
diff[i]=total[i]-total[j];
}
quicksort(diff,0,n-k);
printf("%ld\n",diff[n-k]);
}
return 0;
}
void quicksort(long int x[],int first,int last)
{
int pivot,j,i,temp;
if(first<last)
{
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