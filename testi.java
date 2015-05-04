import java.util.Scanner;
class Strev
{
public static void main(String args[])
{
Scanner in=new Scanner(System.in);
String s=in.nextLine();
char a[]=s.toCharArray();
int l=a.length;
int vis=new int[26];
int arr=new int[26];
for(int i=1;i<=l;i++)
{
arr[a[i]-97]++
}

System.out.println(l+a[1]);
}
}