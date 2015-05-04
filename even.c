#include<stdio.h>
#include<math.h>
int main()
{
int u,o,t,i,j,n,r,s,k,y;
int arr[10000];
scanf("%d",&t);
while(t--)
{
r=0;
scanf("%d",&n);
if(n%2==0)
{i=0;
s=n;
while(s>0)
	{
	arr[i]=s%2;
	s=s/2;
	i++;
	}
y=i;
u=0;
for(j=0;j<i;j++)
{	if(arr[j]==1)
		{
			u=j;
			break;
		}
}
o=0;
for(j=y-1;j>=u;j--)
{
	r=r+(pow(2,o)*arr[j]);
	o++;
}
printf("%d\n",r);
}
else
printf("%d\n",n);
}
return 0;
}