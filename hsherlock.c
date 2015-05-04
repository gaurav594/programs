#include<stdio.h>
int main()
{
int t,n,i,flag;
int arr[100000];
scanf("%d",&t);
while(t--)
{
flag=0;
scanf("%d",&n);
if(n==0||n==1||n==2||n==4)
{
flag=1;
printf("%d\n",-1);
}
else if(n%5==0)
{
for(i=0;i<n;i++)
{
arr[i]=3;
}
}
else if(n%3==0)
{
for(i=0;i<n;i++)
{
arr[i]=5;
}
}
else if((n-5)%3==0)
{
for(i=0;i<n-5;i++)
{
arr[i]=5;
}
for(i=n-5;i<n;i++)
{
arr[i]=3;
}
}
else if((n-3)%5==0)
{
for(i=0;i<n-3;i++)
{
arr[i]=3;
}
for(i=n-3;i<n;i++)
{
 arr[i]=5; 
 }   
    }
else
{
flag=1;
printf("%d\n",-1);
}
if(flag!=1)
{
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
}
return 0;
}
