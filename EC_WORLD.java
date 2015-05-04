import java.io.*;
class Main
{
public static void main(String args[]) throws IOException
{
BufferedReader st=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(st.readLine());
int i;
for(i=0;i<t;i++)
{
String p=st.readLine();
String q=st.readLine();
String w=p+p;
boolean b=w.contains(q);
if(b)
{
	System.out.println("Si");
}
else
{
	System.out.println("No");
}
}
}
}