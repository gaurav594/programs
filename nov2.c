#include <stdio.h>
#include<math.h>
#define LIMIT 100001
long long int arr[LIMIT];
int main(){
long long int i;

for(i=0;i<LIMIT;i++)
{
arr[i]=i*i;
}
for(i=0;i<LIMIT;i++)
{
printf("%lld,",arr[i]);
}
long long int a,b,s,k;
int t,c;
scanf("%d",&t);
while(t--)
{
c=0;
scanf("%lld%lld",&a,&b);
for(i=sqrt(a);arr[i]<=b;i++)
{
if(arr[i]>=a)
{
k=arr[i];
while(k!=0)
{
s=k%10;
if(s==0||s==1||s==4||s==9)
{
k=k/10;
}
else
{
break;
}
}
if(k==0)
{
c=c+1;
}
}
}
printf("%d\n",c);
}
return 0;  
}
