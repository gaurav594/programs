#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
char arr[21][21];
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
	arr[i][j]=(char)32;
		}
		
		}
for(i=0;i<n;i++)
	arr[0][i]='*';
for(i=0;i<n;i++)
	arr[n-1][i]='*';	
for(i=1,j=n-2;i<n-1,j>=1;i++,j--)
		arr[i][j]='*';
	
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%c",arr[i][j]);
		}
		if(i!=n-1)
		printf("\n");
		}
		
return 0;
}