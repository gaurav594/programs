#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
int t,n,m,i,j,k=0,o=0,b=0,f,s;
scanf("%d",&t);

while(t--)
{
s=0;
scanf("%d %d",&n,&m);
int arr[n][m];
int ar[n];
for(i=0;i<n;i++)
{
scanf("%d",&f);
for(j=m-1;j>=0;j--)
{
arr[i][j]=f%10;
f=f/10;
}
}
for(i=0;i<n;i++)
{
o=0;
for(j=m-1;j>=0;j--)
{
k=k+(pow(2,o)*arr[i][j]);
o++;
}
ar[i]=k;
k=0;
 if (ar[abs(ar[i])] >= 0)
      ar[abs(ar[i])] = -ar[abs(ar[i])];
    else
	{
      printf("No\n");
	  s=1;
	  break;
	  }
  
  if(s==0)
  {
  printf("Yes\n");
  break;
  }
}

}
return 0;
}