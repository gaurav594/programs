#include<Stdio.h>
int main()
{
char s[10];
char a[10];
scanf("%s",s);
int i=0,j=0;
while(s[i]!='\0')
{
if(s[i]==s[i+1])
{
i=i+2;
continue;
a[j]=s[i];
j++;
}
else
{
a[j]=s[i];
i=i+1;
j++;
}

}
printf("%s",a);
}