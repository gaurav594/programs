#include<stdio.h>
int main()
{
char arr[20];
scanf("%s",arr);
int state=1;
int i,j=0;
char arrr[20];
for(i=0;arr[i]!='\0';i++)
{
if(state==1&& arr[i]!='a'&&arr[i]!='b')
{
arrr[j]=arr[i];
j++;
}
if(state==2 && arr[i]!='c')
{
arrr[j]='a';
j++;
if(arr[i]!='a'&&arr[i]!='b')
{
arrr[j]=arr[i];
j++;
}
}
state=(arr[i]=='a')?2:1;
}
if(state==2)
{
arrr[j]='a';
j++;
}
arrr[j]='\0';
puts(arrr);
return 0;
}