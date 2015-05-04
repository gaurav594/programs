#include<stdio.h>
#define max 1000
int arr[1000];

int push(int a)
{
static int m=1000;
int top=0;
if(top>max)
{
return;
}
else
{
if(a<m)
m=a;
stack1[top]=a;
top=top+1;
}
return 0;
}
int main()
{

while(1)
{
int t;
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d",&arr[i]);
}
for(i=t-1;i>=0;i--)
{
push(arr[i]);
}
for(i=0;i<t;i++)
{
k=pop();
if(k==m)
{
pushh(k);
}
else
{
pushhh(k);
}
}
}
return 0;
}