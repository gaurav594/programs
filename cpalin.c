#include<stdio.h>
int isPalin(int a)
{int i,j,o=0;
int arr[100005];
j=0;
while(a!=0)
{
arr[j]=a%10;
a=a/10;
o++;
j++;
}
i=0;j=o-1;
while(i<j)
{
if(arr[i]!=arr[j])
return 0;
else
{
i++;
j--;
}
}
return 1;
}
int main()
{
int t,a,b,k=0,i;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(isPalin(i))
{
k++;
}
}
printf("%d\n",k);
k=0;
}
return 0;
}