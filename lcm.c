#include<stdio.h>
#include<math.h>
#define Lim  1000000
long long etf[1000010]  ;
long long  ret[1000010];
 
    void cal_etf()
       {int i,j;
          for(i = 1 ;i <= Lim ; i++ ) etf[i]=i;
          for(i=2 ; i<= Lim ; i++ )
            if ( etf[i] == i)
              for(j = 2*i ; j <= Lim ; j += i) etf[j] -=  etf[j]/ i ;
          for(i=2 ; i<= Lim ; i++) if ( etf[i]==i) etf[i] = i-1;
      for(i=1;i <= Lim ; i++) for (j = i ; j <= Lim ; j += i  ) ret[j]+= i*etf[i];
       }
 
    int main()
       {
          cal_etf();
          int n,t , i, sqt;
          long long sum;
           
          for(scanf("%d",&t ) ; t>0 ; t--)
          {
             scanf("%d",&n);
             sum = ( 1 + ret[n] ) * n / 2;
             printf("%lld\n",sum);
                 
          }
       }