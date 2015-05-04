import java.io.*;
class Main
{
public static void main(String args[])throws IOException{
BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
String a=in.readLine();
String b=in.readLine();
char a1[]=new char[26];
char a2[]=new char[26];
int i,j,c=0;
for(i=0;i<a.length();i++)
	{
		a1[a.charAt(i)-'a']++;
	}
for(i=0;i<b.length();i++)
	{
		a2[b.charAt(i)-'a']++;
	}

for(j=0;j<26;j++)
	{
		c=c+a1[j] + a2[j] - 2*Math.min(a1[j],a2[j]);
		
	}

	System.out.println(c);
}
}