#include<stdio.h>
char str[100000];
long long int i=0,j=0,T=0,str_len=0;
int main() 
{
long long int count,temp;
scanf("%lld",&T);
for(i=0;i<T;i++)
{
count=0,temp=0;
scanf("%lld",&str_len);
scanf(" %100000[^\n]%*[^\n]%*c",str);
for(j=0;j<str_len;j++)
{
if(str[j]=='1')
count++; 
}
temp=(count*(count+1))/2;
printf("%lld\n",temp); 
}
return 0;
}