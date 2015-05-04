#include<stdio.h>
#include<string.h>
char arr[100000];
int main()
{
	int t,o,i,j,k,l;
while(1)
{
	
	scanf("%d",&t);
	if(t==0)
	{
		break;
	}
	scanf("%s",arr);
	l=strlen(arr);
	k=l/t;
	o=0;
	char sol[k+1][t+1];
	for(i=0;i<k;i++)
	{   if(i%2==0)
		{
		for(j=0;j<t;j++)
		{
			sol[i][j]=arr[o];
			o++;
		}
		}
		else
		{
			for(j=t-1;j>=0;j--)
			{
				sol[i][j]=arr[o];
				o++;
			}
		}
	}
	o=0;
	
	for(i=0;i<t;i++)
	{
		for(j=0;j<k;j++)
		{
			printf("%c",sol[j][i]);
		}
	}
	printf("\n");
}
return 0;
}