#include<stdio.h>
int s[100000],f[100000];
int printMaxActivities(int s[], int f[], int n)
{
    int i, j;
 
    i = 0;
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          return j;
          i = j;
      }
	  
    }
}
 

int main()
{    int t,i,n,o;
    scanf("%d",&t);
	while(t--)
	{
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d%d",&s[i],&f[i]);
    int n = sizeof(s)/sizeof(s[0]);
     o=printMaxActivities(s, f, n);
	}
	printf("%d",o);
	}
    return 0;
}