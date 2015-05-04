import java.util.*;
class Token
{
public static void main(String args[])
{
Scanner br=new Scanner(System.in);
String name=br.nextLine();
StringTokenizer st=new StringTokenizer(name);
StringBuffer ab;
while(st.hasMoreTokens())
{
ab=new StringBuffer(st.nextToken());
System.out.print(ab.reverse()+" ");
}
System.out.println();
}

}