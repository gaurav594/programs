#include<stdio.h>
#include<limits.h>
int m[201][201],val[201][201];
main()
{
  int i,j,t,h,w,max,max1;
  scanf("%d",&t);
  while(t--)
    {
      max1=INT_MIN;
      scanf("%d%d",&h,&w);
      for(i=1;i<=h;i++)
	{
	  for(j=1;j<=w;j++)
	    scanf("%d",&val[i][j]);
	}
      for(i=0;i<=h;i++)
	m[i][0]=0;
      for(i=0;i<=w;i++)
	m[0][i]=0;
	for(i=0;i<=h;i++)
        m[i][w+1]=0;
      for(i=1;i<=h;i++)
	{
	  for(j=1;j<=w;j++)
	    {
	      max=INT_MIN;
	      if(m[i-1][j-1]+val[i][j]>max)
		max=m[i-1][j-1]+val[i][j];
	      if(m[i-1][j]+val[i][j]>max)
		max=m[i-1][j]+val[i][j];
	      if(m[i-1][j+1]+val[i][j]>max)
		max=m[i-1][j+1]+val[i][j];
	      m[i][j]=max;
	      if(i==h && max>max1)
		max1=max;
	    }
	}
	printf("%d\n",max1);
	
}
return 0;
}