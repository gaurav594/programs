#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char arr[81];
int l,h,w,i,j,k;
scanf("%s",arr);
l=strlen(arr);
h=floor(sqrt(l));
w=ceil(sqrt(l));
char word[h][w];
k=0;
int o=0;
for(i=0;i<h;i++)
{
for(j=0;j<w;j++)
{
word[i][j]=arr[k];
k++;
}
}
for(i=0;i<w;i++)
{
for(j=0;j<h;j++)
{
if(word[j][i]>=97&&word[j][i]<=122)
{
printf("%c",word[j][i]);
o++;
}
}
if(o-2==l)
{
break;
}
printf(" ");

}
return 0;
}