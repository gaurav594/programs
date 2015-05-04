import java.util.*;
class Match
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
String string=st.nextLine();
String pattern=st.nextLine();
char a[]=string.toCharArray();
char b[]=pattern.toCharArray();
int position,e,d;
for(int i=0;i<=a.length-b.length;i++)
{
position=e=i;
for(d=0;d<b.length;d++)
{
if(b[d].equals(a[e]))
{
e++;
}
else
{
break;
}
}
if(d==b.length)
{
System.out.println("position found at"+position);
break;
}
}
}
}