import java.util.*;
import java.io.*;
class Main{
  public static void main(String args[]) throws IOException {
	BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
    String s=in.readLine();
     Set<Character> set = new HashSet<Character>();
	
     try{
        for(int i = 0; i<s.length(); i++){
		if(s.charAt(i)!=' ')
           set.add(Character.toLowerCase(s.charAt(i)));
        }
       if(set.size()==26)
	   {
	   System.out.println("pangram");
	   }
	   else
	   {
	   System.out.println("not pangram");
	   }
     }
     catch(Exception e){}
  }
}