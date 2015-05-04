#include<stdio.h>
void swap(char *x,char *y)
{
char temp;
temp=*x;
*x=*y;
*y=temp;
}
void permute(char *arr,int i,int n)
{
int j;
if(i==n)
printf("%s\n",arr);
else
{
for(j=i;j<=n;j++)
{
       swap((arr+i),(arr+j));
	   permute(arr,i+1,n);
	   swap((arr+i),(arr+j));
}
}
}
int main()
{
char arr[]="bacaa";
permute(arr,0,4);

return 0;
}