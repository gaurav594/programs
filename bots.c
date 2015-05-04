#include<stdio.h>
#include<string.h>
int main()
{
int t,j,i,k=0;
char a[1000000],b[1000000];
scanf("%d",&t);
while(t--)
{
scanf("%s",a);
scanf("%s",b);
int l1=strlen(a);
int l2=strlen(b);
if(l1==l2)
{
for(i=0;i<l1;i++)
{
if(a[i]=='A'||b[i]=='B')
{
for(j=0;j<l1;j++)
{
if(a[i]=='A'&&b[j]=='A')
{
if(j<=i)
{
k=0;

}
else
{
k=1;
break;
}
}
else if(a[i]=='B'&&b[j]=='B')
{
if(j>=i)
{
k=0;

}
else
{
k=1;
break;
}
}
else
{
continue;
}
}
}
else
{
continue;
}
}
if(k==0)
{
printf("Yes\n");
}
else
{
printf("No\n");
}

}
else
{
printf("No\n");
}
}
return 0;
}