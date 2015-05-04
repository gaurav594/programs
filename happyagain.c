#include<stdio.h>
int square(int n)
{
int ans =0,a;
while(n!=0)
{
a=n%10;
ans+=a*a;
n=n/10;
}
return ans;
}
int main()
{
int n,k,c=0,f=0;
int arr[1000]={0};
scanf("%d",&n);
while(1)
{
k=square(n);
if(arr[k]==0)
{
n=k;
c++;
arr[k]=1;
f=1;
}
else
{
f=0;
}
if(k==1)
{
break;
}
}
if(f==1)
{
printf("%d",c);
}
else
{
printf("%d",-1);
}
return 0;
}