#include<stdio.h>
int main()
{

int t,n,max,ma,i,j,k,o,c;
scanf("%d",&t);
	while(t--)
		{max=0,ma=0,o=0,c=0;
		int a1[10001],a2[10001],s[10001]={0};
			scanf("%d",&n);
					for(i=0;i<n;i++)
						{
						scanf("%d%d",&a1[i],&a2[i]);
						}	
						for(i=0;i<n;i++)
						{
						
						if(a2[i]!=0)
						{
						c=c+1;
						}
						if(c>max&&a1[i]>ma)
						{
						ma=a1[i];
						max=c;
						k=i;
						}
						if(a2[i]==0)
						{
						c=0;
						}
						}
					int v[1000]={0};
						for(i=0;i<1000;i++)
						{
						if(v[a1[i]]==0)
						{
						s[a1[i]]++;
						v[a1[i]]=1;
						}
						}
						for(i=(k+1)-max;i<=k;i++)
						{
						printf("%d",s[a1[i]]);
						}
						printf("%d",o);
						
		}
return 0;
}