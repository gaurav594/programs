import java.util.Scanner;
class Atoi
{
public static void main(String args[])
{
Scanner br=new Scanner(System.in);
String s=br.nextLine();
char arr[]=s.toCharArray();
int l=arr.length;
int res=0;
int i;
for(i=0;i<l;i++)
{
res=res*10+(int)arr[i]-(int)'0';
}
System.out.println(res);
}
}