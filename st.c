#include<stdio.h>
#include<string.h>
int main()
{
char arr[20];
int middle,end,k,i;

gets(arr);
int j=strlen(arr);
if(j==1)
{
printf("yes");
}
else if(j==2)
{
if(arr[0]==arr[1])
{
printf("yes");
}
else
{
printf("no");
}
}
else
{
if(j%2==0)
{
int middle=j/2-1;
end=j-1;
for(k=0;k<=middle;k++)
{
if(arr[k]==arr[end])
{
end=end-1;
}
else
{
printf("no");
break;
}
}
if(k==middle+1)
{
printf("yes");
}
}
else
{
middle=j/2;
end=j-1;
for(k=0;k<middle;k++)
{
if(arr[k]==arr[end])
{
end=end-1;
}
else
{
printf("no");
break;
}
}
if(k==middle)
{
printf("yes");
}
}
}
return 0;
}
