#include<stdio.h>
long long int calc(long long int n)
{
     long long int x,y,z,sum;
     x=y=z=sum=0;
     
     if(n>1)
     {
     x=calc(n/2);
     y=calc(n/3);
     z=calc(n/4);
     sum =x+y+z;
     if(sum<n) 
     {
               sum=n;          
     }    
     
     return sum;
     }
     
     else
     {
         return n;    
     }
     
}
int main()
{
long long int sum,n;

while(scanf("%lld",&n)!=EOF)
{

                sum=calc(n); 
                printf("\n%lld",sum);
}

return 0;  
}