#include<stdio.h>
#include<limits.h>
#define MAX 1000000000000000LL
int main()
{
  int t;
  long long int n,i,j;
  long long int a[2001],ans[2001];
  a[0]=1;
  a[1]=2;
  for(i=2;;i++)
  {
    a[i]=a[i-1]+a[i-2];
    if(a[i]>MAX) break;
  }
  scanf("%d",&t);

  while(t--)
  {
    scanf("%lld",&n);
    for(i=0;;i++)
    {
      if(a[i]>n) break;
    }
    j=0;
    while(i>0)
    {
      ans[j]=n/a[i-1];
      n=n%a[i-1];
      j++;
      i--;
    }
    for(i=0;i<j;i++)
      printf("%lld",ans[i]);
    printf("\n");
  }
  return 0;
}

