#include <stdio.h>
#include <stdlib.h>
 
int main()
{
int smoke[100][100];
int mixture[100][100];
int colours[100];
int i,j,k,total_jars,min,flag,temp,p,sum;
while(scanf("%d",&total_jars)!=EOF)
{
	for (i=0;i<total_jars;i++)
		{
		scanf("%d",&mixture[i][i]);
		colours[i]=mixture[i][i];
		//smoke[i][i]=mixture[i][i];
		}
		
		temp=total_jars;
		
	sum=0;	
		for (i=0;i<total_jars;i++)
		{
		smoke[i][i]=0;
		}
	
	for (i=0; i<total_jars; i++)
		{
			sum = mixture[i][i];
			for (j=i+1; j<total_jars; j++)
			{
				sum =sum + colours[j];
				mixture[i][j] = sum % 100;
			}
		}	
		
	
	j=0;
	p=1;
	
 
	
	while(temp!=0)
	{
	
		for(i=0;i<temp;i++)
			{
				j=i+p;
				min=999999;
				for(k=i+1;k<=j;k++)
				{
					if ((smoke[i][k-1]+smoke[k][j]+mixture[i][k-1]*mixture[k][j])<min)
							{
							min=smoke[i][k-1]+smoke[k][j]+mixture[i][k-1]*mixture[k][j];
							flag=k;
							}
				}
			smoke[i][j]=min;
		//	mixture[i][j]=(mixture[i][flag-1]+mixture[flag][j])%100;
				
			}
		temp--;
		p++;
		
		
		
	}	
	printf ("%d\n",smoke[0][total_jars-1]);
}
} 
