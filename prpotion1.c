#include<stdio.h>
int arr[3][101];
int main()
{
int t,k,m,i,j,r,g,b,s,sum,max,maxi,pos;
scanf("%d",&t);
while(t--)
{sum=0;
scanf("%d%d%d%d",&r,&g,&b,&s);
 if(r>=g && r>=b)
       m=r;
      if(g>=r && g>=b)
         m=g;
      if(b>=g && b>=r)
         m=b;
		 

for(i=0;i<3;i++)
{
	if(i==0) k=r;
	else if(i==1) k=g;
	else if(i==2)k=b;
	
	for(j=0;j<k;j++)
		{
		scanf("%d",&arr[i][j]);
		
		}
		
	
}
while(s--)
{
max=-1;
for(i=0;i<3;i++)
{
	if(i==0) k=r;
	else if(i==1) k=g;
	else if(i==2)k=b;
	
	for(j=0;j<k;j++)
		{
		if(arr[i][j]>max)
		{
		max=arr[i][j];
		maxi=i;
		pos=k;
		}
		
		}
		
}
//printf("%d %d %d\n",max,maxi,pos);
for(i=0;i<pos;i++)
{
arr[maxi][i]=arr[maxi][i]/2;
}

}

max=-1;
for(i=0;i<3;i++)
{
	if(i==0) k=r;
	else if(i==1) k=g;
	else if(i==2)k=b;
	
	for(j=0;j<k;j++)
		{
		if(arr[i][j]>max)
			{
			max=arr[i][j];
			}
		}
	
}
printf("%d\n",max);
}
return 0;
}