#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
int n;
while(scanf("%d",&n)==1)
{
if(n==0) break;

char s[202];
gets(s);
int i,j,p,len,count=1;
double k;
len=strlen(s);
k=len/n;
char c[k][n];
p=0;
for(i=0;i<k;i++)
{
if(count%2==0)
{
for(j=n-1;j>=0;j--)
{
c[i][j]=s[p];
p++;
}
count++;
}
else
{
for(j=0;j<n;j++)
{
c[i][j]=s[p];
p++;
}
count++;
}
}
for(i=0;i<n;i++)
{
for(j=0;j<k;j++)
{
printf("%c",c[j][i]);
}
}
printf("\n");
}
return 0;
}