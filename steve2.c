#include<stdio.h>
#include<string.h>
int main()
{
int i,end,beg,middle;
char str[20];
scanf("%s",str);
int l=strlen(str);
if(l==1)
printf("YES");
else if(l==2)
{
if(str[0]==str[1])
printf("YES");
else
printf("NO");
}
else
{
if(l%2==0)
{
middle=l/2-1;
end=l-1;
for(i=0;i<=middle;i++)
{
if(str[i]==str[end])
{
end=end-1;
}
else
{
printf("NO");
}
}
if(i==middle+1)
{
printf("YES");
}
}
else
{
middle=l/2-1;
end=l-1;
for(i=0;i<=middle;i++)
{
if(str[i]==str[end])
{
end=end-1;
}
else
{
printf("NO");
}
}
if(i==middle+1)
{
printf("YES");
}
}
}

return 0;
}