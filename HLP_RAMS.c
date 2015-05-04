#include <stdio.h>
#include <math.h>
int main()
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
  long long num,odd=1,temp;
  scanf("%lld",&num);
  int i;
  if(num==0)
   printf("0 1\n");
  else{
   odd=1;
   temp=num;
   while(temp)
   {
    odd*=((temp & 1)+1);
    temp=temp>>1;
   }
   printf("%lld %lld\n",num+1-odd,odd);
  }
 }
 return 0;
}