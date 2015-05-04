#include<stdio.h>
#include<math.h>
int max(int x, int y)
{
  return (x > y) ? x : y;
}
int main() {
    
  int N,i;
  scanf("%d",&N);
  int ar[N];
  int ar1[N];
  for (i=0; i<N; i++)
        scanf("%d",&ar[i]);
  for (i=0;i<N;i++)
  {
      ar1[i]=1;      
      if(i-1>=0)
      {
          if(ar[i-1]<ar[i])
            ar1[i] = ar1[i-1]+1;
          else 
          {
               int j = i;
               while(j>0 && ar[j-1] > ar[j])
               {
                ar1[j-1] = max(ar1[j-1],ar1[j] + 1);
                j= j-1;
               }          
          }
      }
  }
    int total = 0;
    for (i = 0; i<N ; i++){
        total += ar1[i];
    }
   printf("%d",total);
    return 0;
}