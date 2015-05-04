#include<stdio.h>
#include<string.h>
int main()
{
int t,p;
scanf("%d",&t);
for(p=0;p<t;p++)
{
char arr[10];
scanf("%s",arr);
int l=strlen(arr);
char arrr[l*5];
int j=0;
int i;
int o=0;
int f=0;
for(i=0;i<l;i++)
{
if(arr[i]=='0')
{
arrr[j]='-';
arrr[j+1]='-';
arrr[j+2]='-';
arrr[j+3]='-';
arrr[j+4]='-';
o=0;
f=f+o;
}
else if(arr[i]=='1')
{
arrr[j]='.';
arrr[j+1]='-';
arrr[j+2]='-';
arrr[j+3]='-';
arrr[j+4]='-';
o=1;
f=f+o;
}
else if(arr[i]=='2')
{
arrr[j]='.';
arrr[j+1]='.';
arrr[j+2]='-';
arrr[j+3]='-';
arrr[j+4]='-';
o=2;
f=f+o;
}
else if(arr[i]=='3')
{
arrr[j]='.';
arrr[j+1]='.';
arrr[j+2]='.';
arrr[j+3]='-';
arrr[j+4]='-';
o=3;
f=f+o;
}
else if(arr[i]=='4')
{
arrr[j]='.';
arrr[j+1]='.';
arrr[j+2]='.';
arrr[j+3]='.';
arrr[j+4]='-';
o=4;
f=f+o;
}
else if(arr[i]=='5')
{
arrr[j]='.';
arrr[j+1]='.';
arrr[j+2]='.';
arrr[j+3]='.';
arrr[j+4]='.';
o=5;
f=f+o;
}
else if(arr[i]=='6')
{
arrr[j]='-';
arrr[j+1]='.';
arrr[j+2]='.';
arrr[j+3]='.';
arrr[j+4]='.';
o=4;
f=f+o;
}
else if(arr[i]=='7')
{
arrr[j]='-';
arrr[j+1]='-';
arrr[j+2]='.';
arrr[j+3]='.';
arrr[j+4]='.';
o=3;
f=f+o;
}
else if(arr[i]=='8')
{
arrr[j]='-';
arrr[j+1]='-';
arrr[j+2]='-';
arrr[j+3]='.';
arrr[j+4]='.';
o=2;
f=f+o;
}
else if(arr[i]=='9')
{
arrr[j]='-';
arrr[j+1]='-';
arrr[j+2]='-';
arrr[j+3]='-';
arrr[j+4]='.';
o=1;
f=f+o;
}
j=j+5;
}
for(i=0;i<j;i++)
{
printf("%c",arrr[i]);
}
printf("\n");
printf("%d\n",f);
}
return 0;
}