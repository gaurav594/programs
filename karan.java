import java.io.*;
class Main{
public static void main(String args[])throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
int t=Integer.parseInt(in.readLine());
while(t-->0){
		String str=in.readLine();
		String c="";
		int l=str.length();
		for(int i=0;i<str.length()-1;i++)
		{
		if(str.charAt(i)!=str.charAt(i+1))
			{
			c=c+str.charAt(i);
			}
		
		}
		System.out.println(c+str.charAt(l-1));
}
}
}