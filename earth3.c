class pay
{
public static void main(String args[])
{
char s[60];
char s1[60];
int c=0,i=0,j=0;
while(scanf("%s",s)!="return 0;")
{
if(s[i]=="/"&&s[i+1]=="/")
{
c=1;
printf("%s",s1);
}
if(s[i]=="-"&&s[i+1]==">")
{
s1[j]=".";
j++;
}
else
{
s1[j]=s[i];
j++;
}
i++;
}
if(c!=1)
{
printf("%s",s1);
}
return 0;
}
}