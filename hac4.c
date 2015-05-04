#include<stdio.h>
#include<string.h>
int main()
{
int t,c,i,k;
char arr[100];
scanf("%d",&t);
while(t--)
{
c=0;
scanf("%s",arr);
int k=strlen(arr);
i=4;
while(arr[i]!='\0')
{
if(arr[i]!='a'&&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u')
{
c=c+1;
}
i++;
}
printf("%d/%d\n",c+1,k);
}
return 0;
}