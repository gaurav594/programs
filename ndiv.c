#include<stdio.h>
#define LIMIT 32000
int prime[LIMIT],number[LIMIT];
int seive()
{
int i,j;
for(i=0;i<LIMIT;i++)
{
		number[i]=i+2;
}
for(i=0;i<LIMIT;i++)
{
if(number[i]!=-1)
{
	for(j=2*number[i]-2;j<LIMIT;j+=number[i])
	{
		number[j]=-1;
	}
}
}
j=0;
for(i=0;i<LIMIT&&j<LIMIT;i++)
{
		if(number[i]!=-1)
		{
		prime[j++]=number[i];
		}
}
return 0;
}
int main()
{
seive();
int t,a,b,n,temp,count,total=1,k,res=0,i,j;
scanf("%d%d%d",&a,&b,&n);
for(j=a;j<=b;j++)
{
temp=j;
total=1;
k=0;
for(i=prime[k];i*i<=temp;i=prime[k++])
{
	count=0;
	while(temp%i==0)
	{
		count++;
		temp=temp/i;
	}
	total*=count+1;
	
}

 if(temp!=1)
 total*=2;
 if(total==n)
 res++;
}
printf("%d\n",res);
    return 0;
}
