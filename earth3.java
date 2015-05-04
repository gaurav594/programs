import java.util.Scanner;
class pay
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
String s=st.nextLine();
int l=s.length();
String s1="";
int c=0,i=0,j=0;
while(true)
{i=0;
for(j=0;j<l;j++)
{
if(s.charAt(j)=='-'&&s.charAt(j+1)=='>')
{
s1=s1+'.';
j=j+1;
}
else
{
s1=s1+s.charAt(j);
}
}
System.out.println(s1);
s1="";
if(s=="return 0;")
{
break;
}
else
{
s=st.nextLine();
l=s.length();
}
}



}
}