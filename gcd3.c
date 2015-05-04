#include<stdio.h>
int main()
{
int arr[100000];
int t,n,i,j,c,k;
scanf("%d",&t);
while(t--)
{
c=0;
k=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}
 int arrayUB=n-1;
    int pointerA=0;
   int  pointerB=1;
 while(1)
 {  
       
 if((arr[pointerB]%arr[pointerA]==0)&&arr[pointerA]!=1&&arr[pointerA]!=0&&arr[pointerB]!=0)
					{
					printf("%d ",arr[pointerB]);
					arr[pointerB]=0;
					k++;
					}
                pointerB++;
            if (pointerB>arrayUB)
		    {
			if(pointerA<=n-2)
            pointerA++;
            pointerB=pointerA+1;
			}
   if(pointerA>arrayUB)
   break;
   }

c=n-k;
if(c==1)
{
c=-1;
}
printf("%d\n",c);
}
return 0;
}