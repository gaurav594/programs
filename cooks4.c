#include<stdio.h>
long long int arr[10001];
long long int a[10001];
 long long int ars[10001]={0};
int main(){

long long  int n,i,k,o,j,m,s;


scanf("%lld%lld",&n,&m);
j=1;
k=1;
for(i=n+2;i<=3*n;i++)
{
o=k;
while(o!=0)
{
arr[j]=i;
j++;
o--;
}
if(k>=n)
{k--;}
else
k++;
}
for(i=0;i<=n*n;i++)
{
ars[arr[i]]++;
}
for(i=0;i<m;i++)
{
scanf("%lld",&s);
if(s!=0)
printf("%lld\n",ars[s]);
else
printf("%d\n",0);
}

return 0;
}