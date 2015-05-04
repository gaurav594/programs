#include<stdio.h>
int arr[100][100];
int cal[100][100];
int max(int a,int b,int c)
{
	if(a>b && a>c)
		return a;
	if(b>a && b>c)
		return b;
	if(c>a && c>b)
		return c;
}
int calculate(int arr[100][100],int x,int y)
{ int i,j,c=0;    
 cal[0][0]=arr[0][0];
	for(i=1;i<=x;i++)
	{
		cal[i][0]=cal[i-1][0]+arr[i][0];
	}
	for(j=1;j<=y;j++)
	{
		cal[0][j]=cal[0][j-1]+arr[0][j];
	}
	for(i=1;i<=x;i++)
	{
		for(j=1;j<=y;j++)
		{
			cal[i][j]=max(cal[i-1][j],cal[i][j-1],cal[i-1][j-1])+arr[i][j];
			
		}
	}
	return c;
}
int main()
{
int t,n,m,i,j;
scanf("%d",&t);
while(t--)
{
   scanf("%d %d",&n,&m);
   
   for(i=0;i<n;i++)
   {
	   for(j=0;j<m;j++)
	   {
		   scanf("%d",&arr[i][j]);
	   }
   }
   printf("%d\n",calculate(arr,n-1,m-1));
}
return 0;
}