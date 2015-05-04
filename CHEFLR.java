import java.io.*;
class Main{
public static void main(String args[])throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
PrintWriter out = new PrintWriter(new BufferedOutputStream(System.out));
int t=Integer.parseInt(in.readLine());
	while(t-->0)
		{
		 long root=1;
		 String s=in.readLine();
		 long l=s.length();
		 long r=1000000007;
		 int c=1;

			 for(int i=0;i<l;i++)
			  {		 
			  if(c%2!=0){
			   if(s.charAt(i)=='l')
					{
					root=(root*2)%r;
					c++;
					}
			    if(s.charAt(i)=='r')
				   {
				   root=((root*2)+2)%r;
				   c++;
				   }
			    }
				else
				{
				if(s.charAt(i)=='l')
					{
					root=((root*2)-1)%r;
					c++;
					}
			    if(s.charAt(i)=='r')
				   {
				   root=((root*2)+1)%r;
				   c++;
				   }
				}
			}
		  out.println(root);
		}
		out.flush();
}
}