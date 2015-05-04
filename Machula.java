import java.io.*;
import java.util.*;
class Machula
{
public static boolean isInteger( String input )
{
   try
   {
      Integer.parseInt( input );
      return true;
   }
   catch( Exception e)
   {
      return false;
   }
}
public static void main(String args[]) throws IOException
{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
PrintWriter out=new PrintWriter(System.out);
int t=Integer.parseInt(in.readLine());
int k,i;
while(t-->0)
{    in.readLine();
	String s=in.readLine();
	StringTokenizer st=new StringTokenizer(s);
	int n=st.countTokens();
	String arr[]=new String[n];
	i=0;
	while(st.hasMoreTokens())
	{
	
		arr[i]=st.nextToken();
		i++;
	}
	if(!isInteger(arr[0]))
	{
		k=Math.abs(Integer.parseInt(arr[2])-Integer.parseInt(arr[4]));
		out.println(k+arr[1]+arr[2]+arr[3]+arr[4]);
	}
	if(!isInteger(arr[2]))
	{
		k=Math.abs(Integer.parseInt(arr[0])-Integer.parseInt(arr[4]));
		out.println(arr[0]+arr[1]+k+arr[3]+arr[4]);
	}
	if(!isInteger(arr[4]))
	{
		k=Math.abs(Integer.parseInt(arr[0])-Integer.parseInt(arr[2]));
		out.println(arr[0]+arr[1]+arr[2]+arr[3]+k);
	}

}
out.flush();
}
}
