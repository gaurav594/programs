import java.util.Scanner;
class Reverse
{ 
public static void main(String args[])
{ 
String s1=""; 
Scanner in=new Scanner(System.in); 
System.out.println("Enter a string"); 
String s=in.nextLine(); 
s=' '+s;
s=s+' ';
int l=s.length();
char ch[l]=s.toCharArray();
String sh="";
for(int i=l+2;i>=0;i--) 
{ 
while(ch[i]!=32) 
{ 
sh=sh+""; 
i++; 
} 
continue; 
} 
System.out.println(s1); 
} 
}