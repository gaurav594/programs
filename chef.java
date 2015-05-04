import java.util.*;
class Chef
{
public static void main(String args[])
{
Scanner st=new Scanner(System.in);
Scanner bb=new Scanner(System.in);
int t=st.nextInt();
for(int j=1;j<=t;j++)
{
String arrr="";
String s=bb.nextLine();
int l=s.length();
char arr[]=s.toCharArray();

for(int i=0;i<l;i++)
{
if(arr[i]=='0')
{
arrr+="-----";
}
else if(arr[i]=='1')
{
arrr+=".----";
}
else if(arr[i]=='2')
{
arrr+="..---";
}
else if(arr[i]=='3')
{
arrr+="...--";
}
else if(arr[i]=='4')
{
arrr+="....-";
}
else if(arr[i]=='5')
{
arrr+=".....";
}
else if(arr[i]=='6')
{
arrr+="-....";
}
else if(arr[i]=='7')
{
arrr+="--...";
}
else if(arr[i]=='8')
{
arrr+="---..";
}
else if(arr[i]=='9')
{
arrr+="----.";
}
}
System.out.println(arrr);
}
}
}