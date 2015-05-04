
import java.io.*;
import java.io.PrintWriter;
import java.util.*;
class rev
{
public static void main(String args[])throws IOException
{
BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
PrintWriter out = new PrintWriter(System.out);
int o=0,j;
int t=Integer.parseInt(in.readLine());
for(o=0;o<t;o++)
{

String line=in.readLine();
StringTokenizer ab=new StringTokenizer(line);
int n=ab.countTokens();
String str[]=new String[n];

int i=0;
while(ab.hasMoreTokens())
{
str[i]=ab.nextToken();
i=i+1;
}
for(j=i-1;j>=0;j--)
{
out.print(str[j]+" ");
}
out.println();
}
out.flush();
}

}