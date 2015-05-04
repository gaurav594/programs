#include<stdio.h>
#include<string.h>
int main()
{
    int t,len=0;
    char str[1000000];
    char oper[1000000];
    scanf("%d ",&t);

    while(t--)
    {

        gets(str);
        len=strlen(str);
        long long int i=0,a=0,b=0,temp=0,k=1,d,j,o;
  
        while(str[i]!='*'&&str[i]!='+'&&str[i]!='-'&&str[i]!='/')
        {

            if(str[i]!=' ')
            {
                d=str[i]-'0';
                a=a*10+d;
            }
            i=i+1;
        }
    oper[0]=str[i];
        for(j=i+1;j<len-1;j++)
        {
           
             while(str[j]!='*'&&str[j]!='+'&&str[j]!='-'&&str[j]!='/'&&str[j]!='=')
             {
                if(str[j]!=' ')
                {
                d=str[j]-'0';
                b=b*10+d;
                }
                j=j+1;
             }
       
            if(str[j]!='=')
               oper[k]=str[j];
            char ch=oper[k-1];
            if(ch=='+')
                temp=a+b;
            if(ch=='-')
                temp=a-b;
            if(ch=='*')
                temp=a*b;
            if(ch=='/')
                temp=a/b;
            a=temp;
            
            b=0;
            k=k+1;
        }
        printf("%lld\n",a);

        gets(str);
}
    return 0;
}